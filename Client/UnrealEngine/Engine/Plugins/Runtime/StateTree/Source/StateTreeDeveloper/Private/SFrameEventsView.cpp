// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 13

// operator()<FStateTreeTraceConditionEvent_const_> @ 14d702f50

void __thiscall
`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>::
operator()<FStateTreeTraceConditionEvent_const_>(void *this,FStateTreeTraceConditionEvent *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  iVar1 = (param_1->TypePath).Data.ArrayNum;
  pFVar2 = (param_1->TypePath).Data.AllocatorInstance.Data;
  local_40 = CONCAT44(local_40._4_4_,iVar1);
  local_48.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,pFVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = *(ForAnyElementType **)this;
  if (pFVar3 != &local_48) {
    if (pFVar3->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3->Data);
    }
    pFVar3->Data = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar3[1].Data = (undefined4)local_40;
    *(undefined4 *)((longlong)&pFVar3[1].Data + 4) = local_40._4_4_;
    local_40 = 0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar1 = (param_1->InstanceDataAsText).Data.ArrayNum;
  pFVar2 = (param_1->InstanceDataAsText).Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = CONCAT44(local_30._4_4_,iVar1);
  if (iVar1 == 0) {
    local_30 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,pFVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  if (pFVar3 != &local_38) {
    if (pFVar3->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3->Data);
    }
    pFVar3->Data = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar3[1].Data = (undefined4)local_30;
    *(undefined4 *)((longlong)&pFVar3[1].Data + 4) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  iVar1 = (param_1->DebugText).Data.ArrayNum;
  pFVar2 = (param_1->DebugText).Data.AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,pFVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
  if (pFVar3 != &local_28) {
    if (pFVar3->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3->Data);
    }
    pFVar3->Data = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar3[1].Data = (undefined4)local_20;
    *(undefined4 *)((longlong)&pFVar3[1].Data + 4) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// operator()<FStateTreeTraceEvaluatorEvent_const_> @ 14d703180

void __thiscall
`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>::
operator()<FStateTreeTraceEvaluatorEvent_const_>(void *this,FStateTreeTraceEvaluatorEvent *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  iVar1 = (param_1->TypePath).Data.ArrayNum;
  pFVar2 = (param_1->TypePath).Data.AllocatorInstance.Data;
  local_40 = CONCAT44(local_40._4_4_,iVar1);
  local_48.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,pFVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = *(ForAnyElementType **)this;
  if (pFVar3 != &local_48) {
    if (pFVar3->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3->Data);
    }
    pFVar3->Data = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar3[1].Data = (undefined4)local_40;
    *(undefined4 *)((longlong)&pFVar3[1].Data + 4) = local_40._4_4_;
    local_40 = 0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar1 = (param_1->InstanceDataAsText).Data.ArrayNum;
  pFVar2 = (param_1->InstanceDataAsText).Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = CONCAT44(local_30._4_4_,iVar1);
  if (iVar1 == 0) {
    local_30 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,pFVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  if (pFVar3 != &local_38) {
    if (pFVar3->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3->Data);
    }
    pFVar3->Data = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar3[1].Data = (undefined4)local_30;
    *(undefined4 *)((longlong)&pFVar3[1].Data + 4) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  iVar1 = (param_1->DebugText).Data.ArrayNum;
  pFVar2 = (param_1->DebugText).Data.AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,pFVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
  if (pFVar3 != &local_28) {
    if (pFVar3->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3->Data);
    }
    pFVar3->Data = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar3[1].Data = (undefined4)local_20;
    *(undefined4 *)((longlong)&pFVar3[1].Data + 4) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// operator()<FStateTreeTraceTaskEvent_const_> @ 14d7033b0

void __thiscall
`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_1>::
operator()<FStateTreeTraceTaskEvent_const_>(void *this,FStateTreeTraceTaskEvent *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  iVar1 = (param_1->TypePath).Data.ArrayNum;
  pFVar2 = (param_1->TypePath).Data.AllocatorInstance.Data;
  local_40 = CONCAT44(local_40._4_4_,iVar1);
  local_48.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    local_40 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_48,iVar1,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,pFVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = *(ForAnyElementType **)this;
  if (pFVar3 != &local_48) {
    if (pFVar3->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3->Data);
    }
    pFVar3->Data = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar3[1].Data = (undefined4)local_40;
    *(undefined4 *)((longlong)&pFVar3[1].Data + 4) = local_40._4_4_;
    local_40 = 0;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar1 = (param_1->InstanceDataAsText).Data.ArrayNum;
  pFVar2 = (param_1->InstanceDataAsText).Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = CONCAT44(local_30._4_4_,iVar1);
  if (iVar1 == 0) {
    local_30 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,pFVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  if (pFVar3 != &local_38) {
    if (pFVar3->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3->Data);
    }
    pFVar3->Data = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar3[1].Data = (undefined4)local_30;
    *(undefined4 *)((longlong)&pFVar3[1].Data + 4) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  iVar1 = (param_1->DebugText).Data.ArrayNum;
  pFVar2 = (param_1->DebugText).Data.AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,pFVar2,(longlong)iVar1 * 2);
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
  if (pFVar3 != &local_28) {
    if (pFVar3->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3->Data);
    }
    pFVar3->Data = local_28.Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)&pFVar3[1].Data = (undefined4)local_20;
    *(undefined4 *)((longlong)&pFVar3[1].Data + 4) = local_20._4_4_;
    local_20 = 0;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// operator()<FStateTreeTraceLogEvent> @ 14d7035e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_2>::
operator()<FStateTreeTraceLogEvent>(void *this,FString *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ETraceFrameType EVar7;
  ForAnyElementType _Src;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FFrameEventTreeElement *pFVar11;
  UObject *pUVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  ForAnyElementType *pFVar15;
  undefined1 auStackY_138 [32];
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> local_e8;
  UObject *local_d8;
  longlong local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 local_c0;
  FString local_b8;
  TRawPtrProxy<UE::StateTreeDebugger::FFrameEventTreeElement> local_a8;
  FString local_a0;
  longlong local_90;
  longlong lStack_88;
  undefined1 local_80;
  FString local_78 [3];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar9 = false;
  local_d8 = (UObject *)((ulonglong)local_d8 & 0xffffffff00000000);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_a0,pwVar13);
  _Src.Data = local_a0.Data.AllocatorInstance.Data;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 6;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a0.Data.ArrayNum == 0) {
    local_b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,local_a0.Data.ArrayNum,
               &local_b8.Data.ArrayMax);
    memcpy(local_b8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_a0.Data.ArrayNum * 2);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  pFVar11 = ::operator_new(0xb0);
  if (pFVar11 == (FFrameEventTreeElement *)0x0) {
    pFVar11 = (FFrameEventTreeElement *)0x0;
  }
  else {
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0xa8));
    lStack_88 = CONCAT71(uStack_c7,uStack_c8);
    local_80 = local_c0;
    local_90 = local_d0;
    ::FString::FString(local_78,&local_b8);
    lVar1 = *(longlong *)this;
    local_40 = 1;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    uVar4 = *(undefined4 *)(lVar1 + 0x14);
    uVar5 = *(undefined4 *)(lVar1 + 0x18);
    uVar6 = *(undefined4 *)(lVar1 + 0x1c);
    *(undefined4 *)&(pFVar11->Frame).Index = *(undefined4 *)(lVar1 + 0x10);
    *(undefined4 *)((longlong)&(pFVar11->Frame).Index + 4) = uVar4;
    *(undefined4 *)&(pFVar11->Frame).StartTime = uVar5;
    *(undefined4 *)((longlong)&(pFVar11->Frame).StartTime + 4) = uVar6;
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    EVar7 = *(ETraceFrameType *)(lVar1 + 0x28);
    uVar5 = *(undefined4 *)(lVar1 + 0x2c);
    *(undefined4 *)&(pFVar11->Frame).EndTime = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)((longlong)&(pFVar11->Frame).EndTime + 4) = uVar4;
    (pFVar11->Frame).FrameType = EVar7;
    *(undefined4 *)&(pFVar11->Frame).field_0x1c = uVar5;
    (pFVar11->Event).TypeIndex = '\x01';
    if ((code *)PTR_Construct_152b326f8 ==
        UE::Core::Private::TCopyConstructorCaller<FStateTreeTraceLogEvent>::Construct) {
      (pFVar11->Event)._padding_ = local_90;
      (pFVar11->Event)._padding_ = lStack_88;
      *(undefined1 *)&(pFVar11->Event)._padding_ = local_80;
      ::FString::FString((FString *)&(pFVar11->Event)._padding_,local_78);
    }
    else {
      (*(code *)PTR_Construct_152b326f8)(&pFVar11->Event,&local_90);
    }
    (pFVar11->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->Children).ArrayNum = 0;
    (pFVar11->Children).ArrayMax = 0;
    (pFVar11->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->Description).Data.ArrayNum = 0;
    (pFVar11->Description).Data.ArrayMax = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    (pFVar11->WeakStateTree).WeakPtr = (FWeakObjectPtr)0x0;
    local_d8 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    FWeakObjectPtr::operator=(&(pFVar11->WeakStateTree).WeakPtr,(FObjectPtr)&local_d8);
    bVar9 = true;
    if (((pFVar11->_padding_ != 0) && (pFVar11->_padding_ != 0)) &&
       (0 < *(int *)(pFVar11->_padding_ + 8))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_a8.Object = pFVar11;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1><UE::StateTreeDebugger::FFrameEventTreeElement>
            (&local_e8,&local_a8);
  if (bVar9) {
    uVar14 = (ulonglong)local_40;
    if (10 < uVar14) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14] ==
        UE::Core::Private::TDestructorCaller<FStateTreeTraceLogEvent>::Destruct) {
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14])(&local_90);
    }
  }
  lVar1 = *(longlong *)this;
  pFVar15 = (ForAnyElementType *)(lVar1 + 0x88);
  if (((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)pFVar15->Data <= &local_e8) &&
     (&local_e8 <
      (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)pFVar15->Data +
      *(int *)(lVar1 + 0x94))) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar10 = *(int *)(lVar1 + 0x90);
  if (iVar10 == *(int *)(lVar1 + 0x94)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,pFVar15,(int *)(lVar1 + 0x94));
  }
  *(int *)(lVar1 + 0x90) = iVar10 + 1;
  pFVar2 = pFVar15->Data;
  *(FFrameEventTreeElement **)(pFVar2 + (longlong)iVar10 * 0x10) = local_e8.Object;
  *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar10 * 0x10 + 8) =
       local_e8.SharedReferenceCount.ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// operator()<FStateTreeTracePropertyEvent> @ 14d703990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_2>::
operator()<FStateTreeTracePropertyEvent>(void *this,FString *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ETraceFrameType EVar7;
  ForAnyElementType _Src;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FFrameEventTreeElement *pFVar11;
  UObject *pUVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  ForAnyElementType *pFVar15;
  undefined1 auStackY_138 [32];
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> local_e8;
  UObject *local_d8;
  longlong local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 local_c0;
  FString local_b8;
  TRawPtrProxy<UE::StateTreeDebugger::FFrameEventTreeElement> local_a8;
  FString local_a0;
  longlong local_90;
  longlong lStack_88;
  undefined1 local_80;
  FString local_78 [3];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar9 = false;
  local_d8 = (UObject *)((ulonglong)local_d8 & 0xffffffff00000000);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_a0,pwVar13);
  _Src.Data = local_a0.Data.AllocatorInstance.Data;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 6;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a0.Data.ArrayNum == 0) {
    local_b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,local_a0.Data.ArrayNum,
               &local_b8.Data.ArrayMax);
    memcpy(local_b8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_a0.Data.ArrayNum * 2);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  pFVar11 = ::operator_new(0xb0);
  if (pFVar11 == (FFrameEventTreeElement *)0x0) {
    pFVar11 = (FFrameEventTreeElement *)0x0;
  }
  else {
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0xa8));
    lStack_88 = CONCAT71(uStack_c7,uStack_c8);
    local_80 = local_c0;
    local_90 = local_d0;
    ::FString::FString(local_78,&local_b8);
    lVar1 = *(longlong *)this;
    local_40 = 2;
    pFVar11->_padding_ = 0;
    pFVar11->_padding_ = 0;
    uVar4 = *(undefined4 *)(lVar1 + 0x14);
    uVar5 = *(undefined4 *)(lVar1 + 0x18);
    uVar6 = *(undefined4 *)(lVar1 + 0x1c);
    *(undefined4 *)&(pFVar11->Frame).Index = *(undefined4 *)(lVar1 + 0x10);
    *(undefined4 *)((longlong)&(pFVar11->Frame).Index + 4) = uVar4;
    *(undefined4 *)&(pFVar11->Frame).StartTime = uVar5;
    *(undefined4 *)((longlong)&(pFVar11->Frame).StartTime + 4) = uVar6;
    uVar4 = *(undefined4 *)(lVar1 + 0x24);
    EVar7 = *(ETraceFrameType *)(lVar1 + 0x28);
    uVar5 = *(undefined4 *)(lVar1 + 0x2c);
    *(undefined4 *)&(pFVar11->Frame).EndTime = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)((longlong)&(pFVar11->Frame).EndTime + 4) = uVar4;
    (pFVar11->Frame).FrameType = EVar7;
    *(undefined4 *)&(pFVar11->Frame).field_0x1c = uVar5;
    (pFVar11->Event).TypeIndex = '\x02';
    if ((code *)PTR_Construct_152b32700 ==
        UE::Core::Private::TCopyConstructorCaller<FStateTreeTracePropertyEvent>::Construct) {
      (pFVar11->Event)._padding_ = local_90;
      (pFVar11->Event)._padding_ = lStack_88;
      *(undefined1 *)&(pFVar11->Event)._padding_ = local_80;
      ::FString::FString((FString *)&(pFVar11->Event)._padding_,local_78);
    }
    else {
      (*(code *)PTR_Construct_152b32700)(&pFVar11->Event,&local_90);
    }
    (pFVar11->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->Children).ArrayNum = 0;
    (pFVar11->Children).ArrayMax = 0;
    (pFVar11->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->Description).Data.ArrayNum = 0;
    (pFVar11->Description).Data.ArrayMax = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    (pFVar11->WeakStateTree).WeakPtr = (FWeakObjectPtr)0x0;
    local_d8 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    FWeakObjectPtr::operator=(&(pFVar11->WeakStateTree).WeakPtr,(FObjectPtr)&local_d8);
    bVar9 = true;
    if (((pFVar11->_padding_ != 0) && (pFVar11->_padding_ != 0)) &&
       (0 < *(int *)(pFVar11->_padding_ + 8))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_a8.Object = pFVar11;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>::
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1><UE::StateTreeDebugger::FFrameEventTreeElement>
            (&local_e8,&local_a8);
  if (bVar9) {
    uVar14 = (ulonglong)local_40;
    if (10 < uVar14) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14] ==
        UE::Core::Private::TDestructorCaller<FStateTreeTracePropertyEvent>::Destruct) {
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14])(&local_90);
    }
  }
  lVar1 = *(longlong *)this;
  pFVar15 = (ForAnyElementType *)(lVar1 + 0x88);
  if (((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)pFVar15->Data <= &local_e8) &&
     (&local_e8 <
      (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)pFVar15->Data +
      *(int *)(lVar1 + 0x94))) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar10 = *(int *)(lVar1 + 0x90);
  if (iVar10 == *(int *)(lVar1 + 0x94)) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,pFVar15,(int *)(lVar1 + 0x94));
  }
  *(int *)(lVar1 + 0x90) = iVar10 + 1;
  pFVar2 = pFVar15->Data;
  *(FFrameEventTreeElement **)(pFVar2 + (longlong)iVar10 * 0x10) = local_e8.Object;
  *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar10 * 0x10 + 8) =
       local_e8.SharedReferenceCount.ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14d712100

TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1> * __thiscall
`UE::StateTreeDebugger::SFrameEventsView::Construct'::__l2::<lambda_1>::operator()
          (void *this,
          TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1> *__return_storage_ptr__,
          TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  code *pcVar1;
  SFrameEventViewRow *pSVar2;
  bool bVar3;
  FArguments *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSlateDecl<UE::StateTreeDebugger::SFrameEventViewRow,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>_>
  local_368;
  undefined8 local_350;
  FSharedReferencer<1> local_348;
  T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>
  local_340;
  TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1> local_330;
  FArguments local_320;
  
  pFVar4 = STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::FArguments::
           FArguments(&local_320);
  local_340.Arg0 = param_2;
  local_340.Arg1 = param_1;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  local_368._RequiredArgs = &local_340;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  local_368._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = ::operator_new(0x418);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSFrameEventViewRow_StateTreeDebugger_UE___00_SharedPointerInternals__6B_
    ;
    memset(pTVar5 + 1,0,0x408);
    STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
    STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
              ((STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
               (pTVar5 + 1));
    pTVar5[1]._padding_ =
         (longlong)&UE::StateTreeDebugger::SFrameEventViewRow::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar5[1].SharedReferenceCount =
         &UE::StateTreeDebugger::SFrameEventViewRow::_vftable__for__SBorder__;
    pTVar5[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0x41]._padding_ = 0;
    pTVar7 = pTVar5;
  }
  TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>::
  TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1>
            (&local_330,(SFrameEventViewRow *)(pTVar7 + 1),pTVar7);
  local_348.ReferenceController = local_330.SharedReferenceCount.ReferenceController;
  if (local_330.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_330.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_330.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_368._Widget.Object = local_330.Object;
  local_350 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_368._Widget.SharedReferenceCount,&local_348);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_348.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_330.SharedReferenceCount.ReferenceController);
  pSVar2 = local_368._Widget.Object;
  if ((local_368._Widget.Object == (SFrameEventViewRow *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<UE::StateTreeDebugger::SFrameEventViewRow,1> *)(*pcVar1)();
    return pTVar6;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar2->_padding_,"SFrameEventViewRow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
             ,0x56,0x408);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<UE::StateTreeDebugger::SFrameEventViewRow,RequiredArgs::T2RequiredArgs<TSharedRef<STableViewBase,1>_const_&,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_&>_>
  ::operator<<=(&local_368,__return_storage_ptr__,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368._Widget.SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::FArguments::~FArguments
            (&local_320);
  return __return_storage_ptr__;
}

// operator() @ 14d7131d0

bool __thiscall
`UE::StateTreeDebugger::SFrameEventsView::SelectByPredicate'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FFrameEventTreeElement *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  
  if (param_1->Object == (FFrameEventTreeElement *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  cVar8 = (**(code **)((longlong)this + 8))
                    (*(undefined8 *)((longlong)this + 0x10),&param_1->Object->Event);
  if (cVar8 != '\0') {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    puVar2 = *(undefined8 **)this;
    pFVar3 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (TReferenceControllerBase<1> *)puVar2[1];
    *puVar2 = pFVar3;
    puVar2[1] = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return **(longlong **)this == 0;
}

// Construct @ 14d71af80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::StateTreeDebugger::SFrameEventsView::Construct
          (SFrameEventsView *this,FArguments *param_1,TNotNull<UStateTree_const_*> param_2)

{
  int *piVar1;
  byte *pbVar2;
  TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<SSplitter::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar4;
  FName FVar5;
  STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSlotArguments *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSlotArguments *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  code *pcVar13;
  float fVar14;
  FSharedReferencer<1> FVar15;
  FSharedReferencer<1> FVar16;
  FSlotArguments *pFVar17;
  FArguments *pFVar18;
  bool bVar19;
  char cVar20;
  byte bVar21;
  int iVar22;
  FArguments *pFVar23;
  FArguments *pFVar24;
  undefined8 *puVar25;
  ulong64 uVar26;
  FArguments *pFVar27;
  FName *pFVar28;
  ISlateStyle *pIVar29;
  FSlotArguments *pFVar30;
  FSlot *pFVar31;
  FSlotArguments *pFVar32;
  FArguments *pFVar33;
  FSlotArguments *pFVar34;
  SScrollBox *pSVar35;
  SScrollBox *pSVar36;
  FArguments *pFVar37;
  FSlot *pFVar38;
  TSharedRef<SHorizontalBox,1> *pTVar39;
  FArguments *pFVar40;
  TSharedRef<SVerticalBox,1> *pTVar41;
  SSplitter *pSVar42;
  SSplitter *pSVar43;
  TSharedRef<SBorder,1> *pTVar44;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_2528;
  T0RequiredArgs local_2527;
  T0RequiredArgs local_2526;
  T0RequiredArgs local_2525;
  T0RequiredArgs local_2524;
  T0RequiredArgs local_2523;
  T0RequiredArgs local_2522 [2];
  FLLMScope local_2520;
  FLLMScope local_251c;
  FLLMScope local_2518;
  FLLMScope local_2514;
  FLLMScope local_2510;
  FLLMScope local_250c;
  FLLMScope local_2508;
  FLLMScope local_2504;
  FLLMScope local_2500 [2];
  float local_24f8;
  undefined1 local_24f4;
  undefined1 local_24f0 [8];
  ForAnyElementType FStack_24e8;
  ulonglong local_24e0;
  float local_24d8;
  undefined1 local_24d4;
  undefined1 local_24d0 [8];
  ForAnyElementType FStack_24c8;
  ulonglong local_24c0;
  FArguments *local_24b8;
  SScrollBox *local_24b0;
  FSharedReferencer<1> local_24a8;
  SHorizontalBox *local_24a0;
  FSharedReferencer<1> local_2498;
  SVerticalBox *local_2490;
  FSharedReferencer<1> local_2488;
  FArguments *local_2480;
  FWeakObjectPtr local_2478;
  STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *local_2470;
  FSharedReferencer<1> local_2468 [2];
  TSharedRef<SScrollBar,1> local_2458;
  TSharedRef<SScrollBar,1> local_2448;
  FSlateBrush *local_2438;
  undefined1 local_2430;
  undefined1 local_2428 [8];
  ForAnyElementType FStack_2420;
  ulonglong local_2418;
  TSlateDecl<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T0RequiredArgs>
  local_2410;
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs> local_23f8;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_23e0;
  STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *local_23c8;
  FSharedReferencer<1> local_23c0;
  SScrollBar *local_23b8;
  FSharedReferencer<1> FStack_23b0;
  SScrollBar *local_23a8;
  FSharedReferencer<1> FStack_23a0;
  double local_2398;
  double dStack_2390;
  undefined1 local_2388;
  undefined1 local_2380 [8];
  ForAnyElementType FStack_2378;
  ulonglong local_2370;
  double local_2368;
  double dStack_2360;
  undefined1 local_2358;
  undefined1 local_2350 [8];
  ForAnyElementType FStack_2348;
  ulonglong local_2340;
  SVerticalBox *local_2338;
  TReferenceControllerBase<1> *pTStack_2330;
  FName local_2328;
  FMemScope local_2320;
  FSlotArguments *local_2318;
  FName local_2310;
  FMemScope local_2308;
  FSlotArguments *local_2300;
  FArguments *local_22f8;
  FName local_22f0;
  FMemScope local_22e8;
  FSlotArguments *local_22e0;
  FName local_22d8;
  FMemScope local_22d0;
  FArguments *local_22c8;
  FName local_22c0;
  FMemScope local_22b8;
  TReferenceControllerBase<1> *local_22b0;
  FArguments *local_22a8;
  UStateTree *local_22a0;
  FName local_2298;
  FMemScope local_2290;
  undefined8 local_2288;
  FSharedReferencer<1> FStack_2280;
  FName local_2278;
  FMemScope local_2270;
  FName local_2268;
  FMemScope local_2260;
  FSlot *local_2258;
  FName local_2250;
  FMemScope local_2248;
  FSlot *local_2240;
  TAttribute<float> local_2238;
  undefined1 local_2218 [16];
  undefined1 local_2208 [24];
  float local_21f0;
  bool local_21ec;
  undefined1 local_21e8 [24];
  undefined1 local_21d0 [16];
  undefined1 local_21c0 [24];
  float local_21a8;
  bool local_21a4;
  undefined1 local_21a0 [24];
  TSharedRef<SWidget,1> local_2188;
  TSharedRef<SWidget,1> local_2178;
  FDestructionSentinel local_2168;
  FDestructionSentinel local_2150;
  FDestructionSentinel local_2138;
  FDestructionSentinel local_2120;
  FDestructionSentinel local_2108;
  FDestructionSentinel local_20f0;
  undefined1 *local_20d8;
  FDestructionSentinel local_20d0;
  undefined1 *local_20b8;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> local_20b0;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> local_2098;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2080;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2068;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2050;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2038;
  SScrollBar *local_2020;
  TReferenceControllerBase<1> *pTStack_2018;
  SScrollBar *local_2010;
  TReferenceControllerBase<1> *pTStack_2008;
  TSharedRef<SBorder,1> local_2000;
  TSharedRef<SVerticalBox,1> local_1ff0;
  TSharedRef<SVerticalBox,1> local_1fe0;
  TSharedRef<SHorizontalBox,1> local_1fd0;
  FName local_1fc0;
  undefined1 local_1fb8 [560];
  undefined1 local_1d88 [24];
  undefined1 local_1d70 [24];
  undefined1 local_1d58 [24];
  undefined1 local_1d40 [24];
  undefined1 local_1d28 [608];
  undefined1 local_1ac8 [24];
  undefined1 local_1ab0 [24];
  undefined1 local_1a98 [24];
  undefined1 local_1a80 [32];
  FSlotArguments local_1a60;
  FSlotArguments local_19c8;
  FSlotArguments local_18e0;
  FArguments local_17f8;
  FArguments local_15f0;
  FArguments local_13e8;
  FSlotArguments local_11e0;
  FSlotArguments local_10f8;
  FSlotArguments local_1010;
  FSlotArguments local_f28;
  FArguments local_e40;
  FArguments local_ba0;
  FArguments local_900;
  FArguments local_520;
  
  if ((GC::GIsIncrementalReachabilityPending) && (param_2.Val != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2.Val);
  }
  pFVar38 = (FSlot *)0x0;
  local_2478.ObjectIndex = 0;
  local_2478.ObjectSerialNumber = 0;
  local_22a0 = param_2.Val;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_2.Val != (UStateTree *)0x0)) {
    GC::MarkAsReachable((UObject *)param_2.Val);
  }
  FWeakObjectPtr::operator=(&local_2478,(FObjectPtr)&local_22a0);
  (this->WeakStateTree).WeakPtr = local_2478;
  pFVar23 = SScrollBar::FArguments::FArguments(&local_e40);
  dStack_2390 = _UNK_1513d9f08;
  local_2398 = ___xmm_40280000000000004028000000000000;
  pFVar23->_Orientation = Orient_Horizontal;
  local_2388 = 1;
  local_2370 = 0;
  local_2380 = (undefined1  [8])0x0;
  FStack_2378.Data = (FScriptContainerElement *)0x0;
  (pFVar23->_Thickness).Value.field0_0x0._s_0.X = local_2398;
  (pFVar23->_Thickness).Value.field0_0x0._s_0.Y = dStack_2390;
  (pFVar23->_Thickness).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Thickness).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2380);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2380,
             (FWriteAccessScope *)&local_2168);
  if (((int)local_2370 != 0) && (FStack_2378.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2378.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2378,0,0,0x10);
    local_2370 = local_2370 & 0xffffffff00000000;
  }
  if (local_2168.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2168.Accessor,&local_2168);
  }
  if (FStack_2378.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2378.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2380);
  FLLMScope::FLLMScope(&local_2520,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2298 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2290,&local_2298,true);
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
            (&local_20b0,"SScrollBar",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
             ,0x4a,local_res18);
  FMemScope::~FMemScope(&local_2290);
  FLLMScope::~FLLMScope(&local_2520);
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::operator<<=(&local_20b0,&local_2448,pFVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20b0._Widget.SharedReferenceCount.ReferenceController);
  SScrollBar::FArguments::~FArguments(&local_e40);
  pFVar23 = SScrollBar::FArguments::FArguments(&local_ba0);
  dStack_2360 = _UNK_1513d9f08;
  local_2368 = ___xmm_40280000000000004028000000000000;
  pFVar23->_Orientation = Orient_Vertical;
  local_2358 = 1;
  local_2340 = 0;
  local_2350 = (undefined1  [8])0x0;
  FStack_2348.Data = (FScriptContainerElement *)0x0;
  (pFVar23->_Thickness).Value.field0_0x0._s_0.X = local_2368;
  (pFVar23->_Thickness).Value.field0_0x0._s_0.Y = dStack_2360;
  (pFVar23->_Thickness).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Thickness).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2350);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2350,
             (FWriteAccessScope *)&local_2150);
  if (((int)local_2340 != 0) && (FStack_2348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2348,0,0,0x10);
    local_2340 = local_2340 & 0xffffffff00000000;
  }
  if (local_2150.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2150.Accessor,&local_2150);
  }
  if (FStack_2348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2350);
  FLLMScope::FLLMScope(&local_251c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2278 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2270,&local_2278,true);
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
            (&local_2098,"SScrollBar",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
             ,0x4e,local_res20);
  FMemScope::~FMemScope(&local_2270);
  FLLMScope::~FLLMScope(&local_251c);
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::operator<<=(&local_2098,&local_2458,pFVar23);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2098._Widget.SharedReferenceCount.ReferenceController);
  SScrollBar::FArguments::~FArguments(&local_ba0);
  pFVar24 = STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::FArguments::
            FArguments(&local_520);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnGenerateRow,
             (FWriteAccessScope *)&local_20d0);
  local_20b8 = &(pFVar24->_OnGenerateRow).field_0x8;
  puVar25 = Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20b8);
  if (puVar25 != (undefined8 *)0x0) {
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar26;
    *puVar25 = &TBaseFunctorDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar25[3] = this;
  }
  if (local_20d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20d0.Accessor,&local_20d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_OnGetChildren,
             (FWriteAccessScope *)&local_20f0);
  local_20d8 = &(pFVar24->_OnGetChildren).field_0x8;
  puVar25 = Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20d8);
  if (puVar25 != (undefined8 *)0x0) {
    *puVar25 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__AEAV__TArray_V__TSharedPtr_UFFrameEventTreeElement_StateTreeDebugger_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar26 = FDelegateHandle::GenerateNewID();
    puVar25[2] = uVar26;
    *puVar25 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy,`UE::StateTreeDebugger::SFrameEventsView::Construct'::`2'::<lambda_2>_>
                ::_vftable_;
  }
  if (local_20f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20f0.Accessor,&local_20f0);
  }
  pFVar24->_TreeItemsSource_ArrayPointer =
       (TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
        *)0x0;
  pFVar24->_TreeItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0;
  local_2288 = 0;
  FStack_2280.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&pFVar24->_TreeItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1>
       *)&local_2288) {
    (pFVar24->_TreeItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar24->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_2280)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_2280.ReferenceController);
  FVar15.ReferenceController = local_2458.SharedReferenceCount.ReferenceController;
  pFVar24->_TreeItemsSource_ArrayPointer = &this->EventsTreeElements;
  pFVar24->_AllowOverscroll = No;
  if (local_2458.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2020 = (pFVar24->_ExternalScrollbar).Object;
  pTStack_2018 = (pFVar24->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar24->_ExternalScrollbar).Object = local_2458.Object;
  (pFVar24->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       local_2458.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2018);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  FLLMScope::FLLMScope(&local_2518,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2268 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2260,&local_2268,true);
  TSlateDecl<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_2410,"STreeView<TSharedPtr<FFrameEventTreeElement>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
             ,0x53,&local_2528);
  FMemScope::~FMemScope(&local_2260);
  FLLMScope::~FLLMScope(&local_2518);
  pSVar6 = local_2410._Widget.Object;
  if ((local_2410._Widget.Object ==
       (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_2410._Widget.Object,(FSlateBaseNamedArgs *)pFVar24);
  STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::Construct
            (local_2410._Widget.Object,pFVar24);
  if ((local_2410._Widget.Object ==
       (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (((local_2410._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar20 = (**(code **)(*(longlong *)local_2410._Widget.Object + 0x228))
                       (local_2410._Widget.Object);
    bVar21 = 0;
    if (cVar20 != '\0') goto LAB_14d71b608;
  }
  else {
LAB_14d71b608:
    bVar21 = 0x20;
  }
  (local_2410._Widget.Object)->field_0x30 = (local_2410._Widget.Object)->field_0x30 & 0xdf;
  (local_2410._Widget.Object)->field_0x30 = (local_2410._Widget.Object)->field_0x30 | bVar21;
  if ((local_2410._Widget.Object ==
       (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  (local_2410._Widget.Object)->field_0x31 = (local_2410._Widget.Object)->field_0x31 | 4;
  if ((local_2410._Widget.Object ==
       (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  FVar15.ReferenceController = local_2410._Widget.SharedReferenceCount.ReferenceController;
  local_2410._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2410._Widget.Object =
       (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0;
  if ((pSVar6 == (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_23c8 = pSVar6;
  local_23c0.ReferenceController = FVar15.ReferenceController;
  if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->EventsTreeView !=
      (TSharedPtr<STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>,1> *)
      &local_23c8) {
    (this->EventsTreeView).Object = pSVar6;
    local_23c8 = (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->EventsTreeView).SharedReferenceCount,&local_23c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::FArguments::~FArguments
            (&local_520);
  pFVar27 = SBorder::FArguments::FArguments(&local_900);
  pFVar27 = SBorder::FArguments::Padding(pFVar27,__real_40800000);
  local_22c8 = pFVar27;
  pFVar28 = ::FName::FName(&local_1fc0,"ToolPanel.GroupBorder");
  FVar5 = *pFVar28;
  pIVar29 = FAppStyle::Get();
  local_2438 = (FSlateBrush *)(**(code **)((longlong)*pIVar29 + 0x50))(pIVar29,FVar5);
  local_2430 = 1;
  local_2418 = 0;
  local_2428 = (undefined1  [8])0x0;
  FStack_2420.Data = (FScriptContainerElement *)0x0;
  (pFVar27->_BorderImage).Value = local_2438;
  (pFVar27->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2428);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2428,
             (FWriteAccessScope *)&local_2138);
  if (((int)local_2418 != 0) && (FStack_2420.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2420.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2420,0,0,0x10);
    local_2418 = local_2418 & 0xffffffff00000000;
  }
  if (local_2138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2138.Accessor,&local_2138);
  }
  if (FStack_2420.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2420.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2428);
  local_22a8 = SVerticalBox::FArguments::FArguments(&local_13e8);
  local_22e0 = SVerticalBox::Slot(&local_f28);
  local_22f8 = SSplitter::FArguments::FArguments((FArguments *)local_1fb8);
  local_22f8->_Orientation = Orient_Horizontal;
  local_2300 = SSplitter::Slot(&local_1a60);
  local_2480 = SVerticalBox::FArguments::FArguments(&local_15f0);
  pFVar30 = SVerticalBox::Slot(&local_1010);
  fVar14 = __real_3f800000;
  local_24f8 = __real_3f800000;
  local_24e0 = 0;
  local_2218._8_4_ = __real_3f800000;
  local_24f4 = 1;
  local_24f0 = (undefined1  [8])0x0;
  FStack_24e8.Data = (FScriptContainerElement *)0x0;
  local_2218._0_4_ = SizeRule_Stretch;
  local_2218[0xc] = true;
  local_2318 = pFVar30;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_2208,
             (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_24f0);
  local_21f0 = local_24f8;
  local_21ec = (bool)local_24f4;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_21e8,
             (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_24f0);
  TOptional<FSizeParam>::operator=
            ((TOptional<FSizeParam> *)&pFVar30->field_0x58,(FSizeParam *)local_2218);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_21e8);
  if ((void *)local_21e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_21e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_21e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2208);
  if ((void *)local_2208._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2208._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2208);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_24f0,
             (FWriteAccessScope *)&local_2120);
  if (((int)local_24e0 != 0) && (FStack_24e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_24e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_24e8,0,0,0x10);
    local_24e0 = local_24e0 & 0xffffffff00000000;
  }
  if (local_2120.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2120.Accessor,&local_2120);
  }
  if (FStack_24e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_24e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_24f0);
  local_24b8 = SHorizontalBox::FArguments::FArguments(&local_17f8);
  pFVar31 = ::operator_new(0x58);
  local_2258 = pFVar38;
  if (pFVar31 != (FSlot *)0x0) {
    *(undefined8 *)pFVar31 = 0;
    *(undefined8 *)&pFVar31->field_0x8 = 0;
    *(undefined8 *)&pFVar31->field_0x10 = 0;
    *(undefined8 *)&pFVar31->field_0x18 = 0;
    *(undefined8 *)&pFVar31->field_0x20 = 0;
    *(undefined8 *)&pFVar31->field_0x28 = 0;
    *(undefined8 *)&pFVar31->field_0x30 = 0;
    *(undefined8 *)&pFVar31->field_0x38 = 0;
    *(undefined8 *)&pFVar31->field_0x40 = 0;
    *(undefined8 *)&pFVar31->field_0x48 = 0;
    *(undefined8 *)&pFVar31->field_0x50 = 0;
    local_2258 = SHorizontalBox::FSlot::FSlot(pFVar31);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_18e0,(FSlot *)&local_2258);
  local_2238.Value = 1.0;
  local_2238.Getter._16_8_ = 0;
  local_2238.bIsSet = true;
  local_2238.Getter._0_8_ = 0;
  local_2238.Getter._8_8_ = 0;
  pFVar32 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(&local_18e0,&local_2238);
  pFVar32 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar32->field_0x18,0.0);
  pFVar33 = SScrollBox::FArguments::FArguments((FArguments *)local_1d28);
  FVar15.ReferenceController = local_2448.SharedReferenceCount.ReferenceController;
  pFVar33->_Orientation = Orient_Horizontal;
  if (local_2448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_2448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2010 = (pFVar33->_ExternalScrollbar).Object;
  pTStack_2008 = (pFVar33->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (pFVar33->_ExternalScrollbar).Object = local_2448.Object;
  (pFVar33->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       local_2448.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2008);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  pFVar34 = SScrollBox::Slot(&local_10f8);
  local_24d8 = fVar14;
  local_21d0._8_4_ = fVar14;
  local_24c0 = 0;
  local_24d4 = 1;
  local_24d0 = (undefined1  [8])0x0;
  FStack_24c8.Data = (FScriptContainerElement *)0x0;
  local_21d0._0_4_ = SizeRule_Stretch;
  local_21d0[0xc] = true;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_21c0,
             (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_24d0);
  local_21a8 = local_24d8;
  local_21a4 = (bool)local_24d4;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_21a0,
             (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_24d0);
  TOptional<FSizeParam>::operator=
            ((TOptional<FSizeParam> *)&pFVar34->field_0x58,(FSizeParam *)local_21d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_21a0);
  if ((void *)local_21a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_21a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_21a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_21c0);
  if ((void *)local_21c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_21c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_21c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_24d0,
             (FWriteAccessScope *)&local_2108);
  if (((int)local_24c0 != 0) && (FStack_24c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_24c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_24c8,0,0,0x10);
    local_24c0 = local_24c0 & 0xffffffff00000000;
  }
  if (local_2108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2108.Accessor,&local_2108);
  }
  if (FStack_24c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_24c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_24d0);
  if (((this->EventsTreeView).Object ==
       (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pSVar6 = (this->EventsTreeView).Object;
  pTVar7 = (this->EventsTreeView).SharedReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar6 == (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2470 = pSVar6;
  local_2468[0].ReferenceController = pTVar7;
  if ((STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> **)
      &pFVar34->field_0x8 != &local_2470) {
    *(STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> **)&pFVar34->field_0x8
         = pSVar6;
    local_2470 = (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar34->field_0x10,local_2468);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2468[0].ReferenceController);
  pTVar3 = &pFVar33->_Slots;
  pFVar8 = (FSlotArguments *)(pTVar3->AllocatorInstance).Data;
  if (((pFVar8 <= pFVar34) && (pFVar34 < pFVar8 + (pFVar33->_Slots).ArrayMax)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar22 = (pFVar33->_Slots).ArrayNum;
  piVar1 = &(pFVar33->_Slots).ArrayMax;
  if (iVar22 == *piVar1) {
    iVar22 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e8,&pTVar3->AllocatorInstance,piVar1);
  }
  (pFVar33->_Slots).ArrayNum = iVar22 + 1;
  SScrollBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar3->AllocatorInstance).Data + (longlong)iVar22 * 0xe8),pFVar34)
  ;
  FLLMScope::FLLMScope(&local_2514,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2250 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2248,&local_2250,true);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
            (&local_23e0,"SScrollBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
             ,0x79,&local_2527);
  FMemScope::~FMemScope(&local_2248);
  FLLMScope::~FLLMScope(&local_2514);
  pSVar35 = TSharedPtr<SScrollBox,1>::operator->(&local_23e0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar35,(FSlateBaseNamedArgs *)pFVar33);
  pSVar35 = local_23e0._Widget.Object;
  SScrollBox::Construct(local_23e0._Widget.Object,pFVar33);
  pSVar36 = TSharedPtr<SScrollBox,1>::operator->(&local_23e0._Widget);
  if ((pSVar36->field_0x30 & 0x10) == 0) {
    cVar20 = (**(code **)(*(longlong *)pSVar36 + 0x228))(pSVar36);
    bVar21 = 0;
    if (cVar20 != '\0') goto LAB_14d71be68;
  }
  else {
LAB_14d71be68:
    bVar21 = 0x20;
  }
  pSVar36->field_0x30 = pSVar36->field_0x30 & 0xdf;
  pSVar36->field_0x30 = pSVar36->field_0x30 | bVar21;
  pSVar36 = TSharedPtr<SScrollBox,1>::operator->(&local_23e0._Widget);
  pSVar36->field_0x31 = pSVar36->field_0x31 | 4;
  if ((local_23e0._Widget.Object == (SScrollBox *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  FVar15.ReferenceController = local_23e0._Widget.SharedReferenceCount.ReferenceController;
  local_23e0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_23e0._Widget.Object = (SScrollBox *)0x0;
  if ((pSVar35 == (SScrollBox *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_24b0 = pSVar35;
  local_24a8.ReferenceController = FVar15.ReferenceController;
  if (FVar15.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar15.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SScrollBox **)&pFVar32->field_0x8 != &local_24b0) {
    *(SScrollBox **)&pFVar32->field_0x8 = pSVar35;
    local_24b0 = (SScrollBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar32->field_0x10,&local_24a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_24a8.ReferenceController);
  pFVar37 = SHorizontalBox::FArguments::operator+(local_24b8,pFVar32);
  pFVar31 = ::operator_new(0x58);
  if (pFVar31 != (FSlot *)0x0) {
    *(undefined8 *)pFVar31 = 0;
    *(undefined8 *)&pFVar31->field_0x8 = 0;
    *(undefined8 *)&pFVar31->field_0x10 = 0;
    *(undefined8 *)&pFVar31->field_0x18 = 0;
    *(undefined8 *)&pFVar31->field_0x20 = 0;
    *(undefined8 *)&pFVar31->field_0x28 = 0;
    *(undefined8 *)&pFVar31->field_0x30 = 0;
    *(undefined8 *)&pFVar31->field_0x38 = 0;
    *(undefined8 *)&pFVar31->field_0x40 = 0;
    *(undefined8 *)&pFVar31->field_0x48 = 0;
    *(undefined8 *)&pFVar31->field_0x50 = 0;
    pFVar38 = SHorizontalBox::FSlot::FSlot(pFVar31);
  }
  local_2240 = pFVar38;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_19c8,(FSlot *)&local_2240);
  pFVar32 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_19c8);
  local_22b0 = local_2458.SharedReferenceCount.ReferenceController;
  local_23b8 = local_2458.Object;
  FStack_23b0.ReferenceController = local_2458.SharedReferenceCount.ReferenceController;
  if (local_2458.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2458.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SScrollBar **)&pFVar32->field_0x8 != &local_23b8) {
    *(SScrollBar **)&pFVar32->field_0x8 = local_2458.Object;
    local_23b8 = (SScrollBar *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar32->field_0x10,&FStack_23b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_23b0.ReferenceController);
  pFVar37 = SHorizontalBox::FArguments::operator+(pFVar37,pFVar32);
  FLLMScope::FLLMScope(&local_2510,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2328 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2320,&local_2328,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_2038,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
             ,0x74,&local_2526);
  FMemScope::~FMemScope(&local_2320);
  FLLMScope::~FLLMScope(&local_2510);
  pTVar39 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2038,&local_1fd0,pFVar37);
  pFVar30 = local_2318;
  local_24a0 = pTVar39->Object;
  local_24b8 = (FArguments *)(pTVar39->SharedReferenceCount).ReferenceController;
  if (local_24b8 != (FArguments *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_24b8)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_24b8)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    ((TReferenceControllerBase<1> *)local_24b8)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_24b8)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2498.ReferenceController = (TReferenceControllerBase<1> *)local_24b8;
  if ((SHorizontalBox **)&local_2318->field_0x8 != &local_24a0) {
    *(SHorizontalBox **)&local_2318->field_0x8 = local_24a0;
    local_24a0 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_2318->field_0x10,&local_2498);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2498.ReferenceController);
  pFVar40 = SVerticalBox::FArguments::operator+(local_2480,pFVar30);
  pFVar30 = SVerticalBox::Slot(&local_11e0);
  pFVar30 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar30);
  local_2480 = (FArguments *)local_2448.SharedReferenceCount.ReferenceController;
  local_23a8 = local_2448.Object;
  FStack_23a0.ReferenceController = local_2448.SharedReferenceCount.ReferenceController;
  if (local_2448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_2448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SScrollBar **)&pFVar30->field_0x8 != &local_23a8) {
    *(SScrollBar **)&pFVar30->field_0x8 = local_2448.Object;
    local_23a8 = (SScrollBar *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar30->field_0x10,&FStack_23a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_23a0.ReferenceController);
  pFVar40 = SVerticalBox::FArguments::operator+(pFVar40,pFVar30);
  FLLMScope::FLLMScope(&local_250c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2310 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2308,&local_2310,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_2050,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
             ,0x70,&local_2525);
  FMemScope::~FMemScope(&local_2308);
  FLLMScope::~FLLMScope(&local_250c);
  pTVar41 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2050,&local_1fe0,pFVar40);
  pFVar17 = local_2300;
  pTVar9 = (pTVar41->SharedReferenceCount).ReferenceController;
  local_2490 = pTVar41->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2488.ReferenceController = pTVar9;
  if ((SVerticalBox **)&local_2300->_padding_ != &local_2490) {
    local_2300->_padding_ = (longlong)local_2490;
    local_2490 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_2300->_padding_,&local_2488);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2488.ReferenceController);
  pFVar18 = local_22f8;
  pTVar4 = &local_22f8->_Slots;
  pFVar10 = (FSlotArguments *)(pTVar4->AllocatorInstance).Data;
  if (((pFVar10 <= pFVar17) && (pFVar17 < pFVar10 + (local_22f8->_Slots).ArrayMax)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar22 = (pFVar18->_Slots).ArrayNum;
  piVar1 = &(pFVar18->_Slots).ArrayMax;
  if (iVar22 == *piVar1) {
    iVar22 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x898,&pTVar4->AllocatorInstance,piVar1);
  }
  (pFVar18->_Slots).ArrayNum = iVar22 + 1;
  SSplitter::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar4->AllocatorInstance).Data + (longlong)iVar22 * 0x98),pFVar17)
  ;
  FLLMScope::FLLMScope(&local_2508,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_22f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_22e8,&local_22f0,true);
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplitter,RequiredArgs::T0RequiredArgs>
            (&local_23f8,"SSplitter",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
             ,0x6c,&local_2524);
  FMemScope::~FMemScope(&local_22e8);
  FLLMScope::~FLLMScope(&local_2508);
  pSVar42 = TSharedPtr<SSplitter,1>::operator->(&local_23f8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar42,(FSlateBaseNamedArgs *)pFVar18);
  pSVar42 = local_23f8._Widget.Object;
  SSplitter::Construct(local_23f8._Widget.Object,pFVar18);
  pSVar43 = TSharedPtr<SSplitter,1>::operator->(&local_23f8._Widget);
  if ((pSVar43->_padding_ & 0x10) == 0) {
    cVar20 = (**(code **)(pSVar43->_padding_ + 0x228))(pSVar43);
    bVar21 = 0;
    if (cVar20 == '\0') goto LAB_14d71c3f8;
  }
  bVar21 = 0x20;
LAB_14d71c3f8:
  *(byte *)&pSVar43->_padding_ = (byte)pSVar43->_padding_ & 0xdf;
  *(byte *)&pSVar43->_padding_ = (byte)pSVar43->_padding_ | bVar21;
  pSVar43 = TSharedPtr<SSplitter,1>::operator->(&local_23f8._Widget);
  pbVar2 = (byte *)((longlong)&pSVar43->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_23f8._Widget.Object == (SSplitter *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  FVar16.ReferenceController = local_23f8._Widget.SharedReferenceCount.ReferenceController;
  local_23f8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_23f8._Widget.Object = (SSplitter *)0x0;
  if ((pSVar42 == (SSplitter *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_2188.Object = (SWidget *)pSVar42;
  local_2188.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
  if (FVar16.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar16.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar30 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_22e0,&local_2188);
  pFVar40 = SVerticalBox::FArguments::operator+(local_22a8,pFVar30);
  FLLMScope::FLLMScope(&local_2504,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_22d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_22d0,&local_22d8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_2068,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
             ,0x69,&local_2523);
  FMemScope::~FMemScope(&local_22d0);
  FLLMScope::~FLLMScope(&local_2504);
  pTVar41 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2068,&local_1ff0,pFVar40);
  pFVar27 = local_22c8;
  pTVar11 = (pTVar41->SharedReferenceCount).ReferenceController;
  local_2338 = pTVar41->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (local_22c8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_22c8->_Content).Widget.Object = (SWidget *)local_2338;
  (local_22c8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar11;
  pTStack_2330 = pTVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  FLLMScope::FLLMScope(local_2500,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_22c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_22b8,&local_22c0,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_2080,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
             ,0x65,local_2522);
  FMemScope::~FMemScope(&local_22b8);
  FLLMScope::~FLLMScope(local_2500);
  pTVar44 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2080,&local_2000,pFVar27);
  pTVar12 = (pTVar44->SharedReferenceCount).ReferenceController;
  local_2178.Object = (SWidget *)pTVar44->Object;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2178.SharedReferenceCount.ReferenceController = pTVar12;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_2178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2000.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2080._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ff0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2068._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fe0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2050._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2480);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_11e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_24b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fd0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2038._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_22b0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_19c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_10f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a80);
  if ((void *)local_1a80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a98);
  if ((void *)local_1a98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ab0);
  if ((void *)local_1ab0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1ab0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ab0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ac8);
  if ((void *)local_1ac8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1ac8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ac8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1d28._544_8_);
  DestructItems<SScrollBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1d28._504_8_,local_1d28._512_4_);
  if ((FSlotArguments *)local_1d28._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_1d28._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1d28);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_18e0);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_17f8._Slots.AllocatorInstance.Data,local_17f8._Slots.ArrayNum);
  if ((FSlotArguments *)local_17f8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_17f8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_17f8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1010);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_15f0._Slots.AllocatorInstance.Data,local_15f0._Slots.ArrayNum);
  if ((FSlotArguments *)local_15f0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_15f0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_15f0);
  SSplitter::FSlot::FSlotArguments::~FSlotArguments(&local_1a60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d40);
  if ((void *)local_1d40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d58);
  if ((void *)local_1d58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d70);
  if ((void *)local_1d70._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d70._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d88);
  if ((void *)local_1d88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1d88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d88);
  DestructItems<SSplitter::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1fb8._504_8_,local_1fb8._512_4_);
  if ((FSlotArguments *)local_1fb8._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_1fb8._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1fb8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_f28);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_13e8._Slots.AllocatorInstance.Data,local_13e8._Slots.ArrayNum);
  if ((FSlotArguments *)local_13e8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_13e8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_13e8);
  SBorder::FArguments::~FArguments(&local_900);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2458.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2448.SharedReferenceCount.ReferenceController);
  return;
}

// ExpandAll @ 14d728480

void __thiscall
UE::StateTreeDebugger::SFrameEventsView::ExpandAll
          (SFrameEventsView *this,
          TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  longlong local_38;
  longlong local_30;
  
  iVar2 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x10;
  do {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) {
      return;
    }
    if ((*(longlong *)pFVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)(*(longlong *)pFVar7 + 0x90) < 1) {
LAB_14d7285e0:
      if (((this->EventsTreeView).Object ==
           (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar6 = &((this->EventsTreeView).Object)->field_0x588;
      pcVar4 = *(code **)(*(longlong *)puVar6 + 0x50);
      local_38 = *(longlong *)pFVar7;
      local_30 = *(longlong *)(pFVar7 + 8);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      (*pcVar4)(puVar6,&local_38,1);
      if ((*(longlong *)pFVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ExpandAll(this,(TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
                      *)(*(longlong *)pFVar7 + 0x88));
    }
    else {
      if ((*(longlong *)pFVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)pFVar7;
      if ((*(int *)(lVar3 + 0x90) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = **(longlong **)(lVar3 + 0x88);
      if (lVar3 == 0) goto LAB_14d7285e0;
      bVar1 = *(byte *)(lVar3 + 0x80);
      if (bVar1 == 1) {
        if (*(byte *)(lVar3 + 0x40) < 6) goto LAB_14d7285e0;
      }
      else {
        if ((10 < bVar1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FStateTreeTracePropertyEvent,FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') goto LAB_14d7285e0;
      }
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// GenerateElementsForProperties @ 14d729b70

void __cdecl
UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties
          (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
           *param_1,TSharedRef<UE::StateTreeDebugger::FFrameEventTreeElement,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  size_t sVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *local_res8;
  FScriptContainerElement *local_res10;
  FString local_a8;
  FString local_98;
  FFrameEventTreeElement *local_88;
  TReferenceControllerBase<1> *local_80;
  FString local_78;
  undefined1 local_68 [16];
  FString *local_58;
  void *local_50;
  undefined8 local_48;
  
  local_68._0_8_ = &local_50;
  local_res8 = (FScriptContainerElement *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_68._8_8_ = &local_a8;
  local_58 = &local_78;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>_152bc3270
            )[param_1->TypeIndex])(local_68,param_1);
  local_88 = param_2->Object;
  local_80 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_a8.Data.ArrayNum < 2) goto LAB_14d729fbd;
  ::FString::FString(&local_98,"(");
  bVar6 = false;
  iVar8 = local_98.Data.ArrayNum + -1;
  FVar3.Data = local_98.Data.AllocatorInstance.Data;
  if (local_98.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  bVar5 = ::FString::StartsWith(&local_a8,(wchar_t *)FVar3.Data,iVar8,IgnoreCase);
  if (bVar5) {
    ::FString::FString((FString *)local_68,")");
    bVar6 = true;
    iVar8 = (int)local_68._8_8_ + -1;
    pFVar9 = (FScriptContainerElement *)local_68._0_8_;
    if ((int)local_68._8_8_ == 0) {
      iVar8 = 0;
      pFVar9 = (FScriptContainerElement *)L"";
    }
    bVar5 = ::FString::EndsWith(&local_a8,(wchar_t *)pFVar9,iVar8,IgnoreCase);
    if (!bVar5) goto LAB_14d729ca1;
    bVar4 = true;
LAB_14d729ca9:
    bVar5 = bVar4;
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  else {
LAB_14d729ca1:
    bVar5 = false;
    bVar4 = false;
    if (bVar6) goto LAB_14d729ca9;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pFVar9 = local_a8.Data.AllocatorInstance.Data + 2;
    iVar8 = local_a8.Data.ArrayNum + -3;
    if (local_a8.Data.ArrayNum == 0) {
      iVar8 = -2;
    }
    pFVar1 = pFVar9 + (longlong)iVar8 * 2;
    pFVar10 = pFVar9;
    if (pFVar9 == pFVar1) goto LAB_14d729fbd;
    do {
      wVar2 = *(wchar_t *)pFVar9;
      if (((wVar2 == L'(') || (wVar2 == L')')) || (wVar2 == L',')) {
        if (pFVar9 != pFVar10) {
          ::FString::PrintfImpl(&local_98,L"%*s");
          ::FString::AppendChars
                    (&local_98,(wchar_t *)pFVar10,(int)((longlong)pFVar9 - (longlong)pFVar10 >> 1));
          ::FString::ReplaceInline(&local_98,L"=",L" = ",IgnoreCase);
          ::FString::ReplaceInline(&local_98,L"\"",L"",IgnoreCase);
          `UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_2>
          ::operator()<FStateTreeTracePropertyEvent>(&local_88,&local_98);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        pFVar10 = pFVar9 + 2;
      }
      pFVar9 = pFVar9 + 2;
    } while (pFVar9 != pFVar1);
    if (pFVar9 == pFVar10) goto LAB_14d729fbd;
    ::FString::PrintfImpl(&local_98,L"%*s");
    ::FString::AppendChars
              (&local_98,(wchar_t *)pFVar10,(int)((longlong)pFVar9 - (longlong)pFVar10 >> 1));
    ::FString::ReplaceInline(&local_98,L"=",L" = ",IgnoreCase);
    ::FString::ReplaceInline(&local_98,L"\"",L"",IgnoreCase);
    `UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_2>::
    operator()<FStateTreeTracePropertyEvent>(&local_88,&local_98);
  }
  else {
    local_res10 = (FScriptContainerElement *)L"";
    if (local_a8.Data.ArrayNum != 0) {
      local_res10 = local_a8.Data.AllocatorInstance.Data;
    }
    FParse::Next((wchar_t **)&local_res10);
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    bVar6 = FParse::Line((wchar_t **)&local_res10,&local_98,false);
    if (bVar6) {
      do {
        local_res8 = (FScriptContainerElement *)L"";
        if (local_98.Data.ArrayNum != 0) {
          local_res8 = local_98.Data.AllocatorInstance.Data;
        }
        bVar6 = FParse::Command((wchar_t **)&local_res8,L"BEGIN OBJECT",true);
        if ((!bVar6) &&
           (bVar6 = FParse::Command((wchar_t **)&local_res8,L"END OBJECT",true), pFVar9 = local_res8
           , !bVar6)) {
          iVar8 = 0;
          if (local_res8 != (FScriptContainerElement *)0x0) {
            sVar7 = wcslen((wchar_t *)local_res8);
            iVar8 = (int)sVar7;
          }
          ::FString::PrintfImpl((FString *)local_68,L"%*s");
          ::FString::AppendChars((FString *)local_68,(wchar_t *)pFVar9,iVar8);
          ::FString::ReplaceInline((FString *)local_68,L"=",L" = ",IgnoreCase);
          ::FString::ReplaceInline((FString *)local_68,L"\"",L"",IgnoreCase);
          `UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_2>
          ::operator()<FStateTreeTracePropertyEvent>(&local_88,(FString *)local_68);
          if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_68._0_8_);
          }
        }
        bVar6 = FParse::Line((wchar_t **)&local_res10,&local_98,false);
      } while (bVar6);
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
LAB_14d729fbd:
  if (1 < local_78.Data.ArrayNum) {
    `UE::StateTreeDebugger::SFrameEventsView::GenerateElementsForProperties'::__l2::<lambda_2>::
    operator()<FStateTreeTraceLogEvent>(&local_88,&local_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// RequestRefresh @ 14d743a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::StateTreeDebugger::SFrameEventsView::RequestRefresh(SFrameEventsView *this,FScrubState *param_1)

{
  int *piVar1;
  uchar uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  ulong64 uVar9;
  double dVar10;
  double dVar11;
  ETraceFrameType EVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  FInstanceEventCollection *pFVar18;
  FFrameSpan *pFVar19;
  UObject *pUVar20;
  FFrameEventTreeElement *pFVar21;
  ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> FVar22;
  longlong lVar23;
  FSharedReferencer<1> FVar24;
  longlong lVar25;
  int iVar26;
  FFrameEventTreeElement *pFVar27;
  TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
  *pTVar28;
  ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> FVar29;
  uint uVar30;
  ulonglong uVar31;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *pTVar32;
  ulonglong uVar33;
  TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
  *pTVar34;
  uint uVar35;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [4];
  uint local_174;
  int local_170;
  int local_16c;
  FFrameEventTreeElement *local_168;
  TReferenceControllerBase<1> *pTStack_160;
  TArrayView<UE::StateTreeDebugger::FFrameSpan_const_,int> local_158;
  TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
  *local_148;
  ulonglong local_140;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> local_138;
  TSharedRef<UE::StateTreeDebugger::FFrameEventTreeElement,1> local_128;
  FScriptContainerElement *local_118;
  UObject *local_110;
  TRawPtrProxy<UE::StateTreeDebugger::FFrameEventTreeElement> local_108;
  longlong local_100;
  SFrameEventsView *local_f8;
  ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> local_f0;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar18 = FScrubState::GetEventCollection(param_1);
  if (((pFVar18->InstanceId).Id != 0xffffffff) && ((pFVar18->InstanceId).SerialNumber != 0xffffffff)
     ) {
    pTVar28 = &this->EventsTreeElements;
    piVar1 = &(this->EventsTreeElements).ArrayMax;
    pTVar32 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
              (pTVar28->AllocatorInstance).Data;
    iVar17 = (this->EventsTreeElements).ArrayNum;
    local_148 = pTVar28;
    if ((this->EventsTreeElements).ArrayMax < 0) {
      DestructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int>(pTVar32,iVar17)
      ;
      (this->EventsTreeElements).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar28->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int>(pTVar32,iVar17)
      ;
      (this->EventsTreeElements).ArrayNum = 0;
    }
    iVar17 = (pFVar18->Events).ArrayNum;
    local_118 = (pFVar18->Events).AllocatorInstance.Data;
    local_16c = iVar17;
    local_f8 = this;
    if ((iVar17 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_170 = iVar17;
    if ((iVar17 != 0) && (param_1->ScrubTimeBoundState == InBounds)) {
      local_158.DataPtr = (FFrameSpan *)(pFVar18->FrameSpans).AllocatorInstance.Data;
      iVar5 = (pFVar18->FrameSpans).ArrayNum;
      if ((iVar5 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_158.ArrayNum = iVar5;
      if ((iVar5 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Spans.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
                              ,0x143,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar14 = FWeakObjectPtr::IsValid(&(this->WeakStateTree).WeakPtr);
      if ((!bVar14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("WeakStateTree.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
                              ,0x144,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar6 = param_1->FrameSpanIndex;
      local_f0.SecondaryData =
           (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>)0x0;
      uVar35 = 0;
      local_68 = 0;
      local_64 = 8;
      if ((iVar6 < 0) || (iVar5 <= iVar6)) {
        if (1 < (byte)LogStateTree._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
        }
      }
      else {
        pFVar19 = TArrayView<UE::StateTreeDebugger::FFrameSpan_const_,int>::operator[]
                            (&local_158,iVar6);
        if ((pFVar19->WorldTime <= param_1->ScrubTime) &&
           (param_1->ScrubTime <=
            ((pFVar19->Frame).EndTime - (pFVar19->Frame).StartTime) + pFVar19->WorldTime)) {
          local_174 = pFVar19->EventIdx;
          uVar31 = (ulonglong)(int)local_174;
          iVar6 = iVar6 + 1;
          uVar9 = (pFVar19->Frame).Index;
          dVar10 = (pFVar19->Frame).StartTime;
          dVar11 = (pFVar19->Frame).EndTime;
          EVar12 = (pFVar19->Frame).FrameType;
          uVar13 = *(undefined4 *)&(pFVar19->Frame).field_0x1c;
          iVar26 = local_170;
          if ((-1 < iVar6) && (iVar6 < iVar5)) {
            pFVar19 = TArrayView<UE::StateTreeDebugger::FFrameSpan_const_,int>::operator[]
                                (&local_158,iVar6);
            iVar26 = pFVar19->EventIdx;
          }
          pUVar20 = FWeakObjectPtr::Get(&(this->WeakStateTree).WeakPtr);
          local_100 = (longlong)iVar26;
          uVar33 = uVar31;
          local_140 = uVar31;
          if ((longlong)uVar31 < (longlong)iVar26) {
            do {
              uVar30 = (uint)uVar31;
              uVar16 = uVar35;
              if ((int)uVar30 < iVar17) {
                uVar16 = ~uVar30 >> 0x1f;
              }
              local_140 = uVar33;
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              bVar14 = false;
              pTVar34 = (TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
                         *)(local_118 + uVar33 * 0x58);
              uVar2 = pTVar34->TypeIndex;
              if (uVar2 == '\x04') {
                cVar3 = (char)pTVar34->_padding_;
                if ((cVar3 == '\x01') || ((cVar3 - 3U & 0xfd) == 0)) {
LAB_14d743ee8:
                  bVar14 = true;
                  goto LAB_14d743d7b;
                }
                if (((cVar3 - 2U & 0xf9) != 0) || (cVar3 == '\b')) goto LAB_14d743d7b;
LAB_14d743ef8:
                if (local_68 < 1) {
                  local_178[0] = 0;
                  bVar14 = `UE::StateTreeDebugger::SFrameEventsView::RequestRefresh'::__l84::
                           <lambda_2>::operator()(local_178);
                  if (!bVar14) goto LAB_14d7443cc;
                  if ((local_68 < 1) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                lVar23 = (longlong)local_68;
                FVar29 = (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                          )&local_f0;
                if (local_f0.SecondaryData !=
                    (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>)
                    0x0) {
                  FVar29 = local_f0.SecondaryData;
                }
                local_138.Object =
                     ((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                     ((longlong)FVar29 + -0x10))[lVar23].Object;
                local_138.SharedReferenceCount.ReferenceController =
                     *(TReferenceControllerBase<1> **)
                      &((FScriptContainerElement *)((longlong)FVar29 + -8))[lVar23 * 0x10].field_0x0
                ;
                *(undefined8 *)
                 &((FScriptContainerElement *)((longlong)FVar29 + -8))[lVar23 * 0x10].field_0x0 = 0;
                ((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                ((longlong)FVar29 + -0x10))[lVar23].Object = (FFrameEventTreeElement *)0x0;
                iVar17 = local_68 + -1;
                FVar29 = (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                          )&local_f0;
                if (local_f0.SecondaryData !=
                    (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>)
                    0x0) {
                  FVar29 = local_f0.SecondaryData;
                }
                pTVar32 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                          ((longlong)iVar17 * 0x10 + (longlong)FVar29);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((pTVar32->SharedReferenceCount).ReferenceController);
                iVar17 = (local_68 - iVar17) + -1;
                if (iVar17 != 0) {
                  memmove(pTVar32,pTVar32 + 1,(longlong)iVar17 << 4);
                }
                local_68 = local_68 + -1;
                Core::Private::
                ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_>
                          (0x10,8,&local_f0,local_68,&local_64);
                if ((local_138.Object == (FFrameEventTreeElement *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                FVar24.ReferenceController = local_138.SharedReferenceCount.ReferenceController;
                if (((local_138.Object)->Children).ArrayNum == 0) {
                  if (local_68 == 0) {
                    TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
                    ::Remove(local_148,&local_138);
                    FVar24.ReferenceController = local_138.SharedReferenceCount.ReferenceController;
                  }
                  else {
                    uVar16 = uVar35;
                    if ((int)(local_68 - 1U) < local_68) {
                      uVar16 = ~(local_68 - 1U) >> 0x1f;
                    }
                    if ((uVar16 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iVar17 = local_68;
                    FVar29 = (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                              )&local_f0;
                    if (local_f0.SecondaryData !=
                        (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                         )0x0) {
                      FVar29 = local_f0.SecondaryData;
                    }
                    if ((((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                         ((longlong)FVar29 + -0x10))[local_68].Object ==
                         (FFrameEventTreeElement *)0x0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    TArray<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSizedDefaultAllocator<32>_>
                    ::Remove(&(((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                               ((longlong)FVar29 + -0x10))[iVar17].Object)->Children,&local_138);
                    FVar24.ReferenceController = local_138.SharedReferenceCount.ReferenceController;
                  }
                }
LAB_14d7443c7:
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar24.ReferenceController);
              }
              else {
                if (uVar2 == '\0') {
                  cVar3 = (char)pTVar34->_padding_;
                  if (cVar3 == '\x05') goto LAB_14d743ee8;
                  if (cVar3 == '\x06') goto LAB_14d743ef8;
LAB_14d743d7b:
                  pFVar21 = ::operator_new(0xb0);
                  pFVar27 = (FFrameEventTreeElement *)0x0;
                  if (pFVar21 != (FFrameEventTreeElement *)0x0) {
                    pFVar21->_padding_ = 0;
                    pFVar21->_padding_ = 0;
                    (pFVar21->Frame).Index = uVar9;
                    (pFVar21->Frame).StartTime = dVar10;
                    (pFVar21->Frame).EndTime = dVar11;
                    (pFVar21->Frame).FrameType = EVar12;
                    *(undefined4 *)&(pFVar21->Frame).field_0x1c = uVar13;
                    bVar4 = pTVar34->TypeIndex;
                    (pFVar21->Event).TypeIndex = bVar4;
                    if ((10 < bVar4) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                            ,0xec,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                                ::__l2::CopyConstructors)[bVar4])(&pFVar21->Event,pTVar34);
                    (pFVar21->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    (pFVar21->Children).ArrayNum = 0;
                    (pFVar21->Children).ArrayMax = 0;
                    (pFVar21->Description).Data.AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    (pFVar21->Description).Data.ArrayNum = 0;
                    (pFVar21->Description).Data.ArrayMax = 0;
                    if ((GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar20 != (UObject *)0x0)) {
                      GC::MarkAsReachable(pUVar20);
                    }
                    (pFVar21->WeakStateTree).WeakPtr = (FWeakObjectPtr)0x0;
                    local_110 = pUVar20;
                    if ((GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar20 != (UObject *)0x0)) {
                      GC::MarkAsReachable(pUVar20);
                    }
                    FWeakObjectPtr::operator=
                              (&(pFVar21->WeakStateTree).WeakPtr,(FObjectPtr)&local_110);
                    pFVar27 = pFVar21;
                    uVar30 = local_174;
                    if ((((pFVar21->_padding_ != 0) && (pFVar21->_padding_ != 0)) &&
                        (0 < *(int *)(pFVar21->_padding_ + 8))) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x7a5,L"Trying to share an already-shared object"),
                       uVar30 = local_174, bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                  }
                  local_108.Object = pFVar27;
                  TSharedRef<UE::StateTreeDebugger::FFrameEventTreeElement,1>::
                  TSharedRef<UE::StateTreeDebugger::FFrameEventTreeElement,1><UE::StateTreeDebugger::FFrameEventTreeElement>
                            (&local_128,&local_108);
                  ::FString::AssignRange(&(local_128.Object)->Description,(wchar_t *)0x0,0);
                  pTVar28 = local_148;
                  if (local_68 != 0) {
                    uVar16 = uVar35;
                    if ((int)(local_68 - 1U) < local_68) {
                      uVar16 = ~(local_68 - 1U) >> 0x1f;
                    }
                    if ((uVar16 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    iVar17 = local_68;
                    FVar29 = (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                              )&local_f0;
                    if (local_f0.SecondaryData !=
                        (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                         )0x0) {
                      FVar29 = local_f0.SecondaryData;
                    }
                    if ((((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                         ((longlong)FVar29 + -0x10))[local_68].Object ==
                         (FFrameEventTreeElement *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pTVar28 = &(((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                                ((longlong)FVar29 + -0x10))[iVar17].Object)->Children;
                  }
                  FVar24.ReferenceController = local_128.SharedReferenceCount.ReferenceController;
                  local_168 = local_128.Object;
                  pTStack_160 = local_128.SharedReferenceCount.ReferenceController;
                  if (local_128.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_128.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pFVar7 = (pTVar28->AllocatorInstance).Data;
                  if (((pFVar7 <= (FScriptContainerElement *)&local_168) &&
                      ((FScriptContainerElement *)&local_168 <
                       pFVar7 + (longlong)pTVar28->ArrayMax * 0x10)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar17 = pTVar28->ArrayNum;
                  if (iVar17 == pTVar28->ArrayMax) {
                    iVar17 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&pTVar28->AllocatorInstance,&pTVar28->ArrayMax);
                  }
                  pTVar28->ArrayNum = iVar17 + 1;
                  FVar29 = (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                            )((longlong)(pTVar28->AllocatorInstance).Data + (longlong)iVar17 * 0x10)
                  ;
                  *(FFrameEventTreeElement **)FVar29 = local_168;
                  *(TReferenceControllerBase<1> **)
                   &((FScriptContainerElement *)((longlong)FVar29 + 8))->field_0x0 = pTStack_160;
                  pTStack_160 = (TReferenceControllerBase<1> *)0x0;
                  local_168 = (FFrameEventTreeElement *)0x0;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)0x0);
                  if (bVar14) {
                    FVar22 = (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                              )&local_f0;
                    if (local_f0.SecondaryData !=
                        (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                         )0x0) {
                      FVar22 = local_f0.SecondaryData;
                    }
                    if ((ulonglong)FVar22 <= (ulonglong)FVar29) {
                      FVar22 = (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                                )&local_f0;
                      if (local_f0.SecondaryData !=
                          (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                           )0x0) {
                        FVar22 = local_f0.SecondaryData;
                      }
                      if (((ulonglong)FVar29 <
                           (ulonglong)((longlong)local_64 * 0x10 + (longlong)FVar22)) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar14)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                    }
                    if (local_68 == local_64) {
                      local_68 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_>
                                           (0x810,&local_f0,&local_64);
                    }
                    FVar22 = (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                              )&local_f0;
                    if (local_f0.SecondaryData !=
                        (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>
                         )0x0) {
                      FVar22 = local_f0.SecondaryData;
                    }
                    lVar25 = (longlong)local_68;
                    local_68 = local_68 + 1;
                    ((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
                    ((longlong)FVar22 + lVar25 * 0x10))->Object = *(FFrameEventTreeElement **)FVar29
                    ;
                    lVar23 = *(longlong *)
                              &((FScriptContainerElement *)((longlong)FVar29 + 8))->field_0x0;
                    *(longlong *)
                     &((FScriptContainerElement *)((longlong)FVar22 + 8))[lVar25 * 0x10].field_0x0 =
                         lVar23;
                    if (lVar23 != 0) {
                      LOCK();
                      *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
                      UNLOCK();
                    }
                  }
                  GenerateElementsForProperties(pTVar34,&local_128);
                  goto LAB_14d7443c7;
                }
                if (uVar2 != '\n') goto LAB_14d743d7b;
                pUVar20 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pTVar34->_padding_);
                if ((pUVar20 == (UObject *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ActiveTree",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeDeveloper\\Private\\Debugger\\SStateTreeFrameEventsView.cpp"
                                        ,0x182,L""), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
LAB_14d7443cc:
              local_174 = uVar30 + 1;
              uVar31 = (ulonglong)local_174;
              local_140 = local_140 + 1;
              uVar33 = local_140;
              iVar17 = local_16c;
            } while ((longlong)local_140 < local_100);
          }
        }
      }
      FVar29 = (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>)
               &local_f0;
      if (local_f0.SecondaryData !=
          (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>)0x0) {
        FVar29 = local_f0.SecondaryData;
      }
      DestructItems<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,int>
                ((TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)FVar29,local_68);
      if (local_f0.SecondaryData !=
          (ForElementType<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>)0x0) {
        FMemory::Free((void *)local_f0.SecondaryData);
      }
    }
    ScopeExitSupport::
    TScopeGuard<`UE::StateTreeDebugger::SFrameEventsView::RequestRefresh'::__l2::<lambda_1>_>::
    ~TScopeGuard<_UE::StateTreeDebugger::SFrameEventsView::RequestRefresh_::__l2::<lambda_1>_>
              (&local_f8);
  }
  return;
}

// SelectByPredicate @ 14d747010

/* WARNING: Removing unreachable block (ram,0x00014d747144) */
/* WARNING: Removing unreachable block (ram,0x00014d747169) */

void __thiscall
UE::StateTreeDebugger::SFrameEventsView::SelectByPredicate
          (SFrameEventsView *this,
          TFunctionRef<bool___cdecl(TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&)>
          *param_1)

{
  int iVar1;
  STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *this_00;
  code *pcVar2;
  bool bVar3;
  FFrameEventTreeElement *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  TOptional<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>_u_0 local_88;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  code *local_68;
  FFrameEventTreeElement ***local_60;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> local_58;
  FFrameEventTreeElement **local_48;
  undefined8 local_40;
  undefined8 local_38;
  TArrayView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_const_,int> local_28;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> local_18;
  
  iVar1 = (this->EventsTreeElements).ArrayNum;
  local_48 = &local_98;
  local_40 = *(undefined8 *)param_1;
  local_38 = *(undefined8 *)&param_1->field_0x8;
  local_60 = &local_48;
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::StateTreeDebugger::SFrameEventsView::SelectByPredicate'::__l2::<lambda_1>,bool,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_&>
             ::Call;
  local_78 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)
             (this->EventsTreeElements).AllocatorInstance.Data;
  local_98 = (FFrameEventTreeElement *)0x0;
  pTStack_90 = (TReferenceControllerBase<1> *)0x0;
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_28._12_4_ = uStack_6c;
  local_28.ArrayNum = iVar1;
  local_28.DataPtr = local_78;
  iStack_70 = iVar1;
  VisitEventTreeElements
            (&local_28,
             (TFunctionRef<bool___cdecl(TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_&)>
              *)&local_68);
  if (local_98 != (FFrameEventTreeElement *)0x0) {
    if (((this->EventsTreeView).Object ==
         (STreeView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (this->EventsTreeView).Object;
    local_58.Object = local_98;
    local_58.SharedReferenceCount.ReferenceController = pTStack_90;
    if (pTStack_90 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_90->SharedReferenceCount = (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
      UNLOCK();
    }
    SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::
    Private_FindNextSelectableOrNavigable
              ((SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)this_00,
               (TOptional<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)
               &local_88.TypedValue,&local_58);
    if (local_88.TypedValue.Object != (FFrameEventTreeElement *)0xffffffffffffffff) {
      local_18.Object = local_88.TypedValue.Object;
      local_18.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           local_88.TypedValue.SharedReferenceCount.ReferenceController;
      if (local_88.TypedValue.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)local_88.TypedValue.SharedReferenceCount.ReferenceController + 8)
             = (atomic<int>)
               ((int)*(atomic<int> *)
                      ((longlong)local_88.TypedValue.SharedReferenceCount.ReferenceController + 8) +
               1);
        UNLOCK();
      }
      SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_>::Private_SetSelection
                ((SListView<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>_> *)this_00,
                 &local_18,Direct);
      if (local_88.TypedValue.Object != (FFrameEventTreeElement *)0xffffffffffffffff) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   local_88.TypedValue.SharedReferenceCount.ReferenceController);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  return;
}

// operator() @ 1505864a0

bool __thiscall
`UE::StateTreeDebugger::SFrameEventsView::RequestRefresh'::__l84::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5850425672597504395>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5850425672597504395>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

