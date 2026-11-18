// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 92

// Copy<FInputActionInstance> @ 14a6b2b30

bool __cdecl
UE::CoreUObject::Private::Copy<FInputActionInstance>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar1 + 1);
      *(undefined8 *)((longlong)puVar3 + 9) = *(undefined8 *)((longlong)puVar1 + 9);
      *(undefined1 *)((longlong)puVar3 + 0x11) = *(undefined1 *)((longlong)puVar1 + 0x11);
      *(undefined1 *)((longlong)puVar3 + 0x12) = *(undefined1 *)((longlong)puVar1 + 0x12);
      *(undefined1 *)((longlong)puVar3 + 0x13) = *(undefined1 *)((longlong)puVar1 + 0x13);
      *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
      TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)(puVar3 + 3),
                 (TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)(puVar1 + 3));
      TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *)(puVar3 + 5),
                 (TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *)(puVar1 + 5));
      uVar2 = puVar1[8];
      puVar3[7] = puVar1[7];
      puVar3[8] = uVar2;
      uVar2 = puVar1[10];
      puVar3[9] = puVar1[9];
      puVar3[10] = uVar2;
      *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)(puVar1 + 0xb);
      *(undefined4 *)((longlong)puVar3 + 0x5c) = *(undefined4 *)((longlong)puVar1 + 0x5c);
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0xc;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAppliedInputContextData> @ 14a6b2db0

void __cdecl UE::CoreUObject::Private::Construct<FAppliedInputContextData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FAppliedInputContextData> @ 14a6b2dc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAppliedInputContextData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FAppliedInputContextData> @ 14a6b2dd0

void __cdecl UE::CoreUObject::Private::Destruct<FAppliedInputContextData>(void *param_1)

{
  return;
}

// Copy<FAppliedInputContextData> @ 14a6b2de0

bool __cdecl
UE::CoreUObject::Private::Copy<FAppliedInputContextData>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBlueprintEnhancedInputActionBinding> @ 14a6b2fa0

void __cdecl
UE::CoreUObject::Private::Construct<FBlueprintEnhancedInputActionBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FBlueprintEnhancedInputActionBinding> @ 14a6b2fc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBlueprintEnhancedInputActionBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FBlueprintEnhancedInputActionBinding> @ 14a6b2fe0

void __cdecl UE::CoreUObject::Private::Destruct<FBlueprintEnhancedInputActionBinding>(void *param_1)

{
  return;
}

// Construct<FInjectedInputArray> @ 14a6b2ff0

void __cdecl UE::CoreUObject::Private::Construct<FInjectedInputArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FInjectedInputArray> @ 14a6b3000

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInjectedInputArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FInjectedInputArray> @ 14a6b3010

void __cdecl UE::CoreUObject::Private::Destruct<FInjectedInputArray>(void *param_1)

{
  DestructItems<FInjectedInput,int>(*(FInjectedInput **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FBlueprintEnhancedInputActionBinding> @ 14a6b3050

bool __cdecl
UE::CoreUObject::Private::Copy<FBlueprintEnhancedInputActionBinding>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
      *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)((longlong)puVar1 + 0xc);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FInjectedInputArray> @ 14a6b30e0

bool __cdecl
UE::CoreUObject::Private::Copy<FInjectedInputArray>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FInjectedInput *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FInjectedInput,int>((FInjectedInput *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FInjectedInput *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FInjectedInput,FInjectedInput,int>(pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FKeyConsumptionOptions> @ 14a6b3620

void __cdecl UE::CoreUObject::Private::Construct<FKeyConsumptionOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FKeyConsumptionOptions> @ 14a6b3640

void __cdecl UE::CoreUObject::Private::ConstructForTests<FKeyConsumptionOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FKeyConsumptionOptions> @ 14a6b3660

void __cdecl UE::CoreUObject::Private::Destruct<FKeyConsumptionOptions>(void *param_1)

{
  DestructItems<FKey,int>(*(FKey **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FKeyConsumptionOptions> @ 14a6b3760

bool __cdecl
UE::CoreUObject::Private::Copy<FKeyConsumptionOptions>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FKey *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FKey,int>((FKey *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        pFVar5 = (FKey *)pFVar2->Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        iVar3 = *(int *)&pFVar2[1].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FKey,FKey,int>(pFVar6->Data,pFVar5,iVar3);
        }
      }
      *(undefined1 *)&pFVar6[2].Data = *(undefined1 *)&pFVar2[2].Data;
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInjectedInput> @ 14a6b3d20

void __cdecl UE::CoreUObject::Private::Construct<FInjectedInput>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FInjectedInput> @ 14a6b3d50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInjectedInput>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FInjectedInput> @ 14a6b3dd0

void __cdecl UE::CoreUObject::Private::Destruct<FInjectedInput>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    return;
  }
  return;
}

// Copy<FInjectedInput> @ 14a6b3e20

bool __cdecl UE::CoreUObject::Private::Copy<FInjectedInput>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = ((undefined8 *)(lVar2 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
      TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x20),
                 (TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar2 + 0x20));
      TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x30),
                 (TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar2 + 0x30));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x40);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEnhancedActionKeyMapping> @ 14a6b43b0

void __cdecl UE::CoreUObject::Private::Construct<FEnhancedActionKeyMapping>(void *param_1)

{
  FName FVar1;
  FKeyDetails *pFVar2;
  FSharedReferencer<1> FVar3;
  atomic<int> *paVar4;
  
  FVar3.ReferenceController = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar2 = EKeys::Invalid.KeyDetails.Object;
  FVar1 = EKeys::Invalid.KeyName;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(FName *)((longlong)param_1 + 0x28) = FVar1;
  *(FKeyDetails **)((longlong)param_1 + 0x30) = pFVar2;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38) = FVar3.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// ConstructForTests<FEnhancedActionKeyMapping> @ 14a6b4420

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnhancedActionKeyMapping>(void *param_1)

{
  FName FVar1;
  FKeyDetails *pFVar2;
  FSharedReferencer<1> FVar3;
  atomic<int> *paVar4;
  
  FVar3.ReferenceController = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar2 = EKeys::Invalid.KeyDetails.Object;
  FVar1 = EKeys::Invalid.KeyName;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(FName *)((longlong)param_1 + 0x28) = FVar1;
  *(FKeyDetails **)((longlong)param_1 + 0x30) = pFVar2;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38) = FVar3.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// Destruct<FEnhancedActionKeyMapping> @ 14a6b4490

void __cdecl UE::CoreUObject::Private::Destruct<FEnhancedActionKeyMapping>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FEnhancedActionKeyMapping> @ 14a6b44d0

bool __cdecl
UE::CoreUObject::Private::Copy<FEnhancedActionKeyMapping>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *pTVar6;
  byte bVar7;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x10),
               (TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x10));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)
                 (((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x20))->AllocatorInstance).Data, pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    (((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->
    AllocatorInstance).Data =
         (((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x20))->AllocatorInstance).Data;
    iVar5 = ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x20))->ArrayMax;
    ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->
    ArrayNum = ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x20))->ArrayNum;
    ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->
    ArrayMax = iVar5;
    lVar2 = *(longlong *)
             &((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x30))->ArrayNum;
    pFVar3 = (((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x30))->AllocatorInstance).Data;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)
              &((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x30))->ArrayNum;
    (((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->
    AllocatorInstance).Data = pFVar3;
    ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->
    ArrayNum = (int)lVar2;
    ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->
    ArrayMax = (int)((ulonglong)lVar2 >> 0x20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    bVar7 = (*(byte *)&(((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
                        ((longlong)param_1 + 0x40))->AllocatorInstance).Data ^
            *(byte *)&(((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
                       ((longlong)param_2 + 0x40))->AllocatorInstance).Data) & 1 ^
            *(byte *)&(((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
                       ((longlong)param_1 + 0x40))->AllocatorInstance).Data;
    *(byte *)&(((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x40))->AllocatorInstance).Data = bVar7;
    *(byte *)&(((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x40))->AllocatorInstance).Data =
         (bVar7 ^ *(byte *)&(((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
                             ((longlong)param_2 + 0x40))->AllocatorInstance).Data) & 2 ^ bVar7;
    *(undefined1 *)
     ((longlong)
      &(((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40)
        )->AllocatorInstance).Data + 1) =
         *(undefined1 *)
          ((longlong)
           &(((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0x40))->AllocatorInstance).Data + 1);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)
         &((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x40))->ArrayNum != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)
                           &((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
                            ((longlong)param_2 + 0x40))->ArrayNum);
    }
    pTVar6 = (TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0x40);
    iVar5 = ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x40))->ArrayMax;
    param_2 = (void *)((longlong)param_2 + 0x50);
    ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))->
    ArrayNum = pTVar6->ArrayNum;
    ((TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))->
    ArrayMax = iVar5;
    param_1 = (TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0x50);
  }
  return true;
}

// GetStructTypeHash<FEnhancedActionKeyMapping> @ 14a6b4b30

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FEnhancedActionKeyMapping>(void *param_1)

{
  uint uVar1;
  undefined1 local_b8 [176];
  
  FPlayerKeyMapping::FPlayerKeyMapping
            ((FPlayerKeyMapping *)local_b8,param_1,Unspecified,&FHardwareDeviceIdentifier::Invalid);
  uVar1 = ::GetTypeHash((FPlayerKeyMapping *)local_b8);
  if ((void *)local_b8._152_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._152_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b8._88_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b8._64_8_);
  if ((ITextData *)local_b8._24_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b8._24_8_ + 0x10))();
  }
  if ((ITextData *)local_b8._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b8._8_8_ + 0x10))();
  }
  return uVar1;
}

// Construct<FModifyContextOptions> @ 14a6b56b0

void __cdecl UE::CoreUObject::Private::Construct<FModifyContextOptions>(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xf9 | 1;
  return;
}

// ConstructForTests<FModifyContextOptions> @ 14a6b56c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FModifyContextOptions>(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xf9 | 1;
  return;
}

// Destruct<FModifyContextOptions> @ 14a6b56d0

void __cdecl UE::CoreUObject::Private::Destruct<FModifyContextOptions>(void *param_1)

{
  return;
}

// Copy<FModifyContextOptions> @ 14a6b56f0

bool __cdecl
UE::CoreUObject::Private::Copy<FModifyContextOptions>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPlayerMappableKeyProfileCreationArgs> @ 14a6b5c00

void __cdecl
UE::CoreUObject::Private::Construct<FPlayerMappableKeyProfileCreationArgs>(void *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FText *pFVar6;
  undefined1 auStackX_8 [8];
  
  pUVar4 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)
                      &(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x18);
  if (pUVar5 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pUVar4 = UEnhancedPlayerMappableKeyProfile::StaticClass();
      if (pUVar4 != (UClass *)0x0) {
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_14a6cad0d;
      }
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14a6cad0d:
  *(UObject **)param_1 = pUVar5;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar5);
  }
  *(FName *)((longlong)param_1 + 8) = FGameplayTag::EmptyTag.TagName;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  pFVar6 = FText::GetEmpty();
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  pIVar2 = (pFVar6->TextData).Reference;
  *(ITextData **)((longlong)param_1 + 0x28) = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,auStackX_8);
  }
  *(uint *)((longlong)param_1 + 0x30) = pFVar6->Flags;
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 1;
  return;
}

// ConstructForTests<FPlayerMappableKeyProfileCreationArgs> @ 14a6b5c50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPlayerMappableKeyProfileCreationArgs>(void *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FText *pFVar6;
  undefined1 auStackX_8 [8];
  
  pUVar4 = UEnhancedInputDeveloperSettings::StaticClass();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)
                      &(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[3].field_0x18);
  if (pUVar5 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pUVar4 = UEnhancedPlayerMappableKeyProfile::StaticClass();
      if (pUVar4 != (UClass *)0x0) {
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_14a6cad0d;
      }
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14a6cad0d:
  *(UObject **)param_1 = pUVar5;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar5);
  }
  *(FName *)((longlong)param_1 + 8) = FGameplayTag::EmptyTag.TagName;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  pFVar6 = FText::GetEmpty();
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  pIVar2 = (pFVar6->TextData).Reference;
  *(ITextData **)((longlong)param_1 + 0x28) = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,auStackX_8);
  }
  *(uint *)((longlong)param_1 + 0x30) = pFVar6->Flags;
  *(byte *)((longlong)param_1 + 0x38) = *(byte *)((longlong)param_1 + 0x38) | 1;
  return;
}

// Destruct<FPlayerMappableKeyProfileCreationArgs> @ 14a6b5c60

void __cdecl
UE::CoreUObject::Private::Destruct<FPlayerMappableKeyProfileCreationArgs>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x28) + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FPlayerMappableKeyProfileCreationArgs> @ 14a6b5cb0

bool __cdecl
UE::CoreUObject::Private::Copy<FPlayerMappableKeyProfileCreationArgs>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar4 = *puVar1;
      puVar4[1] = puVar1[1];
      ::FString::operator=((FString *)(puVar4 + 2),(FString *)(puVar1 + 2));
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar1 + 4);
      plVar2 = (longlong *)puVar1[5];
      plVar3 = (longlong *)puVar4[5];
      if (plVar3 != plVar2) {
        puVar4[5] = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,local_res18);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar1 + 6);
      *(byte *)(puVar4 + 7) =
           *(byte *)(puVar4 + 7) ^ (*(byte *)(puVar4 + 7) ^ *(byte *)(puVar1 + 7)) & 1;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPlayerMappableKeyQueryOptions> @ 14a6b6c80

void __cdecl UE::CoreUObject::Private::Construct<FPlayerMappableKeyQueryOptions>(void *param_1)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  *(undefined8 *)param_1 = 0;
  *(FName *)((longlong)param_1 + 8) = EKeys::Invalid.KeyName;
  *(FKeyDetails **)((longlong)param_1 + 0x10) = EKeys::Invalid.KeyDetails.Object;
  FVar2 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18) =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)param_1 + 0x20) = 7;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(byte *)((longlong)param_1 + 0x21) = *(byte *)((longlong)param_1 + 0x21) & 0xfd | 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// ConstructForTests<FPlayerMappableKeyQueryOptions> @ 14a6b6cd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPlayerMappableKeyQueryOptions>(void *param_1)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  *(undefined8 *)param_1 = 0;
  *(FName *)((longlong)param_1 + 8) = EKeys::Invalid.KeyName;
  *(FKeyDetails **)((longlong)param_1 + 0x10) = EKeys::Invalid.KeyDetails.Object;
  FVar2 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18) =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined1 *)((longlong)param_1 + 0x20) = 7;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  *(byte *)((longlong)param_1 + 0x21) = *(byte *)((longlong)param_1 + 0x21) & 0xfd | 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// Destruct<FPlayerMappableKeyQueryOptions> @ 14a6b6de0

void __cdecl UE::CoreUObject::Private::Destruct<FPlayerMappableKeyQueryOptions>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  return;
}

// Copy<FPlayerMappableKeyQueryOptions> @ 14a6b6e30

bool __cdecl
UE::CoreUObject::Private::Copy<FPlayerMappableKeyQueryOptions>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  byte bVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar5 + 8);
      lVar1 = *(longlong *)((longlong)param_1 + lVar5 + 0x18);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar5 + 0x10);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
      *(longlong *)((longlong)param_1 + 0x18) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_1 + lVar5 + 0x20);
      bVar4 = (*(byte *)((longlong)param_1 + 0x21) ^ *(byte *)((longlong)param_1 + lVar5 + 0x21)) &
              1 ^ *(byte *)((longlong)param_1 + 0x21);
      *(byte *)((longlong)param_1 + 0x21) = bVar4;
      *(byte *)((longlong)param_1 + 0x21) =
           (bVar4 ^ *(byte *)((longlong)param_1 + lVar5 + 0x21)) & 2 ^ bVar4;
      *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_1 + lVar5 + 0x22);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x24);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMappingQueryIssue> @ 14a6b7040

void __cdecl UE::CoreUObject::Private::Construct<FMappingQueryIssue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FMappingQueryIssue> @ 14a6b7060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMappingQueryIssue>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMappingQueryIssue> @ 14a6b7080

void __cdecl UE::CoreUObject::Private::Destruct<FMappingQueryIssue>(void *param_1)

{
  return;
}

// Copy<FMappingQueryIssue> @ 14a6b7150

bool __cdecl
UE::CoreUObject::Private::Copy<FMappingQueryIssue>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 8));
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 0x10));
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x10);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FKeyMappingRow> @ 14a6b73f0

void __cdecl UE::CoreUObject::Private::Construct<FKeyMappingRow>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FKeyMappingRow> @ 14a6b7430

void __cdecl UE::CoreUObject::Private::ConstructForTests<FKeyMappingRow>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FKeyMappingRow> @ 14a6b7460

void __cdecl UE::CoreUObject::Private::Destruct<FKeyMappingRow>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FKeyMappingRow> @ 14a6b75b0

bool __cdecl UE::CoreUObject::Private::Copy<FKeyMappingRow>(void *param_1,void *param_2,int param_3)

{
  TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator>::operator=
                (this,(TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator>
                       *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInputActionValue> @ 14a6b76c0

void __cdecl UE::CoreUObject::Private::Construct<FInputActionValue>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FInputActionValue> @ 14a6b76f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInputActionValue>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FInputActionValue> @ 14a6b7720

void __cdecl UE::CoreUObject::Private::Destruct<FInputActionValue>(void *param_1)

{
  return;
}

// Copy<FInputActionValue> @ 14a6b7730

bool __cdecl
UE::CoreUObject::Private::Copy<FInputActionValue>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDefaultContextSetting> @ 14a6b78f0

void __cdecl UE::CoreUObject::Private::Construct<FDefaultContextSetting>(void *param_1)

{
  undefined8 local_res8;
  
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(param_1,(FObjectPtr)&local_res8);
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// ConstructForTests<FDefaultContextSetting> @ 14a6b7950

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDefaultContextSetting>(void *param_1)

{
  undefined8 local_res8;
  
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(param_1,(FObjectPtr)&local_res8);
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// Destruct<FDefaultContextSetting> @ 14a6b79b0

void __cdecl UE::CoreUObject::Private::Destruct<FDefaultContextSetting>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
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

// Copy<FDefaultContextSetting> @ 14a6b79e0

bool __cdecl
UE::CoreUObject::Private::Copy<FDefaultContextSetting>(void *param_1,void *param_2,int param_3)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  TPersistentObjectPtr<FSoftObjectPath> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TPersistentObjectPtr<FSoftObjectPath>::operator=(this,pTVar1);
      this[1].WeakPtr.ObjectIndex = pTVar1[1].WeakPtr.ObjectIndex;
      *(char *)&this[1].WeakPtr.ObjectSerialNumber = (char)pTVar1[1].WeakPtr.ObjectSerialNumber;
      *(undefined1 *)((longlong)&this[1].WeakPtr.ObjectSerialNumber + 1) =
           *(undefined1 *)((longlong)&pTVar1[1].WeakPtr.ObjectSerialNumber + 1);
      param_3 = param_3 + -1;
      this = (TPersistentObjectPtr<FSoftObjectPath> *)&this[1].ObjectID;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPlayerKeyMapping> @ 14a6b7aa0

void __cdecl UE::CoreUObject::Private::Construct<FPlayerKeyMapping>(void *param_1)

{
  atomic<int> *paVar1;
  ITextData *pIVar2;
  FSharedReferencer<1> FVar3;
  FName FVar4;
  FText *pFVar5;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  pFVar5 = FText::GetEmpty();
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  pIVar2 = (pFVar5->TextData).Reference;
  *(ITextData **)((longlong)param_1 + 8) = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))();
  }
  *(uint *)((longlong)param_1 + 0x10) = pFVar5->Flags;
  pFVar5 = FText::GetEmpty();
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  pIVar2 = (pFVar5->TextData).Reference;
  *(ITextData **)((longlong)param_1 + 0x18) = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))();
  }
  *(uint *)((longlong)param_1 + 0x20) = pFVar5->Flags;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x28) = 7;
  *(FName *)((longlong)param_1 + 0x30) = EKeys::Invalid.KeyName;
  *(FKeyDetails **)((longlong)param_1 + 0x38) = EKeys::Invalid.KeyDetails.Object;
  FVar3 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40) =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(FName *)((longlong)param_1 + 0x48) = EKeys::Invalid.KeyName;
  *(FKeyDetails **)((longlong)param_1 + 0x50) = EKeys::Invalid.KeyDetails.Object;
  FVar3 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x58) =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  FVar4 = FHardwareDeviceIdentifier::Invalid.HardwareDeviceIdentifier;
  *(FName *)((longlong)param_1 + 0x60) = FHardwareDeviceIdentifier::Invalid.InputClassName;
  *(FName *)((longlong)param_1 + 0x68) = FVar4;
  *(undefined8 *)((longlong)param_1 + 0x70) = FHardwareDeviceIdentifier::Invalid._16_8_;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x98))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x98),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x80),(FObjectPtr)&uStackX_8);
  return;
}

// ConstructForTests<FPlayerKeyMapping> @ 14a6b7ab0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPlayerKeyMapping>(void *param_1)

{
  atomic<int> *paVar1;
  ITextData *pIVar2;
  FSharedReferencer<1> FVar3;
  FName FVar4;
  FText *pFVar5;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  pFVar5 = FText::GetEmpty();
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  pIVar2 = (pFVar5->TextData).Reference;
  *(ITextData **)((longlong)param_1 + 8) = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))();
  }
  *(uint *)((longlong)param_1 + 0x10) = pFVar5->Flags;
  pFVar5 = FText::GetEmpty();
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  pIVar2 = (pFVar5->TextData).Reference;
  *(ITextData **)((longlong)param_1 + 0x18) = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))();
  }
  *(uint *)((longlong)param_1 + 0x20) = pFVar5->Flags;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x28) = 7;
  *(FName *)((longlong)param_1 + 0x30) = EKeys::Invalid.KeyName;
  *(FKeyDetails **)((longlong)param_1 + 0x38) = EKeys::Invalid.KeyDetails.Object;
  FVar3 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40) =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(FName *)((longlong)param_1 + 0x48) = EKeys::Invalid.KeyName;
  *(FKeyDetails **)((longlong)param_1 + 0x50) = EKeys::Invalid.KeyDetails.Object;
  FVar3 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x58) =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  FVar4 = FHardwareDeviceIdentifier::Invalid.HardwareDeviceIdentifier;
  *(FName *)((longlong)param_1 + 0x60) = FHardwareDeviceIdentifier::Invalid.InputClassName;
  *(FName *)((longlong)param_1 + 0x68) = FVar4;
  *(undefined8 *)((longlong)param_1 + 0x70) = FHardwareDeviceIdentifier::Invalid._16_8_;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x98))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x98),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x80),(FObjectPtr)&uStackX_8);
  return;
}

// Destruct<FPlayerKeyMapping> @ 14a6b7ac0

void __cdecl UE::CoreUObject::Private::Destruct<FPlayerKeyMapping>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x58));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40));
  if (*(longlong **)((longlong)param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a6b7b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Copy<FPlayerKeyMapping> @ 14a6b7b60

bool __cdecl
UE::CoreUObject::Private::Copy<FPlayerKeyMapping>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      plVar1 = *(longlong **)((longlong)param_1 + lVar6 + 8);
      plVar2 = *(longlong **)((longlong)param_1 + 8);
      if (plVar2 != plVar1) {
        *(longlong **)((longlong)param_1 + 8) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18,param_1);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar6 + 0x10);
      plVar1 = *(longlong **)((longlong)param_1 + lVar6 + 0x18);
      plVar2 = *(longlong **)((longlong)param_1 + 0x18);
      if (plVar2 != plVar1) {
        *(longlong **)((longlong)param_1 + 0x18) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res8);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar6 + 0x20);
      *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_1 + lVar6 + 0x28);
      *(byte *)((longlong)param_1 + 0x29) =
           *(byte *)((longlong)param_1 + 0x29) ^
           (*(byte *)((longlong)param_1 + 0x29) ^ *(byte *)((longlong)param_1 + lVar6 + 0x29)) & 1;
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_1 + lVar6 + 0x30);
      lVar3 = *(longlong *)((longlong)param_1 + lVar6 + 0x40);
      uVar4 = *(undefined8 *)((longlong)param_1 + lVar6 + 0x38);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      pTVar5 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar4;
      *(longlong *)((longlong)param_1 + 0x40) = lVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_1 + lVar6 + 0x48);
      lVar3 = *(longlong *)((longlong)param_1 + lVar6 + 0x58);
      uVar4 = *(undefined8 *)((longlong)param_1 + lVar6 + 0x50);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      pTVar5 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar4;
      *(longlong *)((longlong)param_1 + 0x58) = lVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      uVar4 = *(undefined8 *)((longlong)param_1 + lVar6 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_1 + lVar6 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_1 + lVar6 + 0x70);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x80),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + lVar6 + 0x80));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0xa8);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPlayerKeyMapping> @ 14a6b7e00

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPlayerKeyMapping>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = uVar2 + (int)((ulonglong)uVar1 >> 0x20);
  uVar4 = uVar2 >> 0xd ^ -uVar2;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar4 << 8;
  uVar6 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar2 = (uVar3 - uVar4) - uVar6 ^ uVar4 << 0x10;
  uVar6 = (uVar6 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar3 = (uVar4 - uVar6) - uVar2 ^ uVar6 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 << 10;
  uVar2 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  iVar5 = uVar2 - *(byte *)((longlong)param_1 + 0x28);
  uVar2 = iVar5 * 0x100 ^ 0x9e3779b9 - uVar2;
  uVar4 = (*(byte *)((longlong)param_1 + 0x28) - uVar2) - iVar5 ^ uVar2 >> 0xd;
  uVar3 = (iVar5 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar6 = (uVar4 - uVar3) - uVar2 ^ uVar2 >> 5;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x48);
  uVar4 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 3;
  uVar3 = (uVar2 - uVar4) - uVar6 ^ uVar4 << 10;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = uVar2 + (int)((ulonglong)uVar1 >> 0x20);
  uVar6 = ((uVar6 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar6 ^ uVar6 << 8;
  uVar4 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 0xd;
  uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar2 = (uVar3 - uVar6) - uVar4 ^ uVar6 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar6 ^ uVar2 >> 5;
  uVar6 = (uVar6 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar3 = (uVar2 - uVar6) - uVar4 ^ uVar6 << 10;
  uVar2 = ::GetTypeHash((FHardwareDeviceIdentifier *)((longlong)param_1 + 0x60));
  uVar3 = ((uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xc;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 3;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xf;
}

// Construct<FMapPlayerKeyArgs> @ 14a6b8530

void __cdecl UE::CoreUObject::Private::Construct<FMapPlayerKeyArgs>(void *param_1)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 7;
  *(FName *)((longlong)param_1 + 0x10) = EKeys::Invalid.KeyName;
  *(FKeyDetails **)((longlong)param_1 + 0x18) = EKeys::Invalid.KeyDetails.Object;
  FVar2 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20) =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(byte *)((longlong)param_1 + 0x48) = *(byte *)((longlong)param_1 + 0x48) & 0xfd | 1;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FMapPlayerKeyArgs> @ 14a6b8590

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMapPlayerKeyArgs>(void *param_1)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 7;
  *(FName *)((longlong)param_1 + 0x10) = EKeys::Invalid.KeyName;
  *(FKeyDetails **)((longlong)param_1 + 0x18) = EKeys::Invalid.KeyDetails.Object;
  FVar2 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20) =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(byte *)((longlong)param_1 + 0x48) = *(byte *)((longlong)param_1 + 0x48) & 0xfd | 1;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FMapPlayerKeyArgs> @ 14a6b85f0

void __cdecl UE::CoreUObject::Private::Destruct<FMapPlayerKeyArgs>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20));
  return;
}

// Copy<FMapPlayerKeyArgs> @ 14a6b8620

bool __cdecl
UE::CoreUObject::Private::Copy<FMapPlayerKeyArgs>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  byte bVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_1 + lVar5 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x10);
      lVar1 = *(longlong *)((longlong)param_1 + lVar5 + 0x20);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar5 + 0x18);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      *(longlong *)((longlong)param_1 + 0x20) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x30);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_1 + lVar5 + 0x38)
                );
      bVar4 = (*(byte *)((longlong)param_1 + 0x48) ^ *(byte *)((longlong)param_1 + lVar5 + 0x48)) &
              1 ^ *(byte *)((longlong)param_1 + 0x48);
      *(byte *)((longlong)param_1 + 0x48) = bVar4;
      *(byte *)((longlong)param_1 + 0x48) =
           (bVar4 ^ *(byte *)((longlong)param_1 + lVar5 + 0x48)) & 2 ^ bVar4;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInputCancelAction> @ 14a6b8b20

void __cdecl UE::CoreUObject::Private::Construct<FInputCancelAction>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// ConstructForTests<FInputCancelAction> @ 14a6b8b40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInputCancelAction>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Destruct<FInputCancelAction> @ 14a6b8b60

void __cdecl UE::CoreUObject::Private::Destruct<FInputCancelAction>(void *param_1)

{
  return;
}

// Copy<FInputCancelAction> @ 14a6b8c30

bool __cdecl
UE::CoreUObject::Private::Copy<FInputCancelAction>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInputComboStepData> @ 14a6b9660

void __cdecl UE::CoreUObject::Private::Construct<FInputComboStepData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f000000;
  return;
}

// ConstructForTests<FInputComboStepData> @ 14a6b96c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInputComboStepData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f000000;
  return;
}

// Destruct<FInputComboStepData> @ 14a6b96e0

void __cdecl UE::CoreUObject::Private::Destruct<FInputComboStepData>(void *param_1)

{
  return;
}

// Copy<FInputComboStepData> @ 14a6b9740

bool __cdecl
UE::CoreUObject::Private::Copy<FInputComboStepData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInputMappingContextMappingData> @ 14a6b9e10

void __cdecl UE::CoreUObject::Private::Construct<FInputMappingContextMappingData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FInputMappingContextMappingData> @ 14a6b9e20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInputMappingContextMappingData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FInputMappingContextMappingData> @ 14a6b9e30

void __cdecl UE::CoreUObject::Private::Destruct<FInputMappingContextMappingData>(void *param_1)

{
  DestructItems<FEnhancedActionKeyMapping,int>
            (*(FEnhancedActionKeyMapping **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FInputMappingContextMappingData> @ 14a6b9e70

bool __cdecl
UE::CoreUObject::Private::Copy<FInputMappingContextMappingData>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FEnhancedActionKeyMapping *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FEnhancedActionKeyMapping,int>
                  ((FEnhancedActionKeyMapping *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FEnhancedActionKeyMapping *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FEnhancedActionKeyMapping,FEnhancedActionKeyMapping,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBlueprintInputDebugKeyDelegateBinding> @ 14a6bb530

void __cdecl
UE::CoreUObject::Private::Construct<FBlueprintInputDebugKeyDelegateBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  FInputChord::FInputChord(param_1);
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// ConstructForTests<FBlueprintInputDebugKeyDelegateBinding> @ 14a6bb570

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBlueprintInputDebugKeyDelegateBinding>(void *param_1)

{
  FInputChord::FInputChord(param_1);
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// Destruct<FBlueprintInputDebugKeyDelegateBinding> @ 14a6bb5a0

void __cdecl
UE::CoreUObject::Private::Destruct<FBlueprintInputDebugKeyDelegateBinding>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FBlueprintInputDebugKeyDelegateBinding> @ 14a6bb5f0

bool __cdecl
UE::CoreUObject::Private::Copy<FBlueprintInputDebugKeyDelegateBinding>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + (longlong)param_1);
      lVar1 = *(longlong *)((longlong)param_1 + lVar5 + 0x10);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar5 + 8);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(longlong *)((longlong)param_1 + 0x10) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar4 = (*(uint *)((longlong)param_1 + 0x18) ^ *(uint *)((longlong)param_1 + lVar5 + 0x18)) &
              1 ^ *(uint *)((longlong)param_1 + 0x18);
      *(uint *)((longlong)param_1 + 0x18) = uVar4;
      uVar4 = (uVar4 ^ *(uint *)((longlong)param_1 + lVar5 + 0x18)) & 2 ^ uVar4;
      *(uint *)((longlong)param_1 + 0x18) = uVar4;
      uVar4 = (uVar4 ^ *(uint *)((longlong)param_1 + lVar5 + 0x18)) & 4 ^ uVar4;
      *(uint *)((longlong)param_1 + 0x18) = uVar4;
      *(uint *)((longlong)param_1 + 0x18) =
           (uVar4 ^ *(uint *)((longlong)param_1 + lVar5 + 0x18)) & 8 ^ uVar4;
      *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_1 + lVar5 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x24);
      *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_1 + lVar5 + 0x2c);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInputActionInstance> @ 14a6bc080

void __cdecl UE::CoreUObject::Private::Construct<FInputActionInstance>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x1000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FInputActionInstance> @ 14a6bc0e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInputActionInstance>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x1000000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FInputActionInstance> @ 14a6bc130

void __cdecl UE::CoreUObject::Private::Destruct<FInputActionInstance>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Decay<TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_>_>,TArray<UInputModifier_*,TSizedDefaultAllocator<32>_>_> @ 14a6bd5c0

TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Unsafe::
Decay<TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_>_>,TArray<UInputModifier_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UInputModifier>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UInputModifier>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<UInputModifier_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// Decay<TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_>_>,TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_>_> @ 14a6bd620

TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Unsafe::
Decay<TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_>_>,TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UInputTrigger>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<UInputTrigger_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// DereferenceIfNecessary<FEnhancedInputModule,FEnhancedInputModule_*_&> @ 14a6bde10

FEnhancedInputModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FEnhancedInputModule,FEnhancedInputModule_*_&>
          (FEnhancedInputModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UEnhancedInputUserSettings,UEnhancedInputUserSettings_*_&> @ 14a6bde30

UEnhancedInputUserSettings * __cdecl
UE::Core::Private::DereferenceIfNecessary<UEnhancedInputUserSettings,UEnhancedInputUserSettings_*_&>
          (UEnhancedInputUserSettings **param_1)

{
  return *param_1;
}

// operator<< @ 14a6d0c60

FArchive * __cdecl UE::EnhancedInput::operator<<(FArchive *param_1,FKeyMappingSaveData *param_2)

{
  EPlayerMappableKeySlot *pEVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x178))();
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->CurrentKeyName);
  ::operator<<(param_1,&param_2->HardwareDeviceId);
  pEVar1 = (EPlayerMappableKeySlot *)**(undefined8 **)&param_1->field_0x8;
  if (pEVar1 + 1 <= (EPlayerMappableKeySlot *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Slot = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->Slot,1);
  return param_1;
}

// operator<< @ 14a6d0cf0

FArchive * __cdecl UE::EnhancedInput::operator<<(FArchive *param_1,FMappableKeysHeader *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FArchive *pFVar4;
  FNameEntryId local_res8;
  uint uStackX_c;
  ForAnyElementType local_18;
  int local_10;
  int iStack_c;
  
  if (((param_1->field_0x28 & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\UserSettings\\EnhancedInputUserSettings.cpp"
                         ,0x388,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FArchive *)(*pcVar2)();
    return pFVar4;
  }
  local_res8.Value = 0;
  uStackX_c = 0;
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&stack0x00000008);
  ::operator<<(param_1,&param_2->ClassPath);
  ::operator<<(param_1,&param_2->ObjectPath);
  TArrayPrivateFriend::Serialize<UE::EnhancedInput::FKeyMappingSaveData,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->DirtyMappings);
  ::FName::ToString((FName *)&stack0x00000008,(FString *)&stack0xffffffffffffffe8);
  if (param_2 != (FMappableKeysHeader *)&stack0xffffffffffffffe8) {
    pFVar1 = (param_2->ProfileIdentifierString).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->ProfileIdentifierString).Data.AllocatorInstance.Data = local_18.Data;
    (param_2->ProfileIdentifierString).Data.ArrayNum = local_10;
    (param_2->ProfileIdentifierString).Data.ArrayMax = iStack_c;
    local_10 = 0;
    iStack_c = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return param_1;
}

// DumpAllKeyProfilesToLog @ 14a6d9120

void __cdecl
UE::EnhancedInput::DumpAllKeyProfilesToLog(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  code *local_18;
  ForAnyElementType *local_10;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = iVar1;
  if (iVar1 == 0) {
    local_1c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_28,iVar1,&local_1c);
    ConstructItems<FString,FString,int>(local_28.Data,(FString *)pFVar2,iVar1);
  }
  local_10 = &local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::EnhancedInput::DumpAllKeyProfilesToLog'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
             ::Call;
  UEnhancedInputLibrary::ForEachSubsystem
            ((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_18);
  DestructItems<FString,int>((FString *)local_28.Data,local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// LexToString @ 14a6e5d50

FString * __cdecl UE::Input::LexToString(FString *__return_storage_ptr__,ETriggerEvent param_1)

{
  FString *pFVar1;
  int iVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1 == None) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  ::FString::FString(&local_38,L"");
  if ((param_1 & Triggered) != None) {
    pFVar1 = ::FString::FString(&local_18,L"Triggered");
    ::FString::ConcatFC(&local_28,pFVar1,L"|");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1 & Started) != None) {
    pFVar1 = ::FString::FString(&local_18,L"Started");
    ::FString::ConcatFC(&local_28,pFVar1,L"|");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1 & Ongoing) != None) {
    pFVar1 = ::FString::FString(&local_18,L"Ongoing");
    ::FString::ConcatFC(&local_28,pFVar1,L"|");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1 & Canceled) != None) {
    pFVar1 = ::FString::FString(&local_18,L"Canceled");
    ::FString::ConcatFC(&local_28,pFVar1,L"|");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1 & Completed) != None) {
    pFVar1 = ::FString::FString(&local_18,L"Completed");
    ::FString::ConcatFC(&local_28,pFVar1,L"|");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::RemoveFromEnd(&local_38,L"|",1,IgnoreCase);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
  return __return_storage_ptr__;
}

// SaveAllKeyProfilesToSlot @ 14a6f4ba0

void __cdecl
UE::EnhancedInput::SaveAllKeyProfilesToSlot(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  code *local_18;
  ForAnyElementType *local_10;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = iVar1;
  if (iVar1 == 0) {
    local_1c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_28,iVar1,&local_1c);
    ConstructItems<FString,FString,int>(local_28.Data,(FString *)pFVar2,iVar1);
  }
  local_10 = &local_28;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::EnhancedInput::SaveAllKeyProfilesToSlot'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
             ::Call;
  UEnhancedInputLibrary::ForEachSubsystem
            ((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_18);
  DestructItems<FString,int>((FString *)local_28.Data,local_20);
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// SetActiveKeyProfile @ 14a6f60b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::EnhancedInput::SetActiveKeyProfile(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *local_28;
  FString *local_20;
  FString local_18;
  
  if (param_1->ArrayNum < 1) {
    if (1 < (byte)LogEnhancedInput._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      return;
    }
  }
  else {
    ::FString::FString(&local_18,(FString *)(param_1->AllocatorInstance).Data);
    local_20 = &local_18;
    local_28 = Core::Private::Function::
               TFunctionRefCaller<`UE::EnhancedInput::SetActiveKeyProfile'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
               ::Call;
    UEnhancedInputLibrary::ForEachSubsystem
              ((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

