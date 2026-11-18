// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FNetPingUDPQoS @ 148089330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetPingUDPQoS * __thiscall
UE::Net::Private::FNetPingUDPQoS::FNetPingUDPQoS(FNetPingUDPQoS *this,FNetPing *param_1)

{
  *(undefined4 *)this = 8;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(FNetPing **)&this->field_0x8 = param_1;
  *(undefined2 *)&this->field_0x10 = 0;
  return this;
}

// operator() @ 148091340

/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`UE::Net::Private::FNetPingUDPQoS::Ping'::__l5::<lambda_1>::operator()
          (void *this,FIcmpEchoResult *param_1)

{
  FNetPingQoSBase *this_00;
  FScriptContainerElement *pFVar1;
  FIcmpEchoResult local_38;
  
  this_00 = *(FNetPingQoSBase **)this;
  if (this_00 != (FNetPingQoSBase *)0x0) {
    local_38.Status = param_1->Status;
    ::FString::FString(&local_38.ResolvedAddress,&param_1->ResolvedAddress);
    ::FString::FString(&local_38.ReplyFrom,&param_1->ReplyFrom);
    local_38.Time = param_1->Time;
    UE::Net::Private::FNetPingQoSBase::PingResult(this_00,&local_38);
  }
  pFVar1 = (param_1->ReplyFrom).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->ResolvedAddress).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// CreateNetPingUDPQoS @ 14809dbf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<UE::Net::Private::FNetPingUDPQoS,1> * __cdecl
UE::Net::Private::FNetPingUDPQoS::CreateNetPingUDPQoS
          (TSharedPtr<UE::Net::Private::FNetPingUDPQoS,1> *__return_storage_ptr__,FNetPing *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<UE::Net::Private::FNetPingUDPQoS,1> *pTVar7;
  FNetPingUDPQoS *pFVar8;
  
  pTVar6 = ::operator_new(0x40);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = (FNetPingUDPQoS *)&DAT_00000010;
  }
  else {
    *(FNetPing **)&pTVar6[1].SharedReferenceCount = param_1;
    pFVar8 = (FNetPingUDPQoS *)(pTVar6 + 1);
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNetPingUDPQoS_Private_Net_UE___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&pTVar6[1]._padding_ = 8;
    *(undefined2 *)&pTVar6[2]._padding_ = 0;
    if (pFVar8 == (FNetPingUDPQoS *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<UE::Net::Private::FNetPingUDPQoS,1> *)(*pcVar4)();
        return pTVar7;
      }
      goto LAB_14809dcf8;
    }
  }
  if (((*(longlong *)&pFVar8->field_0x20 == 0) || (*(longlong *)&pFVar8->field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&pFVar8->field_0x28 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FNetPingUDPQoS **)&pFVar8->field_0x20 = pFVar8;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pFVar8->field_0x28) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar8->field_0x28;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar8->field_0x28 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14809dcf8:
  __return_storage_ptr__->Object = pFVar8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// Ping @ 1480bc130

void __thiscall
UE::Net::Private::FNetPingUDPQoS::Ping(FNetPingUDPQoS *this,double param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  code *local_38 [2];
  undefined **local_28;
  TReferenceControllerBase<1> *local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (this->field_0x11 == '\0') {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    *(double *)&this->field_0x18 = param_1;
    this->field_0x11 = 1;
    pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x28;
    pTVar6 = pTVar5;
    pTVar8 = pTVar7;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar5->SharedReferenceCount;
      do {
        pTVar6 = pTVar7;
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_1480bc195;
        LOCK();
        aVar4 = pTVar5->SharedReferenceCount;
        bVar9 = aVar3 == aVar4;
        if (bVar9) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar9);
      pTVar6 = pTVar5;
      pTVar8 = *(TReferenceControllerBase<1> **)&this->field_0x20;
    }
LAB_1480bc195:
    pTVar5 = pTVar8 + 2;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = pTVar7;
    }
    if ((pTVar5 != (TReferenceControllerBase<1> *)&this->field_0x20) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("SharedThis.Get() == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x67f,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    local_28 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Net::Private::FNetPingUDPQoS::Ping'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_10 = 0;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Net::Private::FNetPingUDPQoS::Ping'::__l5::<lambda_1>,void,FIcmpEchoResult>
                  ::Call;
    local_20 = pTVar8;
    local_18 = pTVar6;
    FUDPPing::UDPEcho(param_2,(float)GNetPingUDPInterval,
                      (TFunction<void___cdecl(FIcmpEchoResult)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

