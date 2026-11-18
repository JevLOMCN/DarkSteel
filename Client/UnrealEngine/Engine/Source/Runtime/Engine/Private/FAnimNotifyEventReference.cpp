// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FAnimNotifyEventReference @ 1474337c0

FAnimNotifyEventReference * __thiscall
FAnimNotifyEventReference::FAnimNotifyEventReference
          (FAnimNotifyEventReference *this,FAnimNotifyEventReference *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UMirrorDataTable *pUVar2;
  UObject *pUVar3;
  
  (this->ContextData).Object = (param_1->ContextData).Object;
  pTVar1 = (param_1->ContextData).SharedReferenceCount.ReferenceController;
  (this->ContextData).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Notify = param_1->Notify;
  pUVar2 = (param_1->MirrorTable).field0_0x0.DebugPtr;
  (this->MirrorTable).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (param_1->NotifySource).field0_0x0.DebugPtr;
  (this->NotifySource).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  this->CurrentAnimTime = param_1->CurrentAnimTime;
  this->bActiveContext = param_1->bActiveContext;
  return this;
}

// StaticStruct @ 14749e670

UScriptStruct * __cdecl FAnimNotifyEventReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNotifyEventReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNotifyEventReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyEventReference,(UObject *)pUVar1,
                         L"AnimNotifyEventReference");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNotifyEventReference.OuterSingleton;
}

// AddContextData<UE::Anim::FAnimNotifyEndDataContext,bool> @ 1474a2da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNotifyEventReference::AddContextData<UE::Anim::FAnimNotifyEndDataContext,bool>
          (FAnimNotifyEventReference *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *pTVar7;
  TReferenceControllerBase<1> *local_38;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *local_30;
  FSharedReferencer<1> aFStack_28 [2];
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if ((this->ContextData).Object ==
      (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
       *)0x0) {
    aFStack_28[0].ReferenceController = ::operator_new(0x20);
    if (aFStack_28[0].ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_30 = ___xmm_00000000000000000000000000000010;
      pTVar7 = (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                *)&DAT_00000010;
      aFStack_28[0].ReferenceController = _UNK_150651568;
      pTVar5 = pTVar6;
    }
    else {
      (aFStack_28[0].ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7 = (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                *)(aFStack_28[0].ReferenceController + 1);
      (aFStack_28[0].ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (aFStack_28[0].ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_V__TUniquePtr___CBVIAnimNotifyEventContextDataInterface_Anim_UE__U__TDefaultDelete___CBVIAnimNotifyEventContextDataInterface_Anim_UE______V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
      ;
      aFStack_28[0].ReferenceController[1]._padding_ = 0;
      aFStack_28[0].ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      aFStack_28[0].ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if ((pTVar7 == (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                      *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      (aFStack_28[0].ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(aFStack_28[0].ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar5 = aFStack_28[0].ReferenceController;
      local_30 = pTVar7;
    }
    if (this != (FAnimNotifyEventReference *)&local_30) {
      (this->ContextData).Object = pTVar7;
      local_30 = (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                  *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ContextData).SharedReferenceCount,aFStack_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_28[0].ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (((this->ContextData).Object ==
         (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
          *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar7 = (this->ContextData).Object;
  pTVar5 = ::operator_new(0x10);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    bVar3 = *param_1;
    pTVar5->_padding_ = (longlong)&___7FAnimNotifyEndDataContext_Anim_UE__6B_;
    *(bool *)&pTVar5->SharedReferenceCount = bVar3;
    pTVar6 = pTVar5;
  }
  pFVar1 = (pTVar7->AllocatorInstance).Data;
  local_38 = pTVar6;
  if (((pFVar1 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)pTVar7->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = pTVar7->ArrayNum;
  if (iVar4 == pTVar7->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pTVar7->ArrayNum = iVar4 + 1;
  *(TReferenceControllerBase<1> **)((pTVar7->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_38;
  return;
}

// GetContextData<UE::Anim::FAnimNotifyMirrorContext> @ 1474a7870

FAnimNotifyMirrorContext * __thiscall
FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyMirrorContext>
          (FAnimNotifyEventReference *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FName FVar4;
  FName *pFVar5;
  FAnimNotifyMirrorContext *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  pTVar3 = (this->ContextData).Object;
  if (pTVar3 == (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
LAB_1474a78ce:
    pFVar6 = (FAnimNotifyMirrorContext *)0x0;
  }
  else {
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      FVar4 = UE::Anim::FAnimNotifyMirrorContext::TypeName;
      if (pFVar7 == pFVar1) goto LAB_1474a78ce;
      pFVar5 = (FName *)(**(code **)(**(longlong **)pFVar7 + 8))(*(longlong **)pFVar7,local_res10);
      if (*pFVar5 == FVar4) break;
      pFVar7 = pFVar7 + 8;
    }
    pFVar6 = *(FAnimNotifyMirrorContext **)pFVar7;
  }
  return pFVar6;
}

// GetContextData<UE::Anim::FAnimNotifyStateMachineContext> @ 1474a78f0

FAnimNotifyStateMachineContext * __thiscall
FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyStateMachineContext>
          (FAnimNotifyEventReference *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FName FVar4;
  FName *pFVar5;
  FAnimNotifyStateMachineContext *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  pTVar3 = (this->ContextData).Object;
  if (pTVar3 == (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
LAB_1474a794e:
    pFVar6 = (FAnimNotifyStateMachineContext *)0x0;
  }
  else {
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      FVar4 = UE::Anim::FAnimNotifyStateMachineContext::TypeName;
      if (pFVar7 == pFVar1) goto LAB_1474a794e;
      pFVar5 = (FName *)(**(code **)(**(longlong **)pFVar7 + 8))(*(longlong **)pFVar7,local_res10);
      if (*pFVar5 == FVar4) break;
      pFVar7 = pFVar7 + 8;
    }
    pFVar6 = *(FAnimNotifyStateMachineContext **)pFVar7;
  }
  return pFVar6;
}

// FAnimNotifyEventReference @ 1474b19a0

FAnimNotifyEventReference * __thiscall
FAnimNotifyEventReference::FAnimNotifyEventReference
          (FAnimNotifyEventReference *this,FAnimNotifyEventReference *param_1)

{
  UMirrorDataTable *pUVar1;
  UObject *pUVar2;
  
  (this->ContextData).Object = (param_1->ContextData).Object;
  (this->ContextData).SharedReferenceCount.ReferenceController =
       (param_1->ContextData).SharedReferenceCount.ReferenceController;
  (param_1->ContextData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ContextData).Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  this->Notify = param_1->Notify;
  pUVar1 = (param_1->MirrorTable).field0_0x0.DebugPtr;
  (this->MirrorTable).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = (param_1->NotifySource).field0_0x0.DebugPtr;
  (this->NotifySource).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  this->CurrentAnimTime = param_1->CurrentAnimTime;
  this->bActiveContext = param_1->bActiveContext;
  return this;
}

// GatherTickRecordData @ 1474d5b00

void __thiscall
FAnimNotifyEventReference::GatherTickRecordData
          (FAnimNotifyEventReference *this,FAnimTickRecord *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  float fVar4;
  
  pTVar1 = (param_1->ContextData).SharedReferenceCount.ReferenceController;
  pTVar2 = (param_1->ContextData).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->ContextData).SharedReferenceCount.ReferenceController;
  (this->ContextData).Object = pTVar2;
  (this->ContextData).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (param_1->TimeAccumulator == (float *)0x0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = *param_1->TimeAccumulator;
  }
  this->CurrentAnimTime = fVar4;
  this->bActiveContext = param_1->bActiveContext;
  return;
}

