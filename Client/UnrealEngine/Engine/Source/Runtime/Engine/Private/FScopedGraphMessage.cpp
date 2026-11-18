// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FScopedGraphMessage @ 1474b3520

FScopedGraphMessage * __thiscall
UE::Anim::FScopedGraphMessage::FScopedGraphMessage
          (FScopedGraphMessage *this,FAnimationBaseContext *param_1)

{
  this->SharedContext = param_1->SharedContext;
  (this->MessageType).ComparisonIndex = 0;
  (this->MessageType).Number = 0;
  return this;
}

// PopMessage @ 1474f0930

void __thiscall UE::Anim::FScopedGraphMessage::PopMessage(FScopedGraphMessage *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  
  if (this->SharedContext == (FAnimationUpdateSharedContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SharedContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeMessages.cpp"
                       ,0x45,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar5 = TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           ::Find((TSet<TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<8,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                   *)&this->SharedContext->MessageStack,this->MessageType);
  if (pTVar5 == (TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar8 = &pTVar5->field_0x8;
  if (*(int *)&pTVar5->field_0x110 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar7 = *(undefined1 **)&pTVar5->field_0x108;
  if (*(undefined1 **)&pTVar5->field_0x108 == (undefined1 *)0x0) {
    puVar7 = puVar8;
  }
  lVar6 = (longlong)*(int *)&pTVar5->field_0x110 * 0x20;
  pTVar1 = *(TReferenceControllerBase<1> **)(puVar7 + lVar6 + -0x18);
  *(undefined8 *)(puVar7 + lVar6 + -0x18) = 0;
  *(undefined8 *)(puVar7 + lVar6 + -0x20) = 0;
  iVar4 = *(int *)&pTVar5->field_0x110;
  puVar7 = *(undefined1 **)&pTVar5->field_0x108;
  if (*(undefined1 **)&pTVar5->field_0x108 == (undefined1 *)0x0) {
    puVar7 = puVar8;
  }
  puVar7 = puVar7 + (longlong)iVar4 * 0x20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(puVar7 + -0x18));
  iVar4 = *(int *)&pTVar5->field_0x110 - iVar4;
  if (iVar4 != 0) {
    memmove(puVar7 + -0x20,puVar7,(longlong)iVar4 << 5);
  }
  *(int *)&pTVar5->field_0x110 = *(int *)&pTVar5->field_0x110 + -1;
  Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FMessageStack::FMessageEntry>_>
            (0x20,8,(ForElementType<UE::Anim::FMessageStack::FMessageEntry> *)puVar8,
             *(int *)&pTVar5->field_0x110,(int *)&pTVar5->field_0x114);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// PushMessage @ 1474f21d0

void __thiscall
UE::Anim::FScopedGraphMessage::PushMessage
          (FScopedGraphMessage *this,FAnimationBaseContext *param_1,
          TSharedRef<UE::Anim::IGraphMessage,1> *param_2,FName param_3)

{
  uint uVar1;
  IAnimClassInterface *pIVar2;
  FProperty *this_00;
  FAnimationUpdateSharedContext *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  UScriptStruct *pUVar7;
  uint uVar8;
  UScriptStruct *pUVar9;
  TSharedRef<UE::Anim::IGraphMessage,1> local_28;
  
  if (this->SharedContext == (FAnimationUpdateSharedContext *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SharedContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNodeMessages.cpp"
                       ,0x2f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->MessageType = param_3;
  pUVar9 = (UScriptStruct *)0x0;
  uVar1 = param_1->CurrentNodeId;
  pUVar7 = pUVar9;
  if ((uVar1 != 0xffffffff) &&
     (pIVar2 = param_1->AnimInstanceProxy->AnimClassInterface, pUVar7 = (UScriptStruct *)0x0,
     pIVar2 != (IAnimClassInterface *)0x0)) {
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x20))();
    uVar8 = 0;
    if ((int)uVar1 < (int)plVar6[1]) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this_00 = *(FProperty **)(*plVar6 + (longlong)(int)uVar1 * 8);
    pUVar9 = (UScriptStruct *)this_00[1]._padding_;
    pUVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                       (this_00,param_1->AnimInstanceProxy->AnimInstanceObject,0);
  }
  local_28.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_28.Object = param_2->Object;
  pFVar3 = this->SharedContext;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMessageStack::PushMessage
            (&pFVar3->MessageStack,this->MessageType,(FAnimNode_Base *)pUVar7,pUVar9,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

