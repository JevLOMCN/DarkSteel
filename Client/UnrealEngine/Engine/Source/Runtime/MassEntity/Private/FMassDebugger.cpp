// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 66

// BreakOnFragmentWriteForSelectedEntity @ 1471fc0f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl FMassDebugger::BreakOnFragmentWriteForSelectedEntity(FName param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TNotNull<UScriptStruct_const_*> TVar4;
  int iVar5;
  FMassEntityManager *pFVar6;
  ForAnyElementType FVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  
  iVar5 = ActiveEnvironments.ArrayNum;
  pFVar9 = ActiveEnvironments.AllocatorInstance.Data + (longlong)iVar5 * 0x140;
  FVar7.Data = ActiveEnvironments.AllocatorInstance.Data;
  do {
    if (ActiveEnvironments.ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMassDebugger::FEnvironment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar7.Data == pFVar9) {
      TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
                (&OnBreakpointsChangedDelegate);
      return;
    }
    TVar4.Val = GetFragmentTypeFromName(param_1);
    if (TVar4.Val == (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    pTVar8 = *(TReferenceControllerBase<1> **)(FVar7.Data + 8);
    pFVar6 = (FMassEntityManager *)0x0;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_1471fc180:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L"");
      if (bVar10) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      aVar2 = pTVar8->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1471fc180;
        }
        LOCK();
        aVar3 = pTVar8->SharedReferenceCount;
        bVar10 = aVar2 == aVar3;
        if (bVar10) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar10);
      pFVar6 = *(FMassEntityManager **)FVar7.Data;
      if (pFVar6 == (FMassEntityManager *)0x0) goto LAB_1471fc180;
    }
    SetFragmentWriteBreakForSelectedEntity(pFVar6,TVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FVar7.Data = FVar7.Data + 0x140;
  } while( true );
}

// ClearAllBreakpoints @ 1472026e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl FMassDebugger::ClearAllBreakpoints(void)

{
  int iVar1;
  ForAnyElementType this;
  FEnvironment *pFVar2;
  undefined1 local_res8 [8];
  
  iVar1 = ActiveEnvironments.ArrayNum;
  pFVar2 = (FEnvironment *)(ActiveEnvironments.AllocatorInstance.Data + (longlong)iVar1 * 0x140);
  this.Data = ActiveEnvironments.AllocatorInstance.Data;
  while( true ) {
    if (ActiveEnvironments.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassDebugger::FEnvironment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FEnvironment *)this.Data == pFVar2) break;
    FEnvironment::ClearBreakpoints((FEnvironment *)this.Data);
    this.Data = this.Data + 0x140;
  }
  UE::Mass::Debug::FBreakpoint::bHasBreakpoint = false;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&OnBreakpointsChangedDelegate);
  return;
}

// ClearAllEntityBreakpoints @ 147202770

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
FMassDebugger::ClearAllEntityBreakpoints(FMassEntityManager *param_1,FMassEntityHandle param_2)

{
  int *piVar1;
  TArray<UE::Mass::Debug::FBreakpoint,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FEnvironment *pFVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  int iStackX_14;
  
  pFVar7 = GetActiveEnvironmentChecked(param_1);
  uVar11 = 0;
  if (0 < (pFVar7->Breakpoints).ArrayNum) {
    pTVar2 = &pFVar7->Breakpoints;
    lVar12 = 0;
    do {
      uVar9 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < (pFVar7->Breakpoints).ArrayNum) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar10[lVar12 + 0x298] == (FScriptContainerElement)0x0) &&
          (*(int *)(pFVar10 + lVar12 + 0x20) == param_2.Index)) &&
         (iStackX_14 = param_2.SerialNumber, *(int *)(pFVar10 + lVar12 + 0x24) == iStackX_14)) {
        uVar6 = 0;
        if ((int)uVar11 < (pFVar7->Breakpoints).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = (pTVar2->AllocatorInstance).Data + lVar12;
        FVar3 = pFVar10[0x298];
        if ((1 < (ulonglong)(byte)FVar3) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[(byte)FVar3])(pFVar10 + 0x20);
        iVar8 = (pFVar7->Breakpoints).ArrayNum + ~uVar11;
        if (iVar8 != 0) {
          memmove(pFVar10,pFVar10 + 0x2a8,(longlong)iVar8 * 0x2a8);
        }
        piVar1 = &(pFVar7->Breakpoints).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2a8,8,&pTVar2->AllocatorInstance,(pFVar7->Breakpoints).ArrayNum,
                   &(pFVar7->Breakpoints).ArrayMax);
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x2a8;
    } while ((int)uVar11 < (pFVar7->Breakpoints).ArrayNum);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&OnBreakpointsChangedDelegate);
  return;
}

// ClearAllFragmentWriteBreak @ 147202970

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
FMassDebugger::ClearAllFragmentWriteBreak(FMassEntityManager *param_1,UScriptStruct *param_2)

{
  int *piVar1;
  TArray<UE::Mass::Debug::FBreakpoint,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
  *this;
  FScriptContainerElement FVar3;
  code *pcVar4;
  bool bVar5;
  FEnvironment *pFVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_68;
  longlong local_60;
  UScriptStruct *local_58;
  FEnvironment *local_50;
  UScriptStruct *local_48 [2];
  
  pFVar6 = GetActiveEnvironmentChecked(param_1);
  uVar12 = 0;
  uVar9 = 0;
  local_50 = pFVar6;
  if (0 < (pFVar6->Breakpoints).ArrayNum) {
    pTVar2 = &pFVar6->Breakpoints;
    local_60 = 0;
    uVar15 = uVar12;
    do {
      lVar14 = local_60;
      uVar10 = (uint)uVar12;
      uVar16 = ~uVar10 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar10 < (pFVar6->Breakpoints).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (pTVar2->AllocatorInstance).Data;
      if (pFVar13[uVar15 + 0x10] == (FScriptContainerElement)0x1) {
        if ((pFVar13[uVar15 + 0x1c] != (FScriptContainerElement)0x1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = uVar9;
        uVar7 = uVar9;
        if (param_2 != (UScriptStruct *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_58 = param_2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
          uVar11 = local_res20.ObjectIndex;
          uVar7 = local_res20.ObjectSerialNumber;
        }
        if ((*(uint *)(pFVar13 + uVar15 + 0x14) == uVar11) &&
           (*(uint *)(pFVar13 + uVar15 + 0x18) == uVar7)) {
          uVar11 = uVar9;
          if ((int)uVar10 < (pFVar6->Breakpoints).ArrayNum) {
            uVar11 = uVar16;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar13 = (pTVar2->AllocatorInstance).Data + uVar15;
          FVar3 = pFVar13[0x298];
          if ((1 < (ulonglong)(byte)FVar3) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[(byte)FVar3])(pFVar13 + 0x20);
          iVar8 = ~uVar10 + (pFVar6->Breakpoints).ArrayNum;
          if (iVar8 != 0) {
            memmove(pFVar13,pFVar13 + 0x2a8,(longlong)iVar8 * 0x2a8);
          }
          piVar1 = &(pFVar6->Breakpoints).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x2a8,8,&pTVar2->AllocatorInstance,(pFVar6->Breakpoints).ArrayNum,
                     &(pFVar6->Breakpoints).ArrayMax);
          lVar14 = local_60;
        }
      }
      local_60 = lVar14 + 1;
      uVar12 = (ulonglong)(uVar10 + 1);
      uVar15 = uVar15 + 0x2a8;
    } while ((int)(uVar10 + 1) < (local_50->Breakpoints).ArrayNum);
  }
  pFVar6 = local_50;
  this = &local_50->FragmentsWithBreakpoints;
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  uVar11 = 0;
  if (param_2 != (UScriptStruct *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_48[0] = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_48);
    uVar9 = local_res18.ObjectIndex;
    local_68 = local_res18;
    uVar11 = local_res18.ObjectSerialNumber;
  }
  if (*(int *)&(pFVar6->FragmentsWithBreakpoints).Elements.field_0x8 !=
      *(int *)&(pFVar6->FragmentsWithBreakpoints).Elements.field_0x34) {
    uVar9 = uVar9 - uVar11 ^ uVar11 >> 0xd;
    uVar10 = (-0x61c88647 - uVar9) - uVar11 ^ uVar9 << 8;
    uVar16 = (uVar11 - uVar10) - uVar9 ^ uVar10 >> 0xd;
    uVar9 = (uVar9 - uVar16) - uVar10 ^ uVar16 >> 0xc;
    uVar11 = (uVar10 - uVar9) - uVar16 ^ uVar9 << 0x10;
    uVar10 = (uVar16 - uVar11) - uVar9 ^ uVar11 >> 5;
    uVar9 = (uVar9 - uVar10) - uVar11 ^ uVar10 >> 3;
    uVar11 = (uVar11 - uVar9) - uVar10 ^ uVar9 << 10;
    TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TObjectKey<UScriptStruct_const_>_>
              (this,uVar11 >> 0xf ^ (uVar10 - uVar11) - uVar9,
               (TObjectKey<UScriptStruct_const_> *)&local_68);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&OnBreakpointsChangedDelegate);
  return;
}

// ClearAllProcessorBreakpoints @ 147202d00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __cdecl
FMassDebugger::ClearAllProcessorBreakpoints(FMassEntityManager *param_1,UMassProcessor *param_2)

{
  int *piVar1;
  TArray<UE::Mass::Debug::FBreakpoint,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
  *this;
  FScriptContainerElement FVar3;
  code *pcVar4;
  bool bVar5;
  FEnvironment *pFVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_68;
  longlong local_60;
  UMassProcessor *local_58;
  FEnvironment *local_50;
  UMassProcessor *local_48 [2];
  
  pFVar6 = GetActiveEnvironmentChecked(param_1);
  uVar13 = 0;
  uVar10 = 0;
  uVar9 = 0;
  local_50 = pFVar6;
  if (0 < (pFVar6->Breakpoints).ArrayNum) {
    pTVar2 = &pFVar6->Breakpoints;
    local_60 = 0;
    uVar16 = uVar13;
    do {
      lVar15 = local_60;
      uVar12 = (uint)uVar13;
      uVar17 = ~uVar12 >> 0x1f;
      uVar11 = uVar10;
      if ((int)uVar12 < (pFVar6->Breakpoints).ArrayNum) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data;
      if (pFVar14[uVar16 + 0x10] == (FScriptContainerElement)0x1) {
        if ((pFVar14[uVar16 + 0x1c] != (FScriptContainerElement)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = uVar10;
        uVar7 = uVar9;
        if (param_2 != (UMassProcessor *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_58 = param_2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_2);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
          uVar11 = local_res20.ObjectIndex;
          uVar7 = local_res20.ObjectSerialNumber;
        }
        if ((*(uint *)(pFVar14 + uVar16 + 0x14) == uVar11) &&
           (*(uint *)(pFVar14 + uVar16 + 0x18) == uVar7)) {
          uVar11 = uVar9;
          if ((int)uVar12 < (pFVar6->Breakpoints).ArrayNum) {
            uVar11 = uVar17;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar14 = (pTVar2->AllocatorInstance).Data + uVar16;
          FVar3 = pFVar14[0x298];
          if ((1 < (ulonglong)(byte)FVar3) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[(byte)FVar3])(pFVar14 + 0x20);
          iVar8 = ~uVar12 + (pFVar6->Breakpoints).ArrayNum;
          if (iVar8 != 0) {
            memmove(pFVar14,pFVar14 + 0x2a8,(longlong)iVar8 * 0x2a8);
          }
          piVar1 = &(pFVar6->Breakpoints).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x2a8,8,&pTVar2->AllocatorInstance,(pFVar6->Breakpoints).ArrayNum,
                     &(pFVar6->Breakpoints).ArrayMax);
          lVar15 = local_60;
        }
      }
      local_60 = lVar15 + 1;
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar16 = uVar16 + 0x2a8;
    } while ((int)(uVar12 + 1) < (local_50->Breakpoints).ArrayNum);
  }
  pFVar6 = local_50;
  this = &local_50->ProcessorsWithBreakpoints;
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  if (param_2 != (UMassProcessor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_48[0] = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_48);
    uVar9 = local_res18.ObjectIndex;
    local_68 = local_res18;
    uVar10 = local_res18.ObjectSerialNumber;
  }
  if (*(int *)&(pFVar6->ProcessorsWithBreakpoints).Elements.field_0x8 !=
      *(int *)&(pFVar6->ProcessorsWithBreakpoints).Elements.field_0x34) {
    uVar9 = uVar9 - uVar10 ^ uVar10 >> 0xd;
    uVar11 = (-0x61c88647 - uVar9) - uVar10 ^ uVar9 << 8;
    uVar12 = (uVar10 - uVar11) - uVar9 ^ uVar11 >> 0xd;
    uVar10 = (uVar9 - uVar12) - uVar11 ^ uVar12 >> 0xc;
    uVar9 = (uVar11 - uVar10) - uVar12 ^ uVar10 << 0x10;
    uVar11 = (uVar12 - uVar9) - uVar10 ^ uVar9 >> 5;
    uVar10 = (uVar10 - uVar11) - uVar9 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar10) - uVar11 ^ uVar10 << 10;
    TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TObjectKey<UMassProcessor_const_>_>
              (this,uVar9 >> 0xf ^ (uVar11 - uVar9) - uVar10,
               (TObjectKey<UMassProcessor_const_> *)&local_68);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&OnBreakpointsChangedDelegate);
  return;
}

// ClearFragmentWriteBreak @ 147203490

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FMassDebugger::ClearFragmentWriteBreak
          (FMassEntityManager *param_1,UScriptStruct *param_2,FMassEntityHandle param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FEnvironment *pFVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  FBreakpoint *this;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  FWeakObjectPtr local_res10;
  FMassEntityHandle local_res18;
  FWeakObjectPtr local_res20;
  UScriptStruct *local_48;
  UScriptStruct *local_40;
  
  local_res18 = param_3;
  pFVar5 = GetActiveEnvironmentChecked(param_1);
  uVar10 = 0;
  iVar15 = 0;
  uVar14 = uVar10;
  iVar4 = iVar15;
  if (param_2 != (UScriptStruct *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_48 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_48);
    uVar14 = (ulonglong)local_res10 >> 0x20;
    iVar4 = local_res10.ObjectIndex;
  }
  iVar13 = (int)uVar14;
  uVar8 = iVar4 - iVar13 ^ (uint)(uVar14 >> 0xd);
  uVar7 = (-0x61c88647 - uVar8) - iVar13 ^ uVar8 << 8;
  uVar11 = (iVar13 - uVar7) - uVar8 ^ uVar7 >> 0xd;
  uVar8 = (uVar8 - uVar11) - uVar7 ^ uVar11 >> 0xc;
  uVar7 = (uVar7 - uVar8) - uVar11 ^ uVar8 << 0x10;
  uVar11 = (uVar11 - uVar7) - uVar8 ^ uVar7 >> 5;
  uVar8 = (uVar8 - uVar11) - uVar7 ^ uVar11 >> 3;
  uVar7 = (uVar7 - uVar8) - uVar11 ^ uVar8 << 10;
  if (*(int *)&(pFVar5->FragmentsWithBreakpoints).Elements.field_0x8 !=
      *(int *)&(pFVar5->FragmentsWithBreakpoints).Elements.field_0x34) {
    FVar9 = (pFVar5->FragmentsWithBreakpoints).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(pFVar5->FragmentsWithBreakpoints).Hash;
    }
    iVar12 = *(int *)((longlong)FVar9 +
                     (ulonglong)
                     ((pFVar5->FragmentsWithBreakpoints).HashSize - 1U &
                     ((uVar11 - uVar7) - uVar8 ^ uVar7 >> 0xf)) * 4);
    if (iVar12 != -1) {
      lVar1 = *(longlong *)&(pFVar5->FragmentsWithBreakpoints).Elements;
      do {
        lVar6 = (longlong)iVar12;
        if ((*(int *)(lVar1 + lVar6 * 0x10) == iVar4) &&
           (*(int *)(lVar1 + 4 + lVar6 * 0x10) == iVar13)) {
          if ((iVar12 != -1) && (uVar14 = uVar10, 0 < (pFVar5->Breakpoints).ArrayNum)) {
            do {
              uVar8 = (uint)uVar10;
              uVar7 = 0;
              if ((int)uVar8 < (pFVar5->Breakpoints).ArrayNum) {
                uVar7 = ~uVar8 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              this = (FBreakpoint *)((pFVar5->Breakpoints).AllocatorInstance.Data + uVar14);
              if (this->TriggerType == FragmentWrite) {
                if (((this->Trigger).TypeIndex != '\x01') &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index == TypeIndex",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                       ,0x97,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar4 = iVar15;
                iVar13 = iVar15;
                if (param_2 != (UScriptStruct *)0x0) {
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)param_2);
                  }
                  local_res20.ObjectIndex = 0;
                  local_res20.ObjectSerialNumber = 0;
                  local_40 = param_2;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)param_2);
                  }
                  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
                  iVar4 = local_res20.ObjectIndex;
                  iVar13 = local_res20.ObjectSerialNumber;
                }
                if (((*(int *)&this->Trigger == iVar4) &&
                    (*(int *)&(this->Trigger).field_0x4 == iVar13)) &&
                   (bVar3 = UE::Mass::Debug::FBreakpoint::ApplyEntityFilter
                                      (this,param_1,&local_res18), bVar3)) {
                  TArray<UE::Mass::Debug::FBreakpoint,TSizedDefaultAllocator<32>_>::RemoveAt
                            (&pFVar5->Breakpoints,uVar8,Default);
                }
              }
              uVar10 = (ulonglong)(uVar8 + 1);
              uVar14 = uVar14 + 0x2a8;
            } while ((int)(uVar8 + 1) < (pFVar5->Breakpoints).ArrayNum);
          }
          break;
        }
        iVar12 = *(int *)(lVar1 + 8 + lVar6 * 0x10);
      } while (iVar12 != -1);
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&OnBreakpointsChangedDelegate);
  return;
}

// ClearProcessorBreakpoint @ 1472037b0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FMassDebugger::ClearProcessorBreakpoint
          (FMassEntityManager *param_1,UMassProcessor *param_2,FMassEntityHandle param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FEnvironment *pFVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  FBreakpoint *this;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  FWeakObjectPtr local_res10;
  FMassEntityHandle local_res18;
  FWeakObjectPtr local_res20;
  UMassProcessor *local_48;
  UMassProcessor *local_40;
  
  local_res18 = param_3;
  pFVar5 = GetActiveEnvironmentChecked(param_1);
  uVar10 = 0;
  iVar15 = 0;
  uVar14 = uVar10;
  iVar4 = iVar15;
  if (param_2 != (UMassProcessor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_48 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_48);
    uVar14 = (ulonglong)local_res10 >> 0x20;
    iVar4 = local_res10.ObjectIndex;
  }
  iVar13 = (int)uVar14;
  uVar8 = iVar4 - iVar13 ^ (uint)(uVar14 >> 0xd);
  uVar7 = (-0x61c88647 - uVar8) - iVar13 ^ uVar8 << 8;
  uVar11 = (iVar13 - uVar7) - uVar8 ^ uVar7 >> 0xd;
  uVar8 = (uVar8 - uVar11) - uVar7 ^ uVar11 >> 0xc;
  uVar7 = (uVar7 - uVar8) - uVar11 ^ uVar8 << 0x10;
  uVar11 = (uVar11 - uVar7) - uVar8 ^ uVar7 >> 5;
  uVar8 = (uVar8 - uVar11) - uVar7 ^ uVar11 >> 3;
  uVar7 = (uVar7 - uVar8) - uVar11 ^ uVar8 << 10;
  if (*(int *)&(pFVar5->ProcessorsWithBreakpoints).Elements.field_0x8 !=
      *(int *)&(pFVar5->ProcessorsWithBreakpoints).Elements.field_0x34) {
    FVar9 = (pFVar5->ProcessorsWithBreakpoints).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(pFVar5->ProcessorsWithBreakpoints).Hash;
    }
    iVar12 = *(int *)((longlong)FVar9 +
                     (ulonglong)
                     ((pFVar5->ProcessorsWithBreakpoints).HashSize - 1U &
                     ((uVar11 - uVar7) - uVar8 ^ uVar7 >> 0xf)) * 4);
    if (iVar12 != -1) {
      lVar1 = *(longlong *)&(pFVar5->ProcessorsWithBreakpoints).Elements;
      do {
        lVar6 = (longlong)iVar12;
        if ((*(int *)(lVar1 + lVar6 * 0x10) == iVar4) &&
           (*(int *)(lVar1 + 4 + lVar6 * 0x10) == iVar13)) {
          if ((iVar12 != -1) && (uVar14 = uVar10, 0 < (pFVar5->Breakpoints).ArrayNum)) {
            do {
              uVar8 = (uint)uVar10;
              uVar7 = 0;
              if ((int)uVar8 < (pFVar5->Breakpoints).ArrayNum) {
                uVar7 = ~uVar8 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              this = (FBreakpoint *)((pFVar5->Breakpoints).AllocatorInstance.Data + uVar14);
              if (this->TriggerType == ProcessorExecute) {
                if (((this->Trigger).TypeIndex != '\0') &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index == TypeIndex",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                       ,0x97,L""), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar4 = iVar15;
                iVar13 = iVar15;
                if (param_2 != (UMassProcessor *)0x0) {
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)param_2);
                  }
                  local_res20.ObjectIndex = 0;
                  local_res20.ObjectSerialNumber = 0;
                  local_40 = param_2;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)param_2);
                  }
                  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_40);
                  iVar4 = local_res20.ObjectIndex;
                  iVar13 = local_res20.ObjectSerialNumber;
                }
                if (((*(int *)&this->Trigger == iVar4) &&
                    (*(int *)&(this->Trigger).field_0x4 == iVar13)) &&
                   (bVar3 = UE::Mass::Debug::FBreakpoint::ApplyEntityFilter
                                      (this,param_1,&local_res18), bVar3)) {
                  TArray<UE::Mass::Debug::FBreakpoint,TSizedDefaultAllocator<32>_>::RemoveAt
                            (&pFVar5->Breakpoints,uVar8,Default);
                }
              }
              uVar10 = (ulonglong)(uVar8 + 1);
              uVar14 = uVar14 + 0x2a8;
            } while ((int)(uVar8 + 1) < (pFVar5->Breakpoints).ArrayNum);
          }
          break;
        }
        iVar12 = *(int *)(lVar1 + 8 + lVar6 * 0x10);
      } while (iVar12 != -1);
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&OnBreakpointsChangedDelegate);
  return;
}

// CreateBreakpoint @ 147208370

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FBreakpoint * __cdecl FMassDebugger::CreateBreakpoint(FMassEntityManager *param_1)

{
  int *piVar1;
  int iVar2;
  FEnvironment *pFVar3;
  FBreakpoint *pFVar4;
  
  pFVar3 = GetActiveEnvironmentChecked(param_1);
  iVar2 = (pFVar3->Breakpoints).ArrayNum;
  piVar1 = &(pFVar3->Breakpoints).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2a8,8,&(pFVar3->Breakpoints).AllocatorInstance,piVar1);
  }
  (pFVar3->Breakpoints).ArrayNum = iVar2 + 1;
  pFVar4 = (FBreakpoint *)((pFVar3->Breakpoints).AllocatorInstance.Data + (longlong)iVar2 * 0x2a8);
  (pFVar4->Handle).Handle = 0;
  pFVar4->HitCount = 0;
  pFVar4->TriggerType = None;
  pFVar4->FilterType = None;
  *(undefined8 *)&pFVar4->Trigger = 0;
  (pFVar4->Trigger).TypeIndex = '\0';
  (pFVar4->Filter)._padding_ = 0;
  (pFVar4->Filter).TypeIndex = '\0';
  pFVar4->bEnabled = false;
  `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
  ::__l2::LastHandle =
       `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
       ::__l2::LastHandle + 1;
  (pFVar4->Handle).Handle =
       `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
       ::__l2::LastHandle;
  return pFVar4;
}

// DoesArchetypeMatchRequirements @ 1472147c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
FMassDebugger::DoesArchetypeMatchRequirements
          (FMassArchetypeHandle *param_1,FMassFragmentRequirements *param_2,FOutputDevice *param_3)

{
  FMassArchetypeData *pFVar1;
  bool bVar2;
  FString local_18;
  
  pFVar1 = (param_1->DataPtr).Object;
  if (pFVar1 != (FMassArchetypeData *)0x0) {
    bVar2 = FMassFragmentRequirements::DoesArchetypeMatchRequirements
                      (param_2,&pFVar1->CompositionDescriptor);
    if (bVar2) {
      return true;
    }
    if (param_3 != (FOutputDevice *)0x0) {
      GetArchetypeRequirementCompatibilityDescription
                (&local_18,param_2,&pFVar1->CompositionDescriptor);
      FOutputDevice::LogfImpl(param_3,L"%s");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// EnumerateChunks @ 147215de0

void __cdecl
FMassDebugger::EnumerateChunks
          (FMassArchetypeData *param_1,
          TFunctionRef<void___cdecl(FMassArchetypeChunk_const_&)> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->Chunks).ArrayNum;
  pFVar2 = (param_1->Chunks).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((param_1->Chunks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassArchetypeChunk_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,pFVar2);
    pFVar2 = pFVar2 + 0x90;
  }
  return;
}

// FindBreakpoint @ 14721a5b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FBreakpoint * __cdecl
FMassDebugger::FindBreakpoint(FMassEntityManager *param_1,FBreakpointHandle param_2)

{
  int iVar1;
  FEnvironment *pFVar2;
  FBreakpoint *pFVar3;
  FBreakpoint *pFVar4;
  undefined1 local_res18 [16];
  
  pFVar2 = GetActiveEnvironment(param_1);
  if (pFVar2 == (FEnvironment *)0x0) {
    return (FBreakpoint *)0x0;
  }
  pFVar4 = (FBreakpoint *)(pFVar2->Breakpoints).AllocatorInstance.Data;
  iVar1 = (pFVar2->Breakpoints).ArrayNum;
  pFVar3 = pFVar4 + iVar1;
  while( true ) {
    if ((pFVar2->Breakpoints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar4 == pFVar3) break;
    if ((pFVar4->Handle).Handle == param_2.Handle) {
      return pFVar4;
    }
    pFVar4 = pFVar4 + 1;
  }
  return (FBreakpoint *)0x0;
}

// FindEnvironmentForEntityManager @ 14721a720

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEnvironment * __cdecl FMassDebugger::FindEnvironmentForEntityManager(FMassEntityManager *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  ForAnyElementType FVar4;
  FEnvironment *pFVar5;
  FMassEntityManager *pFVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  
  iVar7 = ActiveEnvironments.ArrayNum;
  pFVar5 = (FEnvironment *)(ActiveEnvironments.AllocatorInstance.Data + (longlong)iVar7 * 0x140);
  FVar4.Data = ActiveEnvironments.AllocatorInstance.Data;
  do {
    if (ActiveEnvironments.ArrayNum != iVar7) {
      `TCheckedPointerIterator<FMassDebugger::FEnvironment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if ((FEnvironment *)FVar4.Data == pFVar5) {
      return (FEnvironment *)0x0;
    }
    pTVar3 = (((FEnvironment *)FVar4.Data)->EntityManager).WeakReferenceCount.ReferenceController;
    pFVar6 = (FMassEntityManager *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      aVar1 = pTVar3->SharedReferenceCount;
      do {
        if (aVar1 == (atomic<int>)0x0) {
          pTVar3 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14721a790;
        }
        LOCK();
        aVar2 = pTVar3->SharedReferenceCount;
        bVar8 = aVar1 == aVar2;
        if (bVar8) {
          pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
          aVar2 = aVar1;
        }
        UNLOCK();
        aVar1 = aVar2;
      } while (!bVar8);
      pFVar6 = (((FEnvironment *)FVar4.Data)->EntityManager).Object;
    }
LAB_14721a790:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pFVar6 == param_1) {
      return (FEnvironment *)FVar4.Data;
    }
    FVar4.Data = FVar4.Data + 0x140;
  } while( true );
}

// ForEachArchetype @ 14721bd50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
FMassDebugger::ForEachArchetype
          (FMassEntityManager *param_1,TFunction<void___cdecl(FMassArchetypeHandle)> *param_2)

{
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_8c;
  undefined8 local_78;
  TReferenceControllerBase<1> *local_70;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar17 = 0;
  puVar2 = &(param_1->FragmentHashToArchetypeMap).field_0x10;
  iVar4 = *(int *)&(param_1->FragmentHashToArchetypeMap).field_0x28;
  pTVar1 = &param_1->FragmentHashToArchetypeMap;
  uVar8 = 1;
  iVar19 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(param_1->FragmentHashToArchetypeMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14721bdfd;
      uVar15 = puVar20[lVar11 + 1];
    }
    uVar8 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar9 = local_res20 + -1 + iVar19;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14721bdfd:
  uVar15 = *(uint *)&(param_1->FragmentHashToArchetypeMap).field_0x28;
  uVar13 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar17);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar19;
  uStack_40 = CONCAT44(uStack_8c,
                       *(int *)&(param_1->FragmentHashToArchetypeMap).field_0x8 -
                       *(int *)&(param_1->FragmentHashToArchetypeMap).field_0x34);
  local_68 = pTVar1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(param_1->FragmentHashToArchetypeMap).field_0x28;
  if (uVar15 != uVar8) {
    puVar18 = *(undefined1 **)&(param_1->FragmentHashToArchetypeMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar17;
      uVar13 = uVar13 + 0x20;
      iVar17 = iVar17 + 1;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14721bf00;
      uVar15 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_14721bf00:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == pTVar1))
    break;
    lVar11 = (longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)pTVar6;
    iVar4 = *(int *)(lVar11 + 0x10);
    puVar16 = *(undefined8 **)(lVar11 + 8);
    puVar14 = puVar16 + (longlong)iVar4 * 2;
    while( true ) {
      if (*(int *)(lVar11 + 0x10) != iVar4) {
        `TCheckedPointerIterator<TSharedPtr<FMassArchetypeData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (puVar16 == puVar14) break;
      local_78 = *puVar16;
      local_70 = (TReferenceControllerBase<1> *)puVar16[1];
      if (local_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      UE::Core::Private::Function::CheckCallable(*(void **)param_2);
      pcVar5 = *(code **)param_2;
      plVar12 = *(longlong **)&param_2->field_0x28;
      if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
        plVar12 = (longlong *)&param_2->field_0x10;
      }
      uVar10 = (**(code **)(*plVar12 + 8))();
      (*pcVar5)(uVar10,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      puVar16 = puVar16 + 2;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetActiveEnvironment @ 14721df00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEnvironment * __cdecl FMassDebugger::GetActiveEnvironment(FMassEntityManager *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  TWeakPtr<FMassEntityManager_const_,1> *pTVar7;
  FEnvironment *pFVar8;
  uint uVar9;
  ForAnyElementType this;
  uint uVar10;
  TWeakPtr<FMassEntityManager_const_,1> local_28;
  TWeakPtr<FMassEntityManager_const_,1> local_18;
  
  pTVar7 = TSharedFromThis<FMassEntityManager,1>::AsWeak
                     ((TSharedFromThis<FMassEntityManager,1> *)&param_1->_padding_,&local_18);
  local_28.Object = pTVar7->Object;
  pTVar3 = (pTVar7->WeakReferenceCount).ReferenceController;
  (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7->Object = (FMassEntityManager *)0x0;
  FVar5 = ActiveEnvironments.AllocatorInstance;
  pTVar7 = (TWeakPtr<FMassEntityManager_const_,1> *)
           (ActiveEnvironments.AllocatorInstance.Data +
           (longlong)ActiveEnvironments.ArrayNum * 0x140);
  local_28.WeakReferenceCount.ReferenceController = pTVar3;
  this = ActiveEnvironments.AllocatorInstance;
  do {
    if ((TWeakPtr<FMassEntityManager_const_,1> *)this.Data == pTVar7) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      uVar9 = 0xffffffff;
LAB_14721dfa6:
      if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_18.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (uVar9 == 0xffffffff) {
        pFVar8 = (FEnvironment *)0x0;
      }
      else {
        uVar10 = 0;
        if ((int)uVar9 < ActiveEnvironments.ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FEnvironment *)(*pcVar4)();
          return pFVar8;
        }
        pFVar8 = (FEnvironment *)
                 (ActiveEnvironments.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x140);
      }
      return pFVar8;
    }
    bVar6 = TWeakPtr<FMassEntityManager_const_,1>::UEOpEquals<FMassEntityManager_const_>
                      ((TWeakPtr<FMassEntityManager_const_,1> *)this.Data,&local_28);
    if (bVar6) {
      uVar9 = (uint)(((longlong)this.Data - (longlong)FVar5.Data) / 0x140);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      goto LAB_14721dfa6;
    }
    this.Data = this.Data + 0x140;
  } while( true );
}

// GetActiveEnvironmentChecked @ 14721e0a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEnvironment * __cdecl FMassDebugger::GetActiveEnvironmentChecked(FMassEntityManager *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  TWeakPtr<FMassEntityManager_const_,1> *pTVar7;
  FEnvironment *pFVar8;
  uint uVar9;
  ForAnyElementType this;
  uint uVar10;
  TWeakPtr<FMassEntityManager_const_,1> local_28;
  TWeakPtr<FMassEntityManager_const_,1> local_18;
  
  pTVar7 = TSharedFromThis<FMassEntityManager,1>::AsWeak
                     ((TSharedFromThis<FMassEntityManager,1> *)&param_1->_padding_,&local_18);
  local_28.Object = pTVar7->Object;
  pTVar3 = (pTVar7->WeakReferenceCount).ReferenceController;
  (pTVar7->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7->Object = (FMassEntityManager *)0x0;
  FVar5 = ActiveEnvironments.AllocatorInstance;
  pTVar7 = (TWeakPtr<FMassEntityManager_const_,1> *)
           (ActiveEnvironments.AllocatorInstance.Data +
           (longlong)ActiveEnvironments.ArrayNum * 0x140);
  local_28.WeakReferenceCount.ReferenceController = pTVar3;
  for (this = ActiveEnvironments.AllocatorInstance;
      (TWeakPtr<FMassEntityManager_const_,1> *)this.Data != pTVar7; this.Data = this.Data + 0x140) {
    bVar6 = TWeakPtr<FMassEntityManager_const_,1>::UEOpEquals<FMassEntityManager_const_>
                      ((TWeakPtr<FMassEntityManager_const_,1> *)this.Data,&local_28);
    if (bVar6) {
      uVar9 = (uint)(((longlong)this.Data - (longlong)FVar5.Data) / 0x140);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      goto LAB_14721e146;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  uVar9 = 0xffffffff;
LAB_14721e146:
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_18.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_18.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (uVar9 == 0xffffffff) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassDebugger.cpp"
                       ,0x620,L"Mass Debug Environment not found for specified EntitManager");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FEnvironment *)(*pcVar4)();
      return pFVar8;
    }
  }
  else {
    uVar10 = 0;
    if ((int)uVar9 < ActiveEnvironments.ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 != 0) goto LAB_14721e227;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FEnvironment *)(*pcVar4)();
    return pFVar8;
  }
LAB_14721e227:
  return (FEnvironment *)(ActiveEnvironments.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x140);
}

// GetAllArchetypes @ 14721e350

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> * __cdecl
FMassDebugger::GetAllArchetypes
          (TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMassEntityManager *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  uint *puVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 local_c8;
  longlong local_c0;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_88;
  TBitArray<FDefaultBitArrayAllocator> *local_80;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)
            &(param_1->FragmentHashToArchetypeMap).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_b8 = &param_1->FragmentHashToArchetypeMap;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = *(int *)&(param_1->FragmentHashToArchetypeMap).field_0x28;
  iStack_b0 = 0;
  uStack_ac = 1;
  iStack_9c = 0;
  local_98 = iStack_b0;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&(param_1->FragmentHashToArchetypeMap).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)pTVar14;
    }
    uVar15 = *puVar13;
    local_98 = 0;
    iStack_b0 = 0;
    while (uVar15 == 0) {
      lVar8 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14721e40f;
      uVar15 = puVar13[lVar8 + 1];
    }
    uStack_ac = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_ac * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iStack_9c = local_res18 + -1 + local_98;
    if (iVar2 < iStack_9c) {
      iStack_9c = iVar2;
    }
  }
LAB_14721e40f:
  iStack_90 = *(int *)&(param_1->FragmentHashToArchetypeMap).field_0x8 -
              *(int *)&(param_1->FragmentHashToArchetypeMap).field_0x34;
  uVar15 = *(uint *)&(param_1->FragmentHashToArchetypeMap).field_0x28;
  uStack_a0 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_ac,iStack_b0);
  uVar17 = uVar15 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_9c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iStack_9c;
  TStack_70.BaseBitIndex = local_98;
  uStack_50 = CONCAT44(uStack_8c,iStack_90);
  local_a8 = (undefined1 *)pTVar14;
  iStack_94 = iStack_9c;
  local_88 = local_b8;
  local_80 = pTVar14;
  local_78 = local_b8;
  TStack_70.Array = pTVar14;
  if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar7;
  }
  uVar3 = *(uint *)&(param_1->FragmentHashToArchetypeMap).field_0x28;
  if (uVar15 != uVar3) {
    puVar12 = *(undefined1 **)&(param_1->FragmentHashToArchetypeMap).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = (undefined1 *)pTVar14;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar15 == 0) {
      lVar8 = (longlong)iVar10;
      uVar17 = uVar17 + 0x20;
      iVar10 = iVar10 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14721e530;
      uVar15 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uVar15 = local_res20 + -1 + uVar17;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_14721e530:
  do {
    pTVar5 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) && (TStack_70.Array == pTVar14)) &&
       (pTVar5 == local_88)) {
      return __return_storage_ptr__;
    }
    lVar8 = (longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)pTVar5;
    iVar2 = *(int *)(lVar8 + 0x10);
    puVar11 = *(undefined8 **)(lVar8 + 8);
    puVar16 = puVar11 + (longlong)iVar2 * 2;
    while( true ) {
      if (*(int *)(lVar8 + 0x10) != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FMassArchetypeData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (puVar11 == puVar16) break;
      local_c8 = *puVar11;
      local_c0 = puVar11[1];
      if (local_c0 != 0) {
        LOCK();
        *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
        UNLOCK();
      }
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 <
           pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar7;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == __return_storage_ptr__->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar9 = local_c8;
      *(longlong *)(pFVar9 + 8) = local_c0;
      local_c0 = 0;
      local_c8 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      puVar11 = puVar11 + 2;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    pTVar14 = local_80;
  } while( true );
}

// GetArchetypeComposition @ 14721e9b0

FMassArchetypeCompositionDescriptor * __cdecl
FMassDebugger::GetArchetypeComposition(FMassArchetypeHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMassArchetypeCompositionDescriptor *pFVar3;
  
  if ((param_1->DataPtr).Object != (FMassArchetypeData *)0x0) {
    return &((param_1->DataPtr).Object)->CompositionDescriptor;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ArchetypeHandle.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                     ,0x1ff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMassArchetypeCompositionDescriptor *)(*pcVar1)();
    return pFVar3;
  }
  return &((param_1->DataPtr).Object)->CompositionDescriptor;
}

// GetArchetypeData @ 14721ea50

FMassArchetypeData * __cdecl FMassDebugger::GetArchetypeData(FMassArchetypeHandle *param_1)

{
  return (param_1->DataPtr).Object;
}

// GetArchetypeDebugNames @ 14721ea60

TArrayView<FName_const_,int> * __cdecl
FMassDebugger::GetArchetypeDebugNames
          (TArrayView<FName_const_,int> *__return_storage_ptr__,FMassArchetypeHandle *param_1)

{
  int iVar1;
  FMassArchetypeData *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FName_const_,int> *pTVar5;
  
  if ((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FName_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (param_1->DataPtr).Object;
  iVar1 = (pFVar2->DebugNames).ArrayNum;
  __return_storage_ptr__->DataPtr = (FName *)(pFVar2->DebugNames).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FName_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetArchetypeEntityStats @ 14721eaf0

void __cdecl
FMassDebugger::GetArchetypeEntityStats(FMassArchetypeHandle *param_1,FArchetypeStats *param_2)

{
  uint uVar1;
  FMassArchetypeData *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  
  if ((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this = (param_1->DataPtr).Object;
  param_2->EntitiesCount =
       *(int *)&(this->EntityMap).field_0x8 - *(int *)&(this->EntityMap).field_0x34;
  param_2->EntitiesCountPerChunk = this->NumEntitiesPerChunk;
  param_2->ChunksCount = (this->Chunks).ArrayNum;
  uVar5 = FMassArchetypeData::GetAllocatedSize(this);
  param_2->AllocatedSize = uVar5;
  param_2->BytesPerEntity = (ulonglong)this->TotalBytesPerEntity;
  uVar1 = this->ChunkMemorySize;
  iVar4 = FMassArchetypeData::GetNonEmptyChunkCount(this);
  param_2->WastedEntityMemory =
       (longlong)iVar4 * (ulonglong)uVar1 -
       (ulonglong)
       ((*(int *)&(this->EntityMap).field_0x8 - *(int *)&(this->EntityMap).field_0x34) *
       this->TotalBytesPerEntity);
  return;
}

// GetArchetypeRequirementCompatibilityDescription @ 14721edb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FString * __cdecl
FMassDebugger::GetArchetypeRequirementCompatibilityDescription
          (FString *__return_storage_ptr__,FMassFragmentRequirements *param_1,
          FMassArchetypeCompositionDescriptor *param_2)

{
  bool bVar1;
  bool bVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  ForElementType<unsigned_int> FVar8;
  undefined1 auStackY_f8 [32];
  <lambda_1> local_b8 [8];
  FOutputDevice local_b0;
  FString local_a0;
  undefined4 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_90 = 0;
  ::FString::FString(&local_a0,L"");
  FOutputDevice::FOutputDevice(&local_b0);
  local_b0.bAutoEmitLineTerminator = false;
  local_b0._padding_ = (longlong)&___7FStringOutputDevice__6B_;
  bVar2 = false;
  bVar1 = true;
  if (param_1->bHasNegativeRequirements != 0) {
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                      ((FConstBitSetContainer *)param_2,
                       (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredNoneFragments);
    if (bVar3) {
      ::FString::FString((FString *)&local_88,L"\nHas fragments required absent: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_88.NumBits = 0;
      local_88.MaxBits = 0x80;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredNoneFragments,
                 (TBitArray<FDefaultBitArrayAllocator> *)param_2,&local_88,MinSize,local_b8);
      local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_68.MaxBits = 0x80;
      local_68.NumBits = 0;
      uVar6 = local_88.NumBits + 0x1fU & 0xffffffe0;
      if (0x80 < (int)uVar6) {
        local_68.MaxBits = uVar6;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
      }
      local_68.NumBits = local_88.NumBits;
      if (local_88.NumBits != 0) {
        FVar8 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_88.AllocatorInstance.SecondaryData;
        }
        FVar7 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar7 = local_68.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar7,(void *)FVar8,(ulonglong)(local_88.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&local_68,&local_b0);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
    }
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                      ((FConstBitSetContainer *)&param_2->Tags,
                       (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredNoneTags);
    if (bVar3) {
      ::FString::FString((FString *)&local_88,L"\nHas tags required absent: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_88.NumBits = 0;
      local_88.MaxBits = 0x80;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredNoneTags,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_2->Tags,&local_88,MinSize,local_b8);
      local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_68.MaxBits = 0x80;
      local_68.NumBits = 0;
      uVar6 = local_88.NumBits + 0x1fU & 0xffffffe0;
      if (0x80 < (int)uVar6) {
        local_68.MaxBits = uVar6;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
      }
      local_68.NumBits = local_88.NumBits;
      if (local_88.NumBits != 0) {
        FVar8 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_88.AllocatorInstance.SecondaryData;
        }
        FVar7 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar7 = local_68.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar7,(void *)FVar8,(ulonglong)(local_88.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&local_68,&local_b0);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
    }
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                      ((FConstBitSetContainer *)&param_2->ChunkFragments,
                       (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredNoneChunkFragments)
    ;
    if (bVar3) {
      ::FString::FString((FString *)&local_88,L"\nHas chunk fragments required absent: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_88.NumBits = 0;
      local_88.MaxBits = 0x80;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredNoneChunkFragments,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_2->ChunkFragments,&local_88,MinSize,
                 local_b8);
      local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_68.MaxBits = 0x80;
      local_68.NumBits = 0;
      uVar6 = local_88.NumBits + 0x1fU & 0xffffffe0;
      if (0x80 < (int)uVar6) {
        local_68.MaxBits = uVar6;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
      }
      local_68.NumBits = local_88.NumBits;
      if (local_88.NumBits != 0) {
        FVar8 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_88.AllocatorInstance.SecondaryData;
        }
        FVar7 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar7 = local_68.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar7,(void *)FVar8,(ulonglong)(local_88.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&local_68,&local_b0);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
    }
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                      ((FConstBitSetContainer *)&param_2->SharedFragments,
                       (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredNoneSharedFragments
                      );
    if (bVar3) {
      ::FString::FString((FString *)&local_88,L"\nHas shared fragments required absent: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_88.NumBits = 0;
      local_88.MaxBits = 0x80;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredNoneSharedFragments,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_2->SharedFragments,&local_88,MinSize
                 ,local_b8);
      local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_68.MaxBits = 0x80;
      local_68.NumBits = 0;
      uVar6 = local_88.NumBits + 0x1fU & 0xffffffe0;
      if (0x80 < (int)uVar6) {
        local_68.MaxBits = uVar6;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
      }
      local_68.NumBits = local_88.NumBits;
      if (local_88.NumBits != 0) {
        FVar8 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_88.AllocatorInstance.SecondaryData;
        }
        FVar7 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar7 = local_68.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar7,(void *)FVar8,(ulonglong)(local_88.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&local_68,&local_b0);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
    }
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                      ((FConstBitSetContainer *)&param_2->ConstSharedFragments,
                       (TBitArray<FDefaultBitArrayAllocator> *)
                       &param_1->RequiredNoneConstSharedFragments);
    if (bVar3) {
      ::FString::FString((FString *)&local_88,L"\nHas shared fragments required absent: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_88.NumBits = 0;
      local_88.MaxBits = 0x80;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredNoneConstSharedFragments,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_2->ConstSharedFragments,&local_88,
                 MinSize,local_b8);
      local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_68.MaxBits = 0x80;
      local_68.NumBits = 0;
      uVar6 = local_88.NumBits + 0x1fU & 0xffffffe0;
      if (0x80 < (int)uVar6) {
        local_68.MaxBits = uVar6;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
      }
      local_68.NumBits = local_88.NumBits;
      if (local_88.NumBits != 0) {
        FVar8 = (ForElementType<unsigned_int>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_88.AllocatorInstance.SecondaryData;
        }
        FVar7 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar7 = local_68.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar7,(void *)FVar8,(ulonglong)(local_88.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&local_68,&local_b0);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
    }
  }
  if (param_1->bHasPositiveRequirements == 0) {
    if ((param_1->bHasOptionalRequirements != 0) &&
       (bVar3 = FMassFragmentRequirements::DoesMatchAnyOptionals(param_1,param_2), !bVar3)) {
      ::FString::FString((FString *)&local_88,
                         L"\nNone of the optionals were safisfied while not having other positive hard requirements: "
                        );
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&param_1->RequiredOptionalTags,&local_b0);
      TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&param_1->RequiredOptionalFragments,&local_b0);
      TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&param_1->RequiredOptionalChunkFragments,&local_b0);
      TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&param_1->RequiredOptionalSharedFragments,&local_b0);
      TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&param_1->RequiredOptionalConstSharedFragments,&local_b0);
    }
  }
  else {
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAll
                      ((FConstBitSetContainer *)param_2,
                       (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredAllFragments);
    if (!bVar3) {
      ::FString::FString((FString *)&local_88,L"\nMissing required fragments: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&local_68,(FBitSetContainer *)&param_1->RequiredAllFragments);
      FStructTypeBitSet::FBitSetContainer::operator-=
                ((FBitSetContainer *)&local_68,(TBitArray<FDefaultBitArrayAllocator> *)param_2);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&local_88,(FBitSetContainer *)&local_68);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&local_88,&local_b0);
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
    }
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&param_1->RequiredAnyFragments);
    if ((!bVar3) &&
       (bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                          ((FConstBitSetContainer *)param_2,
                           (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredAnyFragments),
       !bVar3)) {
      ::FString::FString((FString *)&local_88,L"\nMissing all \'any\' fragments: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&param_1->RequiredAnyFragments,&local_b0);
    }
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAll
                      ((FConstBitSetContainer *)&param_2->Tags,
                       (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredAllTags);
    if (!bVar3) {
      ::FString::FString((FString *)&local_88,L"\nMissing required tags: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&local_68,(FBitSetContainer *)&param_1->RequiredAllTags);
      FStructTypeBitSet::FBitSetContainer::operator-=
                ((FBitSetContainer *)&local_68,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_2->Tags);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&local_88,(FBitSetContainer *)&local_68);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&local_88,&local_b0);
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
    }
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&param_1->RequiredAnyTags);
    if ((!bVar3) &&
       (bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                          ((FConstBitSetContainer *)&param_2->Tags,
                           (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredAnyTags),
       !bVar3)) {
      ::FString::FString((FString *)&local_88,L"\nMissing all \'any\' tags: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&param_1->RequiredAnyTags,&local_b0);
    }
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAll
                      ((FConstBitSetContainer *)&param_2->ChunkFragments,
                       (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredAllChunkFragments);
    if (!bVar3) {
      ::FString::FString((FString *)&local_88,L"\nMissing required chunk fragments: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&local_68,
                 (FBitSetContainer *)&param_1->RequiredAllChunkFragments);
      FStructTypeBitSet::FBitSetContainer::operator-=
                ((FBitSetContainer *)&local_68,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_2->ChunkFragments);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&local_88,(FBitSetContainer *)&local_68);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&local_88,&local_b0);
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
    }
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAll
                      ((FConstBitSetContainer *)&param_2->SharedFragments,
                       (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredAllSharedFragments)
    ;
    if (!bVar3) {
      ::FString::FString((FString *)&local_88,L"\nMissing required Shared fragments: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&local_68,
                 (FBitSetContainer *)&param_1->RequiredAllSharedFragments);
      FStructTypeBitSet::FBitSetContainer::operator-=
                ((FBitSetContainer *)&local_68,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_2->SharedFragments);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&local_88,(FBitSetContainer *)&local_68);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&local_88,&local_b0);
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
    }
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAll
                      ((FConstBitSetContainer *)&param_2->ConstSharedFragments,
                       (TBitArray<FDefaultBitArrayAllocator> *)
                       &param_1->RequiredAllConstSharedFragments);
    if (!bVar3) {
      ::FString::FString((FString *)&local_88,L"\nMissing required Shared fragments: ");
      if (*(code **)(local_b0._padding_ + 0x58) == FStringOutputDevice::operator+=) {
        ::FString::Append<FString_const_&,wchar_t>(&local_a0,(FString *)&local_88);
      }
      else {
        (**(code **)(local_b0._padding_ + 0x58))(&local_b0);
      }
      if ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
      }
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&local_68,
                 (FBitSetContainer *)&param_1->RequiredAllConstSharedFragments);
      FStructTypeBitSet::FBitSetContainer::operator-=
                ((FBitSetContainer *)&local_68,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_2->ConstSharedFragments);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)&local_88,(FBitSetContainer *)&local_68);
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
      }
      TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&local_88,&local_b0);
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
      }
    }
  }
  _Src.Data = local_a0.Data.AllocatorInstance.Data;
  iVar4 = local_a0.Data.ArrayNum + -1;
  if (local_a0.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (iVar4 < 1) {
    pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)
             ::FString::FString((FString *)&local_68,L"Match");
  }
  else {
    local_88.AllocatorInstance.InlineData._0_8_ = (void *)0x0;
    local_88.AllocatorInstance.InlineData[8] = (undefined1)local_a0.Data.ArrayNum;
    local_88.AllocatorInstance.InlineData[9] = local_a0.Data.ArrayNum._1_1_;
    local_88.AllocatorInstance.InlineData[10] = local_a0.Data.ArrayNum._2_1_;
    local_88.AllocatorInstance.InlineData[0xb] = local_a0.Data.ArrayNum._3_1_;
    if (local_a0.Data.ArrayNum == 0) {
      local_88.AllocatorInstance.InlineData[0xc] = '\0';
      local_88.AllocatorInstance.InlineData[0xd] = '\0';
      local_88.AllocatorInstance.InlineData[0xe] = '\0';
      local_88.AllocatorInstance.InlineData[0xf] = '\0';
      pTVar5 = &local_88;
      bVar2 = true;
      bVar1 = false;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a0.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_a0.Data.ArrayNum,
                 (int *)(local_88.AllocatorInstance.InlineData + 0xc));
      memcpy((void *)local_88.AllocatorInstance.InlineData._0_8_,_Src.Data,
             (longlong)local_a0.Data.ArrayNum * 2);
      pTVar5 = &local_88;
      bVar2 = true;
      bVar1 = false;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data =
       ((ForAnyElementType *)(pTVar5->AllocatorInstance).InlineData)->Data;
  ((ForAnyElementType *)(pTVar5->AllocatorInstance).InlineData)->Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum =
       *(int *)((ForAnyElementType *)(pTVar5->AllocatorInstance).InlineData + 1);
  (__return_storage_ptr__->Data).ArrayMax =
       *(int *)((longlong)((ForAnyElementType *)(pTVar5->AllocatorInstance).InlineData + 1) + 4);
  ((ForAnyElementType *)(pTVar5->AllocatorInstance).InlineData)[1] = (FScriptContainerElement *)0x0;
  if ((bVar1) && ((void *)local_68.AllocatorInstance.InlineData._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_68.AllocatorInstance.InlineData._0_8_);
  }
  if ((bVar2) && ((void *)local_88.AllocatorInstance.InlineData._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_88.AllocatorInstance.InlineData._0_8_);
  }
  FOutputDevice::~FOutputDevice(&local_b0);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetArchetypeRequirementCompatibilityDescription @ 14721fa60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FString * __cdecl
FMassDebugger::GetArchetypeRequirementCompatibilityDescription
          (FString *__return_storage_ptr__,FMassFragmentRequirements *param_1,
          FMassArchetypeHandle *param_2)

{
  FMassArchetypeData *pFVar1;
  
  pFVar1 = (param_2->DataPtr).Object;
  if (pFVar1 == (FMassArchetypeData *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"Invalid");
    return __return_storage_ptr__;
  }
  GetArchetypeRequirementCompatibilityDescription
            (__return_storage_ptr__,param_1,&pFVar1->CompositionDescriptor);
  return __return_storage_ptr__;
}

// GetArchetypeTraceID @ 14721faa0

ulong64 __cdecl FMassDebugger::GetArchetypeTraceID(FMassArchetypeData *param_1)

{
  return (ulong64)param_1;
}

// GetArchetypeTraceID @ 14721fab0

ulong64 __cdecl FMassDebugger::GetArchetypeTraceID(FMassArchetypeHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if ((param_1->DataPtr).Object != (FMassArchetypeData *)0x0) {
    return (ulong64)(param_1->DataPtr).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ArchetypeHandle.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                     ,0x1ff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return (ulong64)(param_1->DataPtr).Object;
}

// GetBreakpoints @ 14721fcc0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArray<UE::Mass::Debug::FBreakpoint,TSizedDefaultAllocator<32>_> * __cdecl
FMassDebugger::GetBreakpoints(FMassEntityManager *param_1)

{
  FEnvironment *pFVar1;
  
  pFVar1 = GetActiveEnvironmentChecked(param_1);
  return &pFVar1->Breakpoints;
}

// GetConstSharedFragmentData @ 147220290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedPtr<FStructOnScope,1> * __cdecl
FMassDebugger::GetConstSharedFragmentData
          (TSharedPtr<FStructOnScope,1> *__return_storage_ptr__,FMassEntityManager *param_1,
          UScriptStruct *param_2,FMassEntityHandle param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FStructOnScope,1> *pTVar4;
  FStructOnScope *pFVar5;
  TSharedPtr<FStructOnScope,1> local_28;
  
  pTVar3 = ::operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = ___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar5 = (FStructOnScope *)&DAT_00000010;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFStructOnScope___00_SharedPointerInternals__6B_;
    FStructOnScope::FStructOnScope((FStructOnScope *)(pTVar3 + 1),(UStruct *)param_2);
    pFVar5 = (FStructOnScope *)(pTVar3 + 1);
    if (pFVar5 == (FStructOnScope *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FStructOnScope,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.Object = pFVar5;
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  bVar2 = GetConstSharedFragmentData(param_1,param_2,param_3,&local_28);
  if (bVar2) {
    __return_storage_ptr__->Object = pFVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FStructOnScope *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetConstSharedFragmentData @ 1472203c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
FMassDebugger::GetConstSharedFragmentData
          (FMassEntityManager *param_1,UScriptStruct *param_2,FMassEntityHandle param_3,
          TSharedPtr<FStructOnScope,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  IEntityStorageInterface *pIVar9;
  longlong *plVar10;
  int *piVar11;
  FStructOnScope *pFVar12;
  UScriptStruct *pUVar13;
  UStruct *pUVar14;
  void *pvVar15;
  uint uVar16;
  void *pvVar17;
  longlong *plVar18;
  StorageSelector local_38 [8];
  FWeakObjectPtr local_30;
  UScriptStruct *local_28 [2];
  
  bVar6 = FMassEntityManager::IsEntityValid(param_1,param_3);
  if (!bVar6) {
    return false;
  }
  local_38[0] = (StorageSelector)0x0;
  pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])(local_38,&param_1->EntityStorage)
  ;
  plVar10 = (longlong *)
            (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,(ulonglong)param_3 & 0xffffffff);
  pTVar1 = (TReferenceControllerBase<1> *)plVar10[1];
  lVar2 = *plVar10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar2 != 0) {
    piVar11 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
              FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)(lVar2 + 0x1d0),param_3.Index);
    uVar8 = *piVar11 / *(int *)(lVar2 + 0x2a8);
    uVar16 = 0;
    if ((int)uVar8 < *(int *)(lVar2 + 0x1c8)) {
      uVar16 = ~uVar8 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    plVar10 = *(longlong **)(*(longlong *)(lVar2 + 0x1c0) + 0x70 + (longlong)(int)uVar8 * 0x90);
    plVar18 = plVar10 + (longlong)
                        *(int *)(*(longlong *)(lVar2 + 0x1c0) + 0x78 + (longlong)(int)uVar8 * 0x90)
                        * 2;
    for (; plVar10 != plVar18; plVar10 = plVar10 + 2) {
      plVar3 = (longlong *)*plVar10;
      if (plVar3 == (longlong *)0x0) {
        pUVar13 = (UScriptStruct *)0x0;
      }
      else {
        pUVar13 = (UScriptStruct *)*plVar3;
      }
      if (pUVar13 == param_2) {
        if (plVar3 == (longlong *)0x0) {
          pvVar17 = (void *)0x0;
        }
        else {
          pvVar17 = (void *)((longlong)*(short *)(*plVar3 + 0x5c) + 7 + (longlong)plVar3 &
                            -(longlong)*(short *)(*plVar3 + 0x5c));
        }
        if (pvVar17 != (void *)0x0) {
          pFVar12 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
          pUVar13 = (UScriptStruct *)(**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
          if (pUVar13 != param_2) {
            pFVar12 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (param_2 != (UScriptStruct *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)param_2);
            }
            local_30.ObjectIndex = 0;
            local_30.ObjectSerialNumber = 0;
            local_28[0] = param_2;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (param_2 != (UScriptStruct *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)param_2);
            }
            FWeakObjectPtr::operator=(&local_30,(FObjectPtr)local_28);
            FVar5 = local_30;
            (**(code **)(pFVar12->_padding_ + 0x40))(pFVar12);
            (pFVar12->ScriptStruct).WeakPtr = FVar5;
            (**(code **)pFVar12->_padding_)(pFVar12);
          }
          pFVar12 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
          pUVar14 = (UStruct *)(**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
          pUVar13 = CastChecked<UScriptStruct,UStruct_const_>(pUVar14);
          pFVar12 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
          pvVar15 = (void *)(**(code **)(pFVar12->_padding_ + 0x18))(pFVar12);
          UScriptStruct::CopyScriptStruct(pUVar13,pvVar15,pvVar17,1);
          bVar6 = true;
          goto LAB_1472204ef;
        }
        break;
      }
    }
  }
  bVar6 = false;
LAB_1472204ef:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar6;
}

// GetEntitiesMatchingQuery @ 147220e70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __cdecl
FMassDebugger::GetEntitiesMatchingQuery
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMassEntityManager *param_1,FMassEntityQuery *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> local_48;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_38;
  
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  FMassEntityManager::GetMatchingArchetypes
            (param_1,(FMassFragmentRequirements *)param_2,&local_48,0);
  iVar3 = local_48.ArrayNum;
  pFVar8 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
  FVar7.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMassArchetypeHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7.Data == pFVar8) break;
    pTVar6 = GetEntitiesOfArchetype(&local_38,(FMassArchetypeHandle *)FVar7.Data);
    if (__return_storage_ptr__ == pTVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
    }
    iVar1 = pTVar6->ArrayNum;
    if (iVar1 != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar1,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
      memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8,
              (pTVar6->AllocatorInstance).Data,(longlong)iVar1 << 3);
      pTVar6->ArrayNum = 0;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    FVar7.Data = FVar7.Data + 0x10;
  }
  DestructItems<FMassArchetypeHandle,int>
            ((FMassArchetypeHandle *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetEntitiesOfArchetype @ 147221000

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __cdecl
FMassDebugger::GetEntitiesOfArchetype
          (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FMassArchetypeHandle *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FMassArchetypeData *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
    return pTVar10;
  }
  pFVar5 = (param_1->DataPtr).Object;
  uVar12 = *(int *)&(pFVar5->EntityMap).field_0x8 - *(int *)&(pFVar5->EntityMap).field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
  }
  iVar2 = (pFVar5->Chunks).ArrayNum;
  pFVar11 = (pFVar5->Chunks).AllocatorInstance.Data;
  pFVar13 = pFVar11 + (longlong)iVar2 * 0x90;
  do {
    if ((pFVar5->Chunks).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMassArchetypeChunk,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar13) {
      return __return_storage_ptr__;
    }
    iVar3 = pFVar5->EntityListOffsetWithinChunk;
    lVar6 = *(longlong *)pFVar11;
    iVar4 = *(int *)(pFVar11 + 0x10);
    if (iVar4 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar10;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9a9,L"Invalid range size: %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar10;
      }
LAB_14722114b:
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar4,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayNum,piVar1);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8,
             (void *)(iVar3 + lVar6),(longlong)iVar4 << 3);
    }
    else if (iVar4 != 0) goto LAB_14722114b;
    pFVar11 = pFVar11 + 0x90;
  } while( true );
}

// GetEntitiesViewOfArchetype @ 1472211d0

TArrayView<FMassEntityHandle_const_,int> * __cdecl
FMassDebugger::GetEntitiesViewOfArchetype
          (TArrayView<FMassEntityHandle_const_,int> *__return_storage_ptr__,
          FMassArchetypeData *param_1,FMassArchetypeChunk *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassEntityHandle_const_,int> *pTVar4;
  
  __return_storage_ptr__->DataPtr =
       (FMassEntityHandle *)(param_2->RawMemory + param_1->EntityListOffsetWithinChunk);
  iVar1 = param_2->NumInstances;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FMassEntityHandle_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetFragmentData @ 147221840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedPtr<FStructOnScope,1> * __cdecl
FMassDebugger::GetFragmentData
          (TSharedPtr<FStructOnScope,1> *__return_storage_ptr__,FMassEntityManager *param_1,
          UScriptStruct *param_2,FMassEntityHandle param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FStructOnScope,1> *pTVar4;
  FStructOnScope *pFVar5;
  TSharedPtr<FStructOnScope,1> local_28;
  
  pTVar3 = ::operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = ___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar5 = (FStructOnScope *)&DAT_00000010;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFStructOnScope___00_SharedPointerInternals__6B_;
    FStructOnScope::FStructOnScope((FStructOnScope *)(pTVar3 + 1),(UStruct *)param_2);
    pFVar5 = (FStructOnScope *)(pTVar3 + 1);
    if (pFVar5 == (FStructOnScope *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FStructOnScope,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.Object = pFVar5;
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  bVar2 = GetFragmentData(param_1,param_2,param_3,&local_28);
  if (bVar2) {
    __return_storage_ptr__->Object = pFVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FStructOnScope *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetFragmentData @ 147221970

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
FMassDebugger::GetFragmentData
          (FMassEntityManager *param_1,UScriptStruct *param_2,FMassEntityHandle param_3,
          TSharedPtr<FStructOnScope,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *this;
  FWeakObjectPtr FVar2;
  bool bVar3;
  IEntityStorageInterface *pIVar4;
  undefined8 *puVar5;
  void *pvVar6;
  FStructOnScope *pFVar7;
  UScriptStruct *pUVar8;
  UStruct *pUVar9;
  void *pvVar10;
  StorageSelector local_38 [8];
  FWeakObjectPtr local_30;
  UScriptStruct *local_28 [2];
  
  bVar3 = FMassEntityManager::IsEntityValid(param_1,param_3);
  if (!bVar3) {
    return false;
  }
  local_38[0] = (StorageSelector)0x0;
  pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])(local_38,&param_1->EntityStorage)
  ;
  puVar5 = (undefined8 *)
           (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,(ulonglong)param_3 & 0xffffffff);
  pTVar1 = (TReferenceControllerBase<1> *)puVar5[1];
  this = (FMassArchetypeData *)*puVar5;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this != (FMassArchetypeData *)0x0) {
    pvVar6 = FMassArchetypeData::GetFragmentDataForEntity(this,param_2,param_3.Index);
    if (pvVar6 != (void *)0x0) {
      pFVar7 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
      pUVar8 = (UScriptStruct *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
      if (pUVar8 != param_2) {
        pFVar7 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        local_30.ObjectIndex = 0;
        local_30.ObjectSerialNumber = 0;
        local_28[0] = param_2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        FWeakObjectPtr::operator=(&local_30,(FObjectPtr)local_28);
        FVar2 = local_30;
        (**(code **)(pFVar7->_padding_ + 0x40))(pFVar7);
        (pFVar7->ScriptStruct).WeakPtr = FVar2;
        (**(code **)pFVar7->_padding_)(pFVar7);
      }
      pFVar7 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
      pUVar9 = (UStruct *)(**(code **)(pFVar7->_padding_ + 0x20))(pFVar7);
      pUVar8 = CastChecked<UScriptStruct,UStruct_const_>(pUVar9);
      pFVar7 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
      pvVar10 = (void *)(**(code **)(pFVar7->_padding_ + 0x18))(pFVar7);
      UScriptStruct::CopyScriptStruct(pUVar8,pvVar10,pvVar6,1);
      bVar3 = true;
      goto LAB_147221ae2;
    }
  }
  bVar3 = false;
LAB_147221ae2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar3;
}

// GetFragmentTypeFromName @ 147222430

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UScriptStruct * __cdecl FMassDebugger::GetFragmentTypeFromName(FName param_1)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  UScriptStruct **ppUVar7;
  UScriptStruct *pUVar8;
  ulonglong uVar9;
  UStruct *pUVar10;
  UClass *pUVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  FStructTracker *pFVar15;
  byte *pbVar16;
  ForAnyElementType FVar17;
  int iVar18;
  FMassEntityManager *pFVar19;
  int iVar20;
  int iVar21;
  FMassEntityManager *pFVar22;
  FMassEntityManager *pFVar23;
  uint uVar24;
  bool bVar25;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  FScriptContainerElement *local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  UScriptStruct **local_d8;
  UStruct *local_d0;
  undefined8 local_c8;
  UStruct *local_c0;
  undefined8 local_b8;
  UStruct *local_b0;
  undefined8 local_a8;
  UStruct *local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  UScriptStruct ***local_88;
  UStruct **local_80;
  undefined8 *local_78;
  UStruct **local_70;
  undefined8 *local_68;
  UStruct **local_60;
  undefined8 *local_58;
  UStruct **local_50;
  
  ppUVar7 = TMapBase<FName,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>_>
            ::Find((TMapBase<FName,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>_>
                    *)&FragmentsByName,param_1);
  iVar4 = ActiveEnvironments.ArrayNum;
  if (ppUVar7 == (UScriptStruct **)0x0) {
    uVar14 = (ulonglong)ActiveEnvironments.ArrayNum;
    local_90 = ActiveEnvironments.AllocatorInstance.Data + uVar14 * 0x140;
    uVar9 = uVar14;
    FVar17 = ActiveEnvironments.AllocatorInstance;
    while( true ) {
      pFVar5 = local_90;
      pFVar19 = (FMassEntityManager *)0x0;
      local_f0 = FVar17.Data;
      if ((int)uVar14 != (int)uVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FMassDebugger::FEnvironment,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar17.Data == pFVar5) break;
      pFVar23 = *(FMassEntityManager **)(FVar17.Data + 8);
      pFVar22 = pFVar23;
      if (pFVar23 == (FMassEntityManager *)0x0) {
LAB_147222515:
        bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L"");
        pFVar23 = pFVar22;
        if (bVar25) {
          pcVar2 = (code *)swi(3);
          pUVar8 = (UScriptStruct *)(*pcVar2)();
          return pUVar8;
        }
      }
      else {
        iVar20 = (int)pFVar23->_padding_;
        do {
          pFVar22 = pFVar19;
          if (iVar20 == 0) goto LAB_147222515;
          LOCK();
          iVar6 = (int)pFVar23->_padding_;
          bVar25 = iVar20 == iVar6;
          if (bVar25) {
            *(int *)&pFVar23->_padding_ = iVar20 + 1;
            iVar6 = iVar20;
          }
          UNLOCK();
          iVar20 = iVar6;
        } while (!bVar25);
        pFVar19 = *(FMassEntityManager **)FVar17.Data;
        pFVar22 = pFVar23;
        if (pFVar19 == (FMassEntityManager *)0x0) goto LAB_147222515;
      }
      GetAllArchetypes(&local_120,pFVar19);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar23);
      uVar9 = (ulonglong)local_120.ArrayNum;
      local_98 = local_120.AllocatorInstance.Data + uVar9 * 0x10;
      local_res20 = local_120.ArrayNum;
      FVar17.Data = local_120.AllocatorInstance.Data;
      while( true ) {
        pFVar5 = local_98;
        iVar20 = 0;
        if (local_120.ArrayNum != (uint)uVar9) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FMassArchetypeHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (FVar17.Data == pFVar5) break;
        if ((*(longlong *)FVar17.Data == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArchetypeHandle.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                                ,0x1ff,L""), bVar25)) {
          pcVar2 = (code *)swi(3);
          pUVar8 = (UScriptStruct *)(*pcVar2)();
          return pUVar8;
        }
        pbVar1 = *(byte **)FVar17.Data;
        uVar24 = 1;
        iVar6 = *(int *)(pbVar1 + 0x18);
        iVar21 = iVar20;
        if (iVar6 < 1) {
LAB_147222629:
          if (iVar20 < iVar6) goto LAB_147222632;
        }
        else {
          pbVar16 = *(byte **)(pbVar1 + 0x10);
          pbVar12 = pbVar1;
          if (pbVar16 != (byte *)0x0) {
            pbVar12 = pbVar16;
          }
          iVar18 = iVar20;
          if ((*pbVar12 & 1) == 0) {
            do {
              uVar3 = uVar24 * 2;
              iVar20 = iVar20 + 1;
              iVar21 = iVar18 + 1;
              uVar24 = 1;
              if (uVar3 != 0) {
                iVar21 = iVar18;
                uVar24 = uVar3;
              }
              if (iVar6 <= iVar20) goto LAB_147222732;
              pbVar12 = pbVar1;
              if (pbVar16 != (byte *)0x0) {
                pbVar12 = pbVar16;
              }
              iVar18 = iVar21;
            } while ((*(uint *)(pbVar12 + (longlong)iVar21 * 4) & uVar24) == 0);
            goto LAB_147222629;
          }
LAB_147222632:
          do {
            if ((iVar20 < 0) ||
               (FMassFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
                ArrayNum <= iVar20)) {
              local_110 = 0;
              local_d8 = (UScriptStruct **)0x0;
            }
            else {
              pFVar15 = &FMassFragmentBitSetStructTrackerWrapper::StructTracker;
              if (FMassFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList.
                  AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
                pFVar15 = (FStructTracker *)
                          FMassFragmentBitSetStructTrackerWrapper::StructTracker.
                          DebugStructTypeNamesList.AllocatorInstance.SecondaryData;
              }
              local_d8 = *(UScriptStruct ***)((longlong)pFVar15 + (longlong)iVar20 * 8);
            }
            pUVar10 = FStructTracker::GetStructType
                                (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,iVar20);
            if (pUVar10 == (UStruct *)0x0) {
LAB_1472226b3:
              pUVar10 = (UStruct *)0x0;
            }
            else {
              pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
              iVar6 = (int)pUVar11->_padding_;
              if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar6) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar6 * 8)
                  != &pUVar11->_padding_)) goto LAB_1472226b3;
            }
            local_88 = &local_d8;
            local_80 = &local_d0;
            local_d0 = pUVar10;
            TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,UScriptStruct_const_*_const_&>_>
                      ((TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
                        *)&FragmentsByName,
                       (TPairInitializer<FName_const_&,UScriptStruct_const_*_const_&> *)local_e8,
                       (bool *)&local_88);
            do {
              uVar3 = uVar24 * 2;
              iVar20 = iVar20 + 1;
              iVar6 = iVar21 + 1;
              uVar24 = 1;
              if (uVar3 != 0) {
                iVar6 = iVar21;
                uVar24 = uVar3;
              }
              iVar21 = iVar6;
              if (*(int *)(pbVar1 + 0x18) <= iVar20) goto LAB_147222732;
              pbVar16 = pbVar1;
              if (*(byte **)(pbVar1 + 0x10) != (byte *)0x0) {
                pbVar16 = *(byte **)(pbVar1 + 0x10);
              }
            } while ((*(uint *)(pbVar16 + (longlong)iVar21 * 4) & uVar24) == 0);
          } while (iVar20 < *(int *)(pbVar1 + 0x18));
        }
LAB_147222732:
        iVar21 = 0;
        iVar20 = *(int *)(pbVar1 + 0x58);
        uVar24 = 1;
        iVar6 = iVar21;
        if (iVar20 < 1) {
LAB_14722279b:
          if (iVar21 < iVar20) goto LAB_1472227a4;
        }
        else {
          pbVar16 = *(byte **)(pbVar1 + 0x50);
          pbVar12 = pbVar1 + 0x40;
          if (pbVar16 != (byte *)0x0) {
            pbVar12 = pbVar16;
          }
          iVar18 = iVar21;
          if ((*pbVar12 & 1) == 0) {
            do {
              uVar3 = uVar24 * 2;
              iVar21 = iVar21 + 1;
              iVar6 = iVar18 + 1;
              uVar24 = 1;
              if (uVar3 != 0) {
                iVar6 = iVar18;
                uVar24 = uVar3;
              }
              if (iVar20 <= iVar21) goto LAB_147222894;
              pbVar12 = pbVar1 + 0x40;
              if (pbVar16 != (byte *)0x0) {
                pbVar12 = pbVar16;
              }
              iVar18 = iVar6;
            } while ((*(uint *)(pbVar12 + (longlong)iVar6 * 4) & uVar24) == 0);
            goto LAB_14722279b;
          }
LAB_1472227a4:
          do {
            if ((iVar21 < 0) ||
               (FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.DebugStructTypeNamesList
                .ArrayNum <= iVar21)) {
              local_108 = 0;
              local_c8 = 0;
            }
            else {
              pFVar15 = &FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker;
              if (FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.
                  DebugStructTypeNamesList.AllocatorInstance.SecondaryData !=
                  (ForElementType<FName>)0x0) {
                pFVar15 = (FStructTracker *)
                          FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.
                          DebugStructTypeNamesList.AllocatorInstance.SecondaryData;
              }
              local_c8 = *(undefined8 *)((longlong)pFVar15 + (longlong)iVar21 * 8);
            }
            pUVar10 = FStructTracker::GetStructType
                                (&FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker,iVar21
                                );
            if (pUVar10 == (UStruct *)0x0) {
LAB_14722281c:
              pUVar10 = (UStruct *)0x0;
            }
            else {
              pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
              iVar20 = (int)pUVar11->_padding_;
              if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar20) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar20 * 8)
                  != &pUVar11->_padding_)) goto LAB_14722281c;
            }
            local_78 = &local_c8;
            local_70 = &local_c0;
            local_c0 = pUVar10;
            TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,UScriptStruct_const_*_const_&>_>
                      ((TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
                        *)&FragmentsByName,
                       (TPairInitializer<FName_const_&,UScriptStruct_const_*_const_&> *)
                       (local_e8 + 4),(bool *)&local_78);
            do {
              uVar3 = uVar24 * 2;
              iVar21 = iVar21 + 1;
              iVar20 = iVar6 + 1;
              uVar24 = 1;
              if (uVar3 != 0) {
                iVar20 = iVar6;
                uVar24 = uVar3;
              }
              iVar6 = iVar20;
              if (*(int *)(pbVar1 + 0x58) <= iVar21) goto LAB_147222894;
              pbVar16 = pbVar1 + 0x40;
              if (*(byte **)(pbVar1 + 0x50) != (byte *)0x0) {
                pbVar16 = *(byte **)(pbVar1 + 0x50);
              }
            } while ((*(uint *)(pbVar16 + (longlong)iVar6 * 4) & uVar24) == 0);
          } while (iVar21 < *(int *)(pbVar1 + 0x58));
        }
LAB_147222894:
        iVar6 = 0;
        iVar20 = *(int *)(pbVar1 + 0x78);
        uVar24 = 1;
        iVar21 = iVar6;
        if (iVar20 < 1) {
LAB_1472228f9:
          if (iVar21 < iVar20) goto LAB_147222902;
        }
        else {
          pbVar16 = *(byte **)(pbVar1 + 0x70);
          pbVar12 = pbVar1 + 0x60;
          if (pbVar16 != (byte *)0x0) {
            pbVar12 = pbVar16;
          }
          iVar18 = iVar6;
          if ((*pbVar12 & 1) == 0) {
            do {
              uVar3 = uVar24 * 2;
              iVar21 = iVar21 + 1;
              iVar6 = iVar18 + 1;
              if (uVar3 != 0) {
                iVar6 = iVar18;
              }
              uVar24 = 1;
              if (uVar3 != 0) {
                uVar24 = uVar3;
              }
              if (iVar20 <= iVar21) goto LAB_1472229f2;
              pbVar12 = pbVar1 + 0x60;
              if (pbVar16 != (byte *)0x0) {
                pbVar12 = pbVar16;
              }
              iVar18 = iVar6;
            } while ((*(uint *)(pbVar12 + (longlong)iVar6 * 4) & uVar24) == 0);
            goto LAB_1472228f9;
          }
LAB_147222902:
          do {
            if ((iVar21 < 0) ||
               (FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.
                DebugStructTypeNamesList.ArrayNum <= iVar21)) {
              local_100 = 0;
              local_b8 = 0;
            }
            else {
              pFVar15 = &FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker;
              if (FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.
                  DebugStructTypeNamesList.AllocatorInstance.SecondaryData !=
                  (ForElementType<FName>)0x0) {
                pFVar15 = (FStructTracker *)
                          FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.
                          DebugStructTypeNamesList.AllocatorInstance.SecondaryData;
              }
              local_b8 = *(undefined8 *)((longlong)pFVar15 + (longlong)iVar21 * 8);
            }
            pUVar10 = FStructTracker::GetStructType
                                (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                                 iVar21);
            if (pUVar10 == (UStruct *)0x0) {
LAB_14722297a:
              pUVar10 = (UStruct *)0x0;
            }
            else {
              pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
              iVar20 = (int)pUVar11->_padding_;
              if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar20) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar20 * 8)
                  != &pUVar11->_padding_)) goto LAB_14722297a;
            }
            local_68 = &local_b8;
            local_60 = &local_b0;
            local_b0 = pUVar10;
            TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,UScriptStruct_const_*_const_&>_>
                      ((TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
                        *)&FragmentsByName,
                       (TPairInitializer<FName_const_&,UScriptStruct_const_*_const_&> *)local_e0,
                       (bool *)&local_68);
            do {
              uVar3 = uVar24 * 2;
              iVar21 = iVar21 + 1;
              iVar20 = iVar6 + 1;
              if (uVar3 != 0) {
                iVar20 = iVar6;
              }
              iVar6 = iVar20;
              uVar24 = 1;
              if (uVar3 != 0) {
                uVar24 = uVar3;
              }
              if (*(int *)(pbVar1 + 0x78) <= iVar21) goto LAB_1472229f2;
              pbVar16 = pbVar1 + 0x60;
              if (*(byte **)(pbVar1 + 0x70) != (byte *)0x0) {
                pbVar16 = *(byte **)(pbVar1 + 0x70);
              }
            } while ((*(uint *)(pbVar16 + (longlong)iVar6 * 4) & uVar24) == 0);
          } while (iVar21 < *(int *)(pbVar1 + 0x78));
        }
LAB_1472229f2:
        iVar21 = 0;
        pbVar16 = pbVar1 + 0x80;
        iVar20 = *(int *)(pbVar1 + 0x98);
        uVar24 = 1;
        iVar6 = iVar21;
        if (iVar20 < 1) {
LAB_147222a69:
          if (iVar21 < iVar20) goto LAB_147222a72;
        }
        else {
          pbVar12 = *(byte **)(pbVar1 + 0x90);
          pbVar13 = pbVar16;
          if (pbVar12 != (byte *)0x0) {
            pbVar13 = pbVar12;
          }
          iVar18 = iVar21;
          if ((*pbVar13 & 1) == 0) {
            do {
              uVar3 = uVar24 * 2;
              iVar21 = iVar21 + 1;
              iVar6 = iVar18 + 1;
              uVar24 = 1;
              if (uVar3 != 0) {
                iVar6 = iVar18;
                uVar24 = uVar3;
              }
              if (iVar20 <= iVar21) goto LAB_147222b61;
              pbVar13 = pbVar16;
              if (pbVar12 != (byte *)0x0) {
                pbVar13 = pbVar12;
              }
              iVar18 = iVar6;
            } while ((*(uint *)(pbVar13 + (longlong)iVar6 * 4) & uVar24) == 0);
            goto LAB_147222a69;
          }
LAB_147222a72:
          do {
            if ((iVar21 < 0) ||
               (FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker.
                DebugStructTypeNamesList.ArrayNum <= iVar21)) {
              local_f8 = 0;
              local_a8 = 0;
            }
            else {
              pFVar15 = &FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker;
              if (FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker.
                  DebugStructTypeNamesList.AllocatorInstance.SecondaryData !=
                  (ForElementType<FName>)0x0) {
                pFVar15 = (FStructTracker *)
                          FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker.
                          DebugStructTypeNamesList.AllocatorInstance.SecondaryData;
              }
              local_a8 = *(undefined8 *)((longlong)pFVar15 + (longlong)iVar21 * 8);
            }
            pUVar10 = FStructTracker::GetStructType
                                (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                                 iVar21);
            if (pUVar10 == (UStruct *)0x0) {
LAB_147222aea:
              pUVar10 = (UStruct *)0x0;
            }
            else {
              pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
              iVar20 = (int)pUVar11->_padding_;
              if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar20) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar20 * 8)
                  != &pUVar11->_padding_)) goto LAB_147222aea;
            }
            local_58 = &local_a8;
            local_50 = &local_a0;
            local_a0 = pUVar10;
            TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,UScriptStruct_const_*_const_&>_>
                      ((TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
                        *)&FragmentsByName,
                       (TPairInitializer<FName_const_&,UScriptStruct_const_*_const_&> *)
                       (local_e0 + 4),(bool *)&local_58);
            do {
              uVar3 = uVar24 * 2;
              iVar21 = iVar21 + 1;
              iVar20 = iVar6 + 1;
              uVar24 = 1;
              if (uVar3 != 0) {
                iVar20 = iVar6;
                uVar24 = uVar3;
              }
              iVar6 = iVar20;
              if (*(int *)(pbVar1 + 0x98) <= iVar21) goto LAB_147222b61;
              pbVar12 = pbVar16;
              if (*(byte **)(pbVar1 + 0x90) != (byte *)0x0) {
                pbVar12 = *(byte **)(pbVar1 + 0x90);
              }
            } while ((*(uint *)(pbVar12 + (longlong)iVar6 * 4) & uVar24) == 0);
          } while (iVar21 < *(int *)(pbVar1 + 0x98));
        }
LAB_147222b61:
        uVar9 = (ulonglong)local_res20;
        FVar17.Data = FVar17.Data + 0x10;
      }
      DestructItems<FMassArchetypeHandle,int>
                ((FMassArchetypeHandle *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
      if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
      uVar14 = (ulonglong)(uint)ActiveEnvironments.ArrayNum;
      FVar17.Data = local_f0 + 0x140;
      uVar9 = (ulonglong)(uint)iVar4;
    }
    ppUVar7 = TMapBase<FName,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>_>
              ::Find((TMapBase<FName,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>_>
                      *)&FragmentsByName,param_1);
    if (ppUVar7 == (UScriptStruct **)0x0) {
      return (UScriptStruct *)0x0;
    }
  }
  return *ppUVar7;
}

// GetHighlightedEntity @ 147222df0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __cdecl FMassDebugger::GetHighlightedEntity(FMassEntityManager *param_1)

{
  FEnvironment *pFVar1;
  FMassEntityManager *in_RDX;
  
  pFVar1 = GetActiveEnvironment(in_RDX);
  if (pFVar1 != (FEnvironment *)0x0) {
    param_1->_padding_ = (longlong)pFVar1->HighlightedEntity;
    return (FMassEntityHandle)param_1;
  }
  param_1->_padding_ = 0;
  return (FMassEntityHandle)param_1;
}

// GetHostedProcessors @ 147222e30

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArrayView<TObjectPtr<UMassProcessor>_const_,int> * __cdecl
FMassDebugger::GetHostedProcessors
          (TArrayView<TObjectPtr<UMassProcessor>_const_,int> *__return_storage_ptr__,
          UMassCompositeProcessor *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TObjectPtr<UMassProcessor>_const_,int> *pTVar4;
  
  iVar1 = (param_1->ChildPipeline).Processors.ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TObjectPtr<UMassProcessor> *)(param_1->ChildPipeline).Processors.AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TObjectPtr<UMassProcessor>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetProcessingGraph @ 1472251e0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArrayView<UMassCompositeProcessor::FDependencyNode_const_,int> * __cdecl
FMassDebugger::GetProcessingGraph
          (TArrayView<UMassCompositeProcessor::FDependencyNode_const_,int> *__return_storage_ptr__,
          UMassCompositeProcessor *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UMassCompositeProcessor::FDependencyNode_const_,int> *pTVar4;
  
  iVar1 = (param_1->FlatProcessingGraph).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FDependencyNode *)(param_1->FlatProcessingGraph).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UMassCompositeProcessor::FDependencyNode_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetProcessorQueries @ 147225380

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

TArrayView<FMassEntityQuery_*_const,int> * __cdecl
FMassDebugger::GetProcessorQueries
          (TArrayView<FMassEntityQuery_*_const,int> *__return_storage_ptr__,UMassProcessor *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FMassEntityQuery_*_const,int> *pTVar4;
  
  iVar1 = (param_1->OwnedQueries).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FMassEntityQuery **)(param_1->OwnedQueries).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FMassEntityQuery_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetQueryExecutionRequirements @ 1472253f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
FMassDebugger::GetQueryExecutionRequirements
          (FMassEntityQuery *param_1,FMassExecutionRequirements *param_2)

{
  FMassSubsystemRequirements::ExportRequirements
            ((FMassSubsystemRequirements *)&param_1->_padding_,param_2);
  FMassFragmentRequirements::ExportRequirements((FMassFragmentRequirements *)param_1,param_2);
  return;
}

// GetQueryRequirements @ 147225430

FQueryRequirementsView * __cdecl
FMassDebugger::GetQueryRequirements
          (FQueryRequirementsView *__return_storage_ptr__,FMassEntityQuery *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FQueryRequirementsView *pFVar4;
  
  (__return_storage_ptr__->FragmentRequirements).DataPtr =
       (FMassFragmentRequirementDescription *)param_1->_padding_;
  iVar1 = (int)param_1->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FQueryRequirementsView *)(*pcVar2)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->FragmentRequirements).ArrayNum = iVar1;
  (__return_storage_ptr__->ChunkRequirements).DataPtr =
       (FMassFragmentRequirementDescription *)param_1->_padding_;
  iVar1 = (int)param_1->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FQueryRequirementsView *)(*pcVar2)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->ChunkRequirements).ArrayNum = iVar1;
  (__return_storage_ptr__->ConstSharedRequirements).DataPtr =
       (FMassFragmentRequirementDescription *)param_1->_padding_;
  iVar1 = (int)param_1->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FQueryRequirementsView *)(*pcVar2)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->ConstSharedRequirements).ArrayNum = iVar1;
  (__return_storage_ptr__->SharedRequirements).DataPtr =
       (FMassFragmentRequirementDescription *)param_1->_padding_;
  iVar1 = (int)param_1->_padding_;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FQueryRequirementsView *)(*pcVar2)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->SharedRequirements).ArrayNum = iVar1;
  __return_storage_ptr__->RequiredAllTags =
       (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
       &param_1->_padding_;
  __return_storage_ptr__->RequiredAnyTags =
       (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
       &param_1->_padding_;
  __return_storage_ptr__->RequiredNoneTags =
       (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
       &param_1->_padding_;
  __return_storage_ptr__->RequiredOptionalTags =
       (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
       &param_1->_padding_;
  __return_storage_ptr__->RequiredConstSubsystems =
       (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *)
       &param_1->_padding_;
  __return_storage_ptr__->RequiredMutableSubsystems =
       (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *)
       &param_1->_padding_;
  return __return_storage_ptr__;
}

// GetRequirementsDescription @ 147225eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FString * __cdecl
FMassDebugger::GetRequirementsDescription
          (FString *__return_storage_ptr__,FMassFragmentRequirements *param_1)

{
  bool bVar1;
  void *pvVar2;
  ulonglong uVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  ulong64 uVar6;
  ForAnyElementType FVar7;
  ForAnyElementType _Str;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_2d8 [32];
  FScriptContainerElement *local_2b8;
  FScriptContainerElement local_2a8 [8];
  FName local_2a0;
  uint local_298;
  FString local_290;
  FString local_280;
  FString *local_270;
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_258.Base = local_238;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_270 = __return_storage_ptr__;
  pvVar2 = FGenericPlatformString::Memcpy(local_238,L"<",2);
  pFVar10 = (param_1->FragmentRequirements).AllocatorInstance.Data;
  local_258.CurPos = (wchar_t *)((longlong)pvVar2 + 2);
  bVar1 = false;
  local_298 = (param_1->FragmentRequirements).ArrayNum;
  uVar3 = (ulonglong)(int)local_298;
  pFVar9 = pFVar10 + uVar3 * 0x10;
  do {
    iVar8 = 0;
    if ((param_1->FragmentRequirements).ArrayNum != (int)uVar3) {
      `TCheckedPointerIterator<FMassFragmentRequirementDescription_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_2a8);
    }
    if (pFVar10 == pFVar9) {
      if (local_258.End < local_258.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,1);
      }
      pvVar2 = FGenericPlatformString::Memcpy(local_258.CurPos,L">",2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar2 + 2);
      if (local_258.End < (wchar_t *)((longlong)pvVar2 + 4U)) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,1);
      }
      *local_258.CurPos = L'\0';
      ::FString::FString(local_270,local_258.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
      return local_270;
    }
    if (bVar1) {
      if (local_258.End < local_258.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,1);
      }
      pvVar2 = FGenericPlatformString::Memcpy(local_258.CurPos,L",",2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar2 + 2);
    }
    local_2a8[0] = pFVar10[8];
    if (local_2a8[0] == (FScriptContainerElement)0x0) {
      pwVar5 = L"--";
    }
    else if (local_2a8[0] == (FScriptContainerElement)0x1) {
      pwVar5 = L"RO";
    }
    else if (local_2a8[0] == (FScriptContainerElement)0x2) {
      pwVar5 = L"RW";
    }
    else {
      local_2a0 = (FName)local_2a8;
      `UE::Mass::Debug::DebugGetFragmentAccessString'::__l4::<lambda_1>::operator()(&local_2a0);
      pwVar5 = L"Missing string conversion";
    }
    ::FString::FString(&local_268,pwVar5);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_268.Data.ArrayNum != 0) {
      FVar7.Data = local_268.Data.AllocatorInstance.Data;
    }
    if (*(longlong *)pFVar10 == 0) {
      ::FString::FString(&local_290,L"None");
    }
    else {
      local_2a0 = *(FName *)(*(longlong *)pFVar10 + 0x18);
      ::FName::ToString(&local_2a0,&local_290);
    }
    local_2b8 = FVar7.Data;
    ::FString::PrintfImpl(&local_280,L"%s%s[%s]");
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    FVar7.Data = local_280.Data.AllocatorInstance.Data;
    if (local_280.Data.ArrayNum == 0) {
      _Str.Data = (FScriptContainerElement *)L"";
LAB_1472260d1:
      sVar4 = wcslen((wchar_t *)_Str.Data);
      iVar8 = (int)sVar4;
    }
    else {
      _Str.Data = local_280.Data.AllocatorInstance.Data;
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1472260d1;
    }
    uVar6 = (ulong64)iVar8;
    if (local_258.End < local_258.CurPos + uVar6) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,uVar6);
      FVar7.Data = local_280.Data.AllocatorInstance.Data;
    }
    if (iVar8 != 0) {
      pvVar2 = FGenericPlatformString::Memcpy(local_258.CurPos,_Str.Data,uVar6 * 2);
      local_258.CurPos = (wchar_t *)((longlong)pvVar2 + uVar6 * 2);
      FVar7.Data = local_280.Data.AllocatorInstance.Data;
    }
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar7.Data);
    }
    uVar3 = (ulonglong)local_298;
    bVar1 = true;
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// GetSelectedEntity @ 147226e30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __cdecl FMassDebugger::GetSelectedEntity(FMassEntityManager *param_1)

{
  FEnvironment *pFVar1;
  FMassEntityManager *in_RDX;
  
  pFVar1 = GetActiveEnvironmentChecked(in_RDX);
  param_1->_padding_ = (longlong)pFVar1->SelectedEntity;
  return (FMassEntityHandle)param_1;
}

// GetSharedFragmentData @ 147226eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedPtr<FStructOnScope,1> * __cdecl
FMassDebugger::GetSharedFragmentData
          (TSharedPtr<FStructOnScope,1> *__return_storage_ptr__,FMassEntityManager *param_1,
          UScriptStruct *param_2,FMassEntityHandle param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FStructOnScope,1> *pTVar4;
  FStructOnScope *pFVar5;
  TSharedPtr<FStructOnScope,1> local_28;
  
  pTVar3 = ::operator_new(0x38);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    local_28.Object = ___xmm_00000000000000000000000000000010;
    local_28.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar5 = (FStructOnScope *)&DAT_00000010;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFStructOnScope___00_SharedPointerInternals__6B_;
    FStructOnScope::FStructOnScope((FStructOnScope *)(pTVar3 + 1),(UStruct *)param_2);
    pFVar5 = (FStructOnScope *)(pTVar3 + 1);
    if (pFVar5 == (FStructOnScope *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FStructOnScope,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    local_28.Object = pFVar5;
    local_28.SharedReferenceCount.ReferenceController = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  bVar2 = GetSharedFragmentData(param_1,param_2,param_3,&local_28);
  if (bVar2) {
    __return_storage_ptr__->Object = pFVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FStructOnScope *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetSharedFragmentData @ 147226fe0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
FMassDebugger::GetSharedFragmentData
          (FMassEntityManager *param_1,UScriptStruct *param_2,FMassEntityHandle param_3,
          TSharedPtr<FStructOnScope,1> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  IEntityStorageInterface *pIVar9;
  longlong *plVar10;
  int *piVar11;
  FStructOnScope *pFVar12;
  UScriptStruct *pUVar13;
  UStruct *pUVar14;
  void *pvVar15;
  uint uVar16;
  void *pvVar17;
  longlong *plVar18;
  StorageSelector local_38 [8];
  FWeakObjectPtr local_30;
  UScriptStruct *local_28 [2];
  
  bVar6 = FMassEntityManager::IsEntityValid(param_1,param_3);
  if (!bVar6) {
    return false;
  }
  local_38[0] = (StorageSelector)0x0;
  pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])(local_38,&param_1->EntityStorage)
  ;
  plVar10 = (longlong *)
            (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,(ulonglong)param_3 & 0xffffffff);
  pTVar1 = (TReferenceControllerBase<1> *)plVar10[1];
  lVar2 = *plVar10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar2 != 0) {
    piVar11 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
              FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)(lVar2 + 0x1d0),param_3.Index);
    uVar8 = *piVar11 / *(int *)(lVar2 + 0x2a8);
    uVar16 = 0;
    if ((int)uVar8 < *(int *)(lVar2 + 0x1c8)) {
      uVar16 = ~uVar8 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    plVar10 = *(longlong **)(*(longlong *)(lVar2 + 0x1c0) + 0x80 + (longlong)(int)uVar8 * 0x90);
    plVar18 = plVar10 + (longlong)
                        *(int *)(*(longlong *)(lVar2 + 0x1c0) + 0x88 + (longlong)(int)uVar8 * 0x90)
                        * 2;
    for (; plVar10 != plVar18; plVar10 = plVar10 + 2) {
      plVar3 = (longlong *)*plVar10;
      if (plVar3 == (longlong *)0x0) {
        pUVar13 = (UScriptStruct *)0x0;
      }
      else {
        pUVar13 = (UScriptStruct *)*plVar3;
      }
      if (pUVar13 == param_2) {
        if (plVar3 == (longlong *)0x0) {
          pvVar17 = (void *)0x0;
        }
        else {
          pvVar17 = (void *)((longlong)*(short *)(*plVar3 + 0x5c) + 7 + (longlong)plVar3 &
                            -(longlong)*(short *)(*plVar3 + 0x5c));
        }
        if (pvVar17 != (void *)0x0) {
          pFVar12 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
          pUVar13 = (UScriptStruct *)(**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
          if (pUVar13 != param_2) {
            pFVar12 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (param_2 != (UScriptStruct *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)param_2);
            }
            local_30.ObjectIndex = 0;
            local_30.ObjectSerialNumber = 0;
            local_28[0] = param_2;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (param_2 != (UScriptStruct *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)param_2);
            }
            FWeakObjectPtr::operator=(&local_30,(FObjectPtr)local_28);
            FVar5 = local_30;
            (**(code **)(pFVar12->_padding_ + 0x40))(pFVar12);
            (pFVar12->ScriptStruct).WeakPtr = FVar5;
            (**(code **)pFVar12->_padding_)(pFVar12);
          }
          pFVar12 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
          pUVar14 = (UStruct *)(**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
          pUVar13 = CastChecked<UScriptStruct,UStruct_const_>(pUVar14);
          pFVar12 = TSharedPtr<FStructOnScope,1>::operator->(param_4);
          pvVar15 = (void *)(**(code **)(pFVar12->_padding_ + 0x18))(pFVar12);
          UScriptStruct::CopyScriptStruct(pUVar13,pvVar15,pvVar17,1);
          bVar6 = true;
          goto LAB_14722710f;
        }
        break;
      }
    }
  }
  bVar6 = false;
LAB_14722710f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar6;
}

// GetSharedFragmentValues @ 1472276d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeSharedFragmentValues * __cdecl
FMassDebugger::GetSharedFragmentValues(FMassEntityManager *param_1,FMassEntityHandle param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  IEntityStorageInterface *pIVar6;
  longlong *plVar7;
  int *piVar8;
  FMassArchetypeSharedFragmentValues *pFVar9;
  uint uVar10;
  StorageSelector local_res18 [16];
  
  bVar4 = FMassEntityManager::IsEntityValid(param_1,param_2);
  if (bVar4) {
    local_res18[0] = (StorageSelector)0x0;
    pIVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(param_1->EntityStorage).TypeIndex])
                       (local_res18,&param_1->EntityStorage);
    plVar7 = (longlong *)
             (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,(ulonglong)param_2 & 0xffffffff);
    pTVar1 = (TReferenceControllerBase<1> *)plVar7[1];
    lVar2 = *plVar7;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar2 != 0) {
      piVar8 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
               FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)(lVar2 + 0x1d0),param_2.Index);
      uVar5 = *piVar8 / *(int *)(lVar2 + 0x2a8);
      uVar10 = 0;
      if ((int)uVar5 < *(int *)(lVar2 + 0x1c8)) {
        uVar10 = ~uVar5 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FMassArchetypeSharedFragmentValues *)(*pcVar3)();
          return pFVar9;
        }
      }
      lVar2 = *(longlong *)(lVar2 + 0x1c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return (FMassArchetypeSharedFragmentValues *)((longlong)(int)uVar5 * 0x90 + lVar2 + 0x28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FMassDebugger::GetSharedFragmentValues'::__l2::_dynamic_atexit_destructor_for__Dummy__
            );
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Dummy;
}

// GetSingleRequirementDescription @ 147227840

FString * __cdecl
FMassDebugger::GetSingleRequirementDescription
          (FString *__return_storage_ptr__,FMassFragmentRequirementDescription *param_1)

{
  EMassFragmentAccess EVar1;
  wchar_t *pwVar2;
  FName local_res8;
  FName *local_res10;
  FString local_38;
  FString local_28;
  
  EVar1 = param_1->AccessMode;
  local_res8.ComparisonIndex.Value._0_1_ = EVar1;
  if (EVar1 == None) {
    pwVar2 = L"--";
  }
  else if (EVar1 == ReadOnly) {
    pwVar2 = L"RO";
  }
  else if (EVar1 == ReadWrite) {
    pwVar2 = L"RW";
  }
  else {
    local_res10 = &local_res8;
    `UE::Mass::Debug::DebugGetFragmentAccessString'::__l4::<lambda_1>::operator()(&local_res10);
    pwVar2 = L"Missing string conversion";
  }
  ::FString::FString(&local_28,pwVar2);
  if (param_1->StructType == (UScriptStruct *)0x0) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    local_res8 = (FName)param_1->StructType->_padding_;
    ::FName::ToString(&local_res8,&local_38);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s[%s]");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetUpToDateProcessorQueries @ 147228ff0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FMassEntityQuery_*_const,int> * __cdecl
FMassDebugger::GetUpToDateProcessorQueries
          (TArrayView<FMassEntityQuery_*_const,int> *__return_storage_ptr__,
          FMassEntityManager *param_1,UMassProcessor *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FMassEntityQuery_*_const,int> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (param_2->OwnedQueries).AllocatorInstance.Data;
  iVar2 = (param_2->OwnedQueries).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_2->OwnedQueries).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMassEntityQuery_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if (*(FMassEntityQuery **)pFVar6 != (FMassEntityQuery *)0x0) {
      FMassEntityQuery::CacheArchetypes(*(FMassEntityQuery **)pFVar6);
    }
    pFVar6 = pFVar6 + 8;
  }
  iVar2 = (param_2->OwnedQueries).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FMassEntityQuery **)(param_2->OwnedQueries).AllocatorInstance.Data;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<FMassEntityQuery_*_const,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar2;
  return __return_storage_ptr__;
}

// HasAnyFragmentWriteBreakpoints @ 14722a650

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
FMassDebugger::HasAnyFragmentWriteBreakpoints(FMassEntityManager *param_1,UScriptStruct *param_2)

{
  longlong lVar1;
  int iVar2;
  FEnvironment *pFVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  FWeakObjectPtr local_res18;
  UScriptStruct *local_res20;
  
  if (UE::Mass::Debug::FBreakpoint::bHasBreakpoint) {
    pFVar3 = GetActiveEnvironmentChecked(param_1);
    if (pFVar3->bHasBreakpoint != false) {
      if (param_2 == (UScriptStruct *)0x0) {
        return 0 < *(int *)&(pFVar3->FragmentsWithBreakpoints).Elements.field_0x8 -
                   *(int *)&(pFVar3->FragmentsWithBreakpoints).Elements.field_0x34;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res20 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
      uVar6 = local_res18.ObjectIndex - local_res18.ObjectSerialNumber ^
              (uint)local_res18.ObjectSerialNumber >> 0xd;
      uVar4 = (-0x61c88647 - uVar6) - local_res18.ObjectSerialNumber ^ uVar6 << 8;
      uVar8 = (local_res18.ObjectSerialNumber - uVar4) - uVar6 ^ uVar4 >> 0xd;
      uVar6 = (uVar6 - uVar8) - uVar4 ^ uVar8 >> 0xc;
      uVar4 = (uVar4 - uVar8) - uVar6 ^ uVar6 << 0x10;
      uVar8 = (uVar8 - uVar4) - uVar6 ^ uVar4 >> 5;
      uVar6 = (uVar6 - uVar8) - uVar4 ^ uVar8 >> 3;
      uVar4 = (uVar4 - uVar6) - uVar8 ^ uVar6 << 10;
      if (*(int *)&(pFVar3->FragmentsWithBreakpoints).Elements.field_0x8 !=
          *(int *)&(pFVar3->FragmentsWithBreakpoints).Elements.field_0x34) {
        FVar7 = (pFVar3->FragmentsWithBreakpoints).Hash.SecondaryData;
        if (FVar7 == (ForElementType<FSetElementId>)0x0) {
          FVar7 = (ForElementType<FSetElementId>)&(pFVar3->FragmentsWithBreakpoints).Hash;
        }
        iVar2 = *(int *)((longlong)FVar7 +
                        (ulonglong)
                        ((pFVar3->FragmentsWithBreakpoints).HashSize - 1U &
                        ((uVar8 - uVar4) - uVar6 ^ uVar4 >> 0xf)) * 4);
        if (iVar2 != -1) {
          lVar1 = *(longlong *)&(pFVar3->FragmentsWithBreakpoints).Elements;
          do {
            lVar5 = (longlong)iVar2;
            if ((*(int *)(lVar1 + lVar5 * 0x10) == local_res18.ObjectIndex) &&
               (*(uint *)(lVar1 + 4 + lVar5 * 0x10) == local_res18.ObjectSerialNumber))
            goto LAB_14722a7d1;
            iVar2 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
          } while (iVar2 != -1);
        }
      }
      iVar2 = -1;
LAB_14722a7d1:
      return iVar2 != -1;
    }
  }
  return false;
}

// HasAnyProcessorBreakpoints @ 14722a800

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __cdecl
FMassDebugger::HasAnyProcessorBreakpoints(FMassEntityManager *param_1,UMassProcessor *param_2)

{
  longlong lVar1;
  int iVar2;
  FEnvironment *pFVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  FWeakObjectPtr local_res18;
  UMassProcessor *local_res20;
  
  if (UE::Mass::Debug::FBreakpoint::bHasBreakpoint) {
    pFVar3 = GetActiveEnvironmentChecked(param_1);
    if (pFVar3->bHasBreakpoint != false) {
      uVar9 = 0;
      local_res18.ObjectIndex = 0;
      if (param_2 != (UMassProcessor *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_res20 = param_2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
        uVar9 = (ulonglong)local_res18 >> 0x20;
      }
      iVar8 = (int)uVar9;
      uVar6 = local_res18.ObjectIndex - iVar8 ^ (uint)(uVar9 >> 0xd);
      uVar4 = (-0x61c88647 - uVar6) - iVar8 ^ uVar6 << 8;
      uVar10 = (iVar8 - uVar4) - uVar6 ^ uVar4 >> 0xd;
      uVar6 = (uVar6 - uVar10) - uVar4 ^ uVar10 >> 0xc;
      uVar4 = (uVar4 - uVar6) - uVar10 ^ uVar6 << 0x10;
      uVar10 = (uVar10 - uVar4) - uVar6 ^ uVar4 >> 5;
      uVar6 = (uVar6 - uVar10) - uVar4 ^ uVar10 >> 3;
      uVar4 = (uVar4 - uVar6) - uVar10 ^ uVar6 << 10;
      if (*(int *)&(pFVar3->ProcessorsWithBreakpoints).Elements.field_0x8 !=
          *(int *)&(pFVar3->ProcessorsWithBreakpoints).Elements.field_0x34) {
        FVar7 = (pFVar3->ProcessorsWithBreakpoints).Hash.SecondaryData;
        if (FVar7 == (ForElementType<FSetElementId>)0x0) {
          FVar7 = (ForElementType<FSetElementId>)&(pFVar3->ProcessorsWithBreakpoints).Hash;
        }
        iVar2 = *(int *)((longlong)FVar7 +
                        (ulonglong)
                        ((pFVar3->ProcessorsWithBreakpoints).HashSize - 1U &
                        ((uVar10 - uVar4) - uVar6 ^ uVar4 >> 0xf)) * 4);
        if (iVar2 != -1) {
          lVar1 = *(longlong *)&(pFVar3->ProcessorsWithBreakpoints).Elements;
          do {
            lVar5 = (longlong)iVar2;
            if ((*(int *)(lVar1 + lVar5 * 0x10) == local_res18.ObjectIndex) &&
               (*(int *)(lVar1 + 4 + lVar5 * 0x10) == iVar8)) goto LAB_14722a960;
            iVar2 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
          } while (iVar2 != -1);
        }
      }
      iVar2 = -1;
LAB_14722a960:
      return iVar2 != -1;
    }
  }
  return false;
}

// HighlightEntity @ 14722b1e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl FMassDebugger::HighlightEntity(FMassEntityManager *param_1,FMassEntityHandle param_2)

{
  FEnvironment *pFVar1;
  
  pFVar1 = GetActiveEnvironment(param_1);
  if (pFVar1 != (FEnvironment *)0x0) {
    pFVar1->HighlightedEntity = param_2;
  }
  return;
}

// IsEntityManagerInitialized @ 1472326f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl FMassDebugger::IsEntityManagerInitialized(FMassEntityManager *param_1)

{
  return param_1->InitializationState == Initialized;
}

// OutputArchetypeDescription @ 14723a1c0

void __cdecl
FMassDebugger::OutputArchetypeDescription(FOutputDevice *param_1,FMassArchetypeHandle *param_2)

{
  FMassArchetypeData *this;
  FString *pFVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = false;
  this = (param_2->DataPtr).Object;
  if (this != (FMassArchetypeData *)0x0) {
    pFVar1 = FMassArchetypeData::DebugGetDescription(this,&local_18);
    if ((pFVar1->Data).ArrayNum == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
  }
  FOutputDevice::LogfImpl(param_1,L"%s");
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// OutputEntityDescription @ 14723a650

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FMassDebugger::OutputEntityDescription
          (FOutputDevice *param_1,FMassEntityManager *param_2,int param_3,wchar_t *param_4)

{
  FMassEntityHandle FVar1;
  char cVar2;
  int iVar3;
  IEntityStorageInterface *pIVar4;
  UObject *pUVar5;
  StorageSelector local_res18 [16];
  FString local_38;
  
  local_res18[0] = (StorageSelector)0x0;
  pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(param_2->EntityStorage).TypeIndex])
                     (local_res18,&param_2->EntityStorage);
  iVar3 = (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4);
  if (param_3 < iVar3) {
    local_res18[0] = (StorageSelector)0x0;
    pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(param_2->EntityStorage).TypeIndex])
                       (local_res18,&param_2->EntityStorage);
    cVar2 = (**(code **)((longlong)*pIVar4 + 0x68))(pIVar4,param_3);
    if (cVar2 == '\0') {
      pUVar5 = FWeakObjectPtr::Get(&(param_2->Owner).WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_38,(UObject *)0x0);
      }
      FOutputDevice::LogfImpl
                (param_1,Log,
                 L"Unable to list fragments values for invalid entity in EntityManager owned by %s")
      ;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    local_res18[0] = (StorageSelector)0x0;
    pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(param_2->EntityStorage).TypeIndex])
                       (local_res18,&param_2->EntityStorage);
    iVar3 = (**(code **)((longlong)*pIVar4 + 0x40))(pIVar4,param_3);
    FVar1.SerialNumber = iVar3;
    FVar1.Index = param_3;
    OutputEntityDescription(param_1,param_2,FVar1,param_4);
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&(param_2->Owner).WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_38,(UObject *)0x0);
    }
    FOutputDevice::LogfImpl
              (param_1,Log,
               L"Unable to list fragments values for out of range index in EntityManager owned by %s"
              );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// OutputEntityDescription @ 14723a810

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FMassDebugger::OutputEntityDescription
          (FOutputDevice *param_1,FMassEntityManager *param_2,FMassEntityHandle param_3,
          wchar_t *param_4)

{
  FMassArchetypeData *this;
  char cVar1;
  int iVar2;
  IEntityStorageInterface *pIVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  void *pvVar7;
  ForElementType<FMassArchetypeFragmentConfig> FVar9;
  ForElementType<FMassArchetypeFragmentConfig> FVar10;
  uint local_res10 [2];
  FName local_res18;
  FString local_60;
  FString local_50;
  size_t sVar8;
  
  local_res18 = (FName)param_3;
  if (param_3.Index != 0) {
    local_res10[0] = local_res10[0] & 0xffffff00;
    pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(param_2->EntityStorage).TypeIndex])
                       ((StorageSelector *)local_res10,&param_2->EntityStorage);
    cVar1 = (**(code **)((longlong)*pIVar3 + 0x58))(pIVar3,param_3);
    if (cVar1 != '\0') goto LAB_14723a8db;
  }
  pUVar4 = FWeakObjectPtr::Get(&(param_2->Owner).WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
    ::FString::FString(&local_60,L"None");
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar4,&local_60,(UObject *)0x0);
  }
  FOutputDevice::LogfImpl
            (param_1,Log,
             L"Unable to list fragments values for invalid entity in EntityManager owned by %s");
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
LAB_14723a8db:
  pUVar4 = FWeakObjectPtr::Get(&(param_2->Owner).WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
    ::FString::FString(&local_60,L"None");
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar4,&local_60,(UObject *)0x0);
  }
  ::FString::PrintfImpl(&local_50,L"i: %d sn: %d");
  FOutputDevice::LogfImpl
            (param_1,Log,L"Listing fragments values for Entity[%s] in EntityManager owned by %s");
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  local_res18 = (FName)((ulonglong)local_res18 & 0xffffffffffffff00);
  pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(param_2->EntityStorage).TypeIndex])
                     ((StorageSelector *)&local_res18,&param_2->EntityStorage);
  puVar5 = (undefined8 *)
           (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,(ulonglong)param_3 & 0xffffffff);
  this = (FMassArchetypeData *)*puVar5;
  if (this == (FMassArchetypeData *)0x0) {
    pUVar4 = FWeakObjectPtr::Get(&(param_2->Owner).WeakPtr);
    if (pUVar4 == (UObject *)0x0) {
      ::FString::FString(&local_60,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar4,&local_60,(UObject *)0x0);
    }
    FOutputDevice::LogfImpl
              (param_1,Log,
               L"Unable to list fragments values for invalid entity in EntityManager owned by %s");
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  else {
    FVar9 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
    local_res10[0] = (this->FragmentConfigs).ArrayNum;
    uVar6 = (ulonglong)(int)local_res10[0];
    if (FVar9 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
      FVar9 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
    }
    FVar10 = (ForElementType<FMassArchetypeFragmentConfig>)(uVar6 * 0x10 + (longlong)FVar9);
    while( true ) {
      if ((this->FragmentConfigs).ArrayNum != (int)uVar6) {
        `TCheckedPointerIterator<FMassArchetypeFragmentConfig_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res18);
      }
      if (FVar9 == FVar10) break;
      pvVar7 = FMassArchetypeData::GetFragmentDataForEntityChecked
                         (this,*(UScriptStruct **)FVar9,param_3.Index);
      local_res18 = *(FName *)(*(longlong *)FVar9 + 0x18);
      ::FName::ToString(&local_res18,&local_50);
      if (param_4 == (wchar_t *)0x0) {
        iVar2 = 0;
      }
      else {
        sVar8 = wcslen(param_4);
        iVar2 = (int)sVar8;
      }
      ::FString::RemoveFromStart(&local_50,param_4,iVar2,IgnoreCase);
      local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.Data.ArrayNum = 0;
      local_60.Data.ArrayMax = 0;
      UScriptStruct::ExportText
                (*(UScriptStruct **)FVar9,&local_60,pvVar7,(void *)0x0,(UObject *)0x0,0x20000,
                 (UObject *)0x0,true);
      FOutputDevice::LogfImpl(param_1,L"%s: %s");
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      uVar6 = (ulonglong)local_res10[0];
      FVar9 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar9 + 0x10);
    }
  }
  return;
}

// RefreshBreakpoints @ 14723e520

void __cdecl FMassDebugger::RefreshBreakpoints(void)

{
  int iVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  bool *pbVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  TObjectKey<UMassProcessor_const_> local_res10;
  TObjectKey<UScriptStruct_const_> local_res18;
  
  iVar3 = ActiveEnvironments.ArrayNum;
  UE::Mass::Debug::FBreakpoint::bHasBreakpoint = false;
  pFVar4 = ActiveEnvironments.AllocatorInstance.Data + 0xa0;
  pFVar8 = ActiveEnvironments.AllocatorInstance.Data + (longlong)iVar3 * 0x140;
  FVar9.Data = ActiveEnvironments.AllocatorInstance.Data;
  while( true ) {
    if (ActiveEnvironments.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FMassDebugger::FEnvironment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar9.Data == pFVar8) break;
    if (*(int *)pFVar4 != *(int *)(pFVar4 + 0x2c)) {
      TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
                        *)(pFVar4 + -8));
      *(int *)pFVar4 = 0;
      if (*(int *)(pFVar4 + 4) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)(pFVar4 + -8),0,(int *)(pFVar4 + 4));
      }
      *(int *)(pFVar4 + 0x28) = -1;
      *(int *)(pFVar4 + 0x2c) = 0;
      *(int *)(pFVar4 + 0x20) = 0;
    }
    if (*(int *)(pFVar4 + 0x50) != *(int *)(pFVar4 + 0x7c)) {
      TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
                        *)(pFVar4 + 0x48));
      *(int *)(pFVar4 + 0x50) = 0;
      if (*(int *)(pFVar4 + 0x54) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)(pFVar4 + 0x48),0,(int *)(pFVar4 + 0x54));
      }
      *(int *)(pFVar4 + 0x78) = -1;
      *(int *)(pFVar4 + 0x7c) = 0;
      *(int *)(pFVar4 + 0x70) = 0;
    }
    lVar6 = *(longlong *)(pFVar4 + -0x18);
    iVar1 = *(int *)(pFVar4 + -0x10);
    pbVar7 = (bool *)(lVar6 + 0x14);
    lVar5 = (longlong)iVar1 * 0x2a8 + lVar6;
    while( true ) {
      if (*(int *)(pFVar4 + -0x10) != iVar1) {
        `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (lVar6 == lVar5) break;
      if (pbVar7[8] == false) {
        TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
        ::Emplace<TObjectKey<UMassProcessor_const_>_const_&>
                  ((TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
                    *)(pFVar4 + -8),&local_res10,pbVar7);
        lVar6 = lVar6 + 0x2a8;
        pbVar7 = pbVar7 + 0x2a8;
      }
      else {
        if ((pbVar7[8] == true) && (pbVar7 != (bool *)0x0)) {
          TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
          ::Emplace<TObjectKey<UScriptStruct_const_>_const_&>
                    ((TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
                      *)(pFVar4 + 0x48),&local_res18,pbVar7);
        }
        lVar6 = lVar6 + 0x2a8;
        pbVar7 = pbVar7 + 0x2a8;
      }
    }
    if ((*(int *)pFVar4 == *(int *)(pFVar4 + 0x2c)) &&
       (*(int *)(pFVar4 + 0x50) == *(int *)(pFVar4 + 0x7c))) {
      FVar2 = (FScriptContainerElement)0x0;
    }
    else {
      FVar2 = (FScriptContainerElement)0x1;
    }
    pFVar4[-0x20] = FVar2;
    FVar9.Data = FVar9.Data + 0x140;
    UE::Mass::Debug::FBreakpoint::bHasBreakpoint =
         (bool)(UE::Mass::Debug::FBreakpoint::bHasBreakpoint | (byte)FVar2);
    pFVar4 = pFVar4 + 0x140;
  }
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&OnBreakpointsChangedDelegate);
  return;
}

// RegisterEntityManager @ 14723edf0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __cdecl FMassDebugger::RegisterEntityManager(FMassEntityManager *param_1)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  bool bVar4;
  
  LOCK();
  bVar4 = EntityManagerRegistrationLock.State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    EntityManagerRegistrationLock.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&EntityManagerRegistrationLock);
  }
  iVar3 = ActiveEnvironments.ArrayNum;
  if (ActiveEnvironments.ArrayNum == ActiveEnvironments.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x140,8,&ActiveEnvironments.AllocatorInstance,&ActiveEnvironments.ArrayMax);
  }
  ActiveEnvironments.ArrayNum = iVar3 + 1;
  FEnvironment::FEnvironment
            ((FEnvironment *)(ActiveEnvironments.AllocatorInstance.Data + (longlong)iVar3 * 0x140),
             param_1);
  LOCK();
  aVar2 = EntityManagerRegistrationLock.State + -1;
  UNLOCK();
  bVar1 = (byte)EntityManagerRegistrationLock.State & 2;
  EntityManagerRegistrationLock.State = aVar2;
  if (bVar1 != 0) {
    UE::FMutex::WakeWaitingThread(&EntityManagerRegistrationLock);
  }
  TMulticastDelegate<void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>::
  Broadcast(&OnEntityManagerInitialized,param_1);
  return iVar3;
}

// RegisterProcessorDataProvider @ 14723f330

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
FMassDebugger::RegisterProcessorDataProvider
          (FName param_1,TSharedRef<FMassEntityManager,1> *param_2,
          TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>
          *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  byte bVar5;
  atomic<unsigned_char> aVar6;
  ForAnyElementType FVar7;
  FName FVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  TWeakPtr<FMassEntityManager,1> *pTVar13;
  ForAnyElementType FVar14;
  TWeakPtr<FMassEntityManager_const_,1> *pTVar15;
  longlong lVar16;
  bool bVar17;
  FName local_res8 [2];
  TWeakPtr<FMassEntityManager,1> local_58;
  TWeakPtr<FMassEntityManager,1> local_48;
  
  LOCK();
  bVar17 = EntityManagerRegistrationLock.State == (atomic<unsigned_char>)0x0;
  if (bVar17) {
    EntityManagerRegistrationLock.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  local_res8[0] = param_1;
  if (!bVar17) {
    UE::FMutex::LockSlow(&EntityManagerRegistrationLock);
  }
  pTVar13 = TSharedFromThis<FMassEntityManager,1>::AsWeak
                      ((TSharedFromThis<FMassEntityManager,1> *)&param_2->Object->_padding_,
                       &local_48);
  local_58.Object = pTVar13->Object;
  pTVar3 = (pTVar13->WeakReferenceCount).ReferenceController;
  (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar13->Object = (FMassEntityManager *)0x0;
  FVar7 = ActiveEnvironments.AllocatorInstance;
  pTVar15 = (TWeakPtr<FMassEntityManager_const_,1> *)
            (ActiveEnvironments.AllocatorInstance.Data +
            (longlong)ActiveEnvironments.ArrayNum * 0x140);
  local_58.WeakReferenceCount.ReferenceController = pTVar3;
  FVar14 = ActiveEnvironments.AllocatorInstance;
  do {
    if ((TWeakPtr<FMassEntityManager_const_,1> *)FVar14.Data == pTVar15) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      uVar11 = 0xffffffff;
LAB_14723f405:
      if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_48.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (uVar11 == 0xffffffff) {
        uVar11 = RegisterEntityManager(param_2->Object);
      }
      uVar12 = 0;
      if ((int)uVar11 < ActiveEnvironments.ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar8 = local_res8[0];
      FVar14.Data = ActiveEnvironments.AllocatorInstance.Data;
      uVar12 = ::GetTypeHash(local_res8[0].ComparisonIndex.Value);
      TMapBase<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,0>_>
      ::
      FindOrAddImpl<FName_const_&,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_const_&>
                ((TMapBase<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,0>_>
                  *)(FVar14.Data + (longlong)(int)uVar11 * 0x140 + 0x20),uVar12 + FVar8.Number,
                 local_res8,param_3);
      LOCK();
      aVar6 = EntityManagerRegistrationLock.State + -1;
      UNLOCK();
      bVar5 = (byte)EntityManagerRegistrationLock.State & 2;
      EntityManagerRegistrationLock.State = aVar6;
      if (bVar5 != 0) {
        UE::FMutex::WakeWaitingThread(&EntityManagerRegistrationLock);
      }
      uVar12 = 0;
      if ((int)uVar11 < ActiveEnvironments.ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&OnProcessorProviderRegistered);
      bVar17 = false;
      OnProcessorProviderRegistered._60_4_ = OnProcessorProviderRegistered._60_4_ + 1;
      uVar11 = OnProcessorProviderRegistered._48_4_ - 1;
      if (-1 < (int)uVar11) {
        lVar16 = (longlong)(int)uVar11 << 4;
        do {
          uVar12 = 0;
          if ((int)uVar11 < (int)OnProcessorProviderRegistered._48_4_) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((*(int *)(lVar16 + 8 + OnProcessorProviderRegistered._40_8_) == 0) ||
              (*(longlong **)(lVar16 + OnProcessorProviderRegistered._40_8_) == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(**(longlong **)(lVar16 + OnProcessorProviderRegistered._40_8_) +
                                   0x68))(), cVar10 == '\0')) {
            bVar17 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar11 = uVar11 - 1;
        } while (-1 < (int)uVar11);
      }
      OnProcessorProviderRegistered._60_4_ = OnProcessorProviderRegistered._60_4_ + -1;
      if (bVar17) {
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                   &OnProcessorProviderRegistered,false);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&OnProcessorProviderRegistered);
      return;
    }
    bVar17 = TWeakPtr<FMassEntityManager_const_,1>::UEOpEquals<FMassEntityManager>
                       ((TWeakPtr<FMassEntityManager_const_,1> *)FVar14.Data,&local_58);
    if (bVar17) {
      uVar11 = (uint)(((longlong)FVar14.Data - (longlong)FVar7.Data) / 0x140);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      goto LAB_14723f405;
    }
    FVar14.Data = FVar14.Data + 0x140;
  } while( true );
}

// RemoveBreakpoint @ 1472452d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl FMassDebugger::RemoveBreakpoint(FBreakpointHandle param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  iVar2 = ActiveEnvironments.ArrayNum;
  pFVar8 = ActiveEnvironments.AllocatorInstance.Data + (longlong)ActiveEnvironments.ArrayNum * 0x140
  ;
  FVar5.Data = ActiveEnvironments.AllocatorInstance.Data;
  do {
    if (ActiveEnvironments.ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMassDebugger::FEnvironment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar8) {
      return;
    }
    uVar7 = 0;
    if (0 < *(int *)(FVar5.Data + 0x90)) {
      lVar6 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < *(int *)(FVar5.Data + 0x90)) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(lVar6 + *(longlong *)(FVar5.Data + 0x88)) == param_1.Handle) {
          TArray<UE::Mass::Debug::FBreakpoint,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<UE::Mass::Debug::FBreakpoint,TSizedDefaultAllocator<32>_> *)
                     (FVar5.Data + 0x88),uVar7,Default);
          RefreshBreakpoints();
          return;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x2a8;
      } while ((int)uVar7 < *(int *)(FVar5.Data + 0x90));
    }
    FVar5.Data = FVar5.Data + 0x140;
  } while( true );
}

// SelectEntity @ 14724b2d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl FMassDebugger::SelectEntity(FMassEntityManager *param_1,FMassEntityHandle param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FEnvironment *pFVar7;
  longlong lVar8;
  uint uVar9;
  
  bVar3 = FMassEntityManager::IsEntityValid(param_1,param_2);
  if (!bVar3) {
    return;
  }
  UE::Mass::Debug::DebugEntityBegin = param_2.Index;
  UE::Mass::Debug::DebugEntityEnd = UE::Mass::Debug::DebugEntityBegin;
  pFVar7 = GetActiveEnvironmentChecked(param_1);
  pFVar7->SelectedEntity = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)&OnEntitySelectedDelegate);
  bVar3 = false;
  OnEntitySelectedDelegate._60_4_ = OnEntitySelectedDelegate._60_4_ + 1;
  uVar9 = OnEntitySelectedDelegate._48_4_ - 1;
  if (-1 < (int)uVar9) {
    lVar8 = (longlong)(int)uVar9 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (int)OnEntitySelectedDelegate._48_4_) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + OnEntitySelectedDelegate._40_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnEntitySelectedDelegate._40_8_),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  OnEntitySelectedDelegate._60_4_ = OnEntitySelectedDelegate._60_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&OnEntitySelectedDelegate,
               false);
  }
                    /* WARNING: Could not recover jumptable at 0x00014724b412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&OnEntitySelectedDelegate);
  return;
}

// SetBreakpointEnabled @ 14724b570

void __cdecl FMassDebugger::SetBreakpointEnabled(FBreakpointHandle param_1,bool param_2)

{
  int iVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int *piVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res18 [16];
  
  iVar5 = ActiveEnvironments.ArrayNum;
  pFVar3 = ActiveEnvironments.AllocatorInstance.Data + 0x90;
  pFVar6 = ActiveEnvironments.AllocatorInstance.Data + (longlong)iVar5 * 0x140;
  FVar7.Data = ActiveEnvironments.AllocatorInstance.Data;
  while( true ) {
    if (ActiveEnvironments.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FMassDebugger::FEnvironment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar7.Data == pFVar6) break;
    iVar1 = *(int *)pFVar3;
    piVar4 = *(int **)(pFVar3 + -8);
    piVar2 = piVar4 + (longlong)iVar1 * 0xaa;
    while( true ) {
      if (*(int *)pFVar3 != iVar1) {
        `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (piVar4 == piVar2) break;
      if (*piVar4 == param_1.Handle) {
        *(bool *)(piVar4 + 0xa8) = param_2;
        TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
                  (&OnBreakpointsChangedDelegate);
        return;
      }
      piVar4 = piVar4 + 0xaa;
    }
    FVar7.Data = FVar7.Data + 0x140;
    pFVar3 = pFVar3 + 0x140;
  }
  return;
}

// SetFragmentWriteBreakForSelectedEntity @ 14724c3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
FMassDebugger::SetFragmentWriteBreakForSelectedEntity
          (FMassEntityManager *param_1,TNotNull<UScriptStruct_const_*> param_2)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FEnvironment *pFVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  FWeakObjectPtr FVar10;
  undefined1 auStack_338 [32];
  FWeakObjectPtr local_318;
  FWeakObjectPtr local_310;
  FWeakObjectPtr local_308;
  undefined8 local_300;
  TObjectKey<UScriptStruct_const_> local_2f8;
  UScriptStruct *local_2f0;
  UScriptStruct *local_2e8;
  int local_2e0;
  undefined8 local_2d8;
  FScriptContainerElement local_2d0;
  FScriptContainerElement local_2cf;
  FWeakObjectPtr local_2cc;
  FScriptContainerElement local_2c4;
  undefined8 local_2c0 [79];
  FScriptContainerElement local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_338;
  UE::Mass::Debug::FNoDebuggerNotification::ConditionallyNotifyUser();
  pFVar7 = GetActiveEnvironmentChecked(param_1);
  pFVar7->bHasBreakpoint = true;
  piVar3 = &(pFVar7->Breakpoints).ArrayMax;
  UE::Mass::Debug::FBreakpoint::bHasBreakpoint = true;
  iVar6 = (pFVar7->Breakpoints).ArrayNum;
  if (iVar6 == *piVar3) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2a8,8,&(pFVar7->Breakpoints).AllocatorInstance,piVar3);
  }
  (pFVar7->Breakpoints).ArrayNum = iVar6 + 1;
  pFVar8 = (pFVar7->Breakpoints).AllocatorInstance.Data + (longlong)iVar6 * 0x2a8;
  pFVar1 = (FWeakObjectPtr *)(pFVar8 + 0x14);
  *(int *)pFVar8 = 0;
  pFVar2 = pFVar8 + 0x20;
  *(undefined8 *)(pFVar8 + 8) = 0;
  *(undefined2 *)(pFVar8 + 0x10) = 0;
  pFVar1->ObjectIndex = 0;
  pFVar1->ObjectSerialNumber = 0;
  pFVar8[0x1c] = (FScriptContainerElement)0x0;
  *(undefined8 *)pFVar2 = 0;
  pFVar8[0x298] = (FScriptContainerElement)0x0;
  pFVar8[0x2a0] = (FScriptContainerElement)0x0;
  `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
  ::__l2::LastHandle =
       `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
       ::__l2::LastHandle + 1;
  *(int *)pFVar8 =
       `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
       ::__l2::LastHandle;
  local_2e0 = `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
              ::__l2::LastHandle;
  local_2d8 = *(undefined8 *)(pFVar8 + 8);
  local_2d0 = pFVar8[0x10];
  local_2cf = pFVar8[0x11];
  local_2c4 = pFVar8[0x1c];
  uVar9 = (ulonglong)(byte)local_2c4;
  if (1 < (byte)local_2c4) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TObjectKey<UMassProcessor_const_>,TObjectKey<UScriptStruct_const_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[uVar9] ==
      UE::Core::Private::TCopyConstructorCaller<TObjectKey<UMassProcessor_const_>_>::Construct) {
    local_2cc = *pFVar1;
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TObjectKey<UMassProcessor_const_>,TObjectKey<UScriptStruct_const_>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[uVar9])(&local_2cc,pFVar1);
  }
  local_48 = pFVar8[0x298];
  uVar9 = (ulonglong)(byte)local_48;
  if (1 < (byte)local_48) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[uVar9] ==
      UE::Core::Private::TCopyConstructorCaller<FMassEntityHandle>::Construct) {
    local_2c0[0] = *(undefined8 *)pFVar2;
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[uVar9])(local_2c0,pFVar2);
  }
  local_40 = 1;
  local_2d0 = (FScriptContainerElement)0x2;
  local_300 = 0;
  if (param_2.Val == (UScriptStruct *)0x0) {
    FVar10.ObjectIndex = 0;
    FVar10.ObjectSerialNumber = 0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    local_318.ObjectIndex = 0;
    local_318.ObjectSerialNumber = 0;
    local_2f0 = param_2.Val;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    FWeakObjectPtr::operator=(&local_318,(FObjectPtr)&local_2f0);
    FVar10 = local_318;
  }
  uVar9 = (ulonglong)(byte)local_2c4;
  if (1 < uVar9) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TObjectKey<UMassProcessor_const_>,TObjectKey<UScriptStruct_const_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] !=
      UE::Core::Private::TDestructorCaller<TObjectKey<UMassProcessor_const_>_>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TObjectKey<UMassProcessor_const_>,TObjectKey<UScriptStruct_const_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_2cc);
  }
  local_2c4 = (FScriptContainerElement)0x1;
  local_2cf = (FScriptContainerElement)0x2;
  local_308.ObjectIndex = 0;
  local_308.ObjectSerialNumber = 0;
  local_2cc = FVar10;
  if (param_2.Val != (UScriptStruct *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    local_310.ObjectIndex = 0;
    local_310.ObjectSerialNumber = 0;
    local_2e8 = param_2.Val;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    FWeakObjectPtr::operator=(&local_310,(FObjectPtr)&local_2e8);
    local_308 = local_310;
  }
  TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectKey<UScriptStruct_const_>_>
            (&pFVar7->FragmentsWithBreakpoints,&local_2f8,(bool *)&local_308);
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&OnBreakpointsChangedDelegate);
  uVar9 = (ulonglong)(byte)local_48;
  if (1 < (byte)local_48) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] !=
      UE::Core::Private::TDestructorCaller<FMassEntityHandle>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(local_2c0);
  }
  return;
}

// SetFragmentWriteBreakpoint @ 14724c730

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
FMassDebugger::SetFragmentWriteBreakpoint
          (FMassEntityManager *param_1,TNotNull<UScriptStruct_const_*> param_2,
          FMassEntityHandle param_3)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEnvironment *pFVar6;
  FScriptContainerElement *pFVar7;
  FWeakObjectPtr FVar8;
  TObjectKey<UScriptStruct_const_> local_res10;
  FMassEntityHandle local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  undefined8 local_58;
  UScriptStruct *local_50;
  UScriptStruct *local_48 [2];
  
  local_res18 = param_3;
  UE::Mass::Debug::FNoDebuggerNotification::ConditionallyNotifyUser();
  pFVar6 = GetActiveEnvironmentChecked(param_1);
  pFVar6->bHasBreakpoint = true;
  piVar1 = &(pFVar6->Breakpoints).ArrayMax;
  UE::Mass::Debug::FBreakpoint::bHasBreakpoint = true;
  iVar5 = (pFVar6->Breakpoints).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2a8,8,&(pFVar6->Breakpoints).AllocatorInstance,piVar1);
  }
  (pFVar6->Breakpoints).ArrayNum = iVar5 + 1;
  local_58 = 0;
  pFVar7 = (pFVar6->Breakpoints).AllocatorInstance.Data + (longlong)iVar5 * 0x2a8;
  *(int *)pFVar7 = 0;
  *(undefined8 *)(pFVar7 + 8) = 0;
  *(undefined2 *)(pFVar7 + 0x10) = 0;
  *(undefined8 *)(pFVar7 + 0x14) = 0;
  pFVar7[0x1c] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar7 + 0x20) = 0;
  pFVar7[0x298] = (FScriptContainerElement)0x0;
  pFVar7[0x2a0] = (FScriptContainerElement)0x0;
  `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
  ::__l2::LastHandle =
       `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
       ::__l2::LastHandle + 1;
  *(int *)pFVar7 =
       `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
       ::__l2::LastHandle;
  pFVar7[0x2a0] = (FScriptContainerElement)0x1;
  pFVar7[0x10] = (FScriptContainerElement)0x2;
  if (param_2.Val == (UScriptStruct *)0x0) {
    FVar8.ObjectIndex = 0;
    FVar8.ObjectSerialNumber = 0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_50 = param_2.Val;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_50);
    FVar8 = local_res20;
  }
  FVar2 = pFVar7[0x1c];
  if (1 < (ulonglong)(byte)FVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TObjectKey<UMassProcessor_const_>,TObjectKey<UScriptStruct_const_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2] !=
      UE::Core::Private::TDestructorCaller<TObjectKey<UMassProcessor_const_>_>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TObjectKey<UMassProcessor_const_>,TObjectKey<UScriptStruct_const_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(pFVar7 + 0x14);
  }
  *(FWeakObjectPtr *)(pFVar7 + 0x14) = FVar8;
  pFVar7[0x1c] = (FScriptContainerElement)0x1;
  if ((param_3.Index != 0) && (local_res18.SerialNumber != 0)) {
    pFVar7[0x11] = (FScriptContainerElement)0x1;
    FVar2 = pFVar7[0x298];
    if (1 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)FVar2] !=
        UE::Core::Private::TDestructorCaller<FMassEntityHandle>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)FVar2])(pFVar7 + 0x20);
    }
    *(FMassEntityHandle *)(pFVar7 + 0x20) = param_3;
    pFVar7[0x298] = (FScriptContainerElement)0x0;
  }
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  if (param_2.Val != (UScriptStruct *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    local_68.ObjectIndex = 0;
    local_68.ObjectSerialNumber = 0;
    local_48[0] = param_2.Val;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    FWeakObjectPtr::operator=(&local_68,(FObjectPtr)local_48);
    local_60 = local_68;
  }
  TSet<TObjectKey<UScriptStruct_const_>,DefaultKeyFuncs<TObjectKey<UScriptStruct_const_>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectKey<UScriptStruct_const_>_>
            (&pFVar6->FragmentsWithBreakpoints,&local_res10,(bool *)&local_60);
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&OnBreakpointsChangedDelegate);
  return;
}

// SetProcessorBreakpoint @ 14724cce0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __cdecl
FMassDebugger::SetProcessorBreakpoint
          (FMassEntityManager *param_1,TNotNull<UMassProcessor_const_*> param_2,
          FMassEntityHandle param_3)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEnvironment *pFVar6;
  FScriptContainerElement *pFVar7;
  FWeakObjectPtr FVar8;
  TObjectKey<UMassProcessor_const_> local_res10;
  FMassEntityHandle local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  undefined8 local_58;
  UMassProcessor *local_50;
  UMassProcessor *local_48 [2];
  
  local_res18 = param_3;
  UE::Mass::Debug::FNoDebuggerNotification::ConditionallyNotifyUser();
  pFVar6 = GetActiveEnvironmentChecked(param_1);
  pFVar6->bHasBreakpoint = true;
  piVar1 = &(pFVar6->Breakpoints).ArrayMax;
  UE::Mass::Debug::FBreakpoint::bHasBreakpoint = true;
  iVar5 = (pFVar6->Breakpoints).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2a8,8,&(pFVar6->Breakpoints).AllocatorInstance,piVar1);
  }
  (pFVar6->Breakpoints).ArrayNum = iVar5 + 1;
  local_58 = 0;
  pFVar7 = (pFVar6->Breakpoints).AllocatorInstance.Data + (longlong)iVar5 * 0x2a8;
  *(int *)pFVar7 = 0;
  *(undefined8 *)(pFVar7 + 8) = 0;
  *(undefined2 *)(pFVar7 + 0x10) = 0;
  *(undefined8 *)(pFVar7 + 0x14) = 0;
  pFVar7[0x1c] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar7 + 0x20) = 0;
  pFVar7[0x298] = (FScriptContainerElement)0x0;
  pFVar7[0x2a0] = (FScriptContainerElement)0x0;
  `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
  ::__l2::LastHandle =
       `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
       ::__l2::LastHandle + 1;
  *(int *)pFVar7 =
       `public:_static_struct_UE::Mass::Debug::FBreakpointHandle___cdecl_UE::Mass::Debug::FBreakpointHandle::CreateHandle(void)'
       ::__l2::LastHandle;
  pFVar7[0x2a0] = (FScriptContainerElement)0x1;
  pFVar7[0x10] = (FScriptContainerElement)0x1;
  if (param_2.Val == (UMassProcessor *)0x0) {
    FVar8.ObjectIndex = 0;
    FVar8.ObjectSerialNumber = 0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_50 = param_2.Val;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_50);
    FVar8 = local_res20;
  }
  FVar2 = pFVar7[0x1c];
  if (1 < (ulonglong)(byte)FVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TObjectKey<UMassProcessor_const_>,TObjectKey<UScriptStruct_const_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2] !=
      UE::Core::Private::TDestructorCaller<TObjectKey<UMassProcessor_const_>_>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TObjectKey<UMassProcessor_const_>,TObjectKey<UScriptStruct_const_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[(byte)FVar2])(pFVar7 + 0x14);
  }
  *(FWeakObjectPtr *)(pFVar7 + 0x14) = FVar8;
  pFVar7[0x1c] = (FScriptContainerElement)0x0;
  if ((param_3.Index != 0) && (local_res18.SerialNumber != 0)) {
    pFVar7[0x11] = (FScriptContainerElement)0x1;
    FVar2 = pFVar7[0x298];
    if (1 < (ulonglong)(byte)FVar2) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)FVar2] !=
        UE::Core::Private::TDestructorCaller<FMassEntityHandle>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityHandle,FMassFragmentRequirements>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)FVar2])(pFVar7 + 0x20);
    }
    *(FMassEntityHandle *)(pFVar7 + 0x20) = param_3;
    pFVar7[0x298] = (FScriptContainerElement)0x0;
  }
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  if (param_2.Val != (UMassProcessor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    local_68.ObjectIndex = 0;
    local_68.ObjectSerialNumber = 0;
    local_48[0] = param_2.Val;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2.Val);
    }
    FWeakObjectPtr::operator=(&local_68,(FObjectPtr)local_48);
    local_60 = local_68;
  }
  TSet<TObjectKey<UMassProcessor_const_>,DefaultKeyFuncs<TObjectKey<UMassProcessor_const_>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectKey<UMassProcessor_const_>_>
            (&pFVar6->ProcessorsWithBreakpoints,&local_res10,(bool *)&local_60);
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
            (&OnBreakpointsChangedDelegate);
  return;
}

// ShouldBreakOnFragmentWrite @ 14724d9b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FBreakpointHandle __cdecl
FMassDebugger::ShouldBreakOnFragmentWrite
          (FMassEntityManager *param_1,UScriptStruct *param_2,FMassEntityHandle param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEnvironment *pFVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  FBreakpoint *this;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  FBreakpoint *pFVar16;
  FMassEntityHandle local_res20;
  undefined1 local_68 [8];
  FWeakObjectPtr local_60;
  FWeakObjectPtr local_58;
  FMassEntityHandle local_50;
  FMassEntityHandle local_48;
  undefined8 local_40;
  
  uVar11 = 0;
  if (UE::Mass::Debug::FBreakpoint::bHasBreakpoint) {
    pFVar6 = GetActiveEnvironmentChecked((FMassEntityManager *)param_2);
    if (pFVar6->bHasBreakpoint != false) {
      uVar15 = uVar11;
      iVar5 = 0;
      if (param_3 != (FMassEntityHandle)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_3);
        }
        local_60.ObjectIndex = 0;
        local_60.ObjectSerialNumber = 0;
        local_50 = param_3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_3);
        }
        FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_50);
        uVar15 = (ulonglong)local_60 >> 0x20;
        iVar5 = local_60.ObjectIndex;
      }
      iVar14 = (int)uVar15;
      uVar9 = iVar5 - iVar14 ^ (uint)(uVar15 >> 0xd);
      uVar8 = (-0x61c88647 - uVar9) - iVar14 ^ uVar9 << 8;
      uVar12 = (iVar14 - uVar8) - uVar9 ^ uVar8 >> 0xd;
      uVar9 = (uVar9 - uVar12) - uVar8 ^ uVar12 >> 0xc;
      uVar8 = (uVar8 - uVar9) - uVar12 ^ uVar9 << 0x10;
      uVar12 = (uVar12 - uVar8) - uVar9 ^ uVar8 >> 5;
      uVar9 = (uVar9 - uVar12) - uVar8 ^ uVar12 >> 3;
      uVar8 = (uVar8 - uVar9) - uVar12 ^ uVar9 << 10;
      if (*(int *)&(pFVar6->FragmentsWithBreakpoints).Elements.field_0x8 !=
          *(int *)&(pFVar6->FragmentsWithBreakpoints).Elements.field_0x34) {
        FVar10 = (pFVar6->FragmentsWithBreakpoints).Hash.SecondaryData;
        if (FVar10 == (ForElementType<FSetElementId>)0x0) {
          FVar10 = (ForElementType<FSetElementId>)&(pFVar6->FragmentsWithBreakpoints).Hash;
        }
        iVar13 = *(int *)((longlong)FVar10 +
                         (ulonglong)
                         ((pFVar6->FragmentsWithBreakpoints).HashSize - 1U &
                         ((uVar12 - uVar8) - uVar9 ^ uVar8 >> 0xf)) * 4);
        if (iVar13 != -1) {
          lVar1 = *(longlong *)&(pFVar6->FragmentsWithBreakpoints).Elements;
          do {
            lVar7 = (longlong)iVar13;
            if ((*(int *)(lVar1 + lVar7 * 0x10) == iVar5) &&
               (*(int *)(lVar1 + 4 + lVar7 * 0x10) == iVar14)) {
              if (iVar13 != -1) {
                this = (FBreakpoint *)(pFVar6->Breakpoints).AllocatorInstance.Data;
                iVar5 = (pFVar6->Breakpoints).ArrayNum;
                pFVar16 = this + iVar5;
                while( true ) {
                  if ((pFVar6->Breakpoints).ArrayNum != iVar5) {
                    local_68[0] = 0;
                    `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint,int,0>::operator!='::__l2
                    ::<lambda_1>::operator()(local_68);
                  }
                  if (this == pFVar16) break;
                  if (this->TriggerType == FragmentWrite) {
                    if ((this->Trigger).TypeIndex != '\x01') {
                      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index == TypeIndex",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                         ,0x97,L"");
                      if (bVar4) {
                        pcVar3 = (code *)swi(3);
                        iVar5 = (*pcVar3)();
                        return (FBreakpointHandle)iVar5;
                      }
                    }
                    uVar2 = *(undefined8 *)&this->Trigger;
                    iVar14 = 0;
                    local_40 = uVar2;
                    iVar13 = 0;
                    if (param_3 != (FMassEntityHandle)0x0) {
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable((UObject *)param_3);
                      }
                      local_58.ObjectIndex = 0;
                      local_58.ObjectSerialNumber = 0;
                      local_48 = param_3;
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable((UObject *)param_3);
                      }
                      FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_48);
                      iVar14 = local_58.ObjectIndex;
                      iVar13 = local_58.ObjectSerialNumber;
                    }
                    if (((int)uVar2 == iVar14) && (local_40._4_4_ == iVar13)) {
                      bVar4 = UE::Mass::Debug::FBreakpoint::ApplyEntityFilter
                                        (this,(FMassEntityManager *)param_2,&local_res20);
                      if (bVar4) {
                        this->HitCount = this->HitCount + 1;
                        UE::Mass::Debug::FBreakpoint::LastBreakpointHandle.Handle =
                             (this->Handle).Handle;
                        if (this->bEnabled != false) {
                          uVar11 = (ulonglong)(uint)(this->Handle).Handle;
                        }
                      }
                    }
                  }
                  this = this + 1;
                }
                *(int *)&param_1->_padding_ = (int)uVar11;
                return (FBreakpointHandle)(int)param_1;
              }
              break;
            }
            iVar13 = *(int *)(lVar1 + 8 + lVar7 * 0x10);
          } while (iVar13 != -1);
        }
      }
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0;
  return (FBreakpointHandle)(int)param_1;
}

// ShouldProcessorBreak @ 14724dd10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

FBreakpointHandle __cdecl
FMassDebugger::ShouldProcessorBreak
          (FMassEntityManager *param_1,UMassProcessor *param_2,FMassEntityHandle param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEnvironment *pFVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  FBreakpoint *this;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  FBreakpoint *pFVar16;
  FMassEntityHandle local_res20;
  undefined1 local_68 [8];
  FWeakObjectPtr local_60;
  FWeakObjectPtr local_58;
  FMassEntityHandle local_50;
  FMassEntityHandle local_48;
  undefined8 local_40;
  
  uVar11 = 0;
  if (UE::Mass::Debug::FBreakpoint::bHasBreakpoint) {
    pFVar6 = GetActiveEnvironmentChecked((FMassEntityManager *)param_2);
    if (pFVar6->bHasBreakpoint != false) {
      uVar15 = uVar11;
      iVar5 = 0;
      if (param_3 != (FMassEntityHandle)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_3);
        }
        local_60.ObjectIndex = 0;
        local_60.ObjectSerialNumber = 0;
        local_50 = param_3;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_3);
        }
        FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_50);
        uVar15 = (ulonglong)local_60 >> 0x20;
        iVar5 = local_60.ObjectIndex;
      }
      iVar14 = (int)uVar15;
      uVar9 = iVar5 - iVar14 ^ (uint)(uVar15 >> 0xd);
      uVar8 = (-0x61c88647 - uVar9) - iVar14 ^ uVar9 << 8;
      uVar12 = (iVar14 - uVar8) - uVar9 ^ uVar8 >> 0xd;
      uVar9 = (uVar9 - uVar12) - uVar8 ^ uVar12 >> 0xc;
      uVar8 = (uVar8 - uVar9) - uVar12 ^ uVar9 << 0x10;
      uVar12 = (uVar12 - uVar8) - uVar9 ^ uVar8 >> 5;
      uVar9 = (uVar9 - uVar12) - uVar8 ^ uVar12 >> 3;
      uVar8 = (uVar8 - uVar9) - uVar12 ^ uVar9 << 10;
      if (*(int *)&(pFVar6->ProcessorsWithBreakpoints).Elements.field_0x8 !=
          *(int *)&(pFVar6->ProcessorsWithBreakpoints).Elements.field_0x34) {
        FVar10 = (pFVar6->ProcessorsWithBreakpoints).Hash.SecondaryData;
        if (FVar10 == (ForElementType<FSetElementId>)0x0) {
          FVar10 = (ForElementType<FSetElementId>)&(pFVar6->ProcessorsWithBreakpoints).Hash;
        }
        iVar13 = *(int *)((longlong)FVar10 +
                         (ulonglong)
                         ((pFVar6->ProcessorsWithBreakpoints).HashSize - 1U &
                         ((uVar12 - uVar8) - uVar9 ^ uVar8 >> 0xf)) * 4);
        if (iVar13 != -1) {
          lVar1 = *(longlong *)&(pFVar6->ProcessorsWithBreakpoints).Elements;
          do {
            lVar7 = (longlong)iVar13;
            if ((*(int *)(lVar1 + lVar7 * 0x10) == iVar5) &&
               (*(int *)(lVar1 + 4 + lVar7 * 0x10) == iVar14)) {
              if (iVar13 != -1) {
                this = (FBreakpoint *)(pFVar6->Breakpoints).AllocatorInstance.Data;
                iVar5 = (pFVar6->Breakpoints).ArrayNum;
                pFVar16 = this + iVar5;
                while( true ) {
                  if ((pFVar6->Breakpoints).ArrayNum != iVar5) {
                    local_68[0] = 0;
                    `TCheckedPointerIterator<UE::Mass::Debug::FBreakpoint,int,0>::operator!='::__l2
                    ::<lambda_1>::operator()(local_68);
                  }
                  if (this == pFVar16) break;
                  if (this->TriggerType == ProcessorExecute) {
                    if ((this->Trigger).TypeIndex != '\0') {
                      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index == TypeIndex",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                         ,0x97,L"");
                      if (bVar4) {
                        pcVar3 = (code *)swi(3);
                        iVar5 = (*pcVar3)();
                        return (FBreakpointHandle)iVar5;
                      }
                    }
                    uVar2 = *(undefined8 *)&this->Trigger;
                    iVar14 = 0;
                    local_40 = uVar2;
                    iVar13 = 0;
                    if (param_3 != (FMassEntityHandle)0x0) {
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable((UObject *)param_3);
                      }
                      local_58.ObjectIndex = 0;
                      local_58.ObjectSerialNumber = 0;
                      local_48 = param_3;
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable((UObject *)param_3);
                      }
                      FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_48);
                      iVar14 = local_58.ObjectIndex;
                      iVar13 = local_58.ObjectSerialNumber;
                    }
                    if (((int)uVar2 == iVar14) && (local_40._4_4_ == iVar13)) {
                      bVar4 = UE::Mass::Debug::FBreakpoint::ApplyEntityFilter
                                        (this,(FMassEntityManager *)param_2,&local_res20);
                      if ((bVar4) && (this->HitCount = this->HitCount + 1, this->bEnabled != false))
                      {
                        UE::Mass::Debug::FBreakpoint::LastBreakpointHandle.Handle =
                             (this->Handle).Handle;
                        uVar11 = (ulonglong)(uint)(this->Handle).Handle;
                      }
                    }
                  }
                  this = this + 1;
                }
                *(int *)&param_1->_padding_ = (int)uVar11;
                return (FBreakpointHandle)(int)param_1;
              }
              break;
            }
            iVar13 = *(int *)(lVar1 + 8 + lVar7 * 0x10);
          } while (iVar13 != -1);
        }
      }
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0;
  return (FBreakpointHandle)(int)param_1;
}

// ShutdownDebugger @ 14724e270

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl FMassDebugger::ShutdownDebugger(void)

{
  bool bVar1;
  int iVar2;
  ForAnyElementType this;
  FEnvironment *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = ActiveEnvironments.ArrayNum;
  pFVar3 = (FEnvironment *)
           (ActiveEnvironments.AllocatorInstance.Data +
           (longlong)ActiveEnvironments.ArrayNum * 0x140);
  this.Data = ActiveEnvironments.AllocatorInstance.Data;
  while( true ) {
    if (ActiveEnvironments.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMassDebugger::FEnvironment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FEnvironment *)this.Data == pFVar3) break;
    FEnvironment::ClearBreakpoints((FEnvironment *)this.Data);
    this.Data = this.Data + 0x140;
  }
  UE::Mass::Debug::FBreakpoint::bHasBreakpoint = false;
  DestructItems<FMassDebugger::FEnvironment,int>
            ((FEnvironment *)ActiveEnvironments.AllocatorInstance.Data,ActiveEnvironments.ArrayNum);
  ActiveEnvironments.ArrayNum = 0;
  if (ActiveEnvironments.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x140,8,0,&ActiveEnvironments.AllocatorInstance,0,&ActiveEnvironments.ArrayMax);
  }
  bVar1 = 1 < (int)FragmentsByName._72_4_;
  if (!bVar1) {
    TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
                      *)&FragmentsByName);
  }
  FragmentsByName._8_4_ = 0;
  if (FragmentsByName._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&FragmentsByName,0,(int *)&FragmentsByName.field_0xc);
  }
  FragmentsByName._48_4_ = 0xffffffff;
  FragmentsByName._52_4_ = 0;
  FragmentsByName._40_4_ = 0;
  if (0x80 < (uint)FragmentsByName._44_4_) {
    FragmentsByName._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&FragmentsByName.field_0x10,0);
  }
  if (bVar1) {
    FragmentsByName._72_4_ = 1;
    TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,UScriptStruct_const_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>,FDefaultSetAllocator>
              *)&FragmentsByName);
  }
  return;
}

// UnregisterEntityManager @ 147253ab0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl FMassDebugger::UnregisterEntityManager(FMassEntityManager *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  byte bVar5;
  ForAnyElementType FVar6;
  int iVar7;
  TWeakPtr<FMassEntityManager,1> *pTVar8;
  ForAnyElementType this;
  uint uVar9;
  TWeakPtr<FMassEntityManager_const_,1> *pTVar10;
  FEnvironment *this_00;
  uint uVar11;
  bool bVar12;
  <lambda_2> local_res8 [8];
  TWeakPtr<FMassEntityManager,1> local_48;
  TWeakPtr<FMassEntityManager,1> local_38;
  
  if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
     (*(int *)(param_1->_padding_ + 8) < 1)) {
    LOCK();
    bVar12 = EntityManagerRegistrationLock.State == (atomic<unsigned_char>)0x0;
    if (bVar12) {
      EntityManagerRegistrationLock.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar12) {
      UE::FMutex::LockSlow(&EntityManagerRegistrationLock);
    }
    TArray<FMassDebugger::FEnvironment,TSizedDefaultAllocator<32>_>::
    RemoveAll<_FMassDebugger::UnregisterEntityManager_::__l10::<lambda_2>_>
              (&ActiveEnvironments,local_res8);
    LOCK();
    UNLOCK();
  }
  else {
    LOCK();
    bVar12 = EntityManagerRegistrationLock.State == (atomic<unsigned_char>)0x0;
    if (bVar12) {
      EntityManagerRegistrationLock.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar12) {
      UE::FMutex::LockSlow(&EntityManagerRegistrationLock);
    }
    pTVar8 = TSharedFromThis<FMassEntityManager,1>::AsWeak
                       ((TSharedFromThis<FMassEntityManager,1> *)&param_1->_padding_,&local_38);
    local_48.Object = pTVar8->Object;
    pTVar3 = (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8->Object = (FMassEntityManager *)0x0;
    FVar6 = ActiveEnvironments.AllocatorInstance;
    pTVar10 = (TWeakPtr<FMassEntityManager_const_,1> *)
              (ActiveEnvironments.AllocatorInstance.Data +
              (longlong)ActiveEnvironments.ArrayNum * 0x140);
    local_48.WeakReferenceCount.ReferenceController = pTVar3;
    for (this = ActiveEnvironments.AllocatorInstance;
        (TWeakPtr<FMassEntityManager_const_,1> *)this.Data != pTVar10; this.Data = this.Data + 0x140
        ) {
      bVar12 = TWeakPtr<FMassEntityManager_const_,1>::UEOpEquals<FMassEntityManager>
                         ((TWeakPtr<FMassEntityManager_const_,1> *)this.Data,&local_48);
      if (bVar12) {
        uVar9 = (uint)(((longlong)this.Data - (longlong)FVar6.Data) / 0x140);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
        goto LAB_147253ba3;
      }
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
    uVar9 = 0xffffffff;
LAB_147253ba3:
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (uVar9 != 0xffffffff) {
      uVar11 = 0;
      if ((int)uVar9 < ActiveEnvironments.ArrayNum) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (FEnvironment *)
                (ActiveEnvironments.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x140);
      FEnvironment::~FEnvironment(this_00);
      iVar7 = (ActiveEnvironments.ArrayNum - uVar9) + -1;
      if (iVar7 != 0) {
        memmove(this_00,this_00 + 1,(longlong)iVar7 * 0x140);
      }
      ActiveEnvironments.ArrayNum = ActiveEnvironments.ArrayNum + -1;
    }
    LOCK();
    UNLOCK();
  }
  bVar5 = (byte)EntityManagerRegistrationLock.State & 2;
  EntityManagerRegistrationLock.State = EntityManagerRegistrationLock.State - 1;
  if (bVar5 != 0) {
    UE::FMutex::WakeWaitingThread(&EntityManagerRegistrationLock);
  }
  TMulticastDelegate<void___cdecl(FMassEntityManager_const_&),FDefaultTSDelegateUserPolicy>::
  Broadcast(&OnEntityManagerDeinitialized,param_1);
  return;
}

