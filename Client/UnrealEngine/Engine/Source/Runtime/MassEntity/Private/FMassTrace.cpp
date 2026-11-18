// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 19

// EntitiesDestroyed @ 1472159f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::EntitiesDestroyed(TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  int iVar1;
  FMassEntityHandle *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < MassChannel->Enabled) {
    QueryPerformanceCounter(&local_28);
    pFVar2 = param_1->DataPtr;
    iVar1 = param_1->ArrayNum;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (-1 < MassChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMassTraceMassBulkEntityDestroyedFields>
                ((TLogScope<1> *)&local_20);
      *local_20 = local_28;
      UE::Trace::Private::Field_WriteAuxData(1,(uchar *)pFVar2,iVar1 * 8 & 0x7fff8);
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar3 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      **(undefined1 **)(lVar3 + 0x20) = 6;
      lVar6 = *(longlong *)(lVar3 + 0x20) + 1;
      *(longlong *)(lVar3 + 0x20) = lVar6;
      if (lVar3 != local_18) {
        *(longlong *)(lVar3 + 0x28) = lVar6;
      }
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// EntityCreated @ 147215b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::EntityCreated(FMassEntityHandle param_1,FMassArchetypeData *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  FMassEntityHandle local_30;
  FMassArchetypeData *local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < MassChannel->Enabled) {
    QueryPerformanceCounter(&local_38);
    if (-1 < MassChannel->Enabled) {
      local_30 = param_1;
      local_28 = param_2;
      UE::Trace::Private::FLogScope::Enter<FMassTraceMassBulkAddEntityFields>
                ((TLogScope<1> *)&local_20);
      *local_20 = local_38;
      UE::Trace::Private::Field_WriteAuxData(1,(uchar *)&local_30,8);
      UE::Trace::Private::Field_WriteAuxData(2,(uchar *)&local_28,8);
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar1 = *(longlong *)(lVar1 + 0x20);
      **(undefined1 **)(lVar1 + 0x20) = 6;
      lVar2 = *(longlong *)(lVar1 + 0x20) + 1;
      *(longlong *)(lVar1 + 0x20) = lVar2;
      if (lVar1 != local_18) {
        *(longlong *)(lVar1 + 0x28) = lVar2;
      }
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// EntityDestroyed @ 147215c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::EntityDestroyed(FMassEntityHandle param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  FMassEntityHandle local_30;
  LARGE_INTEGER *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < MassChannel->Enabled) {
    QueryPerformanceCounter(&local_38);
    if (-1 < MassChannel->Enabled) {
      local_30 = param_1;
      UE::Trace::Private::FLogScope::Enter<FMassTraceMassBulkEntityDestroyedFields>
                ((TLogScope<1> *)&local_28);
      *local_28 = local_38;
      UE::Trace::Private::Field_WriteAuxData(1,(uchar *)&local_30,8);
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar1 = *(longlong *)(lVar1 + 0x20);
      **(undefined1 **)(lVar1 + 0x20) = 6;
      lVar2 = *(longlong *)(lVar1 + 0x20) + 1;
      *(longlong *)(lVar1 + 0x20) = lVar2;
      if (lVar1 != local_20) {
        *(longlong *)(lVar1 + 0x28) = lVar2;
      }
      *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
    }
  }
  return;
}

// EntityMoved @ 147215d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::EntityMoved(FMassEntityHandle param_1,FMassArchetypeData *param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < MassChannel->Enabled) {
    QueryPerformanceCounter(&local_28);
    if (-1 < MassChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMassTraceMassEntityMovedFields>
                ((TLogScope<0> *)&local_20);
      *local_20 = local_28;
      *(DWORD *)(local_20 + 1) = param_1.Index;
      *(int *)((longlong)(local_20 + 1) + 4) = param_1.SerialNumber;
      local_20[2] = (LARGE_INTEGER)param_2;
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
  }
  return;
}

// OnPhaseBegin @ 147238190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::OnPhaseBegin(ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  longlong lVar3;
  void *pvVar4;
  UPackage *pUVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  FString local_30;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < MassChannel->Enabled) {
    if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar5,
                         L"EMassProcessingPhase");
    }
    UEnum::GetNameStringByValue
              (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton,&local_30,param_1);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_30.Data.ArrayNum != 0) {
      FVar8.Data = local_30.Data.AllocatorInstance.Data;
    }
    if (-1 < MassChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMassTraceMassPhaseBeginFields>
                ((TLogScope<1> *)&local_20);
      QueryPerformanceCounter(&local_38);
      iVar9 = 0;
      *local_20 = local_38;
      wVar2 = *(wchar_t *)FVar8.Data;
      pFVar1 = FVar8.Data;
      while (wVar2 != L'\0') {
        pFVar1 = pFVar1 + 2;
        iVar9 = iVar9 + 1;
        wVar2 = *(wchar_t *)pFVar1;
      }
      UE::Trace::Private::Field_WriteStringWide(1,(wchar_t *)FVar8.Data,iVar9);
      pvVar4 = ThreadLocalStoragePointer;
      uVar7 = (ulonglong)_tls_index;
      local_20[1].QuadPart = 0;
      lVar3 = *(longlong *)((longlong)pvVar4 + uVar7 * 8);
      if (*(char *)(lVar3 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      **(undefined1 **)(lVar3 + 0x20) = 6;
      lVar6 = *(longlong *)(lVar3 + 0x20) + 1;
      *(longlong *)(lVar3 + 0x20) = lVar6;
      if (lVar3 != local_18) {
        *(longlong *)(lVar3 + 0x28) = lVar6;
      }
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnPhaseEnd @ 1472385f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::OnPhaseEnd(ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  longlong lVar3;
  void *pvVar4;
  UPackage *pUVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  FString local_30;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < MassChannel->Enabled) {
    if (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton == (UEnum *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassProcessingPhase,(UObject *)pUVar5,
                         L"EMassProcessingPhase");
    }
    UEnum::GetNameStringByValue
              (Z_Registration_Info_UEnum_EMassProcessingPhase.OuterSingleton,&local_30,param_1);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_30.Data.ArrayNum != 0) {
      FVar8.Data = local_30.Data.AllocatorInstance.Data;
    }
    if (-1 < MassChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMassTraceMassPhaseEndFields>((TLogScope<1> *)&local_20);
      QueryPerformanceCounter(&local_38);
      iVar9 = 0;
      *local_20 = local_38;
      wVar2 = *(wchar_t *)FVar8.Data;
      pFVar1 = FVar8.Data;
      while (wVar2 != L'\0') {
        pFVar1 = pFVar1 + 2;
        iVar9 = iVar9 + 1;
        wVar2 = *(wchar_t *)pFVar1;
      }
      UE::Trace::Private::Field_WriteStringWide(1,(wchar_t *)FVar8.Data,iVar9);
      pvVar4 = ThreadLocalStoragePointer;
      uVar7 = (ulonglong)_tls_index;
      local_20[1].QuadPart = 0;
      lVar3 = *(longlong *)((longlong)pvVar4 + uVar7 * 8);
      if (*(char *)(lVar3 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar3 = *(longlong *)(lVar3 + 0x20);
      **(undefined1 **)(lVar3 + 0x20) = 6;
      lVar6 = *(longlong *)(lVar3 + 0x20) + 1;
      *(longlong *)(lVar3 + 0x20) = lVar6;
      if (lVar3 != local_18) {
        *(longlong *)(lVar3 + 0x28) = lVar6;
      }
      *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OutputBeginPhaseRegion @ 14723a240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::OutputBeginPhaseRegion(wchar_t *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceMassPhaseBeginFields>((TLogScope<1> *)&local_20);
    QueryPerformanceCounter(&local_28);
    iVar7 = 0;
    *local_20 = local_28;
    wVar1 = *param_1;
    pwVar3 = param_1;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar7 = iVar7 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(1,param_1,iVar7);
    pvVar4 = ThreadLocalStoragePointer;
    uVar6 = (ulonglong)_tls_index;
    local_20[1].QuadPart = 0;
    lVar2 = *(longlong *)((longlong)pvVar4 + uVar6 * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar5;
    if (lVar2 != local_18) {
      *(longlong *)(lVar2 + 0x28) = lVar5;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputBeginPhaseWithID @ 14723a340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl FMassTrace::OutputBeginPhaseWithID(wchar_t *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  void *pvVar4;
  LARGE_INTEGER LVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (MassChannel->Enabled < 0) {
    return 0;
  }
  QueryPerformanceCounter(&local_28);
  LVar5 = local_28;
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceMassPhaseBeginFields>((TLogScope<1> *)&local_20);
    QueryPerformanceCounter(&local_28);
    iVar8 = 0;
    local_20->QuadPart = (LONGLONG)local_28;
    wVar1 = *param_1;
    pwVar3 = param_1;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar8 = iVar8 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(1,param_1,iVar8);
    pvVar4 = ThreadLocalStoragePointer;
    uVar7 = (ulonglong)_tls_index;
    local_20[1].QuadPart = (LONGLONG)LVar5;
    lVar2 = *(longlong *)((longlong)pvVar4 + uVar7 * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar6 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar6;
    if (lVar2 != local_18) {
      *(longlong *)(lVar2 + 0x28) = lVar6;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return LVar5.QuadPart;
}

// OutputEndPhaseRegion @ 14723a480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::OutputEndPhaseRegion(wchar_t *param_1)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceMassPhaseEndFields>((TLogScope<1> *)&local_20);
    QueryPerformanceCounter(&local_28);
    iVar7 = 0;
    *local_20 = local_28;
    wVar1 = *param_1;
    pwVar3 = param_1;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar7 = iVar7 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(1,param_1,iVar7);
    pvVar4 = ThreadLocalStoragePointer;
    uVar6 = (ulonglong)_tls_index;
    local_20[1].QuadPart = 0;
    lVar2 = *(longlong *)((longlong)pvVar4 + uVar6 * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar5;
    if (lVar2 != local_18) {
      *(longlong *)(lVar2 + 0x28) = lVar5;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputEndPhaseRegion @ 14723a580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::OutputEndPhaseRegion(ulong64 param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceMassPhaseEndFields>((TLogScope<1> *)&local_20);
    QueryPerformanceCounter(&local_28);
    uVar4 = (ulonglong)_tls_index;
    *local_20 = local_28;
    pvVar2 = ThreadLocalStoragePointer;
    local_20[1].QuadPart = param_1;
    lVar1 = *(longlong *)((longlong)pvVar2 + uVar4 * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar3 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar3;
    if (lVar1 != local_18) {
      *(longlong *)(lVar1 + 0x28) = lVar3;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// OutputRegisterArchetype @ 14723ab50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl
FMassTrace::OutputRegisterArchetype(ulong64 param_1,FMassArchetypeCompositionDescriptor *param_2)

{
  FMassArchetypeCompositionDescriptor *pFVar1;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FMassArchetypeCompositionDescriptor *pFVar9;
  UScriptStruct *pUVar10;
  UClass *pUVar11;
  ulong64 uVar12;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStackY_b8 [32];
  ForAnyElementType local_68;
  undefined8 local_60;
  UScriptStruct *local_50;
  UScriptStruct *local_48;
  ulong64 *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  iVar16 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  iVar7 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->Tags,0,-1);
  iVar8 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)param_2,0,-1);
  uVar17 = iVar8 + iVar7;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar17,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  iVar7 = *(int *)&(param_2->Fragments).field_0x18;
  uVar17 = 1;
  iVar8 = iVar16;
  if (iVar7 < 1) {
LAB_14723ac55:
    if (iVar16 < iVar7) goto LAB_14723ac60;
  }
  else {
    pFVar1 = *(FMassArchetypeCompositionDescriptor **)&(param_2->Fragments).field_0x10;
    pFVar9 = param_2;
    if (pFVar1 != (FMassArchetypeCompositionDescriptor *)0x0) {
      pFVar9 = pFVar1;
    }
    iVar15 = iVar16;
    if ((*(byte *)&pFVar9->Fragments & 1) == 0) {
      do {
        uVar5 = uVar17 * 2;
        iVar16 = iVar16 + 1;
        iVar8 = iVar15 + 1;
        uVar17 = 1;
        if (uVar5 != 0) {
          iVar8 = iVar15;
          uVar17 = uVar5;
        }
        if (iVar7 <= iVar16) goto LAB_14723ad8d;
        pFVar9 = param_2;
        if (pFVar1 != (FMassArchetypeCompositionDescriptor *)0x0) {
          pFVar9 = pFVar1;
        }
        iVar15 = iVar8;
      } while ((*(uint *)(&(pFVar9->Fragments).field_0x0 + (longlong)iVar8 * 4) & uVar17) == 0);
      goto LAB_14723ac55;
    }
LAB_14723ac60:
    do {
      pUVar10 = (UScriptStruct *)
                FStructTracker::GetStructType
                          (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,iVar16);
      if (pUVar10 == (UScriptStruct *)0x0) {
LAB_14723ac99:
        pUVar10 = (UScriptStruct *)0x0;
      }
      else {
        pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar7 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar11->_padding_)) goto LAB_14723ac99;
      }
      OutputRegisterFragment(pUVar10);
      local_50 = pUVar10;
      if (((local_68.Data <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 < local_68.Data + (longlong)local_60._4_4_ * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return uVar12;
      }
      iVar7 = (int)local_60;
      if ((int)local_60 == local_60._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_68,(int *)((longlong)&local_60 + 4));
      }
      local_60 = CONCAT44(local_60._4_4_,iVar7 + 1);
      *(UScriptStruct **)(local_68.Data + (longlong)iVar7 * 8) = local_50;
      iVar7 = *(int *)&(param_2->Fragments).field_0x18;
      do {
        uVar5 = uVar17 * 2;
        iVar16 = iVar16 + 1;
        iVar15 = iVar8 + 1;
        uVar17 = 1;
        if (uVar5 != 0) {
          iVar15 = iVar8;
          uVar17 = uVar5;
        }
        iVar8 = iVar15;
        if (iVar7 <= iVar16) goto LAB_14723ad8d;
        pFVar1 = *(FMassArchetypeCompositionDescriptor **)&(param_2->Fragments).field_0x10;
        pFVar9 = param_2;
        if (pFVar1 != (FMassArchetypeCompositionDescriptor *)0x0) {
          pFVar9 = pFVar1;
        }
      } while ((*(uint *)(&(pFVar9->Fragments).field_0x0 + (longlong)iVar8 * 4) & uVar17) == 0);
    } while (iVar16 < iVar7);
  }
LAB_14723ad8d:
  iVar16 = 0;
  iVar7 = *(int *)&(param_2->Tags).field_0x18;
  uVar17 = 1;
  iVar8 = iVar16;
  if (iVar7 < 1) {
LAB_14723adf6:
    if (iVar7 <= iVar16) goto LAB_14723af2b;
  }
  else {
    pTVar2 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
              &(param_2->Tags).field_0x10;
    pTVar13 = &param_2->Tags;
    if (pTVar2 != (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                  0x0) {
      pTVar13 = pTVar2;
    }
    iVar15 = iVar16;
    if ((*(byte *)pTVar13 & 1) == 0) {
      do {
        uVar5 = uVar17 * 2;
        iVar16 = iVar16 + 1;
        iVar8 = iVar15 + 1;
        uVar17 = 1;
        if (uVar5 != 0) {
          iVar8 = iVar15;
          uVar17 = uVar5;
        }
        if (iVar7 <= iVar16) goto LAB_14723af2b;
        pTVar13 = &param_2->Tags;
        if (pTVar2 != (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                       *)0x0) {
          pTVar13 = pTVar2;
        }
        iVar15 = iVar8;
      } while ((*(uint *)(&pTVar13->field_0x0 + (longlong)iVar8 * 4) & uVar17) == 0);
      goto LAB_14723adf6;
    }
  }
  do {
    pUVar10 = (UScriptStruct *)
              FStructTracker::GetStructType
                        (&FMassTagBitSetStructTrackerWrapper::StructTracker,iVar16);
    if (pUVar10 == (UScriptStruct *)0x0) {
LAB_14723ae39:
      pUVar10 = (UScriptStruct *)0x0;
    }
    else {
      pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar7 = (int)pUVar11->_padding_;
      if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar11->_padding_)) goto LAB_14723ae39;
    }
    OutputRegisterFragment(pUVar10);
    local_48 = pUVar10;
    if (((local_68.Data <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < local_68.Data + (longlong)local_60._4_4_ * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return uVar12;
    }
    iVar7 = (int)local_60;
    if ((int)local_60 == local_60._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_68,(int *)((longlong)&local_60 + 4));
    }
    local_60 = CONCAT44(local_60._4_4_,iVar7 + 1);
    *(UScriptStruct **)(local_68.Data + (longlong)iVar7 * 8) = local_48;
    iVar7 = *(int *)&(param_2->Tags).field_0x18;
    do {
      uVar5 = uVar17 * 2;
      iVar16 = iVar16 + 1;
      iVar15 = iVar8 + 1;
      uVar17 = 1;
      if (uVar5 != 0) {
        iVar15 = iVar8;
        uVar17 = uVar5;
      }
      iVar8 = iVar15;
      if (iVar7 <= iVar16) goto LAB_14723af2b;
      pTVar2 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
                &(param_2->Tags).field_0x10;
      pTVar13 = &param_2->Tags;
      if (pTVar2 != (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                    0x0) {
        pTVar13 = pTVar2;
      }
    } while ((*(uint *)(&pTVar13->field_0x0 + (longlong)iVar8 * 4) & uVar17) == 0);
  } while (iVar16 < iVar7);
LAB_14723af2b:
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceRegisterMassArchetypeFields>
              ((TLogScope<1> *)&local_40);
    *local_40 = param_1;
    UE::Trace::Private::Field_WriteAuxData(1,(uchar *)local_68.Data,(int)local_60 * 8 & 0x7fff8);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar14 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar14;
    if (lVar3 != local_38) {
      *(longlong *)(lVar3 + 0x28) = lVar14;
    }
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return param_1;
}

// OutputRegisterFragment @ 14723b020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::OutputRegisterFragment(UScriptStruct *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  longlong lVar3;
  bool bVar4;
  void *pvVar5;
  UPackage *pUVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 uVar10;
  int iVar11;
  undefined1 auStack_58 [32];
  FName local_38;
  FString local_30;
  undefined8 *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar6,L"MassFragment");
  }
  if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton != (UScriptStruct *)0x0) {
    iVar11 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar11 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar10 = 1;
      goto LAB_14723b157;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar6,L"MassTag");
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14723b0cf;
  }
  else {
LAB_14723b0cf:
    iVar11 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar11 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar10 = 2;
      goto LAB_14723b157;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar6,
                         L"MassSharedFragment");
    if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton != (UScriptStruct *)0x0
       ) goto LAB_14723b12b;
  }
  else {
LAB_14723b12b:
    iVar11 = (int)(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar11 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar10 = 3;
      goto LAB_14723b157;
    }
  }
  uVar10 = 0;
LAB_14723b157:
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceRegisterMassFragmentFields>
              ((TLogScope<1> *)&local_20);
    *local_20 = param_1;
    local_38 = (FName)param_1->_padding_;
    ::FName::ToString(&local_38,&local_30);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_30.Data.ArrayNum != 0) {
      FVar9.Data = local_30.Data.AllocatorInstance.Data;
    }
    iVar11 = 0;
    wVar2 = *(wchar_t *)FVar9.Data;
    pFVar1 = FVar9.Data;
    while (wVar2 != L'\0') {
      pFVar1 = pFVar1 + 2;
      iVar11 = iVar11 + 1;
      wVar2 = *(wchar_t *)pFVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(1,(wchar_t *)FVar9.Data,iVar11);
    pvVar5 = ThreadLocalStoragePointer;
    iVar11 = (int)*(short *)((longlong)&param_1->_padding_ + 4);
    *(int *)(local_20 + 1) = (int)param_1->_padding_ + -1 + iVar11 & -iVar11;
    uVar8 = (ulonglong)_tls_index;
    *(undefined1 *)((longlong)local_20 + 0xc) = uVar10;
    lVar3 = *(longlong *)((longlong)pvVar5 + uVar8 * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar7 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar7;
    if (lVar3 != local_18) {
      *(longlong *)(lVar3 + 0x28) = lVar7;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// QueryArchetypeAdded @ 14723df20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FMassTrace::QueryArchetypeAdded(FMassEntityQuery *param_1,FMassArchetypeHandle *param_2)

{
  FMassArchetypeData *pFVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((-1 < MassChannel->Enabled) && (pFVar1 = (param_2->DataPtr).Object, -1 < MassChannel->Enabled)
     ) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceQueryArchetypeAddedFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    local_28[1] = pFVar1;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// QueryCreated @ 14723dfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::QueryCreated(FMassEntityQuery *param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceQueryCreatedFields>((TLogScope<1> *)&local_20);
    QueryPerformanceCounter(&local_28);
    uVar4 = (ulonglong)_tls_index;
    *local_20 = local_28;
    pvVar2 = ThreadLocalStoragePointer;
    local_20[1] = (LARGE_INTEGER)param_1;
    lVar1 = *(longlong *)((longlong)pvVar2 + uVar4 * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar3 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar3;
    if (lVar1 != local_18) {
      *(longlong *)(lVar1 + 0x28) = lVar3;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// QueryDestroyed @ 14723e080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::QueryDestroyed(FMassEntityQuery *param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceQueryDestroyedFields>((TLogScope<0> *)&local_20);
    QueryPerformanceCounter(&local_28);
    *local_20 = local_28;
    local_20[1] = (LARGE_INTEGER)param_1;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// QueryRegisteredToProcessor @ 14723e110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __cdecl
FMassTrace::QueryRegisteredToProcessor
          (FMassEntityQuery *param_1,TNotNull<UMassProcessor_const_*> param_2)

{
  wchar_t wVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  void *local_38 [2];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceQueryRegisteredToProcessorFields>
              ((TLogScope<1> *)&local_28);
    *local_28 = param_1;
    local_28[1] = param_2.Val;
    puVar4 = (undefined8 *)(**(code **)((param_2.Val)->_padding_ + 0x2c0))(param_2.Val,local_38);
    if (*(int *)(puVar4 + 1) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)*puVar4;
    }
    iVar7 = 0;
    wVar1 = *pwVar6;
    pwVar3 = pwVar6;
    while (wVar1 != L'\0') {
      pwVar3 = pwVar3 + 1;
      iVar7 = iVar7 + 1;
      wVar1 = *pwVar3;
    }
    UE::Trace::Private::Field_WriteStringWide(2,pwVar6,iVar7);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
    **(undefined1 **)(lVar2 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar2 + 0x20) + 1;
    *(longlong *)(lVar2 + 0x20) = lVar5;
    if (lVar2 != local_20) {
      *(longlong *)(lVar2 + 0x28) = lVar5;
    }
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
  }
  return;
}

// RegisterArchetype @ 14723e7c0

ulong64 __cdecl FMassTrace::RegisterArchetype(FMassArchetypeData *param_1)

{
  ulong64 uVar1;
  
  if (-1 < MassChannel->Enabled) {
    uVar1 = OutputRegisterArchetype((ulong64)param_1,&param_1->CompositionDescriptor);
    return uVar1;
  }
  return 0;
}

// RegisterArchetype @ 14723e7f0

ulong64 __cdecl FMassTrace::RegisterArchetype(FMassArchetypeHandle *param_1)

{
  FMassArchetypeData *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  
  if (MassChannel->Enabled < 0) {
    return 0;
  }
  if ((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = (param_1->DataPtr).Object;
  if (pFVar1 == (FMassArchetypeData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = OutputRegisterArchetype((ulong64)(param_1->DataPtr).Object,&pFVar1->CompositionDescriptor)
  ;
  return uVar4;
}

// RegisterFragment @ 14723eeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMassTrace::RegisterFragment(UScriptStruct *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t wVar2;
  longlong lVar3;
  bool bVar4;
  void *pvVar5;
  UPackage *pUVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 uVar10;
  int iVar11;
  undefined1 auStack_58 [32];
  FName FStack_38;
  FString FStack_30;
  undefined8 *puStack_20;
  longlong lStack_18;
  ulonglong uStack_10;
  
  if (MassChannel->Enabled < 0) {
    return;
  }
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar6,L"MassFragment");
  }
  if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton != (UScriptStruct *)0x0) {
    iVar11 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar11 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar10 = 1;
      goto LAB_14723b157;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar6,L"MassTag");
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14723b0cf;
  }
  else {
LAB_14723b0cf:
    iVar11 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar11 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar10 = 2;
      goto LAB_14723b157;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar6,
                         L"MassSharedFragment");
    if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton != (UScriptStruct *)0x0
       ) goto LAB_14723b12b;
  }
  else {
LAB_14723b12b:
    iVar11 = (int)(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_;
    if (((int)param_1->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar11 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar10 = 3;
      goto LAB_14723b157;
    }
  }
  uVar10 = 0;
LAB_14723b157:
  if (-1 < MassChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FMassTraceRegisterMassFragmentFields>
              ((TLogScope<1> *)&puStack_20);
    *puStack_20 = param_1;
    FStack_38 = (FName)param_1->_padding_;
    ::FName::ToString(&FStack_38,&FStack_30);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (FStack_30.Data.ArrayNum != 0) {
      FVar9.Data = FStack_30.Data.AllocatorInstance.Data;
    }
    iVar11 = 0;
    wVar2 = *(wchar_t *)FVar9.Data;
    pFVar1 = FVar9.Data;
    while (wVar2 != L'\0') {
      pFVar1 = pFVar1 + 2;
      iVar11 = iVar11 + 1;
      wVar2 = *(wchar_t *)pFVar1;
    }
    UE::Trace::Private::Field_WriteStringWide(1,(wchar_t *)FVar9.Data,iVar11);
    pvVar5 = ThreadLocalStoragePointer;
    iVar11 = (int)*(short *)((longlong)&param_1->_padding_ + 4);
    *(int *)(puStack_20 + 1) = (int)param_1->_padding_ + -1 + iVar11 & -iVar11;
    uVar8 = (ulonglong)_tls_index;
    *(undefined1 *)((longlong)puStack_20 + 0xc) = uVar10;
    lVar3 = *(longlong *)((longlong)pvVar5 + uVar8 * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar7 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar7;
    if (lVar3 != lStack_18) {
      *(longlong *)(lVar3 + 0x28) = lVar7;
    }
    *(undefined8 *)(lStack_18 + 0x28) = *(undefined8 *)(lStack_18 + 0x20);
    if (FStack_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

