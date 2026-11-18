// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FActiveStateMachineScope @ 1473d4850

FActiveStateMachineScope * __thiscall
UE::Anim::FActiveStateMachineScope::FActiveStateMachineScope
          (FActiveStateMachineScope *this,FAnimationBaseContext *param_1,
          FAnimNode_StateMachine *param_2,int param_3)

{
  FAnimationBaseContext *local_28;
  FAnimNode_StateMachine *local_20;
  int local_18;
  
  this->_padding_ = (longlong)&___7FActiveStateMachineScope_Anim_UE__6B_;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  `UE::Anim::FActiveStateMachineScope::FActiveStateMachineScope'::__l1::<lambda_25_>::operator()
            (&local_28,&this->ActiveStateMachines);
  return this;
}

// operator() @ 1473ddc30

FEncounteredStateMachineStack * __thiscall
`UE::Anim::FActiveStateMachineScope::FActiveStateMachineScope'::__l1::<lambda_25_>::operator()
          (void *this,FEncounteredStateMachineStack *__return_storage_ptr__)

{
  int *piVar1;
  FAnimNode_Base *this_00;
  longlong *plVar2;
  FStateMachineEntry *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FEncounteredStateMachineStack *pFVar9;
  FStateMachineEntry *pFVar10;
  int iVar11;
  void *_Src;
  longlong local_res8;
  longlong *local_res18;
  code **local_res20;
  code *local_48;
  longlong **local_40;
  code *local_38;
  code ***local_30;
  
  this_00 = *(FAnimNode_Base **)((longlong)this + 8);
  if ((**(longlong **)this == 0) ||
     (plVar2 = *(longlong **)(**(longlong **)this + 0x148), plVar2 == (longlong *)0x0)) {
    iVar11 = -1;
  }
  else {
    lVar8 = (**(code **)(*plVar2 + 0x20))();
    iVar11 = *(int *)(lVar8 + 8);
    iVar6 = FAnimNode_Base::GetNodeIndex(this_00);
    iVar11 = (iVar11 - iVar6) + -1;
  }
  if (*(longlong *)(*(longlong *)this + 8) == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1442789968400351459>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0xe3,"SharedContext != nullptr");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FEncounteredStateMachineStack *)(*pcVar4)();
      return pFVar9;
    }
    iVar6 = *(int *)((longlong)this + 0x10);
    (__return_storage_ptr__->StateStack).AllocatorInstance.SecondaryData.Data =
         (FStateMachineEntry *)0x0;
  }
  else {
    local_res18 = &local_res8;
    local_40 = &local_res18;
    local_res8 = 0;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::Anim::FActiveStateMachineScope>'::__l5::<lambda_1>,void,UE::Anim::FActiveStateMachineScope_&>
               ::Call;
    local_res20 = &local_48;
    local_30 = &local_res20;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FActiveStateMachineScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
               ::Call;
    UE::Anim::FMessageStack::TopMessage
              ((FMessageStack *)(*(longlong *)(*(longlong *)this + 8) + 0x148),
               UE::Anim::FActiveStateMachineScope::TypeName,
               (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_38);
    iVar6 = *(int *)((longlong)this + 0x10);
    piVar1 = &(__return_storage_ptr__->StateStack).ArrayMax;
    (__return_storage_ptr__->StateStack).AllocatorInstance.SecondaryData.Data =
         (FStateMachineEntry *)0x0;
    if (local_res8 != 0) {
      iVar7 = *(int *)(local_res8 + 0x30);
      _Src = *(void **)(local_res8 + 0x28);
      (__return_storage_ptr__->StateStack).ArrayNum = iVar7;
      if (_Src == (void *)0x0) {
        _Src = (void *)(local_res8 + 8);
      }
      if (iVar7 == 0) {
        *piVar1 = 4;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>_>
                  (8,4,iVar7,0,
                   (ForElementType<FEncounteredStateMachineStack::FStateMachineEntry> *)
                   __return_storage_ptr__,iVar7,piVar1);
        pFVar3 = (__return_storage_ptr__->StateStack).AllocatorInstance.SecondaryData.Data;
        pFVar10 = (FStateMachineEntry *)__return_storage_ptr__;
        if (pFVar3 != (FStateMachineEntry *)0x0) {
          pFVar10 = pFVar3;
        }
        memcpy(pFVar10,_Src,(longlong)iVar7 << 3);
      }
      iVar7 = (__return_storage_ptr__->StateStack).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TMemStackAllocator<0>_>::ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>_>
                          (0x408,(ForElementType<FEncounteredStateMachineStack::FStateMachineEntry>
                                  *)__return_storage_ptr__,piVar1);
      }
      (__return_storage_ptr__->StateStack).ArrayNum = iVar7 + 1;
      pFVar3 = (__return_storage_ptr__->StateStack).AllocatorInstance.SecondaryData.Data;
      pFVar10 = (FStateMachineEntry *)__return_storage_ptr__;
      if (pFVar3 != (FStateMachineEntry *)0x0) {
        pFVar10 = pFVar3;
      }
      pFVar10[iVar7].StateMachineIndex = iVar11;
      pFVar10[iVar7].StateIndex = iVar6;
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->StateStack).ArrayNum = 0;
  }
  (__return_storage_ptr__->StateStack).ArrayMax = 4;
  (__return_storage_ptr__->StateStack).ArrayNum = 1;
  *(int *)(__return_storage_ptr__->StateStack).AllocatorInstance.InlineData = iVar11;
  *(int *)((__return_storage_ptr__->StateStack).AllocatorInstance.InlineData + 4) = iVar6;
  return __return_storage_ptr__;
}

// GetStateMachineIndex @ 147405200

int __cdecl
UE::Anim::FActiveStateMachineScope::GetStateMachineIndex
          (FAnimNode_StateMachine *param_1,FAnimationBaseContext *param_2)

{
  int iVar1;
  IAnimClassInterface *pIVar2;
  int iVar3;
  longlong lVar4;
  
  if ((param_2->AnimInstanceProxy != (FAnimInstanceProxy *)0x0) &&
     (pIVar2 = param_2->AnimInstanceProxy->AnimClassInterface, pIVar2 != (IAnimClassInterface *)0x0)
     ) {
    lVar4 = (**(code **)((longlong)*pIVar2 + 0x20))();
    iVar1 = *(int *)(lVar4 + 8);
    iVar3 = FAnimNode_Base::GetNodeIndex((FAnimNode_Base *)param_1);
    return (iVar1 - iVar3) + -1;
  }
  return -1;
}

// GetTypeName @ 147405bc0

FName __thiscall UE::Anim::FActiveStateMachineScope::GetTypeName(FActiveStateMachineScope *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// MakeUniqueEventContextData @ 14740af10

TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
 __thiscall
UE::Anim::FActiveStateMachineScope::MakeUniqueEventContextData(FActiveStateMachineScope *this)

{
  FAnimNotifyStateMachineContext *this_00;
  IAnimNotifyEventContextDataInterface IVar1;
  IAnimNotifyEventContextDataInterface *in_RDX;
  
  this_00 = ::operator_new(0x38);
  if (this_00 != (FAnimNotifyStateMachineContext *)0x0) {
    IVar1 = (IAnimNotifyEventContextDataInterface)
            FAnimNotifyStateMachineContext::FAnimNotifyStateMachineContext
                      (this_00,&this->ActiveStateMachines);
    *in_RDX = IVar1;
    return (TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
            )in_RDX;
  }
  *in_RDX = (IAnimNotifyEventContextDataInterface)0x0;
  return (TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>
          )in_RDX;
}

