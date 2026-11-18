// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 48

// ~FInvalidNodeController @ 14ad9e2f0

void __thiscall
Metasound::Frontend::FInvalidNodeController::~FInvalidNodeController(FInvalidNodeController *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014ad9e310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AddInput @ 14ada5eb0

TSharedRef<Metasound::Frontend::IInputController,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::AddInput
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController,1> *__return_storage_ptr__,FName *param_1
          ,FMetasoundFrontendLiteral *param_2)

{
  IInputController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AddOutput @ 14ada5f40

TSharedRef<Metasound::Frontend::IInputController,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::AddOutput
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController,1> *__return_storage_ptr__,FName *param_1
          ,FMetasoundFrontendLiteral *param_2)

{
  IInputController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CanAddInput @ 14ada7580

bool __thiscall
Metasound::Frontend::FInvalidNodeController::CanAddInput
          (FInvalidNodeController *this,FName *param_1)

{
  return false;
}

// CanAddOutput @ 14ada7590

bool __thiscall
Metasound::Frontend::FInvalidNodeController::CanAddOutput
          (FInvalidNodeController *this,FName *param_1)

{
  return false;
}

// ClearInputLiteral @ 14ada76f0

bool __thiscall
Metasound::Frontend::FInvalidNodeController::ClearInputLiteral
          (FInvalidNodeController *this,FGuid *param_1)

{
  return false;
}

// GetClassID @ 14adbd370

FGuid * __thiscall
Metasound::Frontend::FInvalidNodeController::GetClassID
          (FInvalidNodeController *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = FrontendInvalidID;
  return __return_storage_ptr__;
}

// GetClassInterface @ 14adbd3a0

FMetasoundFrontendClassInterface * __thiscall
Metasound::Frontend::FInvalidNodeController::GetClassInterface(FInvalidNodeController *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidClassInterface'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetClassMetadata @ 14adbd3b0

FMetasoundFrontendClassMetadata * __thiscall
Metasound::Frontend::FInvalidNodeController::GetClassMetadata(FInvalidNodeController *this)

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

// GetConstInputWithVertexName @ 14adbd590

TSharedRef<Metasound::Frontend::IInputController_const_,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetConstInputWithVertexName
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController_const_,1> *__return_storage_ptr__,
          FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::IInputController,1> local_18;
  
  pTVar2 = IInputController::GetInvalidHandle(&local_18);
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

// GetConstInputs @ 14adbd5e0

TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidNodeController::GetConstInputs
          (FInvalidNodeController *this,
          TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetConstOutputWithVertexName @ 14adbd640

TSharedRef<Metasound::Frontend::IOutputController_const_,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetConstOutputWithVertexName
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IOutputController_const_,1> *__return_storage_ptr__,
          FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IOutputController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::IOutputController,1> local_18;
  
  pTVar2 = IOutputController::GetInvalidHandle(&local_18);
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

// GetConstOutputs @ 14adbd690

TArray<TSharedRef<Metasound::Frontend::IOutputController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidNodeController::GetConstOutputs
          (FInvalidNodeController *this,
          TArray<TSharedRef<Metasound::Frontend::IOutputController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetID @ 14adbf140

FGuid * __thiscall
Metasound::Frontend::FInvalidNodeController::GetID
          (FInvalidNodeController *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = FrontendInvalidID;
  return __return_storage_ptr__;
}

// GetInputLiteral @ 14adbf280

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FInvalidNodeController::GetInputLiteral
          (FInvalidNodeController *this,FGuid *param_1)

{
  return (FMetasoundFrontendLiteral *)0x0;
}

// GetInputWithID @ 14adbf5a0

TSharedRef<Metasound::Frontend::IInputController,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetInputWithID
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController,1> *__return_storage_ptr__,FGuid *param_1
          )

{
  IInputController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInputWithID @ 14adbf5c0

TSharedRef<Metasound::Frontend::IInputController_const_,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetInputWithID
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IInputController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::IInputController,1> local_18;
  
  pTVar2 = IInputController::GetInvalidHandle(&local_18);
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

// GetInputWithVertexName @ 14adbf610

TSharedRef<Metasound::Frontend::IInputController,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetInputWithVertexName
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IInputController,1> *__return_storage_ptr__,FName *param_1
          )

{
  IInputController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInputs @ 14adbf630

TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetInputs
          (FInvalidNodeController *this,
          TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetInterfaceVersion @ 14adbfb00

FMetasoundFrontendVersion * __thiscall
Metasound::Frontend::FInvalidNodeController::GetInterfaceVersion(FInvalidNodeController *this)

{
  return &InvalidVersion;
}

// GetNodeConfiguration @ 14adc0930

TConstStructView<FMetaSoundFrontendNodeConfiguration> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetNodeConfiguration
          (FInvalidNodeController *this,
          TConstStructView<FMetaSoundFrontendNodeConfiguration> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// GetNodeInterface @ 14adc1fa0

FMetasoundFrontendNodeInterface * __thiscall
Metasound::Frontend::FInvalidNodeController::GetNodeInterface(FInvalidNodeController *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`Metasound::Frontend::Invalid::GetInvalidNodeInterface'::__l2::
             _dynamic_atexit_destructor_for__Invalid__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Invalid;
}

// GetNodeName @ 14adc1fb0

FName * __thiscall
Metasound::Frontend::FInvalidNodeController::GetNodeName(FInvalidNodeController *this)

{
  return &::Invalid;
}

// GetNumInputs @ 14adc2050

int __thiscall
Metasound::Frontend::FInvalidNodeController::GetNumInputs(FInvalidNodeController *this)

{
  return 0;
}

// GetNumOutputs @ 14adc2060

int __thiscall
Metasound::Frontend::FInvalidNodeController::GetNumOutputs(FInvalidNodeController *this)

{
  return 0;
}

// GetOutputWithID @ 14adc2370

TSharedRef<Metasound::Frontend::IOutputController,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetOutputWithID
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IOutputController,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  IOutputController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOutputWithID @ 14adc2390

TSharedRef<Metasound::Frontend::IOutputController_const_,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetOutputWithID
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IOutputController_const_,1> *__return_storage_ptr__,
          FGuid *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IOutputController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::IOutputController,1> local_18;
  
  pTVar2 = IOutputController::GetInvalidHandle(&local_18);
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

// GetOutputWithVertexName @ 14adc23e0

TSharedRef<Metasound::Frontend::IOutputController,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetOutputWithVertexName
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IOutputController,1> *__return_storage_ptr__,
          FName *param_1)

{
  IOutputController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOutputs @ 14adc2400

TArray<TSharedRef<Metasound::Frontend::IOutputController,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidNodeController::GetOutputs
          (FInvalidNodeController *this,
          TArray<TSharedRef<Metasound::Frontend::IOutputController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOwningGraphClassID @ 14adc24e0

FGuid * __thiscall
Metasound::Frontend::FInvalidNodeController::GetOwningGraphClassID
          (FInvalidNodeController *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = FrontendInvalidID;
  return __return_storage_ptr__;
}

// IsInterfaceMember @ 14adc7450

bool __thiscall
Metasound::Frontend::FInvalidNodeController::IsInterfaceMember(FInvalidNodeController *this)

{
  return false;
}

// IsValid @ 14adc7e40

bool __thiscall Metasound::Frontend::FInvalidNodeController::IsValid(FInvalidNodeController *this)

{
  return false;
}

// IterateConstInputs @ 14adc8180

void __thiscall
Metasound::Frontend::FInvalidNodeController::IterateConstInputs
          (FInvalidNodeController *this,
          TUniqueFunction<void___cdecl(TSharedRef<Metasound::Frontend::IInputController_const_,1>)>
          *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014adc8198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// IterateConstOutputs @ 14adc81c0

void __thiscall
Metasound::Frontend::FInvalidNodeController::IterateConstOutputs
          (FInvalidNodeController *this,
          TUniqueFunction<void___cdecl(TSharedRef<Metasound::Frontend::IOutputController_const_,1>)>
          *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014adc81d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// IterateInputs @ 14adc8680

void __thiscall
Metasound::Frontend::FInvalidNodeController::IterateInputs
          (FInvalidNodeController *this,
          TUniqueFunction<void___cdecl(TSharedRef<Metasound::Frontend::IInputController,1>)>
          *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014adc8698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// IterateOutputs @ 14adc86c0

void __thiscall
Metasound::Frontend::FInvalidNodeController::IterateOutputs
          (FInvalidNodeController *this,
          TUniqueFunction<void___cdecl(TSharedRef<Metasound::Frontend::IOutputController,1>)>
          *param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x00014adc86d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// RemoveInput @ 14adcf070

bool __thiscall
Metasound::Frontend::FInvalidNodeController::RemoveInput
          (FInvalidNodeController *this,FGuid *param_1)

{
  return false;
}

// RemoveOutput @ 14adcf0b0

bool __thiscall
Metasound::Frontend::FInvalidNodeController::RemoveOutput
          (FInvalidNodeController *this,FGuid *param_1)

{
  return false;
}

// ReplaceWithVersion @ 14adcf0f0

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::ReplaceWithVersion
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FMetasoundFrontendVersionNumber *param_1,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TTuple<FName,FName>,TSizedDefaultAllocator<32>_> *param_3)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// SetInputLiteral @ 14add0990

void __thiscall
Metasound::Frontend::FInvalidNodeController::SetInputLiteral
          (FInvalidNodeController *this,FMetasoundFrontendVertexLiteral *param_1)

{
  return;
}

// SetNodeConfiguration @ 14add0bc0

void __thiscall
Metasound::Frontend::FInvalidNodeController::SetNodeConfiguration
          (FInvalidNodeController *this,
          TInstancedStruct<FMetaSoundFrontendNodeConfiguration> *param_1)

{
  FInstancedStruct::Reset(&param_1->InstancedStruct);
  return;
}

// SetNodeName @ 14add0bd0

void __thiscall
Metasound::Frontend::FInvalidNodeController::SetNodeName
          (FInvalidNodeController *this,FName *param_1)

{
  return;
}

// ShareAccess @ 14add0fc0

FDocumentAccess * __thiscall
Metasound::Frontend::FInvalidNodeController::ShareAccess
          (FInvalidNodeController *this,FDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x400);
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ShareAccess @ 14add0ff0

FConstDocumentAccess * __thiscall
Metasound::Frontend::FInvalidNodeController::ShareAccess
          (FInvalidNodeController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x200);
  FConstDocumentAccess::FConstDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AsGraph @ 14ae248a0

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::AsGraph
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__)

{
  IGraphController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// AsGraph @ 14ae248c0

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::AsGraph
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IGraphController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::IGraphController,1> local_18;
  
  pTVar2 = IGraphController::GetInvalidHandle(&local_18);
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

// GetOwningGraph @ 14ae3c920

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetOwningGraph
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__)

{
  IGraphController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOwningGraph @ 14ae3c940

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
Metasound::Frontend::FInvalidNodeController::GetOwningGraph
          (FInvalidNodeController *this,
          TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<Metasound::Frontend::IGraphController,1> *pTVar2;
  TSharedRef<Metasound::Frontend::IGraphController,1> local_18;
  
  pTVar2 = IGraphController::GetInvalidHandle(&local_18);
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

