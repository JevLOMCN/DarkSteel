// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 9

// Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_> @ 14efe1da0

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params>
::
Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params>
           *this,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>
                 *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  undefined7 in_register_00000081;
  EOnlineAsyncExecutionPolicy in_R9B;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  
  this_00 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)this[1].LastResult;
  local_res8.Ptr = ::operator_new(0x40);
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (((TStep<void> *)local_res8.Ptr)->ExecutionPolicy).ExecutionPolicy = in_R9B;
    ((TStep<void> *)local_res8.Ptr)->_padding_ = 0x15309c430;
    *(undefined8 *)&((TStep<void> *)local_res8.Ptr)->ExecFunction = 0;
    *(undefined8 *)&(((TStep<void> *)local_res8.Ptr)->ExecFunction).field_0x28 = 0;
  }
  TStep<void>::
  SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>
            ((TStep<void> *)local_res8.Ptr,this_00,this->LastResult,
             (TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>
              *)CONCAT71(in_register_00000081,param_2.ExecutionPolicy));
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_res8);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_> @ 14efe1e50

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params>
::
Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params>
           *this,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>
                 *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  undefined7 in_register_00000081;
  EOnlineAsyncExecutionPolicy in_R9B;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  
  this_00 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)this[1].LastResult;
  local_res8.Ptr = ::operator_new(0x40);
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (((TStep<void> *)local_res8.Ptr)->ExecutionPolicy).ExecutionPolicy = in_R9B;
    ((TStep<void> *)local_res8.Ptr)->_padding_ = 0x15309c430;
    *(undefined8 *)&((TStep<void> *)local_res8.Ptr)->ExecFunction = 0;
    *(undefined8 *)&(((TStep<void> *)local_res8.Ptr)->ExecFunction).field_0x28 = 0;
  }
  TStep<void>::
  SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>
            ((TStep<void> *)local_res8.Ptr,this_00,this->LastResult,
             (TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>
              *)CONCAT71(in_register_00000081,param_2.ExecutionPolicy));
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_res8);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_> @ 14efe1f00

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params>
::
Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params>
           *this,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>
                 *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  undefined7 in_register_00000081;
  EOnlineAsyncExecutionPolicy in_R9B;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  
  this_00 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)this[1].LastResult;
  local_res8.Ptr = ::operator_new(0x40);
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (((TStep<void> *)local_res8.Ptr)->ExecutionPolicy).ExecutionPolicy = in_R9B;
    ((TStep<void> *)local_res8.Ptr)->_padding_ = 0x15309c430;
    *(undefined8 *)&((TStep<void> *)local_res8.Ptr)->ExecFunction = 0;
    *(undefined8 *)&(((TStep<void> *)local_res8.Ptr)->ExecFunction).field_0x28 = 0;
  }
  TStep<void>::
  SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>
            ((TStep<void> *)local_res8.Ptr,this_00,this->LastResult,
             (TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>
              *)CONCAT71(in_register_00000081,param_2.ExecutionPolicy));
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_res8);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_> @ 14efe1fb0

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params>
::
Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params>
           *this,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>
                 *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  undefined7 in_register_00000081;
  EOnlineAsyncExecutionPolicy in_R9B;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  
  this_00 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)this[1].LastResult;
  local_res8.Ptr = ::operator_new(0x40);
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (((TStep<void> *)local_res8.Ptr)->ExecutionPolicy).ExecutionPolicy = in_R9B;
    ((TStep<void> *)local_res8.Ptr)->_padding_ = 0x15309c430;
    *(undefined8 *)&((TStep<void> *)local_res8.Ptr)->ExecFunction = 0;
    *(undefined8 *)&(((TStep<void> *)local_res8.Ptr)->ExecFunction).field_0x28 = 0;
  }
  TStep<void>::
  SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>
            ((TStep<void> *)local_res8.Ptr,this_00,this->LastResult,
             (TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>
              *)CONCAT71(in_register_00000081,param_2.ExecutionPolicy));
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_res8);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_> @ 14efe2060

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params>
::
Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params>
           *this,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>
                 *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  undefined7 in_register_00000081;
  EOnlineAsyncExecutionPolicy in_R9B;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  
  this_00 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)this[1].LastResult;
  local_res8.Ptr = ::operator_new(0x40);
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (((TStep<void> *)local_res8.Ptr)->ExecutionPolicy).ExecutionPolicy = in_R9B;
    ((TStep<void> *)local_res8.Ptr)->_padding_ = 0x15309c430;
    *(undefined8 *)&((TStep<void> *)local_res8.Ptr)->ExecFunction = 0;
    *(undefined8 *)&(((TStep<void> *)local_res8.Ptr)->ExecFunction).field_0x28 = 0;
  }
  TStep<void>::
  SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>
            ((TStep<void> *)local_res8.Ptr,this_00,this->LastResult,
             (TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>
              *)CONCAT71(in_register_00000081,param_2.ExecutionPolicy));
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_res8);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_> @ 14efe2110

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params>
::
Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params>
           *this,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>
                 *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  undefined7 in_register_00000081;
  EOnlineAsyncExecutionPolicy in_R9B;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  
  this_00 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)this[1].LastResult;
  local_res8.Ptr = ::operator_new(0x40);
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (((TStep<void> *)local_res8.Ptr)->ExecutionPolicy).ExecutionPolicy = in_R9B;
    ((TStep<void> *)local_res8.Ptr)->_padding_ = 0x15309c430;
    *(undefined8 *)&((TStep<void> *)local_res8.Ptr)->ExecFunction = 0;
    *(undefined8 *)&(((TStep<void> *)local_res8.Ptr)->ExecFunction).field_0x28 = 0;
  }
  TStep<void>::
  SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>
            ((TStep<void> *)local_res8.Ptr,this_00,this->LastResult,
             (TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>
              *)CONCAT71(in_register_00000081,param_2.ExecutionPolicy));
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_res8);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_> @ 14efe21c0

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params>
::
Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params>,UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params>
           *this,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>
                 *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  undefined7 in_register_00000081;
  EOnlineAsyncExecutionPolicy in_R9B;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  
  this_00 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)this[1].LastResult;
  local_res8.Ptr = ::operator_new(0x40);
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (((TStep<void> *)local_res8.Ptr)->ExecutionPolicy).ExecutionPolicy = in_R9B;
    ((TStep<void> *)local_res8.Ptr)->_padding_ = 0x15309c430;
    *(undefined8 *)&((TStep<void> *)local_res8.Ptr)->ExecFunction = 0;
    *(undefined8 *)&(((TStep<void> *)local_res8.Ptr)->ExecFunction).field_0x28 = 0;
  }
  TStep<void>::
  SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>
            ((TStep<void> *)local_res8.Ptr,this_00,this->LastResult,
             (TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>
              *)CONCAT71(in_register_00000081,param_2.ExecutionPolicy));
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_res8);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_> @ 14efe2270

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,UE::Online::FFunctionalTestLobbies,void>
::
Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,UE::Online::FFunctionalTestLobbies,void>
           *this,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>
                 *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar1;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_01;
  undefined7 in_register_00000081;
  EOnlineAsyncExecutionPolicy in_R9B;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  
  this_00 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  this_01 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)(this + -0x58);
  if (this == (TOnlineAsyncOpBase<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,UE::Online::FFunctionalTestLobbies,void>
               *)0x0) {
    this_01 = this_00;
  }
  pTVar1 = ::operator_new(0x40);
  if (pTVar1 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
    ((FOnlineAsyncExecutionPolicy *)&pTVar1->_padding_)->ExecutionPolicy = in_R9B;
    pTVar1->_padding_ = 0x15309c430;
    *(undefined8 *)&pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    this_00 = pTVar1;
  }
  local_res8.Ptr = (IStep *)this_00;
  TStep<void>::
  SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>
            ((TStep<void> *)this_00,this_01,
             (TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>
              *)CONCAT71(in_register_00000081,param_2.ExecutionPolicy));
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_01,&local_res8);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_01;
  if ((TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)local_res8.Ptr !=
      (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

// Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_> @ 14efe2320

TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void> __thiscall
UE::Online::Private::
TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
::
Then<TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>
          (TOnlineAsyncOpBase<UE::Online::TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>,UE::Online::FFunctionalTestLobbies,void>
           *this,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>
                 *param_1,FOnlineAsyncExecutionPolicy param_2)

{
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  undefined7 in_register_00000081;
  EOnlineAsyncExecutionPolicy in_R9B;
  TUniquePtr<UE::Online::Private::IStep,TDefaultDelete<UE::Online::Private::IStep>_> local_res8;
  
  this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)this;
  local_res8.Ptr = ::operator_new(0x40);
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (((TStep<void> *)local_res8.Ptr)->ExecutionPolicy).ExecutionPolicy = in_R9B;
    ((TStep<void> *)local_res8.Ptr)->_padding_ = 0x15309c430;
    *(undefined8 *)&((TStep<void> *)local_res8.Ptr)->ExecFunction = 0;
    *(undefined8 *)&(((TStep<void> *)local_res8.Ptr)->ExecFunction).field_0x28 = 0;
  }
  TStep<void>::
  SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>
            ((TStep<void> *)local_res8.Ptr,this_00,
             (TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>
              *)CONCAT71(in_register_00000081,param_2.ExecutionPolicy));
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::AddStep(this_00,&local_res8);
  *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)param_1 = this_00;
  if ((TStep<void> *)local_res8.Ptr != (TStep<void> *)0x0) {
    (**(code **)*local_res8.Ptr)(local_res8.Ptr,1);
  }
  return (TOnlineChainableAsyncOp<UE::Online::FFunctionalTestLobbies,void>)
         (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)param_1;
}

