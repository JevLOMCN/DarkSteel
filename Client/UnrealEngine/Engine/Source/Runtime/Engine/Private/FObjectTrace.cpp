// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// AllocateInstanceId @ 148094db0

ulong64 __cdecl FObjectTrace::AllocateInstanceId(void)

{
  long64 lVar1;
  
  lVar1 = CurrentId;
  LOCK();
  CurrentId = CurrentId + 1;
  UNLOCK();
  return lVar1 + 1;
}

// Destroy @ 14809e010

void __cdecl FObjectTrace::Destroy(void)

{
  if (WorldTickStartHandle.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnWorldTickStart,WorldTickStartHandle);
    return;
  }
  return;
}

// GetObjectFromId @ 1480a6d80

UObject * __cdecl FObjectTrace::GetObjectFromId(ulong64 param_1)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  
  if ((int)param_1 == 0) {
    return (UObject *)0x0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GObjectIdAnnotations.InverseAnnotationMapCritical);
  if (GObjectIdAnnotations.InverseAnnotationMap._8_4_ !=
      GObjectIdAnnotations.InverseAnnotationMap._52_4_) {
    lVar2 = 0x154c5e1b8;
    if (GObjectIdAnnotations.InverseAnnotationMap._64_8_ != 0) {
      lVar2 = GObjectIdAnnotations.InverseAnnotationMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + ((ulonglong)(GObjectIdAnnotations.InverseAnnotationMap._72_4_ - 1) &
                             param_1 & 0xffffffff) * 4);
    while (iVar1 != -1) {
      lVar2 = GObjectIdAnnotations.InverseAnnotationMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(ulonglong *)(GObjectIdAnnotations.InverseAnnotationMap._0_8_ + (longlong)iVar1 * 0x18)
          == (param_1 & 0xffffffff)) {
        if (lVar2 != 0) {
          pUVar3 = *(UObject **)(lVar2 + 8);
          goto LAB_1480a6dfa;
        }
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  pUVar3 = (UObject *)0x0;
LAB_1480a6dfa:
  LeaveCriticalSection((LPCRITICAL_SECTION)&GObjectIdAnnotations.InverseAnnotationMapCritical);
  return pUVar3;
}

// GetObjectId @ 1480a7e20

ulong64 __cdecl FObjectTrace::GetObjectId(UObject *param_1)

{
  UObjectBase *pUVar1;
  FObjectIdAnnotation FVar2;
  FObjectIdAnnotation FVar3;
  FObjectIdAnnotation local_res8;
  
  FVar2.Id = 0;
  FVar3.Id = FVar2.Id;
  if (param_1 != (UObject *)0x0) {
    FUObjectAnnotationSparse<FObjectIdAnnotation,1>::GetAnnotation
              ((FUObjectAnnotationSparse<FObjectIdAnnotation,1> *)&GObjectIdAnnotations,
               (UObjectBase *)&local_res8);
    if (local_res8.Id == 0) {
      LOCK();
      UNLOCK();
      local_res8.Id = CurrentId + 1;
      CurrentId = CurrentId + 1;
      FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::
      AddAnnotationInternal<FObjectIdAnnotation>
                (&GObjectIdAnnotations,(UObjectBase *)param_1,&local_res8);
    }
    FVar3.Id = local_res8.Id;
    pUVar1 = *(UObjectBase **)&param_1->field_0x20;
    if ((pUVar1 != (UObjectBase *)0x0) &&
       (FUObjectAnnotationSparse<FObjectIdAnnotation,1>::GetAnnotation
                  ((FUObjectAnnotationSparse<FObjectIdAnnotation,1> *)&GObjectIdAnnotations,
                   (UObjectBase *)&local_res8), FVar2.Id = local_res8.Id, local_res8.Id == 0)) {
      LOCK();
      UNLOCK();
      local_res8.Id = CurrentId + 1;
      CurrentId = CurrentId + 1;
      FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::
      AddAnnotationInternal<FObjectIdAnnotation>(&GObjectIdAnnotations,pUVar1,&local_res8);
      FVar2.Id = local_res8.Id;
    }
  }
  return FVar2.Id << 0x20 | FVar3.Id;
}

// GetObjectWorldElapsedTime @ 1480a7f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __cdecl FObjectTrace::GetObjectWorldElapsedTime(UObject *param_1)

{
  UWorld *pUVar1;
  UObjectTraceWorldSubsystem *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
    if (pUVar1 != (UWorld *)0x0) {
      pUVar2 = UWorld::GetSubsystem<UObjectTraceWorldSubsystem>(pUVar1);
      if (pUVar2 != (UObjectTraceWorldSubsystem *)0x0) {
        return pUVar2->ElapsedTime;
      }
    }
  }
  return 0.0;
}

// GetObjectWorldRecordingIndex @ 1480a7f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ushort __cdecl FObjectTrace::GetObjectWorldRecordingIndex(UObject *param_1)

{
  UWorld *pUVar1;
  UObjectTraceWorldSubsystem *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
    if (pUVar1 != (UWorld *)0x0) {
      pUVar2 = UWorld::GetSubsystem<UObjectTraceWorldSubsystem>(pUVar1);
      if (pUVar2 != (UObjectTraceWorldSubsystem *)0x0) {
        return pUVar2->RecordingIndex;
      }
    }
  }
  return 0;
}

// GetObjectWorldTickCounter @ 1480a7f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ushort __cdecl FObjectTrace::GetObjectWorldTickCounter(UObject *param_1)

{
  UWorld *pUVar1;
  UObjectTraceWorldSubsystem *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
    if (pUVar1 != (UWorld *)0x0) {
      pUVar2 = UWorld::GetSubsystem<UObjectTraceWorldSubsystem>(pUVar1);
      if (pUVar2 != (UObjectTraceWorldSubsystem *)0x0) {
        return pUVar2->FrameIndex;
      }
    }
  }
  return 0;
}

// GetWorldElapsedTime @ 1480abc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __cdecl FObjectTrace::GetWorldElapsedTime(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  USubsystem *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return 0.0;
  }
  pUVar3 = UObjectTraceWorldSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_1480abcc8;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_1480abcc8:
    pUVar4 = UObjectTraceWorldSubsystem::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1480abcf8;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_1480abcf8:
  pUVar5 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  if (pUVar5 == (USubsystem *)0x0) {
    return 0.0;
  }
  return (double)pUVar5[1]._padding_;
}

// GetWorldRecordingIndex @ 1480abd30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ushort __cdecl FObjectTrace::GetWorldRecordingIndex(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  USubsystem *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return 0;
  }
  pUVar3 = UObjectTraceWorldSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_1480abd72;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_1480abd72:
    pUVar4 = UObjectTraceWorldSubsystem::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1480abda3;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_1480abda3:
  pUVar5 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  if (pUVar5 == (USubsystem *)0x0) {
    return 0;
  }
  return *(ushort *)((longlong)&pUVar5[1]._padding_ + 2);
}

// Init @ 1480aea40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FObjectTrace::Init(void)

{
  FDelegateHandle FVar1;
  undefined1 local_res8 [32];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy>
          ::AddStatic<>(&FWorldDelegates::OnWorldTickStart,
                        (_func___cdecl_void_UWorld_ptr_ELevelTick_float *)local_res8);
                    /* WARNING: Load size is inaccurate */
  WorldTickStartHandle.ID = *FVar1.ID;
  return;
}

// OutputInstance @ 1480baaa0

void __cdecl
FObjectTrace::OutputInstance
          (UObject *param_1,ulong64 param_2,ulong64 param_3,UStruct *param_4,FString *param_5,
          FString *param_6)

{
  bool bVar1;
  UObject *pUVar2;
  FObjectId local_res8;
  
  if (((param_1 != (UObject *)0x0) && (-1 < ObjectChannel->Enabled)) &&
     ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) {
    pUVar2 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))();
    bVar1 = FTraceFilter::IsObjectTraceable<1>(pUVar2);
    if ((bVar1) && (local_res8.ObjectId = param_2, bVar1 = AddObjectToTracedSet(&local_res8), bVar1)
       ) {
      OutputInstanceInternal(param_1,param_2,param_3,param_4,param_5,param_6,'\x02');
    }
  }
  return;
}

// OutputInstanceLifetimeEnd @ 1480bad80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FObjectTrace::OutputInstanceLifetimeEnd(UObject *param_1,ulong64 param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UWorld *pUVar3;
  LARGE_INTEGER LVar4;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  if (((param_1 != (UObject *)0x0) &&
      (local_10 = __security_cookie.value ^ (ulonglong)auStack_48, -1 < ObjectChannel->Enabled)) &&
     ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) {
    pUVar2 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    bVar1 = FTraceFilter::IsObjectTraceable<1>(pUVar2);
    if (((bVar1) &&
        (pUVar3 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1),
        pUVar3 != (UWorld *)0x0)) && (-1 < ObjectChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FObjectObjectLifetimeEnd2Fields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      LVar4 = (LARGE_INTEGER)GetWorldElapsedTime(pUVar3);
      local_20[1] = LVar4;
      local_20[2].QuadPart = param_2;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// OutputObject @ 1480bae90

void __cdecl FObjectTrace::OutputObject(UObject *param_1)

{
  uint uVar1;
  UStruct *pUVar2;
  bool bVar3;
  UObject *pUVar4;
  FName FVar5;
  FString *pFVar6;
  FString *pFVar7;
  ulong64 uVar8;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  if (((param_1 != (UObject *)0x0) && (-1 < ObjectChannel->Enabled)) &&
     ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) {
    pUVar4 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))();
    bVar3 = FTraceFilter::IsObjectTraceable<1>(pUVar4);
    if (bVar3) {
      FVar5 = (FName)GetObjectId(param_1);
      local_res8 = FVar5;
      bVar3 = AddObjectToTracedSet((FObjectId *)&local_res8);
      if (bVar3) {
        uVar1 = *(uint *)&param_1->field_0x8;
        OutputObject(*(UObject **)&param_1->field_0x20);
        pFVar6 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
        local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_res8.Number = *(uint *)&param_1->field_0x1c;
        pFVar7 = ::FName::ToString(&local_res8,&local_38);
        pUVar2 = *(UStruct **)&param_1->field_0x10;
        uVar8 = GetObjectId(*(UObject **)&param_1->field_0x20);
        OutputInstanceInternal
                  (param_1,(ulong64)FVar5,uVar8,pUVar2,pFVar7,pFVar6,(byte)(uVar1 >> 6) & 1);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// OutputObjectEvent @ 1480baff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FObjectTrace::OutputObjectEvent(UObject *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  bool bVar4;
  UObject *pUVar5;
  ulong64 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  if (((param_1 != (UObject *)0x0) &&
      (local_10 = __security_cookie.value ^ (ulonglong)auStack_48, -1 < ObjectChannel->Enabled)) &&
     ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) {
    pUVar5 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    bVar4 = FTraceFilter::IsObjectTraceable<1>(pUVar5);
    if ((bVar4) && (OutputObject(param_1), -1 < ObjectChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FObjectObjectEventFields>((TLogScope<1> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      uVar6 = GetObjectId(param_1);
      local_20[1].QuadPart = uVar6;
      iVar8 = 0;
      wVar1 = *param_2;
      pwVar3 = param_2;
      while (wVar1 != L'\0') {
        pwVar3 = pwVar3 + 1;
        iVar8 = iVar8 + 1;
        wVar1 = *pwVar3;
      }
      UE::Trace::Private::Field_WriteStringWide(2,param_2,iVar8);
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar2 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(lVar2 + 0x20);
      **(undefined1 **)(lVar2 + 0x20) = 6;
      lVar7 = *(longlong *)(lVar2 + 0x20) + 1;
      *(longlong *)(lVar2 + 0x20) = lVar7;
      if (lVar2 != local_18) {
        *(longlong *)(lVar2 + 0x28) = lVar7;
      }
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// OutputObjectLifetimeBegin @ 1480bb150

void __cdecl FObjectTrace::OutputObjectLifetimeBegin(UObject *param_1)

{
  uint uVar1;
  UStruct *pUVar2;
  bool bVar3;
  UObject *pUVar4;
  FName FVar5;
  FString *pFVar6;
  FString *pFVar7;
  ulong64 uVar8;
  FName FStackX_8;
  FString FStack_38;
  FString FStack_28;
  
  if (((param_1 != (UObject *)0x0) && (-1 < ObjectChannel->Enabled)) &&
     ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) {
    pUVar4 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))();
    bVar3 = FTraceFilter::IsObjectTraceable<1>(pUVar4);
    if (bVar3) {
      FVar5 = (FName)GetObjectId(param_1);
      FStackX_8 = FVar5;
      bVar3 = AddObjectToTracedSet((FObjectId *)&FStackX_8);
      if (bVar3) {
        uVar1 = *(uint *)&param_1->field_0x8;
        OutputObject(*(UObject **)&param_1->field_0x20);
        pFVar6 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)param_1,&FStack_28,(UObject *)0x0);
        FStackX_8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        FStackX_8.Number = *(uint *)&param_1->field_0x1c;
        pFVar7 = ::FName::ToString(&FStackX_8,&FStack_38);
        pUVar2 = *(UStruct **)&param_1->field_0x10;
        uVar8 = GetObjectId(*(UObject **)&param_1->field_0x20);
        OutputInstanceInternal
                  (param_1,(ulong64)FVar5,uVar8,pUVar2,pFVar7,pFVar6,(byte)(uVar1 >> 6) & 1);
        if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
        }
        if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// OutputObjectLifetimeEnd @ 1480bb160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FObjectTrace::OutputObjectLifetimeEnd(UObject *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  UObject *pUVar3;
  UWorld *pUVar4;
  LARGE_INTEGER LVar5;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  OutputObject(param_1);
  uVar2 = GetObjectId(param_1);
  if (((param_1 != (UObject *)0x0) && (-1 < ObjectChannel->Enabled)) &&
     ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) {
    pUVar3 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    bVar1 = FTraceFilter::IsObjectTraceable<1>(pUVar3);
    if (((bVar1) &&
        (pUVar4 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1),
        pUVar4 != (UWorld *)0x0)) && (-1 < ObjectChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FObjectObjectLifetimeEnd2Fields>
                ((TLogScope<0> *)&local_20);
      QueryPerformanceCounter(&local_28);
      *local_20 = local_28;
      LVar5 = (LARGE_INTEGER)GetWorldElapsedTime(pUVar4);
      local_20[1] = LVar5;
      local_20[2].QuadPart = uVar2;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// OutputObjectTransform @ 1480bb270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FObjectTrace::OutputObjectTransform
          (UObject *param_1,TTransform<double> *param_2,ETeleportType param_3)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  UWorld *pUVar4;
  ulong64 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  LARGE_INTEGER *local_30;
  longlong local_28;
  ulonglong local_20;
  
  if (((param_1 != (UObject *)0x0) &&
      (local_20 = __security_cookie.value ^ (ulonglong)auStack_58, -1 < ObjectChannel->Enabled)) &&
     ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) {
    pUVar3 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    bVar2 = FTraceFilter::IsObjectTraceable<1>(pUVar3);
    if ((bVar2) && (OutputObject(param_1), -1 < ObjectChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FObjectObjectTransformFields>((TLogScope<1> *)&local_30);
      QueryPerformanceCounter(&local_38);
      *local_30 = local_38;
      pUVar4 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
      local_38 = (LARGE_INTEGER)GetWorldElapsedTime(pUVar4);
      local_30[1] = local_38;
      uVar5 = GetObjectId(param_1);
      local_30[2].QuadPart = uVar5;
      *(ETeleportType *)(local_30 + 3) = param_3;
      UE::Trace::Private::Field_WriteAuxData(4,(uchar *)param_2,0x60);
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar1 = *(longlong *)(lVar1 + 0x20);
      **(undefined1 **)(lVar1 + 0x20) = 6;
      lVar6 = *(longlong *)(lVar1 + 0x20) + 1;
      *(longlong *)(lVar1 + 0x20) = lVar6;
      if (lVar1 != local_28) {
        *(longlong *)(lVar1 + 0x28) = lVar6;
      }
      *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(local_28 + 0x20);
    }
  }
  return;
}

// OutputPawnPossess @ 1480bb3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FObjectTrace::OutputPawnPossess(UObject *param_1,UObject *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  ulong64 uVar3;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  if (((param_1 != (UObject *)0x0) &&
      (local_10 = __security_cookie.value ^ (ulonglong)auStack_48, -1 < ObjectChannel->Enabled)) &&
     ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) {
    pUVar2 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    bVar1 = FTraceFilter::IsObjectTraceable<1>(pUVar2);
    if (bVar1) {
      OutputObject(param_1);
      if (param_2 != (UObject *)0x0) {
        OutputObject(param_2);
      }
      if (-1 < ObjectChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FObjectPawnPossessFields>((TLogScope<0> *)&local_20);
        QueryPerformanceCounter(&local_28);
        *local_20 = local_28;
        uVar3 = GetObjectId(param_1);
        local_20[1].QuadPart = uVar3;
        uVar3 = GetObjectId(param_2);
        local_20[2].QuadPart = uVar3;
        *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
      }
    }
  }
  return;
}

// OutputType @ 1480bb4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FObjectTrace::OutputType(UStruct *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  uchar *puVar5;
  bool bVar6;
  uint uVar7;
  uchar *puVar8;
  ulong64 uVar9;
  int iVar10;
  undefined1 auStack_878 [32];
  FString local_858;
  FLogScope local_848;
  wchar_t local_838;
  wchar_t local_836 [1039];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_878;
  if ((-1 < ObjectChannel->Enabled) && (param_1 != (UStruct *)0x0)) {
    puVar8 = (uchar *)GetObjectId((UObject *)param_1);
    local_848.Ptr = puVar8;
    bVar6 = AddObjectToTracedSet((FObjectId *)&local_848);
    if (bVar6) {
      OutputType((param_1->SuperStruct).field0_0x0.DebugPtr);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_858,(UObject *)0x0);
      local_848.Ptr = (uchar *)param_1->_padding_;
      uVar7 = ::FName::ToStringInternal((FName *)&local_848,&local_838,0x40b);
      if (-1 < ObjectChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FObjectTypeFields>((TLogScope<1> *)&local_848);
        puVar5 = local_848.Ptr;
        *(uchar **)local_848.Ptr = puVar8;
        uVar9 = GetObjectId((UObject *)(param_1->SuperStruct).field0_0x0.DebugPtr);
        *(ulong64 *)((longlong)puVar5 + 8) = uVar9;
        if ((int)uVar7 < 0) {
          pwVar3 = &local_838;
          uVar7 = 0;
          while (local_838 != L'\0') {
            pwVar3 = pwVar3 + 1;
            uVar7 = uVar7 + 1;
            local_838 = *pwVar3;
          }
        }
        UE::Trace::Private::Field_WriteStringWide(2,&local_838,uVar7);
        iVar10 = local_858.Data.ArrayNum + -1;
        FVar4.Data = local_858.Data.AllocatorInstance.Data;
        if (local_858.Data.ArrayNum == 0) {
          iVar10 = 0;
          FVar4.Data = (FScriptContainerElement *)L"";
        }
        if (iVar10 < 0) {
          iVar10 = 0;
          wVar2 = *(wchar_t *)FVar4.Data;
          pFVar1 = FVar4.Data;
          while (wVar2 != L'\0') {
            pFVar1 = pFVar1 + 2;
            iVar10 = iVar10 + 1;
            wVar2 = *(wchar_t *)pFVar1;
          }
        }
        UE::Trace::Private::Field_WriteStringWide(3,(wchar_t *)FVar4.Data,iVar10);
        UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_848,&local_848);
      }
      if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_858.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OutputView @ 1480bb690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FObjectTrace::OutputView(UObject *param_1,FSceneView *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  UObject *pUVar7;
  ulong64 uVar8;
  double dVar9;
  undefined1 auStack_f8 [32];
  LARGE_INTEGER local_d8 [18];
  ulong64 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  if (((param_1 != (UObject *)0x0) &&
      (local_38 = __security_cookie.value ^ (ulonglong)auStack_f8, -1 < ObjectChannel->Enabled)) &&
     ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) {
    pUVar7 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    bVar6 = FTraceFilter::IsObjectTraceable<1>(pUVar7);
    if (bVar6) {
      iVar2 = *(int *)((longlong)&(param_2->CameraConstrainedViewRect).field0_0x0 + 8);
      iVar3 = *(int *)&(param_2->CameraConstrainedViewRect).field0_0x0;
      dVar9 = (param_2->ViewMatrices).ProjectionMatrix.M[0][0];
      iVar4 = *(int *)((longlong)&(param_2->CameraConstrainedViewRect).field0_0x0 + 0xc);
      iVar5 = *(int *)((longlong)&(param_2->CameraConstrainedViewRect).field0_0x0 + 4);
      if (-1 < ObjectChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FObjectViewFields>((TLogScope<0> *)&local_48);
        QueryPerformanceCounter(local_d8);
        *(LARGE_INTEGER *)(local_48 + 1) = local_d8[0];
        uVar8 = GetObjectId(param_1);
        *local_48 = uVar8;
        local_48[2] = (ulong64)(param_2->ViewLocation).field0_0x0._s_0.X;
        local_48[3] = (ulong64)(param_2->ViewLocation).field0_0x0._s_0.Y;
        dVar1 = (param_2->ViewLocation).field0_0x0._s_0.Z;
        local_48[4] = (ulong64)dVar1;
        local_d8[0].s.HighPart = (undefined4)((ulonglong)dVar1 >> 0x20);
        *(float *)(local_48 + 5) = (float)(param_2->ViewRotation).Pitch;
        *(float *)((longlong)local_48 + 0x2c) = (float)(param_2->ViewRotation).Yaw;
        local_d8[0]._0_4_ = (undefined4)(param_2->ViewRotation).Roll;
        dVar9 = __real_3ff0000000000000 / dVar9;
        *(undefined4 *)(local_48 + 6) = local_d8[0]._0_4_;
        dVar9 = atan(dVar9);
        *(float *)((longlong)local_48 + 0x34) = (float)(dVar9 * __real_405ca5dc1a63c1f8);
        *(float *)(local_48 + 7) = (float)(iVar2 - iVar3) / (float)(iVar4 - iVar5);
        *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
      }
    }
  }
  return;
}

// OutputWorld @ 1480bb8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FObjectTrace::OutputWorld(UWorld *param_1)

{
  bool bVar1;
  ENetMode EVar2;
  ulong64 uVar3;
  undefined1 auStack_48 [32];
  ulong64 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((-1 < ObjectChannel->Enabled) && (param_1 != (UWorld *)0x0)) {
    bVar1 = FTraceFilter::IsObjectTraceable<1>((UObject *)param_1);
    if (bVar1) {
      if (-1 < ObjectChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FObjectWorldFields>((TLogScope<0> *)&local_28);
        uVar3 = GetObjectId((UObject *)param_1);
        *local_28 = uVar3;
        UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
        *(undefined4 *)(local_28 + 1) = 0xffffffff;
        *(uchar *)((longlong)local_28 + 0xc) = (param_1->WorldType).Value;
        EVar2 = UWorld::InternalGetNetMode(param_1);
        *(char *)((longlong)local_28 + 0xd) = (char)EVar2;
        *(undefined1 *)((longlong)local_28 + 0xe) = 0;
        *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
      }
      OutputObject((UObject *)param_1);
    }
  }
  return;
}

// Reset @ 1480cc0e0

void __cdecl FObjectTrace::Reset(void)

{
  bool bVar1;
  
  FUObjectAnnotationSparseSearchable<FObjectIdAnnotation,1>::RemoveAllAnnotations
            (&GObjectIdAnnotations);
  AcquireSRWLockExclusive((PSRWLOCK)&GObjectTracedSetLock);
  bVar1 = 1 < GObjectTracedSet.HashSize;
  if (!bVar1) {
    TSet<UE::ObjectTrace::FObjectId,DefaultKeyFuncs<UE::ObjectTrace::FObjectId,0>,FDefaultSetAllocator>
    ::UnhashElements(&GObjectTracedSet);
  }
  GObjectTracedSet.Elements._8_4_ = 0;
  if (GObjectTracedSet.Elements._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&GObjectTracedSet,0,
               (int *)&GObjectTracedSet.Elements.field_0xc);
  }
  GObjectTracedSet.Elements._48_4_ = 0xffffffff;
  GObjectTracedSet.Elements._52_4_ = 0;
  GObjectTracedSet.Elements._40_4_ = 0;
  if (0x80 < (uint)GObjectTracedSet.Elements._44_4_) {
    GObjectTracedSet.Elements._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GObjectTracedSet.Elements.field_0x10,0);
  }
  if (bVar1) {
    GObjectTracedSet.HashSize = 1;
    TSet<UE::ObjectTrace::FObjectId,DefaultKeyFuncs<UE::ObjectTrace::FObjectId,0>,FDefaultSetAllocator>
    ::Rehash(&GObjectTracedSet);
  }
                    /* WARNING: Could not recover jumptable at 0x0001480cc1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&GObjectTracedSetLock);
  return;
}

// ResetWorldElapsedTime @ 1480ccd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FObjectTrace::ResetWorldElapsedTime(UWorld *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  USubsystem *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return;
  }
  pUVar3 = UObjectTraceWorldSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_1480ccd9b;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_1480ccd9b:
    pUVar4 = UObjectTraceWorldSubsystem::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1480ccdcb;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_1480ccdcb:
  pUVar5 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  if (pUVar5 != (USubsystem *)0x0) {
    pUVar5[1]._padding_ = 0;
  }
  return;
}

// SetWorldRecordingIndex @ 1480d3b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FObjectTrace::SetWorldRecordingIndex(UWorld *param_1,ushort param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  USubsystem *pUVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return;
  }
  pUVar3 = UObjectTraceWorldSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_1480d3bb3;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_1480d3bb3:
    pUVar4 = UObjectTraceWorldSubsystem::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1480d3be3;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_1480d3be3:
  pUVar5 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&param_1->SubsystemCollection,pUVar3);
  if (pUVar5 != (USubsystem *)0x0) {
    *(ushort *)((longlong)&pUVar5[1]._padding_ + 2) = param_2;
  }
  return;
}

