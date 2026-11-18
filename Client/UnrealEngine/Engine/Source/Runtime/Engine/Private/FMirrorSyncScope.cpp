// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FMirrorSyncScope @ 1475a4df0

FMirrorSyncScope * __thiscall
UE::Anim::FMirrorSyncScope::FMirrorSyncScope
          (FMirrorSyncScope *this,FAnimationBaseContext *param_1,UMirrorDataTable *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FAnimSyncGroupScope *this_00;
  code *pcVar4;
  FWeakReferencer<1> *pFVar5;
  bool bVar6;
  bool bVar7;
  atomic<int> aVar8;
  FMirrorSyncScope *pFVar9;
  uint uVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong local_res8;
  longlong *local_res10;
  code **local_res18;
  FAnimSyncGroupScope **local_res20;
  code **local_98;
  FAnimSyncGroupScope *local_90;
  TReferenceControllerBase<1> *pTStack_88;
  code *local_80;
  longlong **local_78;
  code *local_70;
  code ***local_68;
  code *local_60;
  FAnimSyncGroupScope ***local_58;
  code *local_50;
  code ***local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  this->MirrorDataTable = param_2;
  this->OuterScopeMirrorDataTable = (UMirrorDataTable *)0x0;
  this->MirrorScopeDepth = 1;
  (this->AnimSyncGroupScope).Object = (FAnimSyncGroupScope *)0x0;
  bVar7 = false;
  (this->AnimSyncGroupScope).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7FMirrorSyncScope_Anim_UE__6B_;
  if (param_1->SharedContext == (FAnimationUpdateSharedContext *)0x0) {
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1442789968400351459>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0xe3,"SharedContext != nullptr");
    bVar7 = false;
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FMirrorSyncScope *)(*pcVar4)();
      return pFVar9;
    }
  }
  else {
    local_res10 = &local_res8;
    local_78 = &local_res10;
    local_res8 = 0;
    local_80 = Core::Private::Function::
               TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::Anim::FMirrorSyncScope>'::__l5::<lambda_1>,void,UE::Anim::FMirrorSyncScope_&>
               ::Call;
    local_res18 = &local_80;
    local_68 = &local_res18;
    local_70 = Core::Private::Function::
               TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FMirrorSyncScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
               ::Call;
    FMessageStack::TopMessage
              (&param_1->SharedContext->MessageStack,TypeName,
               (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_70);
    if (local_res8 != 0) {
      uVar10 = *(int *)(local_res8 + 0x10) + 1;
      this->MirrorScopeDepth = uVar10;
      this->OuterScopeMirrorDataTable = *(UMirrorDataTable **)(local_res8 + 8);
      if ((uVar10 & 1) == 0) {
        bVar7 = IsMirrorSyncIdentical(*(UMirrorDataTable **)(local_res8 + 8),this->MirrorDataTable);
      }
    }
  }
  if (param_1->SharedContext != (FAnimationUpdateSharedContext *)0x0) {
    local_res20 = &local_90;
    local_58 = &local_res20;
    local_60 = Core::Private::Function::
               TFunctionRefCaller<`UE::Anim::FMirrorSyncScope::FMirrorSyncScope'::__l11::<lambda_1>,void,TWeakPtr<UE::Anim::FAnimSyncGroupScope,1>_&>
               ::Call;
    local_98 = &local_60;
    local_48 = &local_98;
    local_50 = Core::Private::Function::
               TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessageWeakPtr<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>,void,TSharedPtr<UE::Anim::IGraphMessage,1>_&>
               ::Call;
    local_90 = (FAnimSyncGroupScope *)0x0;
    pTStack_88 = (TReferenceControllerBase<1> *)0x0;
    FMessageStack::TopMessageSharedPtr
              (&param_1->SharedContext->MessageStack,FAnimSyncGroupScope::TypeName,
               (TFunctionRef<void___cdecl(TSharedPtr<UE::Anim::IGraphMessage,1>_&)> *)&local_50);
    if (pTStack_88 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_88->WeakReferenceCount = (atomic<int>)((int)pTStack_88->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_40 = *(undefined4 *)&(this->AnimSyncGroupScope).Object;
    uStack_3c = *(undefined4 *)((longlong)&(this->AnimSyncGroupScope).Object + 4);
    pFVar5 = &(this->AnimSyncGroupScope).WeakReferenceCount;
    uStack_38 = *(undefined4 *)&pFVar5->ReferenceController;
    uStack_34 = *(undefined4 *)
                 ((longlong)&(this->AnimSyncGroupScope).WeakReferenceCount.ReferenceController + 4);
    pTVar3 = pFVar5->ReferenceController;
    (this->AnimSyncGroupScope).Object = local_90;
    (this->AnimSyncGroupScope).WeakReferenceCount.ReferenceController = pTStack_88;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
    if (pTStack_88 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTStack_88->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTStack_88->_padding_ + 8))(pTStack_88,1);
      }
    }
  }
  pTVar3 = (this->AnimSyncGroupScope).WeakReferenceCount.ReferenceController;
  pTVar11 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1475a4fd3;
      LOCK();
      aVar8 = pTVar3->SharedReferenceCount;
      bVar6 = aVar2 == aVar8;
      if (bVar6) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar6);
    this_00 = (this->AnimSyncGroupScope).Object;
    pTVar11 = pTVar3;
    if (this_00 != (FAnimSyncGroupScope *)0x0) {
      if (bVar7 != false) {
        this->MirrorDataTable = (UMirrorDataTable *)0x0;
      }
      FAnimSyncGroupScope::SetMirror(this_00,this->MirrorDataTable);
    }
  }
LAB_1475a4fd3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return this;
}

// ~FMirrorSyncScope @ 1475a9b30

void __thiscall UE::Anim::FMirrorSyncScope::~FMirrorSyncScope(FMirrorSyncScope *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FAnimSyncGroupScope *this_00;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FMirrorSyncScope_Anim_UE__6B_;
  pTVar4 = (this->AnimSyncGroupScope).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1475a9b70;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = (this->AnimSyncGroupScope).Object;
    if (this_00 != (FAnimSyncGroupScope *)0x0) {
      FAnimSyncGroupScope::SetMirror(this_00,this->OuterScopeMirrorDataTable);
    }
  }
LAB_1475a9b70:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar4 = (this->AnimSyncGroupScope).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// GetMirrorScopeDepth @ 1475d5c70

int __thiscall UE::Anim::FMirrorSyncScope::GetMirrorScopeDepth(FMirrorSyncScope *this)

{
  return this->MirrorScopeDepth;
}

// MakeUniqueEventContextData @ 1475e54b0

TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
 __thiscall UE::Anim::FMirrorSyncScope::MakeUniqueEventContextData(FMirrorSyncScope *this)

{
  UMirrorDataTable *pUVar1;
  IAnimNotifyEventContextDataInterface IVar2;
  IAnimNotifyEventContextDataInterface *in_RDX;
  UMirrorDataTable *local_res10;
  
  IVar2 = (IAnimNotifyEventContextDataInterface)::operator_new(0x18);
  if (IVar2 != (IAnimNotifyEventContextDataInterface)0x0) {
    pUVar1 = this->MirrorDataTable;
    *(undefined ***)IVar2 = &___7FAnimNotifyMirrorContext_Anim_UE__6B_;
    *(undefined1 *)((longlong)IVar2 + 8) = 1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMirrorDataTable *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
    *(undefined8 *)((longlong)IVar2 + 0xc) = 0;
    local_res10 = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMirrorDataTable *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)IVar2 + 0xc),(FObjectPtr)&local_res10);
    *in_RDX = IVar2;
    *(bool *)((longlong)IVar2 + 8) = pUVar1 != (UMirrorDataTable *)0x0;
    return (TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
            )in_RDX;
  }
  *in_RDX = (IAnimNotifyEventContextDataInterface)0x0;
  return (TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
          )in_RDX;
}

