// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 48

// TransferPersistentDataFromOldPin<UEdGraphPin_const_> @ 147b371b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UEdGraphPin::TransferPersistentDataFromOldPin<UEdGraphPin_const_>
          (UEdGraphPin *param_1,UEdGraphPin *param_2,ETransferPersistentDataMode param_3)

{
  int *piVar1;
  TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType *pFVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  longlong local_58;
  UEdGraphPin *local_50;
  UEdGraphPin *local_48 [2];
  
  uVar13 = (param_2->PinId).B;
  uVar12 = (param_2->PinId).C;
  uVar8 = (param_2->PinId).D;
  (param_1->PinId).A = (param_2->PinId).A;
  (param_1->PinId).B = uVar13;
  (param_1->PinId).C = uVar12;
  (param_1->PinId).D = uVar8;
  if ((param_1->Direction).Value == '\0') {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = (param_2->DefaultObject).field0_0x0.DebugPtr, pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    (param_1->DefaultObject).field0_0x0 = (param_2->DefaultObject).field0_0x0;
    iVar11 = (param_2->DefaultValue).Data.ArrayNum;
    iVar16 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar16 = 0;
    }
    ::FString::AssignRange
              (&param_1->DefaultValue,(wchar_t *)(param_2->DefaultValue).Data.AllocatorInstance.Data
               ,iVar16);
    FText::operator=(&param_1->DefaultTextValue,&param_2->DefaultTextValue);
    bVar4 = (param_1->PinType).field_0x55;
    (param_1->PinType).field_0x55 = (bVar4 ^ (param_2->PinType).field_0x55) & 0x20 ^ bVar4;
  }
  pFVar17 = (param_2->LinkedTo).AllocatorInstance.Data;
  iVar16 = (param_2->LinkedTo).ArrayNum;
  pFVar3 = pFVar17 + (longlong)iVar16 * 8;
LAB_147b37285:
  do {
    if ((param_2->LinkedTo).ArrayNum != iVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UEdGraphPin_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar17 == pFVar3) {
      if ((0 < (param_2->SubPins).ArrayNum) && ((param_1->SubPins).ArrayNum == 0)) {
        (**(code **)(_DAT_00000000 + 0x3c8))(0,param_1,1);
      }
      return;
    }
    local_58 = *(longlong *)pFVar17;
    if ((local_58 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OtherPin",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                            ,0x2f4,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar2 = &param_1->LinkedTo;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar6 + (longlong)(param_1->LinkedTo).ArrayMax * 8)
        ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar11 = (param_1->LinkedTo).ArrayNum;
    piVar1 = &(param_1->LinkedTo).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    lVar9 = local_58;
    (param_1->LinkedTo).ArrayNum = iVar11 + 1;
    *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_58;
    pFVar15 = (ForAnyElementType *)(local_58 + 200);
    pFVar6 = pFVar15->Data;
    for (pFVar14 = pFVar6; pFVar14 != pFVar6 + (longlong)*(int *)(local_58 + 0xd0) * 8;
        pFVar14 = pFVar14 + 8) {
      if (*(UEdGraphPin **)pFVar14 == param_2) {
        uVar13 = (uint)((longlong)pFVar14 - (longlong)pFVar6 >> 3);
        if (uVar13 != 0xffffffff) {
          if (param_3 == Move) {
            uVar12 = 0;
            if ((int)uVar13 < *(int *)(local_58 + 0xd0)) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar17 = pFVar17 + 8;
            *(UEdGraphPin **)(pFVar15->Data + (longlong)(int)uVar13 * 8) = param_1;
          }
          else {
            if (param_3 != Copy) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                                  ,0x30d,L"");
              if (bVar10) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              goto LAB_147b3744a;
            }
            local_50 = param_1;
            if (((pFVar6 <= (FScriptContainerElement *)&local_50) &&
                ((FScriptContainerElement *)&local_50 <
                 pFVar6 + (longlong)*(int *)(local_58 + 0xd4) * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = *(int *)(lVar9 + 0xd0);
            if (iVar11 == *(int *)(lVar9 + 0xd4)) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,pFVar15,(int *)(lVar9 + 0xd4));
            }
            pFVar6 = pFVar15->Data;
            *(int *)(lVar9 + 0xd0) = iVar11 + 1;
            memmove(pFVar6 + (longlong)(int)uVar13 * 8 + 8,pFVar6 + (longlong)(int)uVar13 * 8,
                    (longlong)(int)(iVar11 - uVar13) << 3);
            pFVar17 = pFVar17 + 8;
            *(UEdGraphPin **)(pFVar15->Data + (longlong)(int)uVar13 * 8) = local_50;
          }
          goto LAB_147b37285;
        }
        break;
      }
    }
    local_48[0] = param_1;
    if (((pFVar6 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar6 + (longlong)*(int *)(local_58 + 0xd4) * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar11 = *(int *)(lVar9 + 0xd0);
    if (iVar11 == *(int *)(lVar9 + 0xd4)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar15,(int *)(lVar9 + 0xd4));
    }
    *(int *)(lVar9 + 0xd0) = iVar11 + 1;
    *(UEdGraphPin **)(pFVar15->Data + (longlong)iVar11 * 8) = local_48[0];
LAB_147b3744a:
    pFVar17 = pFVar17 + 8;
  } while( true );
}

// TransferPersistentDataFromOldPin<UEdGraphPin> @ 147b37630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UEdGraphPin::TransferPersistentDataFromOldPin<UEdGraphPin>
          (UEdGraphPin *param_1,UEdGraphPin *param_2,ETransferPersistentDataMode param_3)

{
  int *piVar1;
  FString *pFVar2;
  FString *pFVar3;
  TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar4;
  byte bVar5;
  int iVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  longlong local_58;
  UEdGraphPin *local_50;
  UEdGraphPin *local_48 [2];
  
  uVar16 = (param_2->PinId).B;
  uVar15 = (param_2->PinId).C;
  uVar11 = (param_2->PinId).D;
  (param_1->PinId).A = (param_2->PinId).A;
  (param_1->PinId).B = uVar16;
  (param_1->PinId).C = uVar15;
  (param_1->PinId).D = uVar11;
  if ((param_1->Direction).Value == '\0') {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = (param_2->DefaultObject).field0_0x0.DebugPtr, pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    pFVar2 = &param_2->DefaultValue;
    pFVar3 = &param_1->DefaultValue;
    (param_1->DefaultObject).field0_0x0 = (param_2->DefaultObject).field0_0x0;
    if (pFVar3 != pFVar2) {
      pFVar8 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pFVar3->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->DefaultValue).Data.ArrayNum = (param_2->DefaultValue).Data.ArrayNum;
      (param_1->DefaultValue).Data.ArrayMax = (param_2->DefaultValue).Data.ArrayMax;
      (param_2->DefaultValue).Data.ArrayNum = 0;
      (param_2->DefaultValue).Data.ArrayMax = 0;
    }
    FText::operator=(&param_1->DefaultTextValue,&param_2->DefaultTextValue);
    bVar5 = (param_1->PinType).field_0x55;
    (param_1->PinType).field_0x55 = (bVar5 ^ (param_2->PinType).field_0x55) & 0x20 ^ bVar5;
  }
  pFVar19 = (param_2->LinkedTo).AllocatorInstance.Data;
  iVar6 = (param_2->LinkedTo).ArrayNum;
  pFVar8 = pFVar19 + (longlong)iVar6 * 8;
LAB_147b37712:
  do {
    if ((param_2->LinkedTo).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UEdGraphPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar19 == pFVar8) {
      if ((0 < (param_2->SubPins).ArrayNum) && ((param_1->SubPins).ArrayNum == 0)) {
        (**(code **)(_DAT_00000000 + 0x3c8))(0,param_1,1);
      }
      return;
    }
    local_58 = *(longlong *)pFVar19;
    if ((local_58 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("OtherPin",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                            ,0x2f4,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar4 = &param_1->LinkedTo;
    pFVar9 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar9 + (longlong)(param_1->LinkedTo).ArrayMax * 8)
        ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar14 = (param_1->LinkedTo).ArrayNum;
    piVar1 = &(param_1->LinkedTo).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar4->AllocatorInstance,piVar1);
    }
    lVar12 = local_58;
    (param_1->LinkedTo).ArrayNum = iVar14 + 1;
    *(longlong *)((pTVar4->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_58;
    pFVar18 = (ForAnyElementType *)(local_58 + 200);
    pFVar9 = pFVar18->Data;
    for (pFVar17 = pFVar9; pFVar17 != pFVar9 + (longlong)*(int *)(local_58 + 0xd0) * 8;
        pFVar17 = pFVar17 + 8) {
      if (*(UEdGraphPin **)pFVar17 == param_2) {
        uVar16 = (uint)((longlong)pFVar17 - (longlong)pFVar9 >> 3);
        if (uVar16 != 0xffffffff) {
          if (param_3 == Move) {
            uVar15 = 0;
            if ((int)uVar16 < *(int *)(local_58 + 0xd0)) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar19 = pFVar19 + 8;
            *(UEdGraphPin **)(pFVar18->Data + (longlong)(int)uVar16 * 8) = param_1;
          }
          else {
            if (param_3 != Copy) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                                  ,0x30d,L"");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              goto LAB_147b378d9;
            }
            local_50 = param_1;
            if (((pFVar9 <= (FScriptContainerElement *)&local_50) &&
                ((FScriptContainerElement *)&local_50 <
                 pFVar9 + (longlong)*(int *)(local_58 + 0xd4) * 8)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar14 = *(int *)(lVar12 + 0xd0);
            if (iVar14 == *(int *)(lVar12 + 0xd4)) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,pFVar18,(int *)(lVar12 + 0xd4));
            }
            pFVar9 = pFVar18->Data;
            *(int *)(lVar12 + 0xd0) = iVar14 + 1;
            memmove(pFVar9 + (longlong)(int)uVar16 * 8 + 8,pFVar9 + (longlong)(int)uVar16 * 8,
                    (longlong)(int)(iVar14 - uVar16) << 3);
            pFVar19 = pFVar19 + 8;
            *(UEdGraphPin **)(pFVar18->Data + (longlong)(int)uVar16 * 8) = local_50;
          }
          goto LAB_147b37712;
        }
        break;
      }
    }
    local_48[0] = param_1;
    if (((pFVar9 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar9 + (longlong)*(int *)(local_58 + 0xd4) * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar14 = *(int *)(lVar12 + 0xd0);
    if (iVar14 == *(int *)(lVar12 + 0xd4)) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar18,(int *)(lVar12 + 0xd4));
    }
    *(int *)(lVar12 + 0xd0) = iVar14 + 1;
    *(UEdGraphPin **)(pFVar18->Data + (longlong)iVar14 * 8) = local_48[0];
LAB_147b378d9:
    pFVar19 = pFVar19 + 8;
  } while( true );
}

// UEdGraphPin @ 147b3b0a0

UEdGraphPin * __thiscall
UEdGraphPin::UEdGraphPin(UEdGraphPin *this,UEdGraphNode *param_1,FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this->OwningNode = param_1;
  uVar1 = param_2->A;
  uVar2 = param_2->B;
  uVar3 = param_2->C;
  uVar4 = param_2->D;
  this->bWasTrashed = '\0';
  this->SourceIndex = -1;
  (this->PinId).A = uVar1;
  (this->PinId).B = uVar2;
  (this->PinId).C = uVar3;
  (this->PinId).D = uVar4;
  (this->PinName).ComparisonIndex = 0;
  (this->PinName).Number = 0;
  (this->Direction).Value = '\0';
  (this->PinToolTip).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PinToolTip).Data.ArrayNum = 0;
  (this->PinToolTip).Data.ArrayMax = 0;
  FEdGraphPinType::FEdGraphPinType(&this->PinType);
  (this->DefaultValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultValue).Data.ArrayNum = 0;
  (this->DefaultValue).Data.ArrayMax = 0;
  (this->AutogeneratedDefaultValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AutogeneratedDefaultValue).Data.ArrayNum = 0;
  (this->AutogeneratedDefaultValue).Data.ArrayMax = 0;
  (this->DefaultObject).field0_0x0.DebugPtr = (UObject *)0x0;
  FText::FText(&this->DefaultTextValue);
  (this->LinkedTo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkedTo).ArrayNum = 0;
  (this->LinkedTo).ArrayMax = 0;
  (this->SubPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubPins).ArrayNum = 0;
  (this->SubPins).ArrayMax = 0;
  this->ParentPin = (UEdGraphPin *)0x0;
  this->ReferencePassThroughConnection = (UEdGraphPin *)0x0;
  return this;
}

// ~UEdGraphPin @ 147b3d750

void __thiscall UEdGraphPin::~UEdGraphPin(UEdGraphPin *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  pFVar1 = (this->SubPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LinkedTo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->DefaultTextValue).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar1 = (this->AutogeneratedDefaultValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PinToolTip).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddStructReferencedObjects @ 147b44310

void __thiscall
UEdGraphPin::AddStructReferencedObjects(UEdGraphPin *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))
            (param_1,&(this->PinType).PinSubCategoryMemberReference,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147b44353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->DefaultObject,0,0);
  return;
}

// AreOrphanPinsEnabled @ 147b46d40

bool __cdecl UEdGraphPin::AreOrphanPinsEnabled(void)

{
  return GCVarDisableOrphanPins == 0;
}

// AssignByRefPassThroughConnection @ 147b46d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEdGraphPin::AssignByRefPassThroughConnection(UEdGraphPin *this,UEdGraphPin *param_1)

{
  undefined1 *puVar1;
  uchar uVar2;
  code *pcVar3;
  bool bVar4;
  UEdGraphNode *pUVar5;
  UEdGraphPin *pUVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_158;
  FName local_150;
  FName local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (param_1 != (UEdGraphPin *)0x0) {
    if ((this->OwningNode == (UEdGraphNode *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwningNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\EdGraph\\EdGraphPin.h"
                           ,0x1d4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar5 = this->OwningNode;
    if ((param_1->OwningNode == (UEdGraphNode *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwningNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\EdGraph\\EdGraphPin.h"
                           ,0x1d4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (pUVar5 == param_1->OwningNode) {
      uVar2 = (this->Direction).Value;
      if (uVar2 == (param_1->Direction).Value) {
        if (2 < (byte)LogBlueprint._0_1_) {
          pUVar5 = GetOwningNode(this);
          local_res20 = (FName)pUVar5->_padding_;
          ::FName::ToString(&local_res20,&local_e0);
          ::FName::ToString(&param_1->PinName,&local_f0);
          ::FName::ToString(&this->PinName,&local_100);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
        }
      }
      else if ((this->PinType).bIsReference == '\0') {
        if ((param_1->PinType).bIsReference == '\0') {
          pUVar6 = this;
          if (uVar2 == '\0') {
            pUVar6 = param_1;
            param_1 = this;
          }
          if (2 < (byte)LogBlueprint._0_1_) {
            pUVar5 = GetOwningNode(param_1);
            local_158 = (FName)pUVar5->_padding_;
            ::FName::ToString(&local_158,&local_b0);
            ::FName::ToString(&pUVar6->PinName,&local_c0);
            ::FName::ToString(&param_1->PinName,&local_d0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            }
          }
        }
        else if (2 < (byte)LogBlueprint._0_1_) {
          ::FName::ToString(&param_1->PinName,&local_80);
          pUVar5 = GetOwningNode(this);
          local_150 = (FName)pUVar5->_padding_;
          ::FName::ToString(&local_150,&local_90);
          ::FName::ToString(&this->PinName,&local_a0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
      }
      else if ((param_1->PinType).bIsReference == '\0') {
        if (2 < (byte)LogBlueprint._0_1_) {
          ::FName::ToString(&this->PinName,&local_50);
          pUVar5 = GetOwningNode(param_1);
          local_148 = (FName)pUVar5->_padding_;
          ::FName::ToString(&local_148,&local_60);
          ::FName::ToString(&param_1->PinName,&local_70);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        this->ReferencePassThroughConnection = param_1;
        param_1->ReferencePassThroughConnection = this;
      }
    }
    else if (2 < (byte)LogBlueprint._0_1_) {
      pUVar5 = GetOwningNode(param_1);
      local_res10 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_res10,&local_110);
      ::FName::ToString(&param_1->PinName,&local_120);
      pUVar5 = GetOwningNode(this);
      local_res18 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_res18,&local_130);
      ::FName::ToString(&this->PinName,&local_140);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// BreakAllPinLinks @ 147b48770

void __thiscall UEdGraphPin::BreakAllPinLinks(UEdGraphPin *this,bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_20 = (this->LinkedTo).ArrayNum;
  lVar5 = (longlong)local_20;
  pFVar1 = (this->LinkedTo).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
    iVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar1,lVar5 << 3);
    iVar3 = local_20;
  }
  pFVar1 = local_28.Data + (longlong)iVar3 * 8;
  FVar2.Data = local_28.Data;
  iVar4 = iVar3;
  while( true ) {
    if (iVar4 != iVar3) {
      `TCheckedPointerIterator<UEdGraphPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar2.Data == pFVar1) break;
    BreakLinkTo(this,*(UEdGraphPin **)FVar2.Data,param_2);
    FVar2.Data = FVar2.Data + 8;
    iVar4 = local_20;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// BreakLinkTo @ 147b48860

void __thiscall UEdGraphPin::BreakLinkTo(UEdGraphPin *this,UEdGraphPin *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  UEdGraphPin *local_res10 [2];
  UEdGraphPin *local_res20;
  UEdGraphPin *local_18;
  UEdGraphPin **local_10;
  
  if (param_1 != (UEdGraphPin *)0x0) {
    pFVar2 = (this->LinkedTo).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(this->LinkedTo).ArrayNum * 8;
    for (; local_res10[0] = param_1, pFVar2 != pFVar1; pFVar2 = pFVar2 + 8) {
      if (*(UEdGraphPin **)pFVar2 == param_1) {
        pFVar2 = (param_1->LinkedTo).AllocatorInstance.Data;
        pFVar1 = pFVar2 + (longlong)(param_1->LinkedTo).ArrayNum * 8;
        goto joined_r0x000147b488f1;
      }
    }
    pFVar2 = (param_1->LinkedTo).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(param_1->LinkedTo).ArrayNum * 8;
    if (pFVar2 != pFVar1) {
      while (*(UEdGraphPin **)pFVar2 != this) {
        pFVar2 = pFVar2 + 8;
        if (pFVar2 == pFVar1) {
          return;
        }
      }
      local_10 = local_res10;
      local_18 = this;
      `UEdGraphPin::BreakLinkTo'::__l17::<lambda_2>::operator()(&local_18);
    }
  }
  return;
joined_r0x000147b488f1:
  if (pFVar2 == pFVar1) goto LAB_147b48901;
  if (*(UEdGraphPin **)pFVar2 == this) {
    local_res20 = this;
    TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_>::Remove(&param_1->LinkedTo,&local_res20);
    goto LAB_147b48957;
  }
  pFVar2 = pFVar2 + 8;
  goto joined_r0x000147b488f1;
LAB_147b48901:
  if ((this->OwningNode != (UEdGraphNode *)0x0) &&
     (((uint)this->OwningNode->_padding_ >> 0xf & 1) == 0)) {
    pFVar2 = (param_1->LinkedTo).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(param_1->LinkedTo).ArrayNum * 8;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 8) {
      if (*(UEdGraphPin **)pFVar2 == this) goto LAB_147b48957;
    }
    local_10 = local_res10;
    local_18 = this;
    `UEdGraphPin::BreakLinkTo'::__l15::<lambda_1>::operator()(&local_18);
  }
LAB_147b48957:
  TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_>::Remove(&this->LinkedTo,local_res10);
  return;
}

// ConvertConnectedGhostNodesToRealNodes @ 147b4cb60

void __cdecl UEdGraphPin::ConvertConnectedGhostNodesToRealNodes(UEdGraphNode *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  
  if (((param_1 != (UEdGraphNode *)0x0) && (param_1->bUserSetEnabledState == '\0')) &&
     (param_1->EnabledState == Disabled)) {
    param_1->EnabledState = Enabled;
    param_1->field_0x5b = param_1->field_0x5b & 0xfb;
    ::FString::Empty(&param_1->NodeComment);
    local_res20 = (param_1->Pins).ArrayNum;
    uVar8 = (ulonglong)(int)local_res20;
    pFVar10 = (param_1->Pins).AllocatorInstance.Data;
    pFVar1 = pFVar10 + uVar8 * 8;
    while( true ) {
      if ((param_1->Pins).ArrayNum != (int)uVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UEdGraphPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar1) break;
      lVar4 = *(longlong *)pFVar10;
      puVar9 = *(undefined8 **)(lVar4 + 200);
      iVar3 = *(int *)(lVar4 + 0xd0);
      puVar2 = puVar9 + iVar3;
      while( true ) {
        if (*(int *)(lVar4 + 0xd0) != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UEdGraphPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (puVar9 == puVar2) break;
        plVar5 = (longlong *)*puVar9;
        if ((*plVar5 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OwningNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\EdGraph\\EdGraphPin.h"
                               ,0x1d4,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        ConvertConnectedGhostNodesToRealNodes((UEdGraphNode *)*plVar5,param_2);
        puVar9 = puVar9 + 1;
      }
      uVar8 = (ulonglong)local_res20;
      pFVar10 = pFVar10 + 8;
    }
  }
  return;
}

// CopyPersistentDataFromOldPin @ 147b4d470

void __thiscall UEdGraphPin::CopyPersistentDataFromOldPin(UEdGraphPin *this,UEdGraphPin *param_1)

{
  TransferPersistentDataFromOldPin<UEdGraphPin_const_>(this,param_1,Copy);
  return;
}

// CreatePin @ 147b4ea90

UEdGraphPin * __cdecl UEdGraphPin::CreatePin(UEdGraphNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  UEdGraphPin *pUVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  if (param_1 == (UEdGraphNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOwningNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                       ,0x1fd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UEdGraphPin *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = ::operator_new(0xf8);
  if (pUVar3 != (UEdGraphPin *)0x0) {
    pFVar4 = FGuid::NewGuid(&local_18);
    pUVar3 = UEdGraphPin(pUVar3,param_1,pFVar4);
    return pUVar3;
  }
  return (UEdGraphPin *)0x0;
}

// CreatePinFromDeprecatedPin @ 147b4eb10

UEdGraphPin * __cdecl UEdGraphPin::CreatePinFromDeprecatedPin(UEdGraphPin_Deprecated *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UEdGraphNode *pUVar6;
  UEdGraphPin *pUVar7;
  FGuid *pFVar8;
  UEdGraphPin *local_28;
  FGuid local_20;
  
  if (param_1 == (UEdGraphPin_Deprecated *)0x0) {
    return (UEdGraphPin *)0x0;
  }
  pUVar6 = CastChecked<UEdGraphNode,UObject>((UObject *)param_1->_padding_);
  if (pUVar6 == (UEdGraphNode *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOwningNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                       ,0x1fd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UEdGraphPin *)(*pcVar3)();
      return pUVar7;
    }
  }
  pUVar7 = ::operator_new(0xf8);
  local_28 = (UEdGraphPin *)0x0;
  if (pUVar7 != (UEdGraphPin *)0x0) {
    pFVar8 = FGuid::NewGuid(&local_20);
    local_28 = UEdGraphPin(pUVar7,pUVar6,pFVar8);
  }
  pFVar2 = (pUVar6->Pins).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(pUVar6->Pins).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UEdGraphPin *)(*pcVar3)();
      return pUVar7;
    }
  }
  iVar5 = (pUVar6->Pins).ArrayNum;
  piVar1 = &(pUVar6->Pins).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pUVar6->Pins).AllocatorInstance,piVar1);
  }
  (pUVar6->Pins).ArrayNum = iVar5 + 1;
  *(UEdGraphPin **)((pUVar6->Pins).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_28;
  InitFromDeprecatedPin(local_28,param_1);
  return local_28;
}

// DestroyImpl @ 147b510a0

void __thiscall UEdGraphPin::DestroyImpl(UEdGraphPin *this,bool param_1)

{
  int *piVar1;
  TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FPinDeletionQueue *pFVar9;
  uint uVar10;
  longlong lVar11;
  UEdGraphPin *local_res8;
  UEdGraphPin *local_38 [2];
  
  if (param_1) {
    BreakAllPinLinks(this,false,true);
    if (this->ParentPin != (UEdGraphPin *)0x0) {
      local_res8 = this;
      TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_>::Remove
                (&this->ParentPin->SubPins,&local_res8);
    }
  }
  else {
    piVar1 = &(this->LinkedTo).ArrayMax;
    (this->LinkedTo).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->LinkedTo).AllocatorInstance,0,piVar1);
    }
  }
  pTVar2 = &this->SubPins;
  uVar10 = (this->SubPins).ArrayNum - 1;
  this->OwningNode = (UEdGraphNode *)0x0;
  if (-1 < (int)uVar10) {
    lVar11 = (longlong)(int)uVar10 * 8;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->SubPins).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)((pTVar2->AllocatorInstance).Data + lVar11);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x25) & 1) == 0)) {
        uVar7 = 0;
        if ((int)uVar10 < (this->SubPins).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        DestroyImpl(*(UEdGraphPin **)((pTVar2->AllocatorInstance).Data + lVar11),param_1);
      }
      lVar11 = lVar11 + -8;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  (this->SubPins).ArrayNum = 0;
  if ((this->SubPins).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,&(this->SubPins).ArrayMax);
  }
  this->ParentPin = (UEdGraphPin *)0x0;
  if (this->ReferencePassThroughConnection != (UEdGraphPin *)0x0) {
    if ((this->ReferencePassThroughConnection->ReferencePassThroughConnection != this) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1606850396188309723>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                           ,0x725,
                           "ReferencePassThroughConnection->ReferencePassThroughConnection == this")
       , bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this->ReferencePassThroughConnection->ReferencePassThroughConnection = (UEdGraphPin *)0x0;
    this->ReferencePassThroughConnection = (UEdGraphPin *)0x0;
  }
  this->bWasTrashed = '\x01';
  local_38[0] = this;
  pFVar9 = FPinDeletionQueue::Get();
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar9->PinsToDeleteLock);
  pFVar4 = (pFVar9->PinsToDelete).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)(pFVar9->PinsToDelete).ArrayMax * 8)
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (pFVar9->PinsToDelete).ArrayNum;
  piVar1 = &(pFVar9->PinsToDelete).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar9->PinsToDelete).AllocatorInstance,piVar1);
  }
  (pFVar9->PinsToDelete).ArrayNum = iVar8 + 1;
  *(UEdGraphPin **)((pFVar9->PinsToDelete).AllocatorInstance.Data + (longlong)iVar8 * 8) =
       local_38[0];
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar9->PinsToDeleteLock);
  return;
}

// DoesDefaultValueMatchAutogenerated @ 147b51950

bool __thiscall UEdGraphPin::DoesDefaultValueMatchAutogenerated(UEdGraphPin *this)

{
  return false;
}

// ExportTextItem @ 147b603e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UEdGraphPin::ExportTextItem(UEdGraphPin *this,FString *param_1,int param_2)

{
  byte bVar1;
  TObjectPtr<UObject>_u_0 this_00;
  code *pcVar2;
  FProperty *this_01;
  undefined1 uVar3;
  int iVar4;
  FNameProperty *pFVar5;
  FStrProperty *pFVar6;
  FTextProperty *pFVar7;
  UClass *pUVar8;
  UEnum *this_02;
  UPackage *pUVar9;
  FString *pFVar10;
  int iVar11;
  bool bVar12;
  TFieldIterator<FProperty> local_268;
  FString local_250;
  FGuid local_240;
  FGuid local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  wchar_t *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar5 = GetDefault<FNameProperty>();
  pFVar6 = GetDefault<FStrProperty>();
  pFVar7 = GetDefault<FTextProperty>();
  GetDefault<FBoolProperty>();
  iVar11 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_240.A = 0;
    local_240.B = 0;
    local_240.C = 0;
    local_240.D = 0;
    UEdGraphPin(&DefaultPin,(UEdGraphNode *)0x0,&local_240);
    atexit(`UEdGraphPin::ExportTextItem'::__l2::_dynamic_atexit_destructor_for__DefaultPin__);
    _Init_thread_footer(&::_TSS0);
  }
  ::FString::AppendChars(param_1,"(",1);
  ::FString::ConcatFC(&local_220,&PinHelpers::PinIdName,L"=");
  iVar4 = iVar11;
  if (local_220.Data.ArrayNum != 0) {
    iVar4 = local_220.Data.ArrayNum + -1;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_220.Data.AllocatorInstance.Data,iVar4);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  local_230.A = 0;
  local_230.B = 0;
  local_230.C = 0;
  local_230.D = 0;
  FGuid::ExportTextItem(&this->PinId,param_1,&local_230,(UObject *)0x0,param_2,(UObject *)0x0);
  ::FString::AppendChar(param_1,L',');
  if (this->PinName != DefaultPin.PinName) {
    ::FString::ConcatFC(&local_210,&PinHelpers::PinNameName,L"=");
    iVar4 = iVar11;
    if (local_210.Data.ArrayNum != 0) {
      iVar4 = local_210.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_210.Data.AllocatorInstance.Data,iVar4);
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)pFVar5 + 0xe0))(pFVar5,param_1,&this->PinName,0,0,0,param_2,0);
    ::FString::AppendChar(param_1,L',');
  }
  iVar4 = (this->PinToolTip).Data.ArrayNum;
  if (iVar4 == DefaultPin.PinToolTip.Data.ArrayNum) {
    if (1 < iVar4) {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->PinToolTip).Data.AllocatorInstance.Data,
                         (wchar_t *)DefaultPin.PinToolTip.Data.AllocatorInstance.Data);
      bVar12 = iVar4 == 0;
      goto LAB_147b605a0;
    }
  }
  else {
    bVar12 = iVar4 + DefaultPin.PinToolTip.Data.ArrayNum == 1;
LAB_147b605a0:
    if (!bVar12) {
      ::FString::ConcatFC(&local_200,&PinHelpers::PinToolTipName,L"=");
      iVar4 = iVar11;
      if (local_200.Data.ArrayNum != 0) {
        iVar4 = local_200.Data.ArrayNum + -1;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_200.Data.AllocatorInstance.Data,iVar4);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      (**(code **)(*(longlong *)pFVar6 + 0xe0))(pFVar6,param_1,&this->PinToolTip,0,0,0,param_2,0);
      ::FString::AppendChar(param_1,L',');
    }
  }
  bVar1 = (this->Direction).Value;
  if (bVar1 != DefaultPin.Direction.Value) {
    iStack_120 = 0x23;
    local_128 = L"/Script/Engine.EEdGraphPinDirection";
    pUVar8 = Z_Construct_UClass_UEnum_NoRegister();
    local_88._12_4_ = uStack_11c;
    local_88.Size = iStack_120;
    local_88.DataPtr = local_128;
    this_02 = (UEnum *)StaticFindObject(pUVar8,(UObject *)0x0,&local_88,None);
    if (this_02 == (UEnum *)0x0) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`private:_static_class_FString___cdecl_UEnum::GetValueAsString_Internal(wchar_t_const*___ptr64,__int64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogClass);
    }
    UEnum::GetNameStringByValue(this_02,&local_118,(ulonglong)bVar1);
    ::FString::ConcatFC(&local_1f0,&PinHelpers::DirectionName,L"=");
    iVar4 = iVar11;
    if (local_1f0.Data.ArrayNum != 0) {
      iVar4 = local_1f0.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_1f0.Data.AllocatorInstance.Data,iVar4);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)pFVar6 + 0xe0))(pFVar6,param_1,&local_118,0,0,0,param_2,0);
    ::FString::AppendChar(param_1,L',');
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if (Z_Registration_Info_UScriptStruct_FEdGraphPinType.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FEdGraphPinType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinType,(UObject *)pUVar9,
                         L"EdGraphPinType");
  }
  if (Z_Registration_Info_UScriptStruct_FEdGraphPinType.OuterSingleton == (UScriptStruct *)0x0) {
    local_268.Field = (FField *)0x0;
  }
  else {
    local_268.Field =
         (FField *)(Z_Registration_Info_UScriptStruct_FEdGraphPinType.OuterSingleton)->_padding_;
  }
  local_268.InterfaceIndex = -1;
  local_268.bIncludeSuper = true;
  local_268.bIncludeDeprecated = true;
  local_268.bIncludeInterface = false;
  local_268.Struct = (UStruct *)Z_Registration_Info_UScriptStruct_FEdGraphPinType.OuterSingleton;
  TFieldIterator<FProperty>::IterateToNext(&local_268);
  this_01 = (FProperty *)local_268.Field;
  while (local_268.Field = (FField *)this_01, this_01 != (FProperty *)0x0) {
    bVar12 = FProperty::ShouldPort(this_01,0);
    if (bVar12) {
      local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_250.Data.ArrayNum = 0;
      local_250.Data.ArrayMax = 0;
      if ((this_01->ArrayDim < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      if ((&this->PinType == (FEdGraphPinType *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      iVar4 = this_01->Offset_Internal;
      if ((this_01->ArrayDim < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      (**(code **)(this_01->_padding_ + 0xe0))
                (this_01,&local_250,
                 (longlong)&(this->PinType).PinCategory.ComparisonIndex.Value + (longlong)iVar4,0,
                 (longlong)this_01->Offset_Internal + 0x155204d08,0,param_2,0);
      if (1 < local_250.Data.ArrayNum) {
        ::FString::FString(&local_d8,"=");
        bVar12 = IsThisNotNull(this_01,"FField::GetName");
        if (bVar12) {
          ::FName::ToString((FName *)&this_01->_padding_,&local_1d0);
        }
        else {
          ::FString::FString(&local_1d0,L"None");
        }
        ::FString::ConcatFC(&local_e8,&PinHelpers::PinTypeName,L".");
        ::FString::ConcatFF(&local_f8,&local_e8,&local_1d0);
        ::FString::ConcatFF(&local_108,&local_f8,&local_d8);
        ::FString::ConcatFF(&local_1e0,&local_108,&local_250);
        iVar4 = 0;
        if (local_1e0.Data.ArrayNum != 0) {
          iVar4 = local_1e0.Data.ArrayNum + -1;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,iVar4);
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChar(param_1,L',');
      }
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
    }
    local_268.Field = (FField *)this_01->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_268);
    this_01 = (FProperty *)local_268.Field;
  }
  iVar4 = (this->DefaultValue).Data.ArrayNum;
  if (iVar4 == DefaultPin.DefaultValue.Data.ArrayNum) {
    if (1 < iVar4) {
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->DefaultValue).Data.AllocatorInstance.Data,
                         (wchar_t *)DefaultPin.DefaultValue.Data.AllocatorInstance.Data);
      bVar12 = iVar4 == 0;
      goto LAB_147b60a66;
    }
  }
  else {
    bVar12 = iVar4 + DefaultPin.DefaultValue.Data.ArrayNum == 1;
LAB_147b60a66:
    if (!bVar12) {
      ::FString::ConcatFC(&local_1c0,&PinHelpers::DefaultValueName,L"=");
      iVar4 = iVar11;
      if (local_1c0.Data.ArrayNum != 0) {
        iVar4 = local_1c0.Data.ArrayNum + -1;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_1c0.Data.AllocatorInstance.Data,iVar4);
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      (**(code **)(*(longlong *)pFVar6 + 0xe0))(pFVar6,param_1,&this->DefaultValue,0,0,0,param_2,0);
      ::FString::AppendChar(param_1,L',');
    }
  }
  iVar4 = (this->AutogeneratedDefaultValue).Data.ArrayNum;
  if (iVar4 == DefaultPin.AutogeneratedDefaultValue.Data.ArrayNum) {
    if (iVar4 < 2) goto LAB_147b60ba2;
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->AutogeneratedDefaultValue).Data.AllocatorInstance.Data,
                       (wchar_t *)DefaultPin.AutogeneratedDefaultValue.Data.AllocatorInstance.Data);
    bVar12 = iVar4 == 0;
  }
  else {
    bVar12 = iVar4 + DefaultPin.AutogeneratedDefaultValue.Data.ArrayNum == 1;
  }
  if (!bVar12) {
    ::FString::ConcatFC(&local_1b0,&PinHelpers::AutogeneratedDefaultValueName,L"=");
    iVar4 = iVar11;
    if (local_1b0.Data.ArrayNum != 0) {
      iVar4 = local_1b0.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_1b0.Data.AllocatorInstance.Data,iVar4);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)pFVar6 + 0xe0))
              (pFVar6,param_1,&this->AutogeneratedDefaultValue,0,0,0,param_2,0);
    ::FString::AppendChar(param_1,L',');
  }
LAB_147b60ba2:
  this_00 = (TObjectPtr<UObject>_u_0)(this->DefaultObject).field0_0x0.DebugPtr;
  if ((TObjectPtr<UObject>_u_0)this_00.DebugPtr != DefaultPin.DefaultObject.field0_0x0) {
    if (this_00.DebugPtr == (UObject *)0x0) {
      ::FString::FString(&local_190,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)this_00.DebugPtr,&local_190,(UObject *)0x0);
    }
    ::FString::ConcatFC(&local_1a0,&PinHelpers::DefaultObjectName,L"=");
    iVar4 = iVar11;
    if (local_1a0.Data.ArrayNum != 0) {
      iVar4 = local_1a0.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_1a0.Data.AllocatorInstance.Data,iVar4);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)pFVar6 + 0xe0))(pFVar6,param_1,&local_190,0,0,0,param_2,0);
    ::FString::AppendChar(param_1,L',');
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = FText::EqualTo(&this->DefaultTextValue,&DefaultPin.DefaultTextValue,Default);
  if (!bVar12) {
    ::FString::ConcatFC(&local_180,&PinHelpers::DefaultTextValueName,L"=");
    iVar4 = iVar11;
    if (local_180.Data.ArrayNum != 0) {
      iVar4 = local_180.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_180.Data.AllocatorInstance.Data,iVar4);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)pFVar7 + 0xe0))
              (pFVar7,param_1,&this->DefaultTextValue,0,0,0,param_2,0);
    ::FString::AppendChar(param_1,L',');
  }
  if (0 < (this->LinkedTo).ArrayNum) {
    pFVar10 = ExportText_PinArray(&local_78,&this->LinkedTo);
    ::FString::ConcatFC(&local_c8,&PinHelpers::LinkedToName,L"=");
    ::FString::ConcatFF(&local_170,&local_c8,pFVar10);
    iVar4 = iVar11;
    if (local_170.Data.ArrayNum != 0) {
      iVar4 = local_170.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_170.Data.AllocatorInstance.Data,iVar4);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L',');
  }
  if (0 < (this->SubPins).ArrayNum) {
    pFVar10 = ExportText_PinArray(&local_68,&this->SubPins);
    ::FString::ConcatFC(&local_b8,&PinHelpers::SubPinsName,L"=");
    ::FString::ConcatFF(&local_160,&local_b8,pFVar10);
    iVar4 = iVar11;
    if (local_160.Data.ArrayNum != 0) {
      iVar4 = local_160.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_160.Data.AllocatorInstance.Data,iVar4);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L',');
  }
  if (this->ParentPin != (UEdGraphPin *)0x0) {
    pFVar10 = ExportText_PinReference(&local_58,this->ParentPin);
    ::FString::ConcatFC(&local_a8,&PinHelpers::ParentPinName,L"=");
    ::FString::ConcatFF(&local_150,&local_a8,pFVar10);
    iVar4 = iVar11;
    if (local_150.Data.ArrayNum != 0) {
      iVar4 = local_150.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_150.Data.AllocatorInstance.Data,iVar4);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L',');
  }
  if (this->ReferencePassThroughConnection != (UEdGraphPin *)0x0) {
    pFVar10 = ExportText_PinReference(&local_48,this->ReferencePassThroughConnection);
    ::FString::ConcatFC(&local_98,&PinHelpers::ReferencePassThroughConnectionName,L"=");
    ::FString::ConcatFF(&local_140,&local_98,pFVar10);
    if (local_140.Data.ArrayNum != 0) {
      iVar11 = local_140.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_140.Data.AllocatorInstance.Data,iVar11);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L',');
  }
  ::FString::AppendChars(param_1,")",1);
  return true;
}

// ExportText_PinArray @ 147b61030

FString * __cdecl
UEdGraphPin::ExportText_PinArray
          (FString *__return_storage_ptr__,
          TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FString *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendChars(__return_storage_ptr__,"(",1);
  iVar2 = param_1->ArrayNum;
  if (0 < iVar2) {
    pFVar5 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UEdGraphPin_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      pFVar4 = ExportText_PinReference(&local_28,*(UEdGraphPin **)pFVar5);
      iVar3 = (pFVar4->Data).ArrayNum;
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar6);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChar(__return_storage_ptr__,L',');
      pFVar5 = pFVar5 + 8;
    }
  }
  ::FString::AppendChars(__return_storage_ptr__,")",1);
  return __return_storage_ptr__;
}

// ExportText_PinReference @ 147b61110

FString * __cdecl
UEdGraphPin::ExportText_PinReference(FString *__return_storage_ptr__,UEdGraphPin *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if (param_1 == (UEdGraphPin *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    bVar2 = param_1->OwningNode == (UEdGraphNode *)0x0;
    if (bVar2) {
      pFVar1 = ::FString::FString(&local_28,L"null");
    }
    else {
      local_res10 = (FName)param_1->OwningNode->_padding_;
      ::FName::ToString(&local_res10,&local_58);
      pFVar1 = &local_58;
    }
    local_48.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    local_48.Data.ArrayMax = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
    if (bVar2) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((!bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    FGuid::AppendString(&param_1->PinId,&local_58,Digits);
    ::FString::FString(&local_28," ");
    ::FString::ConcatFF(&local_38,&local_48,&local_28);
    ::FString::ConcatFF(__return_storage_ptr__,&local_38,&local_58);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// FindPinCreatedFromDeprecatedPin @ 147b615d0

UEdGraphPin * __cdecl UEdGraphPin::FindPinCreatedFromDeprecatedPin(UEdGraphPin_Deprecated *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UEdGraphNode *pUVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  UEdGraphPin *pUVar7;
  uint uVar8;
  TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,FGuid>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,FGuid,0>,FDefaultSetAllocator>
  *this;
  uint uVar9;
  uint uVar10;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if (param_1 != (UEdGraphPin_Deprecated *)0x0) {
    pUVar3 = CastChecked<UEdGraphNode,UObject>((UObject *)param_1->_padding_);
    this = (TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,FGuid>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,FGuid,0>,FDefaultSetAllocator>
            *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x8fa0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = (FWeakObjectPtr)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    local_res10 = local_res8;
    iVar2 = TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,FGuid>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,FGuid,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr>_>
                      (this,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                       (TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr> *)&local_res10)
    ;
    if ((iVar2 == -1) || (lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&this->Elements, lVar4 == 0)
       ) {
      uVar6 = 0;
      uVar8 = uVar6;
      uVar10 = uVar6;
      uVar9 = uVar6;
    }
    else {
      uVar6 = *(uint *)(lVar4 + 0x10);
      uVar8 = *(uint *)(lVar4 + 8);
      uVar10 = *(uint *)(lVar4 + 0x14);
      uVar9 = *(uint *)(lVar4 + 0xc);
    }
    pUVar7 = (UEdGraphPin *)0x0;
    if (((uVar10 != 0 || uVar6 != 0) || uVar9 != 0) || uVar8 != 0) {
      pFVar5 = (pUVar3->Pins).AllocatorInstance.Data;
      pFVar1 = pFVar5 + (longlong)(pUVar3->Pins).ArrayNum * 8;
      while ((pUVar7 = (UEdGraphPin *)0x0, pFVar5 != pFVar1 &&
             ((pUVar7 = *(UEdGraphPin **)pFVar5, pUVar7 == (UEdGraphPin *)0x0 ||
              (((uVar10 != (pUVar7->PinId).D || uVar6 != (pUVar7->PinId).C) ||
               uVar9 != (pUVar7->PinId).B) || uVar8 != (pUVar7->PinId).A))))) {
        pFVar5 = pFVar5 + 8;
      }
    }
    return pUVar7;
  }
  return (UEdGraphPin *)0x0;
}

// GetDefaultAsString @ 147b65470

FString * __thiscall
UEdGraphPin::GetDefaultAsString(UEdGraphPin *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString local_18;
  
  if ((this->DefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
    FObjectPtr::GetPathName((FObjectPtr *)&this->DefaultObject,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar1 = FText::IsEmpty(&this->DefaultTextValue);
  if (!bVar1) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FTextStringHelper::WriteToBuffer(&local_18,&this->DefaultTextValue,false,false);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,&this->DefaultValue);
  return __return_storage_ptr__;
}

// GetDefaultAsText @ 147b65530

FText * __thiscall UEdGraphPin::GetDefaultAsText(UEdGraphPin *this,FText *__return_storage_ptr__)

{
  int iVar1;
  UObjectBaseUtility *this_00;
  ITextData *pIVar2;
  bool bVar3;
  FString *pFVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_18;
  
  this_00 = (UObjectBaseUtility *)(this->DefaultObject).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    bVar3 = FText::IsEmpty(&this->DefaultTextValue);
    if (!bVar3) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar2 = (this->DefaultTextValue).TextData.Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      __return_storage_ptr__->Flags = (this->DefaultTextValue).Flags;
      return __return_storage_ptr__;
    }
    iVar1 = (this->DefaultValue).Data.ArrayNum;
    if (1 < iVar1) {
      local_18.DataPtr = (wchar_t *)(this->DefaultValue).Data.AllocatorInstance.Data;
      local_18.Size = iVar1 + -1;
      FText::AsCultureInvariant(__return_storage_ptr__,&local_18);
      return __return_storage_ptr__;
    }
    pFVar5 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar5);
  }
  else {
    pFVar4 = UObjectBaseUtility::GetPathName(this_00,(FString *)&local_18,(UObject *)0x0);
    FText::AsCultureInvariant(__return_storage_ptr__,pFVar4);
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetLinkInfoString @ 147b67f70

FString * __thiscall
UEdGraphPin::GetLinkInfoString
          (UEdGraphPin *this,FString *__return_storage_ptr__,FString *param_1,FString *param_2,
          UEdGraphPin *param_3)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOwningNode @ 147b6a6e0

UEdGraphNode * __thiscall UEdGraphPin::GetOwningNode(UEdGraphPin *this)

{
  code *pcVar1;
  bool bVar2;
  UEdGraphNode *pUVar3;
  
  if (this->OwningNode != (UEdGraphNode *)0x0) {
    return this->OwningNode;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("OwningNode",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\EdGraph\\EdGraphPin.h"
                     ,0x1d4,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UEdGraphNode *)(*pcVar1)();
    return pUVar3;
  }
  return this->OwningNode;
}

// GetPrimaryTerminalType @ 147b6b130

FEdGraphTerminalType * __thiscall
UEdGraphPin::GetPrimaryTerminalType(UEdGraphPin *this,FEdGraphTerminalType *__return_storage_ptr__)

{
  undefined8 local_res8;
  
  (__return_storage_ptr__->TerminalCategory).ComparisonIndex = 0;
  (__return_storage_ptr__->TerminalCategory).Number = 0;
  (__return_storage_ptr__->TerminalSubCategory).ComparisonIndex = 0;
  (__return_storage_ptr__->TerminalSubCategory).Number = 0;
  (__return_storage_ptr__->TerminalSubCategoryObject).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=
            (&(__return_storage_ptr__->TerminalSubCategoryObject).WeakPtr,(FObjectPtr)&local_res8);
  __return_storage_ptr__->bTerminalIsConst = false;
  __return_storage_ptr__->bTerminalIsWeakPointer = false;
  __return_storage_ptr__->bTerminalIsUObjectWrapper = false;
  __return_storage_ptr__->TerminalCategory = (this->PinType).PinCategory;
  __return_storage_ptr__->TerminalSubCategory = (this->PinType).PinSubCategory;
  (__return_storage_ptr__->TerminalSubCategoryObject).WeakPtr =
       (this->PinType).PinSubCategoryObject.WeakPtr;
  __return_storage_ptr__->bTerminalIsConst = (this->PinType).bIsConst;
  __return_storage_ptr__->bTerminalIsWeakPointer = (this->PinType).bIsWeakPointer;
  __return_storage_ptr__->bTerminalIsUObjectWrapper = (this->PinType).bIsUObjectWrapper;
  return __return_storage_ptr__;
}

// GetSchema @ 147b6e9d0

UEdGraphSchema * __thiscall UEdGraphPin::GetSchema(UEdGraphPin *this)

{
  return (UEdGraphSchema *)0x0;
}

// HasAnyConnections @ 147b73760

bool __thiscall UEdGraphPin::HasAnyConnections(UEdGraphPin *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->SubPins).ArrayNum;
  bVar3 = false;
  if (0 < iVar2) {
    pFVar4 = (this->SubPins).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->SubPins).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UEdGraphPin_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((pFVar4 == pFVar1) || (bVar3 = HasAnyConnections(*(UEdGraphPin **)pFVar4), bVar3)) break;
      pFVar4 = pFVar4 + 8;
    }
    return bVar3;
  }
  return 0 < (this->LinkedTo).ArrayNum;
}

// ImportTextItem @ 147b73810

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UEdGraphPin::ImportTextItem
          (UEdGraphPin *this,wchar_t **param_1,int param_2,UObject *param_3,FOutputDevice *param_4)

{
  wchar_t wVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  EPinResolveResult EVar6;
  int iVar7;
  FProperty *this_00;
  UClass *pUVar8;
  UPackage *pUVar9;
  FProperty *pFVar10;
  wchar_t *pwVar11;
  size_t sVar12;
  UObject *pUVar13;
  TTuple<FName,__int64> *pTVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  UEdGraphPin **ppUVar17;
  FText *pFVar18;
  FString *pFVar19;
  bool bVar20;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  UObject *local_res20;
  EPinResolveType EVar21;
  FString local_1b8;
  UEnum *local_1a8;
  FString local_1a0;
  FName local_190;
  FString local_188;
  wchar_t *local_178;
  undefined8 local_170;
  FBoolProperty *local_168;
  FProperty *local_160;
  FProperty *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  FProperty *local_140;
  FString local_138;
  FString local_128;
  wchar_t *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FString local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  TTuple<FName,__int64> local_58;
  
  local_150 = 0;
  uStack_148 = 0;
  local_res10 = 0;
  (this->PinId).A = 0;
  (this->PinId).B = 0;
  (this->PinId).C = 0;
  (this->PinId).D = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  local_158 = (FProperty *)GetDefault<FNameProperty>();
  this_00 = (FProperty *)GetDefault<FStrProperty>();
  local_140 = this_00;
  local_160 = (FProperty *)GetDefault<FTextProperty>();
  local_168 = GetDefault<FBoolProperty>();
  local_b8 = L"/Script/Engine.EEdGraphPinDirection";
  iStack_b0 = 0x23;
  pUVar8 = Z_Construct_UClass_UEnum_NoRegister();
  local_98._12_4_ = uStack_ac;
  local_98.Size = iStack_b0;
  local_98.DataPtr = local_b8;
  local_1a8 = (UEnum *)StaticFindObjectChecked(pUVar8,(UObject *)0x0,&local_98,None);
  pwVar15 = *param_1;
  pwVar11 = pwVar15;
  while ((pwVar11 != (wchar_t *)0x0 && (iVar7 = iswspace(*pwVar15), iVar7 != 0))) {
    *param_1 = *param_1 + 1;
    pwVar11 = *param_1;
    pwVar15 = *param_1;
  }
  if (**param_1 == L'(') {
    pwVar15 = *param_1 + 1;
    *param_1 = pwVar15;
    pwVar11 = pwVar15;
    while ((pwVar11 != (wchar_t *)0x0 && (iVar7 = iswspace(*pwVar15), iVar7 != 0))) {
      *param_1 = *param_1 + 1;
      pwVar11 = *param_1;
      pwVar15 = *param_1;
    }
    pwVar11 = *param_1;
    wVar1 = *pwVar11;
    while (wVar1 != L')') {
      pwVar15 = pwVar11;
      if (wVar1 == L'\0') {
        ::FName::ToString(&this->PinName,&local_d8);
        FOutputDevice::LogfImpl
                  (param_4,Warning,L"%s: Unexpected end-of-stream while importing property values.")
        ;
        local_138.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
        goto LAB_147b745e0;
      }
      while (wVar1 != L'=') {
        pwVar15 = pwVar15 + 1;
        *param_1 = pwVar15;
        wVar1 = *pwVar15;
        if (wVar1 == L'\0') {
          ::FName::ToString(&this->PinName,&local_108);
          FOutputDevice::LogfImpl
                    (param_4,Warning,
                     L"%s: Unexpected end-of-stream while importing property values.");
          local_138.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
          goto LAB_147b745e0;
        }
      }
      iVar7 = (int)((longlong)pwVar15 - (longlong)pwVar11 >> 1);
      if (iVar7 < 1) {
        ::FName::ToString(&this->PinName,&local_e8);
        FOutputDevice::LogfImpl
                  (param_4,Warning,
                   L"%s: Encountered a missing property token while importing properties.");
        local_138.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
        goto LAB_147b745e0;
      }
      *param_1 = pwVar15 + 1;
      ::FString::ConstructFromPtrSize(&local_1b8,pwVar11,iVar7);
      ::FString::TrimEndInline(&local_1b8);
      if (local_1b8.Data.ArrayNum != PinHelpers::PinIdName.Data.ArrayNum) {
        bVar20 = PinHelpers::PinIdName.Data.ArrayNum + local_1b8.Data.ArrayNum == 1;
LAB_147b73a01:
        if (bVar20) goto LAB_147b743a4;
        if (local_1b8.Data.ArrayNum == PinHelpers::PinNameName.Data.ArrayNum) {
          if (1 < local_1b8.Data.ArrayNum) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                               (wchar_t *)PinHelpers::PinNameName.Data.AllocatorInstance.Data);
            bVar20 = iVar7 == 0;
            goto LAB_147b73a3f;
          }
LAB_147b74375:
          pwVar11 = *param_1;
          bVar20 = FProperty::ValidateImportFlags(local_158,param_2,param_4);
          if ((bVar20) && (pwVar11 != (wchar_t *)0x0)) {
            pFVar18 = (FText *)&this->PinName;
            pFVar10 = local_158;
LAB_147b7404f:
            pwVar11 = (wchar_t *)
                      (**(code **)(pFVar10->_padding_ + 0xe8))
                                (pFVar10,pwVar11,pFVar18,0,local_res20,param_2 | 0x8000000,param_4);
            bVar20 = pwVar11 != (wchar_t *)0x0;
            *param_1 = pwVar11;
          }
          else {
LAB_147b7408b:
            *param_1 = (wchar_t *)0x0;
            bVar20 = false;
          }
          goto LAB_147b743be;
        }
        bVar20 = PinHelpers::PinNameName.Data.ArrayNum + local_1b8.Data.ArrayNum == 1;
LAB_147b73a3f:
        if (bVar20) goto LAB_147b74375;
        if (local_1b8.Data.ArrayNum == PinHelpers::PinToolTipName.Data.ArrayNum) {
          if (1 < local_1b8.Data.ArrayNum) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                               (wchar_t *)PinHelpers::PinToolTipName.Data.AllocatorInstance.Data);
            bVar20 = iVar7 == 0;
            goto LAB_147b73a7d;
          }
LAB_147b7434b:
          pwVar11 = *param_1;
          bVar20 = FProperty::ValidateImportFlags(this_00,param_2,param_4);
          if ((!bVar20) || (pwVar11 == (wchar_t *)0x0)) goto LAB_147b7408b;
          pFVar19 = &this->PinToolTip;
LAB_147b741bf:
          pwVar11 = (wchar_t *)
                    (**(code **)(this_00->_padding_ + 0xe8))
                              (this_00,pwVar11,pFVar19,0,local_res20,param_2 | 0x8000000,param_4);
          bVar20 = pwVar11 != (wchar_t *)0x0;
          *param_1 = pwVar11;
          goto LAB_147b743be;
        }
        bVar20 = PinHelpers::PinToolTipName.Data.ArrayNum + local_1b8.Data.ArrayNum == 1;
LAB_147b73a7d:
        if (bVar20) goto LAB_147b7434b;
        if (local_1b8.Data.ArrayNum == PinHelpers::DirectionName.Data.ArrayNum) {
          if (1 < local_1b8.Data.ArrayNum) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                               (wchar_t *)PinHelpers::DirectionName.Data.AllocatorInstance.Data);
            bVar20 = iVar7 == 0;
            goto LAB_147b73ab6;
          }
LAB_147b74225:
          pwVar11 = *param_1;
          local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_188.Data.ArrayNum = 0;
          local_188.Data.ArrayMax = 0;
          bVar20 = FProperty::ValidateImportFlags(this_00,param_2,param_4);
          if ((bVar20) && (pwVar11 != (wchar_t *)0x0)) {
            pwVar11 = (wchar_t *)
                      (**(code **)(this_00->_padding_ + 0xe8))
                                (this_00,pwVar11,&local_188,0,local_res20,param_2 | 0x8000000,
                                 param_4);
            bVar20 = pwVar11 != (wchar_t *)0x0;
            *param_1 = pwVar11;
            if (pwVar11 != (wchar_t *)0x0) {
              iVar7 = UEnum::GetIndexByNameString(local_1a8,&local_188,None);
              if (iVar7 == -1) {
                FOutputDevice::LogfImpl(param_4,Warning,L"Unknown pin direction enum value: %s.");
                param_2 = local_res18;
                goto LAB_147b74337;
              }
              if (((iVar7 < 0) || ((local_1a8->Names).NumValues <= iVar7)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Names.IsValidIndex(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                     ,0xb2d,L""), bVar4)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              pTVar14 = UEnum::FNameData::operator[](&local_1a8->Names,&local_58,iVar7);
              (this->Direction).Value = pTVar14->field_0x8;
              param_2 = local_res18;
            }
          }
          else {
            *param_1 = (wchar_t *)0x0;
LAB_147b74337:
            bVar20 = false;
          }
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          goto LAB_147b743be;
        }
        bVar20 = PinHelpers::DirectionName.Data.ArrayNum + local_1b8.Data.ArrayNum == 1;
LAB_147b73ab6:
        if (bVar20) goto LAB_147b74225;
        ::FString::ConcatFC(&local_128,&PinHelpers::PinTypeName,L".");
        iVar7 = local_128.Data.ArrayNum;
        FVar16.Data = (FScriptContainerElement *)L"";
        if (iVar7 != 0) {
          FVar16.Data = local_128.Data.AllocatorInstance.Data;
        }
        iVar3 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar3 = 0;
        }
        bVar20 = ::FString::StartsWith(&local_1b8,(wchar_t *)FVar16.Data,iVar3,IgnoreCase);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (bVar20) {
          bVar20 = false;
          local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a0.Data.ArrayNum = 0;
          local_1a0.Data.ArrayMax = 0;
          ::FString::FString(&local_a8,".");
          local_res10 = local_res10 | 1;
          bVar4 = ::FString::Split(&local_1b8,&local_a8,(FString *)0x0,&local_1a0,CaseSensitive,
                                   FromStart);
          if (bVar4) {
            bVar20 = true;
          }
          else {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1606850396188310181>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                               ,0x55b,
                               "PropertyToken.Split(\".\", nullptr, &Right, ESearchCase::CaseSensitive)"
                              );
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
          }
          local_res10 = local_res10 & 0xfffffffe;
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (bVar20) {
            FVar16.Data = (FScriptContainerElement *)L"";
            if (local_1a0.Data.ArrayNum != 0) {
              FVar16.Data = local_1a0.Data.AllocatorInstance.Data;
            }
            ::FName::FName(&local_190,(wchar_t *)FVar16.Data);
            if (Z_Registration_Info_UScriptStruct_FEdGraphPinType.OuterSingleton ==
                (UScriptStruct *)0x0) {
              pUVar9 = Z_Construct_UPackage__Script_Engine();
              Z_Registration_Info_UScriptStruct_FEdGraphPinType.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinType,(UObject *)pUVar9,
                                   L"EdGraphPinType");
            }
            pFVar10 = UStruct::FindPropertyByName
                                ((UStruct *)
                                 Z_Registration_Info_UScriptStruct_FEdGraphPinType.OuterSingleton,
                                 local_190);
            if (pFVar10 == (FProperty *)0x0) {
              bVar20 = ::FName::Equals(local_190,L"bIsMap");
              if ((!bVar20) && (bVar20 = ::FName::Equals(local_190,L"bIsSet"), !bVar20)) {
                pwVar11 = L"Unknown pin type member: %s.";
                goto LAB_147b73db4;
              }
              pwVar11 = *param_1;
              local_res8[0] = 0;
              bVar20 = FProperty::ValidateImportFlags((FProperty *)local_168,param_2,param_4);
              if ((bVar20) && (pwVar11 != (wchar_t *)0x0)) {
                pwVar11 = (wchar_t *)
                          (**(code **)(local_168->_padding_ + 0xe8))
                                    (local_168,pwVar11,local_res8,0,local_res20,param_2 | 0x8000000,
                                     param_4);
                bVar20 = pwVar11 != (wchar_t *)0x0;
                *param_1 = pwVar11;
              }
              else {
                *param_1 = (wchar_t *)0x0;
                bVar20 = false;
              }
            }
            else {
              if ((pFVar10->ArrayDim < 1) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2dd,
                                      L"Array index out of bounds: %i from an array of size %i"),
                 bVar20)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              if ((&this->PinType == (FEdGraphPinType *)0x0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ContainerPtr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x2de,L""), bVar20)) {
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return (bool)uVar5;
              }
              iVar7 = pFVar10->Offset_Internal;
              pwVar11 = *param_1;
              bVar20 = FProperty::ValidateImportFlags(pFVar10,local_res18,param_4);
              if ((bVar20) && (pwVar11 != (wchar_t *)0x0)) {
                pwVar11 = (wchar_t *)
                          (**(code **)(pFVar10->_padding_ + 0xe8))
                                    (pFVar10,pwVar11,
                                     (longlong)&(this->PinType).PinCategory.ComparisonIndex.Value +
                                     (longlong)iVar7,0,local_res20,local_res18 | 0x8000000,param_4);
              }
              else {
                pwVar11 = (wchar_t *)0x0;
              }
              bVar20 = pwVar11 != (wchar_t *)0x0;
              *param_1 = pwVar11;
              this_00 = local_140;
              param_2 = local_res18;
            }
          }
          else {
            pwVar11 = L"Unable to parse pin type member name from token: %s.";
LAB_147b73db4:
            FOutputDevice::LogfImpl(param_4,Warning,pwVar11);
            bVar20 = false;
          }
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
          goto LAB_147b743be;
        }
        if (local_1b8.Data.ArrayNum == PinHelpers::DefaultValueName.Data.ArrayNum) {
          if (1 < local_1b8.Data.ArrayNum) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                               (wchar_t *)PinHelpers::DefaultValueName.Data.AllocatorInstance.Data);
            bVar20 = iVar7 == 0;
            goto LAB_147b73e14;
          }
LAB_147b741fb:
          pwVar11 = *param_1;
          bVar20 = FProperty::ValidateImportFlags(this_00,param_2,param_4);
          if ((bVar20) && (pwVar11 != (wchar_t *)0x0)) {
            pFVar19 = &this->DefaultValue;
            goto LAB_147b741bf;
          }
          goto LAB_147b7408b;
        }
        bVar20 = PinHelpers::DefaultValueName.Data.ArrayNum + local_1b8.Data.ArrayNum == 1;
LAB_147b73e14:
        if (bVar20) goto LAB_147b741fb;
        if (local_1b8.Data.ArrayNum == PinHelpers::AutogeneratedDefaultValueName.Data.ArrayNum) {
          if (1 < local_1b8.Data.ArrayNum) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                               (wchar_t *)
                               PinHelpers::AutogeneratedDefaultValueName.Data.AllocatorInstance.Data
                              );
            bVar20 = iVar7 == 0;
            goto LAB_147b73e52;
          }
LAB_147b74197:
          pwVar11 = *param_1;
          bVar20 = FProperty::ValidateImportFlags(this_00,param_2,param_4);
          if ((bVar20) && (pwVar11 != (wchar_t *)0x0)) {
            pFVar19 = &this->AutogeneratedDefaultValue;
            goto LAB_147b741bf;
          }
          goto LAB_147b7408b;
        }
        bVar20 = PinHelpers::AutogeneratedDefaultValueName.Data.ArrayNum + local_1b8.Data.ArrayNum
                 == 1;
LAB_147b73e52:
        if (bVar20) goto LAB_147b74197;
        if (local_1b8.Data.ArrayNum == PinHelpers::DefaultObjectName.Data.ArrayNum) {
          if (1 < local_1b8.Data.ArrayNum) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                               (wchar_t *)PinHelpers::DefaultObjectName.Data.AllocatorInstance.Data)
            ;
            bVar20 = iVar7 == 0;
            goto LAB_147b73e90;
          }
LAB_147b7409c:
          pwVar11 = *param_1;
          local_178 = (wchar_t *)0x0;
          local_170 = 0;
          bVar20 = FProperty::ValidateImportFlags(this_00,param_2,param_4);
          if ((bVar20) && (pwVar11 != (wchar_t *)0x0)) {
            pwVar11 = (wchar_t *)
                      (**(code **)(this_00->_padding_ + 0xe8))
                                (this_00,pwVar11,&local_178,0,local_res20,param_2 | 0x8000000,
                                 param_4);
            bVar20 = pwVar11 != (wchar_t *)0x0;
            *param_1 = pwVar11;
            if (pwVar11 != (wchar_t *)0x0) {
              if ((int)local_170 == 0) {
                local_118 = L"";
LAB_147b74129:
                sVar12 = wcslen(local_118);
                iVar7 = (int)sVar12;
              }
              else {
                iVar7 = 0;
                local_118 = local_178;
                if (local_178 != (wchar_t *)0x0) goto LAB_147b74129;
              }
              iStack_110 = iVar7;
              pUVar8 = Z_Construct_UClass_UObject_NoRegister();
              local_88._12_4_ = uStack_10c;
              local_88.Size = iStack_110;
              local_88.DataPtr = local_118;
              pUVar13 = StaticFindObject(pUVar8,(UObject *)0x0,&local_88,None);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar13 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar13);
              }
              (this->DefaultObject).field0_0x0.DebugPtr = pUVar13;
              param_2 = local_res18;
            }
          }
          else {
            *param_1 = (wchar_t *)0x0;
            bVar20 = false;
          }
          if (local_178 != (wchar_t *)0x0) {
            FMemory::Free(local_178);
          }
          goto LAB_147b743be;
        }
        bVar20 = PinHelpers::DefaultObjectName.Data.ArrayNum + local_1b8.Data.ArrayNum == 1;
LAB_147b73e90:
        if (bVar20) goto LAB_147b7409c;
        if (local_1b8.Data.ArrayNum == PinHelpers::DefaultTextValueName.Data.ArrayNum) {
          if (1 < local_1b8.Data.ArrayNum) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                               (wchar_t *)
                               PinHelpers::DefaultTextValueName.Data.AllocatorInstance.Data);
            bVar20 = iVar7 == 0;
            goto LAB_147b73ece;
          }
LAB_147b7402a:
          pwVar11 = *param_1;
          bVar20 = FProperty::ValidateImportFlags(local_160,param_2,param_4);
          if ((!bVar20) || (pwVar11 == (wchar_t *)0x0)) goto LAB_147b7408b;
          pFVar18 = &this->DefaultTextValue;
          pFVar10 = local_160;
          goto LAB_147b7404f;
        }
        bVar20 = PinHelpers::DefaultTextValueName.Data.ArrayNum + local_1b8.Data.ArrayNum == 1;
LAB_147b73ece:
        if (bVar20) goto LAB_147b7402a;
        if (local_1b8.Data.ArrayNum == PinHelpers::LinkedToName.Data.ArrayNum) {
          if (1 < local_1b8.Data.ArrayNum) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                               (wchar_t *)PinHelpers::LinkedToName.Data.AllocatorInstance.Data);
            bVar20 = iVar7 == 0;
            goto LAB_147b73f0c;
          }
LAB_147b74010:
          bVar20 = ImportText_PinArray(param_1,&this->LinkedTo,this,LinkedTo);
          goto LAB_147b743be;
        }
        bVar20 = PinHelpers::LinkedToName.Data.ArrayNum + local_1b8.Data.ArrayNum == 1;
LAB_147b73f0c:
        if (bVar20) goto LAB_147b74010;
        if (local_1b8.Data.ArrayNum == PinHelpers::SubPinsName.Data.ArrayNum) {
          if (1 < local_1b8.Data.ArrayNum) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                               (wchar_t *)PinHelpers::SubPinsName.Data.AllocatorInstance.Data);
            bVar20 = iVar7 == 0;
            goto LAB_147b73f4a;
          }
LAB_147b73ff6:
          bVar20 = ImportText_PinArray(param_1,&this->SubPins,this,SubPins);
          goto LAB_147b743be;
        }
        bVar20 = PinHelpers::SubPinsName.Data.ArrayNum + local_1b8.Data.ArrayNum == 1;
LAB_147b73f4a:
        if (bVar20) goto LAB_147b73ff6;
        if (local_1b8.Data.ArrayNum == PinHelpers::ParentPinName.Data.ArrayNum) {
          if (1 < local_1b8.Data.ArrayNum) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                               (wchar_t *)PinHelpers::ParentPinName.Data.AllocatorInstance.Data);
            bVar20 = iVar7 == 0;
            goto LAB_147b73f84;
          }
LAB_147b73fce:
          ppUVar17 = &this->ParentPin;
          EVar21 = ParentPin;
LAB_147b73fda:
          EVar6 = PinHelpers::ImportText_PinReference(param_1,ppUVar17,-1,this,EVar21);
          bVar20 = EVar6 != FailedParse;
          goto LAB_147b743be;
        }
        bVar20 = PinHelpers::ParentPinName.Data.ArrayNum + local_1b8.Data.ArrayNum == 1;
LAB_147b73f84:
        if (bVar20) goto LAB_147b73fce;
        if (local_1b8.Data.ArrayNum == PinHelpers::ReferencePassThroughConnectionName.Data.ArrayNum)
        {
          if (1 < local_1b8.Data.ArrayNum) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                               (wchar_t *)
                               PinHelpers::ReferencePassThroughConnectionName.Data.AllocatorInstance
                               .Data);
            bVar20 = iVar7 == 0;
            goto LAB_147b73fb5;
          }
LAB_147b73fc0:
          ppUVar17 = &this->ReferencePassThroughConnection;
          EVar21 = ReferencePassThroughConnection;
          goto LAB_147b73fda;
        }
        bVar20 = PinHelpers::ReferencePassThroughConnectionName.Data.ArrayNum +
                 local_1b8.Data.ArrayNum == 1;
LAB_147b73fb5:
        if (bVar20) goto LAB_147b73fc0;
LAB_147b74480:
        ::FName::ToString(&this->PinName,&local_78);
        ::FName::ToString(&this->PinName,&local_f8);
        FOutputDevice::LogfImpl
                  (param_4,Warning,
                   L"%s: Parse error while importing property values (PinName = %s).");
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        local_138.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
          local_138.Data.AllocatorInstance.Data = local_1b8.Data.AllocatorInstance.Data;
        }
        goto LAB_147b745e0;
      }
      if (1 < local_1b8.Data.ArrayNum) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_1b8.Data.AllocatorInstance.Data,
                           (wchar_t *)PinHelpers::PinIdName.Data.AllocatorInstance.Data);
        bVar20 = iVar7 == 0;
        goto LAB_147b73a01;
      }
LAB_147b743a4:
      bVar20 = FGuid::ImportTextItem(&this->PinId,param_1,param_2,param_3,param_4);
LAB_147b743be:
      if (bVar20 == false) goto LAB_147b74480;
      pwVar15 = *param_1;
      pwVar11 = pwVar15;
      while ((pwVar11 != (wchar_t *)0x0 && (iVar7 = iswspace(*pwVar15), iVar7 != 0))) {
        *param_1 = *param_1 + 1;
        pwVar11 = *param_1;
        pwVar15 = *param_1;
      }
      pwVar11 = *param_1;
      pwVar15 = pwVar11;
      if (*pwVar11 == L',') {
        pwVar11 = pwVar11 + 1;
        *param_1 = pwVar11;
        pwVar15 = pwVar11;
      }
      while ((pwVar15 != (wchar_t *)0x0 && (iVar7 = iswspace(*pwVar11), iVar7 != 0))) {
        *param_1 = *param_1 + 1;
        pwVar11 = *param_1;
        pwVar15 = *param_1;
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      pwVar11 = *param_1;
      param_3 = local_res20;
      wVar1 = *pwVar11;
    }
    *param_1 = pwVar11 + 1;
    if ((((this->PinId).D != 0 || (this->PinId).C != 0) || (this->PinId).B != 0) ||
        (this->PinId).A != 0) {
      ResolveReferencesToPin(this,true);
      return true;
    }
    ::FName::ToString(&this->PinName,&local_68);
    ::FName::ToString(&this->PinName,&local_c8);
    FOutputDevice::LogfImpl
              (param_4,Warning,L"%s: Invalid PinId after importing property values (PinName = %s).")
    ;
    local_138.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      local_138.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    }
  }
  else {
    ::FName::ToString(&this->PinName,&local_138);
    FOutputDevice::LogfImpl
              (param_4,Warning,L"%s: Missing opening \'(\' while importing property values.");
  }
LAB_147b745e0:
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return false;
}

// ImportText_PinArray @ 147b74620

bool __cdecl
UEdGraphPin::ImportText_PinArray
          (wchar_t **param_1,TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *param_2,
          UEdGraphPin *param_3,EPinResolveType param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EPinResolveResult EVar6;
  wchar_t wVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined8 local_38 [2];
  
  pwVar11 = *param_1;
  pwVar12 = pwVar11;
  while ((pwVar12 != (wchar_t *)0x0 && (iVar8 = iswspace(*pwVar11), iVar8 != 0))) {
    *param_1 = *param_1 + 1;
    pwVar12 = *param_1;
    pwVar11 = *param_1;
  }
  if (**param_1 == L'(') {
    pwVar11 = *param_1 + 1;
    *param_1 = pwVar11;
    pwVar12 = pwVar11;
    while ((pwVar12 != (wchar_t *)0x0 && (iVar8 = iswspace(*pwVar11), iVar8 != 0))) {
      *param_1 = *param_1 + 1;
      pwVar12 = *param_1;
      pwVar11 = *param_1;
    }
    pwVar12 = *param_1;
    wVar7 = *pwVar12;
    if (wVar7 != L')') {
      piVar1 = &param_2->ArrayMax;
      do {
        if (wVar7 == L'\0') goto LAB_147b74927;
        pFVar2 = (param_2->AllocatorInstance).Data;
        local_38[0] = 0;
        if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)*piVar1 * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar9 = param_2->ArrayNum;
        if (uVar9 == *piVar1) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar1);
          param_2->ArrayNum = uVar9;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        param_2->ArrayNum = uVar9 + 1;
        *(undefined8 *)(pFVar2 + (longlong)(int)uVar9 * 8) = local_38[0];
        uVar10 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        EVar6 = PinHelpers::ImportText_PinReference
                          (param_1,(UEdGraphPin **)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8),
                           uVar9,param_3,param_4);
        if (EVar6 == FailedParse) {
          if ((param_2->ArrayNum < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          uVar9 = param_2->ArrayNum - 1;
          pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
          iVar8 = ~uVar9 + param_2->ArrayNum;
          if (iVar8 != 0) {
            memmove(pFVar2,pFVar2 + 8,(longlong)iVar8 << 3);
          }
          param_2->ArrayNum = param_2->ArrayNum + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
          goto LAB_147b74927;
        }
        if (EVar6 == FailedSafely) {
          if ((param_2->ArrayNum < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          uVar9 = param_2->ArrayNum - 1;
          pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
          iVar8 = ~uVar9 + param_2->ArrayNum;
          if (iVar8 != 0) {
            memmove(pFVar2,pFVar2 + 8,(longlong)iVar8 << 3);
          }
          param_2->ArrayNum = param_2->ArrayNum + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
        }
        pwVar12 = *param_1;
        pwVar11 = pwVar12;
        if (*pwVar12 == L',') {
          pwVar12 = pwVar12 + 1;
          *param_1 = pwVar12;
          pwVar11 = pwVar12;
        }
        while ((pwVar11 != (wchar_t *)0x0 && (iVar8 = iswspace(*pwVar12), iVar8 != 0))) {
          *param_1 = *param_1 + 1;
          pwVar12 = *param_1;
          pwVar11 = *param_1;
        }
        pwVar12 = *param_1;
        wVar7 = *pwVar12;
      } while (wVar7 != L')');
    }
    *param_1 = pwVar12 + 1;
    bVar4 = true;
  }
  else {
LAB_147b74927:
    bVar4 = false;
  }
  return bVar4;
}

// InitFromDeprecatedPin @ 147b750d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UEdGraphPin::InitFromDeprecatedPin(UEdGraphPin *this,UEdGraphPin_Deprecated *param_1)

{
  int *piVar1;
  TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  FName FVar4;
  ITextData *pIVar5;
  ITextData *pIVar6;
  UEdGraphPin_Deprecated *pUVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  void *pvVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  UObject *pUVar15;
  UEdGraphNode *pUVar16;
  UClass *pUVar17;
  UObject *pUVar18;
  UEdGraphPin *pUVar19;
  TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> *pTVar20;
  wchar_t *pwVar21;
  FScriptContainerElement *pFVar22;
  TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  wchar_t *pwVar23;
  int iVar24;
  longlong lVar25;
  longlong *plVar26;
  uint uVar27;
  uint uVar28;
  longlong *plVar29;
  longlong *plVar30;
  undefined1 local_res18 [16];
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118;
  FWeakObjectPtr local_110;
  FWeakObjectPtr local_108;
  UEdGraphPin *local_100;
  uint uStack_f8;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  UEdGraphPin *local_f0;
  uint uStack_e8;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  UEdGraphPin *local_e0;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  UEdGraphPin *local_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined1 local_c0 [8];
  UEdGraphPin_Deprecated *local_b8;
  FName local_b0;
  TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *local_a8;
  UEdGraphPin_Deprecated *local_a0;
  UEdGraphPin_Deprecated *local_98;
  UEdGraphPin_Deprecated *local_90;
  UEdGraphPin_Deprecated *local_88;
  UEdGraphPin_Deprecated *local_80;
  FWeakObjectPtr local_78;
  UEdGraphPin_Deprecated *local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr *local_60;
  FGuid *local_58;
  
  pwVar23 = L"";
  if ((param_1 == (UEdGraphPin_Deprecated *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("DeprecatedPin",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                          ,0x676,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UEdGraphPin_Deprecated *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  uVar27 = 0;
  local_108.ObjectIndex = 0;
  local_108.ObjectSerialNumber = 0;
  local_b8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UEdGraphPin_Deprecated *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_b8);
  local_60 = &local_108;
  local_58 = &this->PinId;
  TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,FGuid>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,FGuid,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>_&&,FGuid_const_&>_>
            ((TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,FGuid>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,FGuid,0>,FDefaultSetAllocator>
              *)(lVar25 + 0x8fa0),
             (TPairInitializer<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>_&&,FGuid_const_&>
              *)(local_res18 + 8),(bool *)&local_60);
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&GameplayTagName,L"GameplayTag");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&GameplayTagContainerName,L"GameplayTagContainer");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar25 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&GameplayTagsPathName,L"/Script/GameplayTags");
    _Init_thread_footer(&::_TSS2);
  }
  bVar12 = FWeakObjectPtr::IsValid(&(param_1->PinType).PinSubCategoryObject.WeakPtr);
  iVar14 = 0;
  if ((bVar12) &&
     (pUVar15 = FWeakObjectPtr::Get(&(param_1->PinType).PinSubCategoryObject.WeakPtr),
     *(FName *)(*(longlong *)&pUVar15->field_0x20 + 0x18) == GameplayTagsPathName)) {
    FVar4.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
    FVar4.Number = *(uint *)&pUVar15->field_0x1c;
    if (FVar4 == GameplayTagName) {
      if ((param_1->DefaultValue).Data.ArrayNum == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = (wchar_t *)(param_1->DefaultValue).Data.AllocatorInstance.Data;
      }
      iVar13 = FGenericPlatformStricmp::Stricmp(pwVar21,L"()");
      if (iVar13 == 0) {
        ::FString::Empty(&param_1->DefaultValue);
      }
    }
    else if (FVar4 == GameplayTagContainerName) {
      ::FString::ReplaceInline
                (&param_1->DefaultValue,L"GameplayTags=()",L"GameplayTags=",IgnoreCase);
    }
  }
  pUVar16 = CastChecked<UEdGraphNode,UObject>((UObject *)param_1->_padding_);
  this->OwningNode = pUVar16;
  if ((param_1->PinName).Data.ArrayNum != 0) {
    pwVar23 = (wchar_t *)(param_1->PinName).Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_b0,pwVar23);
  this->PinName = local_b0;
  iVar13 = (param_1->PinToolTip).Data.ArrayNum;
  iVar24 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar24 = iVar14;
  }
  ::FString::AssignRange
            (&this->PinToolTip,(wchar_t *)(param_1->PinToolTip).Data.AllocatorInstance.Data,iVar24);
  (this->Direction).Value = (param_1->Direction).Value;
  FEdGraphPinType::operator=(&this->PinType,&param_1->PinType);
  iVar13 = (param_1->DefaultValue).Data.ArrayNum;
  iVar24 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar24 = iVar14;
  }
  ::FString::AssignRange
            (&this->DefaultValue,(wchar_t *)(param_1->DefaultValue).Data.AllocatorInstance.Data,
             iVar24);
  iVar13 = (param_1->AutogeneratedDefaultValue).Data.ArrayNum;
  iVar24 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar24 = iVar14;
  }
  ::FString::AssignRange
            (&this->AutogeneratedDefaultValue,
             (wchar_t *)(param_1->AutogeneratedDefaultValue).Data.AllocatorInstance.Data,iVar24);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 = (param_1->DefaultObject).field0_0x0.DebugPtr, pUVar15 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar15);
  }
  (this->DefaultObject).field0_0x0 = (param_1->DefaultObject).field0_0x0;
  pIVar5 = (param_1->DefaultTextValue).TextData.Reference;
  pIVar6 = (this->DefaultTextValue).TextData.Reference;
  if (pIVar6 != pIVar5) {
    (this->DefaultTextValue).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_c0);
    }
    if (pIVar6 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6);
    }
  }
  pTVar2 = &this->LinkedTo;
  (this->DefaultTextValue).Flags = (param_1->DefaultTextValue).Flags;
  uVar28 = (param_1->LinkedTo).ArrayNum;
  local_a8 = pTVar2;
  if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
  }
  piVar1 = &(this->LinkedTo).ArrayMax;
  (this->LinkedTo).ArrayNum = 0;
  if (*piVar1 != uVar28) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar28,&pTVar2->AllocatorInstance,0,piVar1);
  }
  TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_>::SetNum
            (pTVar2,(param_1->LinkedTo).ArrayNum,Default);
  pvVar11 = ThreadLocalStoragePointer;
  if (0 < (param_1->LinkedTo).ArrayNum) {
    lVar25 = 0;
    do {
      uVar28 = 0;
      if ((int)uVar27 < (param_1->LinkedTo).ArrayNum) {
        uVar28 = ~uVar27 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar2 = local_a8;
      pUVar7 = *(UEdGraphPin_Deprecated **)((param_1->LinkedTo).AllocatorInstance.Data + lVar25);
      uVar28 = 0;
      if ((int)uVar27 < local_a8->ArrayNum) {
        uVar28 = ~uVar27 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      if (pUVar7 != (UEdGraphPin_Deprecated *)0x0) {
        pUVar17 = UEdGraph::StaticClass();
        pUVar15 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar7,pUVar17);
        pUVar17 = UEdGraph::StaticClass();
        pUVar18 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar17);
        if (pUVar15 == pUVar18) {
          pUVar19 = FindPinCreatedFromDeprecatedPin(pUVar7);
          if (pUVar19 == (UEdGraphPin *)0x0) {
            lVar9 = *(longlong *)((longlong)pvVar11 + (ulonglong)_tls_index * 8);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            local_138.ObjectIndex = 0;
            local_138.ObjectSerialNumber = 0;
            local_a0 = pUVar7;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_a0);
            pTVar20 = TMapBase<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindOrAddImpl<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>_>
                                ((TMapBase<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
                                  *)(lVar9 + 0x8f50),
                                 local_138.ObjectSerialNumber ^ local_138.ObjectIndex,
                                 (TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr> *)&local_138
                                );
            pFVar8 = (pTVar20->AllocatorInstance).Data;
            uStack_f4 = 1;
            local_100 = this;
            uStack_f8 = uVar27;
            if (((pFVar8 <= (FScriptContainerElement *)&local_100) &&
                ((FScriptContainerElement *)&local_100 < pFVar8 + (longlong)pTVar20->ArrayMax * 0x10
                )) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar14 = pTVar20->ArrayNum;
            if (iVar14 == pTVar20->ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar20->AllocatorInstance,&pTVar20->ArrayMax);
            }
            pTVar20->ArrayNum = iVar14 + 1;
            pFVar8 = (pTVar20->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
            *(UEdGraphPin **)pFVar8 = local_100;
            *(ulonglong *)(pFVar8 + 8) = CONCAT26(uStack_f2,CONCAT24(uStack_f4,uStack_f8));
          }
          else {
            *(UEdGraphPin **)(pFVar8 + lVar25) = pUVar19;
          }
        }
      }
      uVar27 = uVar27 + 1;
      lVar25 = lVar25 + 8;
    } while ((int)uVar27 < (param_1->LinkedTo).ArrayNum);
  }
  uVar28 = 0;
  uVar27 = (param_1->SubPins).ArrayNum;
  pTVar2 = &this->SubPins;
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
  }
  piVar1 = &(this->SubPins).ArrayMax;
  (this->SubPins).ArrayNum = 0;
  if (*piVar1 != uVar27) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar27,&pTVar2->AllocatorInstance,0,piVar1);
  }
  TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_>::SetNum
            (pTVar2,(param_1->SubPins).ArrayNum,Default);
  pvVar11 = ThreadLocalStoragePointer;
  if (0 < (param_1->SubPins).ArrayNum) {
    lVar25 = 0;
    do {
      uVar27 = 0;
      if ((int)uVar28 < (param_1->SubPins).ArrayNum) {
        uVar27 = ~uVar28 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pUVar7 = *(UEdGraphPin_Deprecated **)((param_1->SubPins).AllocatorInstance.Data + lVar25);
      uVar27 = 0;
      if ((int)uVar28 < (this->SubPins).ArrayNum) {
        uVar27 = ~uVar28 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      if (pUVar7 != (UEdGraphPin_Deprecated *)0x0) {
        pUVar19 = FindPinCreatedFromDeprecatedPin(pUVar7);
        if (pUVar19 == (UEdGraphPin *)0x0) {
          lVar9 = *(longlong *)((longlong)pvVar11 + (ulonglong)_tls_index * 8);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          local_130.ObjectIndex = 0;
          local_130.ObjectSerialNumber = 0;
          local_98 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_98);
          pTVar20 = TMapBase<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindOrAddImpl<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>_>
                              ((TMapBase<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
                                *)(lVar9 + 0x8f50),
                               local_130.ObjectSerialNumber ^ local_130.ObjectIndex,
                               (TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr> *)&local_130);
          uStack_e4 = 2;
          pFVar8 = (pTVar20->AllocatorInstance).Data;
          local_f0 = this;
          uStack_e8 = uVar28;
          if (((pFVar8 <= (FScriptContainerElement *)&local_f0) &&
              ((FScriptContainerElement *)&local_f0 < pFVar8 + (longlong)pTVar20->ArrayMax * 0x10))
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar14 = pTVar20->ArrayNum;
          if (iVar14 == pTVar20->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar20->AllocatorInstance,&pTVar20->ArrayMax);
          }
          pTVar20->ArrayNum = iVar14 + 1;
          pFVar8 = (pTVar20->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
          *(UEdGraphPin **)pFVar8 = local_f0;
          *(ulonglong *)(pFVar8 + 8) = CONCAT26(uStack_e2,CONCAT24(uStack_e4,uStack_e8));
        }
        else {
          *(UEdGraphPin **)(pFVar8 + lVar25) = pUVar19;
        }
      }
      uVar28 = uVar28 + 1;
      lVar25 = lVar25 + 8;
    } while ((int)uVar28 < (param_1->SubPins).ArrayNum);
  }
  pUVar7 = (param_1->ParentPin).field0_0x0.DebugPtr;
  if (pUVar7 != (UEdGraphPin_Deprecated *)0x0) {
    pUVar19 = FindPinCreatedFromDeprecatedPin(pUVar7);
    if (pUVar19 == (UEdGraphPin *)0x0) {
      pUVar7 = (param_1->ParentPin).field0_0x0.DebugPtr;
      lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar7 != (UEdGraphPin_Deprecated *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar7 != (UEdGraphPin_Deprecated *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
      }
      local_128.ObjectIndex = 0;
      local_128.ObjectSerialNumber = 0;
      local_90 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UEdGraphPin_Deprecated *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_90);
      pTVar20 = TMapBase<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>_>
                          ((TMapBase<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
                            *)(lVar25 + 0x8f50),local_128.ObjectSerialNumber ^ local_128.ObjectIndex
                           ,(TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr> *)&local_128);
      uStack_d8 = 0xffffffff;
      uStack_d4 = 3;
      pFVar8 = (pTVar20->AllocatorInstance).Data;
      local_e0 = this;
      if (((pFVar8 <= (FScriptContainerElement *)&local_e0) &&
          ((FScriptContainerElement *)&local_e0 < pFVar8 + (longlong)pTVar20->ArrayMax * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar14 = pTVar20->ArrayNum;
      if (iVar14 == pTVar20->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar20->AllocatorInstance,&pTVar20->ArrayMax);
      }
      pTVar20->ArrayNum = iVar14 + 1;
      pFVar8 = (pTVar20->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
      *(UEdGraphPin **)pFVar8 = local_e0;
      *(ulonglong *)(pFVar8 + 8) = CONCAT26(uStack_d2,CONCAT24(uStack_d4,uStack_d8));
    }
    else {
      this->ParentPin = pUVar19;
    }
  }
  pUVar7 = (param_1->ReferencePassThroughConnection).field0_0x0.DebugPtr;
  if (pUVar7 != (UEdGraphPin_Deprecated *)0x0) {
    pUVar19 = FindPinCreatedFromDeprecatedPin(pUVar7);
    if (pUVar19 == (UEdGraphPin *)0x0) {
      pUVar7 = (param_1->ReferencePassThroughConnection).field0_0x0.DebugPtr;
      lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar7 != (UEdGraphPin_Deprecated *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar7 != (UEdGraphPin_Deprecated *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
      }
      local_120.ObjectIndex = 0;
      local_120.ObjectSerialNumber = 0;
      local_88 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UEdGraphPin_Deprecated *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_88);
      pTVar20 = TMapBase<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>_>
                          ((TMapBase<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
                            *)(lVar25 + 0x8f50),local_120.ObjectSerialNumber ^ local_120.ObjectIndex
                           ,(TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr> *)&local_120);
      uStack_c8 = 0xffffffff;
      uStack_c4 = 4;
      pFVar8 = (pTVar20->AllocatorInstance).Data;
      local_d0 = this;
      if (((pFVar8 <= (FScriptContainerElement *)&local_d0) &&
          ((FScriptContainerElement *)&local_d0 < pFVar8 + (longlong)pTVar20->ArrayMax * 0x10)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar14 = pTVar20->ArrayNum;
      if (iVar14 == pTVar20->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar20->AllocatorInstance,&pTVar20->ArrayMax);
      }
      pTVar20->ArrayNum = iVar14 + 1;
      pFVar8 = (pTVar20->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
      *(UEdGraphPin **)pFVar8 = local_d0;
      *(ulonglong *)(pFVar8 + 8) = CONCAT26(uStack_c2,CONCAT24(uStack_c4,uStack_c8));
    }
    else {
      this->ReferencePassThroughConnection = pUVar19;
    }
  }
  this_00 = (TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x8f50);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_118.ObjectIndex = 0;
  local_118.ObjectSerialNumber = 0;
  local_80 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_80);
  local_78 = local_118;
  iVar14 = TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr>_>
                     (this_00,local_118.ObjectSerialNumber ^ local_118.ObjectIndex,
                      (TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr> *)&local_78);
  if (iVar14 != -1) {
    lVar25 = (longlong)iVar14 * 0x20 + *(longlong *)&this_00->Elements;
    plVar30 = (longlong *)(lVar25 + 8);
    if (lVar25 == 0) {
      plVar30 = (longlong *)0x0;
    }
    if (plVar30 != (longlong *)0x0) {
      lVar25 = plVar30[1];
      plVar29 = (longlong *)*plVar30;
      plVar26 = plVar29 + (longlong)(int)lVar25 * 2;
      do {
        while( true ) {
          if ((int)plVar30[1] != (int)lVar25) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FUnresolvedPinData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (plVar29 == plVar26) {
            lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            local_110.ObjectIndex = 0;
            local_110.ObjectSerialNumber = 0;
            local_70 = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            FWeakObjectPtr::operator=(&local_110,(FObjectPtr)&local_70);
            local_68 = local_110;
            if (*(int *)(lVar25 + 0x8f58) == *(int *)(lVar25 + 0x8f84)) {
              return;
            }
            TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)(lVar25 + 0x8f50),local_110.ObjectSerialNumber ^ local_110.ObjectIndex,
                       (TWeakObjectPtr<UEdGraphPin_Deprecated_const_,FWeakObjectPtr> *)&local_68);
            return;
          }
          lVar9 = *plVar29;
          if (lVar9 != 0) break;
LAB_147b75dfc:
          plVar29 = plVar29 + 2;
        }
        cVar3 = *(char *)((longlong)plVar29 + 0xc);
        if (cVar3 == '\0') {
LAB_147b75dd2:
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                              ,0x6fc,L"Unhandled ResolveType %d");
          if (!bVar12) goto LAB_147b75dfc;
code_r0x000147b75dfb:
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (cVar3 == '\x01') {
          uVar27 = *(uint *)(plVar29 + 1);
          uVar28 = 0;
          if ((int)uVar27 < *(int *)(lVar9 + 0xd0)) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(UEdGraphPin **)(*(longlong *)(lVar9 + 200) + (longlong)(int)uVar27 * 8) = this;
          pFVar22 = (this->LinkedTo).AllocatorInstance.Data;
          pFVar8 = pFVar22 + (longlong)(this->LinkedTo).ArrayNum * 8;
          for (; pFVar22 != pFVar8; pFVar22 = pFVar22 + 8) {
            if (*(longlong *)pFVar22 == lVar9) goto LAB_147b75dfc;
          }
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1606850396188309781>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                              ,0x6eb,"LinkedTo.Contains(ReferencingPin)");
          if (bVar12) goto code_r0x000147b75dfb;
          plVar29 = plVar29 + 2;
        }
        else if (cVar3 == '\x02') {
          uVar27 = *(uint *)(plVar29 + 1);
          uVar28 = 0;
          if ((int)uVar27 < *(int *)(lVar9 + 0xe0)) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          plVar29 = plVar29 + 2;
          *(UEdGraphPin **)(*(longlong *)(lVar9 + 0xd8) + (longlong)(int)uVar27 * 8) = this;
        }
        else if (cVar3 == '\x03') {
          *(UEdGraphPin **)(lVar9 + 0xe8) = this;
          plVar29 = plVar29 + 2;
        }
        else {
          if (cVar3 != '\x04') goto LAB_147b75dd2;
          *(UEdGraphPin **)(lVar9 + 0xf0) = this;
          plVar29 = plVar29 + 2;
        }
      } while( true );
    }
  }
  return;
}

// IsDefaultAsStringEmpty @ 147b77fb0

bool __thiscall UEdGraphPin::IsDefaultAsStringEmpty(UEdGraphPin *this)

{
  bool bVar1;
  
  if ((this->DefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    bVar1 = FText::IsEmpty(&this->DefaultTextValue);
    if ((bVar1) && ((this->DefaultValue).Data.ArrayNum < 2)) {
      return true;
    }
  }
  return false;
}

// MakeLinkTo @ 147b78c30

void __thiscall UEdGraphPin::MakeLinkTo(UEdGraphPin *this,UEdGraphPin *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UEdGraphNode *pUVar3;
  code *pcVar4;
  UEdGraphPin *pUVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UEdGraphPin *local_res10;
  UEdGraphPin *local_48;
  UEdGraphPin *local_40;
  UEdGraphPin **local_38;
  UEdGraphPin *local_30;
  UEdGraphPin **local_28;
  
  if (param_1 != (UEdGraphPin *)0x0) {
    local_res10 = param_1;
    if ((this->bWasTrashed != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bWasTrashed",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                           ,0x206,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar9 = &this->LinkedTo;
    pFVar8 = (pTVar9->AllocatorInstance).Data;
    pFVar2 = pFVar8 + (longlong)(this->LinkedTo).ArrayNum * 8;
    for (; pFVar8 != pFVar2; pFVar8 = pFVar8 + 8) {
      if (*(UEdGraphPin **)pFVar8 == local_res10) {
        return;
      }
    }
    if ((this->OwningNode == (UEdGraphNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwningNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\EdGraph\\EdGraphPin.h"
                           ,0x1d4,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar3 = this->OwningNode;
    pFVar8 = (local_res10->LinkedTo).AllocatorInstance.Data;
    pFVar2 = pFVar8 + (longlong)(local_res10->LinkedTo).ArrayNum * 8;
    for (; pFVar8 != pFVar2; pFVar8 = pFVar8 + 8) {
      if (*(UEdGraphPin **)pFVar8 == this) {
        local_38 = &local_res10;
        local_40 = this;
        `UEdGraphPin::MakeLinkTo'::__l15::<lambda_1>::operator()(&local_40);
        break;
      }
    }
    pUVar5 = local_res10;
    if ((local_res10->OwningNode == (UEdGraphNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwningNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\EdGraph\\EdGraphPin.h"
                           ,0x1d4,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pUVar3->_padding_ != pUVar5->OwningNode->_padding_) {
      local_28 = &local_res10;
      local_30 = this;
      `UEdGraphPin::MakeLinkTo'::__l15::<lambda_2>::operator()(&local_30);
    }
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->LinkedTo).ArrayMax * 8)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->LinkedTo).ArrayNum;
    piVar1 = &(this->LinkedTo).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar9->AllocatorInstance,piVar1);
    }
    pUVar5 = local_res10;
    (this->LinkedTo).ArrayNum = iVar7 + 1;
    *(UEdGraphPin **)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_res10;
    pTVar9 = &local_res10->LinkedTo;
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    local_48 = this;
    if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar2 + (longlong)(local_res10->LinkedTo).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (pUVar5->LinkedTo).ArrayNum;
    piVar1 = &(pUVar5->LinkedTo).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar9->AllocatorInstance,piVar1);
    }
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    (pUVar5->LinkedTo).ArrayNum = iVar7 + 1;
    *(UEdGraphPin **)(pFVar2 + (longlong)iVar7 * 8) = local_48;
    ConvertConnectedGhostNodesToRealNodes(pUVar3,param_2);
    pUVar5 = local_res10;
    if ((local_res10->OwningNode == (UEdGraphNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwningNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\EdGraph\\EdGraphPin.h"
                           ,0x1d4,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ConvertConnectedGhostNodesToRealNodes(pUVar5->OwningNode,param_2);
  }
  return;
}

// MarkAsGarbage @ 147b78f60

void __thiscall UEdGraphPin::MarkAsGarbage(UEdGraphPin *this)

{
  if (this->bWasTrashed == 0) {
    DestroyImpl(this,true);
    return;
  }
  return;
}

// Modify @ 147b78f90

bool __thiscall UEdGraphPin::Modify(UEdGraphPin *this,bool param_1)

{
  return false;
}

// MovePersistentDataFromOldPin @ 147b792e0

void __thiscall UEdGraphPin::MovePersistentDataFromOldPin(UEdGraphPin *this,UEdGraphPin *param_1)

{
  TransferPersistentDataFromOldPin<UEdGraphPin>(this,param_1,Move);
  (param_1->LinkedTo).ArrayNum = 0;
  if ((param_1->LinkedTo).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(param_1->LinkedTo).AllocatorInstance,0,&(param_1->LinkedTo).ArrayMax);
  }
  return;
}

// Purge @ 147b7ebf0

void __cdecl UEdGraphPin::Purge(void)

{
  FPinDeletionQueue *pFVar1;
  
  pFVar1 = FPinDeletionQueue::Get();
                    /* WARNING: Could not recover jumptable at 0x000147b7ec09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)pFVar1->_padding_)(pFVar1,0);
  return;
}

// ResolveAllPinReferences @ 147b85e30

void __cdecl UEdGraphPin::ResolveAllPinReferences(void)

{
  undefined8 *puVar1;
  UEdGraphPin *pUVar2;
  longlong *plVar3;
  int iVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this;
  longlong lVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this = (TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x8f00
            );
  TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_78,this);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar6 = local_78._24_8_ >> 0x20;
  local_18 = this;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      plVar3 = local_48;
      lVar9 = (longlong)(int)uVar6 * 0x30;
      puVar8 = (uint *)(*local_48 + lVar9);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar8 + 4));
      if (pUVar5 != (UObject *)0x0) {
        puVar7 = *(undefined8 **)(pUVar5 + 1);
        puVar1 = puVar7 + *(int *)&pUVar5[1].field_0x8;
        for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
          pUVar2 = (UEdGraphPin *)*puVar7;
          if ((pUVar2 != (UEdGraphPin *)0x0) &&
             ((((pUVar2->PinId).D == puVar8[3] && (pUVar2->PinId).C == puVar8[2]) &&
              (pUVar2->PinId).B == puVar8[1]) && (pUVar2->PinId).A == *puVar8)) {
            PinHelpers::ResolveReferencesToPin
                      (pUVar2,(TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> *)
                              (*plVar3 + 0x18 + lVar9),true);
            break;
          }
        }
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar6 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar4 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset(this);
  return;
}

// ResolveReferencesToPin @ 147b86610

void __cdecl UEdGraphPin::ResolveReferencesToPin(UEdGraphPin *param_1,bool param_2)

{
  UEdGraphNode *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  uint uVar7;
  longlong lVar8;
  TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this;
  uint uVar11;
  FWeakObjectPtr local_res8;
  UEdGraphNode *local_res18 [2];
  FPinResolveId local_48;
  
  if (param_1->bWasTrashed != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Pin->bWasTrashed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                       ,0x7d1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1 = param_1->OwningNode;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEdGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEdGraphNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  local_48.PinGuid.A = (param_1->PinId).A;
  local_48.PinGuid.B = (param_1->PinId).B;
  local_48.PinGuid.C = (param_1->PinId).C;
  local_48.PinGuid.D = (param_1->PinId).D;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_48.OwningNode.WeakPtr = local_res8;
  this = (TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *)(lVar2 + 0x8f00);
  uVar10 = local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex;
  uVar6 = CityHash64((char *)&local_48,0x10);
  uVar11 = (int)uVar6 - uVar10 ^ uVar10 >> 0xd;
  uVar7 = (-0x61c88647 - uVar11) - uVar10 ^ uVar11 << 8;
  uVar10 = (uVar10 - uVar7) - uVar11 ^ uVar7 >> 0xd;
  uVar11 = (uVar11 - uVar10) - uVar7 ^ uVar10 >> 0xc;
  uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar11 << 0x10;
  uVar10 = (uVar10 - uVar7) - uVar11 ^ uVar7 >> 5;
  uVar11 = (uVar11 - uVar10) - uVar7 ^ uVar10 >> 3;
  uVar7 = (uVar7 - uVar11) - uVar10 ^ uVar11 << 10;
  iVar5 = TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FPinResolveId>(this,uVar7 >> 0xf ^ (uVar10 - uVar7) - uVar11,&local_48);
  if (iVar5 != -1) {
    lVar8 = (longlong)iVar5 * 0x30 + *(longlong *)&this->Elements;
    pTVar9 = (TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> *)(lVar8 + 0x18);
    if (lVar8 == 0) {
      pTVar9 = (TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> *)0x0;
    }
    if (pTVar9 != (TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> *)0x0) {
      PinHelpers::ResolveReferencesToPin(param_1,pTVar9,param_2);
      if (*(int *)(lVar2 + 0x8f08) != *(int *)(lVar2 + 0x8f34)) {
        uVar7 = local_48.OwningNode.WeakPtr.ObjectSerialNumber ^
                local_48.OwningNode.WeakPtr.ObjectIndex;
        uVar6 = CityHash64((char *)&local_48,0x10);
        uVar11 = (int)uVar6 - uVar7 ^ uVar7 >> 0xd;
        uVar10 = (-0x61c88647 - uVar11) - uVar7 ^ uVar11 << 8;
        uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar10 >> 0xd;
        uVar11 = (uVar11 - uVar7) - uVar10 ^ uVar7 >> 0xc;
        uVar10 = (uVar10 - uVar11) - uVar7 ^ uVar11 << 0x10;
        uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar10 >> 5;
        uVar11 = (uVar11 - uVar7) - uVar10 ^ uVar7 >> 3;
        uVar10 = (uVar10 - uVar11) - uVar7 ^ uVar11 << 10;
        TSet<TTuple<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FPinResolveId>(this,(uVar7 - uVar10) - uVar11 ^ uVar10 >> 0xf,&local_48);
      }
    }
  }
  return;
}

// SanitizePinsPostUndoRedo @ 147b86c80

void __cdecl UEdGraphPin::SanitizePinsPostUndoRedo(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x8f08) != *(int *)(lVar1 + 0x8f34)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1606850396188309117>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                       ,0x983,"PinHelpers::UnresolvedPins.Num() == 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FGraphConnectionSanitizer::SanitizeConnectionsForCorruptGraphs(&GraphConnectionSanitizer);
  return;
}

// Serialize @ 147b891c0

bool __thiscall UEdGraphPin::Serialize(UEdGraphPin *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  uchar *puVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FString local_28;
  TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,this);
  ::operator<<(param_1,&this->PinId);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  if (iVar4 < 0x1f) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    this->PinName = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->PinName);
  }
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (0x31 < iVar4) {
    piVar1 = &this->SourceIndex;
    piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  ::operator<<(param_1,&this->PinToolTip);
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Direction,1);
  }
  else {
    (this->Direction).Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  FEdGraphPinType::Serialize(&this->PinType,param_1);
  ::operator<<(param_1,&this->DefaultValue);
  ::operator<<(param_1,&this->AutogeneratedDefaultValue);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->DefaultObject);
  (**(code **)(*(longlong *)param_1 + 0x170))(param_1,&this->DefaultTextValue);
  SerializePinArray(param_1,&this->LinkedTo,this,LinkedTo);
  SerializePinArray(param_1,&this->SubPins,this,SubPins);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SerializePin(param_1,&this->ParentPin,-1,this,ParentPin,&local_18);
  SerializePin(param_1,&this->ReferencePassThroughConnection,-1,this,ReferencePassThroughConnection,
               &local_18);
  if ((param_1->field_0x28 & 1) != 0) {
    ResolveReferencesToPin(this,true);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return true;
}

// SerializeAsOwningNode @ 147b89430

void __cdecl
UEdGraphPin::SerializeAsOwningNode
          (FArchive *param_1,TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *param_2)

{
  SerializePinArray(param_1,param_2,(UEdGraphPin *)0x0,OwningNode);
  return;
}

// SerializePin @ 147b8a1c0

bool __cdecl
UEdGraphPin::SerializePin
          (FArchive *param_1,UEdGraphPin **param_2,int param_3,UEdGraphPin *param_4,
          EPinResolveType param_5,TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *param_6)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  UEdGraphNode *pUVar10;
  TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_> *pTVar11;
  UEdGraphPin *pUVar12;
  FGuid *pFVar13;
  UEdGraphPin *pUVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  bool bVar17;
  uint local_res10 [2];
  int local_res18;
  UEdGraphPin *local_res20;
  FGuid local_118;
  UEdGraphNode *local_108;
  FWeakObjectPtr local_100;
  UEdGraphPin *local_f8;
  int iStack_f0;
  EPinResolveType EStack_ec;
  undefined1 uStack_eb;
  undefined2 uStack_ea;
  FName local_e8;
  UEdGraphNode *local_e0;
  FString local_d8;
  FPinResolveId local_c8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FGuid local_60 [2];
  
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  bVar17 = *param_2 == (UEdGraphPin *)0x0;
  pUVar14 = (UEdGraphPin *)0x0;
  puVar2 = (uint *)*puVar3 + 1;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((uint *)puVar3[1] < puVar2) {
    local_res10[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res10[0] = (uint)(*param_2 == (UEdGraphPin *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar8 = local_res10[0];
    if ((*puVar1 & 1) != 0) goto LAB_147b8a260;
  }
  else {
    uVar8 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
LAB_147b8a260:
    bVar17 = uVar8 != 0;
  }
  pUVar12 = local_res20;
  if (bVar17) {
    if ((*puVar1 & 1) == 0) {
      return true;
    }
    *param_2 = (UEdGraphPin *)0x0;
    return true;
  }
  local_108 = (UEdGraphNode *)0x0;
  local_118.A = 0;
  local_118.B = 0;
  local_118.C = 0;
  local_118.D = 0;
  if ((*puVar1 & 1) == 0) {
    if ((*param_2)->bWasTrashed != 0) {
      if (local_res20 == (UEdGraphPin *)0x0) {
        ::FName::ToString(&(*param_2)->PinName,&local_70);
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                            ,0x877,
                            L"Pin named %s was serialized while trashed with no requesting pin");
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (bVar17) goto code_r0x000147b8a47f;
      }
      else if (local_res20->bWasTrashed == 0) {
        pUVar10 = GetOwningNode(local_res20);
        local_e8 = (FName)pUVar10->_padding_;
        ::FName::ToString(&local_e8,&local_d8);
        ::FName::ToString(&pUVar12->PinName,&local_a0);
        ::FName::ToString(&(*param_2)->PinName,&local_b0);
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                            ,0x86e,
                            L"Pin named %s was serialized while trashed - requesting pin named %s owned by node %s"
                           );
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (bVar17) {
code_r0x000147b8a47f:
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return (bool)uVar7;
        }
      }
      else {
        ::FName::ToString(&local_res20->PinName,&local_80);
        ::FName::ToString(&(*param_2)->PinName,&local_90);
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                            ,0x872,
                            L"Pin named %s was serialized while trashed - requesting pin named %s");
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        if (bVar17) goto code_r0x000147b8a47f;
      }
    }
    pUVar12 = *param_2;
    local_108 = pUVar12->OwningNode;
    local_118.A = (pUVar12->PinId).A;
    local_118.B = (pUVar12->PinId).B;
    local_118.C = (pUVar12->PinId).C;
    local_118.D = (pUVar12->PinId).D;
  }
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_108);
  ::operator<<(param_1,&local_118);
  if ((param_5 == LinkedTo) && ((*puVar1 & 1) != 0)) {
    if (local_108 == (UEdGraphNode *)0x0) {
      *param_2 = (UEdGraphPin *)0x0;
    }
  }
  else if ((local_108 == (UEdGraphNode *)0x0) &&
          (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("LocalOwningNode",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                               ,0x88d,L""), bVar17)) {
    pcVar6 = (code *)swi(3);
    uVar7 = (*pcVar6)();
    return (bool)uVar7;
  }
  if (((local_118.D == 0 && local_118.C == 0) && local_118.B == 0) && local_118.A == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("PinGuid.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                        ,0x88f,L"");
    if (bVar17) {
      pcVar6 = (code *)swi(3);
      uVar7 = (*pcVar6)();
      return (bool)uVar7;
    }
  }
  pUVar10 = local_108;
  pUVar12 = local_res20;
  if (param_5 == OwningNode) {
    if ((param_1->field_0x28 & 1) != 0) {
      pFVar15 = (param_6->AllocatorInstance).Data;
      pFVar5 = pFVar15 + (longlong)param_6->ArrayNum * 8;
      for (; pFVar15 != pFVar5; pFVar15 = pFVar15 + 8) {
        pUVar12 = *(UEdGraphPin **)pFVar15;
        if ((pUVar12 != (UEdGraphPin *)0x0) &&
           (((local_118.D == (pUVar12->PinId).D && local_118.C == (pUVar12->PinId).C) &&
            local_118.B == (pUVar12->PinId).B) && local_118.A == (pUVar12->PinId).A)) {
          *param_2 = pUVar12;
          if ((pUVar12->bWasTrashed != 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!PinRef->bWasTrashed",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                                  ,0x8e9,L""), bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar7 = (*pcVar6)();
            return (bool)uVar7;
          }
          uVar16 = (uint)((longlong)pFVar15 - (longlong)(param_6->AllocatorInstance).Data >> 3);
          uVar8 = 0;
          if ((int)uVar16 < param_6->ArrayNum) {
            uVar8 = ~uVar16 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            uVar7 = (*pcVar6)();
            return (bool)uVar7;
          }
          pFVar5 = (param_6->AllocatorInstance).Data;
          iVar9 = param_6->ArrayNum + ~uVar16;
          if (1 < iVar9) {
            iVar9 = 1;
          }
          if (iVar9 != 0) {
            memmove(pFVar5 + (longlong)(int)uVar16 * 8,
                    pFVar5 + (longlong)(param_6->ArrayNum - iVar9) * 8,(longlong)iVar9 << 3);
          }
          iVar9 = param_6->ArrayNum + -1;
          param_6->ArrayNum = iVar9;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&param_6->AllocatorInstance,iVar9,&param_6->ArrayMax);
          goto LAB_147b8a827;
        }
      }
      if ((local_108 == (UEdGraphNode *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InOwningNode",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                              ,0x1fd,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar7 = (*pcVar6)();
        return (bool)uVar7;
      }
      pUVar12 = ::operator_new(0xf8);
      if (pUVar12 != (UEdGraphPin *)0x0) {
        pFVar13 = FGuid::NewGuid(local_60);
        pUVar14 = UEdGraphPin(pUVar12,pUVar10,pFVar13);
      }
      *param_2 = pUVar14;
    }
LAB_147b8a827:
    Serialize(*param_2,param_1);
    if ((*param_2)->bWasTrashed == 0) {
      return true;
    }
    iVar9 = 0x8f3;
  }
  else {
    if (local_108 == (UEdGraphNode *)0x0) {
      return true;
    }
    if ((*puVar1 & 1) == 0) {
      return true;
    }
    pFVar15 = (local_108->Pins).AllocatorInstance.Data;
    pFVar5 = pFVar15 + (longlong)(local_108->Pins).ArrayNum * 8;
    while( true ) {
      if (pFVar15 == pFVar5) {
        if ((local_res20 == (UEdGraphPin *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("RequestingPin",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                                ,0x8a2,L""), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return (bool)uVar7;
        }
        pUVar10 = local_108;
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_108 != (UEdGraphNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_108);
        }
        local_100.ObjectIndex = 0;
        local_100.ObjectSerialNumber = 0;
        local_e0 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UEdGraphNode *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_e0);
        local_c8.OwningNode.WeakPtr = local_100;
        local_c8.PinGuid.A = local_118.A;
        local_c8.PinGuid.B = local_118.B;
        local_c8.PinGuid.C = local_118.C;
        local_c8.PinGuid.D = local_118.D;
        uVar8 = ::GetTypeHash(&local_c8);
        pTVar11 = TMapBase<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindOrAddImpl<FPinResolveId>
                            ((TMapBase<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPinResolveId,TArray<FUnresolvedPinData,TSizedDefaultAllocator<32>_>,0>_>
                              *)(lVar4 + 0x8f00),uVar8,&local_c8);
        local_f8 = pUVar12;
        iStack_f0 = local_res18;
        pFVar5 = (pTVar11->AllocatorInstance).Data;
        EStack_ec = param_5;
        uStack_eb = 0;
        if (((pFVar5 <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 < pFVar5 + (longlong)pTVar11->ArrayMax * 0x10)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          uVar7 = (*pcVar6)();
          return (bool)uVar7;
        }
        iVar9 = pTVar11->ArrayNum;
        if (iVar9 == pTVar11->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
        }
        pTVar11->ArrayNum = iVar9 + 1;
        pFVar5 = (pTVar11->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
        *(UEdGraphPin **)pFVar5 = local_f8;
        *(ulonglong *)(pFVar5 + 8) =
             CONCAT26(uStack_ea,CONCAT15(uStack_eb,CONCAT14(EStack_ec,iStack_f0)));
        return false;
      }
      pUVar14 = *(UEdGraphPin **)pFVar15;
      if ((pUVar14 != (UEdGraphPin *)0x0) &&
         (((local_118.D == (pUVar14->PinId).D && local_118.C == (pUVar14->PinId).C) &&
          local_118.B == (pUVar14->PinId).B) && local_118.A == (pUVar14->PinId).A)) break;
      pFVar15 = pFVar15 + 8;
    }
    *param_2 = pUVar14;
    if (pUVar14->bWasTrashed == 0) {
      return true;
    }
    iVar9 = 0x89e;
  }
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("!PinRef->bWasTrashed",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                      ,iVar9,L"");
  if (!bVar17) {
    return true;
  }
  pcVar6 = (code *)swi(3);
  uVar7 = (*pcVar6)();
  return (bool)uVar7;
}

// SerializePinArray @ 147b8a970

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UEdGraphPin::SerializePinArray
          (FArchive *param_1,TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> *param_2,
          UEdGraphPin *param_3,EPinResolveType param_4)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ForAnyElementType *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ForAnyElementType FVar10;
  undefined4 local_res8 [2];
  uint local_res10 [2];
  ForAnyElementType local_68;
  int local_60;
  int iStack_5c;
  TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_> local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  pFVar9 = (FScriptContainerElement *)0x0;
  local_res8[0] = 0;
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = param_2->ArrayNum;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (((param_1->field_0x28 & 1) == 0) || (param_4 != OwningNode)) {
    local_40 = 0;
    pFVar7 = &local_48;
    bVar4 = false;
    bVar5 = true;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    iVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = iVar1;
    if (iVar1 == 0) {
      pFVar7 = &local_68;
      iStack_5c = 0;
      bVar4 = true;
      bVar5 = false;
      local_58.AllocatorInstance.Data = pFVar9;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&local_68,iVar1,&iStack_5c);
      memcpy(local_68.Data,_Src,(longlong)iVar1 << 3);
      pFVar7 = &local_68;
      bVar4 = true;
      bVar5 = false;
      local_58.AllocatorInstance.Data = local_68.Data;
    }
  }
  pFVar7->Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = *(int *)&pFVar7[1].Data;
  local_58.ArrayMax = *(int *)((longlong)&pFVar7[1].Data + 4);
  pFVar7[1].Data = (FScriptContainerElement *)0x0;
  if (bVar5) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  if ((bVar4) && (local_68.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    TArray<UEdGraphPin_*,TSizedDefaultAllocator<32>_>::SetNum(param_2,local_res10[0],Default);
  }
  if (0 < (int)local_res10[0]) {
    do {
      uVar8 = (uint)pFVar9;
      uVar6 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SerializePin(param_1,(UEdGraphPin **)
                           ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8),uVar8,
                   param_3,param_4,&local_58);
      pFVar9 = (FScriptContainerElement *)(ulonglong)(uVar8 + 1);
    } while ((int)(uVar8 + 1) < (int)local_res10[0]);
  }
  iVar1 = local_58.ArrayNum;
  pFVar9 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8;
  FVar10.Data = local_58.AllocatorInstance.Data;
  while( true ) {
    if (local_58.ArrayNum != iVar1) {
      `TCheckedPointerIterator<UEdGraphPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar10.Data == pFVar9) break;
    if ((*(UEdGraphPin **)FVar10.Data)->bWasTrashed == 0) {
      DestroyImpl(*(UEdGraphPin **)FVar10.Data,false);
    }
    FVar10.Data = FVar10.Data + 8;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// SetOwningNode @ 147b8c680

void __thiscall UEdGraphPin::SetOwningNode(UEdGraphPin *this,UEdGraphNode *param_1)

{
  int *piVar1;
  UEdGraphNode *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  UEdGraphPin *local_28 [2];
  
  pUVar2 = this->OwningNode;
  if (pUVar2 != (UEdGraphNode *)0x0) {
    pFVar3 = (pUVar2->Pins).AllocatorInstance.Data;
    iVar8 = (pUVar2->Pins).ArrayNum;
    for (pFVar10 = pFVar3; pFVar10 != pFVar3 + (longlong)iVar8 * 8; pFVar10 = pFVar10 + 8) {
      if (*(UEdGraphPin **)pFVar10 == this) {
        uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar3 >> 3);
        if (uVar9 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar9 < iVar8) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (pUVar2->Pins).ArrayNum + ~uVar9;
          pFVar3 = (pUVar2->Pins).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
          if (iVar8 != 0) {
            memmove(pFVar3,pFVar3 + 8,(longlong)iVar8 << 3);
          }
          piVar1 = &(pUVar2->Pins).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&(pUVar2->Pins).AllocatorInstance,(pUVar2->Pins).ArrayNum,
                     &(pUVar2->Pins).ArrayMax);
        }
        break;
      }
    }
  }
  this->OwningNode = param_1;
  if (param_1 != (UEdGraphNode *)0x0) {
    pFVar3 = (param_1->Pins).AllocatorInstance.Data;
    iVar8 = (param_1->Pins).ArrayNum;
    for (pFVar10 = pFVar3; pFVar10 != pFVar3 + (longlong)iVar8 * 8; pFVar10 = pFVar10 + 8) {
      lVar4 = *(longlong *)pFVar10;
      if ((lVar4 != 0) &&
         (((*(uint *)(lVar4 + 0x14) == (this->PinId).D && *(uint *)(lVar4 + 0xc) == (this->PinId).B)
          && *(uint *)(lVar4 + 8) == (this->PinId).A) && *(uint *)(lVar4 + 0x10) == (this->PinId).C)
         ) {
        uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar3 >> 3);
        if (uVar9 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar9 < iVar8) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(UEdGraphPin **)((param_1->Pins).AllocatorInstance.Data + (longlong)(int)uVar9 * 8)
              == this) {
            return;
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewOwningNode->Pins[ExistingPinIdx] == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                             ,0x409,L"");
          if (!bVar6) {
            return;
          }
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        break;
      }
    }
    local_28[0] = this;
    if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)(param_1->Pins).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (param_1->Pins).ArrayNum;
    piVar1 = &(param_1->Pins).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(param_1->Pins).AllocatorInstance,piVar1);
    }
    (param_1->Pins).ArrayNum = iVar8 + 1;
    *(UEdGraphPin **)((param_1->Pins).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_28[0];
  }
  return;
}

// ShutdownVerification @ 147b8e4f0

void __cdecl UEdGraphPin::ShutdownVerification(void)

{
  FPinDeletionQueue *pFVar1;
  
  pFVar1 = FPinDeletionQueue::Get();
                    /* WARNING: Could not recover jumptable at 0x000147b8e509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)pFVar1->_padding_)(pFVar1,0);
  return;
}

// operator() @ 150519570

bool __thiscall `UEdGraphPin::BreakLinkTo'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FText *pFVar7;
  void *pvVar8;
  uint uStackX_14;
  FText local_28;
  FText local_18;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1606850396188310874>);
  if (bVar5) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"EdGraph",L"NotLinked",L"not reciprocally linked with pin");
    FText::ToString(pFVar7);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"EdGraph",L"BreakLinkTo",L"BreakLinkTo");
    FText::ToString(pFVar7);
    pvVar8 = (void *)0x0;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1606850396188310874>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15051961b;
    }
  }
  else {
    pvVar8 = (void *)((ulonglong)uStackX_14 << 0x20);
  }
  bVar5 = false;
LAB_15051961b:
  if ((bVar2) && (pvVar8 != (void *)0x0)) {
    FMemory::Free(pvVar8);
  }
  if (bVar3) {
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if ((bVar4) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 150519680

bool __thiscall `UEdGraphPin::MakeLinkTo'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FText *pFVar7;
  void *pvVar8;
  uint uStackX_14;
  FText local_28;
  FText local_18;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1606850396188311026>);
  if (bVar5) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"EdGraph",L"IsLinked",L"is linked with pin");
    FText::ToString(pFVar7);
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_28,L"EdGraph",L"MakeLinkTo",L"MakeLinkTo")
    ;
    FText::ToString(pFVar7);
    pvVar8 = (void *)0x0;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1606850396188311026>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15051972b;
    }
  }
  else {
    pvVar8 = (void *)((ulonglong)uStackX_14 << 0x20);
  }
  bVar5 = false;
LAB_15051972b:
  if ((bVar2) && (pvVar8 != (void *)0x0)) {
    FMemory::Free(pvVar8);
  }
  if (bVar3) {
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if ((bVar4) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 150519790

bool __thiscall `UEdGraphPin::BreakLinkTo'::__l17::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FText *pFVar7;
  void *pvVar8;
  uint uStackX_14;
  FText local_28;
  FText local_18;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1606850396188310852>);
  if (bVar5) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"EdGraph",L"IsLinked",L"is linked with pin");
    FText::ToString(pFVar7);
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_28,L"EdGraph",L"MakeLinkTo",L"MakeLinkTo")
    ;
    FText::ToString(pFVar7);
    pvVar8 = (void *)0x0;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1606850396188310852>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15051983b;
    }
  }
  else {
    pvVar8 = (void *)((ulonglong)uStackX_14 << 0x20);
  }
  bVar5 = false;
LAB_15051983b:
  if ((bVar2) && (pvVar8 != (void *)0x0)) {
    FMemory::Free(pvVar8);
  }
  if (bVar3) {
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if ((bVar4) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 1505198a0

bool __thiscall `UEdGraphPin::MakeLinkTo'::__l15::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FText *pFVar7;
  void *pvVar8;
  uint uStackX_14;
  FText local_28;
  FText local_18;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1606850396188311025>);
  if (bVar5) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"EdGraph",L"OuterMismatch",L"has a different outer than pin");
    FText::ToString(pFVar7);
    pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_28,L"EdGraph",L"MakeLinkTo",L"MakeLinkTo")
    ;
    FText::ToString(pFVar7);
    pvVar8 = (void *)0x0;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1606850396188311025>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15051994b;
    }
  }
  else {
    pvVar8 = (void *)((ulonglong)uStackX_14 << 0x20);
  }
  bVar5 = false;
LAB_15051994b:
  if ((bVar2) && (pvVar8 != (void *)0x0)) {
    FMemory::Free(pvVar8);
  }
  if (bVar3) {
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if ((bVar4) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

