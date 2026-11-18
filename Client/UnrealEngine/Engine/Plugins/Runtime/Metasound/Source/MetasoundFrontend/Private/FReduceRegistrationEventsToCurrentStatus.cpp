// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// GetTransactionTimestamp @ 14ae788a0

ulong64 __cdecl
Metasound::FReduceRegistrationEventsToCurrentStatus::GetTransactionTimestamp
          (FFrontendQueryEntry *param_1)

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
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2061296453371822242>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuerySteps.cpp"
                       ,0xa2,"InEntry.Value.IsType<FNodeRegistryTransaction>()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    return 0;
  }
  if ((param_1->Value).TypeIndex != '\x01') {
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
  return (param_1->Value)._padding_;
}

// IsValidTransactionOfType @ 14ae7ade0

bool __cdecl
Metasound::FReduceRegistrationEventsToCurrentStatus::IsValidTransactionOfType
          (ETransactionType param_1,FFrontendQueryEntry *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  if (param_2 != (FFrontendQueryEntry *)0x0) {
    uVar4 = (ulonglong)(param_2->Value).TypeIndex;
    if (4 < uVar4) {
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
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar4) != '\0') {
      if ((param_2->Value).TypeIndex != '\x01') {
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
      return (ETransactionType)(param_2->Value)._padding_ == param_1;
    }
  }
  return false;
}

// Reduce @ 14ae7f4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FReduceRegistrationEventsToCurrentStatus::Reduce
          (FReduceRegistrationEventsToCurrentStatus *this,FFrontendQueryKey *param_1,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  uchar uVar2;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  void *pvVar4;
  code *pcVar5;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  bool bVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  int iVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  ForElementType<Metasound::FFrontendQueryEntry> FVar14;
  ForElementType<Metasound::FFrontendQueryEntry> FVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  ForElementType<Metasound::FFrontendQueryEntry> FVar17;
  ForElementType<Metasound::FFrontendQueryEntry> FVar18;
  ForElementType<Metasound::FFrontendQueryEntry> FVar19;
  undefined1 auStack_178 [32];
  ForElementType<Metasound::FFrontendQueryEntry> local_158;
  ForElementType<Metasound::FFrontendQueryEntry> local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  int local_128;
  int local_124;
  undefined1 local_120 [4];
  int local_11c;
  int local_118;
  int local_114;
  int *local_110;
  ForElementType<Metasound::FFrontendQueryEntry> local_108;
  int *local_100;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_f8;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  local_f0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_11c = 0;
  local_124 = 0;
  FVar10 = (param_2->AllocatorInstance).SecondaryData;
  piVar1 = &param_2->ArrayNum;
  local_114 = *piVar1;
  local_128 = 0;
  local_118 = 0;
  FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)param_2;
  if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    FVar13 = FVar10;
  }
  local_108 = (ForElementType<Metasound::FFrontendQueryEntry>)
              ((longlong)local_114 * 0xb0 + (longlong)FVar13);
  FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
  FVar15 = (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
  FVar17 = (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
  FVar18 = (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
  iVar12 = 0;
  local_110 = piVar1;
  local_100 = piVar1;
  local_f8 = param_2;
LAB_14ae7f561:
  FVar14 = FVar13;
  if (*piVar1 != local_114) {
    local_120[0] = 0;
    `TCheckedPointerIterator<Metasound::FFrontendQueryEntry,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_120);
  }
  if (FVar14 == local_108) {
    local_f0.ArrayMax = 1;
    local_f0.ArrayNum = 0;
    local_f0.AllocatorInstance.SecondaryData = (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
    if (local_128 < iVar12) {
      iVar12 = 0;
      if ((&local_f0 <= (ulonglong)FVar10) &&
         (iVar12 = 0, (ulonglong)FVar10 < &local_f0.AllocatorInstance.SecondaryData)) {
        local_138 = 0xb0;
        local_150 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
        local_140 = 0;
        local_148 = 1;
        local_158 = FVar10;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = local_f0.ArrayNum;
        if (local_f0.ArrayNum == local_f0.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                             (0x8b0,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
        }
      }
      FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
      if (local_f0.AllocatorInstance.SecondaryData !=
          (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar13 = local_f0.AllocatorInstance.SecondaryData;
      }
    }
    else {
      if (iVar12 < local_128) {
        iVar12 = 0;
        if ((&local_f0 <= (ulonglong)FVar17) &&
           (iVar12 = 0, (ulonglong)FVar17 < &local_f0.AllocatorInstance.SecondaryData)) {
          local_138 = 0xb0;
          local_150 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
          local_140 = 0;
          local_148 = 1;
          local_158 = FVar17;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = local_f0.ArrayNum;
          if (local_f0.ArrayNum == local_f0.ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                               (0x8b0,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
          }
        }
        local_f0.ArrayNum = iVar12 + 1;
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
        if (local_f0.AllocatorInstance.SecondaryData !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = local_f0.AllocatorInstance.SecondaryData;
        }
        FFrontendQueryEntry::FFrontendQueryEntry
                  ((FFrontendQueryEntry *)((longlong)iVar12 * 0xb0 + (longlong)FVar10),
                   (FFrontendQueryEntry *)FVar17);
      }
      if (local_118 < local_11c) {
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
        if (local_f0.AllocatorInstance.SecondaryData !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = local_f0.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar10 <= (ulonglong)FVar18) {
          FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
          if (local_f0.AllocatorInstance.SecondaryData !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FVar10 = local_f0.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar18 < (ulonglong)((longlong)local_f0.ArrayMax * 0xb0 + (longlong)FVar10)
             ) {
            local_138 = 0xb0;
            local_140 = (longlong)local_f0.ArrayNum;
            local_150 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
            if (local_f0.AllocatorInstance.SecondaryData !=
                (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              local_150 = local_f0.AllocatorInstance.SecondaryData;
            }
            local_158 = FVar18;
            local_148 = (longlong)local_f0.ArrayMax;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        iVar12 = local_f0.ArrayNum;
        if (local_f0.ArrayNum == local_f0.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                             (0x8b0,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
        }
        FVar10 = FVar18;
        FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
        if (local_f0.AllocatorInstance.SecondaryData !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar13 = local_f0.AllocatorInstance.SecondaryData;
        }
      }
      else {
        if (local_118 <= local_11c) goto LAB_14ae7fa5e;
        FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
        if (local_f0.AllocatorInstance.SecondaryData !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar10 = local_f0.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar10 <= (ulonglong)FVar15) {
          FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
          if (local_f0.AllocatorInstance.SecondaryData !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FVar10 = local_f0.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar15 < (ulonglong)((longlong)local_f0.ArrayMax * 0xb0 + (longlong)FVar10)
             ) {
            local_138 = 0xb0;
            local_140 = (longlong)local_f0.ArrayNum;
            local_150 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
            if (local_f0.AllocatorInstance.SecondaryData !=
                (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              local_150 = local_f0.AllocatorInstance.SecondaryData;
            }
            local_158 = FVar15;
            local_148 = (longlong)local_f0.ArrayMax;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        iVar12 = local_f0.ArrayNum;
        if (local_f0.ArrayNum == local_f0.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                             (0x8b0,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
        }
        FVar10 = FVar15;
        FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
        if (local_f0.AllocatorInstance.SecondaryData !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar13 = local_f0.AllocatorInstance.SecondaryData;
        }
      }
    }
    local_f0.ArrayNum = iVar12 + 1;
    FFrontendQueryEntry::FFrontendQueryEntry
              ((FFrontendQueryEntry *)((longlong)iVar12 * 0xb0 + (longlong)FVar13),
               (FFrontendQueryEntry *)FVar10);
LAB_14ae7fa5e:
    pTVar6 = local_f8;
    piVar1 = local_100;
    if (local_f8 != &local_f0) {
      pTVar3 = *(TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 **)&(local_f8->AllocatorInstance).SecondaryData.field_0x0;
      pTVar11 = local_f8;
      if (pTVar3 != (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        pTVar11 = pTVar3;
      }
      DestructItems<Metasound::FFrontendQueryEntry,int>((FFrontendQueryEntry *)pTVar11,*local_100);
      if (local_f0.AllocatorInstance.SecondaryData ==
          (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        *(undefined8 *)(pTVar6->AllocatorInstance).InlineData =
             local_f0.AllocatorInstance.InlineData._0_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 8) =
             local_f0.AllocatorInstance.InlineData._8_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x10) =
             local_f0.AllocatorInstance.InlineData._16_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x18) =
             local_f0.AllocatorInstance.InlineData._24_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x20) =
             local_f0.AllocatorInstance.InlineData._32_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x28) =
             local_f0.AllocatorInstance.InlineData._40_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x30) =
             local_f0.AllocatorInstance.InlineData._48_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x38) =
             local_f0.AllocatorInstance.InlineData._56_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x40) =
             local_f0.AllocatorInstance.InlineData._64_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x48) =
             local_f0.AllocatorInstance.InlineData._72_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x50) =
             local_f0.AllocatorInstance.InlineData._80_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x58) =
             local_f0.AllocatorInstance.InlineData._88_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x60) =
             local_f0.AllocatorInstance.InlineData._96_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x68) =
             local_f0.AllocatorInstance.InlineData._104_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x70) =
             local_f0.AllocatorInstance.InlineData._112_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x78) =
             local_f0.AllocatorInstance.InlineData._120_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x80) =
             local_f0.AllocatorInstance.InlineData._128_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x88) =
             local_f0.AllocatorInstance.InlineData._136_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x90) =
             local_f0.AllocatorInstance.InlineData._144_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0x98) =
             local_f0.AllocatorInstance.InlineData._152_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0xa0) =
             local_f0.AllocatorInstance.InlineData._160_8_;
        *(undefined8 *)((longlong)(pTVar6->AllocatorInstance).InlineData + 0xa8) =
             local_f0.AllocatorInstance.InlineData._168_8_;
      }
      pvVar4 = *(void **)&(pTVar6->AllocatorInstance).SecondaryData.field_0x0;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(ForElementType<Metasound::FFrontendQueryEntry> *)
       &(pTVar6->AllocatorInstance).SecondaryData.field_0x0 =
           local_f0.AllocatorInstance.SecondaryData;
      *piVar1 = local_f0.ArrayNum;
      local_f0.AllocatorInstance.SecondaryData = (ForElementType<Metasound::FFrontendQueryEntry>)0x0
      ;
      pTVar6->ArrayMax = local_f0.ArrayMax;
      local_f0.ArrayMax = 1;
      local_f0.ArrayNum = 0;
    }
    FVar10 = (ForElementType<Metasound::FFrontendQueryEntry>)&local_f0;
    if (local_f0.AllocatorInstance.SecondaryData !=
        (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      FVar10 = local_f0.AllocatorInstance.SecondaryData;
    }
    DestructItems<Metasound::FFrontendQueryEntry,int>
              ((FFrontendQueryEntry *)FVar10,local_f0.ArrayNum);
    if (local_f0.AllocatorInstance.SecondaryData !=
        (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      FMemory::Free((void *)local_f0.AllocatorInstance.SecondaryData);
    }
    return;
  }
  if ((*(uchar *)((longlong)FVar14 + 0xa0) != '\x01') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(uchar *)((longlong)FVar14 + 0x10);
  FVar13 = FVar10;
  FVar16 = FVar15;
  FVar19 = FVar18;
  if (uVar2 == '\0') {
    iVar12 = iVar12 + 1;
    FVar13 = FVar14;
    local_124 = iVar12;
    if (FVar10 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      uVar8 = GetTransactionTimestamp((FFrontendQueryEntry *)FVar14);
      uVar9 = GetTransactionTimestamp((FFrontendQueryEntry *)FVar10);
      FVar13 = FVar10;
      iVar12 = local_124;
      if (uVar9 < uVar8) {
        FVar13 = FVar14;
      }
    }
  }
  else {
    if (uVar2 == '\x01') {
      local_128 = local_128 + 1;
      if (FVar17 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar14 + 0xb0);
        FVar17 = FVar14;
      }
      else {
        uVar8 = GetTransactionTimestamp((FFrontendQueryEntry *)FVar14);
        uVar9 = GetTransactionTimestamp((FFrontendQueryEntry *)FVar17);
        iVar12 = local_124;
        if (uVar8 <= uVar9) goto LAB_14ae7f740;
        FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar14 + 0xb0);
        FVar17 = FVar14;
      }
      goto LAB_14ae7f561;
    }
    if (uVar2 == '\x02') {
      local_11c = local_11c + 1;
      FVar19 = FVar14;
      if (FVar18 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        uVar8 = GetTransactionTimestamp((FFrontendQueryEntry *)FVar14);
        uVar9 = GetTransactionTimestamp((FFrontendQueryEntry *)FVar18);
        FVar19 = FVar18;
        iVar12 = local_124;
        if (uVar9 < uVar8) {
          FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar14 + 0xb0);
          FVar18 = FVar14;
          goto LAB_14ae7f561;
        }
      }
    }
    else if (uVar2 == '\x03') {
      local_118 = local_118 + 1;
      FVar16 = FVar14;
      if (FVar15 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) goto LAB_14ae7f740;
      uVar8 = GetTransactionTimestamp((FFrontendQueryEntry *)FVar14);
      uVar9 = GetTransactionTimestamp((FFrontendQueryEntry *)FVar15);
      FVar16 = FVar15;
      iVar12 = local_124;
      if (uVar9 < uVar8) {
        FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar14 + 0xb0);
        FVar15 = FVar14;
        goto LAB_14ae7f561;
      }
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuerySteps.cpp"
                         ,0x7b,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
LAB_14ae7f740:
  FVar10 = FVar13;
  FVar13 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar14 + 0xb0);
  FVar15 = FVar16;
  FVar18 = FVar19;
  goto LAB_14ae7f561;
}

