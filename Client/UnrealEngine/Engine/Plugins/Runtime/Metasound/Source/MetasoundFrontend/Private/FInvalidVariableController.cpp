// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 18

// ~FInvalidVariableController @ 14ad9e350

void __thiscall
Metasound::Frontend::FInvalidVariableController::~FInvalidVariableController
          (FInvalidVariableController *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014ad9e370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// FindAccessorNodes @ 14adb8a20

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidVariableController::FindAccessorNodes
          (FInvalidVariableController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindAccessorNodes @ 14adb8a40

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidVariableController::FindAccessorNodes
          (FInvalidVariableController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindDeferredAccessorNodes @ 14adb8f80

TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidVariableController::FindDeferredAccessorNodes
          (FInvalidVariableController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindDeferredAccessorNodes @ 14adb8fa0

TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidVariableController::FindDeferredAccessorNodes
          (FInvalidVariableController *this,
          TArray<TSharedRef<Metasound::Frontend::INodeController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindMutatorNode @ 14adb9450

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidVariableController::FindMutatorNode
          (FInvalidVariableController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindMutatorNode @ 14adb9470

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FInvalidVariableController::FindMutatorNode
          (FInvalidVariableController *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__)

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

// GetDataType @ 14adbd980

FName * __thiscall
Metasound::Frontend::FInvalidVariableController::GetDataType(FInvalidVariableController *this)

{
  return &::Invalid;
}

// GetID @ 14adbf180

FGuid * __thiscall
Metasound::Frontend::FInvalidVariableController::GetID
          (FInvalidVariableController *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = FrontendInvalidID;
  return __return_storage_ptr__;
}

// GetLiteral @ 14adc0660

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FInvalidVariableController::GetLiteral(FInvalidVariableController *this)

{
  undefined1 auStackX_8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `Metasound::Frontend::Invalid::GetInvalidLiteral'::__l2::<lambda_1>::operator()
                (auStackX_8,&Literal);
      atexit(`Metasound::Frontend::Invalid::GetInvalidLiteral'::__l2::
             _dynamic_atexit_destructor_for__Literal__);
      _Init_thread_footer(&::_TSS0);
      return &Literal;
    }
  }
  return &Literal;
}

// GetName @ 14adc0820

FName * __thiscall
Metasound::Frontend::FInvalidVariableController::GetName(FInvalidVariableController *this)

{
  return &::Invalid;
}

// GetOwningGraph @ 14adc2470

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
Metasound::Frontend::FInvalidVariableController::GetOwningGraph
          (FInvalidVariableController *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__)

{
  IGraphController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOwningGraph @ 14adc2490

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
Metasound::Frontend::FInvalidVariableController::GetOwningGraph
          (FInvalidVariableController *this,
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

// IsValid @ 14adc7e60

bool __thiscall
Metasound::Frontend::FInvalidVariableController::IsValid(FInvalidVariableController *this)

{
  return false;
}

// SetLiteral @ 14add09c0

bool __thiscall
Metasound::Frontend::FInvalidVariableController::SetLiteral
          (FInvalidVariableController *this,FMetasoundFrontendLiteral *param_1)

{
  return false;
}

// SetName @ 14add0a00

void __thiscall
Metasound::Frontend::FInvalidVariableController::SetName
          (FInvalidVariableController *this,FName *param_1)

{
  return;
}

// ShareAccess @ 14add1080

FDocumentAccess * __thiscall
Metasound::Frontend::FInvalidVariableController::ShareAccess
          (FInvalidVariableController *this,FDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x400);
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ShareAccess @ 14add10b0

FConstDocumentAccess * __thiscall
Metasound::Frontend::FInvalidVariableController::ShareAccess
          (FInvalidVariableController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x200);
  FConstDocumentAccess::FConstDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

