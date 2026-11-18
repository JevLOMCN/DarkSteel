// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// CreateEntities<FConstSharedStruct,FTestConstSharedFragment_Int> @ 1470d92c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityTest::FSharedFragmentBase::
CreateEntities<FConstSharedStruct,FTestConstSharedFragment_Int>
          (FSharedFragmentBase *this,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  UPackage *pUVar7;
  FStructSharedMemory *pFVar8;
  longlong lVar9;
  uint uVar10;
  FSharedReferencer<1> FVar11;
  undefined1 auStackY_138 [32];
  int local_108 [2];
  FConstSharedStruct local_100;
  undefined8 local_f0;
  FSharedReferencer<1> local_e8;
  FConstSharedStruct local_e0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_d0;
  undefined1 local_b8 [24];
  void *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  void *local_80;
  undefined4 local_78;
  undefined4 local_74;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_b8._0_4_ = 0xffffffff;
  local_b8[4] = true;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_94 = 0x80;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_74 = 0x80;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_108[0] = param_3;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar7,
                         L"TestConstSharedFragment_Int");
    FVar5.ReferenceController = local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController;
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      local_100.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
      if (local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                      _padding_)(local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController)
          ;
          LOCK();
          paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
          }
        }
      }
      goto LAB_1470d94ea;
    }
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
  uVar10 = (uint)*(short *)((longlong)
                            &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.
                             OuterSingleton)->_padding_ + 4);
  pFVar8 = FMemory::Malloc((longlong)
                           (int)(((int)(
                                       Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int
                                       .OuterSingleton)->_padding_ + -1 + uVar10 & -uVar10) +
                                (uVar10 + 7 & -uVar10)),uVar10);
  (pFVar8->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3 = (pFVar8->ScriptStruct).field0_0x0.DebugPtr;
  lVar9 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
  (**(code **)(pUVar3->_padding_ + 0x2f8))
            (pUVar3,(longlong)&(pFVar8->ScriptStruct).field0_0x0 + lVar9 + 7 & -lVar9,1);
  pUVar3 = (pFVar8->ScriptStruct).field0_0x0.DebugPtr;
  lVar9 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
  UScriptStruct::CopyScriptStruct
            (pUVar3,(void *)((longlong)&(pFVar8->ScriptStruct).field0_0x0 + lVar9 + 7 & -lVar9),
             local_108,1);
  if ((pFVar8 == (FStructSharedMemory *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                         ,0x44,
                         L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_e8.ReferenceController = ::operator_new(0x18);
  if (local_e8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (local_e8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_e8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_e8.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
    ;
    local_e8.ReferenceController[1]._padding_ = (longlong)pFVar8;
    LOCK();
    (local_e8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_e8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar11.ReferenceController = local_e8.ReferenceController;
  local_f0 = 0;
  local_100.StructMemoryPtr.Object = pFVar8;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_100.StructMemoryPtr.SharedReferenceCount,&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.ReferenceController);
LAB_1470d94ea:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  FMassArchetypeSharedFragmentValues::Add_GetRef
            ((FMassArchetypeSharedFragmentValues *)local_b8,&local_e0,&local_100);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_d0,
             (FMassArchetypeHandle *)&this->field_0x50,
             (FMassArchetypeSharedFragmentValues *)local_b8,param_2,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  DestructItems<FSharedStruct,int>((FSharedStruct *)local_60.Data,(int)local_58);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_70.Data,(int)local_68);
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  return;
}

// CreateEntities<FSharedStruct,FTestSharedFragment_Int> @ 1470d9610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityTest::FSharedFragmentBase::CreateEntities<FSharedStruct,FTestSharedFragment_Int>
          (FSharedFragmentBase *this,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  FStructSharedMemory *pFVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FSharedReferencer<1> FVar11;
  uint uVar12;
  undefined1 auStackY_138 [32];
  int local_108 [2];
  FSharedStruct local_100;
  undefined8 local_f0;
  FSharedReferencer<1> local_e8;
  FSharedStruct local_e0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_d0;
  undefined1 local_b8 [24];
  void *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  void *local_80;
  undefined4 local_78;
  undefined4 local_74;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_b8._0_4_ = 0xffffffff;
  local_b8[4] = true;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_94 = 0x80;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_74 = 0x80;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_108[0] = param_3;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar6,
                         L"TestSharedFragment_Int");
    FVar11.ReferenceController = local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController;
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      local_100.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
      if (local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                      _padding_)();
          LOCK();
          paVar1 = &(FVar11.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((FVar11.ReferenceController)->_padding_ + 8))(FVar11.ReferenceController,1)
            ;
          }
        }
      }
      FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      goto LAB_1470d9808;
    }
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
  uVar12 = (uint)*(short *)((longlong)
                            &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.
                             OuterSingleton)->_padding_ + 4);
  pFVar7 = FMemory::Malloc((longlong)
                           (int)(((int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.
                                       OuterSingleton)->_padding_ + -1 + uVar12 & -uVar12) +
                                (uVar12 + 7 & -uVar12)),uVar12);
  (pFVar7->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3 = (pFVar7->ScriptStruct).field0_0x0.DebugPtr;
  lVar8 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
  (**(code **)(pUVar3->_padding_ + 0x2f8))
            (pUVar3,(longlong)&(pFVar7->ScriptStruct).field0_0x0 + lVar8 + 7 & -lVar8,1);
  pUVar3 = (pFVar7->ScriptStruct).field0_0x0.DebugPtr;
  lVar8 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
  UScriptStruct::CopyScriptStruct
            (pUVar3,(void *)((longlong)&(pFVar7->ScriptStruct).field0_0x0 + lVar8 + 7 & -lVar8),
             local_108,1);
  if ((pFVar7 == (FStructSharedMemory *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                         ,0x44,
                         L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar9 = ::operator_new(0x18);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
    ;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9[1]._padding_ = (longlong)pFVar7;
    pTVar10 = pTVar9;
  }
  local_f0 = 0;
  local_100.StructMemoryPtr.Object = pFVar7;
  local_e8.ReferenceController = pTVar10;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_100.StructMemoryPtr.SharedReferenceCount,&local_e8);
  FVar11.ReferenceController = local_e8.ReferenceController;
LAB_1470d9808:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  FMassArchetypeSharedFragmentValues::Add_GetRef
            ((FMassArchetypeSharedFragmentValues *)local_b8,&local_e0,&local_100);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_d0,
             (FMassArchetypeHandle *)&this->field_0x50,
             (FMassArchetypeSharedFragmentValues *)local_b8,param_2,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  DestructItems<FSharedStruct,int>((FSharedStruct *)local_60.Data,(int)local_58);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_70.Data,(int)local_68);
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  return;
}

// CreateEntity<FConstSharedStruct,FTestConstSharedFragment_Int> @ 1470d9900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityTest::FSharedFragmentBase::CreateEntity<FConstSharedStruct,FTestConstSharedFragment_Int>
          (FSharedFragmentBase *this,FMassEntityHandle *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  UPackage *pUVar7;
  FStructSharedMemory *pFVar8;
  longlong lVar9;
  FMassEntityHandle FVar10;
  uint uVar11;
  FSharedReferencer<1> FVar12;
  undefined1 auStack_108 [32];
  int local_e8 [2];
  FConstSharedStruct local_e0;
  undefined8 local_d0;
  FSharedReferencer<1> local_c8;
  undefined1 local_c0 [16];
  TReferenceControllerBase<1> *local_b0;
  undefined1 local_a8 [24];
  void *local_90;
  undefined4 local_88;
  undefined4 local_84;
  void *local_70;
  undefined4 local_68;
  undefined4 local_64;
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  FVar12.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_a8._0_4_ = 0xffffffff;
  local_a8[4] = true;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_84 = 0x80;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_64 = 0x80;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_e8[0] = param_2;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar7,
                         L"TestConstSharedFragment_Int");
    FVar5.ReferenceController = local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController;
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      local_e0.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
      if (local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController)->_padding_
          )(local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController);
          LOCK();
          paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
          }
        }
      }
      goto LAB_1470d9b1b;
    }
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
  uVar11 = (uint)*(short *)((longlong)
                            &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.
                             OuterSingleton)->_padding_ + 4);
  pFVar8 = FMemory::Malloc((longlong)
                           (int)(((int)(
                                       Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int
                                       .OuterSingleton)->_padding_ + -1 + uVar11 & -uVar11) +
                                (uVar11 + 7 & -uVar11)),uVar11);
  (pFVar8->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3 = (pFVar8->ScriptStruct).field0_0x0.DebugPtr;
  lVar9 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
  (**(code **)(pUVar3->_padding_ + 0x2f8))
            (pUVar3,(longlong)&(pFVar8->ScriptStruct).field0_0x0 + lVar9 + 7 & -lVar9,1);
  pUVar3 = (pFVar8->ScriptStruct).field0_0x0.DebugPtr;
  lVar9 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
  UScriptStruct::CopyScriptStruct
            (pUVar3,(void *)((longlong)&(pFVar8->ScriptStruct).field0_0x0 + lVar9 + 7 & -lVar9),
             local_e8,1);
  if ((pFVar8 == (FStructSharedMemory *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                         ,0x44,
                         L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_c8.ReferenceController = ::operator_new(0x18);
  if (local_c8.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (local_c8.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_c8.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_c8.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
    ;
    local_c8.ReferenceController[1]._padding_ = (longlong)pFVar8;
    LOCK();
    (local_c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar12.ReferenceController = local_c8.ReferenceController;
  local_d0 = 0;
  local_e0.StructMemoryPtr.Object = pFVar8;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_e0.StructMemoryPtr.SharedReferenceCount,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ReferenceController);
LAB_1470d9b1b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  FMassArchetypeSharedFragmentValues::Add_GetRef
            ((FMassArchetypeSharedFragmentValues *)local_a8,(FConstSharedStruct *)(local_c0 + 8),
             &local_e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar10 = FMassEntityManager::CreateEntity
                     (*(FMassEntityManager **)&this->field_0x28,(FMassArchetypeHandle *)local_c0,
                      (FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  *param_1 = *(FMassEntityHandle *)FVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  DestructItems<FSharedStruct,int>((FSharedStruct *)local_50.Data,(int)local_48);
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_60.Data,(int)local_58);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  return;
}

// CreateEntity<FSharedStruct,FTestSharedFragment_Int> @ 1470d9c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityTest::FSharedFragmentBase::CreateEntity<FSharedStruct,FTestSharedFragment_Int>
          (FSharedFragmentBase *this,FMassEntityHandle *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  FStructSharedMemory *pFVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  FMassEntityHandle FVar11;
  FSharedReferencer<1> FVar12;
  uint uVar13;
  undefined1 auStack_108 [32];
  int local_e8 [2];
  FSharedStruct local_e0;
  undefined8 local_d0;
  FSharedReferencer<1> local_c8;
  undefined1 local_c0 [16];
  TReferenceControllerBase<1> *local_b0;
  undefined1 local_a8 [24];
  void *local_90;
  undefined4 local_88;
  undefined4 local_84;
  void *local_70;
  undefined4 local_68;
  undefined4 local_64;
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_a8._0_4_ = 0xffffffff;
  local_a8[4] = true;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_84 = 0x80;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_64 = 0x80;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_e8[0] = param_2;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar6,
                         L"TestSharedFragment_Int");
    FVar12.ReferenceController = local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController;
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      local_e0.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
      if (local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController)->_padding_
          )();
          LOCK();
          paVar1 = &(FVar12.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((FVar12.ReferenceController)->_padding_ + 8))(FVar12.ReferenceController,1)
            ;
          }
        }
      }
      FVar12.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      goto LAB_1470d9e1f;
    }
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
  uVar13 = (uint)*(short *)((longlong)
                            &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.
                             OuterSingleton)->_padding_ + 4);
  pFVar7 = FMemory::Malloc((longlong)
                           (int)(((int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.
                                       OuterSingleton)->_padding_ + -1 + uVar13 & -uVar13) +
                                (uVar13 + 7 & -uVar13)),uVar13);
  (pFVar7->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3 = (pFVar7->ScriptStruct).field0_0x0.DebugPtr;
  lVar8 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
  (**(code **)(pUVar3->_padding_ + 0x2f8))
            (pUVar3,(longlong)&(pFVar7->ScriptStruct).field0_0x0 + lVar8 + 7 & -lVar8,1);
  pUVar3 = (pFVar7->ScriptStruct).field0_0x0.DebugPtr;
  lVar8 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
  UScriptStruct::CopyScriptStruct
            (pUVar3,(void *)((longlong)&(pFVar7->ScriptStruct).field0_0x0 + lVar8 + 7 & -lVar8),
             local_e8,1);
  if ((pFVar7 == (FStructSharedMemory *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                         ,0x44,
                         L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar9 = ::operator_new(0x18);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
    ;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9[1]._padding_ = (longlong)pFVar7;
    pTVar10 = pTVar9;
  }
  local_d0 = 0;
  local_e0.StructMemoryPtr.Object = pFVar7;
  local_c8.ReferenceController = pTVar10;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_e0.StructMemoryPtr.SharedReferenceCount,&local_c8);
  FVar12.ReferenceController = local_c8.ReferenceController;
LAB_1470d9e1f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  FMassArchetypeSharedFragmentValues::Add_GetRef
            ((FMassArchetypeSharedFragmentValues *)local_a8,(FSharedStruct *)(local_c0 + 8),
             &local_e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar11 = FMassEntityManager::CreateEntity
                     (*(FMassEntityManager **)&this->field_0x28,(FMassArchetypeHandle *)local_c0,
                      (FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  *param_1 = *(FMassEntityHandle *)FVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e0.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  DestructItems<FSharedStruct,int>((FSharedStruct *)local_50.Data,(int)local_48);
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_60.Data,(int)local_58);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  return;
}

// GetSharedFragmentView<FConstSharedStruct,FTestConstSharedFragment_Int> @ 1470e1ee0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FConstStructView * __thiscall
FMassEntityTest::FSharedFragmentBase::
GetSharedFragmentView<FConstSharedStruct,FTestConstSharedFragment_Int>
          (FSharedFragmentBase *this,FConstStructView *__return_storage_ptr__,
          FMassEntityHandle param_1)

{
  int iVar1;
  FMassEntityManager *this_00;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  FConstStructView *pFVar5;
  UPackage *pUVar6;
  UScriptStruct *this_01;
  UScriptStruct *pUVar7;
  FConstSharedStruct *pFVar8;
  longlong lVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar10;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar11;
  FString local_18;
  
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FConstStructView *)(*pcVar3)();
    return pFVar5;
  }
  this_00 = *(FMassEntityManager **)&this->field_0x28;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    this_01 = GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                              (UObject *)pUVar6,L"TestConstSharedFragment_Int");
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton = this_01;
    if (this_01 != (UScriptStruct *)0x0) goto LAB_1470e1f6d;
    ::FString::FString(&local_18,L"None");
  }
  else {
LAB_1470e1f6d:
    this_01 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
    pUVar7 = FMassConstSharedFragment::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)this_01->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(this_01->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_1470e2007;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_18,(UObject *)0x0);
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("UE::Mass::IsA<FMassConstSharedFragment>(ConstSharedFragmentType)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                     ,0x262,
                     L"GetConstSharedFragmentDataStruct called with an invalid fragment type \'%s\'"
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FConstStructView *)(*pcVar3)();
    return pFVar5;
  }
LAB_1470e2007:
  pFVar8 = FMassEntityManager::InternalGetConstSharedFragmentPtr(this_00,param_1,this_01);
  if ((pFVar8 == (FConstSharedStruct *)0x0) ||
     (pTVar2 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar8->StructMemoryPtr).Object,
     pTVar2 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0)) {
    TVar10.DebugPtr = (UScriptStruct *)0x0;
    TVar11.DebugPtr = TVar10.DebugPtr;
  }
  else {
    lVar9 = (longlong)*(short *)((longlong)&pTVar2->DebugPtr->_padding_ + 4);
    TVar10.DebugPtr = (UScriptStruct *)((longlong)pTVar2 + lVar9 + 7 & -lVar9);
    TVar11.DebugPtr = pTVar2->DebugPtr;
  }
  __return_storage_ptr__->ScriptStruct = (UScriptStruct *)TVar11;
  __return_storage_ptr__->StructMemory = (uchar *)TVar10;
  return __return_storage_ptr__;
}

// GetSharedFragmentView<FSharedStruct,FTestSharedFragment_Int> @ 1470e2070

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FConstStructView * __thiscall
FMassEntityTest::FSharedFragmentBase::GetSharedFragmentView<FSharedStruct,FTestSharedFragment_Int>
          (FSharedFragmentBase *this,FConstStructView *__return_storage_ptr__,
          FMassEntityHandle param_1)

{
  int iVar1;
  FMassEntityManager *this_00;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar2;
  code *pcVar3;
  bool bVar4;
  FConstStructView *pFVar5;
  UPackage *pUVar6;
  UScriptStruct *this_01;
  UScriptStruct *pUVar7;
  FSharedStruct *pFVar8;
  longlong lVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar10;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar11;
  FString local_18;
  
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FConstStructView *)(*pcVar3)();
    return pFVar5;
  }
  this_00 = *(FMassEntityManager **)&this->field_0x28;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    this_01 = GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar6,
                              L"TestSharedFragment_Int");
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton = this_01;
    if (this_01 != (UScriptStruct *)0x0) goto LAB_1470e20fd;
    ::FString::FString(&local_18,L"None");
  }
  else {
LAB_1470e20fd:
    this_01 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
    pUVar7 = FMassSharedFragment::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)this_01->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(this_01->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_1470e2197;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_18,(UObject *)0x0);
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("UE::Mass::IsA<FMassSharedFragment>(SharedFragmentType)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                     ,0x287,
                     L"GetSharedFragmentDataStruct called with an invalid fragment type \'%s\'");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FConstStructView *)(*pcVar3)();
    return pFVar5;
  }
LAB_1470e2197:
  pFVar8 = FMassEntityManager::InternalGetSharedFragmentPtr(this_00,param_1,this_01);
  if ((pFVar8 == (FSharedStruct *)0x0) ||
     (pTVar2 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar8->StructMemoryPtr).Object,
     pTVar2 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0)) {
    TVar10.DebugPtr = (UScriptStruct *)0x0;
    TVar11.DebugPtr = TVar10.DebugPtr;
  }
  else {
    lVar9 = (longlong)*(short *)((longlong)&pTVar2->DebugPtr->_padding_ + 4);
    TVar10.DebugPtr = (UScriptStruct *)((longlong)pTVar2 + lVar9 + 7 & -lVar9);
    TVar11.DebugPtr = pTVar2->DebugPtr;
  }
  __return_storage_ptr__->ScriptStruct = (UScriptStruct *)TVar11;
  __return_storage_ptr__->StructMemory = (uchar *)TVar10;
  return __return_storage_ptr__;
}

