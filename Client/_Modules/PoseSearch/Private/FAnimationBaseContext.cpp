// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// GetMessage<UE::PoseSearch::FPoseHistoryProvider> @ 14a8a5280

FPoseHistoryProvider * __thiscall
FAnimationBaseContext::GetMessage<UE::PoseSearch::FPoseHistoryProvider>(FAnimationBaseContext *this)

{
  code *pcVar1;
  bool bVar2;
  FPoseHistoryProvider *pFVar3;
  FPoseHistoryProvider *local_res8;
  FPoseHistoryProvider **local_res10;
  code **local_res18 [2];
  code *local_28;
  undefined8 **local_20;
  code *local_18;
  undefined8 **local_10;
  
  if (this->SharedContext != (FAnimationUpdateSharedContext *)0x0) {
    local_res10 = &local_res8;
    local_20 = &local_res10;
    local_res8 = (FPoseHistoryProvider *)0x0;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::PoseSearch::FPoseHistoryProvider>'::__l5::<lambda_1>,void,UE::PoseSearch::FPoseHistoryProvider_&>
               ::Call;
    local_res18[0] = &local_28;
    local_10 = local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::PoseSearch::FPoseHistoryProvider>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
               ::Call;
    UE::Anim::FMessageStack::TopMessage
              (&this->SharedContext->MessageStack,UE::PoseSearch::FPoseHistoryProvider::TypeName,
               (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_18);
    return local_res8;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1442789968400351459>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                     ,0xe3,"SharedContext != nullptr");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPoseHistoryProvider *)(*pcVar1)();
    return pFVar3;
  }
  return (FPoseHistoryProvider *)0x0;
}

