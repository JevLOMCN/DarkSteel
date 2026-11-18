// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 21

// ~FInvalidOutputController @ 14ad9e320

void __thiscall
Metasound::Frontend::FInvalidOutputController::~FInvalidOutputController
          (FInvalidOutputController *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014ad9e340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// CanConnectTo @ 14ada75d0

FConnectability * __thiscall
Metasound::Frontend::FInvalidOutputController::CanConnectTo
          (FInvalidOutputController *this,FConnectability *__return_storage_ptr__,
          IInputController *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->field_0x5 = 0;
  __return_storage_ptr__->field_0x7 = 0;
  __return_storage_ptr__->Reason = None;
  (__return_storage_ptr__->PossibleConverterNodeClasses).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->PossibleConverterNodeClasses).ArrayNum = 0;
  (__return_storage_ptr__->PossibleConverterNodeClasses).ArrayMax = 0;
  __return_storage_ptr__->Connectable = No;
  return __return_storage_ptr__;
}

// Connect @ 14ada80b0

bool __thiscall
Metasound::Frontend::FInvalidOutputController::Connect
          (FInvalidOutputController *this,IInputController *param_1)

{
  return false;
}

// ConnectWithConverterNode @ 14ada80d0

bool __thiscall
Metasound::Frontend::FInvalidOutputController::ConnectWithConverterNode
          (FInvalidOutputController *this,IInputController *param_1,FConverterNodeClassInfo *param_2
          )

{
  return false;
}

// Disconnect @ 14adb6a30

bool __thiscall
Metasound::Frontend::FInvalidOutputController::Disconnect
          (FInvalidOutputController *this,IInputController *param_1)

{
  return false;
}

// Disconnect @ 14adb6a40

bool __thiscall
Metasound::Frontend::FInvalidOutputController::Disconnect(FInvalidOutputController *this)

{
  return false;
}

// GetConnectedInputs @ 14adbd3c0

TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::Frontend::FInvalidOutputController::GetConnectedInputs
          (FInvalidOutputController *this,
          TArray<TSharedRef<Metasound::Frontend::IInputController,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetConstConnectedInputs @ 14adbd450

TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_> *
__thiscall
Metasound::Frontend::FInvalidOutputController::GetConstConnectedInputs
          (FInvalidOutputController *this,
          TArray<TSharedRef<Metasound::Frontend::IInputController_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDataType @ 14adbd970

FName * __thiscall
Metasound::Frontend::FInvalidOutputController::GetDataType(FInvalidOutputController *this)

{
  return &::Invalid;
}

// GetID @ 14adbf160

FGuid * __thiscall
Metasound::Frontend::FInvalidOutputController::GetID
          (FInvalidOutputController *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = FrontendInvalidID;
  return __return_storage_ptr__;
}

// GetName @ 14adc0810

FName * __thiscall
Metasound::Frontend::FInvalidOutputController::GetName(FInvalidOutputController *this)

{
  return &::Invalid;
}

// GetOwningNodeID @ 14adc2520

FGuid * __thiscall
Metasound::Frontend::FInvalidOutputController::GetOwningNodeID
          (FInvalidOutputController *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = FrontendInvalidID;
  return __return_storage_ptr__;
}

// GetVertexAccessType @ 14adc3e80

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FInvalidOutputController::GetVertexAccessType(FInvalidOutputController *this)

{
  return Unset;
}

// IsConnected @ 14adc6c10

bool __thiscall
Metasound::Frontend::FInvalidOutputController::IsConnected(FInvalidOutputController *this)

{
  return false;
}

// IsConnectionUserModifiable @ 14adc6c30

bool __thiscall
Metasound::Frontend::FInvalidOutputController::IsConnectionUserModifiable
          (FInvalidOutputController *this)

{
  return false;
}

// IsValid @ 14adc7e50

bool __thiscall
Metasound::Frontend::FInvalidOutputController::IsValid(FInvalidOutputController *this)

{
  return false;
}

// SetName @ 14add09f0

void __thiscall
Metasound::Frontend::FInvalidOutputController::SetName
          (FInvalidOutputController *this,FName *param_1)

{
  return;
}

// ShareAccess @ 14add1020

FDocumentAccess * __thiscall
Metasound::Frontend::FInvalidOutputController::ShareAccess
          (FInvalidOutputController *this,FDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x400);
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ShareAccess @ 14add1050

FConstDocumentAccess * __thiscall
Metasound::Frontend::FInvalidOutputController::ShareAccess
          (FInvalidOutputController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x200);
  FConstDocumentAccess::FConstDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOwningNode @ 14ae3ca60

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidOutputController::GetOwningNode
          (FInvalidOutputController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOwningNode @ 14ae3ca80

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FInvalidOutputController::GetOwningNode
          (FInvalidOutputController *this,
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

