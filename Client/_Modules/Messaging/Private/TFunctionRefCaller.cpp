// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 11

// Call @ 142d41f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMessageTracer::TraceAddedInterceptor'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  double dVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  TSharedPtr<FMessageTracerInterceptorInfo,1> *this;
  FMessageTracerInterceptorInfo *pFVar8;
  FMessageTracerInterceptorInfo *pFVar9;
  FName *pFVar10;
  TRawPtrProxy<FMessageTracerInterceptorInfo> TStackX_8;
  undefined1 auStackX_10 [8];
  
  lVar2 = *(longlong *)param_1;
  pFVar6 = (FGuid *)(**(code **)(**(longlong **)((longlong)param_1 + 8) + 8))();
  uVar7 = CityHash64((char *)pFVar6,0x10);
  this = TMapBase<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>_>
         ::FindOrAddImpl<FGuid_const_&>
                   ((TMapBase<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>_>
                     *)(lVar2 + 0x78),(uint)uVar7,pFVar6);
  pFVar9 = (FMessageTracerInterceptorInfo *)0x0;
  if (this->Object == (FMessageTracerInterceptorInfo *)0x0) {
    pFVar8 = ::operator_new(0x28);
    if (pFVar8 != (FMessageTracerInterceptorInfo *)0x0) {
      pFVar8->TimeRegistered = 0.0;
      pFVar8->TimeUnregistered = 0.0;
      (pFVar8->Name).ComparisonIndex = 0;
      (pFVar8->Name).Number = 0;
      (pFVar8->InterceptedMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->InterceptedMessages).ArrayNum = 0;
      (pFVar8->InterceptedMessages).ArrayMax = 0;
      pFVar9 = pFVar8;
    }
    TStackX_8.Object = pFVar9;
    TSharedPtr<FMessageTracerInterceptorInfo,1>::operator=<FMessageTracerInterceptorInfo>
              (this,&TStackX_8);
  }
  pFVar10 = (FName *)(**(code **)**(undefined8 **)((longlong)param_1 + 8))
                               (*(undefined8 **)((longlong)param_1 + 8),auStackX_10);
  FVar3 = *pFVar10;
  if ((this->Object == (FMessageTracerInterceptorInfo *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->Object->Name = FVar3;
  dVar1 = *(double *)((longlong)param_1 + 0x18);
  if ((this->Object == (FMessageTracerInterceptorInfo *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->Object->TimeRegistered = dVar1;
  if ((this->Object == (FMessageTracerInterceptorInfo *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->Object->TimeUnregistered = 0.0;
  return;
}

// Call @ 142d41f90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMessageTracer::TraceAddedRecipient'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  TSharedPtr<FMessageTracerEndpointInfo,1> *this;
  FMessageTracerEndpointInfo *pFVar11;
  FMessageTracerEndpointInfo *pFVar12;
  FName *pFVar13;
  undefined1 auStackX_8 [16];
  TRawPtrProxy<FMessageTracerEndpointInfo> TStackX_18;
  TRawPtrProxy<FMessageTracerAddressInfo> TStackX_20;
  undefined1 auStack_78 [16];
  TSharedRef<FMessageTracerAddressInfo,1> TStack_68;
  undefined8 *puStack_58;
  FMessageTracerAddressInfo **ppFStack_50;
  FMessageTracerAddressInfo *pFStack_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined8 *puStack_38;
  TSharedPtr<FMessageTracerEndpointInfo,1> *pTStack_30;
  
  lVar2 = *(longlong *)param_1;
  pFVar9 = (FGuid *)(**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 8))();
  uVar10 = CityHash64((char *)pFVar9,0x10);
  this = TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
         ::FindOrAddImpl<FGuid_const_&>
                   ((TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
                     *)(lVar2 + 200),(uint)uVar10,pFVar9);
  pFVar12 = (FMessageTracerEndpointInfo *)0x0;
  if (this->Object == (FMessageTracerEndpointInfo *)0x0) {
    pFVar11 = ::operator_new(0x80);
    TStackX_18.Object = pFVar12;
    if (pFVar11 != (FMessageTracerEndpointInfo *)0x0) {
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x10 = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x18 = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x38 = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x48 = 0;
      pFVar11->Remote = false;
      *(undefined3 *)&pFVar11->field_0x69 = 0;
      pFVar11->_padding_ = 0;
      *(undefined8 *)&pFVar11->AddressInfos = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x8 = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x20 = 0;
      *(undefined4 *)&(pFVar11->AddressInfos).field_0x28 = 0;
      *(undefined4 *)&(pFVar11->AddressInfos).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar11->AddressInfos).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar11->AddressInfos).field_0x34 = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x40 = 0;
      (pFVar11->Name).ComparisonIndex = 0;
      (pFVar11->Name).Number = 0;
      (pFVar11->ReceivedMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->ReceivedMessages).ArrayNum = 0;
      (pFVar11->ReceivedMessages).ArrayMax = 0;
      (pFVar11->SentMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->SentMessages).ArrayNum = 0;
      (pFVar11->SentMessages).ArrayMax = 0;
      TStackX_18.Object = pFVar11;
    }
    TSharedPtr<FMessageTracerEndpointInfo,1>::operator=<FMessageTracerEndpointInfo>
              (this,&TStackX_18);
  }
  pFVar11 = ::operator_new(0x20);
  if (pFVar11 != (FMessageTracerEndpointInfo *)0x0) {
    *(undefined8 *)&(pFVar11->AddressInfos).field_0x10 = 0;
    *(undefined8 *)&(pFVar11->AddressInfos).field_0x18 = 0;
    *(undefined8 *)&pFVar11->AddressInfos = 0;
    *(undefined8 *)&(pFVar11->AddressInfos).field_0x8 = 0;
    pFVar12 = pFVar11;
  }
  TStackX_20.Object = (FMessageTracerAddressInfo *)pFVar12;
  TSharedRef<FMessageTracerAddressInfo,1>::
  TSharedRef<FMessageTracerAddressInfo,1><FMessageTracerAddressInfo>(&TStack_68,&TStackX_20);
  puVar1 = (undefined8 *)((longlong)param_1 + 8);
  uVar5 = *puVar1;
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x10);
  ((TStack_68.Object)->Address).UniqueId.A = (int)uVar5;
  ((TStack_68.Object)->Address).UniqueId.B = (int)((ulonglong)uVar5 >> 0x20);
  ((TStack_68.Object)->Address).UniqueId.C = (int)uVar6;
  ((TStack_68.Object)->Address).UniqueId.D = (int)((ulonglong)uVar6 >> 0x20);
  (TStack_68.Object)->TimeRegistered = *(double *)((longlong)param_1 + 0x28);
  (TStack_68.Object)->TimeUnregistered = 0.0;
  if ((this->Object == (FMessageTracerEndpointInfo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar12 = this->Object;
  pFStack_48 = TStack_68.Object;
  pTStack_40 = TStack_68.SharedReferenceCount.ReferenceController;
  if (TStack_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ppFStack_50 = &pFStack_48;
  puStack_58 = puVar1;
  TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FMessageAddress_const_&,TSharedPtr<FMessageTracerAddressInfo,1>_&&>_>
            ((TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
              *)pFVar12,
             (TPairInitializer<FMessageAddress_const_&,TSharedPtr<FMessageTracerAddressInfo,1>_&&> *
             )auStackX_8,(bool *)&puStack_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  pFVar13 = (FName *)(**(code **)**(undefined8 **)((longlong)param_1 + 0x18))
                               (*(undefined8 **)((longlong)param_1 + 0x18),auStack_78);
  FVar3 = *pFVar13;
  if ((this->Object == (FMessageTracerEndpointInfo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->Object->Name = FVar3;
  cVar8 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x18))();
  if ((this->Object == (FMessageTracerEndpointInfo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->Object->Remote = cVar8 == '\0';
  puStack_38 = puVar1;
  pTStack_30 = this;
  TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMessageAddress_const_&,TSharedPtr<FMessageTracerEndpointInfo,1>_const_&>_>
            ((TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
              *)(*(longlong *)param_1 + 8),
             (TPairInitializer<FMessageAddress_const_&,TSharedPtr<FMessageTracerEndpointInfo,1>_const_&>
              *)(auStackX_8 + 8),(bool *)&puStack_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_68.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 142d41fa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMessageTracer::TraceAddedSubscription'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  return;
}

// Call @ 142d41fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMessageTracer::TraceDispatchedMessage'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  int *piVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMessageTracerEndpointInfo *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  Type TVar8;
  int iVar9;
  TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *pTVar10;
  FGuid *pFVar11;
  ulong64 uVar12;
  TSharedPtr<FMessageTracerEndpointInfo,1> *pTVar13;
  TSharedPtr<FMessageTracerDispatchState,1> *pTVar14;
  TPairInitializer<TSharedPtr<FMessageTracerEndpointInfo,1>_const_&,TSharedPtr<FMessageTracerDispatchState,1>_&&>
  TStackX_8;
  longlong lStack_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedRef<FMessageTracerDispatchState,1> TStack_68;
  TSharedPtr<IMessageContext_const_,1> TStack_58;
  TSharedPtr<FMessageTracerEndpointInfo,1> *pTStack_48;
  FMessageTracerDispatchState **ppFStack_40;
  FMessageTracerDispatchState *pFStack_38;
  TReferenceControllerBase<1> *pTStack_30;
  FMessageTracerEndpointInfo *pFStack_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  lVar2 = *(longlong *)param_1;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  TStack_58.Object = *(IMessageContext **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_58.SharedReferenceCount.ReferenceController = pTVar3;
  pTVar10 = TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
                    *)(lVar2 + 0x118),&TStack_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (pTVar10 ==
      (TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *)0x0) {
    lStack_78 = 0;
    pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    lStack_78 = *(longlong *)&pTVar10->field_0x10;
    pTStack_70 = *(TReferenceControllerBase<1> **)&pTVar10->field_0x18;
    if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (lStack_78 != 0) {
    lVar2 = *(longlong *)param_1;
    pFVar11 = (FGuid *)(**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 8))();
    uVar12 = CityHash64((char *)pFVar11,0x10);
    pTVar13 = TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
              ::FindOrAddImpl<FGuid_const_&>
                        ((TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
                          *)(lVar2 + 200),(uint)uVar12,pFVar11);
    if (pTVar13->Object != (FMessageTracerEndpointInfo *)0x0) {
      pTVar14 = ::operator_new(0x38);
      TStackX_8.Value = (TSharedPtr<FMessageTracerDispatchState,1> *)0x0;
      if (pTVar14 != (TSharedPtr<FMessageTracerDispatchState,1> *)0x0) {
        pTVar14->Object = (FMessageTracerDispatchState *)0x0;
        (pTVar14->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar14[2].Object = (FMessageTracerDispatchState *)0x0;
        pTVar14[2].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar14[3].Object = (FMessageTracerDispatchState *)0x0;
        pTVar14[1].Object = (FMessageTracerDispatchState *)0x0;
        pTVar14[1].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        TStackX_8.Value = pTVar14;
      }
      TSharedRef<FMessageTracerDispatchState,1>::
      TSharedRef<FMessageTracerDispatchState,1><FMessageTracerDispatchState>
                (&TStack_68,(TRawPtrProxy<FMessageTracerDispatchState> *)&TStackX_8.Value);
      if ((lStack_78 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (TStack_68.Object)->DispatchLatency =
           *(double *)((longlong)param_1 + 0x30) - *(double *)(lStack_78 + 0x80);
      (TStack_68.Object)->DispatchType =
           -(uint)(*(char *)((longlong)param_1 + 0x28) != '\0') & TaskGraph;
      pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
      pFVar4 = pTVar13->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFStack_28 = ((TStack_68.Object)->EndpointInfo).Object;
      pTStack_20 = ((TStack_68.Object)->EndpointInfo).SharedReferenceCount.ReferenceController;
      ((TStack_68.Object)->EndpointInfo).Object = pFVar4;
      ((TStack_68.Object)->EndpointInfo).SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
      TVar8 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x10))();
      (TStack_68.Object)->RecipientThread = TVar8;
      (TStack_68.Object)->TimeDispatched = *(double *)((longlong)param_1 + 0x30);
      (TStack_68.Object)->TimeHandled = 0.0;
      if ((lStack_78 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFStack_38 = TStack_68.Object;
      pTStack_30 = TStack_68.SharedReferenceCount.ReferenceController;
      if (TStack_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      ppFStack_40 = &pFStack_38;
      pTStack_48 = pTVar13;
      TSet<TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TSharedPtr<FMessageTracerEndpointInfo,1>_const_&,TSharedPtr<FMessageTracerDispatchState,1>_&&>_>
                ((TSet<TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>,0>,FDefaultSetAllocator>
                  *)(lStack_78 + 0x10),&TStackX_8,(bool *)&pTStack_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
      if ((pTVar13->Object == (FMessageTracerEndpointInfo *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = pTVar13->Object;
      pFVar5 = (pFVar4->ReceivedMessages).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&lStack_78) &&
          ((FScriptContainerElement *)&lStack_78 <
           pFVar5 + (longlong)(pFVar4->ReceivedMessages).ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (pFVar4->ReceivedMessages).ArrayNum;
      piVar1 = &(pFVar4->ReceivedMessages).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pFVar4->ReceivedMessages).AllocatorInstance,piVar1);
      }
      pFVar5 = (pFVar4->ReceivedMessages).AllocatorInstance.Data;
      (pFVar4->ReceivedMessages).ArrayNum = iVar9 + 1;
      *(longlong *)(pFVar5 + (longlong)iVar9 * 0x10) = lStack_78;
      *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar9 * 0x10 + 8) = pTStack_70;
      if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_68.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return;
}

// Call @ 142d41fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMessageTracer::TraceHandledMessage'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  FMessageTracerEndpointInfo *pFVar3;
  int iVar4;
  TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *pTVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FMessageTracerEndpointInfo_const_,1> TStack_28;
  
  lVar1 = *(longlong *)param_1;
  pTVar11 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  TStack_28.Object = *(FMessageTracerEndpointInfo **)((longlong)param_1 + 8);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_28.SharedReferenceCount.ReferenceController = pTVar11;
  pTVar5 = TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
                   *)(lVar1 + 0x118),(TSharedPtr<IMessageContext_const_,1> *)&TStack_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (pTVar5 == (TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *)
                0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    lVar1 = *(longlong *)&pTVar5->field_0x10;
    pTVar10 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x18;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    if (lVar1 == 0) goto LAB_142d3fe62;
    lVar2 = *(longlong *)param_1;
    pFVar6 = (FGuid *)(**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 8))();
    uVar7 = CityHash64((char *)pFVar6,0x10);
    iVar4 = TSet<TTuple<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
                        *)(lVar2 + 200),(uint)uVar7,pFVar6);
    if ((iVar4 == -1) || (lVar2 = *(longlong *)(lVar2 + 200) + (longlong)iVar4 * 0x28, lVar2 == 0))
    {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pFVar3 = *(FMessageTracerEndpointInfo **)(lVar2 + 0x10);
      pTVar11 = *(TReferenceControllerBase<1> **)(lVar2 + 0x18);
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 != (FMessageTracerEndpointInfo *)0x0) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        TStack_28.Object = pFVar3;
        TStack_28.SharedReferenceCount.ReferenceController = pTVar11;
        pTVar8 = TSet<TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>,0>,FDefaultSetAllocator>
                         *)(lVar1 + 0x10),&TStack_28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        if (pTVar8 == (TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>
                       *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          lVar1 = *(longlong *)&pTVar8->field_0x10;
          pTVar9 = *(TReferenceControllerBase<1> **)&pTVar8->field_0x18;
          if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
          if (lVar1 != 0) {
            *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)((longlong)param_1 + 0x28);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar9);
            goto LAB_142d3fe5a;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      }
    }
  }
LAB_142d3fe5a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_142d3fe62:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// Call @ 142d41fd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMessageTracer::TraceInterceptedMessage'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *pTVar6;
  FGuid *pFVar7;
  ulong64 uVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lStack_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedPtr<IMessageContext_const_,1> TStack_18;
  
  lVar1 = *(longlong *)param_1;
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  TStack_18.Object = *(IMessageContext **)((longlong)param_1 + 8);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_18.SharedReferenceCount.ReferenceController = pTVar10;
  pTVar6 = TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
                   *)(lVar1 + 0x118),&TStack_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (pTVar6 == (TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *)
                0x0) {
    lStack_28 = 0;
    pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    lStack_28 = *(longlong *)&pTVar6->field_0x10;
    pTStack_20 = *(TReferenceControllerBase<1> **)&pTVar6->field_0x18;
    if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (lStack_28 != 0) {
    if ((lStack_28 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined1 *)(lStack_28 + 0x60) = 1;
    lVar1 = *(longlong *)param_1;
    pFVar7 = (FGuid *)(**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 8))();
    uVar8 = CityHash64((char *)pFVar7,0x10);
    iVar5 = TSet<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>,FDefaultSetAllocator>
                        *)(lVar1 + 0x78),(uint)uVar8,pFVar7);
    if ((iVar5 == -1) || (lVar1 = *(longlong *)(lVar1 + 0x78) + (longlong)iVar5 * 0x28, lVar1 == 0))
    {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x10);
      pTVar10 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar2 != 0) {
        if (((*(longlong **)(lVar2 + 8) <= &lStack_28) &&
            (&lStack_28 < *(longlong **)(lVar2 + 8) + (longlong)*(int *)(lVar2 + 0x14) * 2)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)(lVar2 + 0x10);
        if (iVar5 == *(int *)(lVar2 + 0x14)) {
          iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)(lVar2 + 8),(int *)(lVar2 + 0x14));
        }
        *(int *)(lVar2 + 0x10) = iVar5 + 1;
        plVar9 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar2 + 8));
        *plVar9 = lStack_28;
        plVar9[1] = (longlong)pTStack_20;
        if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_20->SharedReferenceCount =
               (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// Call @ 142d41fe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMessageTracer::TraceRemovedInterceptor'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  lVar1 = *(longlong *)param_1;
  pFVar4 = (FGuid *)(**(code **)(**(longlong **)((longlong)param_1 + 8) + 8))();
  uVar5 = CityHash64((char *)pFVar4,0x10);
  iVar3 = TSet<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>,FDefaultSetAllocator>
                      *)(lVar1 + 0x78),(uint)uVar5,pFVar4);
  if ((iVar3 == -1) || (lVar1 = *(longlong *)(lVar1 + 0x78) + (longlong)iVar3 * 0x28, lVar1 == 0)) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((longlong)param_1 + 0x28);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Call @ 142d41ff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMessageTracer::TraceRemovedRecipient'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
  *this;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  lVar1 = *(longlong *)param_1;
  uVar3 = FCrc::MemCrc_DEPRECATED((void *)((longlong)param_1 + 8),0x10,0);
  iVar4 = TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMessageAddress>
                    ((TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
                      *)(lVar1 + 8),uVar3,(FMessageAddress *)((longlong)param_1 + 8));
  if ((iVar4 == -1) || (lVar1 = *(longlong *)(lVar1 + 8) + (longlong)iVar4 * 0x28, lVar1 == 0)) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    this = *(TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
             **)(lVar1 + 0x10);
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this != (TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
                 *)0x0) {
      uVar3 = FCrc::MemCrc_DEPRECATED((void *)((longlong)param_1 + 8),0x10,0);
      iVar4 = TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMessageAddress>
                        (this,uVar3,(FMessageAddress *)((longlong)param_1 + 8));
      if ((iVar4 == -1) ||
         (lVar1 = *(longlong *)&this->Elements + (longlong)iVar4 * 0x28, lVar1 == 0)) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        lVar2 = *(longlong *)(lVar1 + 0x10);
        pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)((longlong)param_1 + 0x18);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          goto LAB_142d40225;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
  }
LAB_142d40225:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// Call @ 142d42000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMessageTracer::TraceRemovedSubscription'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  return;
}

// Call @ 142d42010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMessageTracer::TraceRoutedMessage'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<IMessageContext_const_,1> TStack_18;
  
  lVar1 = *(longlong *)param_1;
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  TStack_18.Object = *(IMessageContext **)((longlong)param_1 + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_18.SharedReferenceCount.ReferenceController = pTVar2;
  pTVar3 = TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
                   *)(lVar1 + 0x118),&TStack_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pTVar3 == (TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *)
                0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    lVar1 = *(longlong *)&pTVar3->field_0x10;
    pTVar4 = *(TReferenceControllerBase<1> **)&pTVar3->field_0x18;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)((longlong)param_1 + 0x18);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Call @ 142d42020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMessageTracer::TraceSentMessage'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  FMessageTracerEndpointInfo *pFVar3;
  longlong *plVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FMessageTracerMessageInfo *pFVar8;
  FName FVar9;
  FName FVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  FMessageAddress *pFVar17;
  longlong lVar18;
  FWeakObjectPtr *pFVar19;
  UStruct *pUVar20;
  TSharedPtr<FMessageTracerTypeInfo,1> *this;
  FMessageTracerTypeInfo *pFVar21;
  FMessageTracerTypeInfo *pFVar22;
  longlong lVar23;
  FSharedReferencer<1> FVar24;
  TReferenceControllerBase<1> *pTVar25;
  FSharedReferencer<1> FVar26;
  FSharedReferencer<1> FVar27;
  TPairInitializer<TSharedPtr<IMessageContext,1>_&&,TSharedPtr<FMessageTracerMessageInfo,1>_&&>
  TStackX_18;
  TSharedRef<FMessageTracerMessageInfo,1> TStack_188;
  FMessageTracerEndpointInfo *pFStack_178;
  FTopLevelAssetPath FStack_170;
  FMessageTracerMessageInfo *pFStack_158;
  FMessageTracerEndpointInfo *pFStack_150;
  FMessageTracerMessageInfo *pFStack_148;
  FMessageTracerEndpointInfo *pFStack_140;
  undefined1 auStack_138 [16];
  FTopLevelAssetPath FStack_128;
  TRawPtrProxy<FMessageTracerTypeInfo> TStack_118;
  FMessageTracerTypeInfo *pFStack_110;
  TSharedPtr<FMessageTracerTypeInfo,1> *pTStack_108;
  TReferenceControllerBase<1> *pTStack_100;
  undefined8 uStack_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  undefined8 *puStack_e8;
  FMessageTracerMessageInfo **ppFStack_e0;
  FMessageTracerMessageInfo *pFStack_d8;
  FMessageTracerEndpointInfo *pFStack_d0;
  FSharedReferencer<1> FStack_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  FMessageTracerMessageInfo *pFStack_b8;
  FMessageTracerEndpointInfo *pFStack_b0;
  FDestructionSentinel FStack_a8;
  FDestructionSentinel FStack_90;
  FMessageTracerEndpointInfo *pFStack_78;
  TReferenceControllerBase<1> *pTStack_70;
  FMessageTracerTypeInfo *pFStack_68;
  TReferenceControllerBase<1> *pTStack_60;
  
  lVar23 = *(longlong *)param_1;
  pFVar17 = (FMessageAddress *)(**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x48))();
  uVar14 = FCrc::MemCrc_DEPRECATED(pFVar17,0x10,0);
  iVar15 = TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FMessageAddress>
                     ((TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
                       *)(lVar23 + 8),uVar14,pFVar17);
  if ((iVar15 == -1) || (lVar23 = *(longlong *)(lVar23 + 8) + (longlong)iVar15 * 0x28, lVar23 == 0))
  {
    pTVar25 = (TReferenceControllerBase<1> *)0x0;
    goto LAB_142d40bfc;
  }
  pTVar25 = *(TReferenceControllerBase<1> **)(lVar23 + 0x18);
  pFVar3 = *(FMessageTracerEndpointInfo **)(lVar23 + 0x10);
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFStack_178 = pFVar3;
  pTStack_100 = pTVar25;
  if (pFVar3 == (FMessageTracerEndpointInfo *)0x0) goto LAB_142d40bfc;
  TStackX_18.Value = ::operator_new(0x98);
  if (TStackX_18.Value == (TSharedPtr<FMessageTracerMessageInfo,1> *)0x0) {
    TStackX_18.Value = (TSharedPtr<FMessageTracerMessageInfo,1> *)0x0;
  }
  else {
    TStackX_18.Value[2].Object = (FMessageTracerMessageInfo *)0x0;
    TStackX_18.Value[2].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    TStackX_18.Value[4].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)((longlong)&TStackX_18.Value[5].SharedReferenceCount.ReferenceController + 4) = 0
    ;
    *(undefined4 *)((longlong)&TStackX_18.Value[6].Object + 4) = 0;
    TStackX_18.Value[7].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    TStackX_18.Value[8].Object = (FMessageTracerMessageInfo *)0x0;
    (TStackX_18.Value)->Object = (FMessageTracerMessageInfo *)0x0;
    ((TStackX_18.Value)->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    TStackX_18.Value[1].Object = (FMessageTracerMessageInfo *)0x0;
    TStackX_18.Value[1].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    TStackX_18.Value[3].Object = (FMessageTracerMessageInfo *)0x0;
    *(undefined4 *)&TStackX_18.Value[3].SharedReferenceCount.ReferenceController = 0;
    *(undefined4 *)((longlong)&TStackX_18.Value[3].SharedReferenceCount.ReferenceController + 4) =
         0x80;
    *(undefined4 *)&TStackX_18.Value[4].Object = 0xffffffff;
    *(undefined4 *)((longlong)&TStackX_18.Value[4].Object + 4) = 0;
    TStackX_18.Value[5].Object = (FMessageTracerMessageInfo *)0x0;
    *(undefined4 *)&TStackX_18.Value[5].SharedReferenceCount.ReferenceController = 0;
    TStackX_18.Value[6].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    TStackX_18.Value[7].Object = (FMessageTracerMessageInfo *)0x0;
    TStackX_18.Value[8].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    TStackX_18.Value[9].Object = (FMessageTracerMessageInfo *)0x0;
  }
  pFVar22 = (FMessageTracerTypeInfo *)0x0;
  TSharedRef<FMessageTracerMessageInfo,1>::
  TSharedRef<FMessageTracerMessageInfo,1><FMessageTracerMessageInfo>
            (&TStack_188,(TRawPtrProxy<FMessageTracerMessageInfo> *)&TStackX_18.Value);
  pFVar8 = TStack_188.Object;
  auStack_138._8_8_ = *(longlong *)((longlong)param_1 + 0x10);
  auStack_138._0_8_ = *(undefined8 *)((longlong)param_1 + 8);
  if ((TReferenceControllerBase<1> *)auStack_138._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)auStack_138._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)auStack_138._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (TStack_188.Object != (FMessageTracerMessageInfo *)auStack_138) {
    ((TStack_188.Object)->Context).Object = (IMessageContext *)auStack_138._0_8_;
    auStack_138._0_8_ = (IMessageContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&((TStack_188.Object)->Context).SharedReferenceCount,
               (FSharedReferencer<1> *)(auStack_138 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)auStack_138._8_8_);
  pFVar8->Intercepted = false;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFStack_78 = (pFVar8->SenderInfo).Object;
  pTStack_70 = (pFVar8->SenderInfo).SharedReferenceCount.ReferenceController;
  (pFVar8->SenderInfo).Object = pFVar3;
  (pFVar8->SenderInfo).SharedReferenceCount.ReferenceController = pTVar25;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  FVar27.ReferenceController = TStack_188.SharedReferenceCount.ReferenceController;
  pFStack_d8 = TStack_188.Object;
  pFStack_d0 = (FMessageTracerEndpointInfo *)TStack_188.SharedReferenceCount.ReferenceController;
  (TStack_188.Object)->TimeRouted = 0.0;
  (TStack_188.Object)->TimeSent = *(double *)((longlong)param_1 + 0x18);
  lVar23 = *(longlong *)param_1;
  if ((FMessageTracerEndpointInfo *)TStack_188.SharedReferenceCount.ReferenceController !=
      (FMessageTracerEndpointInfo *)0x0) {
    LOCK();
    (TStack_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uStack_f8 = *(undefined8 *)((longlong)param_1 + 8);
  pTStack_f0 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (pTStack_f0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_f0->SharedReferenceCount = (atomic<int>)((int)pTStack_f0->SharedReferenceCount + 1);
    UNLOCK();
  }
  puStack_e8 = &uStack_f8;
  ppFStack_e0 = &pFStack_d8;
  TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSharedPtr<IMessageContext,1>_&&,TSharedPtr<FMessageTracerMessageInfo,1>_&&>_>
            ((TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
              *)(lVar23 + 0x118),&TStackX_18,(bool *)&puStack_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFStack_d0);
  plVar4 = *(longlong **)((longlong)param_1 + 8);
  lVar23 = *(longlong *)param_1;
  lVar18 = (**(code **)(*plVar4 + 0x18))(plVar4);
  if (lVar18 == 0) {
LAB_142d40570:
    FStack_170.PackageName.ComparisonIndex.Value = 0;
    FStack_170.PackageName.Number = 0;
    FStack_170.AssetName.ComparisonIndex.Value = 0;
    FStack_170.AssetName.Number = 0;
  }
  else {
    pFVar19 = (FWeakObjectPtr *)(**(code **)(*plVar4 + 0x20))(plVar4);
    bVar11 = FWeakObjectPtr::IsValid(pFVar19,false,true);
    if (!bVar11) goto LAB_142d40570;
    pFVar19 = (FWeakObjectPtr *)(**(code **)(*plVar4 + 0x20))(plVar4);
    pUVar20 = (UStruct *)FWeakObjectPtr::Get(pFVar19);
    UStruct::GetStructPathName(pUVar20,&FStack_170);
  }
  FVar10 = FStack_170.AssetName;
  uVar14 = ::GetTypeHash(FStack_170.AssetName.ComparisonIndex.Value);
  FVar9 = FStack_170.PackageName;
  uVar16 = ::GetTypeHash(FStack_170.PackageName.ComparisonIndex.Value);
  uVar16 = uVar16 + FVar9.Number;
  this = TMapBase<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>_>
         ::FindOrAddImpl<FTopLevelAssetPath>
                   ((TMapBase<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>_>
                     *)(lVar23 + 0x168),
                    (uVar16 >> 2) + uVar16 * 0x40 + -0x61c88647 + uVar14 + FVar10.Number ^ uVar16,
                    &FStack_170);
  pTStack_108 = this;
  if (this->Object == (FMessageTracerTypeInfo *)0x0) {
    pFVar21 = ::operator_new(0x28);
    if (pFVar21 != (FMessageTracerTypeInfo *)0x0) {
      (pFVar21->Messages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar21->Messages).ArrayNum = 0;
      (pFVar21->Messages).ArrayMax = 0;
      (pFVar21->TypeName).ComparisonIndex = 0;
      (pFVar21->TypeName).Number = 0;
      (pFVar21->TypePathName).PackageName.ComparisonIndex = 0;
      (pFVar21->TypePathName).PackageName.Number = 0;
      (pFVar21->TypePathName).AssetName.ComparisonIndex = 0;
      (pFVar21->TypePathName).AssetName.Number = 0;
      pFVar22 = pFVar21;
    }
    TStack_118.Object = pFVar22;
    TSharedPtr<FMessageTracerTypeInfo,1>::operator=<FMessageTracerTypeInfo>(this,&TStack_118);
    plVar4 = *(longlong **)((longlong)param_1 + 8);
    lVar23 = (**(code **)(*plVar4 + 0x18))(plVar4);
    if (lVar23 == 0) {
LAB_142d4067d:
      FStack_128.PackageName.ComparisonIndex.Value = 0;
      FStack_128.PackageName.Number = 0;
      FStack_128.AssetName.ComparisonIndex.Value = 0;
      FStack_128.AssetName.Number = 0;
    }
    else {
      pFVar19 = (FWeakObjectPtr *)(**(code **)(*plVar4 + 0x20))(plVar4);
      bVar11 = FWeakObjectPtr::IsValid(pFVar19,false,true);
      if (!bVar11) goto LAB_142d4067d;
      pFVar19 = (FWeakObjectPtr *)(**(code **)(*plVar4 + 0x20))(plVar4);
      pUVar20 = (UStruct *)FWeakObjectPtr::Get(pFVar19);
      UStruct::GetStructPathName(pUVar20,&FStack_128);
    }
    FVar10 = FStack_128.AssetName;
    FVar9 = FStack_128.PackageName;
    if ((this->Object == (FMessageTracerTypeInfo *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar22 = this->Object;
    (pFVar22->TypePathName).PackageName = FVar9;
    (pFVar22->TypePathName).AssetName = FVar10;
    lVar23 = *(longlong *)param_1;
    if ((this->Object == (FMessageTracerTypeInfo *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar25 = (this->SharedReferenceCount).ReferenceController;
    pFStack_110 = this->Object;
    if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFStack_110 == (FMessageTracerTypeInfo *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar23 + 0x220),
               (FWriteAccessScope *)&FStack_a8);
    pFVar22 = pFStack_110;
    *(int *)(lVar23 + 0x23c) = *(int *)(lVar23 + 0x23c) + 1;
    bVar11 = false;
    uVar14 = *(int *)(lVar23 + 0x230) - 1;
    if (-1 < (int)uVar14) {
      lVar18 = (longlong)(int)uVar14 << 4;
      bVar11 = false;
      do {
        uVar16 = 0;
        if ((int)uVar14 < *(int *)(lVar23 + 0x230)) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(int *)(lVar18 + 8 + *(longlong *)(lVar23 + 0x228)) == 0) ||
           (plVar4 = *(longlong **)(lVar18 + *(longlong *)(lVar23 + 0x228)),
           plVar4 == (longlong *)0x0)) {
LAB_142d4080c:
          bVar11 = true;
        }
        else {
          lVar5 = *plVar4;
          FStack_c8.ReferenceController = (TReferenceControllerBase<1> *)pFVar22;
          if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTStack_c0 = pTVar25;
          cVar13 = (**(code **)(lVar5 + 0x68))();
          if (cVar13 == '\0') goto LAB_142d4080c;
        }
        lVar18 = lVar18 + -0x10;
        uVar14 = uVar14 - 1;
        this = pTStack_108;
        FVar27.ReferenceController = TStack_188.SharedReferenceCount.ReferenceController;
      } while (-1 < (int)uVar14);
    }
    *(int *)(lVar23 + 0x23c) = *(int *)(lVar23 + 0x23c) + -1;
    if (bVar11) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar23 + 0x220),false);
    }
    if (FStack_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_a8.Accessor,&FStack_a8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  }
  if ((this->Object == (FMessageTracerTypeInfo *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar22 = this->Object;
  pFStack_158 = TStack_188.Object;
  pFStack_150 = (FMessageTracerEndpointInfo *)TStack_188.SharedReferenceCount.ReferenceController;
  if ((FMessageTracerEndpointInfo *)FVar27.ReferenceController != (FMessageTracerEndpointInfo *)0x0)
  {
    LOCK();
    paVar1 = (atomic<int> *)
             &(((FMessageTracerEndpointInfo *)FVar27.ReferenceController)->AddressInfos).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar6 = (pFVar22->Messages).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)&pFStack_158) &&
      ((FScriptContainerElement *)&pFStack_158 <
       pFVar6 + (longlong)(pFVar22->Messages).ArrayMax * 0x10)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = (pFVar22->Messages).ArrayNum;
  piVar2 = &(pFVar22->Messages).ArrayMax;
  if (iVar15 == *piVar2) {
    iVar15 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)pFVar22,piVar2);
  }
  (pFVar22->Messages).ArrayNum = iVar15 + 1;
  pFVar6 = (pFVar22->Messages).AllocatorInstance.Data;
  *(FMessageTracerMessageInfo **)(pFVar6 + (longlong)iVar15 * 0x10) = pFStack_158;
  *(FMessageTracerEndpointInfo **)(pFVar6 + (longlong)iVar15 * 0x10 + 8) = pFStack_150;
  pFStack_150 = (FMessageTracerEndpointInfo *)0x0;
  pFStack_158 = (FMessageTracerMessageInfo *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar3 = pFStack_178;
  pFStack_148 = TStack_188.Object;
  pFStack_140 = (FMessageTracerEndpointInfo *)TStack_188.SharedReferenceCount.ReferenceController;
  if ((FMessageTracerEndpointInfo *)FVar27.ReferenceController != (FMessageTracerEndpointInfo *)0x0)
  {
    LOCK();
    paVar1 = (atomic<int> *)
             &(((FMessageTracerEndpointInfo *)FVar27.ReferenceController)->AddressInfos).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar6 = (pFStack_178->SentMessages).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)&pFStack_148) &&
      ((FScriptContainerElement *)&pFStack_148 <
       pFVar6 + (longlong)(pFStack_178->SentMessages).ArrayMax * 0x10)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = (pFVar3->SentMessages).ArrayNum;
  piVar2 = &(pFVar3->SentMessages).ArrayMax;
  if (iVar15 == *piVar2) {
    iVar15 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(pFVar3->SentMessages).AllocatorInstance,piVar2);
  }
  (pFVar3->SentMessages).ArrayNum = iVar15 + 1;
  pFVar6 = (pFVar3->SentMessages).AllocatorInstance.Data;
  *(FMessageTracerMessageInfo **)(pFVar6 + (longlong)iVar15 * 0x10) = pFStack_148;
  *(FMessageTracerEndpointInfo **)(pFVar6 + (longlong)iVar15 * 0x10 + 8) = pFStack_140;
  pFStack_140 = (FMessageTracerEndpointInfo *)0x0;
  pFStack_148 = (FMessageTracerMessageInfo *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar25 = (this->SharedReferenceCount).ReferenceController;
  pFVar22 = this->Object;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFStack_68 = ((TStack_188.Object)->TypeInfo).Object;
  pTStack_60 = ((TStack_188.Object)->TypeInfo).SharedReferenceCount.ReferenceController;
  ((TStack_188.Object)->TypeInfo).Object = pFVar22;
  ((TStack_188.Object)->TypeInfo).SharedReferenceCount.ReferenceController = pTVar25;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  FVar27.ReferenceController = TStack_188.SharedReferenceCount.ReferenceController;
  lVar23 = *(longlong *)param_1;
  pFStack_178 = (FMessageTracerEndpointInfo *)TStack_188.SharedReferenceCount.ReferenceController;
  if ((FMessageTracerEndpointInfo *)TStack_188.SharedReferenceCount.ReferenceController !=
      (FMessageTracerEndpointInfo *)0x0) {
    LOCK();
    (TStack_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (TStack_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar23 + 0x1e0),
             (FWriteAccessScope *)&FStack_90);
  *(int *)(lVar23 + 0x1fc) = *(int *)(lVar23 + 0x1fc) + 1;
  bVar11 = false;
  uVar14 = *(int *)(lVar23 + 0x1f0) - 1;
  FVar24.ReferenceController = FVar27.ReferenceController;
  FVar26.ReferenceController = FVar27.ReferenceController;
  if (-1 < (int)uVar14) {
    lVar18 = (longlong)(int)uVar14 << 4;
    bVar11 = false;
    do {
      uVar16 = 0;
      if ((int)uVar14 < *(int *)(lVar23 + 0x1f0)) {
        uVar16 = ~uVar14 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(int *)(lVar18 + 8 + *(longlong *)(lVar23 + 0x1e8)) == 0) ||
         (plVar4 = *(longlong **)(lVar18 + *(longlong *)(lVar23 + 0x1e8)), plVar4 == (longlong *)0x0
         )) {
LAB_142d40b7a:
        bVar11 = true;
      }
      else {
        lVar5 = *plVar4;
        pFStack_b8 = TStack_188.Object;
        pFStack_b0 = (FMessageTracerEndpointInfo *)FVar27.ReferenceController;
        if ((FMessageTracerEndpointInfo *)FVar27.ReferenceController !=
            (FMessageTracerEndpointInfo *)0x0) {
          LOCK();
          (FVar27.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar27.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar13 = (**(code **)(lVar5 + 0x68))();
        if (cVar13 == '\0') goto LAB_142d40b7a;
      }
      lVar18 = lVar18 + -0x10;
      uVar14 = uVar14 - 1;
      FVar24.ReferenceController = TStack_188.SharedReferenceCount.ReferenceController;
      FVar26.ReferenceController = (TReferenceControllerBase<1> *)pFStack_178;
    } while (-1 < (int)uVar14);
  }
  *(int *)(lVar23 + 0x1fc) = *(int *)(lVar23 + 0x1fc) + -1;
  if (bVar11) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar23 + 0x1e0),false);
  }
  if (FStack_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_90.Accessor,&FStack_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar27.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar24.ReferenceController);
  pTVar25 = pTStack_100;
LAB_142d40bfc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  return;
}

