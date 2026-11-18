// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 75

// ~FInvalidGraphController @ 14ad9e290

void __thiscall
Metasound::Frontend::FInvalidGraphController::~FInvalidGraphController
          (FInvalidGraphController *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ad9e2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AddDuplicateNode @ 14ada5e70

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::AddDuplicateNode
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          INodeController *param_1)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddInputVertex @ 14ada5ed0

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::AddInputVertex
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FMetasoundFrontendClassInput *param_1)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddNode @ 14ada5f00

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::AddNode
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FMetasoundFrontendClassMetadata *param_1,FGuid *param_2)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddNode @ 14ada5f20

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::AddNode
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FNodeClassRegistryKey *param_1,FGuid *param_2)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddOutputVertex @ 14ada5f60

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::AddOutputVertex
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FMetasoundFrontendClassOutput *param_1)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddOutputVertex @ 14ada5f80

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::AddOutputVertex
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FName *param_1,
          FName param_2)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddTemplateNode @ 14ada5fa0

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::AddTemplateNode
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FNodeClassRegistryKey *param_1,FMetasoundFrontendNodeInterface *param_2,FGuid *param_3)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddTemplateNode @ 14ada5fc0

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::AddTemplateNode
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          INodeTemplate *param_1,FNodeTemplateGenerateInterfaceParams *param_2,FGuid *param_3)

{
  FScriptContainerElement *pFVar1;
  
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  pFVar1 = (param_2->OutputsToConnect).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->InputsToConnect).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// AddVariable @ 14ada6150

TSharedRef<Metasound::Frontend::IVariableController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::AddVariable
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::IVariableController,1> *__return_storage_ptr__,
          FName *param_1)

{
  IVariableController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddVariableAccessorNode @ 14ada6170

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::AddVariableAccessorNode
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FGuid *param_1)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddVariableDeferredAccessorNode @ 14ada6190

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::AddVariableDeferredAccessorNode
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FGuid *param_1)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ClearGraph @ 14ada76e0

void __thiscall
Metasound::Frontend::FInvalidGraphController::ClearGraph(FInvalidGraphController *this)

{
  return;
}

// ClearLiteralForInput @ 14ada7720

bool __thiscall
Metasound::Frontend::FInvalidGraphController::ClearLiteralForInput
          (FInvalidGraphController *this,FName *param_1,FGuid *param_2)

{
  return false;
}

// ContainsInputVertex @ 14ada81c0

bool __thiscall
Metasound::Frontend::FInvalidGraphController::ContainsInputVertex
          (FInvalidGraphController *this,FName *param_1,FName *param_2)

{
  return false;
}

// ContainsInputVertexWithName @ 14ada81d0

bool __thiscall
Metasound::Frontend::FInvalidGraphController::ContainsInputVertexWithName
          (FInvalidGraphController *this,FName *param_1)

{
  return false;
}

// ContainsOutputVertex @ 14ada81e0

bool __thiscall
Metasound::Frontend::FInvalidGraphController::ContainsOutputVertex
          (FInvalidGraphController *this,FName *param_1,FName *param_2)

{
  return false;
}

// ContainsOutputVertexWithName @ 14ada81f0

bool __thiscall
Metasound::Frontend::FInvalidGraphController::ContainsOutputVertexWithName
          (FInvalidGraphController *this,FName *param_1)

{
  return false;
}

// CreateEmptySubgraph @ 14adab410

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::CreateEmptySubgraph
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FMetasoundFrontendClassMetadata *param_1)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindClassInputWithName @ 14adb8ae0

TAccessPtr<FMetasoundFrontendClassInput_const_> * __thiscall
Metasound::Frontend::FInvalidGraphController::FindClassInputWithName
          (FInvalidGraphController *this,
          TAccessPtr<FMetasoundFrontendClassInput_const_> *__return_storage_ptr__,FName *param_1)

{
  TAccessPtr<FMetasoundFrontendClassInput_const_>::TAccessPtr<FMetasoundFrontendClassInput_const_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindClassOutputWithName @ 14adb8b00

TAccessPtr<FMetasoundFrontendClassOutput_const_> * __thiscall
Metasound::Frontend::FInvalidGraphController::FindClassOutputWithName
          (FInvalidGraphController *this,
          TAccessPtr<FMetasoundFrontendClassOutput_const_> *__return_storage_ptr__,FName *param_1)

{
  TAccessPtr<FMetasoundFrontendClassOutput_const_>::TAccessPtr<FMetasoundFrontendClassOutput_const_>
            (__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindInputDescriptionWithName @ 14adb9100

FMetasoundFrontendClassInput * __thiscall
Metasound::Frontend::FInvalidGraphController::FindInputDescriptionWithName
          (FInvalidGraphController *this,FName *param_1)

{
  return (FMetasoundFrontendClassInput *)0x0;
}

// FindInputDescriptionWithVertexID @ 14adb9110

FMetasoundFrontendClassInput * __thiscall
Metasound::Frontend::FInvalidGraphController::FindInputDescriptionWithVertexID
          (FInvalidGraphController *this,FGuid *param_1)

{
  return (FMetasoundFrontendClassInput *)0x0;
}

// FindOrAddVariableMutatorNode @ 14adb9540

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::FindOrAddVariableMutatorNode
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FGuid *param_1)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindOutputDescriptionWithName @ 14adb9560

FMetasoundFrontendClassOutput * __thiscall
Metasound::Frontend::FInvalidGraphController::FindOutputDescriptionWithName
          (FInvalidGraphController *this,FName *param_1)

{
  return (FMetasoundFrontendClassOutput *)0x0;
}

// FindOutputDescriptionWithVertexID @ 14adb9570

FMetasoundFrontendClassOutput * __thiscall
Metasound::Frontend::FInvalidGraphController::FindOutputDescriptionWithVertexID
          (FInvalidGraphController *this,FGuid *param_1)

{
  return (FMetasoundFrontendClassOutput *)0x0;
}

// FindVariable @ 14adb9a40

TSharedRef<Metasound::Frontend::IVariableController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::FindVariable
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::IVariableController,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  IVariableController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindVariable @ 14adb9a60

TSharedRef<Metasound::Frontend::IVariableController_const_,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::FindVariable
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::IVariableController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IVariableController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::IVariableController,1> local_18;
  
  pTVar2 = IVariableController::GetInvalidHandle(&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FindVariableContainingNode @ 14adb9ab0

TSharedRef<Metasound::Frontend::IVariableController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::FindVariableContainingNode
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::IVariableController,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  IVariableController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindVariableContainingNode @ 14adb9ad0

TSharedRef<Metasound::Frontend::IVariableController_const_,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::FindVariableContainingNode
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::IVariableController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IVariableController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::IVariableController,1> local_18;
  
  pTVar2 = IVariableController::GetInvalidHandle(&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetClassID @ 14adbd350

FGuid * __thiscall
Metasound::Frontend::FInvalidGraphController::GetClassID
          (FInvalidGraphController *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = FrontendInvalidID;
  return __return_storage_ptr__;
}

// GetConstInputNodes @ 14adbd570

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidGraphController::GetConstInputNodes
          (FInvalidGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetConstNodes @ 14adbd600

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidGraphController::GetConstNodes
          (FInvalidGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetConstOutputNodes @ 14adbd620

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidGraphController::GetConstOutputNodes
          (FInvalidGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDefaultInput @ 14adbddb0

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FInvalidGraphController::GetDefaultInput
          (FInvalidGraphController *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          FGuid *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->field_0x3 = 0;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDefaultInput @ 14adbddf0

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FInvalidGraphController::GetDefaultInput
          (FInvalidGraphController *this,FMetasoundFrontendLiteral *__return_storage_ptr__,
          FGuid *param_1,TArrayView<FGuid_const_,int> *param_2)

{
  *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
  __return_storage_ptr__->field_0x3 = 0;
  __return_storage_ptr__->Type = None;
  __return_storage_ptr__->AsNumDefault = 0;
  (__return_storage_ptr__->AsBoolean).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsBoolean).ArrayNum = 0;
  (__return_storage_ptr__->AsBoolean).ArrayMax = 0;
  (__return_storage_ptr__->AsInteger).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsInteger).ArrayNum = 0;
  (__return_storage_ptr__->AsInteger).ArrayMax = 0;
  (__return_storage_ptr__->AsFloat).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsFloat).ArrayNum = 0;
  (__return_storage_ptr__->AsFloat).ArrayMax = 0;
  (__return_storage_ptr__->AsString).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsString).ArrayNum = 0;
  (__return_storage_ptr__->AsString).ArrayMax = 0;
  (__return_storage_ptr__->AsUObject).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AsUObject).ArrayNum = 0;
  (__return_storage_ptr__->AsUObject).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetGraphMetadata @ 14adbefa0

FMetasoundFrontendClassMetadata * __thiscall
Metasound::Frontend::FInvalidGraphController::GetGraphMetadata(FInvalidGraphController *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&::Invalid);
      _Init_thread_footer(&::_TSS0);
      return &::Invalid;
    }
  }
  return &::Invalid;
}

// GetGraphPresetOptions @ 14adbefb0

FMetasoundFrontendGraphClassPresetOptions * __thiscall
Metasound::Frontend::FInvalidGraphController::GetGraphPresetOptions(FInvalidGraphController *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidGraphClassPresetOptions'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetInputNodeWithName @ 14adbf470

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetInputNodeWithName
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FName *param_1)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInputNodeWithName @ 14adbf490

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetInputNodeWithName
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__,
          FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::INodeController,1> local_18;
  
  pTVar2 = INodeController::GetInvalidHandle(&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetInputNodes @ 14adbf4e0

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetInputNodes
          (FInvalidGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetInputVertexNames @ 14adbf580

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetInputVertexNames
          (FInvalidGraphController *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetInputsInheritingDefault @ 14adbf650

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetInputsInheritingDefault
          (FInvalidGraphController *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidNameSet'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetNodeWithID @ 14adc1fc0

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetNodeWithID
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FGuid *param_1)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetNodeWithID @ 14adc1fe0

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetNodeWithID
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::INodeController,1> local_18;
  
  pTVar2 = INodeController::GetInvalidHandle(&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetNodes @ 14adc2030

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetNodes
          (FInvalidGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOutputNodeWithName @ 14adc22c0

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetOutputNodeWithName
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,FName *param_1)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOutputNodeWithName @ 14adc22e0

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetOutputNodeWithName
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__,
          FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::INodeController,1> local_18;
  
  pTVar2 = INodeController::GetInvalidHandle(&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetOutputNodes @ 14adc2330

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetOutputNodes
          (FInvalidGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOutputVertexNames @ 14adc2350

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetOutputVertexNames
          (FInvalidGraphController *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPreferredLiteralTypeForInputVertex @ 14adc2540

ELiteralType __thiscall
Metasound::Frontend::FInvalidGraphController::GetPreferredLiteralTypeForInputVertex
          (FInvalidGraphController *this,FName *param_1)

{
  return Invalid;
}

// GetSupportedClassForInputVertex @ 14adc2f30

UClass * __thiscall
Metasound::Frontend::FInvalidGraphController::GetSupportedClassForInputVertex
          (FInvalidGraphController *this,FName *param_1)

{
  return (UClass *)0x0;
}

// GetVariables @ 14adc3be0

TArray<TSharedRef<Metasound::Frontend::IVariableController,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidGraphController::GetVariables
          (FInvalidGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::IVariableController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetVariables @ 14adc3c00

TArray<TSharedRef<Metasound::Frontend::IVariableController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidGraphController::GetVariables
          (FInvalidGraphController *this,
          TArray<TSharedRef<Metasound::Frontend::IVariableController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetVertexIDForInputVertex @ 14adc3ea0

FGuid * __thiscall
Metasound::Frontend::FInvalidGraphController::GetVertexIDForInputVertex
          (FInvalidGraphController *this,FGuid *__return_storage_ptr__,FName *param_1)

{
  *__return_storage_ptr__ = FrontendInvalidID;
  return __return_storage_ptr__;
}

// GetVertexIDForOutputVertex @ 14adc3ec0

FGuid * __thiscall
Metasound::Frontend::FInvalidGraphController::GetVertexIDForOutputVertex
          (FInvalidGraphController *this,FGuid *__return_storage_ptr__,FName *param_1)

{
  *__return_storage_ptr__ = FrontendInvalidID;
  return __return_storage_ptr__;
}

// IsValid @ 14adc7e20

bool __thiscall Metasound::Frontend::FInvalidGraphController::IsValid(FInvalidGraphController *this)

{
  return false;
}

// IterateConstNodes @ 14adc81b0

void __thiscall
Metasound::Frontend::FInvalidGraphController::IterateConstNodes
          (FInvalidGraphController *this,
          TFunctionRef<void___cdecl(TSharedRef<Metasound::Frontend::INodeController_const_,1>)>
          *param_1,EMetasoundFrontendClassType param_2)

{
  return;
}

// IterateNodes @ 14adc86b0

void __thiscall
Metasound::Frontend::FInvalidGraphController::IterateNodes
          (FInvalidGraphController *this,
          TFunctionRef<void___cdecl(TSharedRef<Metasound::Frontend::INodeController,1>)> *param_1,
          EMetasoundFrontendClassType param_2)

{
  return;
}

// RemoveInputVertex @ 14adcf080

bool __thiscall
Metasound::Frontend::FInvalidGraphController::RemoveInputVertex
          (FInvalidGraphController *this,FName *param_1)

{
  return false;
}

// RemoveNode @ 14adcf0a0

bool __thiscall
Metasound::Frontend::FInvalidGraphController::RemoveNode
          (FInvalidGraphController *this,INodeController *param_1)

{
  return false;
}

// RemoveOutputVertex @ 14adcf0c0

bool __thiscall
Metasound::Frontend::FInvalidGraphController::RemoveOutputVertex
          (FInvalidGraphController *this,FName *param_1)

{
  return false;
}

// RemoveVariable @ 14adcf0e0

bool __thiscall
Metasound::Frontend::FInvalidGraphController::RemoveVariable
          (FInvalidGraphController *this,FGuid *param_1)

{
  return false;
}

// SetDefaultInput @ 14add0830

bool __thiscall
Metasound::Frontend::FInvalidGraphController::SetDefaultInput
          (FInvalidGraphController *this,FGuid *param_1,FMetasoundFrontendLiteral *param_2)

{
  return false;
}

// SetDefaultInput @ 14add0840

bool __thiscall
Metasound::Frontend::FInvalidGraphController::SetDefaultInput
          (FInvalidGraphController *this,FGuid *param_1,FMetasoundFrontendLiteral *param_2,
          TArrayView<FGuid_const_,int> *param_3)

{
  return false;
}

// SetDefaultInputToDefaultLiteralOfType @ 14add0850

bool __thiscall
Metasound::Frontend::FInvalidGraphController::SetDefaultInputToDefaultLiteralOfType
          (FInvalidGraphController *this,FGuid *param_1)

{
  return false;
}

// SetGraphMetadata @ 14add0960

void __thiscall
Metasound::Frontend::FInvalidGraphController::SetGraphMetadata
          (FInvalidGraphController *this,FMetasoundFrontendClassMetadata *param_1)

{
  return;
}

// SetGraphPresetOptions @ 14add0970

void __thiscall
Metasound::Frontend::FInvalidGraphController::SetGraphPresetOptions
          (FInvalidGraphController *this,FMetasoundFrontendGraphClassPresetOptions *param_1)

{
  return;
}

// SetInputInheritsDefault @ 14add0980

bool __thiscall
Metasound::Frontend::FInvalidGraphController::SetInputInheritsDefault
          (FInvalidGraphController *this,FName param_1,bool param_2)

{
  return false;
}

// SetInputsInheritingDefault @ 14add09a0

void __thiscall
Metasound::Frontend::FInvalidGraphController::SetInputsInheritingDefault
          (FInvalidGraphController *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// ShareAccess @ 14add0f00

FDocumentAccess * __thiscall
Metasound::Frontend::FInvalidGraphController::ShareAccess
          (FInvalidGraphController *this,FDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x400);
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ShareAccess @ 14add0f30

FConstDocumentAccess * __thiscall
Metasound::Frontend::FInvalidGraphController::ShareAccess
          (FInvalidGraphController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x200);
  FConstDocumentAccess::FConstDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// UpdateInterfaceChangeID @ 14add4860

void __thiscall
Metasound::Frontend::FInvalidGraphController::UpdateInterfaceChangeID(FInvalidGraphController *this)

{
  return;
}

// GetOwningDocument @ 14ae3c8b0

TSharedRef<Metasound::Frontend::IDocumentController,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetOwningDocument
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::IDocumentController,1> *__return_storage_ptr__)

{
  IDocumentController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOwningDocument @ 14ae3c8d0

TSharedRef<Metasound::Frontend::IDocumentController_const_,1> * __thiscall
Metasound::Frontend::FInvalidGraphController::GetOwningDocument
          (FInvalidGraphController *this,
          TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IDocumentController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::IDocumentController,1> local_18;
  
  pTVar2 = IDocumentController::GetInvalidHandle(&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

