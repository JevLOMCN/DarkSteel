// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 21

// Construct<FCommonInputPlatformBaseData> @ 14a76de00

void __cdecl UE::CoreUObject::Private::Construct<FCommonInputPlatformBaseData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FCommonInputPlatformBaseData__6B_;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  *(undefined2 *)((longlong)param_1 + 0x14) = 1;
  *(FName *)((longlong)param_1 + 0xc) = FCommonInputDefaults::GamepadGeneric;
  return;
}

// ConstructForTests<FCommonInputPlatformBaseData> @ 14a76de50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCommonInputPlatformBaseData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 1;
  *(undefined ***)param_1 = &___7FCommonInputPlatformBaseData__6B_;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  *(undefined2 *)((longlong)param_1 + 0x14) = 1;
  *(FName *)((longlong)param_1 + 0xc) = FCommonInputDefaults::GamepadGeneric;
  return;
}

// Destruct<FCommonInputPlatformBaseData> @ 14a76dea0

void __cdecl UE::CoreUObject::Private::Destruct<FCommonInputPlatformBaseData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<TSoftClassPtr<UCommonInputBaseControllerData>,int>
            (*(TSoftClassPtr<UCommonInputBaseControllerData> **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FCommonInputPlatformBaseData> @ 14a76def0

bool __cdecl
UE::CoreUObject::Private::Copy<FCommonInputPlatformBaseData>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x18);
    *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
    *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
    *(undefined1 *)((longlong)param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x15);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x18)) {
      DestructItems<TSoftClassPtr<UCommonInputBaseControllerData>,int>
                ((TSoftClassPtr<UCommonInputBaseControllerData> *)pFVar1->Data,
                 *(int *)((longlong)param_1 + 0x20));
      iVar3 = *(int *)((longlong)param_2 + 0x20);
      piVar2 = (int *)((longlong)param_1 + 0x24);
      pFVar4 = ((ForAnyElementType *)((longlong)param_2 + 0x18))->Data;
      *(int *)((longlong)param_1 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<TSoftClassPtr<UCommonInputBaseControllerData>,TSoftClassPtr<UCommonInputBaseControllerData>,int>
                  (pFVar1->Data,(TSoftClassPtr<UCommonInputBaseControllerData> *)pFVar4,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x28);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x28)) {
      iVar3 = *(int *)((longlong)param_2 + 0x30);
      piVar2 = (int *)((longlong)param_1 + 0x34);
      pFVar4 = ((ForAnyElementType *)((longlong)param_2 + 0x28))->Data;
      *(int *)((longlong)param_1 + 0x30) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<TSubclassOf<UCommonInputBaseControllerData>,TSubclassOf<UCommonInputBaseControllerData>,int>
                  (pFVar1->Data,(TSubclassOf<UCommonInputBaseControllerData> *)pFVar4,iVar3);
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x38);
    param_2 = (void *)((longlong)param_2 + 0x38);
  }
  return true;
}

// Construct<FInputHoldData> @ 14a76e1f0

void __cdecl UE::CoreUObject::Private::Construct<FInputHoldData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FInputHoldData> @ 14a76e200

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInputHoldData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FInputHoldData> @ 14a76e210

void __cdecl UE::CoreUObject::Private::Destruct<FInputHoldData>(void *param_1)

{
  return;
}

// Copy<FInputHoldData> @ 14a76e220

bool __cdecl UE::CoreUObject::Private::Copy<FInputHoldData>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInputDeviceIdentifierPair> @ 14a76e2a0

void __cdecl UE::CoreUObject::Private::Construct<FInputDeviceIdentifierPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FInputDeviceIdentifierPair> @ 14a76e2c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInputDeviceIdentifierPair>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FInputDeviceIdentifierPair> @ 14a76e2e0

void __cdecl UE::CoreUObject::Private::Destruct<FInputDeviceIdentifierPair>(void *param_1)

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

// Copy<FInputDeviceIdentifierPair> @ 14a76e340

bool __cdecl
UE::CoreUObject::Private::Copy<FInputDeviceIdentifierPair>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      ::FString::operator=
                ((FString *)(puVar1 + 1),
                 (FString *)((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCommonInputKeySetBrushConfiguration> @ 14a76e590

void __cdecl
UE::CoreUObject::Private::Construct<FCommonInputKeySetBrushConfiguration>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0x2c) = 3;
  return;
}

// ConstructForTests<FCommonInputKeySetBrushConfiguration> @ 14a76e5c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCommonInputKeySetBrushConfiguration>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0x2c) = 3;
  return;
}

// Destruct<FCommonInputKeySetBrushConfiguration> @ 14a76e5f0

void __cdecl UE::CoreUObject::Private::Destruct<FCommonInputKeySetBrushConfiguration>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  DestructItems<FKey,int>(*(FKey **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCommonInputKeySetBrushConfiguration> @ 14a76e680

bool __cdecl
UE::CoreUObject::Private::Copy<FCommonInputKeySetBrushConfiguration>
          (void *param_1,void *param_2,int param_3)

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
      FSlateBrush::operator=((FSlateBrush *)(pFVar6 + 2),(FSlateBrush *)(pFVar2 + 2));
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCommonInputKeyBrushConfiguration> @ 14a76e7b0

void __cdecl UE::CoreUObject::Private::Construct<FCommonInputKeyBrushConfiguration>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x20));
  *(undefined1 *)((longlong)param_1 + 0x3c) = 3;
  return;
}

// ConstructForTests<FCommonInputKeyBrushConfiguration> @ 14a76e7e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCommonInputKeyBrushConfiguration>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x20));
  *(undefined1 *)((longlong)param_1 + 0x3c) = 3;
  return;
}

// Destruct<FCommonInputKeyBrushConfiguration> @ 14a76e810

void __cdecl UE::CoreUObject::Private::Destruct<FCommonInputKeyBrushConfiguration>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xc0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FCommonInputKeyBrushConfiguration> @ 14a76e850

bool __cdecl
UE::CoreUObject::Private::Copy<FCommonInputKeyBrushConfiguration>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x10);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 8);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(longlong *)((longlong)param_1 + 0x10) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FSlateBrush::operator=
                ((FSlateBrush *)((longlong)param_1 + 0x20),
                 (FSlateBrush *)((longlong)param_1 + lVar4 + 0x20));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0xd0);
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UCommonInputSubsystem,UCommonInputSubsystem_*_&> @ 14a76f070

UCommonInputSubsystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonInputSubsystem,UCommonInputSubsystem_*_&>
          (UCommonInputSubsystem **param_1)

{
  return *param_1;
}

