// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 26

// ~FInvalidInputController @ 14ad9e2c0

void __thiscall
Metasound::Frontend::FInvalidInputController::~FInvalidInputController
          (FInvalidInputController *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014ad9e2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// CanConnectTo @ 14ada75a0

FConnectability * __thiscall
Metasound::Frontend::FInvalidInputController::CanConnectTo
          (FInvalidInputController *this,FConnectability *__return_storage_ptr__,
          IOutputController *param_1)

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

// ClearConnectedObjectLiterals @ 14ada76d0

void __thiscall
Metasound::Frontend::FInvalidInputController::ClearConnectedObjectLiterals
          (FInvalidInputController *this)

{
  return;
}

// ClearLiteral @ 14ada7710

bool __thiscall
Metasound::Frontend::FInvalidInputController::ClearLiteral(FInvalidInputController *this)

{
  return false;
}

// Connect @ 14ada80a0

bool __thiscall
Metasound::Frontend::FInvalidInputController::Connect
          (FInvalidInputController *this,IOutputController *param_1)

{
  return false;
}

// ConnectWithConverterNode @ 14ada80c0

bool __thiscall
Metasound::Frontend::FInvalidInputController::ConnectWithConverterNode
          (FInvalidInputController *this,IOutputController *param_1,FConverterNodeClassInfo *param_2
          )

{
  return false;
}

// Disconnect @ 14adb6a10

bool __thiscall
Metasound::Frontend::FInvalidInputController::Disconnect
          (FInvalidInputController *this,IOutputController *param_1)

{
  return false;
}

// Disconnect @ 14adb6a20

bool __thiscall
Metasound::Frontend::FInvalidInputController::Disconnect(FInvalidInputController *this)

{
  return false;
}

// GetClassDefaultLiteral @ 14adbd340

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FInvalidInputController::GetClassDefaultLiteral(FInvalidInputController *this)

{
  return (FMetasoundFrontendLiteral *)0x0;
}

// GetConnectedOutput @ 14adbd3e0

TSharedRef<Metasound::Frontend::IOutputController,1> * __thiscall
Metasound::Frontend::FInvalidInputController::GetConnectedOutput
          (FInvalidInputController *this,
          TSharedRef<Metasound::Frontend::IOutputController,1> *__return_storage_ptr__)

{
  IOutputController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConnectedOutput @ 14adbd400

TSharedRef<Metasound::Frontend::IOutputController_const_,1> * __thiscall
Metasound::Frontend::FInvalidInputController::GetConnectedOutput
          (FInvalidInputController *this,
          TSharedRef<Metasound::Frontend::IOutputController_const_,1> *__return_storage_ptr__)

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

// GetDataType @ 14adbd960

FName * __thiscall
Metasound::Frontend::FInvalidInputController::GetDataType(FInvalidInputController *this)

{
  return &::Invalid;
}

// GetID @ 14adbf120

FGuid * __thiscall
Metasound::Frontend::FInvalidInputController::GetID
          (FInvalidInputController *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = FrontendInvalidID;
  return __return_storage_ptr__;
}

// GetLiteral @ 14adc0650

FMetasoundFrontendLiteral * __thiscall
Metasound::Frontend::FInvalidInputController::GetLiteral(FInvalidInputController *this)

{
  return (FMetasoundFrontendLiteral *)0x0;
}

// GetName @ 14adc0800

FName * __thiscall
Metasound::Frontend::FInvalidInputController::GetName(FInvalidInputController *this)

{
  return &::Invalid;
}

// GetOwningNodeID @ 14adc2500

FGuid * __thiscall
Metasound::Frontend::FInvalidInputController::GetOwningNodeID
          (FInvalidInputController *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = FrontendInvalidID;
  return __return_storage_ptr__;
}

// GetVertexAccessType @ 14adc3e70

EMetasoundFrontendVertexAccessType __thiscall
Metasound::Frontend::FInvalidInputController::GetVertexAccessType(FInvalidInputController *this)

{
  return Reference;
}

// IsConnected @ 14adc6c00

bool __thiscall
Metasound::Frontend::FInvalidInputController::IsConnected(FInvalidInputController *this)

{
  return false;
}

// IsConnectionUserModifiable @ 14adc6c20

bool __thiscall
Metasound::Frontend::FInvalidInputController::IsConnectionUserModifiable
          (FInvalidInputController *this)

{
  return false;
}

// IsValid @ 14adc7e30

bool __thiscall Metasound::Frontend::FInvalidInputController::IsValid(FInvalidInputController *this)

{
  return false;
}

// SetLiteral @ 14add09b0

void __thiscall
Metasound::Frontend::FInvalidInputController::SetLiteral
          (FInvalidInputController *this,FMetasoundFrontendLiteral *param_1)

{
  return;
}

// SetName @ 14add09e0

void __thiscall
Metasound::Frontend::FInvalidInputController::SetName(FInvalidInputController *this,FName *param_1)

{
  return;
}

// ShareAccess @ 14add0f60

FDocumentAccess * __thiscall
Metasound::Frontend::FInvalidInputController::ShareAccess
          (FInvalidInputController *this,FDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x400);
  FDocumentAccess::FDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ShareAccess @ 14add0f90

FConstDocumentAccess * __thiscall
Metasound::Frontend::FInvalidInputController::ShareAccess
          (FInvalidInputController *this,FConstDocumentAccess *__return_storage_ptr__)

{
  memset(__return_storage_ptr__,0,0x200);
  FConstDocumentAccess::FConstDocumentAccess(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOwningNode @ 14ae3c9f0

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::FInvalidInputController::GetOwningNode
          (FInvalidInputController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOwningNode @ 14ae3ca10

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
Metasound::Frontend::FInvalidInputController::GetOwningNode
          (FInvalidInputController *this,
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

