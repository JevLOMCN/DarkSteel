// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 9

// FStateTreeReference @ 14d4ebbb0

FStateTreeReference * __thiscall
FStateTreeReference::FStateTreeReference(FStateTreeReference *this,FStateTreeReference *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UStateTree *pUVar4;
  FScriptContainerElement *_Src;
  
  pUVar4 = (param_1->StateTree).field0_0x0.DebugPtr;
  (this->StateTree).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Parameters).Value.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->Parameters).Value.StructMemory = (uchar *)0x0;
  FInstancedStruct::InitializeAs
            (&(this->Parameters).Value,(param_1->Parameters).Value.ScriptStruct.field0_0x0.DebugPtr,
             (param_1->Parameters).Value.StructMemory);
  pTVar1 = &this->PropertyOverrides;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PropertyOverrides).ArrayMax;
  iVar3 = (param_1->PropertyOverrides).ArrayNum;
  _Src = (param_1->PropertyOverrides).AllocatorInstance.Data;
  (this->PropertyOverrides).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

// StaticStruct @ 14d5290c0

UScriptStruct * __cdecl FStateTreeReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeReference.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeReference,(UObject *)pUVar1,
                         L"StateTreeReference");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeReference.OuterSingleton;
}

// operator= @ 14d52d1c0

FStateTreeReference * __thiscall
FStateTreeReference::operator=(FStateTreeReference *this,FStateTreeReference *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UStateTree *pUVar5;
  FScriptContainerElement *_Src;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar5 = (param_1->StateTree).field0_0x0.DebugPtr, pUVar5 != (UStateTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->StateTree).field0_0x0 = (param_1->StateTree).field0_0x0;
  if (&this->Parameters != &param_1->Parameters) {
    FInstancedStruct::InitializeAs
              (&(this->Parameters).Value,
               (param_1->Parameters).Value.ScriptStruct.field0_0x0.DebugPtr,
               (param_1->Parameters).Value.StructMemory);
  }
  pTVar1 = &this->PropertyOverrides;
  if (pTVar1 != &param_1->PropertyOverrides) {
    iVar3 = (this->PropertyOverrides).ArrayMax;
    piVar2 = &(this->PropertyOverrides).ArrayMax;
    _Src = (param_1->PropertyOverrides).AllocatorInstance.Data;
    iVar4 = (param_1->PropertyOverrides).ArrayNum;
    (this->PropertyOverrides).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
      }
    }
  }
  return this;
}

// ConditionallySyncParameters @ 14d52db40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStateTreeReference::ConditionallySyncParameters(FStateTreeReference *this)

{
  UStateTree *pUVar1;
  bool bVar2;
  FName local_res10 [3];
  FString local_18;
  
  bVar2 = RequiresParametersSync(this);
  if ((bVar2) && (SyncParameters(this), 2 < (byte)LogStateTree._0_1_)) {
    pUVar1 = (this->StateTree).field0_0x0.DebugPtr;
    if (pUVar1 == (UStateTree *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
      local_res10[0].Number = *(uint *)&pUVar1->field_0x1c;
      ::FName::ToString(local_res10,&local_18);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostSerialize @ 14d532fb0

void __thiscall FStateTreeReference::PostSerialize(FStateTreeReference *this,FArchive *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  UPropertyBag *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FStateTreeCustomVersion::GUID);
  if ((iVar7 < 0xe) &&
     (pUVar8 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Parameters),
     pUVar8 != (UPropertyBag *)0x0)) {
    iVar7 = (pUVar8->PropertyDescs).ArrayNum;
    pFVar9 = (pUVar8->PropertyDescs).AllocatorInstance.Data;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar10 = pFVar9 + (longlong)iVar7 * 0x40;
    if (pFVar9 != pFVar10) {
      pTVar1 = &this->PropertyOverrides;
      pFVar11 = pFVar9 + 8;
      do {
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar2 <= pFVar11) &&
            (pFVar11 < pFVar2 + (longlong)(this->PropertyOverrides).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (this->PropertyOverrides).ArrayNum;
        if (iVar7 == (this->PropertyOverrides).ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&pTVar1->AllocatorInstance,&(this->PropertyOverrides).ArrayMax);
        }
        pFVar9 = pFVar9 + 0x40;
        (this->PropertyOverrides).ArrayNum = iVar7 + 1;
        uVar4 = *(undefined8 *)pFVar11;
        uVar5 = *(undefined8 *)(pFVar11 + 8);
        pFVar11 = pFVar11 + 0x40;
        pFVar2 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar2 = uVar4;
        *(undefined8 *)(pFVar2 + 8) = uVar5;
      } while (pFVar9 != pFVar10);
    }
  }
  return;
}

// RequiresParametersSync @ 14d5331e0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FStateTreeReference::RequiresParametersSync(FStateTreeReference *this)

{
  int iVar1;
  UStateTree *pUVar2;
  uchar *puVar3;
  uchar *puVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  UPropertyBag *pUVar10;
  UPropertyBag *pUVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  
  pUVar2 = (this->StateTree).field0_0x0.DebugPtr;
  if (pUVar2 == (UStateTree *)0x0) {
    if (((this->Parameters).Value.StructMemory != (uchar *)0x0) &&
       ((this->Parameters).Value.ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
      return true;
    }
    return false;
  }
  pUVar10 = FInstancedPropertyBag::GetPropertyBagStruct(&pUVar2->Parameters);
  pUVar11 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Parameters);
  if (pUVar10 == pUVar11) {
    if ((pUVar11 == (UPropertyBag *)0x0) || (pUVar10 == (UPropertyBag *)0x0)) {
      bVar7 = false;
    }
    else {
      puVar3 = (pUVar2->Parameters).Value.StructMemory;
      puVar4 = (this->Parameters).Value.StructMemory;
      if ((puVar3 == (uchar *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("SourceAddress",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeReference.cpp"
                             ,0x38,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if ((puVar4 == (uchar *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TargetAddress",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeReference.cpp"
                             ,0x39,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pFVar13 = (pUVar11->PropertyDescs).AllocatorInstance.Data;
      iVar1 = (pUVar11->PropertyDescs).ArrayNum;
      if ((iVar1 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pFVar14 = pFVar13 + (longlong)iVar1 * 0x40;
      for (; pFVar13 != pFVar14; pFVar13 = pFVar13 + 0x40) {
        pFVar12 = (this->PropertyOverrides).AllocatorInstance.Data;
        pFVar15 = pFVar12 + (longlong)(this->PropertyOverrides).ArrayNum * 0x10;
        if (pFVar12 != pFVar15) {
          do {
            if (((*(int *)(pFVar13 + 0x14) == *(int *)(pFVar12 + 0xc) &&
                 *(int *)(pFVar13 + 0x10) == *(int *)(pFVar12 + 8)) &&
                *(int *)(pFVar13 + 0xc) == *(int *)(pFVar12 + 4)) &&
                *(int *)(pFVar13 + 8) == *(int *)pFVar12) goto LAB_14d53335e;
            pFVar12 = pFVar12 + 0x10;
          } while (pFVar12 != pFVar15);
        }
        plVar5 = *(longlong **)(pFVar13 + 0x30);
        cVar9 = (**(code **)(*plVar5 + 0xb8))
                          (plVar5,puVar3 + *(int *)((longlong)plVar5 + 0x44),
                           puVar4 + *(int *)((longlong)plVar5 + 0x44),0);
        if (cVar9 == '\0') {
          return true;
        }
LAB_14d53335e:
      }
      bVar7 = false;
    }
  }
  else {
    bVar7 = true;
  }
  return bVar7;
}

// Serialize @ 14d5334b0

bool __thiscall
FStateTreeReference::Serialize(FStateTreeReference *this,FStructuredArchiveSlot param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  FGuid local_18;
  
  local_18 = FStateTreeCustomVersion::GUID;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&local_18);
  return false;
}

// SetPropertyOverridden @ 14d533a30

void __thiscall
FStateTreeReference::SetPropertyOverridden(FStateTreeReference *this,FGuid *param_1,bool param_2)

{
  if (param_2) {
    TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid_const_&>
              (&this->PropertyOverrides,param_1);
    return;
  }
  TArray<FGuid,TSizedDefaultAllocator<32>_>::Remove(&this->PropertyOverrides,param_1);
  ConditionallySyncParameters(this);
  return;
}

// SyncParameters @ 14d534210

void __thiscall FStateTreeReference::SyncParameters(FStateTreeReference *this)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FGuid *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UPropertyBag *this_00;
  FPropertyBagPropertyDesc *pFVar10;
  uint uVar11;
  undefined4 uStack_4c;
  TArrayView<FGuid_const_,int> local_48;
  FGuid local_38;
  
  if ((this->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0) {
    FInstancedStruct::Reset(&(this->Parameters).Value);
    return;
  }
  pFVar5 = (FGuid *)(this->PropertyOverrides).AllocatorInstance.Data;
  iVar9 = (this->PropertyOverrides).ArrayNum;
  pTVar1 = &this->PropertyOverrides;
  if ((iVar9 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar9;
  local_48.DataPtr = pFVar5;
  FInstancedPropertyBag::MigrateToNewBagInstanceWithOverrides
            (&this->Parameters,&((this->StateTree).field0_0x0.DebugPtr)->Parameters,&local_48);
  if (((this->PropertyOverrides).ArrayNum != 0) &&
     (this_00 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Parameters),
     this_00 != (UPropertyBag *)0x0)) {
    for (uVar11 = 0; (-1 < (int)uVar11 && ((int)uVar11 < (this->PropertyOverrides).ArrayNum));
        uVar11 = uVar11 + 1) {
      if (((int)uVar11 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
      local_38._0_8_ = *(undefined8 *)pFVar3;
      local_38._8_8_ = *(undefined8 *)(pFVar3 + 8);
      pFVar10 = UPropertyBag::FindPropertyDescByID(this_00,&local_38);
      if (pFVar10 == (FPropertyBagPropertyDesc *)0x0) {
        uVar8 = 0;
        if ((int)uVar11 < (this->PropertyOverrides).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar4 = (this->PropertyOverrides).ArrayNum;
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        iVar9 = iVar4 + ~uVar11;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar11 * 0x10,pFVar3 + (longlong)(iVar4 - iVar9) * 0x10,
                  (longlong)iVar9 << 4);
        }
        piVar2 = &(this->PropertyOverrides).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,&pTVar1->AllocatorInstance,(this->PropertyOverrides).ArrayNum,
                   &(this->PropertyOverrides).ArrayMax);
        uVar11 = uVar11 - 1;
      }
    }
  }
  return;
}

