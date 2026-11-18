// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 34

// Construct<FNamingTokensEvaluationData> @ 14d0d0bb0

void __cdecl UE::CoreUObject::Private::Construct<FNamingTokensEvaluationData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FNamingTokensEvaluationData> @ 14d0d0bd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNamingTokensEvaluationData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FNamingTokensEvaluationData> @ 14d0d0bf0

void __cdecl UE::CoreUObject::Private::Destruct<FNamingTokensEvaluationData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FNamingTokensEvaluationData> @ 14d0d0c10

bool __cdecl
UE::CoreUObject::Private::Copy<FNamingTokensEvaluationData>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 8);
      if (pFVar5 != pFVar1) {
        iVar3 = *(int *)((longlong)param_1 + lVar6 + 0x10);
        piVar2 = (int *)((longlong)param_1 + 0x14);
        pFVar4 = pFVar1->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,*piVar2,pFVar5,iVar3,piVar2);
          ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                    (pFVar5->Data,(TObjectPtr<UObject> *)pFVar4,iVar3);
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_1 + lVar6 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNamingTokenFilterArgs> @ 14d0d0dc0

void __cdecl UE::CoreUObject::Private::Construct<FNamingTokenFilterArgs>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  return;
}

// ConstructForTests<FNamingTokenFilterArgs> @ 14d0d0de0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNamingTokenFilterArgs>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  return;
}

// Destruct<FNamingTokenFilterArgs> @ 14d0d0e00

void __cdecl UE::CoreUObject::Private::Destruct<FNamingTokenFilterArgs>(void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FNamingTokenFilterArgs> @ 14d0d0e40

bool __cdecl
UE::CoreUObject::Private::Copy<FNamingTokenFilterArgs>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FString,int>((FString *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        pFVar5 = pFVar2->Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        iVar3 = *(int *)&pFVar2[1].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FString,FString,int>(pFVar6->Data,(FString *)pFVar5,iVar3);
        }
      }
      *(undefined1 *)&pFVar6[2].Data = *(undefined1 *)&pFVar2[2].Data;
      *(undefined1 *)((longlong)&pFVar6[2].Data + 1) =
           *(undefined1 *)((longlong)&pFVar2[2].Data + 1);
      *(undefined1 *)((longlong)&pFVar6[2].Data + 2) =
           *(undefined1 *)((longlong)&pFVar2[2].Data + 2);
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNamingTokenData> @ 14d0d1230

void __cdecl UE::CoreUObject::Private::Construct<FNamingTokenData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x10));
  FText::FText((FText *)((longlong)param_1 + 0x20));
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FNamingTokenData> @ 14d0d12a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNamingTokenData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x10));
  FText::FText((FText *)((longlong)param_1 + 0x20));
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FNamingTokenData> @ 14d0d12f0

void __cdecl UE::CoreUObject::Private::Destruct<FNamingTokenData>(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x38));
  if (*(longlong **)((longlong)param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x20) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x10))();
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FNamingTokenData> @ 14d0d1340

bool __cdecl
UE::CoreUObject::Private::Copy<FNamingTokenData>(void *param_1,void *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    pFVar1 = (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    pFVar2 = (((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data;
    if (pFVar2 != pFVar1) {
      (((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data = pFVar1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar1 + 8))(pFVar1,local_res18);
      }
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2);
      }
    }
    (((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum;
    pFVar1 = (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    pFVar2 = (((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data;
    if (pFVar2 != pFVar1) {
      (((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data = pFVar1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar1 + 8))(pFVar1,local_res8);
      }
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2);
      }
    }
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x30))->Data).AllocatorInstance.Data;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
               &(((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
               &(((FString *)((longlong)param_2 + 0x30))->Data).ArrayNum);
    param_2 = (void *)((longlong)param_2 + 0x50);
    param_1 = (FString *)((longlong)param_1 + 0x50);
  }
  return true;
}

// GetStructTypeHash<FNamingTokenData> @ 14d0d1440

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FNamingTokenData>(void *param_1)

{
  uint uVar1;
  
  if (*(int *)((longlong)param_1 + 8) != 0) {
    uVar1 = FCrc::StrCrc32<wchar_t>(*(wchar_t **)param_1,0);
    return uVar1;
  }
  uVar1 = FCrc::StrCrc32<wchar_t>(L"",0);
  return uVar1;
}

// Construct<FNamingTokenResultData> @ 14d0d14b0

void __cdecl UE::CoreUObject::Private::Construct<FNamingTokenResultData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  FText::FText(param_1);
  FText::FText((FText *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FNamingTokenResultData> @ 14d0d14f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNamingTokenResultData>(void *param_1)

{
  FText::FText(param_1);
  FText::FText((FText *)((longlong)param_1 + 0x10));
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FNamingTokenResultData> @ 14d0d1520

void __cdecl UE::CoreUObject::Private::Destruct<FNamingTokenResultData>(void *param_1)

{
  DestructItems<FNamingTokenValueData,int>
            (*(FNamingTokenValueData **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x10))();
  }
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d0d1562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Copy<FNamingTokenResultData> @ 14d0d15c0

bool __cdecl
UE::CoreUObject::Private::Copy<FNamingTokenResultData>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  FNamingTokenValueData *pFVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      plVar5 = *(longlong **)(lVar8 + (longlong)param_1);
      plVar6 = *(longlong **)param_1;
      if (plVar6 != plVar5) {
        *(longlong **)param_1 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5,local_res18);
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar8 + 8);
      plVar5 = *(longlong **)((longlong)param_1 + lVar8 + 0x10);
      plVar6 = *(longlong **)((longlong)param_1 + 0x10);
      if (plVar6 != plVar5) {
        *(longlong **)((longlong)param_1 + 0x10) = plVar5;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5,local_res8);
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar8 + 0x20);
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar8 + 0x18);
      if (pFVar2 != pFVar1) {
        DestructItems<FNamingTokenValueData,int>
                  ((FNamingTokenValueData *)pFVar2->Data,
                   (int)*(longlong *)((longlong)param_1 + 0x28));
        iVar4 = *(int *)((longlong)param_1 + lVar8 + 0x28);
        piVar3 = (int *)((longlong)param_1 + 0x2c);
        pFVar7 = (FNamingTokenValueData *)pFVar1->Data;
        *(int *)((longlong)param_1 + 0x28) = iVar4;
        if ((iVar4 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar4,*piVar3,pFVar2,iVar4,piVar3);
          ConstructItems<FNamingTokenValueData,FNamingTokenValueData,int>(pFVar2->Data,pFVar7,iVar4)
          ;
        }
      }
      param_3 = param_3 + -1;
      param_1 = (longlong *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNamingTokenValueData> @ 14d0d1820

void __cdecl UE::CoreUObject::Private::Construct<FNamingTokenValueData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x20));
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FNamingTokenValueData> @ 14d0d1860

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNamingTokenValueData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x20));
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FNamingTokenValueData> @ 14d0d18a0

void __cdecl UE::CoreUObject::Private::Destruct<FNamingTokenValueData>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x20) + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FNamingTokenValueData> @ 14d0d18f0

bool __cdecl
UE::CoreUObject::Private::Copy<FNamingTokenValueData>(void *param_1,void *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined1 local_res18 [8];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    pFVar1 = (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    pFVar2 = *(FScriptContainerElement **)((longlong)param_1 + 0x20);
    if (pFVar2 != pFVar1) {
      *(FScriptContainerElement **)((longlong)param_1 + 0x20) = pFVar1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar1 + 8))(pFVar1,local_res18);
      }
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2);
      }
    }
    *(int *)((longlong)param_1 + 0x28) = *(int *)((longlong)param_2 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
    param_1 = (int *)((longlong)param_1 + 0x38);
    param_2 = (int *)((longlong)param_2 + 0x38);
  }
  return true;
}

// DereferenceIfNecessary<FNamingTokensModule,FNamingTokensModule_*_&> @ 14d0d2620

FNamingTokensModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FNamingTokensModule,FNamingTokensModule_*_&>
          (FNamingTokensModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UNamingTokensEngineSubsystem,UNamingTokensEngineSubsystem_*_&> @ 14d0d2640

UNamingTokensEngineSubsystem * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UNamingTokensEngineSubsystem,UNamingTokensEngineSubsystem_*_&>
          (UNamingTokensEngineSubsystem **param_1)

{
  return *param_1;
}

// CombineNamespaceAndTokenKey @ 14d0d7770

FString * __cdecl
UE::NamingTokens::Utils::CombineNamespaceAndTokenKey
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  FString local_18;
  
  if ((param_1->Data).ArrayNum < 2) {
    ::FString::FString(__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  GetNamespaceDelimiter(&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateFormattedToken @ 14d0d96f0

FString * __cdecl
UE::NamingTokens::Utils::CreateFormattedToken
          (FString *__return_storage_ptr__,FNamingTokenData *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"{%s}");
  return __return_storage_ptr__;
}

// GetNamespaceDelimiter @ 14d0dedd0

FString * __cdecl UE::NamingTokens::Utils::GetNamespaceDelimiter(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&Delimiter,L":");
      atexit(`UE::NamingTokens::Utils::GetNamespaceDelimiter'::__l2::
             _dynamic_atexit_destructor_for__Delimiter__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = Delimiter.Data.AllocatorInstance;
  iVar2 = Delimiter.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

// GetNamespaceFromTokenKey @ 14d0deed0

FString * __cdecl
UE::NamingTokens::Utils::GetNamespaceFromTokenKey(FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pFVar1 = GetNamespaceDelimiter(&local_18);
  ::FString::Split(param_1,pFVar1,__return_storage_ptr__,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetProcessTokenFunctionSignature @ 14d0e0440

UFunction * __cdecl UE::NamingTokens::Utils::GetProcessTokenFunctionSignature(void)

{
  code *pcVar1;
  bool bVar2;
  UClass *this;
  FName *pFVar3;
  UFunction *pUVar4;
  FName local_res8 [4];
  
  this = UNamingTokens::StaticClass();
  pFVar3 = ::FName::FName(local_res8,0x1c,L"ProcessTokenTemplateFunction",FNAME_Add);
  pUVar4 = UClass::FindFunctionByName(this,*pFVar3,IncludeSuper);
  if ((pUVar4 == (UFunction *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FunctionSignature",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokens\\Private\\Utils\\NamingTokenUtils.cpp"
                         ,0x15,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UFunction *)(*pcVar1)();
    return pUVar4;
  }
  return pUVar4;
}

// GetTokenKeysFromString @ 14d0e04c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UE::NamingTokens::Utils::GetTokenKeysFromString
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined1 auStackY_e8 [32];
  FString local_b8;
  undefined1 local_a8 [16];
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    GetNamespaceDelimiter(&local_b8);
    ::FString::PrintfImpl(&PatternString,L"\\{\\s*((?:[a-zA-Z0-9_]+%s)*[a-zA-Z0-9_]+)\\s*\\}");
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    atexit(`UE::NamingTokens::Utils::GetTokenKeysFromString'::__l2::
           _dynamic_atexit_destructor_for__PatternString__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar3 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FRegexPattern::FRegexPattern(&Pattern,&PatternString,None);
    atexit(`UE::NamingTokens::Utils::GetTokenKeysFromString'::__l2::
           _dynamic_atexit_destructor_for__Pattern__);
    _Init_thread_footer(&::_TSS1);
  }
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  FRegexMatcher::FRegexMatcher((FRegexMatcher *)(local_a8 + 8),&Pattern,param_1);
  bVar2 = FRegexMatcher::FindNext((FRegexMatcher *)(local_a8 + 8));
  if (bVar2) {
    do {
      FRegexMatcher::GetCaptureGroup((FRegexMatcher *)(local_a8 + 8),&local_b8,1);
      TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator>::Emplace<FString_const_&>
                ((TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator> *)local_78,(FString *)local_a8,
                 (bool *)&local_b8);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      bVar2 = FRegexMatcher::FindNext((FRegexMatcher *)(local_a8 + 8));
    } while (bVar2);
  }
  TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator>::Array
            ((TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator> *)local_78,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return __return_storage_ptr__;
}

// GetTokenPatternString @ 14d0e0750

FString * __cdecl
UE::NamingTokens::Utils::Private::GetTokenPatternString(FString *__return_storage_ptr__)

{
  FString local_18;
  
  GetNamespaceDelimiter(&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"\\{\\s*((?:[a-zA-Z0-9_]+%s)*[a-zA-Z0-9_]+)\\s*\\}")
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsTokenInString @ 14d0e0d80

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl UE::NamingTokens::Utils::IsTokenInString(FString *param_1,FString *param_2)

{
  ForAnyElementType FVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  int *piVar5;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FRegexMatcher local_28;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    GetNamespaceDelimiter(&local_48);
    ::FString::PrintfImpl(&PatternString,L"\\{\\s*((?:[a-zA-Z0-9_]+%s)*[a-zA-Z0-9_]+)\\s*\\}");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    atexit(`UE::NamingTokens::Utils::IsTokenInString'::__l2::
           _dynamic_atexit_destructor_for__PatternString__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FRegexPattern::FRegexPattern(&Pattern,&PatternString,None);
    atexit(`UE::NamingTokens::Utils::IsTokenInString'::__l2::
           _dynamic_atexit_destructor_for__Pattern__);
    _Init_thread_footer(&::_TSS1);
  }
  FRegexMatcher::FRegexMatcher(&local_28,&Pattern,param_2);
  bVar2 = FRegexMatcher::FindNext(&local_28);
  if (bVar2) {
    do {
      FRegexMatcher::GetCaptureGroup(&local_28,&local_58,1);
      FVar1.Data = local_58.Data.AllocatorInstance.Data;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = local_58.Data.ArrayNum;
      local_78.Data.ArrayNum = iVar3;
      if (iVar3 == 0) {
        local_78.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,0,(ForAnyElementType *)&local_78,iVar3,&local_78.Data.ArrayMax);
        memcpy(local_78.Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar3 * 2);
      }
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      pFVar4 = GetNamespaceDelimiter(&local_38);
      bVar2 = ::FString::Split(&local_58,pFVar4,&local_48,&local_68);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        iVar3 = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          iVar3 = 0;
        }
        ::FString::AssignRange(&local_78,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar3);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      FVar1.Data = local_78.Data.AllocatorInstance.Data;
      iVar3 = (param_1->Data).ArrayNum;
      if (local_78.Data.ArrayNum == iVar3) {
        if (1 < local_78.Data.ArrayNum) {
          iVar3 = wcscmp((wchar_t *)local_78.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar2 = iVar3 == 0;
          goto LAB_14d0e0f15;
        }
LAB_14d0e0f80:
        if (FVar1.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar1.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        bVar2 = true;
        goto LAB_14d0e0f4a;
      }
      bVar2 = local_78.Data.ArrayNum + iVar3 == 1;
LAB_14d0e0f15:
      if (bVar2) goto LAB_14d0e0f80;
      if (FVar1.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar1.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      bVar2 = FRegexMatcher::FindNext(&local_28);
    } while (bVar2);
  }
  bVar2 = false;
LAB_14d0e0f4a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// RemoveNamespaceFromTokenKey @ 14d0e5bd0

FString * __cdecl
UE::NamingTokens::Utils::RemoveNamespaceFromTokenKey
          (FString *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  FString *pFVar2;
  int iVar3;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,param_1);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar2 = GetNamespaceDelimiter(&local_18);
  bVar1 = ::FString::Split(param_1,pFVar2,&local_28,&local_38);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    iVar3 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AssignRange
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar3);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ValidateName @ 14d0e65d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d0e6e19) */

bool __cdecl UE::NamingTokens::Utils::ValidateName(FString *param_1,FText *param_2)

{
  uint *puVar1;
  ushort uVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FText *pFVar12;
  ulonglong uVar13;
  byte bVar14;
  TSparseSetElement<wchar_t> *pTVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  ForAnyElementType FVar23;
  ulonglong uVar24;
  TSparseSetElement<wchar_t> *pTVar25;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  ForAnyElementType local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [4];
  int local_1dc;
  FString local_1d8;
  int local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FString local_1a8;
  uint local_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_190;
  undefined4 local_188;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  FScriptContainerElement *local_178;
  FText *local_170;
  undefined1 local_168 [4];
  undefined4 local_164;
  int local_160;
  int local_15c;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  undefined1 *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  FSparseArrayAllocationInfo local_100;
  FString local_f0;
  undefined1 *local_e0;
  longlong lStack_d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  FText local_b0;
  FText local_a0;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_170 = param_2;
  pFVar12 = FText::GetEmpty();
  pIVar3 = (param_2->TextData).Reference;
  pIVar4 = (pFVar12->TextData).Reference;
  if (pIVar3 != pIVar4) {
    (param_2->TextData).Reference = pIVar4;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_168);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  param_2->Flags = pFVar12->Flags;
  iVar22 = (param_1->Data).ArrayNum;
  if (iVar22 < 2) {
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_b0,L"NamingTokenUtils",L"StringEmpty",L"String is empty");
    FText::operator=(param_2,pFVar12);
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar16 = (param_1->Data).AllocatorInstance.Data;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (ForElementType<unsigned_int>)0x0;
    local_178 = pFVar16 + ((longlong)iVar22 + -1) * 2;
    local_60 = 0;
    local_5c = 0x80;
    local_58 = -1;
    local_54 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    while( true ) {
      pFVar6 = local_178;
      pTVar15 = (TSparseSetElement<wchar_t> *)0x0;
      if ((param_1->Data).ArrayNum != iVar22) {
        local_1f8 = 0;
        `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1f8);
      }
      uVar17 = local_60;
      if (pFVar16 == pFVar6) break;
      iVar10 = iswalpha(*(wint_t *)pFVar16);
      if (((iVar10 == 0) && (iVar10 = iswdigit(*(wint_t *)pFVar16), iVar10 == 0)) &&
         (*(wint_t *)pFVar16 != 0x5f)) {
        if (local_54 == 0) {
          iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                              (int *)(local_88 + 0xc));
          iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
          FVar18 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
          if (local_68 != (ForElementType<unsigned_int>)0x0) {
            FVar18 = local_68;
          }
          bVar14 = (byte)iVar11 & 0x1f;
          if (iVar11 < 0) {
            iVar11 = iVar11 + 0x1f;
            bVar14 = bVar14 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar18 + (longlong)(iVar11 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar14 & 0x1f));
          iVar11 = local_58;
        }
        else {
          local_54 = local_54 + -1;
          iVar11 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0xc + 4);
          iVar10 = local_58;
          if (local_54 != 0) {
            *(undefined4 *)(local_88._0_8_ + (longlong)iVar11 * 0xc) = 0xffffffff;
          }
        }
        local_58 = iVar11;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,&local_100,iVar10);
        if (local_100.Pointer != (TSparseSetElement<wchar_t> *)0x0) {
          *(wint_t *)local_100.Pointer = *(wint_t *)pFVar16;
          *(undefined4 *)((longlong)local_100.Pointer + 4) = 0xffffffff;
          pTVar15 = local_100.Pointer;
        }
        uVar2 = *(ushort *)pTVar15;
        local_1dc = local_100.Index;
        bVar9 = TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator>::TryReplaceExisting
                          ((TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator> *)local_88
                           ,(uint)uVar2,pTVar15,&local_1dc,(bool *)0x0);
        if (!bVar9) {
          uVar21 = 1;
          uVar17 = local_88._8_4_ - local_54;
          if (3 < uVar17) {
            uVar19 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
            lVar20 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_164 = (undefined4)lVar20;
            uVar21 = 1 << ((byte)lVar20 & 0x1f);
          }
          if (((int)uVar17 < 1) || ((int)uVar21 <= (int)local_40)) {
            uVar17 = local_40 - 1 & (uint)uVar2;
            *(uint *)&pTVar15->field_0x8 = uVar17;
            FVar23.Data = (FScriptContainerElement *)local_50;
            if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar23.Data = local_48.Data;
            }
            uVar19 = (longlong)(int)local_40 - 1U & (ulonglong)uVar17;
            *(undefined4 *)&pTVar15->field_0x4 = *(undefined4 *)((longlong)FVar23.Data + uVar19 * 4)
            ;
            *(int *)((longlong)FVar23.Data + uVar19 * 4) = local_1dc;
          }
          else {
            local_40 = uVar21;
            if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
            }
            if (uVar21 != 0) {
              uVar17 = uVar21;
              if (uVar21 < 2) {
                if ((ForElementType<FSetElementId>)local_48.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar17 = 0;
                  goto LAB_14d0e6904;
                }
              }
              else {
LAB_14d0e6904:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_48,0,uVar17,4);
              }
              uVar19 = 0;
              if (0 < (int)uVar21) {
                uVar24 = (ulonglong)uVar21;
                do {
                  FVar23.Data = (FScriptContainerElement *)local_50;
                  if ((ForElementType<FSetElementId>)local_48.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar23.Data = local_48.Data;
                  }
                  uVar13 = (longlong)(int)uVar21 - 1U & uVar19;
                  uVar19 = uVar19 + 1;
                  *(undefined4 *)((longlong)FVar23.Data + uVar13 * 4) = 0xffffffff;
                  uVar24 = uVar24 - 1;
                } while (uVar24 != 0);
              }
            }
            if (local_40 != 0) {
              uStack_1c4 = 1;
              local_1c8 = 0;
              pTStack_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
              uStack_1b4 = 0;
              iStack_1b0 = 0;
              if (local_60 != 0) {
                FVar18 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
                if (local_68 != (ForElementType<unsigned_int>)0x0) {
                  FVar18 = local_68;
                }
                uVar17 = *(uint *)FVar18;
                while (uVar17 == 0) {
                  iStack_1b0 = iStack_1b0 + 0x20;
                  lVar20 = (longlong)local_1c8;
                  local_1c8 = local_1c8 + 1;
                  if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1c8
                     ) goto LAB_14d0e6a19;
                  uVar17 = ((uint *)((longlong)FVar18 + 4))[lVar20];
                }
                uStack_1c4 = -uVar17 & uVar17;
                uVar19 = (ulonglong)uStack_1c4 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar19 != 0) {
                  for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                local_160 = (int)lVar20;
                uStack_1b4 = local_160 + -1 + iStack_1b0;
                if ((int)local_60 < (int)uStack_1b4) {
LAB_14d0e6a19:
                  uStack_1b4 = local_60;
                }
              }
              local_1b8 = 0xffffffff;
              local_158 = (longlong *)local_88;
              local_150._padding_ = CONCAT44(uStack_1c4,local_1c8);
              local_150.CurrentBitIndex = uStack_1b4;
              local_150.UnvisitedBitMask = 0xffffffff;
              local_150._28_4_ = uStack_1ac;
              local_150.BaseBitIndex = iStack_1b0;
              local_150.Array = pTStack_1c0;
              uVar17 = uStack_1b4;
              if ((int)uStack_1b4 < (int)local_60) {
                do {
                  lVar20 = *local_158 + (longlong)(int)uVar17 * 0xc;
                  uVar21 = local_40 - 1 &
                           (uint)*(ushort *)(*local_158 + (longlong)(int)uVar17 * 0xc);
                  *(uint *)(lVar20 + 8) = uVar21;
                  FVar23.Data = (FScriptContainerElement *)local_50;
                  if ((ForElementType<FSetElementId>)local_48.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar23.Data = local_48.Data;
                  }
                  uVar19 = (longlong)(int)local_40 - 1U & (ulonglong)uVar21;
                  *(undefined4 *)(lVar20 + 4) = *(undefined4 *)((longlong)FVar23.Data + uVar19 * 4);
                  *(uint *)((longlong)FVar23.Data + uVar19 * 4) = uVar17;
                  local_150.UnvisitedBitMask =
                       local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
                  uVar17 = local_150.CurrentBitIndex;
                } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
              }
            }
          }
        }
      }
      pFVar16 = pFVar16 + 2;
    }
    iVar22 = local_88._8_4_ - local_54;
    param_2 = local_170;
    if (0 < iVar22) {
      local_1f0.Data = (FScriptContainerElement *)0x0;
      local_198 = 0;
      pTStack_190 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      local_1e8 = 0;
      uStack_194 = 1;
      uStack_184 = 0;
      uStack_180 = 0;
      if (local_60 != 0) {
        FVar18 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_68;
        }
        uVar21 = *(uint *)FVar18;
        pTVar25 = pTVar15;
        while (uVar21 == 0) {
          uStack_180 = (int)pTVar25 + 0x20;
          pTVar25 = (TSparseSetElement<wchar_t> *)(ulonglong)uStack_180;
          iVar10 = (int)pTVar15;
          local_198 = iVar10 + 1;
          pTVar15 = (TSparseSetElement<wchar_t> *)(ulonglong)local_198;
          uStack_184 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_198)
          goto LAB_14d0e6bdd;
          uVar21 = ((uint *)((longlong)FVar18 + 4))[iVar10];
        }
        uStack_194 = -uVar21 & uVar21;
        uVar19 = (ulonglong)uStack_194 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_15c = (int)lVar20;
        uStack_184 = (uStack_180 - 1) + local_15c;
        if ((int)local_60 < (int)uStack_184) {
          uStack_184 = local_60;
        }
      }
LAB_14d0e6bdd:
      local_188 = 0xffffffff;
      TStack_128._padding_ = CONCAT44(uStack_194,local_198);
      local_130 = local_88;
      TStack_128.CurrentBitIndex = uStack_184;
      TStack_128.UnvisitedBitMask = 0xffffffff;
      TStack_128._28_4_ = uStack_17c;
      TStack_128.BaseBitIndex = uStack_180;
      iVar10 = (int)local_60 >> 5;
      uVar21 = local_60 & 0xffffffe0;
      bVar14 = (byte)local_60;
      uStack_108 = CONCAT44(uStack_b4,iVar22);
      TStack_128.Array = pTStack_190;
      local_e0 = local_130;
      lStack_d8 = TStack_128._padding_;
      pTStack_d0 = pTStack_190;
      uStack_c8 = TStack_128._16_8_;
      uStack_c0 = TStack_128._24_8_;
      local_b8 = iVar22;
      if (((int)local_60 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (uVar17 != local_60) {
        FVar18 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar18 = local_68;
        }
        uVar17 = -1 << (bVar14 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar10 * 4);
        while (uVar17 == 0) {
          lVar20 = (longlong)iVar10;
          uVar21 = uVar21 + 0x20;
          iVar10 = iVar10 + 1;
          uVar17 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
          goto LAB_14d0e6ce0;
          uVar17 = ((uint *)((longlong)FVar18 + 4))[lVar20];
        }
        uVar19 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar17 = (uVar21 - 1) + (int)lVar20;
        local_178 = (FScriptContainerElement *)CONCAT44(local_178._4_4_,(int)lVar20);
        if ((int)local_60 < (int)uVar17) {
          uVar17 = local_60;
        }
      }
LAB_14d0e6ce0:
      while( true ) {
        puVar7 = local_130;
        if (*(int *)(local_130 + 8) - *(int *)(local_130 + 0x34) != (int)uStack_108) {
          local_1f7[0] = 0;
          `TSparseArray<TSparseSetElement<wchar_t>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f7);
        }
        if (((TStack_128.CurrentBitIndex == uVar17) &&
            (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (puVar7 == local_88)) break;
        ::FString::PrintfImpl(&local_1d8,L"\'%c\'");
        if (((local_1f0.Data <= (FScriptContainerElement *)&local_1d8) &&
            ((FScriptContainerElement *)&local_1d8 <
             local_1f0.Data + (longlong)local_1e8._4_4_ * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar22 = (int)local_1e8;
        if ((int)local_1e8 == local_1e8._4_4_) {
          iVar22 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_1f0,(int *)((longlong)&local_1e8 + 4));
        }
        local_1e8 = CONCAT44(local_1e8._4_4_,iVar22 + 1);
        pFVar16 = local_1f0.Data + (longlong)iVar22 * 0x10;
        *(undefined8 *)pFVar16 = 0;
        *(FScriptContainerElement **)pFVar16 = local_1d8.Data.AllocatorInstance.Data;
        *(int *)(pFVar16 + 8) = local_1d8.Data.ArrayNum;
        *(int *)(pFVar16 + 0xc) = local_1d8.Data.ArrayMax;
        local_1d8.Data.ArrayNum = 0;
        local_1d8.Data.ArrayMax = 0;
        local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
      }
      iVar22 = (int)local_1e8;
      bVar9 = true;
      pFVar16 = local_1f0.Data + (longlong)(int)local_1e8 * 0x10;
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Data.ArrayNum = 0;
      local_1a8.Data.ArrayMax = 0;
      FVar23.Data = local_1f0.Data;
      while( true ) {
        if ((int)local_1e8 != iVar22) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1e0);
        }
        if (FVar23.Data == pFVar16) break;
        if (bVar9) {
          bVar9 = false;
        }
        else {
          ::FString::AppendChars(&local_1a8,L", ",2);
        }
        iVar10 = *(int *)(FVar23.Data + 8) + -1;
        if (*(int *)(FVar23.Data + 8) == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars(&local_1a8,*(wchar_t **)FVar23.Data,iVar10);
        FVar23.Data = FVar23.Data + 0x10;
      }
      ::FString::ConcatCF(&local_f0,L"Invalid characters: ",&local_1a8);
      pFVar12 = FText::FromString(&local_a0,&local_f0);
      param_2 = local_170;
      FText::operator=(local_170,pFVar12);
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_1f0.Data,(int)local_1e8);
      if (local_1f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data);
      }
    }
    local_40 = 0;
    if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_48.Data);
    }
    TSparseArray<TSparseSetElement<wchar_t>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<wchar_t>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<wchar_t>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  bVar9 = FText::IsEmpty(param_2);
  return bVar9;
}

// ValidateTokenFunction @ 14d0e6fb0

bool __cdecl UE::NamingTokens::Utils::ValidateTokenFunction(UFunction *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *this;
  FName *pFVar4;
  UFunction *pUVar5;
  FName local_res8;
  
  if (param_1 == (UFunction *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokens\\Private\\Utils\\NamingTokenUtils.cpp"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  this = UNamingTokens::StaticClass();
  pFVar4 = ::FName::FName(&local_res8,0x1c,L"ProcessTokenTemplateFunction",FNAME_Add);
  pUVar5 = UClass::FindFunctionByName(this,*pFVar4,IncludeSuper);
  if (pUVar5 == (UFunction *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FunctionSignature",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\NamingTokens\\Source\\NamingTokens\\Private\\Utils\\NamingTokenUtils.cpp"
                       ,0x15,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = UFunction::IsSignatureCompatibleWith(param_1,pUVar5,0x17e04904008061e);
  if (((bVar2) && ((param_1->FunctionFlags >> 0x1a & 1) != 0)) &&
     ((param_1->FunctionFlags >> 0x12 & 1) == 0)) {
    return true;
  }
  return false;
}

