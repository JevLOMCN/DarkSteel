// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 1

// TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope><TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_&,TSharedPtr<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,1>_&> @ 14a85f440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope> * __thiscall
UE::Anim::TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope>::
TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope><TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_&,TSharedPtr<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,1>_&>
          (TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope> *this,
          bool param_1,FAnimationBaseContext *param_2,
          TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1> *param_3,
          TSharedPtr<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>,1>
          *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope> *pTVar7;
  FName FVar8;
  TSharedRef<UE::Anim::IGraphMessage,1> local_18;
  
  FScopedGraphMessage::FScopedGraphMessage((FScopedGraphMessage *)this,param_2);
  this->bCondition = param_1;
  if (param_1) {
    pTVar6 = ::operator_new(0x38);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      local_18.Object = (IGraphMessage *)___xmm_00000000000000000000000000000010;
      local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
      FVar8 = FBlendStackAnimEventsFilterScope::TypeName;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFBlendStackAnimEventsFilterScope_Anim_UE___00_SharedPointerInternals__6B_
      ;
      pTVar6[1]._padding_ = (longlong)&___7FBlendStackAnimEventsFilterScope_Anim_UE__6B_;
      if (param_3->Object == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope> *)
                   (*pcVar4)();
          return pTVar7;
        }
      }
      *(TArray<FName,TSizedDefaultAllocator<32>_> **)&pTVar6[1].SharedReferenceCount =
           param_3->Object;
      pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
      pTVar6[2]._padding_ = (longlong)pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar2._0_4_ = pTVar6[1].SharedReferenceCount;
      lVar2._4_4_ = pTVar6[1].WeakReferenceCount;
      if (lVar2 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope> *)
                   (*pcVar4)();
          return pTVar7;
        }
      }
      if (param_4->Object ==
          (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)0x0)
      {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope> *)
                   (*pcVar4)();
          return pTVar7;
        }
      }
      *(TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> **)
       &pTVar6[2].SharedReferenceCount = param_4->Object;
      pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
      pTVar6[3]._padding_ = (longlong)pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar3._0_4_ = pTVar6[2].SharedReferenceCount;
      lVar3._4_4_ = pTVar6[2].WeakReferenceCount;
      if (lVar3 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope> *)
                   (*pcVar4)();
          return pTVar7;
        }
      }
      if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TOptionalScopedGraphMessage<UE::Anim::FBlendStackAnimEventsFilterScope> *)
                   (*pcVar4)();
          return pTVar7;
        }
      }
      FVar8 = FBlendStackAnimEventsFilterScope::TypeName;
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      local_18.Object = (IGraphMessage *)(pTVar6 + 1);
      local_18.SharedReferenceCount.ReferenceController = pTVar6;
    }
    FScopedGraphMessage::PushMessage((FScopedGraphMessage *)this,param_2,&local_18,FVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

