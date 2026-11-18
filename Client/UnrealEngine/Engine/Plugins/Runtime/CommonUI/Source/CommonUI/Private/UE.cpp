// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 106

// Construct<FUITag> @ 14a77ff80

void __cdecl UE::CoreUObject::Private::Construct<FUITag>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FUITag> @ 14a77ffa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUITag>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FUITag> @ 14a77ffb0

void __cdecl UE::CoreUObject::Private::Destruct<FUITag>(void *param_1)

{
  return;
}

// PostSerialize<FUITag> @ 14a780000

void __cdecl UE::CoreUObject::Private::PostSerialize<FUITag>(FArchive *param_1,void *param_2)

{
  FGameplayTag::PostSerialize(param_2,param_1);
  return;
}

// NetSerialize<FUITag> @ 14a780020

bool __cdecl
UE::CoreUObject::Private::NetSerialize<FUITag>
          (FArchive *param_1,UPackageMap *param_2,bool *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FGameplayTag::NetSerialize(param_4,param_1,param_2,param_3);
  return bVar1;
}

// Copy<FUITag> @ 14a780040

bool __cdecl UE::CoreUObject::Private::Copy<FUITag>(void *param_1,void *param_2,int param_3)

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

// ExportTextItem<FUITag> @ 14a780120

bool __cdecl
UE::CoreUObject::Private::ExportTextItem<FUITag>
          (FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5,
          UObject *param_6)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FName local_28;
  FString local_20;
  
  local_28 = *(FName *)param_2;
  if (param_3 == (void *)0x0) {
    pFVar2 = ::FName::ToString(&local_28,&local_20);
    iVar1 = (pFVar2->Data).ArrayNum;
  }
  else {
    pFVar2 = ::FName::ToString(&local_28,&local_20);
    iVar1 = (pFVar2->Data).ArrayNum;
  }
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return true;
}

// ImportTextItem<FUITag> @ 14a780190

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FUITag>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  bool bVar1;
  
  bVar1 = FGameplayTag::ImportTextItem(param_2,param_1,param_3,param_4,param_5);
  return bVar1;
}

// StructuredSerializeFromMismatchedTag<FUITag> @ 14a780410

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FUITag>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FGameplayTag::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// GetStructTypeHash<FUITag> @ 14a780600

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FUITag>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

// Construct<FUIInputConfig> @ 14a782270

void __cdecl UE::CoreUObject::Private::Construct<FUIInputConfig>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0x100;
  return;
}

// ConstructForTests<FUIInputConfig> @ 14a782290

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIInputConfig>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0x100;
  return;
}

// Destruct<FUIInputConfig> @ 14a7822b0

void __cdecl UE::CoreUObject::Private::Destruct<FUIInputConfig>(void *param_1)

{
  return;
}

// Copy<FUIInputConfig> @ 14a782990

bool __cdecl UE::CoreUObject::Private::Copy<FUIInputConfig>(void *param_1,void *param_2,int param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined2 *)(lVar2 + 4 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar1;
      param_1 = (void *)((longlong)param_1 + 6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCommonAnalogCursorSettings> @ 14a782f50

void __cdecl UE::CoreUObject::Private::Construct<FCommonAnalogCursorSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 2;
  *(undefined1 *)((longlong)param_1 + 4) = 6;
  *(undefined4 *)((longlong)param_1 + 8) = 2;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x44bb8000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x45098000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x40200000;
  return;
}

// ConstructForTests<FCommonAnalogCursorSettings> @ 14a782fa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCommonAnalogCursorSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 2;
  *(undefined1 *)((longlong)param_1 + 4) = 6;
  *(undefined4 *)((longlong)param_1 + 8) = 2;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x44bb8000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x45098000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x40200000;
  return;
}

// Destruct<FCommonAnalogCursorSettings> @ 14a783030

void __cdecl UE::CoreUObject::Private::Destruct<FCommonAnalogCursorSettings>(void *param_1)

{
  return;
}

// Copy<FCommonAnalogCursorSettings> @ 14a783190

bool __cdecl
UE::CoreUObject::Private::Copy<FCommonAnalogCursorSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar3 = *(undefined4 *)(lVar7 + 0x28 + (longlong)param_1);
      uVar4 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x28) = uVar3;
      param_1 = (void *)((longlong)param_1 + 0x2c);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUIActionBindingHandle> @ 14a783380

void __cdecl UE::CoreUObject::Private::Construct<FUIActionBindingHandle>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FUIActionBindingHandle> @ 14a7833a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIActionBindingHandle>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FUIActionBindingHandle> @ 14a7833c0

void __cdecl UE::CoreUObject::Private::Destruct<FUIActionBindingHandle>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FUIActionBindingHandle> @ 14a783470

bool __cdecl
UE::CoreUObject::Private::Copy<FUIActionBindingHandle>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      this[4] = *(undefined4 *)&pFVar1[1].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FUIActionBindingHandle> @ 14a7836d0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FUIActionBindingHandle>(void *param_1)

{
  return *(uint *)((longlong)param_1 + 0x10);
}

// Construct<FUIInputAction> @ 14a7848e0

void __cdecl UE::CoreUObject::Private::Construct<FUIInputAction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  FText::FText((FText *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FUIInputAction> @ 14a784940

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIInputAction>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FText::FText((FText *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FUIInputAction> @ 14a784980

void __cdecl UE::CoreUObject::Private::Destruct<FUIInputAction>(void *param_1)

{
  DestructItems<FUIActionKeyMapping,int>
            (*(FUIActionKeyMapping **)((longlong)param_1 + 0x18),*(int *)((longlong)param_1 + 0x20))
  ;
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a7849b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Copy<FUIInputAction> @ 14a784a90

bool __cdecl UE::CoreUObject::Private::Copy<FUIInputAction>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  FUIActionKeyMapping *pFVar6;
  longlong lVar7;
  ForAnyElementType *pFVar8;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      plVar4 = *(longlong **)((longlong)param_1 + lVar7 + 8);
      plVar5 = *(longlong **)((longlong)param_1 + 8);
      if (plVar5 != plVar4) {
        *(longlong **)((longlong)param_1 + 8) = plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4,local_res18);
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x18);
      pFVar8 = (ForAnyElementType *)((longlong)param_1 + lVar7 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar7 + 0x10);
      if (pFVar1 != pFVar8) {
        DestructItems<FUIActionKeyMapping,int>
                  ((FUIActionKeyMapping *)pFVar1->Data,*(int *)((longlong)param_1 + 0x20));
        iVar3 = *(int *)((longlong)param_1 + lVar7 + 0x20);
        piVar2 = (int *)((longlong)param_1 + 0x24);
        pFVar6 = (FUIActionKeyMapping *)pFVar8->Data;
        *(int *)((longlong)param_1 + 0x20) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<FUIActionKeyMapping,FUIActionKeyMapping,int>(pFVar1->Data,pFVar6,iVar3);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCommonRegisteredTabInfo> @ 14a784c40

void __cdecl UE::CoreUObject::Private::Construct<FCommonRegisteredTabInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FCommonRegisteredTabInfo> @ 14a784c60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCommonRegisteredTabInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCommonRegisteredTabInfo> @ 14a784c80

void __cdecl UE::CoreUObject::Private::Destruct<FCommonRegisteredTabInfo>(void *param_1)

{
  return;
}

// Copy<FCommonRegisteredTabInfo> @ 14a784ca0

bool __cdecl
UE::CoreUObject::Private::Copy<FCommonRegisteredTabInfo>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x10), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x18), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUIActionKeyMapping> @ 14a785290

void __cdecl UE::CoreUObject::Private::Construct<FUIActionKeyMapping>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FUIActionKeyMapping> @ 14a7852b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIActionKeyMapping>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FUIActionKeyMapping> @ 14a785310

void __cdecl UE::CoreUObject::Private::Destruct<FUIActionKeyMapping>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FUIActionKeyMapping> @ 14a7853b0

bool __cdecl
UE::CoreUObject::Private::Copy<FUIActionKeyMapping>(void *param_1,void *param_2,int param_3)

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
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x1c);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCommonNumberFormattingOptions> @ 14a786b20

void __cdecl UE::CoreUObject::Private::Construct<FCommonNumberFormattingOptions>(void *param_1)

{
  int iVar1;
  FNumberFormattingOptions *pFVar2;
  
  *(undefined2 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  pFVar2 = FNumberFormattingOptions::DefaultNoGrouping();
  *(int *)((longlong)param_1 + 4) = pFVar2->MinimumIntegralDigits;
  pFVar2 = FNumberFormattingOptions::DefaultNoGrouping();
  iVar1 = pFVar2->MaximumIntegralDigits;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(int *)((longlong)param_1 + 8) = iVar1;
  return;
}

// ConstructForTests<FCommonNumberFormattingOptions> @ 14a786ba0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCommonNumberFormattingOptions>(void *param_1)

{
  int iVar1;
  FNumberFormattingOptions *pFVar2;
  
  *(undefined2 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  pFVar2 = FNumberFormattingOptions::DefaultNoGrouping();
  *(int *)((longlong)param_1 + 4) = pFVar2->MinimumIntegralDigits;
  pFVar2 = FNumberFormattingOptions::DefaultNoGrouping();
  iVar1 = pFVar2->MaximumIntegralDigits;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(int *)((longlong)param_1 + 8) = iVar1;
  return;
}

// Destruct<FCommonNumberFormattingOptions> @ 14a786be0

void __cdecl UE::CoreUObject::Private::Destruct<FCommonNumberFormattingOptions>(void *param_1)

{
  return;
}

// Copy<FCommonNumberFormattingOptions> @ 14a786d70

bool __cdecl
UE::CoreUObject::Private::Copy<FCommonNumberFormattingOptions>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCommonInputActionHandlerData> @ 14a787950

void __cdecl UE::CoreUObject::Private::Construct<FCommonInputActionHandlerData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// ConstructForTests<FCommonInputActionHandlerData> @ 14a787970

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCommonInputActionHandlerData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// Destruct<FCommonInputActionHandlerData> @ 14a787990

void __cdecl UE::CoreUObject::Private::Destruct<FCommonInputActionHandlerData>(void *param_1)

{
  return;
}

// Copy<FCommonInputActionHandlerData> @ 14a787a20

bool __cdecl
UE::CoreUObject::Private::Copy<FCommonInputActionHandlerData>
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
      puVar2[1] = puVar1[1];
      *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
      *(undefined8 *)((longlong)puVar2 + 0x14) = *(undefined8 *)((longlong)puVar1 + 0x14);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCommonInputActionDataBase> @ 14a789110

void __cdecl UE::CoreUObject::Private::Construct<FCommonInputActionDataBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCommonInputActionDataBase__6B_;
  FText::FText((FText *)((longlong)param_1 + 8));
  FText::FText((FText *)((longlong)param_1 + 0x18));
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x60));
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x140));
  *(undefined2 *)((longlong)param_1 + 0x128) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined4 *)((longlong)param_1 + 0x218) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x220) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined4 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x270));
  *(undefined2 *)((longlong)param_1 + 600) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0x3f000000;
  return;
}

// ConstructForTests<FCommonInputActionDataBase> @ 14a789120

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCommonInputActionDataBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCommonInputActionDataBase__6B_;
  FText::FText((FText *)((longlong)param_1 + 8));
  FText::FText((FText *)((longlong)param_1 + 0x18));
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x60));
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x140));
  *(undefined2 *)((longlong)param_1 + 0x128) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined4 *)((longlong)param_1 + 0x218) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x220) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined4 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x270));
  *(undefined2 *)((longlong)param_1 + 600) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0x3f000000;
  return;
}

// Destruct<FCommonInputActionDataBase> @ 14a789130

void __cdecl UE::CoreUObject::Private::Destruct<FCommonInputActionDataBase>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x270) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x310));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x250));
  *(undefined4 *)((longlong)param_1 + 0x238) = 0;
  if (*(void **)((longlong)param_1 + 0x230) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x230));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x1f0));
  *(undefined ***)((longlong)param_1 + 0x140) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x1e0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x120));
  *(undefined ***)((longlong)param_1 + 0x60) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x100));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40));
  if (*(longlong **)((longlong)param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
  }
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// SerializeArchive<FCommonInputActionDataBase> @ 14a789140

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FCommonInputActionDataBase>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  return false;
}

// PostSerialize<FCommonInputActionDataBase> @ 14a7891f0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FCommonInputActionDataBase>(FArchive *param_1,void *param_2)

{
  FCommonInputActionDataBase::PostSerialize(param_2,param_1);
  return;
}

// Copy<FCommonInputActionDataBase> @ 14a7892a0

bool __cdecl
UE::CoreUObject::Private::Copy<FCommonInputActionDataBase>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    plVar2 = *(longlong **)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar4);
    plVar3 = *(longlong **)((longlong)pvVar4 + 8);
    if (plVar3 != plVar2) {
      *(longlong **)((longlong)pvVar4 + 8) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_res18);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)((longlong)pvVar4 + 0x10) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    plVar2 = *(longlong **)((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    plVar3 = *(longlong **)((longlong)pvVar4 + 0x18);
    if (plVar3 != plVar2) {
      *(longlong **)((longlong)pvVar4 + 0x18) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_res8);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)((longlong)pvVar4 + 0x20) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar4 + 0x28) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x28 - (longlong)param_1));
    FCommonInputTypeInfo::operator=
              ((FCommonInputTypeInfo *)((longlong)pvVar4 + 0x30),
               (FCommonInputTypeInfo *)
               ((longlong)pvVar4 + (longlong)param_2 + (0x30 - (longlong)param_1)));
    FCommonInputTypeInfo::operator=
              ((FCommonInputTypeInfo *)((longlong)pvVar4 + 0x110),
               (FCommonInputTypeInfo *)
               ((longlong)pvVar4 + (longlong)param_2 + (0x110 - (longlong)param_1)));
    pTVar1 = (TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)pvVar4 + (longlong)param_2 + (0x1f0 - (longlong)param_1));
    if ((TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)pvVar4 + 0x1f0) != pTVar1) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)((longlong)pvVar4 + 0x228),
                 (int *)((longlong)pvVar4 + 0x238),
                 (ForElementType<FSetElementId> *)
                 ((longlong)pvVar4 + (longlong)param_2 + (0x228 - (longlong)param_1)),
                 *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x238 - (longlong)param_1)));
      TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FCommonInputTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)pvVar4 + 0x1f0),pTVar1);
    }
    FCommonInputTypeInfo::operator=
              ((FCommonInputTypeInfo *)((longlong)pvVar4 + 0x240),
               (FCommonInputTypeInfo *)
               ((longlong)pvVar4 + (longlong)param_2 + (0x240 - (longlong)param_1)));
    pvVar4 = (void *)((longlong)pvVar4 + 800);
  }
  return true;
}

// Construct<FUIActionTag> @ 14a78a460

void __cdecl UE::CoreUObject::Private::Construct<FUIActionTag>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FUIActionTag> @ 14a78a470

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIActionTag>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FUIActionTag> @ 14a78a580

void __cdecl UE::CoreUObject::Private::Destruct<FUIActionTag>(void *param_1)

{
  return;
}

// PostSerialize<FUIActionTag> @ 14a78a5e0

void __cdecl UE::CoreUObject::Private::PostSerialize<FUIActionTag>(FArchive *param_1,void *param_2)

{
  FGameplayTag::PostSerialize(param_2,param_1);
  return;
}

// NetSerialize<FUIActionTag> @ 14a78a680

bool __cdecl
UE::CoreUObject::Private::NetSerialize<FUIActionTag>
          (FArchive *param_1,UPackageMap *param_2,bool *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FGameplayTag::NetSerialize(param_4,param_1,param_2,param_3);
  return bVar1;
}

// Copy<FUIActionTag> @ 14a78a720

bool __cdecl UE::CoreUObject::Private::Copy<FUIActionTag>(void *param_1,void *param_2,int param_3)

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

// Construct<FCommonInputTypeInfo> @ 14a78a750

void __cdecl UE::CoreUObject::Private::Construct<FCommonInputTypeInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x30));
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f000000;
  return;
}

// ConstructForTests<FCommonInputTypeInfo> @ 14a78a7f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCommonInputTypeInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x30));
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f000000;
  return;
}

// Destruct<FCommonInputTypeInfo> @ 14a78a840

void __cdecl UE::CoreUObject::Private::Destruct<FCommonInputTypeInfo>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x30) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xd0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// ExportTextItem<FUIActionTag> @ 14a78a880

bool __cdecl
UE::CoreUObject::Private::ExportTextItem<FUIActionTag>
          (FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5,
          UObject *param_6)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FName local_28;
  FString local_20;
  
  local_28 = *(FName *)param_2;
  if (param_3 == (void *)0x0) {
    pFVar2 = ::FName::ToString(&local_28,&local_20);
    iVar1 = (pFVar2->Data).ArrayNum;
  }
  else {
    pFVar2 = ::FName::ToString(&local_28,&local_20);
    iVar1 = (pFVar2->Data).ArrayNum;
  }
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return true;
}

// ImportTextItem<FUIActionTag> @ 14a78a980

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FUIActionTag>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  bool bVar1;
  
  bVar1 = FGameplayTag::ImportTextItem(param_2,param_1,param_3,param_4,param_5);
  return bVar1;
}

// Copy<FCommonInputTypeInfo> @ 14a78a9f0

bool __cdecl
UE::CoreUObject::Private::Copy<FCommonInputTypeInfo>(void *param_1,void *param_2,int param_3)

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
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x19);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x1c);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x20);
      FSlateBrush::operator=
                ((FSlateBrush *)((longlong)param_1 + 0x30),
                 (FSlateBrush *)((longlong)param_1 + lVar4 + 0x30));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0xe0);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FUIActionTag> @ 14a78aad0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FUIActionTag>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FGameplayTag::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// GetStructTypeHash<FUIActionTag> @ 14a78ab80

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FUIActionTag>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

// Construct<FRichTextIconData> @ 14a78b610

void __cdecl UE::CoreUObject::Private::Construct<FRichTextIconData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined ***)param_1 = &___7FRichTextIconData__6B_;
  FText::FText((FText *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x4050000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x4050000000000000;
  return;
}

// ConstructForTests<FRichTextIconData> @ 14a78b750

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRichTextIconData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRichTextIconData__6B_;
  FText::FText((FText *)((longlong)param_1 + 8));
  (((FUtf8String *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x4050000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x4050000000000000;
  return;
}

// Destruct<FRichTextIconData> @ 14a78b7c0

void __cdecl UE::CoreUObject::Private::Destruct<FRichTextIconData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
  }
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FRichTextIconData> @ 14a78b8d0

bool __cdecl
UE::CoreUObject::Private::Copy<FRichTextIconData>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined1 local_res18 [16];
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    plVar1 = *(longlong **)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar4);
    plVar2 = *(longlong **)((longlong)pvVar4 + 8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)pvVar4 + 8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,local_res18);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)pvVar4 + 0x10) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x18) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)pvVar4 + 0x20),
               (FSoftObjectPath *)
               ((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    uVar3 = *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x40) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x48) = uVar3;
    pvVar4 = (void *)((longlong)pvVar4 + 0x50);
  }
  return true;
}

// Construct<FCommonButtonStyleOptionalSlateSound> @ 14a78c240

void __cdecl
UE::CoreUObject::Private::Construct<FCommonButtonStyleOptionalSlateSound>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FSlateSound::FSlateSound((FSlateSound *)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<FCommonButtonStyleOptionalSlateSound> @ 14a78c260

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCommonButtonStyleOptionalSlateSound>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  FSlateSound::FSlateSound((FSlateSound *)((longlong)param_1 + 8));
  return;
}

// Destruct<FCommonButtonStyleOptionalSlateSound> @ 14a78c2c0

void __cdecl UE::CoreUObject::Private::Destruct<FCommonButtonStyleOptionalSlateSound>(void *param_1)

{
  return;
}

// Copy<FCommonButtonStyleOptionalSlateSound> @ 14a78c320

bool __cdecl
UE::CoreUObject::Private::Copy<FCommonButtonStyleOptionalSlateSound>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      FSlateSound::operator=
                ((FSlateSound *)(puVar1 + 8),
                 (FSlateSound *)(puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x20;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FCarouselDisplayItem,FCarouselDisplayItem_*_&> @ 14a797950

FCarouselDisplayItem * __cdecl
UE::Core::Private::DereferenceIfNecessary<FCarouselDisplayItem,FCarouselDisplayItem_*_&>
          (FCarouselDisplayItem **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&> @ 14a797970

SCommonButtonTableRow<UObject_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SCommonButtonTableRow<UObject_*>,SCommonButtonTableRow<UObject_*>_*_&>
          (SCommonButtonTableRow<UObject_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SWidgetCarousel<UPanelSlot_*>,SWidgetCarousel<UPanelSlot_*>_*_&> @ 14a797990

SWidgetCarousel<UPanelSlot_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SWidgetCarousel<UPanelSlot_*>,SWidgetCarousel<UPanelSlot_*>_*_&>
          (SWidgetCarousel<UPanelSlot_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FActivatableTreeNode,FActivatableTreeNode_*_&> @ 14a7979b0

FActivatableTreeNode * __cdecl
UE::Core::Private::DereferenceIfNecessary<FActivatableTreeNode,FActivatableTreeNode_*_&>
          (FActivatableTreeNode **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FActivatableTreeRoot,FActivatableTreeRoot_*_&> @ 14a7979d0

FActivatableTreeRoot * __cdecl
UE::Core::Private::DereferenceIfNecessary<FActivatableTreeRoot,FActivatableTreeRoot_*_&>
          (FActivatableTreeRoot **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FCommonAnalogCursor,FCommonAnalogCursor_*_&> @ 14a7979f0

FCommonAnalogCursor * __cdecl
UE::Core::Private::DereferenceIfNecessary<FCommonAnalogCursor,FCommonAnalogCursor_*_&>
          (FCommonAnalogCursor **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SCommonAnimatedSwitcher,SCommonAnimatedSwitcher_*_&> @ 14a797a10

SCommonAnimatedSwitcher * __cdecl
UE::Core::Private::DereferenceIfNecessary<SCommonAnimatedSwitcher,SCommonAnimatedSwitcher_*_&>
          (SCommonAnimatedSwitcher **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAnalogSlider,UAnalogSlider_*_&> @ 14a797a30

UAnalogSlider * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAnalogSlider,UAnalogSlider_*_&>(UAnalogSlider **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonActionWidget,UCommonActionWidget_*_&> @ 14a797a50

UCommonActionWidget * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonActionWidget,UCommonActionWidget_*_&>
          (UCommonActionWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonActivatableWidget,UCommonActivatableWidget_*_&> @ 14a797a70

UCommonActivatableWidget * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonActivatableWidget,UCommonActivatableWidget_*_&>
          (UCommonActivatableWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonActivatableWidgetContainerBase,UCommonActivatableWidgetContainerBase_*_&> @ 14a797a90

UCommonActivatableWidgetContainerBase * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UCommonActivatableWidgetContainerBase,UCommonActivatableWidgetContainerBase_*_&>
          (UCommonActivatableWidgetContainerBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonActivatableWidgetSwitcher,UCommonActivatableWidgetSwitcher_*_&> @ 14a797ab0

UCommonActivatableWidgetSwitcher * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UCommonActivatableWidgetSwitcher,UCommonActivatableWidgetSwitcher_*_&>
          (UCommonActivatableWidgetSwitcher **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonAnimatedSwitcher,UCommonAnimatedSwitcher_*_&> @ 14a797ad0

UCommonAnimatedSwitcher * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonAnimatedSwitcher,UCommonAnimatedSwitcher_*_&>
          (UCommonAnimatedSwitcher **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonBorder,UCommonBorder_*_&> @ 14a797af0

UCommonBorder * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonBorder,UCommonBorder_*_&>(UCommonBorder **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonBoundActionBar,UCommonBoundActionBar_*_&> @ 14a797b10

UCommonBoundActionBar * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonBoundActionBar,UCommonBoundActionBar_*_&>
          (UCommonBoundActionBar **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonBoundActionButton,UCommonBoundActionButton_*_&> @ 14a797b30

UCommonBoundActionButton * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonBoundActionButton,UCommonBoundActionButton_*_&>
          (UCommonBoundActionButton **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&> @ 14a797b50

UCommonButtonBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonButtonBase,UCommonButtonBase_*_&>
          (UCommonButtonBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&> @ 14a797b70

UCommonButtonInternalBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonButtonInternalBase,UCommonButtonInternalBase_*_&>
          (UCommonButtonInternalBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonCustomNavigation,UCommonCustomNavigation_*_&> @ 14a797b90

UCommonCustomNavigation * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonCustomNavigation,UCommonCustomNavigation_*_&>
          (UCommonCustomNavigation **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonDateTimeTextBlock,UCommonDateTimeTextBlock_*_&> @ 14a797bb0

UCommonDateTimeTextBlock * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonDateTimeTextBlock,UCommonDateTimeTextBlock_*_&>
          (UCommonDateTimeTextBlock **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonHardwareVisibilityBorder,UCommonHardwareVisibilityBorder_*_&> @ 14a797bd0

UCommonHardwareVisibilityBorder * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UCommonHardwareVisibilityBorder,UCommonHardwareVisibilityBorder_*_&>
          (UCommonHardwareVisibilityBorder **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonHierarchicalScrollBox,UCommonHierarchicalScrollBox_*_&> @ 14a797bf0

UCommonHierarchicalScrollBox * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UCommonHierarchicalScrollBox,UCommonHierarchicalScrollBox_*_&>
          (UCommonHierarchicalScrollBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonLazyImage,UCommonLazyImage_*_&> @ 14a797c10

UCommonLazyImage * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonLazyImage,UCommonLazyImage_*_&>
          (UCommonLazyImage **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonLazyWidget,UCommonLazyWidget_*_&> @ 14a797c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonLazyWidget * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonLazyWidget,UCommonLazyWidget_*_&>
          (UCommonLazyWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonLoadGuard,UCommonLoadGuard_*_&> @ 14a797c50

UCommonLoadGuard * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonLoadGuard,UCommonLoadGuard_*_&>
          (UCommonLoadGuard **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonNumericTextBlock,UCommonNumericTextBlock_*_&> @ 14a797c70

UCommonNumericTextBlock * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonNumericTextBlock,UCommonNumericTextBlock_*_&>
          (UCommonNumericTextBlock **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonRotator,UCommonRotator_*_&> @ 14a797c90

UCommonRotator * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonRotator,UCommonRotator_*_&>
          (UCommonRotator **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonTabListWidgetBase,UCommonTabListWidgetBase_*_&> @ 14a797cb0

UCommonTabListWidgetBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonTabListWidgetBase,UCommonTabListWidgetBase_*_&>
          (UCommonTabListWidgetBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&> @ 14a797cd0

UCommonUIActionRouterBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonUIActionRouterBase,UCommonUIActionRouterBase_*_&>
          (UCommonUIActionRouterBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonUIVisibilitySubsystem,UCommonUIVisibilitySubsystem_*_&> @ 14a797cf0

UCommonUIVisibilitySubsystem * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UCommonUIVisibilitySubsystem,UCommonUIVisibilitySubsystem_*_&>
          (UCommonUIVisibilitySubsystem **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonVideoPlayer,UCommonVideoPlayer_*_&> @ 14a797d10

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

UCommonVideoPlayer * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonVideoPlayer,UCommonVideoPlayer_*_&>
          (UCommonVideoPlayer **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCommonWidgetCarousel,UCommonWidgetCarousel_*_&> @ 14a797d30

UCommonWidgetCarousel * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCommonWidgetCarousel,UCommonWidgetCarousel_*_&>
          (UCommonWidgetCarousel **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UDEPRECATED_UCommonVisibilityWidgetBase,UDEPRECATED_UCommonVisibilityWidgetBase_*_&> @ 14a797d50

UDEPRECATED_UCommonVisibilityWidgetBase * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UDEPRECATED_UCommonVisibilityWidgetBase,UDEPRECATED_UCommonVisibilityWidgetBase_*_&>
          (UDEPRECATED_UCommonVisibilityWidgetBase **param_1)

{
  return *param_1;
}

// FindActivatableFromSlate<1> @ 14a799290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonActivatableWidget * __cdecl
UE::CommonUI::Private::FindActivatableFromSlate<1>
          (TSharedPtr<SWidget,1> *param_1,ULocalPlayer *param_2)

{
  UCommonActivatableWidget *pUVar1;
  TSharedRef<SWidget,1> *pTVar2;
  UCommonActivatableWidget *local_res8;
  <lambda_1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  local_res8 = (UCommonActivatableWidget *)0x0;
  if (param_1->Object != (SWidget *)0x0) {
    pTVar2 = TSharedPtr<SWidget,1>::ToSharedRef(param_1,&local_18);
    local_28.OwningActivatable = &local_res8;
    local_28.OwningLocalPlayer = param_2;
    ForEachParentWidget<1,_UE::CommonUI::Private::FindActivatableFromSlate<1>_::__l5::<lambda_1>_>
              (pTVar2,&local_28);
  }
  pUVar1 = local_res8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pUVar1;
}

// FindActivatableFromSlate<0> @ 14a799300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCommonActivatableWidget * __cdecl
UE::CommonUI::Private::FindActivatableFromSlate<0>
          (TSharedPtr<SWidget,1> *param_1,ULocalPlayer *param_2)

{
  UCommonActivatableWidget *pUVar1;
  TSharedRef<SWidget,1> *pTVar2;
  UCommonActivatableWidget *local_res8;
  <lambda_1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  local_res8 = (UCommonActivatableWidget *)0x0;
  if (param_1->Object != (SWidget *)0x0) {
    pTVar2 = TSharedPtr<SWidget,1>::ToSharedRef(param_1,&local_18);
    local_28.OwningActivatable = &local_res8;
    local_28.OwningLocalPlayer = param_2;
    ForEachParentWidget<0,_UE::CommonUI::Private::FindActivatableFromSlate<0>_::__l5::<lambda_1>_>
              (pTVar2,&local_28);
  }
  pUVar1 = local_res8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pUVar1;
}

