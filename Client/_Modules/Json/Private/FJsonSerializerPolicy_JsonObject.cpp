// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 32

// SerializeIfArray<char,TCondensedJsonPrintPolicy<char>_> @ 141daf8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfArray<char,TCondensedJsonPrintPolicy<char>_>
          (TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
           *param_1,TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_2,
          TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *param_3,bool param_4)

{
  int *piVar1;
  EJsonToken EVar2;
  FElement *pFVar3;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 local_res10 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  TReferenceControllerBase<1> *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  
  pFVar3 = param_2->Object;
  if (((pFVar3->Value).Object == (FJsonValue *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  if (((pFVar3->Value).Object)->Type == Array) {
    if (param_2->Object->bHasBeenProcessed == false) {
      param_2->Object->bHasBeenProcessed = true;
      pTVar4 = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
               (param_1->AllocatorInstance).Data;
      if (((pTVar4 <= param_2) && (param_2 < pTVar4 + param_1->ArrayMax)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      iVar13 = param_1->ArrayNum;
      if (iVar13 == param_1->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar13 + 1;
      pFVar16 = (param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
      *(FElement **)pFVar16 = param_2->Object;
      pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_4) {
        bVar11 = TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::CanWriteValueWithoutIdentifier
                           (param_3);
        if ((!bVar11) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("CanWriteValueWithoutIdentifier()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0x9b,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        EVar2 = param_3->PreviousTokenWritten;
        if ((EVar2 != CurlyOpen) && ((Identifier < EVar2 || ((0x1013U >> (EVar2 & 0x1f) & 1) == 0)))
           ) {
          local_res10[0] = 0x2c;
          (**(code **)(*(longlong *)param_3->Stream + 0x188))(param_3->Stream,local_res10,1);
          param_3->PreviousTokenWritten = Comma;
        }
        local_78[0] = 0x5b;
        (**(code **)(*(longlong *)param_3->Stream + 0x188))(param_3->Stream,local_78,1);
        param_3->IndentLevel = param_3->IndentLevel + 1;
        pFVar16 = (param_3->Stack).AllocatorInstance.Data;
        local_68 = 5;
        if (((pFVar16 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar16 + (longlong)(param_3->Stack).ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        iVar13 = (param_3->Stack).ArrayNum;
        piVar1 = &(param_3->Stack).ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(param_3->Stack).AllocatorInstance,piVar1);
        }
        (param_3->Stack).ArrayNum = iVar13 + 1;
        *(undefined4 *)((param_3->Stack).AllocatorInstance.Data + (longlong)iVar13 * 4) = local_68;
      }
      else {
        iVar13 = (param_3->Stack).ArrayNum;
        pFVar3 = param_2->Object;
        uVar15 = iVar13 - 1;
        uVar17 = 0;
        if ((int)uVar15 < iVar13) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        if ((*(int *)((param_3->Stack).AllocatorInstance.Data +
                     (longlong)(param_3->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0xad,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteIdentifier
                  (param_3,&pFVar3->Identifier);
        local_70[0] = 0x5b;
        (**(code **)(*(longlong *)param_3->Stream + 0x188))(param_3->Stream,local_70,1);
        param_3->IndentLevel = param_3->IndentLevel + 1;
        pFVar16 = (param_3->Stack).AllocatorInstance.Data;
        local_64 = 5;
        if (((pFVar16 <= (FScriptContainerElement *)&local_64) &&
            ((FScriptContainerElement *)&local_64 <
             pFVar16 + (longlong)(param_3->Stack).ArrayMax * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        iVar13 = (param_3->Stack).ArrayNum;
        piVar1 = &(param_3->Stack).ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(param_3->Stack).AllocatorInstance,piVar1);
        }
        pFVar16 = (param_3->Stack).AllocatorInstance.Data;
        (param_3->Stack).ArrayNum = iVar13 + 1;
        *(undefined4 *)(pFVar16 + (longlong)iVar13 * 4) = local_64;
      }
      param_3->PreviousTokenWritten = SquareOpen;
      pFVar3 = param_2->Object;
      if (((pFVar3->Value).Object == (FJsonValue *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      pTVar14 = FJsonValue::AsArray((pFVar3->Value).Object);
      local_60.Data = (FScriptContainerElement *)0x0;
      iVar13 = pTVar14->ArrayNum;
      pTVar6 = (TSharedPtr<FJsonValue,1> *)(pTVar14->AllocatorInstance).Data;
      local_58 = iVar13;
      if (iVar13 == 0) {
        local_54 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar13,0,&local_60,iVar13,&local_54);
        ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                  (local_60.Data,pTVar6,iVar13);
      }
      pTVar9 = _UNK_150651568;
      pTVar5 = ___xmm_00000000000000000000000000000010;
      uVar17 = local_58 - 1;
      if (-1 < (int)uVar17) {
        lVar18 = (longlong)(int)uVar17 << 4;
        do {
          uVar15 = 0;
          if ((int)uVar17 < local_58) {
            uVar15 = ~uVar17 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          FVar10.Data = local_60.Data;
          pTStack_48 = ::operator_new(0x38);
          if (pTStack_48 == (TReferenceControllerBase<1> *)0x0) {
            pTStack_48 = pTVar9;
            local_50 = pTVar5;
          }
          else {
            pTStack_48->SharedReferenceCount = (atomic<int>)0x1;
            pTStack_48->WeakReferenceCount = (atomic<int>)0x1;
            pTStack_48->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
            ;
            pTStack_48[1]._padding_ = 0;
            pTStack_48[1].SharedReferenceCount = (atomic<int>)0x0;
            pTStack_48[1].WeakReferenceCount = (atomic<int>)0x0;
            pTStack_48[2]._padding_ = *(longlong *)(FVar10.Data + lVar18);
            lVar7 = *(longlong *)(FVar10.Data + lVar18 + 8);
            pTStack_48[2].SharedReferenceCount = (atomic<int>)(int)lVar7;
            pTStack_48[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar7 >> 0x20);
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            local_50 = pTStack_48 + 1;
            *(undefined2 *)&pTStack_48[3]._padding_ = 0;
            if ((local_50 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              uVar12 = (*pcVar8)();
              return (bool)uVar12;
            }
          }
          pFVar16 = (param_1->AllocatorInstance).Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_50) &&
              ((FScriptContainerElement *)&local_50 < pFVar16 + (longlong)param_1->ArrayMax * 0x10))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          iVar13 = param_1->ArrayNum;
          if (iVar13 == param_1->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar13 + 1;
          pFVar16 = (param_1->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
          *(TReferenceControllerBase<1> **)pFVar16 = local_50;
          *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTStack_48;
          if (pTStack_48 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_48->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_48->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_48);
          lVar18 = lVar18 + -0x10;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_60.Data,local_58);
      if ((TSharedPtr<FJsonValue,1> *)local_60.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_60.Data);
      }
      bVar11 = true;
    }
    else {
      TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteArrayEnd(param_3);
      bVar11 = true;
    }
  }
  else {
    bVar11 = false;
  }
  return bVar11;
}

// SerializeIfArray<char8_t,TCondensedJsonPrintPolicy<char8_t>_> @ 141daff50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfArray<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
          (TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
           *param_1,TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_2,
          TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *param_3,bool param_4)

{
  int *piVar1;
  FElement *pFVar2;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FJsonValue,1> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 local_res10 [8];
  undefined4 local_68 [2];
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  TReferenceControllerBase<1> *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  
  pFVar2 = param_2->Object;
  if (((pFVar2->Value).Object == (FJsonValue *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  if (((pFVar2->Value).Object)->Type == Array) {
    if (param_2->Object->bHasBeenProcessed == false) {
      param_2->Object->bHasBeenProcessed = true;
      pTVar3 = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
               (param_1->AllocatorInstance).Data;
      if (((pTVar3 <= param_2) && (param_2 < pTVar3 + param_1->ArrayMax)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == param_1->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar12 + 1;
      pFVar15 = (param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(FElement **)pFVar15 = param_2->Object;
      pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_4) {
        TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayStart(param_3);
      }
      else {
        iVar12 = (param_3->Stack).ArrayNum;
        pFVar2 = param_2->Object;
        uVar14 = iVar12 - 1;
        uVar16 = 0;
        if ((int)uVar14 < iVar12) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        if ((*(int *)((param_3->Stack).AllocatorInstance.Data +
                     (longlong)(param_3->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Stack.Top() == EJson::Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                ,0xad,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteIdentifier
                  (param_3,&pFVar2->Identifier);
        local_res10[0] = 0x5b;
        (**(code **)(*(longlong *)param_3->Stream + 0x188))(param_3->Stream,local_res10,1);
        param_3->IndentLevel = param_3->IndentLevel + 1;
        pFVar15 = (param_3->Stack).AllocatorInstance.Data;
        local_68[0] = 5;
        if (((pFVar15 <= (FScriptContainerElement *)local_68) &&
            ((FScriptContainerElement *)local_68 < pFVar15 + (longlong)(param_3->Stack).ArrayMax * 4
            )) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        iVar12 = (param_3->Stack).ArrayNum;
        piVar1 = &(param_3->Stack).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(param_3->Stack).AllocatorInstance,piVar1);
        }
        pFVar15 = (param_3->Stack).AllocatorInstance.Data;
        (param_3->Stack).ArrayNum = iVar12 + 1;
        *(undefined4 *)(pFVar15 + (longlong)iVar12 * 4) = local_68[0];
        param_3->PreviousTokenWritten = SquareOpen;
      }
      pFVar2 = param_2->Object;
      if (((pFVar2->Value).Object == (FJsonValue *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      pTVar13 = FJsonValue::AsArray((pFVar2->Value).Object);
      local_60.Data = (FScriptContainerElement *)0x0;
      iVar12 = pTVar13->ArrayNum;
      pTVar5 = (TSharedPtr<FJsonValue,1> *)(pTVar13->AllocatorInstance).Data;
      local_58 = iVar12;
      if (iVar12 == 0) {
        local_54 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar12,0,&local_60,iVar12,&local_54);
        ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
                  (local_60.Data,pTVar5,iVar12);
      }
      pTVar8 = _UNK_150651568;
      pTVar4 = ___xmm_00000000000000000000000000000010;
      uVar16 = local_58 - 1;
      if (-1 < (int)uVar16) {
        lVar17 = (longlong)(int)uVar16 << 4;
        do {
          uVar14 = 0;
          if ((int)uVar16 < local_58) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          FVar9.Data = local_60.Data;
          pTStack_48 = ::operator_new(0x38);
          if (pTStack_48 == (TReferenceControllerBase<1> *)0x0) {
            pTStack_48 = pTVar8;
            local_50 = pTVar4;
          }
          else {
            pTStack_48->SharedReferenceCount = (atomic<int>)0x1;
            pTStack_48->WeakReferenceCount = (atomic<int>)0x1;
            pTStack_48->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
            ;
            pTStack_48[1]._padding_ = 0;
            pTStack_48[1].SharedReferenceCount = (atomic<int>)0x0;
            pTStack_48[1].WeakReferenceCount = (atomic<int>)0x0;
            pTStack_48[2]._padding_ = *(longlong *)(FVar9.Data + lVar17);
            lVar6 = *(longlong *)(FVar9.Data + lVar17 + 8);
            pTStack_48[2].SharedReferenceCount = (atomic<int>)(int)lVar6;
            pTStack_48[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar6 >> 0x20);
            if (lVar6 != 0) {
              LOCK();
              *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
              UNLOCK();
            }
            local_50 = pTStack_48 + 1;
            *(undefined2 *)&pTStack_48[3]._padding_ = 0;
            if ((local_50 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
          }
          pFVar15 = (param_1->AllocatorInstance).Data;
          if (((pFVar15 <= (FScriptContainerElement *)&local_50) &&
              ((FScriptContainerElement *)&local_50 < pFVar15 + (longlong)param_1->ArrayMax * 0x10))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          iVar12 = param_1->ArrayNum;
          if (iVar12 == param_1->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar12 + 1;
          pFVar15 = (param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(TReferenceControllerBase<1> **)pFVar15 = local_50;
          *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTStack_48;
          if (pTStack_48 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_48->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_48->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_48);
          lVar17 = lVar17 + -0x10;
          uVar16 = uVar16 - 1;
        } while (-1 < (int)uVar16);
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_60.Data,local_58);
      if ((TSharedPtr<FJsonValue,1> *)local_60.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_60.Data);
      }
      bVar10 = true;
    }
    else {
      TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteArrayEnd(param_3);
      bVar10 = true;
    }
  }
  else {
    bVar10 = false;
  }
  return bVar10;
}

// SerializeIfArray<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 141db04b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfArray<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
           *param_1,TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_2,
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *param_3,bool param_4)

{
  FElement *pFVar1;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  pFVar1 = param_2->Object;
  if (((pFVar1->Value).Object == (FJsonValue *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  if (((pFVar1->Value).Object)->Type != Array) {
    return false;
  }
  if (param_2->Object->bHasBeenProcessed != false) {
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_3);
    return true;
  }
  param_2->Object->bHasBeenProcessed = true;
  pTVar2 = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
           (param_1->AllocatorInstance).Data;
  if (((pTVar2 <= param_2) && (param_2 < pTVar2 + param_1->ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  iVar11 = param_1->ArrayNum;
  if (iVar11 == param_1->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar11 + 1;
  pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
  *(FElement **)pFVar14 = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_4) {
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart(param_3);
  }
  else {
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart<FString_&>
              (param_3,&param_2->Object->Identifier);
  }
  pFVar1 = param_2->Object;
  if (((pFVar1->Value).Object == (FJsonValue *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pTVar13 = FJsonValue::AsArray((pFVar1->Value).Object);
  local_58.Data = (FScriptContainerElement *)0x0;
  iVar11 = pTVar13->ArrayNum;
  pTVar4 = (TSharedPtr<FJsonValue,1> *)(pTVar13->AllocatorInstance).Data;
  local_50 = iVar11;
  if (iVar11 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_58,iVar11,&local_4c);
    ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
              (local_58.Data,pTVar4,iVar11);
  }
  pTVar7 = _UNK_150651568;
  pTVar3 = ___xmm_00000000000000000000000000000010;
  uVar15 = local_50 - 1;
  if (-1 < (int)uVar15) {
    lVar16 = (longlong)(int)uVar15 << 4;
    do {
      uVar12 = 0;
      if ((int)uVar15 < local_50) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      FVar8.Data = local_58.Data;
      pTStack_40 = ::operator_new(0x38);
      if (pTStack_40 == (TReferenceControllerBase<1> *)0x0) {
        pTStack_40 = pTVar7;
        local_48 = pTVar3;
      }
      else {
        pTStack_40->SharedReferenceCount = (atomic<int>)0x1;
        pTStack_40->WeakReferenceCount = (atomic<int>)0x1;
        pTStack_40->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
        ;
        pTStack_40[1]._padding_ = 0;
        pTStack_40[1].SharedReferenceCount = (atomic<int>)0x0;
        pTStack_40[1].WeakReferenceCount = (atomic<int>)0x0;
        pTStack_40[2]._padding_ = *(longlong *)(FVar8.Data + lVar16);
        lVar5 = *(longlong *)(FVar8.Data + lVar16 + 8);
        pTStack_40[2].SharedReferenceCount = (atomic<int>)(int)lVar5;
        pTStack_40[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar5 >> 0x20);
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        local_48 = pTStack_40 + 1;
        *(undefined2 *)&pTStack_40[3]._padding_ = 0;
        if ((local_48 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
      }
      pFVar14 = (param_1->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar14 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == param_1->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(TReferenceControllerBase<1> **)pFVar14 = local_48;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTStack_40;
      if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      lVar16 = lVar16 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>((TSharedPtr<FJsonValue,1> *)local_58.Data,local_50);
  if ((TSharedPtr<FJsonValue,1> *)local_58.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return true;
}

// SerializeIfArray<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 141db08e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfArray<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
           *param_1,TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_2,
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_3,bool param_4)

{
  FElement *pFVar1;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TReferenceControllerBase<1> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  pFVar1 = param_2->Object;
  if (((pFVar1->Value).Object == (FJsonValue *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  if (((pFVar1->Value).Object)->Type != Array) {
    return false;
  }
  if (param_2->Object->bHasBeenProcessed != false) {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_3);
    return true;
  }
  param_2->Object->bHasBeenProcessed = true;
  pTVar2 = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
           (param_1->AllocatorInstance).Data;
  if (((pTVar2 <= param_2) && (param_2 < pTVar2 + param_1->ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  iVar11 = param_1->ArrayNum;
  if (iVar11 == param_1->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar11 + 1;
  pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
  *(FElement **)pFVar14 = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_4) {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart(param_3);
  }
  else {
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<FString_&>
              (param_3,&param_2->Object->Identifier);
  }
  pFVar1 = param_2->Object;
  if (((pFVar1->Value).Object == (FJsonValue *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pTVar13 = FJsonValue::AsArray((pFVar1->Value).Object);
  local_58.Data = (FScriptContainerElement *)0x0;
  iVar11 = pTVar13->ArrayNum;
  pTVar4 = (TSharedPtr<FJsonValue,1> *)(pTVar13->AllocatorInstance).Data;
  local_50 = iVar11;
  if (iVar11 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,0,&local_58,iVar11,&local_4c);
    ConstructItems<TSharedPtr<FJsonValue,1>,TSharedPtr<FJsonValue,1>,int>
              (local_58.Data,pTVar4,iVar11);
  }
  pTVar7 = _UNK_150651568;
  pTVar3 = ___xmm_00000000000000000000000000000010;
  uVar15 = local_50 - 1;
  if (-1 < (int)uVar15) {
    lVar16 = (longlong)(int)uVar15 << 4;
    do {
      uVar12 = 0;
      if ((int)uVar15 < local_50) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      FVar8.Data = local_58.Data;
      pTStack_40 = ::operator_new(0x38);
      if (pTStack_40 == (TReferenceControllerBase<1> *)0x0) {
        pTStack_40 = pTVar7;
        local_48 = pTVar3;
      }
      else {
        pTStack_40->SharedReferenceCount = (atomic<int>)0x1;
        pTStack_40->WeakReferenceCount = (atomic<int>)0x1;
        pTStack_40->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
        ;
        pTStack_40[1]._padding_ = 0;
        pTStack_40[1].SharedReferenceCount = (atomic<int>)0x0;
        pTStack_40[1].WeakReferenceCount = (atomic<int>)0x0;
        pTStack_40[2]._padding_ = *(longlong *)(FVar8.Data + lVar16);
        lVar5 = *(longlong *)(FVar8.Data + lVar16 + 8);
        pTStack_40[2].SharedReferenceCount = (atomic<int>)(int)lVar5;
        pTStack_40[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar5 >> 0x20);
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        local_48 = pTStack_40 + 1;
        *(undefined2 *)&pTStack_40[3]._padding_ = 0;
        if ((local_48 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
      }
      pFVar14 = (param_1->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar14 + (longlong)param_1->ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == param_1->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(TReferenceControllerBase<1> **)pFVar14 = local_48;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTStack_40;
      if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      lVar16 = lVar16 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>((TSharedPtr<FJsonValue,1> *)local_58.Data,local_50);
  if ((TSharedPtr<FJsonValue,1> *)local_58.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return true;
}

// SerializeIfBool<char,TCondensedJsonPrintPolicy<char>_> @ 141db0d10

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfBool<char,TCondensedJsonPrintPolicy<char>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  int iVar2;
  FElement *pFVar3;
  FJsonValue *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TStringView<wchar_t> *pTVar11;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_c;
  
  pFVar3 = param_1->Object;
  if ((pFVar3->Value).Object == (FJsonValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if (((pFVar3->Value).Object)->Type == Boolean) {
    pFVar3 = param_1->Object;
    pFVar4 = (pFVar3->Value).Object;
    if (param_3) {
      if (pFVar4 == (FJsonValue *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      bVar6 = FJsonValue::AsBool((pFVar3->Value).Object);
      bVar8 = TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::CanWriteValueWithoutIdentifier
                        (param_2);
      if (!bVar8) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      EVar1 = param_2->PreviousTokenWritten;
      if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0))))
      {
        local_res8[0] = 0x2c;
        (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,1);
        param_2->PreviousTokenWritten = Comma;
      }
      if (bVar6) {
        local_68.Size = 4;
        local_68.DataPtr = L"true";
      }
      else {
        local_68.Size = 5;
        local_68.DataPtr = L"false";
        local_3c = local_2c;
      }
      local_68._12_4_ = local_3c;
      pTVar11 = &local_68;
    }
    else {
      if (pFVar4 == (FJsonValue *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      bVar6 = FJsonValue::AsBool((pFVar3->Value).Object);
      iVar2 = (param_2->Stack).ArrayNum;
      pFVar3 = param_1->Object;
      uVar10 = iVar2 - 1;
      uVar9 = 0;
      if ((int)uVar10 < iVar2) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                  (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteIdentifier
                (param_2,&pFVar3->Identifier);
      if (bVar6) {
        local_68.Size = 4;
        local_68.DataPtr = L"true";
      }
      else {
        local_68.Size = 5;
        local_68.DataPtr = L"false";
        local_1c = local_c;
      }
      local_68._12_4_ = local_1c;
      pTVar11 = &local_58;
      local_58.DataPtr = local_68.DataPtr;
      local_58.Size = local_68.Size;
      local_58._12_4_ = local_1c;
    }
    TJsonPrintPolicy<char>::WriteString(param_2->Stream,pTVar11);
    param_2->PreviousTokenWritten = (bVar6 ^ 1) + True;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// SerializeIfBool<char8_t,TCondensedJsonPrintPolicy<char8_t>_> @ 141db0fd0

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfBool<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  int iVar2;
  FElement *pFVar3;
  FJsonValue *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TStringView<wchar_t> *pTVar11;
  undefined1 local_res8 [8];
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_c;
  
  pFVar3 = param_1->Object;
  if ((pFVar3->Value).Object == (FJsonValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if (((pFVar3->Value).Object)->Type == Boolean) {
    pFVar3 = param_1->Object;
    pFVar4 = (pFVar3->Value).Object;
    if (param_3) {
      if (pFVar4 == (FJsonValue *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      bVar6 = FJsonValue::AsBool((pFVar3->Value).Object);
      bVar8 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
              CanWriteValueWithoutIdentifier(param_2);
      if (!bVar8) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      EVar1 = param_2->PreviousTokenWritten;
      if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0))))
      {
        local_res8[0] = 0x2c;
        (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,1);
        param_2->PreviousTokenWritten = Comma;
      }
      if (bVar6) {
        local_68.Size = 4;
        local_68.DataPtr = L"true";
      }
      else {
        local_68.Size = 5;
        local_68.DataPtr = L"false";
        local_3c = local_2c;
      }
      local_68._12_4_ = local_3c;
      pTVar11 = &local_68;
    }
    else {
      if (pFVar4 == (FJsonValue *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      bVar6 = FJsonValue::AsBool((pFVar3->Value).Object);
      iVar2 = (param_2->Stack).ArrayNum;
      pFVar3 = param_1->Object;
      uVar10 = iVar2 - 1;
      uVar9 = 0;
      if ((int)uVar10 < iVar2) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                  (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteIdentifier
                (param_2,&pFVar3->Identifier);
      if (bVar6) {
        local_68.Size = 4;
        local_68.DataPtr = L"true";
      }
      else {
        local_68.Size = 5;
        local_68.DataPtr = L"false";
        local_1c = local_c;
      }
      local_68._12_4_ = local_1c;
      pTVar11 = &local_58;
      local_58.DataPtr = local_68.DataPtr;
      local_58.Size = local_68.Size;
      local_58._12_4_ = local_1c;
    }
    TJsonPrintPolicy<char8_t>::WriteString(param_2->Stream,pTVar11);
    param_2->PreviousTokenWritten = (bVar6 ^ 1) + True;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// SerializeIfBool<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 141db1290

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfBool<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  int iVar1;
  FElement *pFVar2;
  FJsonValue *pFVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  uint uVar9;
  EJsonToken EVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 local_res8 [4];
  undefined2 local_res20 [4];
  undefined2 local_28 [8];
  
  pFVar2 = param_1->Object;
  if (((pFVar2->Value).Object == (FJsonValue *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (((pFVar2->Value).Object)->Type != Boolean) {
    return false;
  }
  pFVar2 = param_1->Object;
  pFVar3 = (pFVar2->Value).Object;
  if (param_3) {
    if ((pFVar3 == (FJsonValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    bVar6 = FJsonValue::AsBool((pFVar2->Value).Object);
    bVar8 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (param_2);
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    EVar10 = param_2->PreviousTokenWritten;
    if ((EVar10 != CurlyOpen) && ((Identifier < EVar10 || ((0x1013U >> (EVar10 & 0x1f) & 1) == 0))))
    {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,2);
      param_2->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,L"\r\n",4);
    pFVar4 = param_2->Stream;
    if (0 < param_2->IndentLevel) {
      uVar12 = (ulonglong)(uint)param_2->IndentLevel;
      do {
        local_res20[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res20,2);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  else {
    if ((pFVar3 == (FJsonValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    bVar6 = FJsonValue::AsBool((pFVar2->Value).Object);
    iVar1 = (param_2->Stack).ArrayNum;
    pFVar2 = param_1->Object;
    uVar11 = iVar1 - 1;
    uVar9 = 0;
    if ((int)uVar11 < iVar1) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                 (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier
              (param_2,&pFVar2->Identifier);
    local_28[0] = 0x20;
    (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_28,2);
  }
  EVar10 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteValueOnly(param_2,bVar6);
  param_2->PreviousTokenWritten = EVar10;
  return true;
}

// SerializeIfNull<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 141db1530

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfNull<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  int iVar2;
  FElement *pFVar3;
  FArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 local_res8 [4];
  undefined2 local_res20 [4];
  undefined2 local_28 [8];
  
  pFVar3 = param_1->Object;
  if ((pFVar3->Value).Object == (FJsonValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if (((pFVar3->Value).Object)->Type == Null) {
    if (!param_3) {
      iVar2 = (param_2->Stack).ArrayNum;
      pFVar3 = param_1->Object;
      uVar9 = iVar2 - 1;
      uVar8 = 0;
      if ((int)uVar9 < iVar2) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                  (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                (param_2,&pFVar3->Identifier);
      local_28[0] = 0x20;
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_28,2);
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,L"null",8);
      param_2->PreviousTokenWritten = Null;
      return true;
    }
    bVar6 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (param_2);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanWriteValueWithoutIdentifier()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0xde,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    EVar1 = param_2->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,2);
      param_2->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,L"\r\n",4);
    pFVar4 = param_2->Stream;
    if (0 < param_2->IndentLevel) {
      uVar10 = (ulonglong)(uint)param_2->IndentLevel;
      do {
        local_res20[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res20,2);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,L"null",8);
    param_2->PreviousTokenWritten = Null;
    return true;
  }
  return false;
}

// SerializeIfNumber<char,TCondensedJsonPrintPolicy<char>_> @ 141db1780

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfNumber<char,TCondensedJsonPrintPolicy<char>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  FElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  EJsonToken EVar9;
  FJsonValue *pFVar10;
  uint uVar11;
  TSharedPtr<FJsonValue,1> *this;
  uint uVar12;
  EJsonToken *pEVar13;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  FString local_a8;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  undefined8 local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38 [2];
  
  pFVar3 = param_1->Object;
  if (((pFVar3->Value).Object == (FJsonValue *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if (((pFVar3->Value).Object)->Type != Number) {
    return false;
  }
  pFVar3 = param_1->Object;
  pFVar10 = (pFVar3->Value).Object;
  if (param_3) {
    if ((pFVar10 == (FJsonValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    cVar8 = (**(code **)(((pFVar3->Value).Object)->_padding_ + 0x90))();
    pFVar3 = param_1->Object;
    if (cVar8 == '\0') {
      pFVar10 = TSharedPtr<FJsonValue,1>::operator->(&pFVar3->Value);
      dVar5 = FJsonValue::AsNumber(pFVar10);
      iVar1 = (param_2->Stack).ArrayNum;
      if (0 < iVar1) {
        uVar12 = 0;
        if ((int)(iVar1 - 1U) < iVar1) {
          uVar12 = ~(iVar1 - 1U) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        if (((*(int *)((param_2->Stack).AllocatorInstance.Data +
                      (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 5) &&
            (param_2->PreviousTokenWritten != Identifier)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CanWriteValueWithoutIdentifier()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0xde,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      pEVar13 = &param_2->PreviousTokenWritten;
      EVar9 = *pEVar13;
      if ((EVar9 != CurlyOpen) && ((Identifier < EVar9 || ((0x1013U >> (EVar9 & 0x1f) & 1) == 0))))
      {
        local_res20[0] = 0x2c;
        (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res20,1);
        *pEVar13 = Comma;
      }
      EVar9 = TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteValueOnly(param_2,dVar5);
      *pEVar13 = EVar9;
      return true;
    }
    if (((pFVar3->Value).Object == (FJsonValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar10 = (pFVar3->Value).Object;
    local_c8 = (wchar_t *)0x0;
    local_c0 = 0;
    cVar8 = (**(code **)(pFVar10->_padding_ + 0x58))(pFVar10,&local_c8);
    if (cVar8 == '\0') {
      ::FString::FString(&local_a8,L"String");
      FJsonValue::ErrorMessage(pFVar10,&local_a8);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    local_98 = local_c8;
    iStack_90 = (int)local_c0 + -1;
    if ((int)local_c0 == 0) {
      iStack_90 = 0;
    }
    bVar6 = TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::CanWriteValueWithoutIdentifier
                      (param_2);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x27a,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    EVar9 = param_2->PreviousTokenWritten;
    if ((EVar9 != CurlyOpen) && ((Identifier < EVar9 || ((0x1013U >> (EVar9 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,1);
      param_2->PreviousTokenWritten = Comma;
    }
    local_58._12_4_ = uStack_8c;
    local_58.Size = iStack_90;
    local_58.DataPtr = local_98;
    TJsonPrintPolicy<char>::WriteString(param_2->Stream,&local_58);
    param_2->PreviousTokenWritten = String;
    if (local_c8 != (wchar_t *)0x0) {
      FMemory::Free(local_c8);
      return true;
    }
  }
  else {
    if ((pFVar10 == (FJsonValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    cVar8 = (**(code **)(((pFVar3->Value).Object)->_padding_ + 0x90))();
    this = &param_1->Object->Value;
    if (cVar8 == '\0') {
      pFVar10 = TSharedPtr<FJsonValue,1>::operator->(this);
      dVar5 = FJsonValue::AsNumber(pFVar10);
      iVar1 = (param_2->Stack).ArrayNum;
      pFVar3 = param_1->Object;
      uVar11 = iVar1 - 1;
      uVar12 = 0;
      if ((int)uVar11 < iVar1) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                   (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x110,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteIdentifier
                (param_2,&pFVar3->Identifier);
      EVar9 = TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteValueOnly(param_2,dVar5);
      param_2->PreviousTokenWritten = EVar9;
    }
    else {
      pFVar10 = TSharedPtr<FJsonValue,1>::operator->(this);
      local_b8 = (wchar_t *)0x0;
      local_b0 = 0;
      cVar8 = (**(code **)(pFVar10->_padding_ + 0x58))(pFVar10,&local_b8);
      if (cVar8 == '\0') {
        ::FString::FString(&local_88,L"String");
        FJsonValue::ErrorMessage(pFVar10,&local_88);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      iVar1 = (param_2->Stack).ArrayNum;
      local_68 = local_b8;
      uVar12 = 0;
      uStack_60 = (int)local_b0 - 1;
      if ((int)local_b0 == 0) {
        uStack_60 = uVar12;
      }
      local_78 = (param_1->Object->Identifier).Data.AllocatorInstance.Data;
      iVar2 = (param_1->Object->Identifier).Data.ArrayNum;
      uStack_70 = iVar2 - 1;
      if (iVar2 == 0) {
        uStack_70 = uVar12;
      }
      uVar11 = iVar1 - 1;
      if ((int)uVar11 < iVar1) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                   (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x26f,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      EVar9 = param_2->PreviousTokenWritten;
      if ((EVar9 != CurlyOpen) && ((Identifier < EVar9 || ((0x1013U >> (EVar9 & 0x1f) & 1) == 0))))
      {
        local_d8[0] = 0x2c;
        (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_d8,1);
        param_2->PreviousTokenWritten = Comma;
      }
      local_48 = (undefined4)local_78;
      uStack_44 = local_78._4_4_;
      uStack_40 = uStack_70;
      uStack_3c = uStack_6c;
      (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_48);
      local_d0[0] = 0x3a;
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_d0,1);
      local_38[0]._12_4_ = uStack_5c;
      local_38[0].Size = uStack_60;
      local_38[0].DataPtr = local_68;
      param_2->PreviousTokenWritten = Identifier;
      TJsonPrintPolicy<char>::WriteString(param_2->Stream,local_38);
      param_2->PreviousTokenWritten = String;
      if (local_b8 != (wchar_t *)0x0) {
        FMemory::Free(local_b8);
        return true;
      }
    }
  }
  return true;
}

// SerializeIfNumber<char8_t,TCondensedJsonPrintPolicy<char8_t>_> @ 141db1d50

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfNumber<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  int iVar2;
  int iVar3;
  FElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  FJsonValue *pFVar10;
  uint uVar11;
  TSharedPtr<FJsonValue,1> *this;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  wchar_t *local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  undefined8 local_b8;
  FString local_b0;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  undefined8 local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  wchar_t *local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38 [2];
  
  pFVar4 = param_1->Object;
  if (((pFVar4->Value).Object == (FJsonValue *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (((pFVar4->Value).Object)->Type != Number) {
    return false;
  }
  pFVar4 = param_1->Object;
  pFVar10 = (pFVar4->Value).Object;
  if (param_3) {
    if ((pFVar10 == (FJsonValue *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    cVar9 = (**(code **)(((pFVar4->Value).Object)->_padding_ + 0x90))();
    pFVar4 = param_1->Object;
    if (cVar9 != '\0') {
      if (((pFVar4->Value).Object == (FJsonValue *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar10 = (pFVar4->Value).Object;
      local_d0 = (wchar_t *)0x0;
      local_c8 = 0;
      cVar9 = (**(code **)(pFVar10->_padding_ + 0x58))(pFVar10,&local_d0);
      if (cVar9 == '\0') {
        ::FString::FString(&local_b0,L"String");
        FJsonValue::ErrorMessage(pFVar10,&local_b0);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      local_98 = local_d0;
      iStack_90 = (int)local_c8 + -1;
      if ((int)local_c8 == 0) {
        iStack_90 = 0;
      }
      local_58._12_4_ = uStack_8c;
      local_58.Size = iStack_90;
      local_58.DataPtr = local_d0;
      TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteRawJSONValue(param_2,&local_58)
      ;
      if (local_d0 == (wchar_t *)0x0) {
        return true;
      }
      FMemory::Free(local_d0);
      return true;
    }
    pFVar10 = TSharedPtr<FJsonValue,1>::operator->(&pFVar4->Value);
    dVar6 = FJsonValue::AsNumber(pFVar10);
    uVar13 = SUB84(dVar6,0);
    uVar14 = (undefined4)((ulonglong)dVar6 >> 0x20);
    bVar7 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::CanWriteValueWithoutIdentifier
                      (param_2);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    EVar1 = param_2->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,1);
      param_2->PreviousTokenWritten = Comma;
    }
  }
  else {
    if ((pFVar10 == (FJsonValue *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    cVar9 = (**(code **)(((pFVar4->Value).Object)->_padding_ + 0x90))();
    this = &param_1->Object->Value;
    if (cVar9 != '\0') {
      pFVar10 = TSharedPtr<FJsonValue,1>::operator->(this);
      local_c0 = (wchar_t *)0x0;
      local_b8 = 0;
      cVar9 = (**(code **)(pFVar10->_padding_ + 0x58))(pFVar10,&local_c0);
      if (cVar9 == '\0') {
        ::FString::FString(&local_88,L"String");
        FJsonValue::ErrorMessage(pFVar10,&local_88);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      iVar2 = (param_2->Stack).ArrayNum;
      local_68 = local_c0;
      uVar12 = 0;
      uStack_60 = (int)local_b8 - 1;
      if ((int)local_b8 == 0) {
        uStack_60 = uVar12;
      }
      local_78 = (param_1->Object->Identifier).Data.AllocatorInstance.Data;
      iVar3 = (param_1->Object->Identifier).Data.ArrayNum;
      uStack_70 = iVar3 - 1;
      if (iVar3 == 0) {
        uStack_70 = uVar12;
      }
      uVar11 = iVar2 - 1;
      if ((int)uVar11 < iVar2) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                   (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Stack.Top() == EJson::Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x26f,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      EVar1 = param_2->PreviousTokenWritten;
      if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0))))
      {
        local_res20[0] = 0x2c;
        (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res20,1);
        param_2->PreviousTokenWritten = Comma;
      }
      local_48 = (undefined4)local_78;
      uStack_44 = local_78._4_4_;
      uStack_40 = uStack_70;
      uStack_3c = uStack_6c;
      (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_48);
      local_d8[0] = 0x3a;
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_d8,1);
      local_38[0]._12_4_ = uStack_5c;
      local_38[0].Size = uStack_60;
      local_38[0].DataPtr = local_68;
      param_2->PreviousTokenWritten = Identifier;
      TJsonPrintPolicy<char8_t>::WriteString(param_2->Stream,local_38);
      param_2->PreviousTokenWritten = String;
      if (local_c0 == (wchar_t *)0x0) {
        return true;
      }
      FMemory::Free(local_c0);
      return true;
    }
    pFVar10 = TSharedPtr<FJsonValue,1>::operator->(this);
    dVar6 = FJsonValue::AsNumber(pFVar10);
    uVar13 = SUB84(dVar6,0);
    uVar14 = (undefined4)((ulonglong)dVar6 >> 0x20);
    iVar2 = (param_2->Stack).ArrayNum;
    pFVar4 = param_1->Object;
    uVar11 = iVar2 - 1;
    uVar12 = 0;
    if ((int)uVar11 < iVar2) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                 (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteIdentifier
              (param_2,&pFVar4->Identifier);
  }
  TJsonPrintPolicy<char8_t>::WriteDouble(param_2->Stream,(double)CONCAT44(uVar14,uVar13));
  param_2->PreviousTokenWritten = Number;
  return true;
}

// SerializeIfNumber<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 141db2230

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfNumber<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  int iVar2;
  FElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  FJsonValue *pFVar9;
  uint uVar10;
  TSharedPtr<FJsonValue,1> *this;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined2 local_res8 [4];
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  FString local_a8;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FString local_88;
  wchar_t *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38 [2];
  
  pFVar3 = param_1->Object;
  if (((pFVar3->Value).Object == (FJsonValue *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  if (((pFVar3->Value).Object)->Type != Number) {
    return false;
  }
  pFVar3 = param_1->Object;
  pFVar9 = (pFVar3->Value).Object;
  if (param_3) {
    if ((pFVar9 == (FJsonValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    cVar8 = (**(code **)(((pFVar3->Value).Object)->_padding_ + 0x90))();
    pFVar3 = param_1->Object;
    if (cVar8 != '\0') {
      if (((pFVar3->Value).Object == (FJsonValue *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pFVar9 = (pFVar3->Value).Object;
      local_c8 = (wchar_t *)0x0;
      local_c0 = 0;
      cVar8 = (**(code **)(pFVar9->_padding_ + 0x58))(pFVar9,&local_c8);
      if (cVar8 == '\0') {
        ::FString::FString(&local_a8,L"String");
        FJsonValue::ErrorMessage(pFVar9,&local_a8);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      local_98 = local_c8;
      iStack_90 = (int)local_c0 + -1;
      if ((int)local_c0 == 0) {
        iStack_90 = 0;
      }
      local_58._12_4_ = uStack_8c;
      local_58.Size = iStack_90;
      local_58.DataPtr = local_c8;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteRawJSONValue(param_2,&local_58)
      ;
      if (local_c8 == (wchar_t *)0x0) {
        return true;
      }
      FMemory::Free(local_c8);
      return true;
    }
    pFVar9 = TSharedPtr<FJsonValue,1>::operator->(&pFVar3->Value);
    dVar5 = FJsonValue::AsNumber(pFVar9);
    uVar12 = SUB84(dVar5,0);
    uVar13 = (undefined4)((ulonglong)dVar5 >> 0x20);
    bVar6 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (param_2);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    EVar1 = param_2->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,2);
      param_2->PreviousTokenWritten = Comma;
    }
  }
  else {
    if ((pFVar9 == (FJsonValue *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    cVar8 = (**(code **)(((pFVar3->Value).Object)->_padding_ + 0x90))();
    this = &param_1->Object->Value;
    if (cVar8 != '\0') {
      pFVar9 = TSharedPtr<FJsonValue,1>::operator->(this);
      local_b8 = (wchar_t *)0x0;
      local_b0 = 0;
      cVar8 = (**(code **)(pFVar9->_padding_ + 0x58))(pFVar9,&local_b8);
      if (cVar8 == '\0') {
        ::FString::FString(&local_88,L"String");
        FJsonValue::ErrorMessage(pFVar9,&local_88);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      local_78 = local_b8;
      iStack_70 = (int)local_b0 + -1;
      if ((int)local_b0 == 0) {
        iStack_70 = 0;
      }
      local_48._12_4_ = uStack_6c;
      local_48.Size = iStack_70;
      local_48.DataPtr = local_b8;
      local_68 = (param_1->Object->Identifier).Data.AllocatorInstance.Data;
      iVar2 = (param_1->Object->Identifier).Data.ArrayNum;
      iStack_60 = iVar2 + -1;
      if (iVar2 == 0) {
        iStack_60 = 0;
      }
      local_38[0]._12_4_ = uStack_5c;
      local_38[0].Size = iStack_60;
      local_38[0].DataPtr = (wchar_t *)local_68;
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteRawJSONValueImpl<wchar_t>
                (param_2,local_38,&local_48);
      if (local_b8 == (wchar_t *)0x0) {
        return true;
      }
      FMemory::Free(local_b8);
      return true;
    }
    pFVar9 = TSharedPtr<FJsonValue,1>::operator->(this);
    dVar5 = FJsonValue::AsNumber(pFVar9);
    uVar12 = SUB84(dVar5,0);
    uVar13 = (undefined4)((ulonglong)dVar5 >> 0x20);
    iVar2 = (param_2->Stack).ArrayNum;
    pFVar3 = param_1->Object;
    uVar10 = iVar2 - 1;
    uVar11 = 0;
    if ((int)uVar10 < iVar2) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                 (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
              (param_2,&pFVar3->Identifier);
  }
  TJsonPrintPolicy<wchar_t>::WriteDouble(param_2->Stream,(double)CONCAT44(uVar13,uVar12));
  param_2->PreviousTokenWritten = Number;
  return true;
}

// SerializeIfNumber<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 141db2630

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfNumber<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  int iVar2;
  FElement *pFVar3;
  FArchive *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  FJsonValue *pFVar10;
  uint uVar11;
  TSharedPtr<FJsonValue,1> *this;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined2 local_res8 [4];
  undefined2 local_res20 [4];
  undefined2 local_e8 [4];
  wchar_t *local_e0;
  undefined8 local_d8;
  wchar_t *local_d0;
  undefined8 local_c8;
  FString local_c0;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FString local_98;
  wchar_t *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48 [2];
  
  pFVar3 = param_1->Object;
  if (((pFVar3->Value).Object == (FJsonValue *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if (((pFVar3->Value).Object)->Type != Number) {
    return false;
  }
  pFVar3 = param_1->Object;
  pFVar10 = (pFVar3->Value).Object;
  if (param_3) {
    if ((pFVar10 == (FJsonValue *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    cVar9 = (**(code **)(((pFVar3->Value).Object)->_padding_ + 0x90))();
    pFVar3 = param_1->Object;
    if (cVar9 != '\0') {
      if (((pFVar3->Value).Object == (FJsonValue *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar10 = (pFVar3->Value).Object;
      local_e0 = (wchar_t *)0x0;
      local_d8 = 0;
      cVar9 = (**(code **)(pFVar10->_padding_ + 0x58))(pFVar10,&local_e0);
      if (cVar9 == '\0') {
        ::FString::FString(&local_c0,L"String");
        FJsonValue::ErrorMessage(pFVar10,&local_c0);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      local_a8 = local_e0;
      iStack_a0 = (int)local_d8 + -1;
      if ((int)local_d8 == 0) {
        iStack_a0 = 0;
      }
      local_68._12_4_ = uStack_9c;
      local_68.Size = iStack_a0;
      local_68.DataPtr = local_e0;
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteRawJSONValueImpl<wchar_t>
                (param_2,&local_68);
      if (local_e0 == (wchar_t *)0x0) {
        return true;
      }
      FMemory::Free(local_e0);
      return true;
    }
    pFVar10 = TSharedPtr<FJsonValue,1>::operator->(&pFVar3->Value);
    dVar6 = FJsonValue::AsNumber(pFVar10);
    uVar14 = SUB84(dVar6,0);
    uVar15 = (undefined4)((ulonglong)dVar6 >> 0x20);
    bVar7 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (param_2);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    EVar1 = param_2->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,2);
      param_2->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,L"\r\n",4);
    pFVar4 = param_2->Stream;
    if (0 < param_2->IndentLevel) {
      uVar13 = (ulonglong)(uint)param_2->IndentLevel;
      do {
        local_res20[0] = 9;
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res20,2);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  else {
    if ((pFVar10 == (FJsonValue *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    cVar9 = (**(code **)(((pFVar3->Value).Object)->_padding_ + 0x90))();
    this = &param_1->Object->Value;
    if (cVar9 != '\0') {
      pFVar10 = TSharedPtr<FJsonValue,1>::operator->(this);
      local_d0 = (wchar_t *)0x0;
      local_c8 = 0;
      cVar9 = (**(code **)(pFVar10->_padding_ + 0x58))(pFVar10,&local_d0);
      if (cVar9 == '\0') {
        ::FString::FString(&local_98,L"String");
        FJsonValue::ErrorMessage(pFVar10,&local_98);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      local_88 = local_d0;
      iStack_80 = (int)local_c8 + -1;
      if ((int)local_c8 == 0) {
        iStack_80 = 0;
      }
      local_58._12_4_ = uStack_7c;
      local_58.Size = iStack_80;
      local_58.DataPtr = local_d0;
      local_78 = (param_1->Object->Identifier).Data.AllocatorInstance.Data;
      iVar2 = (param_1->Object->Identifier).Data.ArrayNum;
      iStack_70 = iVar2 + -1;
      if (iVar2 == 0) {
        iStack_70 = 0;
      }
      local_48[0]._12_4_ = uStack_6c;
      local_48[0].Size = iStack_70;
      local_48[0].DataPtr = (wchar_t *)local_78;
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteRawJSONValue
                (param_2,local_48,&local_58);
      if (local_d0 == (wchar_t *)0x0) {
        return true;
      }
      FMemory::Free(local_d0);
      return true;
    }
    pFVar10 = TSharedPtr<FJsonValue,1>::operator->(this);
    dVar6 = FJsonValue::AsNumber(pFVar10);
    uVar14 = SUB84(dVar6,0);
    uVar15 = (undefined4)((ulonglong)dVar6 >> 0x20);
    iVar2 = (param_2->Stack).ArrayNum;
    pFVar3 = param_1->Object;
    uVar11 = iVar2 - 1;
    uVar12 = 0;
    if ((int)uVar11 < iVar2) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                 (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier
              (param_2,&pFVar3->Identifier);
    local_e8[0] = 0x20;
    (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_e8,2);
  }
  TJsonPrintPolicy<wchar_t>::WriteDouble(param_2->Stream,(double)CONCAT44(uVar15,uVar14));
  param_2->PreviousTokenWritten = Number;
  return true;
}

// SerializeIfObject<char,TCondensedJsonPrintPolicy<char>_> @ 141db2ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfObject<char,TCondensedJsonPrintPolicy<char>_>
          (TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
           *param_1,TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_2,
          TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *param_3,bool param_4)

{
  int *piVar1;
  FElement *pFVar2;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *pTVar3;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this;
  code *pcVar4;
  ForAnyElementType FVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 *puVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  undefined1 local_res10 [8];
  undefined4 local_88 [2];
  longlong local_80;
  TReferenceControllerBase<1> *local_78;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_70;
  TReferenceControllerBase<1> *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_50 [2];
  
  pFVar2 = param_2->Object;
  if (((pFVar2->Value).Object == (FJsonValue *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  if (((pFVar2->Value).Object)->Type == Object) {
    if (param_2->Object->bHasBeenProcessed == false) {
      param_2->Object->bHasBeenProcessed = true;
      pTVar3 = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
               (param_1->AllocatorInstance).Data;
      if (((pTVar3 <= param_2) && (param_2 < pTVar3 + param_1->ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == param_1->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar10 + 1;
      pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(FElement **)pFVar14 = param_2->Object;
      pTVar18 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTVar18;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_4) {
        TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteObjectStart(param_3);
      }
      else {
        iVar10 = (param_3->Stack).ArrayNum;
        pFVar2 = param_2->Object;
        uVar13 = iVar10 - 1;
        uVar16 = 0;
        if ((int)uVar13 < iVar10) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        if ((*(int *)((param_3->Stack).AllocatorInstance.Data +
                     (longlong)(param_3->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x81,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteIdentifier
                  (param_3,&pFVar2->Identifier);
        local_res10[0] = 0x7b;
        (**(code **)(*(longlong *)param_3->Stream + 0x188))(param_3->Stream,local_res10,1);
        param_3->IndentLevel = param_3->IndentLevel + 1;
        pFVar14 = (param_3->Stack).AllocatorInstance.Data;
        local_88[0] = 6;
        if (((pFVar14 <= (FScriptContainerElement *)local_88) &&
            ((FScriptContainerElement *)local_88 < pFVar14 + (longlong)(param_3->Stack).ArrayMax * 4
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        iVar10 = (param_3->Stack).ArrayNum;
        piVar1 = &(param_3->Stack).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(param_3->Stack).AllocatorInstance,piVar1);
        }
        (param_3->Stack).ArrayNum = iVar10 + 1;
        *(undefined4 *)((param_3->Stack).AllocatorInstance.Data + (longlong)iVar10 * 4) =
             local_88[0];
        param_3->PreviousTokenWritten = CurlyOpen;
      }
      pFVar2 = param_2->Object;
      local_50[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50[0].ArrayNum = 0;
      local_50[0].ArrayMax = 0;
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      if (((pFVar2->Value).Object == (FJsonValue *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      puVar11 = (undefined8 *)(**(code **)((pFVar2->Value).Object)->_padding_)();
      this = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)*puVar11;
      local_78 = (TReferenceControllerBase<1> *)puVar11[1];
      if (local_78 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this == (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(this,local_50);
      if ((this == (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>(this,&local_70);
      if (local_50[0].ArrayNum != local_70.ArrayNum) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Keys.Num() == Values.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonSerializer.h"
                           ,0x100,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      uVar16 = local_70.ArrayNum - 1;
      if (-1 < (int)uVar16) {
        lVar15 = (longlong)(int)uVar16;
        pTVar18 = ___xmm_00000000000000000000000000000010;
        pTVar19 = _UNK_150651568;
        lVar17 = lVar15 << 4;
        iVar10 = local_70.ArrayNum;
        while( true ) {
          uVar13 = 0;
          if ((int)uVar16 < iVar10) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          local_80 = lVar15;
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          FVar5.Data = local_70.AllocatorInstance.Data;
          uVar13 = 0;
          if ((int)uVar16 < local_50[0].ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          pFVar14 = local_50[0].AllocatorInstance.Data + lVar17;
          pTVar12 = ::operator_new(0x38);
          pTVar6 = pTVar18;
          pTVar7 = pTVar19;
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            pTVar12->SharedReferenceCount = (atomic<int>)0x1;
            pTVar12->WeakReferenceCount = (atomic<int>)0x1;
            pTVar12->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
            ;
            ::FString::FString((FString *)(pTVar12 + 1),(FString *)pFVar14);
            pTVar12[2]._padding_ = *(longlong *)(FVar5.Data + lVar17);
            lVar15 = *(longlong *)(FVar5.Data + lVar17 + 8);
            pTVar12[2].SharedReferenceCount = (atomic<int>)(int)lVar15;
            pTVar12[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar15 >> 0x20);
            if (lVar15 != 0) {
              LOCK();
              *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
              UNLOCK();
            }
            local_60 = pTVar12 + 1;
            *(undefined2 *)&pTVar12[3]._padding_ = 0x100;
            lVar15 = local_80;
            pTVar6 = local_60;
            pTVar7 = pTVar12;
            if ((local_60 == (TReferenceControllerBase<1> *)0x0) &&
               (pTStack_58 = pTVar12,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), lVar15 = local_80, pTVar6 = local_60,
               pTVar7 = pTStack_58, bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
          }
          pTStack_58 = pTVar7;
          local_60 = pTVar6;
          pFVar14 = (param_1->AllocatorInstance).Data;
          if (((pFVar14 <= (FScriptContainerElement *)&local_60) &&
              ((FScriptContainerElement *)&local_60 < pFVar14 + (longlong)param_1->ArrayMax * 0x10))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          iVar10 = param_1->ArrayNum;
          if (iVar10 == param_1->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar10 + 1;
          pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          *(TReferenceControllerBase<1> **)pFVar14 = local_60;
          *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTStack_58;
          if (pTStack_58 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_58->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_58->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_58);
          lVar15 = lVar15 + -1;
          lVar17 = lVar17 + -0x10;
          uVar16 = uVar16 - 1;
          local_80 = lVar15;
          if ((int)uVar16 < 0) break;
          iVar10 = local_70.ArrayNum;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_70.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_50[0].AllocatorInstance.Data,local_50[0].ArrayNum)
      ;
      if (local_50[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].AllocatorInstance.Data);
      }
      bVar8 = true;
    }
    else {
      TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteObjectEnd(param_3);
      bVar8 = true;
    }
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}

// SerializeIfObject<char8_t,TCondensedJsonPrintPolicy<char8_t>_> @ 141db3120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfObject<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
          (TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
           *param_1,TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_2,
          TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *param_3,bool param_4)

{
  int *piVar1;
  FElement *pFVar2;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *pTVar3;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this;
  code *pcVar4;
  ForAnyElementType FVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 *puVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  undefined1 local_res10 [8];
  undefined4 local_88 [2];
  longlong local_80;
  TReferenceControllerBase<1> *local_78;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_70;
  TReferenceControllerBase<1> *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_50 [2];
  
  pFVar2 = param_2->Object;
  if (((pFVar2->Value).Object == (FJsonValue *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  if (((pFVar2->Value).Object)->Type == Object) {
    if (param_2->Object->bHasBeenProcessed == false) {
      param_2->Object->bHasBeenProcessed = true;
      pTVar3 = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
               (param_1->AllocatorInstance).Data;
      if (((pTVar3 <= param_2) && (param_2 < pTVar3 + param_1->ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == param_1->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar10 + 1;
      pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(FElement **)pFVar14 = param_2->Object;
      pTVar18 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTVar18;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_4) {
        TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectStart(param_3);
      }
      else {
        iVar10 = (param_3->Stack).ArrayNum;
        pFVar2 = param_2->Object;
        uVar13 = iVar10 - 1;
        uVar16 = 0;
        if ((int)uVar13 < iVar10) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        if ((*(int *)((param_3->Stack).AllocatorInstance.Data +
                     (longlong)(param_3->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x81,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteIdentifier
                  (param_3,&pFVar2->Identifier);
        local_res10[0] = 0x7b;
        (**(code **)(*(longlong *)param_3->Stream + 0x188))(param_3->Stream,local_res10,1);
        param_3->IndentLevel = param_3->IndentLevel + 1;
        pFVar14 = (param_3->Stack).AllocatorInstance.Data;
        local_88[0] = 6;
        if (((pFVar14 <= (FScriptContainerElement *)local_88) &&
            ((FScriptContainerElement *)local_88 < pFVar14 + (longlong)(param_3->Stack).ArrayMax * 4
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        iVar10 = (param_3->Stack).ArrayNum;
        piVar1 = &(param_3->Stack).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(param_3->Stack).AllocatorInstance,piVar1);
        }
        (param_3->Stack).ArrayNum = iVar10 + 1;
        *(undefined4 *)((param_3->Stack).AllocatorInstance.Data + (longlong)iVar10 * 4) =
             local_88[0];
        param_3->PreviousTokenWritten = CurlyOpen;
      }
      pFVar2 = param_2->Object;
      local_50[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50[0].ArrayNum = 0;
      local_50[0].ArrayMax = 0;
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      if (((pFVar2->Value).Object == (FJsonValue *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      puVar11 = (undefined8 *)(**(code **)((pFVar2->Value).Object)->_padding_)();
      this = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)*puVar11;
      local_78 = (TReferenceControllerBase<1> *)puVar11[1];
      if (local_78 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this == (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(this,local_50);
      if ((this == (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>(this,&local_70);
      if (local_50[0].ArrayNum != local_70.ArrayNum) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Keys.Num() == Values.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonSerializer.h"
                           ,0x100,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
      }
      uVar16 = local_70.ArrayNum - 1;
      if (-1 < (int)uVar16) {
        lVar15 = (longlong)(int)uVar16;
        pTVar18 = ___xmm_00000000000000000000000000000010;
        pTVar19 = _UNK_150651568;
        lVar17 = lVar15 << 4;
        iVar10 = local_70.ArrayNum;
        while( true ) {
          uVar13 = 0;
          if ((int)uVar16 < iVar10) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          local_80 = lVar15;
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          FVar5.Data = local_70.AllocatorInstance.Data;
          uVar13 = 0;
          if ((int)uVar16 < local_50[0].ArrayNum) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          pFVar14 = local_50[0].AllocatorInstance.Data + lVar17;
          pTVar12 = ::operator_new(0x38);
          pTVar6 = pTVar18;
          pTVar7 = pTVar19;
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            pTVar12->SharedReferenceCount = (atomic<int>)0x1;
            pTVar12->WeakReferenceCount = (atomic<int>)0x1;
            pTVar12->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
            ;
            ::FString::FString((FString *)(pTVar12 + 1),(FString *)pFVar14);
            pTVar12[2]._padding_ = *(longlong *)(FVar5.Data + lVar17);
            lVar15 = *(longlong *)(FVar5.Data + lVar17 + 8);
            pTVar12[2].SharedReferenceCount = (atomic<int>)(int)lVar15;
            pTVar12[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar15 >> 0x20);
            if (lVar15 != 0) {
              LOCK();
              *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
              UNLOCK();
            }
            local_60 = pTVar12 + 1;
            *(undefined2 *)&pTVar12[3]._padding_ = 0x100;
            lVar15 = local_80;
            pTVar6 = local_60;
            pTVar7 = pTVar12;
            if ((local_60 == (TReferenceControllerBase<1> *)0x0) &&
               (pTStack_58 = pTVar12,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), lVar15 = local_80, pTVar6 = local_60,
               pTVar7 = pTStack_58, bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar9 = (*pcVar4)();
              return (bool)uVar9;
            }
          }
          pTStack_58 = pTVar7;
          local_60 = pTVar6;
          pFVar14 = (param_1->AllocatorInstance).Data;
          if (((pFVar14 <= (FScriptContainerElement *)&local_60) &&
              ((FScriptContainerElement *)&local_60 < pFVar14 + (longlong)param_1->ArrayMax * 0x10))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          iVar10 = param_1->ArrayNum;
          if (iVar10 == param_1->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar10 + 1;
          pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          *(TReferenceControllerBase<1> **)pFVar14 = local_60;
          *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTStack_58;
          if (pTStack_58 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_58->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_58->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_58);
          lVar15 = lVar15 + -1;
          lVar17 = lVar17 + -0x10;
          uVar16 = uVar16 - 1;
          local_80 = lVar15;
          if ((int)uVar16 < 0) break;
          iVar10 = local_70.ArrayNum;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_70.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_50[0].AllocatorInstance.Data,local_50[0].ArrayNum)
      ;
      if (local_50[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].AllocatorInstance.Data);
      }
      bVar8 = true;
    }
    else {
      TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteObjectEnd(param_3);
      bVar8 = true;
    }
  }
  else {
    bVar8 = false;
  }
  return bVar8;
}

// SerializeIfObject<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 141db3780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfObject<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
           *param_1,TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_2,
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *param_3,bool param_4)

{
  int *piVar1;
  FElement *pFVar2;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this;
  longlong lVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  TReferenceControllerBase<1> *pTVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  TReferenceControllerBase<1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_70;
  TReferenceControllerBase<1> *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_50 [2];
  
  pFVar2 = param_2->Object;
  if (((pFVar2->Value).Object == (FJsonValue *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  if (((pFVar2->Value).Object)->Type == Object) {
    if (param_2->Object->bHasBeenProcessed == false) {
      param_2->Object->bHasBeenProcessed = true;
      pTVar3 = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
               (param_1->AllocatorInstance).Data;
      if (((pTVar3 <= param_2) && (param_2 < pTVar3 + param_1->ArrayMax)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == param_1->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar12 + 1;
      pFVar16 = (param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(FElement **)pFVar16 = param_2->Object;
      pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_4) {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart(param_3);
      }
      else {
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString_&>
                  (param_3,&param_2->Object->Identifier);
      }
      pFVar2 = param_2->Object;
      local_50[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50[0].ArrayNum = 0;
      local_50[0].ArrayMax = 0;
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      if (((pFVar2->Value).Object == (FJsonValue *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      puVar14 = (undefined8 *)(**(code **)((pFVar2->Value).Object)->_padding_)();
      this = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)*puVar14;
      pTVar4 = (TReferenceControllerBase<1> *)puVar14[1];
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this == (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(this,local_50);
      if ((this == (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>(this,&local_70);
      if (local_50[0].ArrayNum != local_70.ArrayNum) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Keys.Num() == Values.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonSerializer.h"
                            ,0x100,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
      }
      uVar17 = local_70.ArrayNum - 1;
      if (-1 < (int)uVar17) {
        pTVar19 = ___xmm_00000000000000000000000000000010;
        pTVar20 = _UNK_150651568;
        lVar18 = (longlong)(int)uVar17 << 4;
        iVar12 = local_70.ArrayNum;
        while( true ) {
          uVar13 = 0;
          if ((int)uVar17 < iVar12) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          FVar7.Data = local_70.AllocatorInstance.Data;
          uVar13 = 0;
          if ((int)uVar17 < local_50[0].ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          pFVar16 = local_50[0].AllocatorInstance.Data + lVar18;
          pTVar15 = ::operator_new(0x38);
          pTVar8 = pTVar19;
          pTVar9 = pTVar20;
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            pTVar15->SharedReferenceCount = (atomic<int>)0x1;
            pTVar15->WeakReferenceCount = (atomic<int>)0x1;
            pTVar15->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
            ;
            ::FString::FString((FString *)(pTVar15 + 1),(FString *)pFVar16);
            pTVar15[2]._padding_ = *(longlong *)(FVar7.Data + lVar18);
            lVar5 = *(longlong *)(FVar7.Data + lVar18 + 8);
            pTVar15[2].SharedReferenceCount = (atomic<int>)(int)lVar5;
            pTVar15[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar5 >> 0x20);
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
            local_60 = pTVar15 + 1;
            *(undefined2 *)&pTVar15[3]._padding_ = 0x100;
            pTVar8 = local_60;
            pTVar9 = pTVar15;
            if ((local_60 == (TReferenceControllerBase<1> *)0x0) &&
               (pTStack_58 = pTVar15,
               bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), pTVar8 = local_60, pTVar9 = pTStack_58, bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
          }
          pTStack_58 = pTVar9;
          local_60 = pTVar8;
          pFVar16 = (param_1->AllocatorInstance).Data;
          piVar1 = &param_1->ArrayMax;
          if (((pFVar16 <= (FScriptContainerElement *)&local_60) &&
              ((FScriptContainerElement *)&local_60 < pFVar16 + (longlong)*piVar1 * 0x10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          iVar12 = param_1->ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar12 + 1;
          pFVar16 = (param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(TReferenceControllerBase<1> **)pFVar16 = local_60;
          *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTStack_58;
          if (pTStack_58 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_58->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_58->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_58);
          lVar18 = lVar18 + -0x10;
          uVar17 = uVar17 - 1;
          if ((int)uVar17 < 0) break;
          iVar12 = local_70.ArrayNum;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_70.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_50[0].AllocatorInstance.Data,local_50[0].ArrayNum)
      ;
      if (local_50[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].AllocatorInstance.Data);
      }
      bVar10 = true;
    }
    else {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd(param_3);
      bVar10 = true;
    }
  }
  else {
    bVar10 = false;
  }
  return bVar10;
}

// SerializeIfObject<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 141db3c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfObject<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
           *param_1,TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_2,
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_3,bool param_4)

{
  int *piVar1;
  FElement *pFVar2;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this;
  longlong lVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  TReferenceControllerBase<1> *pTVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  TReferenceControllerBase<1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_70;
  TReferenceControllerBase<1> *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_50 [2];
  
  pFVar2 = param_2->Object;
  if (((pFVar2->Value).Object == (FJsonValue *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  if (((pFVar2->Value).Object)->Type == Object) {
    if (param_2->Object->bHasBeenProcessed == false) {
      param_2->Object->bHasBeenProcessed = true;
      pTVar3 = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
               (param_1->AllocatorInstance).Data;
      if (((pTVar3 <= param_2) && (param_2 < pTVar3 + param_1->ArrayMax)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == param_1->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar12 + 1;
      pFVar16 = (param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(FElement **)pFVar16 = param_2->Object;
      pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_4) {
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart(param_3);
      }
      else {
        TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectStart<FString_&>
                  (param_3,&param_2->Object->Identifier);
      }
      pFVar2 = param_2->Object;
      local_50[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50[0].ArrayNum = 0;
      local_50[0].ArrayMax = 0;
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      if (((pFVar2->Value).Object == (FJsonValue *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      puVar14 = (undefined8 *)(**(code **)((pFVar2->Value).Object)->_padding_)();
      this = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)*puVar14;
      pTVar4 = (TReferenceControllerBase<1> *)puVar14[1];
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this == (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
      ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(this,local_50);
      if ((this == (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
      ::GenerateValueArray<TSizedDefaultAllocator<32>_>(this,&local_70);
      if (local_50[0].ArrayNum != local_70.ArrayNum) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Keys.Num() == Values.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonSerializer.h"
                            ,0x100,L"");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          uVar11 = (*pcVar6)();
          return (bool)uVar11;
        }
      }
      uVar17 = local_70.ArrayNum - 1;
      if (-1 < (int)uVar17) {
        pTVar19 = ___xmm_00000000000000000000000000000010;
        pTVar20 = _UNK_150651568;
        lVar18 = (longlong)(int)uVar17 << 4;
        iVar12 = local_70.ArrayNum;
        while( true ) {
          uVar13 = 0;
          if ((int)uVar17 < iVar12) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          FVar7.Data = local_70.AllocatorInstance.Data;
          uVar13 = 0;
          if ((int)uVar17 < local_50[0].ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          pFVar16 = local_50[0].AllocatorInstance.Data + lVar18;
          pTVar15 = ::operator_new(0x38);
          pTVar8 = pTVar19;
          pTVar9 = pTVar20;
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            pTVar15->SharedReferenceCount = (atomic<int>)0x1;
            pTVar15->WeakReferenceCount = (atomic<int>)0x1;
            pTVar15->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
            ;
            ::FString::FString((FString *)(pTVar15 + 1),(FString *)pFVar16);
            pTVar15[2]._padding_ = *(longlong *)(FVar7.Data + lVar18);
            lVar5 = *(longlong *)(FVar7.Data + lVar18 + 8);
            pTVar15[2].SharedReferenceCount = (atomic<int>)(int)lVar5;
            pTVar15[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar5 >> 0x20);
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
            local_60 = pTVar15 + 1;
            *(undefined2 *)&pTVar15[3]._padding_ = 0x100;
            pTVar8 = local_60;
            pTVar9 = pTVar15;
            if ((local_60 == (TReferenceControllerBase<1> *)0x0) &&
               (pTStack_58 = pTVar15,
               bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), pTVar8 = local_60, pTVar9 = pTStack_58, bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
          }
          pTStack_58 = pTVar9;
          local_60 = pTVar8;
          pFVar16 = (param_1->AllocatorInstance).Data;
          piVar1 = &param_1->ArrayMax;
          if (((pFVar16 <= (FScriptContainerElement *)&local_60) &&
              ((FScriptContainerElement *)&local_60 < pFVar16 + (longlong)*piVar1 * 0x10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          iVar12 = param_1->ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar12 + 1;
          pFVar16 = (param_1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(TReferenceControllerBase<1> **)pFVar16 = local_60;
          *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTStack_58;
          if (pTStack_58 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_58->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_58->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_58);
          lVar18 = lVar18 + -0x10;
          uVar17 = uVar17 - 1;
          if ((int)uVar17 < 0) break;
          iVar12 = local_70.ArrayNum;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_70.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_50[0].AllocatorInstance.Data,local_50[0].ArrayNum)
      ;
      if (local_50[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].AllocatorInstance.Data);
      }
      bVar10 = true;
    }
    else {
      TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteObjectEnd(param_3);
      bVar10 = true;
    }
  }
  else {
    bVar10 = false;
  }
  return bVar10;
}

// SerializeIfString<char,TCondensedJsonPrintPolicy<char>_> @ 141db41a0

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfString<char,TCondensedJsonPrintPolicy<char>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  int iVar2;
  FElement *pFVar3;
  FJsonValue *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  void *pvVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  FString local_78;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  pFVar3 = param_1->Object;
  if ((pFVar3->Value).Object == (FJsonValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if (((pFVar3->Value).Object)->Type == String) {
    pFVar3 = param_1->Object;
    pFVar4 = (pFVar3->Value).Object;
    if (param_3) {
      if (pFVar4 == (FJsonValue *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      pFVar4 = (pFVar3->Value).Object;
      local_98 = (void *)0x0;
      local_90 = 0;
      cVar8 = (**(code **)(pFVar4->_padding_ + 0x58))(pFVar4,&local_98);
      if (cVar8 == '\0') {
        ::FString::FString(&local_78,L"String");
        FJsonValue::ErrorMessage(pFVar4,&local_78);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      bVar6 = TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::CanWriteValueWithoutIdentifier
                        (param_2);
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      EVar1 = param_2->PreviousTokenWritten;
      if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0))))
      {
        local_res8[0] = 0x2c;
        (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,1);
        param_2->PreviousTokenWritten = Comma;
      }
      local_68 = local_98;
      pvVar10 = local_68;
      iStack_60 = (int)local_90 + -1;
      if ((int)local_90 == 0) {
        iStack_60 = 0;
      }
      local_68._0_4_ = SUB84(local_98,0);
      local_68._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
      local_38 = (undefined4)local_68;
      uStack_34 = local_68._4_4_;
      uStack_2c = uStack_5c;
      local_68 = pvVar10;
      iStack_30 = iStack_60;
      (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_38);
      pvVar10 = local_98;
    }
    else {
      if (pFVar4 == (FJsonValue *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      pFVar4 = (pFVar3->Value).Object;
      local_88 = (void *)0x0;
      local_80 = 0;
      cVar8 = (**(code **)(pFVar4->_padding_ + 0x58))(pFVar4,&local_88);
      if (cVar8 == '\0') {
        ::FString::FString(&local_58,L"String");
        FJsonValue::ErrorMessage(pFVar4,&local_58);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      iVar2 = (param_2->Stack).ArrayNum;
      pFVar3 = param_1->Object;
      uVar11 = iVar2 - 1;
      uVar9 = 0;
      if ((int)uVar11 < iVar2) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                  (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteIdentifier
                (param_2,&pFVar3->Identifier);
      local_48 = local_88;
      pvVar10 = local_48;
      uStack_40 = (int)local_80 - 1;
      if ((int)local_80 == 0) {
        uStack_40 = 0;
      }
      local_48._0_4_ = SUB84(local_88,0);
      local_48._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
      local_28 = (undefined4)local_48;
      uStack_24 = local_48._4_4_;
      uStack_1c = uStack_3c;
      local_48 = pvVar10;
      uStack_20 = uStack_40;
      (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_28);
      pvVar10 = local_88;
    }
    param_2->PreviousTokenWritten = String;
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// SerializeIfString<char8_t,TCondensedJsonPrintPolicy<char8_t>_> @ 141db44b0

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfString<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  int iVar2;
  FElement *pFVar3;
  FJsonValue *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  void *pvVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  FString local_78;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  pFVar3 = param_1->Object;
  if ((pFVar3->Value).Object == (FJsonValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if (((pFVar3->Value).Object)->Type == String) {
    pFVar3 = param_1->Object;
    pFVar4 = (pFVar3->Value).Object;
    if (param_3) {
      if (pFVar4 == (FJsonValue *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      pFVar4 = (pFVar3->Value).Object;
      local_98 = (void *)0x0;
      local_90 = 0;
      cVar8 = (**(code **)(pFVar4->_padding_ + 0x58))(pFVar4,&local_98);
      if (cVar8 == '\0') {
        ::FString::FString(&local_78,L"String");
        FJsonValue::ErrorMessage(pFVar4,&local_78);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      bVar6 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
              CanWriteValueWithoutIdentifier(param_2);
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      EVar1 = param_2->PreviousTokenWritten;
      if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0))))
      {
        local_res8[0] = 0x2c;
        (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,1);
        param_2->PreviousTokenWritten = Comma;
      }
      local_68 = local_98;
      pvVar10 = local_68;
      iStack_60 = (int)local_90 + -1;
      if ((int)local_90 == 0) {
        iStack_60 = 0;
      }
      local_68._0_4_ = SUB84(local_98,0);
      local_68._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
      local_38 = (undefined4)local_68;
      uStack_34 = local_68._4_4_;
      uStack_2c = uStack_5c;
      local_68 = pvVar10;
      iStack_30 = iStack_60;
      (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_38);
      pvVar10 = local_98;
    }
    else {
      if (pFVar4 == (FJsonValue *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      pFVar4 = (pFVar3->Value).Object;
      local_88 = (void *)0x0;
      local_80 = 0;
      cVar8 = (**(code **)(pFVar4->_padding_ + 0x58))(pFVar4,&local_88);
      if (cVar8 == '\0') {
        ::FString::FString(&local_58,L"String");
        FJsonValue::ErrorMessage(pFVar4,&local_58);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      iVar2 = (param_2->Stack).ArrayNum;
      pFVar3 = param_1->Object;
      uVar11 = iVar2 - 1;
      uVar9 = 0;
      if ((int)uVar11 < iVar2) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                  (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteIdentifier
                (param_2,&pFVar3->Identifier);
      local_48 = local_88;
      pvVar10 = local_48;
      uStack_40 = (int)local_80 - 1;
      if ((int)local_80 == 0) {
        uStack_40 = 0;
      }
      local_48._0_4_ = SUB84(local_88,0);
      local_48._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
      local_28 = (undefined4)local_48;
      uStack_24 = local_48._4_4_;
      uStack_1c = uStack_3c;
      local_48 = pvVar10;
      uStack_20 = uStack_40;
      (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_28);
      pvVar10 = local_88;
    }
    param_2->PreviousTokenWritten = String;
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// SerializeIfString<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 141db47c0

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfString<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  int iVar2;
  FElement *pFVar3;
  FJsonValue *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  void *pvVar10;
  uint uVar11;
  undefined2 local_res8 [4];
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  FString local_78;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FString local_58;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  pFVar3 = param_1->Object;
  if ((pFVar3->Value).Object == (FJsonValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  if (((pFVar3->Value).Object)->Type == String) {
    pFVar3 = param_1->Object;
    pFVar4 = (pFVar3->Value).Object;
    if (param_3) {
      if (pFVar4 == (FJsonValue *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      pFVar4 = (pFVar3->Value).Object;
      local_98 = (void *)0x0;
      local_90 = 0;
      cVar8 = (**(code **)(pFVar4->_padding_ + 0x58))(pFVar4,&local_98);
      if (cVar8 == '\0') {
        ::FString::FString(&local_78,L"String");
        FJsonValue::ErrorMessage(pFVar4,&local_78);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      bVar6 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
              CanWriteValueWithoutIdentifier(param_2);
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      EVar1 = param_2->PreviousTokenWritten;
      if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0))))
      {
        local_res8[0] = 0x2c;
        (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,2);
        param_2->PreviousTokenWritten = Comma;
      }
      local_68 = local_98;
      pvVar10 = local_68;
      iStack_60 = (int)local_90 + -1;
      if ((int)local_90 == 0) {
        iStack_60 = 0;
      }
      local_68._0_4_ = SUB84(local_98,0);
      local_68._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
      local_38 = (undefined4)local_68;
      uStack_34 = local_68._4_4_;
      uStack_2c = uStack_5c;
      local_68 = pvVar10;
      iStack_30 = iStack_60;
      (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_38);
      pvVar10 = local_98;
    }
    else {
      if (pFVar4 == (FJsonValue *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      pFVar4 = (pFVar3->Value).Object;
      local_88 = (void *)0x0;
      local_80 = 0;
      cVar8 = (**(code **)(pFVar4->_padding_ + 0x58))(pFVar4,&local_88);
      if (cVar8 == '\0') {
        ::FString::FString(&local_58,L"String");
        FJsonValue::ErrorMessage(pFVar4,&local_58);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      iVar2 = (param_2->Stack).ArrayNum;
      pFVar3 = param_1->Object;
      uVar11 = iVar2 - 1;
      uVar9 = 0;
      if ((int)uVar11 < iVar2) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                  (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                (param_2,&pFVar3->Identifier);
      local_48 = local_88;
      pvVar10 = local_48;
      uStack_40 = (int)local_80 - 1;
      if ((int)local_80 == 0) {
        uStack_40 = 0;
      }
      local_48._0_4_ = SUB84(local_88,0);
      local_48._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
      local_28 = (undefined4)local_48;
      uStack_24 = local_48._4_4_;
      uStack_1c = uStack_3c;
      local_48 = pvVar10;
      uStack_20 = uStack_40;
      (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_28);
      pvVar10 = local_88;
    }
    param_2->PreviousTokenWritten = String;
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// SerializeIfString<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 141db4ad0

bool __cdecl
FJsonSerializerPolicy_JsonObject::SerializeIfString<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  int iVar2;
  FElement *pFVar3;
  FJsonValue *pFVar4;
  FArchive *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined2 local_res8 [4];
  undefined2 local_res20 [4];
  undefined2 local_b8 [4];
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  FString local_90;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FString local_68;
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  pFVar3 = param_1->Object;
  if (((pFVar3->Value).Object == (FJsonValue *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (((pFVar3->Value).Object)->Type != String) {
    return false;
  }
  pFVar3 = param_1->Object;
  pFVar4 = (pFVar3->Value).Object;
  if (param_3) {
    if ((pFVar4 == (FJsonValue *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar4 = (pFVar3->Value).Object;
    local_b0 = (void *)0x0;
    local_a8 = 0;
    cVar9 = (**(code **)(pFVar4->_padding_ + 0x58))(pFVar4,&local_b0);
    if (cVar9 == '\0') {
      ::FString::FString(&local_90,L"String");
      FJsonValue::ErrorMessage(pFVar4,&local_90);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    bVar7 = TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::CanWriteValueWithoutIdentifier
                      (param_2);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CanWriteValueWithoutIdentifier()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0xde,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    EVar1 = param_2->PreviousTokenWritten;
    if ((EVar1 != CurlyOpen) && ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,2);
      param_2->PreviousTokenWritten = Comma;
    }
    (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,L"\r\n",4);
    pFVar5 = param_2->Stream;
    if (0 < param_2->IndentLevel) {
      uVar13 = (ulonglong)(uint)param_2->IndentLevel;
      do {
        local_res20[0] = 9;
        (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_res20,2);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    local_78 = local_b0;
    pvVar11 = local_78;
    iStack_70 = (int)local_a8 + -1;
    if ((int)local_a8 == 0) {
      iStack_70 = 0;
    }
    local_78._0_4_ = SUB84(local_b0,0);
    local_78._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
    local_48 = (undefined4)local_78;
    uStack_44 = local_78._4_4_;
    uStack_3c = uStack_6c;
    local_78 = pvVar11;
    iStack_40 = iStack_70;
    (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_48);
    pvVar11 = local_b0;
  }
  else {
    if ((pFVar4 == (FJsonValue *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar4 = (pFVar3->Value).Object;
    local_a0 = (void *)0x0;
    local_98 = 0;
    cVar9 = (**(code **)(pFVar4->_padding_ + 0x58))(pFVar4,&local_a0);
    if (cVar9 == '\0') {
      ::FString::FString(&local_68,L"String");
      FJsonValue::ErrorMessage(pFVar4,&local_68);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    iVar2 = (param_2->Stack).ArrayNum;
    pFVar3 = param_1->Object;
    uVar12 = iVar2 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar2) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                 (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteIdentifier
              (param_2,&pFVar3->Identifier);
    local_b8[0] = 0x20;
    (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_b8,2);
    local_58 = local_a0;
    pvVar11 = local_58;
    uStack_50 = (int)local_98 - 1;
    if ((int)local_98 == 0) {
      uStack_50 = 0;
    }
    local_58._0_4_ = SUB84(local_a0,0);
    local_58._4_4_ = (undefined4)((ulonglong)local_a0 >> 0x20);
    local_38 = (undefined4)local_58;
    uStack_34 = local_58._4_4_;
    uStack_2c = uStack_4c;
    local_58 = pvVar11;
    uStack_30 = uStack_50;
    (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_38);
    pvVar11 = local_a0;
  }
  param_2->PreviousTokenWritten = String;
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  return true;
}

// operator= @ 141dc6810

StackState * __thiscall
FJsonSerializerPolicy_JsonObject::StackState::operator=(StackState *this,StackState *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->Type = param_1->Type;
  ::FString::operator=(&this->Identifier,&param_1->Identifier);
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Array,&param_1->Array);
  pTVar1 = (param_1->Object).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Object).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Object).SharedReferenceCount.ReferenceController;
  (this->Object).Object = pFVar2;
  (this->Object).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// AddValueToArray @ 141dcd570

void __cdecl
FJsonSerializerPolicy_JsonObject::AddValueToArray
          (StackState *param_1,TSharedPtr<FJsonValue,1> *param_2)

{
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TSharedPtr<FJsonValue,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar1 = &param_1->Array;
  pTVar3 = (TSharedPtr<FJsonValue,1> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (param_1->Array).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (param_1->Array).ArrayNum;
  piVar2 = &(param_1->Array).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_1->Array).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FJsonValue **)pFVar8 = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  return;
}

// AddValueToObject @ 141dcd640

void __cdecl
FJsonSerializerPolicy_JsonObject::AddValueToObject
          (StackState *param_1,FString *param_2,TSharedPtr<FJsonValue,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->Object).Object == (FJsonObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FJsonObject::SetField((param_1->Object).Object,param_2,param_3);
  return;
}

// GetValueFromState @ 141dd78d0

bool __cdecl
FJsonSerializerPolicy_JsonObject::GetValueFromState
          (StackState *param_1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_2
          )

{
  if (param_1->Type != Array) {
    return false;
  }
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::operator=(param_2,&param_1->Array);
  return true;
}

// GetValueFromState @ 141dd7900

bool __cdecl
FJsonSerializerPolicy_JsonObject::GetValueFromState
          (StackState *param_1,TSharedPtr<FJsonObject,1> *param_2)

{
  FJsonObject *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = (param_1->Object).Object;
  if (pFVar1 == (FJsonObject *)0x0) {
    return false;
  }
  pTVar2 = (param_1->Object).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  param_2->Object = pFVar1;
  (param_2->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return true;
}

// GetValueFromState @ 141dd7950

bool __cdecl
FJsonSerializerPolicy_JsonObject::GetValueFromState
          (StackState *param_1,TSharedPtr<FJsonValue,1> *param_2)

{
  TSharedRef<FJsonValueObject,1> *pTVar1;
  TSharedRef<FJsonValueArray,1> *pTVar2;
  FSharedReferencer<1> FVar3;
  TSharedPtr<FJsonValue,1> local_38;
  TSharedPtr<FJsonValue,1> local_28;
  TSharedRef<FJsonValueArray,1> local_18;
  
  switch(param_1->Type) {
  case Array:
    pTVar2 = MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const_&>
                       (&local_18,&param_1->Array);
    FVar3.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
    local_28.Object = (FJsonValue *)pTVar2->Object;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar3.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.SharedReferenceCount.ReferenceController = FVar3.ReferenceController;
    if (param_2 != &local_28) {
      param_2->Object = local_28.Object;
      local_28.Object = (FJsonValue *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_2->SharedReferenceCount,&local_28.SharedReferenceCount);
      FVar3.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    }
LAB_141dd7a29:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return true;
  case Object:
    if ((param_1->Object).Object != (FJsonObject *)0x0) {
      pTVar1 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_const_&>
                         ((TSharedRef<FJsonValueObject,1> *)&local_18,&param_1->Object);
      local_38.SharedReferenceCount.ReferenceController =
           (pTVar1->SharedReferenceCount).ReferenceController;
      local_38.Object = (FJsonValue *)pTVar1->Object;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar3.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
      if (param_2 != &local_38) {
        param_2->Object = local_38.Object;
        local_38.Object = (FJsonValue *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&param_2->SharedReferenceCount,&local_38.SharedReferenceCount);
        FVar3.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
      }
      goto LAB_141dd7a29;
    }
  }
  return false;
}

// ReadArrayEnd @ 141ddd720

void __cdecl
FJsonSerializerPolicy_JsonObject::ReadArrayEnd
          (StackState *param_1,TSharedPtr<FJsonValue,1> *param_2)

{
  TSharedRef<FJsonValueArray,1> *pTVar1;
  TSharedPtr<FJsonValue,1> local_28;
  TSharedRef<FJsonValueArray,1> local_18;
  
  pTVar1 = MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&>
                     (&local_18,&param_1->Array);
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  local_28.Object = (FJsonValue *)pTVar1->Object;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_2 != &local_28) {
    param_2->Object = local_28.Object;
    local_28.Object = (FJsonValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_2->SharedReferenceCount,&local_28.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ReadArrayStart @ 141ddd7a0

void __cdecl FJsonSerializerPolicy_JsonObject::ReadArrayStart(StackState *param_1)

{
  param_1->Type = Array;
  return;
}

// ReadNull @ 141dde5e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FJsonSerializerPolicy_JsonObject::ReadNull(TSharedPtr<FJsonValue,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FJsonValue,1> local_18;
  
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (FJsonValue *)___xmm_00000000000000000000000000000010;
    pTVar4 = (TReferenceControllerBase<1> *)&DAT_00000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4 = pTVar3 + 1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNull___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FJsonValueNull__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x1;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_18.SharedReferenceCount.ReferenceController = pTVar3;
    local_18.Object = (FJsonValue *)pTVar4;
  }
  if (param_1 != &local_18) {
    param_1->Object = (FJsonValue *)pTVar4;
    local_18.Object = (FJsonValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ReadObjectEnd @ 141dde6f0

void __cdecl
FJsonSerializerPolicy_JsonObject::ReadObjectEnd
          (StackState *param_1,TSharedPtr<FJsonValue,1> *param_2)

{
  TSharedRef<FJsonValueObject,1> *pTVar1;
  TSharedPtr<FJsonValue,1> local_28;
  TSharedRef<FJsonValueObject,1> local_18;
  
  pTVar1 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_&>(&local_18,&param_1->Object);
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  local_28.Object = (FJsonValue *)pTVar1->Object;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (param_2 != &local_28) {
    param_2->Object = local_28.Object;
    local_28.Object = (FJsonValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_2->SharedReferenceCount,&local_28.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ReadObjectStart @ 141dde770

void __cdecl FJsonSerializerPolicy_JsonObject::ReadObjectStart(StackState *param_1)

{
  TSharedRef<FJsonObject,1> *pTVar1;
  FJsonObject *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FJsonObject,1> local_18;
  
  param_1->Type = Object;
  pTVar1 = MakeShared<FJsonObject,1>(&local_18);
  local_20.ReferenceController = (pTVar1->SharedReferenceCount).ReferenceController;
  local_28 = pTVar1->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&param_1->Object != (TSharedPtr<FJsonObject,1> *)&local_28) {
    (param_1->Object).Object = local_28;
    local_28 = (FJsonObject *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->Object).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ResetValue @ 141ddefb0

void __cdecl FJsonSerializerPolicy_JsonObject::ResetValue(TSharedPtr<FJsonValue,1> *param_1)

{
  TSharedPtr<FJsonValue,1> local_18;
  
  local_18.Object = (FJsonValue *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_18) {
    param_1->Object = (FJsonValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

