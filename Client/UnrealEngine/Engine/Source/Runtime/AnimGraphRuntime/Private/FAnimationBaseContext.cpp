// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// GetMessage<UE::Anim::IInertializationRequester> @ 1463f5c00

IInertializationRequester * __thiscall
FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>(FAnimationBaseContext *this)

{
  code *pcVar1;
  bool bVar2;
  IInertializationRequester *pIVar3;
  IInertializationRequester *local_res8;
  IInertializationRequester **local_res10;
  code **local_res18 [2];
  code *local_28;
  undefined8 **local_20;
  code *local_18;
  undefined8 **local_10;
  
  if (this->SharedContext != (FAnimationUpdateSharedContext *)0x0) {
    local_res10 = &local_res8;
    local_20 = &local_res10;
    local_res8 = (IInertializationRequester *)0x0;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>'::__l5::<lambda_1>,void,UE::Anim::IInertializationRequester_&>
               ::Call;
    local_res18[0] = &local_28;
    local_10 = local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::IInertializationRequester>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
               ::Call;
    UE::Anim::FMessageStack::TopMessage
              (&this->SharedContext->MessageStack,UE::Anim::IInertializationRequester::TypeName,
               (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_18);
    return local_res8;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1442789968400351459>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                     ,0xe3,"SharedContext != nullptr");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IInertializationRequester *)(*pcVar1)();
    return pIVar3;
  }
  return (IInertializationRequester *)0x0;
}

// GetMessageChecked<UE::Anim::FAnimSyncGroupScope> @ 1463f5cc0

FAnimSyncGroupScope * __thiscall
FAnimationBaseContext::GetMessageChecked<UE::Anim::FAnimSyncGroupScope>(FAnimationBaseContext *this)

{
  code *pcVar1;
  bool bVar2;
  FAnimSyncGroupScope *pFVar3;
  FAnimSyncGroupScope *local_res8;
  FAnimSyncGroupScope **local_res10;
  code **local_res18 [2];
  code *local_28;
  undefined8 **local_20;
  code *local_18;
  undefined8 **local_10;
  
  if ((this->SharedContext == (FAnimationUpdateSharedContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x10d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAnimSyncGroupScope *)(*pcVar1)();
    return pFVar3;
  }
  local_res10 = &local_res8;
  local_20 = &local_res10;
  local_res8 = (FAnimSyncGroupScope *)0x0;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAnimationBaseContext::GetMessageChecked<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>,void,UE::Anim::FAnimSyncGroupScope_&>
             ::Call;
  local_res18[0] = &local_28;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
             ::Call;
  UE::Anim::FMessageStack::TopMessage
            (&this->SharedContext->MessageStack,UE::Anim::FAnimSyncGroupScope::TypeName,
             (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_18);
  if ((local_res8 == (FAnimSyncGroupScope *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Message != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x116,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAnimSyncGroupScope *)(*pcVar1)();
    return pFVar3;
  }
  return local_res8;
}

