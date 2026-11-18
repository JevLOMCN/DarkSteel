// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FNetPingICMP @ 1480892e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetPingICMP * __thiscall
UE::Net::Private::FNetPingICMP::FNetPingICMP(FNetPingICMP *this,FNetPing *param_1)

{
  *(undefined4 *)this = 4;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(FNetPing **)&this->field_0x8 = param_1;
  *(undefined2 *)&this->field_0x10 = 0;
  return this;
}

// operator() @ 1480912b0

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
`UE::Net::Private::FNetPingICMP::Ping'::__l5::<lambda_1>::operator()
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

// GetNetPingICMP @ 1480a6890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<UE::Net::Private::FNetPingICMP,1> * __cdecl
UE::Net::Private::FNetPingICMP::GetNetPingICMP
          (TSharedPtr<UE::Net::Private::FNetPingICMP,1> *__return_storage_ptr__,
          UNetConnection *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  int iVar3;
  FNetPing *pFVar4;
  UNetDriver *pUVar5;
  longlong *plVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  FNameEntryId FVar10;
  TSharedPtr<UE::Net::Private::FNetPingICMP,1> *pTVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  atomic<int> aVar16;
  FNetPingICMP *pFVar17;
  atomic<int> aVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UE::Net::Private::FNetPingICMP::GetNetPingICMP'::__l2::
           _dynamic_atexit_destructor_for__NetPingSingleton__);
    _Init_thread_footer(&::_TSS0);
  }
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
  if ((param_1 == (UNetConnection *)0x0) ||
     (pFVar4 = (param_1->NetPing).Ptr, pFVar4 == (FNetPing *)0x0)) goto LAB_1480a6b46;
  pUVar5 = (param_1->Driver).field0_0x0.DebugPtr;
  FVar12 = FVar15;
  if (pUVar5 != (UNetDriver *)0x0) {
    FVar12 = pUVar5->NetDriverName;
  }
  if (NetPingSingleton.Object == (FNetPingICMP *)0x0) {
LAB_1480a694f:
    aVar18 = (atomic<int>)0x1;
  }
  else {
    if ((NetPingSingleton.Object == (FNetPingICMP *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<UE::Net::Private::FNetPingICMP,1> *)(*pcVar7)();
      return pTVar11;
    }
    aVar18 = (atomic<int>)0x2;
    if ((NetPingSingleton.Object)->field_0x11 == '\0') goto LAB_1480a694f;
  }
  FVar10 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar13.Number = 0;
  FVar13.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
  if ((FVar12 != FVar13) &&
     (FVar10 = FNameEntryId::FromValidEName((EName)local_res18), FVar14.Number = 0,
     FVar14.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar10.Value),
     FVar12 != FVar14)) {
LAB_1480a6b46:
    __return_storage_ptr__->Object = (FNetPingICMP *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (NetPingSingleton.Object != (FNetPingICMP *)0x0) {
    if (NetPingSingleton.SharedReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) {
      aVar16 = (atomic<int>)0x0;
    }
    else {
      aVar16 = (NetPingSingleton.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    }
    if (aVar16 != aVar18) goto LAB_1480a6b46;
  }
  if (NetPingSingleton.Object != (FNetPingICMP *)0x0) {
    if ((NetPingSingleton.Object == (FNetPingICMP *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<UE::Net::Private::FNetPingICMP,1> *)(*pcVar7)();
      return pTVar11;
    }
    pFVar17 = NetPingSingleton.Object;
    if ((NetPingSingleton.Object)->field_0x11 != '\0') {
      (NetPingSingleton.Object)->field_0x10 = 1;
    }
    *(undefined8 *)&pFVar17->field_0x18 = 0;
    goto LAB_1480a6b26;
  }
  FVar12 = (FName)::operator_new(0x40);
  if (FVar12 == (FName)0x0) {
    pFVar17 = (FNetPingICMP *)&DAT_00000010;
LAB_1480a6a47:
    if (((*(longlong *)&pFVar17->field_0x20 == 0) || (*(longlong *)&pFVar17->field_0x28 == 0)) ||
       (*(int *)(*(longlong *)&pFVar17->field_0x28 + 8) < 1)) {
      if (FVar15 != (FName)0x0) {
        LOCK();
        *(int *)((longlong)FVar15 + 8) = *(int *)((longlong)FVar15 + 8) + 1;
        UNLOCK();
      }
      *(FNetPingICMP **)&pFVar17->field_0x20 = pFVar17;
      FVar12.ComparisonIndex.Value = *(uint *)&pFVar17->field_0x28;
      FVar12.Number = *(uint *)&pFVar17->field_0x2c;
      if (FVar15 != FVar12) {
        if (FVar15 != (FName)0x0) {
          LOCK();
          *(int *)((longlong)FVar15 + 0xc) = *(int *)((longlong)FVar15 + 0xc) + 1;
          UNLOCK();
        }
        plVar6 = *(longlong **)&pFVar17->field_0x28;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(uint *)&pFVar17->field_0x28 = FVar15.ComparisonIndex.Value;
        *(uint *)&pFVar17->field_0x2c = FVar15.Number;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar15);
    }
  }
  else {
    *(FNetPing **)((longlong)FVar12 + 0x18) = pFVar4;
    pFVar17 = (FNetPingICMP *)((longlong)FVar12 + 0x10);
    *(undefined4 *)((longlong)FVar12 + 8) = 1;
    *(undefined4 *)((longlong)FVar12 + 0xc) = 1;
    *(undefined ***)FVar12 =
         &
         ___7__TIntrusiveReferenceController_VFNetPingICMP_Private_Net_UE___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)FVar12 + 0x10) = 4;
    *(undefined2 *)((longlong)FVar12 + 0x20) = 0;
    *(undefined8 *)((longlong)FVar12 + 0x28) = 0;
    *(undefined8 *)((longlong)FVar12 + 0x30) = 0;
    *(undefined8 *)((longlong)FVar12 + 0x38) = 0;
    FVar15 = FVar12;
    if (pFVar17 != (FNetPingICMP *)0x0) goto LAB_1480a6a47;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedPtr<UE::Net::Private::FNetPingICMP,1> *)(*pcVar7)();
      return pTVar11;
    }
  }
  if (FVar15 != (FName)0x0) {
    LOCK();
    *(int *)((longlong)FVar15 + 8) = *(int *)((longlong)FVar15 + 8) + 1;
    UNLOCK();
  }
  NetPingSingleton.Object = pFVar17;
  local_20 = FVar15;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&NetPingSingleton.SharedReferenceCount,(FSharedReferencer<1> *)&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar15);
LAB_1480a6b26:
  __return_storage_ptr__->Object = NetPingSingleton.Object;
  FVar8 = NetPingSingleton.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       NetPingSingleton.SharedReferenceCount.ReferenceController;
  if (FVar8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    return __return_storage_ptr__;
  }
  LOCK();
  paVar2 = &(FVar8.ReferenceController)->SharedReferenceCount;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  return __return_storage_ptr__;
}

// Ping @ 1480bbfa0

void __thiscall
UE::Net::Private::FNetPingICMP::Ping(FNetPingICMP *this,double param_1,FString *param_2)

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
        if (aVar3 == (atomic<int>)0x0) goto LAB_1480bc005;
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
LAB_1480bc005:
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
                TFunction_OwnedObject<`UE::Net::Private::FNetPingICMP::Ping'::`5'::<lambda_1>,0,0>::
                _vftable_;
    local_10 = 0;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Net::Private::FNetPingICMP::Ping'::__l5::<lambda_1>,void,FIcmpEchoResult>
                  ::Call;
    local_20 = pTVar8;
    local_18 = pTVar6;
    FIcmp::IcmpEcho(param_2,(float)GNetPingICMPInterval,
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

