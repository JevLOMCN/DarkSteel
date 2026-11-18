// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 64

// ResetFunction @ 14b3db220

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar2 = param_1[0xe];
  iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data;
  if (-1 < *(int *)((longlong)IVar2 + 0xc)) {
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)*(FScriptContainerElement **)IVar2,iVar1);
    *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
    return;
  }
  DestructItems<Metasound::FAudioBusAsset,int>
            ((FAudioBusAsset *)*(FScriptContainerElement **)IVar2,iVar1);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (*(int *)((longlong)IVar2 + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14b3db2c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar2 = param_1[0xe];
  iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data;
  if (-1 < *(int *)((longlong)IVar2 + 0xc)) {
    DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)*(FScriptContainerElement **)IVar2,iVar1)
    ;
    *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
    return;
  }
  DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)*(FScriptContainerElement **)IVar2,iVar1);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (*(int *)((longlong)IVar2 + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14b3db360

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayConcatOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar2 = param_1[0xe];
  iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data;
  if (-1 < *(int *)((longlong)IVar2 + 0xc)) {
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)*(FScriptContainerElement **)IVar2,iVar1);
    *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
    return;
  }
  DestructItems<Metasound::FWaveTableBankAsset,int>
            ((FWaveTableBankAsset *)*(FScriptContainerElement **)IVar2,iVar1);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (*(int *)((longlong)IVar2 + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14b3db400

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar1 = *(int *)param_1[10];
  if (-1 < iVar1) {
    IVar2 = param_1[6];
    if (iVar1 < *(int *)((longlong)IVar2 + 8)) {
      if (iVar1 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar3 = *(longlong *)IVar2;
      IVar2 = param_1[0xe];
      lVar4 = *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10);
      uVar5 = *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pTVar8 = *(TReferenceControllerBase<1> **)((longlong)IVar2 + 8);
      *(undefined8 *)IVar2 = uVar5;
      *(longlong *)((longlong)IVar2 + 8) = lVar4;
      goto LAB_14b3db4e3;
    }
  }
  IVar2 = param_1[0xe];
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)IVar2 + 8);
  *(undefined8 *)IVar2 = 0;
  *(undefined8 *)((longlong)IVar2 + 8) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
LAB_14b3db4e3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// ResetFunction @ 14b3db500

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar1 = *(int *)param_1[10];
  if (-1 < iVar1) {
    IVar2 = param_1[6];
    if (iVar1 < *(int *)((longlong)IVar2 + 8)) {
      if (iVar1 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar3 = *(longlong *)IVar2;
      IVar2 = param_1[0xe];
      lVar4 = *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10);
      uVar5 = *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pTVar8 = *(TReferenceControllerBase<1> **)((longlong)IVar2 + 8);
      *(undefined8 *)IVar2 = uVar5;
      *(longlong *)((longlong)IVar2 + 8) = lVar4;
      goto LAB_14b3db5e3;
    }
  }
  IVar2 = param_1[0xe];
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)IVar2 + 8);
  *(undefined8 *)IVar2 = 0;
  *(undefined8 *)((longlong)IVar2 + 8) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
LAB_14b3db5e3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// ResetFunction @ 14b3db600

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  FSharedReferencer<1> FVar8;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  if ((param_1 == (IOperator *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != DerivedOperator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                         ,0x44,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar1 = *(int *)param_1[10];
  if ((iVar1 < 0) || (IVar2 = param_1[6], *(int *)((longlong)IVar2 + 8) <= iVar1)) {
    IVar2 = param_1[0xe];
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar8.ReferenceController = FStack_20.ReferenceController;
    if (IVar2 != (IOperator)&local_28) {
      *(undefined8 *)IVar2 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)((longlong)IVar2 + 8),&FStack_20);
      FVar8.ReferenceController = FStack_20.ReferenceController;
    }
  }
  else {
    if ((iVar1 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *(longlong *)IVar2;
    IVar2 = param_1[0xe];
    lVar4 = *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10);
    uVar5 = *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    local_18 = *(undefined8 *)IVar2;
    pTStack_10 = *(TReferenceControllerBase<1> **)((longlong)IVar2 + 8);
    *(undefined8 *)IVar2 = uVar5;
    *(longlong *)((longlong)IVar2 + 8) = lVar4;
    FVar8.ReferenceController = pTStack_10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  return;
}

// ResetFunction @ 14b3db710

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ResetFunction @ 14b3db760

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ResetFunction @ 14b3db7b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayLastIndexOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(int *)param_1[6] = *(int *)((longlong)param_1[2] + 8) + -1;
  return;
}

// ResetFunction @ 14b3db800

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ResetFunction @ 14b3db850

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ResetFunction @ 14b3db8a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayNumOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1[2] + 8);
  return;
}

// ResetFunction @ 14b3db8f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayRandomGetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3db950

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayRandomGetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             param_1,param_2);
  return;
}

// ResetFunction @ 14b3db9b0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
  Reset((TArrayRandomGetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
         *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dba10

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)param_1[0xc],
             (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)param_1[8]);
  return;
}

// ResetFunction @ 14b3dba60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)param_1[0xc],
             (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)param_1[8]);
  return;
}

// ResetFunction @ 14b3dbab0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)param_1[0xc],
             (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)param_1[8]);
  return;
}

// ResetFunction @ 14b3dbb00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayShuffleOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
              *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dbb60

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayShuffleOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)
             param_1,param_2);
  return;
}

// ResetFunction @ 14b3dbbc0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::Reset
            ((TArrayShuffleOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
              *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dbc20

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar2 = param_1[0x12];
  iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data;
  if (-1 < *(int *)((longlong)IVar2 + 0xc)) {
    DestructItems<Metasound::FAudioBusAsset,int>
              ((FAudioBusAsset *)*(FScriptContainerElement **)IVar2,iVar1);
    *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
    return;
  }
  DestructItems<Metasound::FAudioBusAsset,int>
            ((FAudioBusAsset *)*(FScriptContainerElement **)IVar2,iVar1);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (*(int *)((longlong)IVar2 + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14b3dbcd0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar2 = param_1[0x12];
  iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data;
  if (-1 < *(int *)((longlong)IVar2 + 0xc)) {
    DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)*(FScriptContainerElement **)IVar2,iVar1)
    ;
    *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
    return;
  }
  DestructItems<Metasound::FWaveAsset,int>((FWaveAsset *)*(FScriptContainerElement **)IVar2,iVar1);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (*(int *)((longlong)IVar2 + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14b3dbd80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TArraySubsetOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar2 = param_1[0x12];
  iVar1 = *(int *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data;
  if (-1 < *(int *)((longlong)IVar2 + 0xc)) {
    DestructItems<Metasound::FWaveTableBankAsset,int>
              ((FWaveTableBankAsset *)*(FScriptContainerElement **)IVar2,iVar1);
    *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
    return;
  }
  DestructItems<Metasound::FWaveTableBankAsset,int>
            ((FWaveTableBankAsset *)*(FScriptContainerElement **)IVar2,iVar1);
  *(undefined4 *)&((ForAnyElementType *)((longlong)IVar2 + 8))->Data = 0;
  if (*(int *)((longlong)IVar2 + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)IVar2,0,(int *)((longlong)IVar2 + 0xc));
  }
  return;
}

// ResetFunction @ 14b3dbe30

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioBusReaderOperator<1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioBusReaderOperator<1>::Reset((TAudioBusReaderOperator<1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dbe90

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioBusReaderOperator<2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioBusReaderOperator<2>::Reset((TAudioBusReaderOperator<2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dbef0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioBusReaderOperator<4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioBusReaderOperator<4>::Reset((TAudioBusReaderOperator<4> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dbf50

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioBusReaderOperator<6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioBusReaderOperator<6>::Reset((TAudioBusReaderOperator<6> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dbfb0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioBusReaderOperator<8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioBusReaderOperator<8>::Reset((TAudioBusReaderOperator<8> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dc010

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioBusWriterOperator<1>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioBusWriterOperator<1>::Reset((TAudioBusWriterOperator<1> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dc070

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioBusWriterOperator<2>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioBusWriterOperator<2>::Reset((TAudioBusWriterOperator<2> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dc0d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioBusWriterOperator<4>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioBusWriterOperator<4>::Reset((TAudioBusWriterOperator<4> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dc130

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioBusWriterOperator<6>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioBusWriterOperator<6>::Reset((TAudioBusWriterOperator<6> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dc190

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAudioBusWriterOperator<8>_>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TAudioBusWriterOperator<8>::Reset((TAudioBusWriterOperator<8> *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dc1f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<WaveTable::FWaveTable>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator this;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  IVar1 = param_1[3];
  this = param_1[7];
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)this,
             (TArray<float,TSizedDefaultAllocator<32>_> *)IVar1);
  *(undefined4 *)
   &(((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x10))->AllocatorInstance).Data
       = *(undefined4 *)
          &(((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)IVar1 + 0x10))->
           AllocatorInstance).Data;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b3dc260

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)param_1[7],
             (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b3dc2c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)param_1[7],
             (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b3dc320

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)param_1[7],
             (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)param_1[3]);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b3dc380

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b3dc3d0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)param_1[7] = *(undefined4 *)param_1[3];
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b3dc420

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FAudioBusAsset>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  IVar1 = param_1[7];
  lVar2 = *(longlong *)((longlong)param_1[3] + 8);
  uVar3 = *(undefined8 *)param_1[3];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)IVar1 + 8);
  *(undefined8 *)IVar1 = uVar3;
  *(longlong *)((longlong)IVar1 + 8) = lVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b3dc4a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveAsset>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  IVar1 = param_1[7];
  lVar2 = *(longlong *)((longlong)param_1[3] + 8);
  uVar3 = *(undefined8 *)param_1[3];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)IVar1 + 8);
  *(undefined8 *)IVar1 = uVar3;
  *(longlong *)((longlong)IVar1 + 8) = lVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b3dc520

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::ReceiveNodePrivate::TReceiverOperator<Metasound::FWaveTableBankAsset>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  if (param_1 == (IOperator *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  IVar1 = param_1[7];
  lVar2 = *(longlong *)((longlong)param_1[3] + 8);
  uVar3 = *(undefined8 *)param_1[3];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)IVar1 + 8);
  *(undefined8 *)IVar1 = uVar3;
  *(longlong *)((longlong)IVar1 + 8) = lVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

// ResetFunction @ 14b3dc5a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<WaveTable::FWaveTable>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<WaveTable::FWaveTable>,TDefaultDelete<Metasound::TSender<WaveTable::FWaveTable>_>_>
  TVar5;
  TSender<WaveTable::FWaveTable> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::ResetSenderAndCleanupChannel
            ((TSendOperator<WaveTable::FWaveTable> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<WaveTable::FWaveTable>::CreateNewSender
                    ((TSendOperator<WaveTable::FWaveTable> *)param_1);
  pTVar6 = (TSender<WaveTable::FWaveTable> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b3dc680

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
  ResetSenderAndCleanupChannel
            ((TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
             param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>::
          CreateNewSender((TSendOperator<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_>
                           *)param_1);
  pTVar6 = (TSender<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>_> *)
           (param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b3dc760

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>::
  ResetSenderAndCleanupChannel
            ((TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
          ::CreateNewSender((TSendOperator<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_>
                             *)param_1);
  pTVar6 = (TSender<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>_> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b3dc840

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>,TDefaultDelete<Metasound::TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>_>_>
  TVar5;
  TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::
  TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
  ResetSenderAndCleanupChannel
            ((TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
             param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>::
          CreateNewSender((TSendOperator<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_>
                           *)param_1);
  pTVar6 = (TSender<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>_> *)
           (param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b3dc920

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::
  TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
          ::CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>_> *)
           (param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b3dca00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>,TDefaultDelete<Metasound::TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>_>_>
  TVar5;
  TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::
  TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
  ResetSenderAndCleanupChannel(param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::
          TSendOperator<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::
          CreateNewSender(param_1);
  pTVar6 = (TSender<Metasound::TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>_> *)
           (param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b3dcae0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FAudioBusAsset>,TDefaultDelete<Metasound::TSender<Metasound::FAudioBusAsset>_>_>
  TVar5;
  TSender<Metasound::FAudioBusAsset> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::ResetSenderAndCleanupChannel
            ((TSendOperator<Metasound::FAudioBusAsset> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::FAudioBusAsset>::CreateNewSender
                    ((TSendOperator<Metasound::FAudioBusAsset> *)param_1);
  pTVar6 = (TSender<Metasound::FAudioBusAsset> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b3dcbc0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveAsset>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FWaveAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveAsset>_>_>
  TVar5;
  TSender<Metasound::FWaveAsset> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::ResetSenderAndCleanupChannel
            ((TSendOperator<Metasound::FWaveAsset> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::FWaveAsset>::CreateNewSender
                    ((TSendOperator<Metasound::FWaveAsset> *)param_1);
  pTVar6 = (TSender<Metasound::FWaveAsset> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b3dcca0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>_>::
ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<Metasound::TSender<Metasound::FWaveTableBankAsset>,TDefaultDelete<Metasound::TSender<Metasound::FWaveTableBankAsset>_>_>
  TVar5;
  TSender<Metasound::FWaveTableBankAsset> *pTVar6;
  undefined8 *local_res8;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::ResetSenderAndCleanupChannel
            ((TSendOperator<Metasound::FWaveTableBankAsset> *)param_1);
  IVar1 = param_1[6];
  param_1[10] = *(IOperator *)((longlong)IVar1 + 8);
  param_1[0xb] = *(IOperator *)((longlong)IVar1 + 0x10);
  param_1[0xc] = *(IOperator *)((longlong)IVar1 + 0x18);
  TVar5 = SendNodePrivate::TSendOperator<Metasound::FWaveTableBankAsset>::CreateNewSender
                    ((TSendOperator<Metasound::FWaveTableBankAsset> *)param_1);
  pTVar6 = (TSender<Metasound::FWaveTableBankAsset> *)(param_1 + 0x10);
  if (pTVar6 != TVar5.Ptr) {
    puVar2 = (undefined8 *)pTVar6->_padding_;
    pTVar6->_padding_ = (TVar5.Ptr)->_padding_;
    (TVar5.Ptr)->_padding_ = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar6->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sender.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Public\\MetasoundSendNode.h"
                       ,0x55,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ResetFunction @ 14b3dcd80

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>_>
  ::FConverterOperator::Execute(param_1);
  return;
}

// ResetFunction @ 14b3dcde0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  TAutoConverterNode<int,Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>_>
  ::FConverterOperator::Execute(param_1);
  return;
}

// ResetFunction @ 14b3dce40

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b3dcea0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::TAutoConverterNode<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,int>::FConverterOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  IOperator IVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  
  if (param_1 == (IOperator *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  IVar1 = param_1[2];
  IVar2 = param_1[6];
  *(undefined4 *)&param_1[9].field_0x4 = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)IVar2 = *(undefined4 *)IVar1;
  return;
}

// ResetFunction @ 14b3dcf00

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FMetaSoundWaveTablePlayerNodeOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FWaveTableSampler *pFVar4;
  float fVar5;
  FWaveTableSampler local_48;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar5 = FOperatorSettings::GetActualBlockRate(param_2->OperatorSettings);
  *(float *)&param_1[1].field_0x4 = (float)param_2->OperatorSettings->SampleRate;
  if (0.0 < fVar5) {
    *(float *)(param_1 + 1) = __real_3f800000 / fVar5;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    memset((void *)param_1[0x1f],0,(longlong)*(int *)(param_1 + 0x20) << 2);
  }
  pFVar4 = WaveTable::FWaveTableSampler::FWaveTableSampler(&local_48);
  WaveTable::FWaveTableSampler::operator=((FWaveTableSampler *)(param_1 + 0x26),pFVar4);
  if (local_48.PhaseModScratch.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.PhaseModScratch.AllocatorInstance.Data);
  }
  iVar1 = *(int *)((longlong)param_1[0x2e] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x2e],0,(longlong)iVar1 << 2);
  }
  FTrigger::Reset((FTrigger *)param_1[0x32]);
  return;
}

// ResetFunction @ 14b3dd000

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FMetasoundWaveTableBankEvaluateNodeOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMetasoundWaveTableBankEvaluateNodeOperator::Reset
            ((FMetasoundWaveTableBankEvaluateNodeOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dd060

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FMetasoundWaveTableEnvelopeNodeOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMetasoundWaveTableEnvelopeNodeOperator::Reset
            ((FMetasoundWaveTableEnvelopeNodeOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dd0c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FMetasoundWaveTableEvaluateNodeOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  FWaveTableSampler *pFVar3;
  FSettings local_58;
  FWaveTableSampler local_40;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_58.Amplitude = 1.0;
  local_58.Offset = 0.0;
  local_58.Phase = 0.0;
  local_58.InterpolationMode = Linear;
  local_58.bOneShot = false;
  local_58.Freq = 0.0;
  pFVar3 = WaveTable::FWaveTableSampler::FWaveTableSampler(&local_40,&local_58);
  WaveTable::FWaveTableSampler::operator=((FWaveTableSampler *)(param_1 + 0xd),pFVar3);
  if (local_40.PhaseModScratch.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.PhaseModScratch.AllocatorInstance.Data);
  }
  *(undefined4 *)param_1[0x15] = 0;
  return;
}

// ResetFunction @ 14b3dd160

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FMetasoundWaveTableGetNodeOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMetasoundWaveTableGetNodeOperator::Reset((FMetasoundWaveTableGetNodeOperator *)param_1,param_2);
  return;
}

// ResetFunction @ 14b3dd1c0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FMetasoundWaveTableOscillatorNodeOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FWaveTableSampler *pFVar4;
  float fVar5;
  FWaveTableSampler local_48;
  
  if (param_1 == (IOperator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar5 = FOperatorSettings::GetActualBlockRate(param_2->OperatorSettings);
  if (0.0 < fVar5) {
    *(float *)(param_1 + 1) = __real_3f800000 / fVar5;
  }
  iVar1 = *(int *)(param_1 + 0x17);
  param_1[1].field_0x4 = 0;
  if (0 < iVar1) {
    memset((void *)param_1[0x16],0,(longlong)iVar1 << 2);
  }
  pFVar4 = WaveTable::FWaveTableSampler::FWaveTableSampler(&local_48);
  WaveTable::FWaveTableSampler::operator=((FWaveTableSampler *)(param_1 + 0x1d),pFVar4);
  if (local_48.PhaseModScratch.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.PhaseModScratch.AllocatorInstance.Data);
  }
  iVar1 = *(int *)((longlong)param_1[0x25] + 8);
  if (0 < iVar1) {
    memset(*(void **)param_1[0x25],0,(longlong)iVar1 << 2);
  }
  return;
}

// ResetFunction @ 14b3dd2a0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::
TResetFunctionAdapter<Metasound::FWaveInfoNodeOperator>::ResetFunction
          (IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FWaveInfoNodeOperator::Execute((FWaveInfoNodeOperator *)param_1);
  return;
}

// ResetFunction @ 14b3dd2f0

void __cdecl
Metasound::MetasoundExecutableOperatorPrivate::TResetFunctionAdapter<Metasound::FWavePlayerOperator>
::ResetFunction(IOperator *param_1,FResetParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (IOperator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != DerivedOperator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundExecutableOperator.h"
                       ,0x44,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FWavePlayerOperator::Reset((FWavePlayerOperator *)param_1,param_2);
  return;
}

