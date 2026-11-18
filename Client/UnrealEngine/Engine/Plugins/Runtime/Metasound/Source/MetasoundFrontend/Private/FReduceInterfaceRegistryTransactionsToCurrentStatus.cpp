// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// GetTransactionTimestamp @ 14ae787d0

ulong64 __cdecl
Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfaceRegistryTransactionsToCurrentStatus::
GetTransactionTimestamp(FFrontendQueryEntry *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(param_1->Value).TypeIndex;
  if (4 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5349767403691573151>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                       ,0x61,"InEntry.Value.IsType<FInterfaceRegistryTransaction>()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    return 0;
  }
  if ((param_1->Value).TypeIndex != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = FInterfaceRegistryTransaction::GetTimestamp
                    ((FInterfaceRegistryTransaction *)&param_1->Value);
  return uVar3;
}

// IsValidTransactionOfType @ 14ae7ad20

bool __cdecl
Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfaceRegistryTransactionsToCurrentStatus::
IsValidTransactionOfType(ETransactionType param_1,FFrontendQueryEntry *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ETransactionType EVar4;
  ulonglong uVar5;
  
  if (param_2 != (FFrontendQueryEntry *)0x0) {
    uVar5 = (ulonglong)(param_2->Value).TypeIndex;
    if (4 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) != '\0') {
      if ((param_2->Value).TypeIndex != '\x03') {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      EVar4 = FInterfaceRegistryTransaction::GetTransactionType
                        ((FInterfaceRegistryTransaction *)&param_2->Value);
      return EVar4 == param_1;
    }
  }
  return false;
}

// Reduce @ 14ae7ed60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfaceRegistryTransactionsToCurrentStatus::
Reduce(FReduceInterfaceRegistryTransactionsToCurrentStatus *this,FFrontendQueryKey *param_1,
      TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *param_2)

{
  ForElementType<Metasound::FFrontendQueryEntry> FVar1;
  code *pcVar2;
  uchar uVar3;
  bool bVar4;
  ETransactionType EVar5;
  int iVar6;
  FFrontendQueryEntry *pFVar7;
  ForElementType<Metasound::FFrontendQueryEntry> FVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  FFrontendQueryEntry *local_108;
  ForElementType<Metasound::FFrontendQueryEntry> local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  TLess<void> local_d8;
  FFrontendQueryEntry local_d0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  pFVar7 = AlgoImpl::
           MaxElementBy<TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,unsigned___int64_(__cdecl*)(Metasound::FFrontendQueryEntry_const_&),TLess<void>_>
                     (param_2,GetTransactionTimestamp,local_d8);
  if (pFVar7 != (FFrontendQueryEntry *)0x0) {
    uVar9 = (ulonglong)(pFVar7->Value).TypeIndex;
    if ((4 < uVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar9) != '\0') {
      if (((pFVar7->Value).TypeIndex != '\x03') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar5 = FInterfaceRegistryTransaction::GetTransactionType
                        ((FInterfaceRegistryTransaction *)&pFVar7->Value);
      if (EVar5 == InterfaceRegistration) {
        FFrontendQueryEntry::FFrontendQueryEntry(&local_d0,pFVar7);
        TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        ::Reset(param_2,0);
        FVar1 = (param_2->AllocatorInstance).SecondaryData;
        FVar8 = (ForElementType<Metasound::FFrontendQueryEntry>)param_2;
        if (FVar1 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar8 = FVar1;
        }
        if ((ulonglong)FVar8 <= &local_d0) {
          FVar8 = (ForElementType<Metasound::FFrontendQueryEntry>)param_2;
          if (FVar1 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FVar8 = FVar1;
          }
          if (&local_d0 <
              (FFrontendQueryEntry *)((longlong)param_2->ArrayMax * 0xb0 + (longlong)FVar8)) {
            local_f0 = (longlong)param_2->ArrayNum;
            local_e8 = 0xb0;
            local_100 = (ForElementType<Metasound::FFrontendQueryEntry>)param_2;
            if (FVar1 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              local_100 = FVar1;
            }
            local_108 = &local_d0;
            local_f8 = (longlong)param_2->ArrayMax;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                            (0x8b0,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        uVar3 = local_d0.Value.TypeIndex;
        param_2->ArrayNum = iVar6 + 1;
        FVar1 = (param_2->AllocatorInstance).SecondaryData;
        if (FVar1 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          param_2 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                     *)FVar1;
        }
        lVar10 = (longlong)iVar6 * 0xb0;
        *(undefined8 *)(lVar10 + (longlong)param_2) = local_d0.ID._0_8_;
        ((undefined8 *)(lVar10 + (longlong)param_2))[1] = local_d0.ID._8_8_;
        *(uchar *)(lVar10 + (longlong)param_2 + 0xa0) = local_d0.Value.TypeIndex;
        if ((4 < local_d0.Value.TypeIndex) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar3])
                  (lVar10 + (longlong)param_2 + 0x10,&local_d0.Value);
        *(float *)(lVar10 + 0xa8 + (longlong)param_2) = local_d0.Score;
        if ((4 < local_d0.Value.TypeIndex) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_d0.Value.TypeIndex])(&local_d0.Value);
        return;
      }
    }
  }
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
  Reset(param_2,0);
  return;
}

