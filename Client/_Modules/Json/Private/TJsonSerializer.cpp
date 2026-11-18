// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 18

// Deserialize<char> @ 141da2de0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<char>
          (TJsonReader<char> *param_1,StackState *param_2,EFlags param_3)

{
  double dVar1;
  void *_Src;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  *this;
  code *pcVar2;
  ForAnyElementType _Src_00;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  TSharedRef<FJsonValueObject,1> *pTVar8;
  TSharedRef<FJsonValueArray,1> *pTVar9;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *pTVar10;
  FUtf8String *pFVar11;
  TSharedRef<TJsonValueString<char8_t>,1> *pTVar12;
  TSharedRef<TJsonValueNumberString<char8_t>,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  StackState *pSVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  FJsonValueArray *pFVar19;
  EJsonNotation local_res20 [2];
  TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,TSizedDefaultAllocator<32>_>
  local_208;
  StackState *local_1f8;
  FSharedReferencer<1> FStack_1f0;
  TSharedPtr<FJsonValue,1> local_1e8;
  FString local_1d8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_1c8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_1b8;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c [3];
  FSharedReferencer<1> local_190;
  undefined8 local_188;
  FSharedReferencer<1> local_180;
  TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&> local_178;
  FSharedReferencer<1> local_168;
  undefined8 local_160;
  FSharedReferencer<1> local_158;
  undefined8 local_150;
  FSharedReferencer<1> local_148;
  undefined8 local_140;
  FSharedReferencer<1> local_138;
  undefined8 local_130;
  FSharedReferencer<1> local_128;
  undefined8 local_120;
  FSharedReferencer<1> local_118;
  undefined8 local_110;
  FSharedReferencer<1> local_108;
  undefined8 local_100;
  FSharedReferencer<1> local_f8;
  undefined8 local_f0;
  FSharedReferencer<1> local_e8;
  ForAnyElementType *local_e0;
  TSharedPtr<FJsonValue,1> *local_d8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_d0;
  TSharedRef<FJsonValueObject,1> local_c0;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_b0;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_a0;
  TSharedRef<FJsonValueArray,1> local_90;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_80;
  TSharedRef<TJsonValueString<char8_t>,1> local_70;
  void *local_60 [2];
  TSharedRef<TJsonValueNumberString<char8_t>,1> local_50 [2];
  
  pSVar15 = (StackState *)0x0;
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8 = (StackState *)0x0;
  FStack_1f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_208.ArrayNum = 0;
  local_208.ArrayMax = 0;
  local_1e8.Object = (FJsonValue *)0x0;
  local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonReader<char>::ReadNext(param_1,local_res20);
  if (bVar4) {
    do {
      puVar7 = (undefined8 *)(**(code **)(param_1->_padding_ + 8))(param_1);
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Data.ArrayNum = *(int *)(puVar7 + 1);
      lVar16 = (longlong)local_1d8.Data.ArrayNum;
      _Src = (void *)*puVar7;
      iVar18 = 0;
      if (local_1d8.Data.ArrayNum == 0) {
        local_1d8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1d8.Data.ArrayNum,0,(ForAnyElementType *)&local_1d8,
                   local_1d8.Data.ArrayNum,&local_1d8.Data.ArrayMax);
        memcpy(local_1d8.Data.AllocatorInstance.Data,_Src,lVar16 * 2);
      }
      local_168.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_1e8.Object = (FJsonValue *)0x0;
      local_178.Value = (TSharedPtr<FJsonValue,1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_1e8.SharedReferenceCount,&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.ReferenceController);
      switch(local_res20[0]) {
      case ObjectStart:
        if (pSVar15 != (StackState *)0x0) {
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          local_1c8.Object = local_1f8;
          local_1c8.SharedReferenceCount.ReferenceController = FStack_1f0.ReferenceController;
          if (FStack_1f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_1f0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_1f0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1f8 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (((local_208.AllocatorInstance.Data <= &local_1c8) &&
              (&local_1c8 <
               (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)
               (local_208.AllocatorInstance.Data + (longlong)local_208.ArrayMax * 0x10))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = local_208.ArrayNum;
          if (local_208.ArrayNum == local_208.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_208.AllocatorInstance,&local_208.ArrayMax);
          }
          local_208.ArrayNum = iVar6 + 1;
          *(StackState **)&local_208.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
               local_1c8.Object;
          *(TReferenceControllerBase<1> **)
           (local_208.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
               local_1c8.SharedReferenceCount.ReferenceController;
          if (local_1c8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c8.SharedReferenceCount.ReferenceController);
        }
        pTVar10 = MakeShared<FJsonSerializerPolicy_JsonObject::StackState,1>(&local_d0);
        local_158.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
        local_1f8 = pTVar10->Object;
        if (local_158.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_158.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_160 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_158);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_158.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.SharedReferenceCount.ReferenceController);
        pSVar15 = local_1f8;
        if ((local_1f8 == (StackState *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar6 = local_1d8.Data.ArrayNum + -1;
        if (local_1d8.Data.ArrayNum == 0) {
          iVar6 = iVar18;
        }
        ::FString::AssignRange
                  (&pSVar15->Identifier,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar6);
        if ((pSVar15 == (StackState *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        FJsonSerializerPolicy_JsonObject::ReadObjectStart(pSVar15);
        break;
      case ObjectEnd:
        if (0 < local_208.ArrayNum) {
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = (pSVar15->Identifier).Data.ArrayNum;
          iVar17 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar17 = iVar18;
          }
          ::FString::AssignRange
                    (&local_1d8,(wchar_t *)(pSVar15->Identifier).Data.AllocatorInstance.Data,iVar17)
          ;
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pTVar8 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_&>
                             (&local_c0,&pSVar15->Object);
          local_148.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
          local_1e8.Object = (FJsonValue *)pTVar8->Object;
          if (local_148.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_148.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_148.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_150 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1e8.SharedReferenceCount,&local_148);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_148.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c0.SharedReferenceCount.ReferenceController);
          pTVar10 = TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,TSizedDefaultAllocator<32>_>
                    ::Pop(&local_208,&local_b0,Default);
          local_138.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
          local_1f8 = pTVar10->Object;
          if (local_138.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_138.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_138.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_140 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_138);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_138.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b0.SharedReferenceCount.ReferenceController);
          pSVar15 = local_1f8;
          goto LAB_141da3884;
        }
        break;
      case ArrayStart:
        if (pSVar15 != (StackState *)0x0) {
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          local_1b8.Object = local_1f8;
          local_1b8.SharedReferenceCount.ReferenceController = FStack_1f0.ReferenceController;
          if (FStack_1f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_1f0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_1f0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1f8 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (((local_208.AllocatorInstance.Data <= &local_1b8) &&
              (&local_1b8 <
               (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)
               (local_208.AllocatorInstance.Data + (longlong)local_208.ArrayMax * 0x10))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = local_208.ArrayNum;
          if (local_208.ArrayNum == local_208.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_208.AllocatorInstance,&local_208.ArrayMax);
          }
          local_208.ArrayNum = iVar6 + 1;
          *(StackState **)&local_208.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
               local_1b8.Object;
          *(TReferenceControllerBase<1> **)
           (local_208.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
               local_1b8.SharedReferenceCount.ReferenceController;
          if (local_1b8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1b8.SharedReferenceCount.ReferenceController);
        }
        pTVar10 = MakeShared<FJsonSerializerPolicy_JsonObject::StackState,1>(&local_a0);
        local_128.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
        local_1f8 = pTVar10->Object;
        if (local_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_128.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_128.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_130 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_128);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0.SharedReferenceCount.ReferenceController);
        pSVar15 = local_1f8;
        if ((local_1f8 == (StackState *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pSVar15->Type = Array;
        iVar6 = local_1d8.Data.ArrayNum + -1;
        if (local_1d8.Data.ArrayNum == 0) {
          iVar6 = iVar18;
        }
        ::FString::AssignRange
                  (&pSVar15->Identifier,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar6);
        break;
      case ArrayEnd:
        if (0 < local_208.ArrayNum) {
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = (pSVar15->Identifier).Data.ArrayNum;
          iVar17 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar17 = iVar18;
          }
          ::FString::AssignRange
                    (&local_1d8,(wchar_t *)(pSVar15->Identifier).Data.AllocatorInstance.Data,iVar17)
          ;
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pTVar9 = MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&>
                             (&local_90,&pSVar15->Array);
          local_118.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
          local_1e8.Object = (FJsonValue *)pTVar9->Object;
          if (local_118.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_118.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_118.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_120 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1e8.SharedReferenceCount,&local_118);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_118.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90.SharedReferenceCount.ReferenceController);
          pTVar10 = TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,TSizedDefaultAllocator<32>_>
                    ::Pop(&local_208,&local_80,Default);
          local_108.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
          local_1f8 = pTVar10->Object;
          if (local_108.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_108.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_108.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_110 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_108);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80.SharedReferenceCount.ReferenceController);
          pSVar15 = local_1f8;
          goto LAB_141da3884;
        }
        break;
      case Boolean:
        if (((param_1->CurrentToken != True) && (param_1->CurrentToken != False)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(CurrentToken == EJsonToken::True) || (CurrentToken == EJsonToken::False)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                               ,0xce,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        bVar4 = param_1->BoolValue;
        pTVar14 = ::operator_new(0x28);
        if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
          local_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar19 = (FJsonValueArray *)&DAT_00000010;
        }
        else {
          pTVar14->SharedReferenceCount = (atomic<int>)0x1;
          pFVar19 = (FJsonValueArray *)(pTVar14 + 1);
          pTVar14->WeakReferenceCount = (atomic<int>)0x1;
          pTVar14->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFJsonValueBoolean___00_SharedPointerInternals__6B_
          ;
          *(bool *)&pTVar14[2]._padding_ = bVar4;
          pTVar14[1]._padding_ = (longlong)&___7FJsonValueBoolean__6B_;
          pTVar14[1].SharedReferenceCount = (atomic<int>)0x4;
          if ((pFVar19 == (FJsonValueArray *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
          local_190.ReferenceController = pTVar14;
        }
        FVar3.ReferenceController = local_190.ReferenceController;
        local_19c[1] = 0;
        local_19c[2] = 0;
        local_1e8.Object = (FJsonValue *)pFVar19;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1e8.SharedReferenceCount,&local_190);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_190.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar3.ReferenceController);
        goto LAB_141da3884;
      case String:
        pFVar11 = (FUtf8String *)(**(code **)(param_1->_padding_ + 0x20))(param_1,local_60);
        pTVar12 = MakeShared<TJsonValueString<char8_t>,1,FUtf8String>(&local_70,pFVar11);
        local_f8.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
        local_1e8.Object = (FJsonValue *)pTVar12->Object;
        if (local_f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_f8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_100 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1e8.SharedReferenceCount,&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.SharedReferenceCount.ReferenceController);
        if (local_60[0] != (void *)0x0) {
          FMemory::Free(local_60[0]);
        }
        goto LAB_141da3884;
      case Number:
        if ((param_3 & StoreNumbersAsStrings) == None) {
          if ((param_1->CurrentToken != Number) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentToken == EJsonToken::Number",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                                 ,0xc2,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          dVar1 = param_1->NumberValue;
          pTVar14 = ::operator_new(0x28);
          if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
            local_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar19 = (FJsonValueArray *)&DAT_00000010;
          }
          else {
            pTVar14->SharedReferenceCount = (atomic<int>)0x1;
            pFVar19 = (FJsonValueArray *)(pTVar14 + 1);
            pTVar14->WeakReferenceCount = (atomic<int>)0x1;
            pTVar14->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_
            ;
            pTVar14[1]._padding_ = (longlong)&___7FJsonValueNumber__6B_;
            pTVar14[2]._padding_ = (longlong)dVar1;
            pTVar14[1].SharedReferenceCount = (atomic<int>)0x3;
            if ((pFVar19 == (FJsonValueArray *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
            local_180.ReferenceController = pTVar14;
          }
          FVar3.ReferenceController = local_180.ReferenceController;
          local_188 = 0;
          local_1e8.Object = (FJsonValue *)pFVar19;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1e8.SharedReferenceCount,&local_180);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_180.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
        }
        else {
          if ((param_1->CurrentToken != Number) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentToken == EJsonToken::Number",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                                 ,200,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pTVar13 = MakeShared<TJsonValueNumberString<char8_t>,1,FUtf8String_const_&>
                              (local_50,&param_1->StringValue);
          local_e8.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
          local_1e8.Object = (FJsonValue *)pTVar13->Object;
          if (local_e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_e8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_e8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_f0 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1e8.SharedReferenceCount,&local_e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_50[0].SharedReferenceCount.ReferenceController);
        }
        goto LAB_141da3884;
      case Null:
        FJsonSerializerPolicy_JsonObject::ReadNull(&local_1e8);
LAB_141da3884:
        if (pSVar15 != (StackState *)0x0) {
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (pSVar15->Type == Object) {
            if (((pSVar15->Object).Object == (FJsonObject *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            _Src_00.Data = local_1d8.Data.AllocatorInstance.Data;
            this = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                    *)(pSVar15->Object).Object;
            lVar16 = (longlong)local_1d8.Data.ArrayNum;
            local_1a8.Data = (FScriptContainerElement *)0x0;
            local_1a0 = local_1d8.Data.ArrayNum;
            if (local_1d8.Data.ArrayNum == 0) {
              local_19c[0] = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_1d8.Data.ArrayNum,0,&local_1a8,local_1d8.Data.ArrayNum,local_19c)
              ;
              memcpy(local_1a8.Data,_Src_00.Data,lVar16 * 2);
            }
            local_e0 = &local_1a8;
            local_d8 = &local_1e8;
            TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&>_>
                      (this,&local_178,(bool *)&local_e0);
            if (local_1a8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data);
            }
          }
          else {
            FJsonSerializerPolicy_JsonObject::AddValueToArray(pSVar15,&local_1e8);
          }
        }
        break;
      case Error:
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        goto LAB_141da39d7;
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      bVar4 = TJsonReader<char>::ReadNext(param_1,local_res20);
    } while (bVar4);
    if ((pSVar15 != (StackState *)0x0) && ((param_1->ErrorMessage).Data.ArrayNum < 2)) {
      FJsonSerializerPolicy_JsonObject::StackState::operator=(param_2,pSVar15);
      bVar4 = true;
      goto LAB_141da39d9;
    }
  }
LAB_141da39d7:
  bVar4 = false;
LAB_141da39d9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f0.ReferenceController);
  DestructItems<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,int>
            ((TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)
             local_208.AllocatorInstance.Data,local_208.ArrayNum);
  if ((TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)local_208.AllocatorInstance.Data
      != (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)0x0) {
    FMemory::Free(local_208.AllocatorInstance.Data);
  }
  return bVar4;
}

// Deserialize<char> @ 141da3aa0

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<char>
          (TSharedRef<TJsonReader<char>,1> *param_1,TSharedPtr<FJsonObject,1> *param_2,
          EFlags param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  StackState local_48;
  
  local_48.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Identifier.Data.ArrayNum = 0;
  local_48.Identifier.Data.ArrayMax = 0;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  local_48.Object.Object = (FJsonObject *)0x0;
  local_48.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar2 = Deserialize<char>(param_1->Object,&local_48,param_3);
  if (!bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
    return false;
  }
  if (local_48.Object.Object == (FJsonObject *)0x0) {
    bVar2 = false;
  }
  else {
    if (local_48.Object.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    param_2->Object = local_48.Object.Object;
    (param_2->SharedReferenceCount).ReferenceController =
         local_48.Object.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Object.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
             local_48.Array.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_48.Array.AllocatorInstance.Data);
  }
  if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Deserialize<char8_t> @ 141da3b90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<char8_t>
          (TJsonReader<char8_t> *param_1,StackState *param_2,EFlags param_3)

{
  double dVar1;
  void *_Src;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  *this;
  code *pcVar2;
  ForAnyElementType _Src_00;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  TSharedRef<FJsonValueObject,1> *pTVar8;
  TSharedRef<FJsonValueArray,1> *pTVar9;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *pTVar10;
  FUtf8String *pFVar11;
  TSharedRef<TJsonValueString<char8_t>,1> *pTVar12;
  TSharedRef<TJsonValueNumberString<char8_t>,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  StackState *pSVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  FJsonValueArray *pFVar19;
  EJsonNotation local_res20 [2];
  TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,TSizedDefaultAllocator<32>_>
  local_208;
  StackState *local_1f8;
  FSharedReferencer<1> FStack_1f0;
  TSharedPtr<FJsonValue,1> local_1e8;
  FString local_1d8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_1c8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_1b8;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c [3];
  FSharedReferencer<1> local_190;
  undefined8 local_188;
  FSharedReferencer<1> local_180;
  TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&> local_178;
  FSharedReferencer<1> local_168;
  undefined8 local_160;
  FSharedReferencer<1> local_158;
  undefined8 local_150;
  FSharedReferencer<1> local_148;
  undefined8 local_140;
  FSharedReferencer<1> local_138;
  undefined8 local_130;
  FSharedReferencer<1> local_128;
  undefined8 local_120;
  FSharedReferencer<1> local_118;
  undefined8 local_110;
  FSharedReferencer<1> local_108;
  undefined8 local_100;
  FSharedReferencer<1> local_f8;
  undefined8 local_f0;
  FSharedReferencer<1> local_e8;
  ForAnyElementType *local_e0;
  TSharedPtr<FJsonValue,1> *local_d8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_d0;
  TSharedRef<FJsonValueObject,1> local_c0;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_b0;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_a0;
  TSharedRef<FJsonValueArray,1> local_90;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_80;
  TSharedRef<TJsonValueString<char8_t>,1> local_70;
  void *local_60 [2];
  TSharedRef<TJsonValueNumberString<char8_t>,1> local_50 [2];
  
  pSVar15 = (StackState *)0x0;
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8 = (StackState *)0x0;
  FStack_1f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_208.ArrayNum = 0;
  local_208.ArrayMax = 0;
  local_1e8.Object = (FJsonValue *)0x0;
  local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonReader<char8_t>::ReadNext(param_1,local_res20);
  if (bVar4) {
    do {
      puVar7 = (undefined8 *)(**(code **)(param_1->_padding_ + 8))(param_1);
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Data.ArrayNum = *(int *)(puVar7 + 1);
      lVar16 = (longlong)local_1d8.Data.ArrayNum;
      _Src = (void *)*puVar7;
      iVar18 = 0;
      if (local_1d8.Data.ArrayNum == 0) {
        local_1d8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1d8.Data.ArrayNum,0,(ForAnyElementType *)&local_1d8,
                   local_1d8.Data.ArrayNum,&local_1d8.Data.ArrayMax);
        memcpy(local_1d8.Data.AllocatorInstance.Data,_Src,lVar16 * 2);
      }
      local_168.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_1e8.Object = (FJsonValue *)0x0;
      local_178.Value = (TSharedPtr<FJsonValue,1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_1e8.SharedReferenceCount,&local_168);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.ReferenceController);
      switch(local_res20[0]) {
      case ObjectStart:
        if (pSVar15 != (StackState *)0x0) {
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          local_1c8.Object = local_1f8;
          local_1c8.SharedReferenceCount.ReferenceController = FStack_1f0.ReferenceController;
          if (FStack_1f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_1f0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_1f0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1f8 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (((local_208.AllocatorInstance.Data <= &local_1c8) &&
              (&local_1c8 <
               (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)
               (local_208.AllocatorInstance.Data + (longlong)local_208.ArrayMax * 0x10))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = local_208.ArrayNum;
          if (local_208.ArrayNum == local_208.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_208.AllocatorInstance,&local_208.ArrayMax);
          }
          local_208.ArrayNum = iVar6 + 1;
          *(StackState **)&local_208.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
               local_1c8.Object;
          *(TReferenceControllerBase<1> **)
           (local_208.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
               local_1c8.SharedReferenceCount.ReferenceController;
          if (local_1c8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c8.SharedReferenceCount.ReferenceController);
        }
        pTVar10 = MakeShared<FJsonSerializerPolicy_JsonObject::StackState,1>(&local_d0);
        local_158.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
        local_1f8 = pTVar10->Object;
        if (local_158.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_158.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_160 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_158);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_158.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d0.SharedReferenceCount.ReferenceController);
        pSVar15 = local_1f8;
        if ((local_1f8 == (StackState *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar6 = local_1d8.Data.ArrayNum + -1;
        if (local_1d8.Data.ArrayNum == 0) {
          iVar6 = iVar18;
        }
        ::FString::AssignRange
                  (&pSVar15->Identifier,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar6);
        if ((pSVar15 == (StackState *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        FJsonSerializerPolicy_JsonObject::ReadObjectStart(pSVar15);
        break;
      case ObjectEnd:
        if (0 < local_208.ArrayNum) {
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = (pSVar15->Identifier).Data.ArrayNum;
          iVar17 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar17 = iVar18;
          }
          ::FString::AssignRange
                    (&local_1d8,(wchar_t *)(pSVar15->Identifier).Data.AllocatorInstance.Data,iVar17)
          ;
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pTVar8 = MakeShared<FJsonValueObject,1,TSharedPtr<FJsonObject,1>_&>
                             (&local_c0,&pSVar15->Object);
          local_148.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
          local_1e8.Object = (FJsonValue *)pTVar8->Object;
          if (local_148.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_148.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_148.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_150 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1e8.SharedReferenceCount,&local_148);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_148.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c0.SharedReferenceCount.ReferenceController);
          pTVar10 = TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,TSizedDefaultAllocator<32>_>
                    ::Pop(&local_208,&local_b0,Default);
          local_138.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
          local_1f8 = pTVar10->Object;
          if (local_138.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_138.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_138.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_140 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_138);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_138.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b0.SharedReferenceCount.ReferenceController);
          pSVar15 = local_1f8;
          goto LAB_141da4634;
        }
        break;
      case ArrayStart:
        if (pSVar15 != (StackState *)0x0) {
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          local_1b8.Object = local_1f8;
          local_1b8.SharedReferenceCount.ReferenceController = FStack_1f0.ReferenceController;
          if (FStack_1f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_1f0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_1f0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1f8 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (((local_208.AllocatorInstance.Data <= &local_1b8) &&
              (&local_1b8 <
               (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)
               (local_208.AllocatorInstance.Data + (longlong)local_208.ArrayMax * 0x10))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = local_208.ArrayNum;
          if (local_208.ArrayNum == local_208.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_208.AllocatorInstance,&local_208.ArrayMax);
          }
          local_208.ArrayNum = iVar6 + 1;
          *(StackState **)&local_208.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
               local_1b8.Object;
          *(TReferenceControllerBase<1> **)
           (local_208.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
               local_1b8.SharedReferenceCount.ReferenceController;
          if (local_1b8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1b8.SharedReferenceCount.ReferenceController);
        }
        pTVar10 = MakeShared<FJsonSerializerPolicy_JsonObject::StackState,1>(&local_a0);
        local_128.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
        local_1f8 = pTVar10->Object;
        if (local_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_128.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_128.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_130 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_128);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_128.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0.SharedReferenceCount.ReferenceController);
        pSVar15 = local_1f8;
        if ((local_1f8 == (StackState *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pSVar15->Type = Array;
        iVar6 = local_1d8.Data.ArrayNum + -1;
        if (local_1d8.Data.ArrayNum == 0) {
          iVar6 = iVar18;
        }
        ::FString::AssignRange
                  (&pSVar15->Identifier,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,iVar6);
        break;
      case ArrayEnd:
        if (0 < local_208.ArrayNum) {
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = (pSVar15->Identifier).Data.ArrayNum;
          iVar17 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar17 = iVar18;
          }
          ::FString::AssignRange
                    (&local_1d8,(wchar_t *)(pSVar15->Identifier).Data.AllocatorInstance.Data,iVar17)
          ;
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pTVar9 = MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&>
                             (&local_90,&pSVar15->Array);
          local_118.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
          local_1e8.Object = (FJsonValue *)pTVar9->Object;
          if (local_118.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_118.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_118.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_120 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1e8.SharedReferenceCount,&local_118);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_118.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90.SharedReferenceCount.ReferenceController);
          pTVar10 = TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,TSizedDefaultAllocator<32>_>
                    ::Pop(&local_208,&local_80,Default);
          local_108.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
          local_1f8 = pTVar10->Object;
          if (local_108.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_108.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_108.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_110 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1f0,&local_108);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80.SharedReferenceCount.ReferenceController);
          pSVar15 = local_1f8;
          goto LAB_141da4634;
        }
        break;
      case Boolean:
        if (((param_1->CurrentToken != True) && (param_1->CurrentToken != False)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(CurrentToken == EJsonToken::True) || (CurrentToken == EJsonToken::False)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                               ,0xce,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        bVar4 = param_1->BoolValue;
        pTVar14 = ::operator_new(0x28);
        if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
          local_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar19 = (FJsonValueArray *)&DAT_00000010;
        }
        else {
          pTVar14->SharedReferenceCount = (atomic<int>)0x1;
          pFVar19 = (FJsonValueArray *)(pTVar14 + 1);
          pTVar14->WeakReferenceCount = (atomic<int>)0x1;
          pTVar14->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFJsonValueBoolean___00_SharedPointerInternals__6B_
          ;
          *(bool *)&pTVar14[2]._padding_ = bVar4;
          pTVar14[1]._padding_ = (longlong)&___7FJsonValueBoolean__6B_;
          pTVar14[1].SharedReferenceCount = (atomic<int>)0x4;
          if ((pFVar19 == (FJsonValueArray *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
          local_190.ReferenceController = pTVar14;
        }
        FVar3.ReferenceController = local_190.ReferenceController;
        local_19c[1] = 0;
        local_19c[2] = 0;
        local_1e8.Object = (FJsonValue *)pFVar19;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1e8.SharedReferenceCount,&local_190);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_190.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar3.ReferenceController);
        goto LAB_141da4634;
      case String:
        pFVar11 = (FUtf8String *)(**(code **)(param_1->_padding_ + 0x20))(param_1,local_60);
        pTVar12 = MakeShared<TJsonValueString<char8_t>,1,FUtf8String>(&local_70,pFVar11);
        local_f8.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
        local_1e8.Object = (FJsonValue *)pTVar12->Object;
        if (local_f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_f8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_100 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1e8.SharedReferenceCount,&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70.SharedReferenceCount.ReferenceController);
        if (local_60[0] != (void *)0x0) {
          FMemory::Free(local_60[0]);
        }
        goto LAB_141da4634;
      case Number:
        if ((param_3 & StoreNumbersAsStrings) == None) {
          if ((param_1->CurrentToken != Number) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentToken == EJsonToken::Number",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                                 ,0xc2,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          dVar1 = param_1->NumberValue;
          pTVar14 = ::operator_new(0x28);
          if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
            local_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar19 = (FJsonValueArray *)&DAT_00000010;
          }
          else {
            pTVar14->SharedReferenceCount = (atomic<int>)0x1;
            pFVar19 = (FJsonValueArray *)(pTVar14 + 1);
            pTVar14->WeakReferenceCount = (atomic<int>)0x1;
            pTVar14->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_
            ;
            pTVar14[1]._padding_ = (longlong)&___7FJsonValueNumber__6B_;
            pTVar14[2]._padding_ = (longlong)dVar1;
            pTVar14[1].SharedReferenceCount = (atomic<int>)0x3;
            if ((pFVar19 == (FJsonValueArray *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
            local_180.ReferenceController = pTVar14;
          }
          FVar3.ReferenceController = local_180.ReferenceController;
          local_188 = 0;
          local_1e8.Object = (FJsonValue *)pFVar19;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1e8.SharedReferenceCount,&local_180);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_180.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
        }
        else {
          if ((param_1->CurrentToken != Number) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentToken == EJsonToken::Number",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                                 ,200,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pTVar13 = MakeShared<TJsonValueNumberString<char8_t>,1,FUtf8String_const_&>
                              (local_50,&param_1->StringValue);
          local_e8.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
          local_1e8.Object = (FJsonValue *)pTVar13->Object;
          if (local_e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_e8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_e8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_f0 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1e8.SharedReferenceCount,&local_e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_50[0].SharedReferenceCount.ReferenceController);
        }
        goto LAB_141da4634;
      case Null:
        FJsonSerializerPolicy_JsonObject::ReadNull(&local_1e8);
LAB_141da4634:
        if (pSVar15 != (StackState *)0x0) {
          if ((pSVar15 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (pSVar15->Type == Object) {
            if (((pSVar15->Object).Object == (FJsonObject *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            _Src_00.Data = local_1d8.Data.AllocatorInstance.Data;
            this = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                    *)(pSVar15->Object).Object;
            lVar16 = (longlong)local_1d8.Data.ArrayNum;
            local_1a8.Data = (FScriptContainerElement *)0x0;
            local_1a0 = local_1d8.Data.ArrayNum;
            if (local_1d8.Data.ArrayNum == 0) {
              local_19c[0] = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_1d8.Data.ArrayNum,0,&local_1a8,local_1d8.Data.ArrayNum,local_19c)
              ;
              memcpy(local_1a8.Data,_Src_00.Data,lVar16 * 2);
            }
            local_e0 = &local_1a8;
            local_d8 = &local_1e8;
            TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&>_>
                      (this,&local_178,(bool *)&local_e0);
            if (local_1a8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data);
            }
          }
          else {
            FJsonSerializerPolicy_JsonObject::AddValueToArray(pSVar15,&local_1e8);
          }
        }
        break;
      case Error:
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        goto LAB_141da4787;
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      bVar4 = TJsonReader<char8_t>::ReadNext(param_1,local_res20);
    } while (bVar4);
    if ((pSVar15 != (StackState *)0x0) && ((param_1->ErrorMessage).Data.ArrayNum < 2)) {
      FJsonSerializerPolicy_JsonObject::StackState::operator=(param_2,pSVar15);
      bVar4 = true;
      goto LAB_141da4789;
    }
  }
LAB_141da4787:
  bVar4 = false;
LAB_141da4789:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1f0.ReferenceController);
  DestructItems<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,int>
            ((TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)
             local_208.AllocatorInstance.Data,local_208.ArrayNum);
  if ((TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)local_208.AllocatorInstance.Data
      != (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)0x0) {
    FMemory::Free(local_208.AllocatorInstance.Data);
  }
  return bVar4;
}

// Deserialize<char8_t> @ 141da4850

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<char8_t>
          (TSharedRef<TJsonReader<char8_t>,1> *param_1,TSharedPtr<FJsonObject,1> *param_2,
          EFlags param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  StackState local_48;
  
  local_48.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Identifier.Data.ArrayNum = 0;
  local_48.Identifier.Data.ArrayMax = 0;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  local_48.Object.Object = (FJsonObject *)0x0;
  local_48.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar2 = Deserialize<char8_t>(param_1->Object,&local_48,param_3);
  if (!bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
    return false;
  }
  if (local_48.Object.Object == (FJsonObject *)0x0) {
    bVar2 = false;
  }
  else {
    if (local_48.Object.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    param_2->Object = local_48.Object.Object;
    (param_2->SharedReferenceCount).ReferenceController =
         local_48.Object.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Object.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
             local_48.Array.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_48.Array.AllocatorInstance.Data);
  }
  if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Deserialize<wchar_t> @ 141da4940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
          (TJsonReader<wchar_t> *param_1,StackState *param_2,EFlags param_3)

{
  double dVar1;
  void *_Src;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  *this;
  code *pcVar2;
  ForAnyElementType _Src_00;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  TSharedRef<FJsonValueArray,1> *pTVar8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *pTVar9;
  FString *pFVar10;
  TSharedRef<TJsonValueString<wchar_t>,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  StackState *pSVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  FJsonValueArray *pFVar17;
  EJsonNotation local_res20 [2];
  TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,TSizedDefaultAllocator<32>_>
  local_1d8;
  StackState *local_1c8;
  FSharedReferencer<1> FStack_1c0;
  TSharedPtr<FJsonValue,1> local_1b8;
  FString local_1a8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_198;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_188;
  ForAnyElementType local_178;
  int local_170;
  int local_16c [3];
  FSharedReferencer<1> local_160;
  undefined8 local_158;
  FSharedReferencer<1> local_150;
  undefined8 local_148;
  FSharedReferencer<1> local_140;
  TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&> local_138;
  FSharedReferencer<1> local_128;
  undefined8 local_120;
  FSharedReferencer<1> local_118;
  undefined8 local_110;
  FSharedReferencer<1> local_108;
  undefined8 local_100;
  FSharedReferencer<1> local_f8;
  undefined8 local_f0;
  FSharedReferencer<1> local_e8;
  undefined8 local_e0;
  FSharedReferencer<1> local_d8;
  undefined8 local_d0;
  FSharedReferencer<1> local_c8;
  ForAnyElementType *local_c0;
  TSharedPtr<FJsonValue,1> *local_b8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_b0;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_a0;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_90;
  TSharedRef<FJsonValueArray,1> local_80;
  TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> local_70;
  TSharedRef<TJsonValueString<wchar_t>,1> local_60;
  void *local_50 [5];
  
  pSVar13 = (StackState *)0x0;
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8 = (StackState *)0x0;
  FStack_1c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1d8.ArrayNum = 0;
  local_1d8.ArrayMax = 0;
  local_1b8.Object = (FJsonValue *)0x0;
  local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonReader<wchar_t>::ReadNext(param_1,local_res20);
  if (bVar4) {
    do {
      puVar7 = (undefined8 *)(**(code **)(param_1->_padding_ + 8))(param_1);
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Data.ArrayNum = *(int *)(puVar7 + 1);
      lVar14 = (longlong)local_1a8.Data.ArrayNum;
      _Src = (void *)*puVar7;
      iVar16 = 0;
      if (local_1a8.Data.ArrayNum == 0) {
        local_1a8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1a8.Data.ArrayNum,0,(ForAnyElementType *)&local_1a8,
                   local_1a8.Data.ArrayNum,&local_1a8.Data.ArrayMax);
        memcpy(local_1a8.Data.AllocatorInstance.Data,_Src,lVar14 * 2);
      }
      local_128.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_1b8.Object = (FJsonValue *)0x0;
      local_138.Value = (TSharedPtr<FJsonValue,1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_1b8.SharedReferenceCount,&local_128);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.ReferenceController);
      switch(local_res20[0]) {
      case ObjectStart:
        if (pSVar13 != (StackState *)0x0) {
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          local_198.Object = local_1c8;
          local_198.SharedReferenceCount.ReferenceController = FStack_1c0.ReferenceController;
          if (FStack_1c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_1c0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_1c0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1c8 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (((local_1d8.AllocatorInstance.Data <= &local_198) &&
              (&local_198 <
               (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)
               (local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayMax * 0x10))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = local_1d8.ArrayNum;
          if (local_1d8.ArrayNum == local_1d8.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_1d8.AllocatorInstance,&local_1d8.ArrayMax);
          }
          local_1d8.ArrayNum = iVar6 + 1;
          *(StackState **)&local_1d8.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
               local_198.Object;
          *(TReferenceControllerBase<1> **)
           (local_1d8.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
               local_198.SharedReferenceCount.ReferenceController;
          if (local_198.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_198.SharedReferenceCount.ReferenceController);
        }
        pTVar9 = MakeShared<FJsonSerializerPolicy_JsonObject::StackState,1>(&local_b0);
        local_118.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
        local_1c8 = pTVar9->Object;
        if (local_118.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_118.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_118.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_120 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1c0,&local_118);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_118.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0.SharedReferenceCount.ReferenceController);
        pSVar13 = local_1c8;
        if ((local_1c8 == (StackState *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        iVar6 = local_1a8.Data.ArrayNum + -1;
        if (local_1a8.Data.ArrayNum == 0) {
          iVar6 = iVar16;
        }
        ::FString::AssignRange
                  (&pSVar13->Identifier,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,iVar6);
        if ((pSVar13 == (StackState *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        FJsonSerializerPolicy_JsonObject::ReadObjectStart(pSVar13);
        break;
      case ObjectEnd:
        if (0 < local_1d8.ArrayNum) {
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = (pSVar13->Identifier).Data.ArrayNum;
          iVar15 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar15 = iVar16;
          }
          ::FString::AssignRange
                    (&local_1a8,(wchar_t *)(pSVar13->Identifier).Data.AllocatorInstance.Data,iVar15)
          ;
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          FJsonSerializerPolicy_JsonObject::ReadObjectEnd(pSVar13,&local_1b8);
          pTVar9 = TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,TSizedDefaultAllocator<32>_>
                   ::Pop(&local_1d8,&local_a0,Default);
          local_108.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
          local_1c8 = pTVar9->Object;
          if (local_108.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_108.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_108.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_110 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1c0,&local_108);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_108.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a0.SharedReferenceCount.ReferenceController);
          pSVar13 = local_1c8;
          goto LAB_141da541d;
        }
        break;
      case ArrayStart:
        if (pSVar13 != (StackState *)0x0) {
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          local_188.Object = local_1c8;
          local_188.SharedReferenceCount.ReferenceController = FStack_1c0.ReferenceController;
          if (FStack_1c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_1c0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_1c0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_1c8 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (((local_1d8.AllocatorInstance.Data <= &local_188) &&
              (&local_188 <
               (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)
               (local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayMax * 0x10))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = local_1d8.ArrayNum;
          if (local_1d8.ArrayNum == local_1d8.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_1d8.AllocatorInstance,&local_1d8.ArrayMax);
          }
          local_1d8.ArrayNum = iVar6 + 1;
          *(StackState **)&local_1d8.AllocatorInstance.Data[(longlong)iVar6 * 0x10].field_0x0 =
               local_188.Object;
          *(TReferenceControllerBase<1> **)
           (local_1d8.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) =
               local_188.SharedReferenceCount.ReferenceController;
          if (local_188.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_188.SharedReferenceCount.ReferenceController);
        }
        pTVar9 = MakeShared<FJsonSerializerPolicy_JsonObject::StackState,1>(&local_90);
        local_f8.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
        local_1c8 = pTVar9->Object;
        if (local_f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_f8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_f8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_100 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1c0,&local_f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_90.SharedReferenceCount.ReferenceController);
        pSVar13 = local_1c8;
        if ((local_1c8 == (StackState *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        pSVar13->Type = Array;
        iVar6 = local_1a8.Data.ArrayNum + -1;
        if (local_1a8.Data.ArrayNum == 0) {
          iVar6 = iVar16;
        }
        ::FString::AssignRange
                  (&pSVar13->Identifier,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,iVar6);
        break;
      case ArrayEnd:
        if (0 < local_1d8.ArrayNum) {
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          iVar6 = (pSVar13->Identifier).Data.ArrayNum;
          iVar15 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar15 = iVar16;
          }
          ::FString::AssignRange
                    (&local_1a8,(wchar_t *)(pSVar13->Identifier).Data.AllocatorInstance.Data,iVar15)
          ;
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pTVar8 = MakeShared<FJsonValueArray,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&>
                             (&local_80,&pSVar13->Array);
          local_e8.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
          local_1b8.Object = (FJsonValue *)pTVar8->Object;
          if (local_e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_e8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_e8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_f0 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1b8.SharedReferenceCount,&local_e8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80.SharedReferenceCount.ReferenceController);
          pTVar9 = TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,TSizedDefaultAllocator<32>_>
                   ::Pop(&local_1d8,&local_70,Default);
          local_d8.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
          local_1c8 = pTVar9->Object;
          if (local_d8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_d8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_e0 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1c0,&local_d8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70.SharedReferenceCount.ReferenceController);
          pSVar13 = local_1c8;
          goto LAB_141da541d;
        }
        break;
      case Boolean:
        if (((param_1->CurrentToken != True) && (param_1->CurrentToken != False)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(CurrentToken == EJsonToken::True) || (CurrentToken == EJsonToken::False)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                               ,0xce,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        bVar4 = param_1->BoolValue;
        pTVar12 = ::operator_new(0x28);
        if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
          local_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar17 = (FJsonValueArray *)&DAT_00000010;
        }
        else {
          pTVar12->SharedReferenceCount = (atomic<int>)0x1;
          pFVar17 = (FJsonValueArray *)(pTVar12 + 1);
          pTVar12->WeakReferenceCount = (atomic<int>)0x1;
          pTVar12->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFJsonValueBoolean___00_SharedPointerInternals__6B_
          ;
          *(bool *)&pTVar12[2]._padding_ = bVar4;
          pTVar12[1]._padding_ = (longlong)&___7FJsonValueBoolean__6B_;
          pTVar12[1].SharedReferenceCount = (atomic<int>)0x4;
          if ((pFVar17 == (FJsonValueArray *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
          local_160.ReferenceController = pTVar12;
        }
        FVar3.ReferenceController = local_160.ReferenceController;
        local_16c[1] = 0;
        local_16c[2] = 0;
        local_1b8.Object = (FJsonValue *)pFVar17;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1b8.SharedReferenceCount,&local_160);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_160.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar3.ReferenceController);
        goto LAB_141da541d;
      case String:
        pFVar10 = (FString *)(**(code **)(param_1->_padding_ + 0x20))(param_1,local_50);
        pTVar11 = MakeShared<TJsonValueString<wchar_t>,1,FString>(&local_60,pFVar10);
        local_c8.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
        local_1b8.Object = (FJsonValue *)pTVar11->Object;
        if (local_c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_c8.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_c8.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_d0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_1b8.SharedReferenceCount,&local_c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60.SharedReferenceCount.ReferenceController);
        if (local_50[0] != (void *)0x0) {
          FMemory::Free(local_50[0]);
        }
        goto LAB_141da541d;
      case Number:
        if ((param_3 & StoreNumbersAsStrings) == None) {
          if ((param_1->CurrentToken != Number) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentToken == EJsonToken::Number",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                                 ,0xc2,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          dVar1 = param_1->NumberValue;
          pTVar12 = ::operator_new(0x28);
          if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
            local_140.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar17 = (FJsonValueArray *)&DAT_00000010;
          }
          else {
            pTVar12->SharedReferenceCount = (atomic<int>)0x1;
            pFVar17 = (FJsonValueArray *)(pTVar12 + 1);
            pTVar12->WeakReferenceCount = (atomic<int>)0x1;
            pTVar12->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_
            ;
            pTVar12[1]._padding_ = (longlong)&___7FJsonValueNumber__6B_;
            pTVar12[2]._padding_ = (longlong)dVar1;
            pTVar12[1].SharedReferenceCount = (atomic<int>)0x3;
            if ((pFVar17 == (FJsonValueArray *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
            local_140.ReferenceController = pTVar12;
          }
          FVar3.ReferenceController = local_140.ReferenceController;
          local_148 = 0;
          local_1b8.Object = (FJsonValue *)pFVar17;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1b8.SharedReferenceCount,&local_140);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_140.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
        }
        else {
          if ((param_1->CurrentToken != Number) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentToken == EJsonToken::Number",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonReader.h"
                                 ,200,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pTVar12 = ::operator_new(0x30);
          if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
            local_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar17 = (FJsonValueArray *)&DAT_00000010;
          }
          else {
            pTVar12->SharedReferenceCount = (atomic<int>)0x1;
            pTVar12->WeakReferenceCount = (atomic<int>)0x1;
            pTVar12->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_V__TJsonValueNumberString__W___00_SharedPointerInternals__6B_
            ;
            pTVar12[1]._padding_ = (longlong)&___7__TJsonValueNumberString__W__6B_;
            pTVar12[1].SharedReferenceCount = (atomic<int>)0x0;
            ::FString::FString((FString *)(pTVar12 + 2),&param_1->StringValue);
            pFVar17 = (FJsonValueArray *)(pTVar12 + 1);
            pTVar12[1].SharedReferenceCount = (atomic<int>)0x3;
            if ((pFVar17 == (FJsonValueArray *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
            local_150.ReferenceController = pTVar12;
          }
          FVar3.ReferenceController = local_150.ReferenceController;
          local_158 = 0;
          local_1b8.Object = (FJsonValue *)pFVar17;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1b8.SharedReferenceCount,&local_150);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_150.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar3.ReferenceController);
        }
        goto LAB_141da541d;
      case Null:
        FJsonSerializerPolicy_JsonObject::ReadNull(&local_1b8);
LAB_141da541d:
        if (pSVar13 != (StackState *)0x0) {
          if ((pSVar13 == (StackState *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (pSVar13->Type == Object) {
            if (((pSVar13->Object).Object == (FJsonObject *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            _Src_00.Data = local_1a8.Data.AllocatorInstance.Data;
            this = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                    *)(pSVar13->Object).Object;
            lVar14 = (longlong)local_1a8.Data.ArrayNum;
            local_178.Data = (FScriptContainerElement *)0x0;
            local_170 = local_1a8.Data.ArrayNum;
            if (local_1a8.Data.ArrayNum == 0) {
              local_16c[0] = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_1a8.Data.ArrayNum,0,&local_178,local_1a8.Data.ArrayNum,local_16c)
              ;
              memcpy(local_178.Data,_Src_00.Data,lVar14 * 2);
            }
            local_c0 = &local_178;
            local_b8 = &local_1b8;
            TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&>_>
                      (this,&local_138,(bool *)&local_c0);
            if (local_178.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_178.Data);
            }
          }
          else {
            FJsonSerializerPolicy_JsonObject::AddValueToArray(pSVar13,&local_1b8);
          }
        }
        break;
      case Error:
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        goto LAB_141da556d;
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      bVar4 = TJsonReader<wchar_t>::ReadNext(param_1,local_res20);
    } while (bVar4);
    if ((pSVar13 != (StackState *)0x0) && ((param_1->ErrorMessage).Data.ArrayNum < 2)) {
      FJsonSerializerPolicy_JsonObject::StackState::operator=(param_2,pSVar13);
      bVar4 = true;
      goto LAB_141da556f;
    }
  }
LAB_141da556d:
  bVar4 = false;
LAB_141da556f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1c0.ReferenceController);
  DestructItems<TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1>,int>
            ((TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)
             local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
  if ((TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)local_1d8.AllocatorInstance.Data
      != (TSharedRef<FJsonSerializerPolicy_JsonObject::StackState,1> *)0x0) {
    FMemory::Free(local_1d8.AllocatorInstance.Data);
  }
  return bVar4;
}

// Deserialize<wchar_t> @ 141da5640

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
          (TSharedRef<TJsonReader<wchar_t>,1> *param_1,
          TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_2,EFlags param_3)

{
  bool bVar1;
  StackState local_48;
  
  local_48.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Identifier.Data.ArrayNum = 0;
  local_48.Identifier.Data.ArrayMax = 0;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  local_48.Object.Object = (FJsonObject *)0x0;
  local_48.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar1 = Deserialize<wchar_t>(param_1->Object,&local_48,param_3);
  if (bVar1) {
    if (local_48.Type == Array) {
      TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>::operator=
                (param_2,&local_48.Array);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
    return local_48.Type == Array;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Object.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
             local_48.Array.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_48.Array.AllocatorInstance.Data);
  }
  if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
  }
  return false;
}

// Deserialize<wchar_t> @ 141da5720

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
          (TSharedRef<TJsonReader<wchar_t>,1> *param_1,TSharedPtr<FJsonObject,1> *param_2,
          EFlags param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  StackState local_48;
  
  local_48.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Identifier.Data.ArrayNum = 0;
  local_48.Identifier.Data.ArrayMax = 0;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  local_48.Object.Object = (FJsonObject *)0x0;
  local_48.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar2 = Deserialize<wchar_t>(param_1->Object,&local_48,param_3);
  if (!bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
    return false;
  }
  if (local_48.Object.Object == (FJsonObject *)0x0) {
    bVar2 = false;
  }
  else {
    if (local_48.Object.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    param_2->Object = local_48.Object.Object;
    (param_2->SharedReferenceCount).ReferenceController =
         local_48.Object.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar2 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Object.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
             local_48.Array.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
      (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(local_48.Array.AllocatorInstance.Data);
  }
  if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Serialize<char,TCondensedJsonPrintPolicy<char>_> @ 141dae460

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Serialize<char,TCondensedJsonPrintPolicy<char>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  ulonglong uVar4;
  FElement *pFVar5;
  FElement *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TStringView<wchar_t> *pTVar13;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *_Dst;
  undefined1 local_res18 [8];
  TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
  local_88;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_78;
  wchar_t *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  iVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_88.AllocatorInstance,&local_88.ArrayMax);
  uVar11 = iVar10 + 1;
  local_88.ArrayNum = uVar11;
  *(FElement **)&local_88.AllocatorInstance.Data[(longlong)iVar10 * 0x10].field_0x0 =
       param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(local_88.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8) =
       pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = local_88._8_8_;
  local_88._8_8_ = (ulonglong)uVar11;
  do {
    if ((int)uVar11 < 1) {
      if (param_3) {
        local_88._8_8_ = uVar4;
        uVar8 = (**(code **)(param_2->_padding_ + 8))(param_2);
        uVar11 = local_88.ArrayNum;
      }
      else {
        uVar8 = 1;
        local_88._8_8_ = uVar4;
      }
      DestructItems<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,int>
                ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
                 local_88.AllocatorInstance.Data,uVar11);
      if ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
          local_88.AllocatorInstance.Data !=
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      return (bool)uVar8;
    }
    local_78.Object =
         ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
         ((longlong)local_88.AllocatorInstance.Data + ((longlong)local_88.ArrayNum + -1) * 0x10))->
         Object;
    local_78.SharedReferenceCount.ReferenceController =
         (((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
          ((longlong)local_88.AllocatorInstance.Data + ((longlong)local_88.ArrayNum + -1) * 0x10))->
         SharedReferenceCount).ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      local_88.ArrayNum = (int)uVar4;
    }
    iVar10 = local_88.ArrayNum + -1;
    _Dst = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
           ((longlong)local_88.AllocatorInstance.Data + (longlong)iVar10 * 0x10);
    local_88._8_8_ = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((_Dst->SharedReferenceCount).ReferenceController);
    iVar10 = (local_88.ArrayNum - iVar10) + -1;
    if (iVar10 != 0) {
      memmove(_Dst,_Dst + 1,(longlong)iVar10 << 4);
    }
    iVar10 = local_88.ArrayNum + -1;
    local_88.ArrayNum = iVar10;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&local_88.AllocatorInstance,iVar10,&local_88.ArrayMax);
    if ((local_78.Object)->bIsKeyValuePair == false) {
LAB_141dae5fe:
      bVar7 = true;
    }
    else {
      if (((local_78.Object)->Identifier).Data.ArrayNum < 2) {
        iVar10 = (param_2->Stack).ArrayNum;
        if (0 < iVar10) {
          uVar11 = 0;
          if ((int)(iVar10 - 1U) < iVar10) {
            uVar11 = ~(iVar10 - 1U) >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                      (longlong)(param_2->Stack).ArrayNum * 4 + -4) == 6) goto LAB_141dae5fa;
        }
        goto LAB_141dae5fe;
      }
LAB_141dae5fa:
      bVar7 = false;
    }
    bVar9 = FJsonSerializerPolicy_JsonObject::SerializeIfBool<char,TCondensedJsonPrintPolicy<char>_>
                      (&local_78,param_2,bVar7);
    if (((!bVar9) &&
        (bVar9 = FJsonSerializerPolicy_JsonObject::
                 SerializeIfNumber<char,TCondensedJsonPrintPolicy<char>_>(&local_78,param_2,bVar7),
        !bVar9)) &&
       (bVar9 = FJsonSerializerPolicy_JsonObject::
                SerializeIfString<char,TCondensedJsonPrintPolicy<char>_>(&local_78,param_2,bVar7),
       pFVar5 = local_78.Object, !bVar9)) {
      if ((((local_78.Object)->Value).Object == (FJsonValue *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      pFVar6 = local_78.Object;
      if (((pFVar5->Value).Object)->Type == Null) {
        if (bVar7 == false) {
          iVar10 = (param_2->Stack).ArrayNum;
          uVar12 = iVar10 - 1;
          uVar11 = 0;
          if ((int)uVar12 < iVar10) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                       (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x110,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::WriteIdentifier
                    (param_2,&pFVar6->Identifier);
          local_58 = L"null";
          pTVar13 = &local_38;
          uStack_50 = 4;
          local_38._12_4_ = uStack_4c;
          local_38.Size = 4;
          local_38.DataPtr = L"null";
        }
        else {
          bVar7 = TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>::CanWriteValueWithoutIdentifier
                            (param_2);
          if ((!bVar7) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("CanWriteValueWithoutIdentifier()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0xde,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          EVar1 = param_2->PreviousTokenWritten;
          if ((EVar1 != CurlyOpen) &&
             ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
            local_res18[0] = 0x2c;
            (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res18,1);
            param_2->PreviousTokenWritten = Comma;
          }
          local_68 = L"null";
          pTVar13 = &local_48;
          uStack_60 = 4;
          local_48._12_4_ = uStack_5c;
          local_48.Size = 4;
          local_48.DataPtr = L"null";
        }
        TJsonPrintPolicy<char>::WriteString(param_2->Stream,pTVar13);
        param_2->PreviousTokenWritten = Null;
      }
      else {
        bVar9 = FJsonSerializerPolicy_JsonObject::
                SerializeIfArray<char,TCondensedJsonPrintPolicy<char>_>
                          (&local_88,&local_78,param_2,bVar7);
        if ((!bVar9) &&
           (bVar7 = FJsonSerializerPolicy_JsonObject::
                    SerializeIfObject<char,TCondensedJsonPrintPolicy<char>_>
                              (&local_88,&local_78,param_2,bVar7), !bVar7)) {
          UE::Logging::Private::BasicFatalLog
                    (&`private:_static_bool___cdecl_TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Serialize<char,TCondensedJsonPrintPolicy<char>_>(TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>_const&___ptr64,TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>&___ptr64,bool)'
                      ::__l23::LOG_Static,(FLogCategoryBase *)&LogJson);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    uVar11 = local_88.ArrayNum;
    uVar4 = local_88._8_8_;
  } while( true );
}

// Serialize<char,TCondensedJsonPrintPolicy<char>_> @ 141dae8a0

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Serialize<char,TCondensedJsonPrintPolicy<char>_>
          (TSharedPtr<FJsonObject,1> *param_1,
          TSharedRef<TJsonWriter<char,TCondensedJsonPrintPolicy<char>_>,1> *param_2,bool param_3)

{
  TJsonWriter<char,TCondensedJsonPrintPolicy<char>_> *pTVar1;
  bool bVar2;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_18;
  
  pTVar1 = param_2->Object;
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
            (&local_18,param_1);
  bVar2 = Serialize<char,TCondensedJsonPrintPolicy<char>_>(&local_18,pTVar1,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// Serialize<char8_t,TCondensedJsonPrintPolicy<char8_t>_> @ 141dae8f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
Serialize<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *param_2,bool param_3)

{
  EJsonToken EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  ulonglong uVar4;
  FElement *pFVar5;
  FElement *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  TStringView<wchar_t> *pTVar13;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *_Dst;
  undefined1 local_res18 [8];
  TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
  local_88;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_78;
  wchar_t *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  wchar_t *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  iVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_88.AllocatorInstance,&local_88.ArrayMax);
  uVar11 = iVar10 + 1;
  local_88.ArrayNum = uVar11;
  *(FElement **)&local_88.AllocatorInstance.Data[(longlong)iVar10 * 0x10].field_0x0 =
       param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(local_88.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8) =
       pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = local_88._8_8_;
  local_88._8_8_ = (ulonglong)uVar11;
  do {
    if ((int)uVar11 < 1) {
      if (param_3) {
        local_88._8_8_ = uVar4;
        uVar8 = (**(code **)(param_2->_padding_ + 8))(param_2);
        uVar11 = local_88.ArrayNum;
      }
      else {
        uVar8 = 1;
        local_88._8_8_ = uVar4;
      }
      DestructItems<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,int>
                ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
                 local_88.AllocatorInstance.Data,uVar11);
      if ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
          local_88.AllocatorInstance.Data !=
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      return (bool)uVar8;
    }
    local_78.Object =
         ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
         ((longlong)local_88.AllocatorInstance.Data + ((longlong)local_88.ArrayNum + -1) * 0x10))->
         Object;
    local_78.SharedReferenceCount.ReferenceController =
         (((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
          ((longlong)local_88.AllocatorInstance.Data + ((longlong)local_88.ArrayNum + -1) * 0x10))->
         SharedReferenceCount).ReferenceController;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      local_88.ArrayNum = (int)uVar4;
    }
    iVar10 = local_88.ArrayNum + -1;
    _Dst = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
           ((longlong)local_88.AllocatorInstance.Data + (longlong)iVar10 * 0x10);
    local_88._8_8_ = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((_Dst->SharedReferenceCount).ReferenceController);
    iVar10 = (local_88.ArrayNum - iVar10) + -1;
    if (iVar10 != 0) {
      memmove(_Dst,_Dst + 1,(longlong)iVar10 << 4);
    }
    iVar10 = local_88.ArrayNum + -1;
    local_88.ArrayNum = iVar10;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&local_88.AllocatorInstance,iVar10,&local_88.ArrayMax);
    if ((local_78.Object)->bIsKeyValuePair == false) {
LAB_141daea8e:
      bVar7 = true;
    }
    else {
      if (((local_78.Object)->Identifier).Data.ArrayNum < 2) {
        iVar10 = (param_2->Stack).ArrayNum;
        if (0 < iVar10) {
          uVar11 = 0;
          if ((int)(iVar10 - 1U) < iVar10) {
            uVar11 = ~(iVar10 - 1U) >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                      (longlong)(param_2->Stack).ArrayNum * 4 + -4) == 6) goto LAB_141daea8a;
        }
        goto LAB_141daea8e;
      }
LAB_141daea8a:
      bVar7 = false;
    }
    bVar9 = FJsonSerializerPolicy_JsonObject::
            SerializeIfBool<char8_t,TCondensedJsonPrintPolicy<char8_t>_>(&local_78,param_2,bVar7);
    if (((!bVar9) &&
        (bVar9 = FJsonSerializerPolicy_JsonObject::
                 SerializeIfNumber<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
                           (&local_78,param_2,bVar7), !bVar9)) &&
       (bVar9 = FJsonSerializerPolicy_JsonObject::
                SerializeIfString<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
                          (&local_78,param_2,bVar7), pFVar5 = local_78.Object, !bVar9)) {
      if ((((local_78.Object)->Value).Object == (FJsonValue *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      pFVar6 = local_78.Object;
      if (((pFVar5->Value).Object)->Type == Null) {
        if (bVar7 == false) {
          iVar10 = (param_2->Stack).ArrayNum;
          uVar12 = iVar10 - 1;
          uVar11 = 0;
          if ((int)uVar12 < iVar10) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                       (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Stack.Top() == EJson::Object",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0x110,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::WriteIdentifier
                    (param_2,&pFVar6->Identifier);
          local_58 = L"null";
          pTVar13 = &local_38;
          uStack_50 = 4;
          local_38._12_4_ = uStack_4c;
          local_38.Size = 4;
          local_38.DataPtr = L"null";
        }
        else {
          bVar7 = TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>::
                  CanWriteValueWithoutIdentifier(param_2);
          if ((!bVar7) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("CanWriteValueWithoutIdentifier()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                 ,0xde,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          EVar1 = param_2->PreviousTokenWritten;
          if ((EVar1 != CurlyOpen) &&
             ((Identifier < EVar1 || ((0x1013U >> (EVar1 & 0x1f) & 1) == 0)))) {
            local_res18[0] = 0x2c;
            (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res18,1);
            param_2->PreviousTokenWritten = Comma;
          }
          local_68 = L"null";
          pTVar13 = &local_48;
          uStack_60 = 4;
          local_48._12_4_ = uStack_5c;
          local_48.Size = 4;
          local_48.DataPtr = L"null";
        }
        TJsonPrintPolicy<char8_t>::WriteString(param_2->Stream,pTVar13);
        param_2->PreviousTokenWritten = Null;
      }
      else {
        bVar9 = FJsonSerializerPolicy_JsonObject::
                SerializeIfArray<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
                          (&local_88,&local_78,param_2,bVar7);
        if ((!bVar9) &&
           (bVar7 = FJsonSerializerPolicy_JsonObject::
                    SerializeIfObject<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
                              (&local_88,&local_78,param_2,bVar7), !bVar7)) {
          UE::Logging::Private::BasicFatalLog
                    (&`private:_static_bool___cdecl_TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Serialize<char8_t,TCondensedJsonPrintPolicy<char8_t>_>(TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>_const&___ptr64,TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>&___ptr64,bool)'
                      ::__l23::LOG_Static,(FLogCategoryBase *)&LogJson);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    uVar11 = local_88.ArrayNum;
    uVar4 = local_88._8_8_;
  } while( true );
}

// Serialize<char8_t,TCondensedJsonPrintPolicy<char8_t>_> @ 141daed30

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
Serialize<char8_t,TCondensedJsonPrintPolicy<char8_t>_>
          (TSharedPtr<FJsonObject,1> *param_1,
          TSharedRef<TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_>,1> *param_2,
          bool param_3)

{
  TJsonWriter<char8_t,TCondensedJsonPrintPolicy<char8_t>_> *pTVar1;
  bool bVar2;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_18;
  
  pTVar1 = param_2->Object;
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
            (&local_18,param_1);
  bVar2 = Serialize<char8_t,TCondensedJsonPrintPolicy<char8_t>_>(&local_18,pTVar1,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 141daed80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  TSharedPtr<FJsonValue,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  ulonglong uVar4;
  FElement *pFVar5;
  FElement *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  EJsonToken EVar12;
  uint uVar13;
  EJsonToken *pEVar14;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *_Dst;
  undefined2 local_res8 [4];
  undefined2 local_res20 [4];
  TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
  local_58;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_48;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  iVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_58.AllocatorInstance,&local_58.ArrayMax);
  uVar11 = iVar10 + 1;
  local_58.ArrayNum = uVar11;
  *(FElement **)&local_58.AllocatorInstance.Data[(longlong)iVar10 * 0x10].field_0x0 =
       param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(local_58.AllocatorInstance.Data + (longlong)iVar10 * 0x10 + 8) =
       pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar4 = local_58._8_8_;
  local_58._8_8_ = (ulonglong)uVar11;
  do {
    if ((int)uVar11 < 1) {
      if (param_3) {
        local_58._8_8_ = uVar4;
        uVar8 = (**(code **)(param_2->_padding_ + 8))(param_2);
        uVar11 = local_58.ArrayNum;
      }
      else {
        uVar8 = 1;
        local_58._8_8_ = uVar4;
      }
      DestructItems<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,int>
                ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
                 local_58.AllocatorInstance.Data,uVar11);
      if ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
          local_58.AllocatorInstance.Data !=
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return (bool)uVar8;
    }
    local_48.Object =
         ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
         ((longlong)local_58.AllocatorInstance.Data + ((longlong)local_58.ArrayNum + -1) * 0x10))->
         Object;
    local_48.SharedReferenceCount.ReferenceController =
         (((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
          ((longlong)local_58.AllocatorInstance.Data + ((longlong)local_58.ArrayNum + -1) * 0x10))->
         SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      local_58.ArrayNum = (int)uVar4;
    }
    iVar10 = local_58.ArrayNum + -1;
    _Dst = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
           ((longlong)local_58.AllocatorInstance.Data + (longlong)iVar10 * 0x10);
    local_58._8_8_ = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((_Dst->SharedReferenceCount).ReferenceController);
    iVar10 = (local_58.ArrayNum - iVar10) + -1;
    if (iVar10 != 0) {
      memmove(_Dst,_Dst + 1,(longlong)iVar10 << 4);
    }
    iVar10 = local_58.ArrayNum + -1;
    local_58.ArrayNum = iVar10;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&local_58.AllocatorInstance,iVar10,&local_58.ArrayMax);
    if ((local_48.Object)->bIsKeyValuePair == false) {
LAB_141daef1d:
      bVar7 = true;
    }
    else {
      if (((local_48.Object)->Identifier).Data.ArrayNum < 2) {
        iVar10 = (param_2->Stack).ArrayNum;
        if (0 < iVar10) {
          uVar11 = 0;
          if ((int)(iVar10 - 1U) < iVar10) {
            uVar11 = ~(iVar10 - 1U) >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
          if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                      (longlong)(param_2->Stack).ArrayNum * 4 + -4) == 6) goto LAB_141daef18;
        }
        goto LAB_141daef1d;
      }
LAB_141daef18:
      bVar7 = false;
    }
    pTVar1 = &(local_48.Object)->Value;
    if ((((local_48.Object)->Value).Object == (FJsonValue *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    pFVar5 = local_48.Object;
    if (pTVar1->Object->Type == Boolean) {
      if (bVar7 == false) {
        if ((((local_48.Object)->Value).Object == (FJsonValue *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        bVar7 = FJsonValue::AsBool((pFVar5->Value).Object);
        pFVar5 = local_48.Object;
        iVar10 = (param_2->Stack).ArrayNum;
        uVar13 = iVar10 - 1;
        uVar11 = 0;
        if ((int)uVar13 < iVar10) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                     (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Stack.Top() == EJson::Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x110,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                  (param_2,&pFVar5->Identifier);
      }
      else {
        if ((((local_48.Object)->Value).Object == (FJsonValue *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        bVar7 = FJsonValue::AsBool((pFVar5->Value).Object);
        bVar9 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::
                CanWriteValueWithoutIdentifier(param_2);
        if ((!bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CanWriteValueWithoutIdentifier()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0xde,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        EVar12 = param_2->PreviousTokenWritten;
        if ((EVar12 != CurlyOpen) &&
           ((Identifier < EVar12 || ((0x1013U >> (EVar12 & 0x1f) & 1) == 0)))) {
          local_res8[0] = 0x2c;
          (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res8,2);
          param_2->PreviousTokenWritten = Comma;
          EVar12 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                             (param_2,bVar7);
          param_2->PreviousTokenWritten = EVar12;
          goto LAB_141daf36b;
        }
      }
      EVar12 = TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteValueOnly
                         (param_2,bVar7);
      param_2->PreviousTokenWritten = EVar12;
    }
    else {
      bVar9 = FJsonSerializerPolicy_JsonObject::
              SerializeIfNumber<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
                        (&local_48,param_2,bVar7);
      if ((!bVar9) &&
         (bVar9 = FJsonSerializerPolicy_JsonObject::
                  SerializeIfString<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
                            (&local_48,param_2,bVar7), pFVar5 = local_48.Object, !bVar9)) {
        if ((((local_48.Object)->Value).Object == (FJsonValue *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        pFVar6 = local_48.Object;
        if (((pFVar5->Value).Object)->Type == Null) {
          iVar10 = (param_2->Stack).ArrayNum;
          if (bVar7 == false) {
            uVar11 = 0;
            if ((int)(iVar10 - 1U) < iVar10) {
              uVar11 = ~(iVar10 - 1U) >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            if ((*(int *)((param_2->Stack).AllocatorInstance.Data +
                         (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 6) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Stack.Top() == EJson::Object",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                   ,0x110,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return (bool)uVar8;
            }
            TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteIdentifier
                      (param_2,&pFVar6->Identifier);
            (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,L"null",8);
            param_2->PreviousTokenWritten = Null;
          }
          else {
            if (0 < iVar10) {
              uVar11 = 0;
              if ((int)(iVar10 - 1U) < iVar10) {
                uVar11 = ~(iVar10 - 1U) >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
              if (((*(int *)((param_2->Stack).AllocatorInstance.Data +
                            (longlong)(param_2->Stack).ArrayNum * 4 + -4) != 5) &&
                  (param_2->PreviousTokenWritten != Identifier)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CanWriteValueWithoutIdentifier()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                                     ,0xde,L""), bVar7)) {
                pcVar3 = (code *)swi(3);
                uVar8 = (*pcVar3)();
                return (bool)uVar8;
              }
            }
            pEVar14 = &param_2->PreviousTokenWritten;
            EVar12 = *pEVar14;
            if ((EVar12 != CurlyOpen) &&
               ((Identifier < EVar12 || ((0x1013U >> (EVar12 & 0x1f) & 1) == 0)))) {
              local_res20[0] = 0x2c;
              (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,local_res20,2);
              *pEVar14 = Comma;
            }
            (**(code **)(*(longlong *)param_2->Stream + 0x188))(param_2->Stream,L"null",8);
            *pEVar14 = Null;
          }
        }
        else {
          bVar9 = FJsonSerializerPolicy_JsonObject::
                  SerializeIfArray<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
                            (&local_58,&local_48,param_2,bVar7);
          if ((!bVar9) &&
             (bVar7 = FJsonSerializerPolicy_JsonObject::
                      SerializeIfObject<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
                                (&local_58,&local_48,param_2,bVar7), !bVar7)) {
            UE::Logging::Private::BasicFatalLog
                      (&`private:_static_bool___cdecl_TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>_const&___ptr64,TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>&___ptr64,bool)'
                        ::__l23::LOG_Static,(FLogCategoryBase *)&LogJson);
          }
        }
      }
    }
LAB_141daf36b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    uVar11 = local_58.ArrayNum;
    uVar4 = local_58._8_8_;
  } while( true );
}

// Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 141daf3f0

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1,
          TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  bool bVar1;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_18;
  
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const_&>
            (&local_18,param_1);
  bVar1 = Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_18,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar1;
}

// Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 141daf440

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> *param_2,
          bool param_3)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar1;
  bool bVar2;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_18;
  
  pTVar1 = param_2->Object;
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const_&>
            (&local_18,param_1);
  bVar2 = Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_18,pTVar1,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 141daf490

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TSharedPtr<FJsonObject,1> *param_1,
          TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> *param_2,
          bool param_3)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar1;
  bool bVar2;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_18;
  
  pTVar1 = param_2->Object;
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
            (&local_18,param_1);
  bVar2 = Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_18,pTVar1,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> @ 141daf4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
          (TSharedPtr<FJsonValue,1> *param_1,FString *param_2,
          TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> *param_3,
          bool param_4)

{
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_28;
  
  pTVar1 = param_3->Object;
  local_28.SharedReferenceCount.ReferenceController = ::operator_new(0x38);
  if (local_28.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_28.Object = ___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_28.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_28.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    ::FString::FString((FString *)(local_28.SharedReferenceCount.ReferenceController + 1),param_2);
    local_28.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)
     &local_28.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = (FElement *)(local_28.SharedReferenceCount.ReferenceController + 1);
    *(undefined2 *)&local_28.SharedReferenceCount.ReferenceController[3]._padding_ = 0x100;
    if (local_28.Object == (FElement *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
  }
  bVar4 = Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_28,pTVar1,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return bVar4;
}

// Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 141daf5f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *param_1,
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_2,bool param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *_Dst;
  TArray<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,TSizedDefaultAllocator<32>_>
  local_38;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_38.AllocatorInstance,&local_38.ArrayMax);
  uVar8 = iVar7 + 1;
  local_38.ArrayNum = uVar8;
  *(FElement **)&local_38.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 = param_1->Object
  ;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
       pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = local_38._8_8_;
  local_38._8_8_ = (ulonglong)uVar8;
  do {
    if ((int)uVar8 < 1) {
      if (param_3) {
        local_38._8_8_ = uVar3;
        uVar5 = (**(code **)(param_2->_padding_ + 8))(param_2);
        uVar8 = local_38.ArrayNum;
      }
      else {
        uVar5 = 1;
        local_38._8_8_ = uVar3;
      }
      DestructItems<TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>,int>
                ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
                 local_38.AllocatorInstance.Data,uVar8);
      if ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
          local_38.AllocatorInstance.Data !=
          (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return (bool)uVar5;
    }
    local_28.Object =
         ((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
         ((longlong)local_38.AllocatorInstance.Data + ((longlong)local_38.ArrayNum + -1) * 0x10))->
         Object;
    local_28.SharedReferenceCount.ReferenceController =
         (((TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
          ((longlong)local_38.AllocatorInstance.Data + ((longlong)local_38.ArrayNum + -1) * 0x10))->
         SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      local_38.ArrayNum = (int)uVar3;
    }
    iVar7 = local_38.ArrayNum + -1;
    _Dst = (TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> *)
           ((longlong)local_38.AllocatorInstance.Data + (longlong)iVar7 * 0x10);
    local_38._8_8_ = uVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((_Dst->SharedReferenceCount).ReferenceController);
    iVar7 = (local_38.ArrayNum - iVar7) + -1;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 1,(longlong)iVar7 << 4);
    }
    iVar7 = local_38.ArrayNum + -1;
    local_38.ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&local_38.AllocatorInstance,iVar7,&local_38.ArrayMax);
    if ((local_28.Object)->bIsKeyValuePair == false) {
LAB_141daf76e:
      bVar4 = true;
    }
    else {
      if (((local_28.Object)->Identifier).Data.ArrayNum < 2) {
        iVar7 = (param_2->Stack).ArrayNum;
        if (0 < iVar7) {
          uVar8 = 0;
          if ((int)(iVar7 - 1U) < iVar7) {
            uVar8 = ~(iVar7 - 1U) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (*(int *)((param_2->Stack).AllocatorInstance.Data +
                      (longlong)(param_2->Stack).ArrayNum * 4 + -4) == 6) goto LAB_141daf76a;
        }
        goto LAB_141daf76e;
      }
LAB_141daf76a:
      bVar4 = false;
    }
    bVar6 = FJsonSerializerPolicy_JsonObject::
            SerializeIfBool<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_28,param_2,bVar4);
    if ((((!bVar6) &&
         (bVar6 = FJsonSerializerPolicy_JsonObject::
                  SerializeIfNumber<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                            (&local_28,param_2,bVar4), !bVar6)) &&
        (bVar6 = FJsonSerializerPolicy_JsonObject::
                 SerializeIfString<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                           (&local_28,param_2,bVar4), !bVar6)) &&
       (((bVar6 = FJsonSerializerPolicy_JsonObject::
                  SerializeIfNull<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_28,param_2,bVar4)
         , !bVar6 &&
         (bVar6 = FJsonSerializerPolicy_JsonObject::
                  SerializeIfArray<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                            (&local_38,&local_28,param_2,bVar4), !bVar6)) &&
        (bVar4 = FJsonSerializerPolicy_JsonObject::
                 SerializeIfObject<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                           (&local_38,&local_28,param_2,bVar4), !bVar4)))) {
      UE::Logging::Private::BasicFatalLog
                (&`private:_static_bool___cdecl_TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1>_const&___ptr64,TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>&___ptr64,bool)'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogJson);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    uVar8 = local_38.ArrayNum;
    uVar3 = local_38._8_8_;
  } while( true );
}

// Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> @ 141daf870

bool __cdecl
TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
          (TSharedPtr<FJsonObject,1> *param_1,
          TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> *param_2,bool param_3)

{
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *pTVar1;
  bool bVar2;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_18;
  
  pTVar1 = param_2->Object;
  MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
            (&local_18,param_1);
  bVar2 = Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_18,pTVar1,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

