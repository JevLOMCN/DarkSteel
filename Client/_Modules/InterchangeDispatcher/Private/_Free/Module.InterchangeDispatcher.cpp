// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 43

// `dynamic_initializer_for_'LogInterchangeDispatcher'' @ 141424f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogInterchangeDispatcher__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogInterchangeDispatcher,L"LogInterchangeDispatcher",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogInterchangeDispatcher__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantInterchangeDispatcher'' @ 141424f50

void __cdecl _dynamic_initializer_for__ModuleRegistrantInterchangeDispatcher__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "InterchangeDispatcher";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"InterchangeDispatcher",0x15);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FInterchangeDispatcherModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14e6604f0

void * __thiscall
FInterchangeDispatcherModule::_scalar_deleting_destructor_
          (FInterchangeDispatcherModule *this,uint param_1)

{
  *this = (FInterchangeDispatcherModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// FTaskProgressData,TSizedDefaultAllocator<32>_> @ 14e660530

FArchive * __cdecl
operator<<<UE::Interchange::FCompletedQueryTaskProgressCommand::
FTaskProgressData_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::Interchange::FCompletedQueryTaskProgressCommand::FTaskProgressData,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar9 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            UE::Interchange::operator<<
                      (param_1,(FTaskProgressData *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<UE::Interchange::FCompletedQueryTaskProgressCommand::FTaskProgressData,TSizedDefaultAllocator<32>_>
        ::Empty(param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          UE::Interchange::operator<<
                    (param_1,(FTaskProgressData *)
                             ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)auStackX_8[0]);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// DefaultConstructItems<UE::Interchange::FCompletedQueryTaskProgressCommand::FTaskProgressData,int> @ 14e660540

void __cdecl
DefaultConstructItems<UE::Interchange::FCompletedQueryTaskProgressCommand::FTaskProgressData,int>
          (void *param_1,int param_2)

{
  return;
}

// DestructItems<UE::Interchange::FTask,int> @ 14e660550

void __cdecl DestructItems<UE::Interchange::FTask,int>(FTask *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->JsonMessages;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pTVar2 + 1));
      DestructItems<FString,int>((FString *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FString *)(pTVar2 + -1))->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      pTVar2 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int> @ 14e6605c0

void __cdecl
DestructItems<TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>,int>
          (TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>::operator()
              ((TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler> *)param_1,param_1->Ptr);
    param_1 = (TUniquePtr<UE::Interchange::FInterchangeWorkerHandler,TDefaultDelete<UE::Interchange::FInterchangeWorkerHandler>_>
               *)((longlong)param_1 + 8);
  }
  return;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_UE::Interchange::EWorkerState>_> @ 14e660800

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_UE::Interchange::EWorkerState>_>
          (_Atomic_padded<UE::Interchange::EWorkerState> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<enum_UE::Interchange::EWorkerState>_> @ 14e660810

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<enum_UE::Interchange::EWorkerState>_>
          (_Atomic_padded<UE::Interchange::EWorkerState> *param_1)

{
  return (char *)param_1;
}

// _Atomic_reinterpret_as<char,enum_UE::Interchange::EWorkerState> @ 14e660820

char __cdecl
std::_Atomic_reinterpret_as<char,enum_UE::Interchange::EWorkerState>(EWorkerState *param_1)

{
  return *param_1;
}

// ~TFunction_OwnedObject<`UE::Interchange::FInterchangeWorkerHandler::FInterchangeWorkerHandler'::__l2::<lambda_1>,1,0> @ 14e660f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FInterchangeWorkerHandler::FInterchangeWorkerHandler'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UE::Interchange::FInterchangeWorkerHandler::FInterchangeWorkerHandler_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FInterchangeWorkerHandler::FInterchangeWorkerHandler'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// `scalar_deleting_destructor' @ 14e661bc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Interchange::FInterchangeWorkerHandler::FInterchangeWorkerHandler'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::Interchange::FInterchangeWorkerHandler::FInterchangeWorkerHandler'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661c00

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FBackPingCommand,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FBackPingCommand,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661c40

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Interchange::FCompletedQueryTaskProgressCommand,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FCompletedQueryTaskProgressCommand,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661c80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FCompletedTaskCommand,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FCompletedTaskCommand,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661cc0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FErrorCommand,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FErrorCommand,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661d00

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FPingCommand,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FPingCommand,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661d40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FQueryTaskProgressCommand,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FQueryTaskProgressCommand,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661d80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FRunTaskCommand,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FRunTaskCommand,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661dc0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Interchange::FTerminateCommand,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Interchange::FTerminateCommand,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661e00

void * __thiscall
UE::Interchange::FBackPingCommand::_scalar_deleting_destructor_(FBackPingCommand *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661e30

void * __thiscall
UE::Interchange::FCompletedQueryTaskProgressCommand::_scalar_deleting_destructor_
          (FCompletedQueryTaskProgressCommand *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TaskStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661e80

void * __thiscall
UE::Interchange::FCompletedTaskCommand::_scalar_deleting_destructor_
          (FCompletedTaskCommand *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->JSonMessages).AllocatorInstance.Data,(this->JSonMessages).ArrayNum);
  pFVar1 = (this->JSonMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JSonResult).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661ee0

void * __thiscall
UE::Interchange::FErrorCommand::_scalar_deleting_destructor_(FErrorCommand *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ErrorMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661f30

void * __thiscall
UE::Interchange::FInterchangeDispatcher::_scalar_deleting_destructor_
          (FInterchangeDispatcher *this,uint param_1)

{
  ~FInterchangeDispatcher(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661f70

void * __thiscall
UE::Interchange::FNetworkNode::_scalar_deleting_destructor_(FNetworkNode *this,uint param_1)

{
  ~FNetworkNode(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e661fb0

void * __thiscall
UE::Interchange::FNetworkServerNode::_scalar_deleting_destructor_
          (FNetworkServerNode *this,uint param_1)

{
  ISocketSubsystem *pIVar1;
  FName local_res8;
  
  this->_padding_ = (longlong)&___7FNetworkServerNode_Interchange_UE__6B_;
  if (this->ListeningSocket != (FSocket *)0x0) {
    (**(code **)(this->ListeningSocket->_padding_ + 0x10))();
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pIVar1 = ISocketSubsystem::Get(&local_res8);
    (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,this->ListeningSocket);
    this->ListeningSocket = (FSocket *)0x0;
  }
  FNetworkNode::~FNetworkNode((FNetworkNode *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e662040

void * __thiscall
UE::Interchange::FPingCommand::_scalar_deleting_destructor_(FPingCommand *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e662070

void * __thiscall
UE::Interchange::FQueryTaskProgressCommand::_scalar_deleting_destructor_
          (FQueryTaskProgressCommand *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TaskIndexes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e6620c0

void * __thiscall
UE::Interchange::FRunTaskCommand::_scalar_deleting_destructor_(FRunTaskCommand *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->JsonDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e662110

void * __thiscall
UE::Interchange::FTerminateCommand::_scalar_deleting_destructor_
          (FTerminateCommand *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e662140

void * __thiscall
UE::Interchange::ICommand::_scalar_deleting_destructor_(ICommand *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_InterchangeDispatcher @ 14e66ae70

void __cdecl IMPLEMENT_MODULE_InterchangeDispatcher(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Key'' @ 150467d10

void __cdecl
`UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey'::__l2::_dynamic_atexit_destructor_for__Key__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
               ::__l2::Key.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Key'' @ 150467d30

void __cdecl
`UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey'::__l2::_dynamic_atexit_destructor_for__Key__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
               ::__l2::Key.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Key'' @ 150467d50

void __cdecl
`UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey'::__l2::
_dynamic_atexit_destructor_for__Key__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
               ::__l2::Key.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchMeshPayloadCmd::GetMeshGlobalTransformJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Key'' @ 150467d70

void __cdecl
`UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey'::__l2::
_dynamic_atexit_destructor_for__Key__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
               ::__l2::Key.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Key'' @ 150467d90

void __cdecl
`UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey'::__l2::
_dynamic_atexit_destructor_for__Key__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
               ::__l2::Key.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Key'' @ 150467db0

void __cdecl
`UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey'::__l2::
_dynamic_atexit_destructor_for__Key__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
               ::__l2::Key.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonLoadSourceCmd::GetSourceFilenameJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Key'' @ 150467dd0

void __cdecl
`UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey'::__l2::_dynamic_atexit_destructor_for__Key__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
               ::__l2::Key.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
      ::__l2::Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogInterchangeDispatcher'' @ 150467df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogInterchangeDispatcher__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogInterchangeDispatcher);
  return;
}

// `dynamic_atexit_destructor_for_'SocketDescription'' @ 150467e10

void __cdecl
`UE::Interchange::FInterchangeWorkerHandler::RunInternal'::__l7::
_dynamic_atexit_destructor_for__SocketDescription__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SocketDescription.Data.AllocatorInstance.Data;
  if (SocketDescription.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SocketDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Version'' @ 150467e30

void __cdecl
`UE::Interchange::DispatcherCommandVersion::ToString'::__l2::
_dynamic_atexit_destructor_for__Version__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
               ::__l2::Version.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
      ::__l2::Version.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
      ::__l2::Version.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

