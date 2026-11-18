// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// SmokeTestAnyValidInput @ 14a021450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGTestBaseClass::SmokeTestAnyValidInput
          (FPCGTestBaseClass *this,UPCGSettings *param_1,
          TFunction<bool___cdecl(FPCGDataCollection_const_&,FPCGDataCollection_const_&)> *param_2)

{
  code *pcVar1;
  IPCGElement *pIVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *pTVar7;
  FPCGContext *this_00;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  FPCGDataPtrWrapper *this_01;
  longlong *plVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  FPCGPinProperties *pFVar14;
  ulonglong uVar15;
  ForAnyElementType *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  ForAnyElementType local_148;
  undefined8 local_140;
  undefined1 local_138 [8];
  ForAnyElementType local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  TFunction<bool___cdecl(FPCGDataCollection_const_&,FPCGDataCollection_const_&)> *local_118;
  TSharedPtr<IPCGElement,1> local_110;
  ForAnyElementType local_100;
  int local_f8 [2];
  undefined2 local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_d0;
  UPCGSettings *local_c0;
  FAutomationTestBase *local_b8;
  FString local_b0;
  FString local_a0;
  TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  FString local_70;
  ForAnyElementType *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  local_118 = param_2;
  local_c0 = param_1;
  local_b8 = (FAutomationTestBase *)this;
  ::FString::FString(&local_b0,"Valid settings");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_b0.Data.ArrayNum != 0) {
    FVar12.Data = local_b0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,param_1 != (UPCGSettings *)0x0);
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (param_1 != (UPCGSettings *)0x0) {
    UPCGSettings::GetElement(param_1,&local_110);
    bVar22 = local_110.Object != (IPCGElement *)0x0;
    ::FString::FString(&local_a0,"Valid element");
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_a0.Data.ArrayNum != 0) {
      FVar12.Data = local_a0.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar22);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_110.Object != (IPCGElement *)0x0) {
      UPCGSettings::AllInputPinProperties(param_1,&local_d0);
      iVar6 = local_d0.ArrayNum;
      local_130.Data = (FScriptContainerElement *)0x0;
      local_128 = 0;
      local_148.Data = (FScriptContainerElement *)0x0;
      local_140 = 0;
      if (local_d0.ArrayNum == 0) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_130,(int *)((longlong)&local_128 + 4));
        pFVar9 = local_130.Data + (longlong)iVar6 * 0x10;
        local_128 = CONCAT44(local_128._4_4_,iVar6 + 1);
        *(FScriptContainerElement **)&pFVar9->field_0x0 = (FScriptContainerElement *)0x0;
        *(int *)(pFVar9 + 0xc) = 0;
        *(undefined4 *)(pFVar9 + 8) = 0;
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 0xc));
        lVar21 = (longlong)iVar6;
        *(int *)(pFVar9 + 8) = iVar6 + 1;
        pFVar9 = *(FScriptContainerElement **)&pFVar9->field_0x0;
        *(undefined4 *)(pFVar9 + lVar21 * 0x30 + 0x12) = 0;
        *(undefined2 *)(pFVar9 + lVar21 * 0x30 + 0x16) = 0;
        *(undefined8 *)(pFVar9 + lVar21 * 0x30) = 0;
        *(undefined8 *)(pFVar9 + lVar21 * 0x30 + 8) = 0;
        *(undefined2 *)(pFVar9 + lVar21 * 0x30 + 0x10) = 0;
        *(undefined8 *)(pFVar9 + lVar21 * 0x30 + 0x18) = 0;
        *(undefined8 *)(pFVar9 + lVar21 * 0x30 + 0x20) = 0;
        *(undefined8 *)(pFVar9 + lVar21 * 0x30 + 0x28) = 0;
        local_11c = 0;
        if (((local_148.Data <= (FScriptContainerElement *)&local_11c) &&
            ((FScriptContainerElement *)&local_11c < local_148.Data + (longlong)local_140._4_4_ * 4)
            ) && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar22)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        iVar6 = (uint)local_140;
        if ((uint)local_140 == local_140._4_4_) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_148,(int *)((longlong)&local_140 + 4));
        }
        local_140 = CONCAT44(local_140._4_4_,iVar6 + 1);
        *(undefined4 *)(local_148.Data + (longlong)iVar6 * 4) = local_11c;
      }
      else {
        pFVar14 = (FPCGPinProperties *)
                  (local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 0x30);
        FVar12.Data = local_d0.AllocatorInstance.Data;
        while( true ) {
          if (local_d0.ArrayNum != iVar6) {
            local_138[0] = 0;
            `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_138);
          }
          param_1 = local_c0;
          if ((FPCGPinProperties *)FVar12.Data == pFVar14) break;
          pTVar7 = PCGTestsCommon::GenerateAllowedData(&local_90,(FPCGPinProperties *)FVar12.Data);
          if (((local_130.Data <= pTVar7) &&
              (pTVar7 < (TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *)
                        (local_130.Data + (longlong)local_128._4_4_ * 0x10))) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          iVar5 = (int)local_128;
          if ((int)local_128 == local_128._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_130,(int *)((longlong)&local_128 + 4));
          }
          local_128 = CONCAT44(local_128._4_4_,iVar5 + 1);
          pFVar9 = local_130.Data + (longlong)iVar5 * 0x10;
          *(undefined8 *)&pFVar9->field_0x0 = 0;
          *(FScriptContainerElement **)&pFVar9->field_0x0 = (pTVar7->AllocatorInstance).Data;
          (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar9 + 8) = pTVar7->ArrayNum;
          *(int *)(pFVar9 + 0xc) = pTVar7->ArrayMax;
          pTVar7->ArrayNum = 0;
          pTVar7->ArrayMax = 0;
          DestructItems<FPCGDataCollection,int>
                    ((FPCGDataCollection *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
          if ((FPCGDataCollection *)local_90.AllocatorInstance.Data != (FPCGDataCollection *)0x0) {
            FMemory::Free(local_90.AllocatorInstance.Data);
          }
          local_120 = 0;
          if (((local_148.Data <= (FScriptContainerElement *)&local_120) &&
              ((FScriptContainerElement *)&local_120 <
               local_148.Data + (longlong)local_140._4_4_ * 4)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          iVar5 = (uint)local_140;
          if ((uint)local_140 == local_140._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_148,(int *)((longlong)&local_140 + 4));
          }
          FVar12.Data = FVar12.Data + 0x30;
          local_140 = CONCAT44(local_140._4_4_,iVar5 + 1);
          *(undefined4 *)(local_148.Data + (longlong)iVar5 * 4) = local_120;
        }
      }
      if (((uint)local_140 != (int)local_128) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("InputIndices.Num() == InputsPerProperties.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\PCGTestsCommon.cpp"
                              ,0x152,L""), bVar22)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar22 = false;
      do {
        uVar15 = 0;
        local_100.Data = (FScriptContainerElement *)0x0;
        local_f8[0] = 0;
        local_f8[1] = 0;
        local_f0 = 0;
        local_e8 = (void *)0x0;
        local_e0 = 0;
        local_d8 = 0;
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&local_100,local_f8 + 1);
        local_f8[0] = iVar6 + 1;
        this_01 = (FPCGDataPtrWrapper *)(local_100.Data + (longlong)iVar6 * 0x78);
        this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
        (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
        (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
        this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
        this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
        this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
        *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
        *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
        this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
        *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
        *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
        FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)param_1);
        if (0 < (int)(uint)local_140) {
          lVar21 = 0;
          uVar20 = uVar15;
          do {
            uVar18 = (uint)uVar15;
            uVar19 = 0;
            if ((int)uVar18 < (int)local_128) {
              uVar19 = ~uVar18 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            FVar12.Data = local_130.Data;
            uVar19 = 0;
            if ((int)uVar18 < (int)(uint)local_140) {
              uVar19 = ~uVar18 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            uVar19 = *(uint *)(local_148.Data + uVar20 * 4);
            uVar13 = 0;
            if ((int)uVar19 < *(int *)(FVar12.Data + lVar21 + 8)) {
              uVar13 = ~uVar19 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            pFVar16 = (ForAnyElementType *)
                      (*(longlong *)(FVar12.Data + lVar21) + (longlong)(int)uVar19 * 0x30);
            if ((&local_100 == pFVar16) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)this != (void*)&Source",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x96e,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            iVar6 = *(int *)&pFVar16[1].Data;
            if (iVar6 != 0) {
              iVar5 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x78,8,iVar6,&local_100,local_f8,local_f8 + 1);
              ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                        (local_100.Data + (longlong)iVar5 * 0x78,(FPCGTaggedData *)pFVar16->Data,
                         iVar6);
            }
            uVar15 = (ulonglong)(uVar18 + 1);
            uVar20 = uVar20 + 1;
            lVar21 = lVar21 + 0x10;
            param_2 = local_118;
            this = (FPCGTestBaseClass *)local_b8;
          } while ((int)(uVar18 + 1) < (int)(uint)local_140);
        }
        pIVar2 = local_110.Object;
        if ((local_110.Object == (IPCGElement *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InElement",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\PCGTestsCommon.cpp"
                               ,0x71,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        local_60 = &local_100;
        local_80 = 0;
        uStack_78 = 0;
        local_48 = 0;
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        this_00 = (FPCGContext *)(**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        FPCGContext::InitializeSettings(this_00,false);
        (this_00->AsyncState).NumAvailableTasks = 1;
        do {
          if ((local_110.Object == (IPCGElement *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          bVar4 = IPCGElement::Execute(local_110.Object,this_00);
        } while (!bVar4);
        if (*(void **)param_2 != (void *)0x0) {
          UE::Core::Private::Function::CheckCallable(*(void **)param_2);
          pcVar1 = *(code **)param_2;
          plVar10 = *(longlong **)&param_2->field_0x28;
          if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
            plVar10 = (longlong *)&param_2->field_0x10;
          }
          uVar8 = (**(code **)(*plVar10 + 8))();
          bVar4 = (bool)(*pcVar1)(uVar8,&this_00->InputData,&this_00->OutputData);
          ::FString::FString(&local_70,"Validation");
          FVar12.Data = (FScriptContainerElement *)L"";
          if (local_70.Data.ArrayNum != 0) {
            FVar12.Data = local_70.Data.AllocatorInstance.Data;
          }
          FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,bVar4);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        uVar17 = 0;
        uVar19 = 0;
        uVar15 = uVar17;
        uVar20 = uVar17;
        if (0 < (int)(uint)local_140) {
          do {
            uVar19 = (uint)uVar17;
            uVar13 = ~uVar19 >> 0x1f;
            uVar18 = 0;
            if ((int)uVar19 < (int)local_128) {
              uVar18 = uVar13;
            }
            uVar11 = (uint)local_140;
            if (uVar18 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              uVar11 = (uint)local_140;
            }
            iVar6 = *(int *)(local_130.Data + uVar15 + 8);
            uVar18 = 0;
            if ((int)uVar19 < (int)uVar11) {
              uVar18 = uVar13;
            }
            if (uVar18 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              uVar11 = (uint)local_140;
            }
            if (*(int *)(local_148.Data + uVar20 * 4) != iVar6 + -1) {
              uVar18 = 0;
              if ((int)uVar19 < (int)uVar11) {
                uVar18 = uVar13;
              }
              if ((uVar18 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar3 = (*pcVar1)();
                return (bool)uVar3;
              }
              *(int *)(local_148.Data + uVar20 * 4) = *(int *)(local_148.Data + uVar20 * 4) + 1;
              param_2 = local_118;
              break;
            }
            uVar18 = 0;
            if ((int)uVar19 < (int)uVar11) {
              uVar18 = uVar13;
            }
            if ((uVar18 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            uVar19 = uVar19 + 1;
            uVar17 = (ulonglong)uVar19;
            *(undefined4 *)(local_148.Data + uVar20 * 4) = 0;
            param_2 = local_118;
            uVar15 = uVar15 + 0x10;
            uVar20 = uVar20 + 1;
          } while ((int)uVar19 < (int)(uint)local_140);
        }
        if (uVar19 == (uint)local_140) {
          bVar22 = true;
        }
        (**(code **)this_00->_padding_)(this_00,1);
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_100.Data,local_f8[0]);
        if ((FPCGTaggedData *)local_100.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_100.Data);
        }
        param_1 = local_c0;
        this = (FPCGTestBaseClass *)local_b8;
        if (bVar22) {
          if (local_148.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data);
          }
          DestructItems<TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *)local_130.Data,
                     (int)local_128);
          if ((TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *)local_130.Data !=
              (TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_130.Data);
          }
          DestructItems<FPCGPinProperties,int>
                    ((FPCGPinProperties *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
          if ((FPCGPinProperties *)local_d0.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
            FMemory::Free(local_d0.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_110.SharedReferenceCount.ReferenceController);
          if (*(longlong *)param_2 != 0) {
            plVar10 = (longlong *)&param_2->field_0x10;
            if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
              plVar10 = *(longlong **)&param_2->field_0x28;
            }
            (**(code **)(*plVar10 + 0x10))();
          }
          return true;
        }
      } while( true );
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_110.SharedReferenceCount.ReferenceController);
  }
  if (*(longlong *)param_2 != 0) {
    plVar10 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return false;
}

