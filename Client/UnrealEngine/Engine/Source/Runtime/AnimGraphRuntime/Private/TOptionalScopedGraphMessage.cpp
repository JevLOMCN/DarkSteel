// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope><> @ 1463f11a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope> * __thiscall
UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope>::
TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope><>
          (TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope> *this,bool param_1,
          FAnimationBaseContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope> *pTVar4;
  FName FVar5;
  TSharedRef<UE::Anim::IGraphMessage,1> local_18;
  
  FScopedGraphMessage::FScopedGraphMessage((FScopedGraphMessage *)this,param_2);
  this->bCondition = param_1;
  if (param_1) {
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      local_18.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
      local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
      FVar5 = FAnimInertializationSyncScope::TypeName;
    }
    else {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFAnimInertializationSyncScope_Anim_UE___00_SharedPointerInternals__6B_
      ;
      pTVar3[1]._padding_ = (longlong)&___7FAnimInertializationSyncScope_Anim_UE__6B_;
      if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TOptionalScopedGraphMessage<UE::Anim::FAnimInertializationSyncScope> *)
                   (*pcVar1)();
          return pTVar4;
        }
      }
      FVar5 = FAnimInertializationSyncScope::TypeName;
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      local_18.Object = (IGraphMessage *)(pTVar3 + 1);
      local_18.SharedReferenceCount.ReferenceController = pTVar3;
    }
    FScopedGraphMessage::PushMessage((FScopedGraphMessage *)this,param_2,&local_18,FVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope><FAnimationUpdateContext_const_&,FName_&,TEnumAsByte<enum_EAnimGroupRole::Type>_&> @ 1463f12b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope> * __thiscall
UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope>::
TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope><FAnimationUpdateContext_const_&,FName_&,TEnumAsByte<enum_EAnimGroupRole::Type>_&>
          (TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope> *this,bool param_1,
          FAnimationBaseContext *param_2,FAnimationUpdateContext *param_3,FName *param_4,
          TEnumAsByte<EAnimGroupRole::Type> *param_5)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope> *pTVar4;
  FName FVar5;
  TSharedRef<UE::Anim::IGraphMessage,1> local_18;
  
  FScopedGraphMessage::FScopedGraphMessage((FScopedGraphMessage *)this,param_2);
  this->bCondition = param_1;
  if (param_1) {
    pTVar3 = ::operator_new(0x40);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      local_18.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
      local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
      FVar5 = FAnimSyncGroupScope::TypeName;
    }
    else {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFAnimSyncGroupScope_Anim_UE___00_SharedPointerInternals__6B_
      ;
      FAnimSyncGroupScope::FAnimSyncGroupScope
                ((FAnimSyncGroupScope *)(pTVar3 + 1),(FAnimationBaseContext *)param_3,*param_4,
                 (uint)param_5->Value);
      local_18.Object = (IGraphMessage *)(pTVar3 + 1);
      if ((TReferenceControllerBase<1> *)local_18.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TOptionalScopedGraphMessage<UE::Anim::FAnimSyncGroupScope> *)(*pcVar1)();
          return pTVar4;
        }
      }
      FVar5 = FAnimSyncGroupScope::TypeName;
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      local_18.SharedReferenceCount.ReferenceController = pTVar3;
    }
    FScopedGraphMessage::PushMessage((FScopedGraphMessage *)this,param_2,&local_18,FVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

