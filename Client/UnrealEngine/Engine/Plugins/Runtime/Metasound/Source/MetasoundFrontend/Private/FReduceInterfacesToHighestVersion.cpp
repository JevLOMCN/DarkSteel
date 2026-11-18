// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Reduce @ 14ae7f020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FReduceInterfacesToHighestVersion::Reduce
          (FReduceInterfacesToHighestVersion *this,FFrontendQueryKey *param_1,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  ForElementType<Metasound::FFrontendQueryEntry> *pFVar1;
  int *piVar2;
  byte bVar3;
  ForElementType<Metasound::FFrontendQueryEntry> FVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  FMetasoundFrontendVersionNumber *pFVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  FMetasoundFrontendVersionNumber FVar11;
  ulonglong uVar12;
  longlong lVar13;
  ForElementType<Metasound::FFrontendQueryEntry> *pFVar14;
  uchar *puVar15;
  ForElementType<Metasound::FFrontendQueryEntry> FVar16;
  undefined1 auStackY_158 [32];
  undefined1 local_108 [8];
  ForElementType<Metasound::FFrontendQueryEntry> *local_100;
  FMetasoundFrontendVersionNumber local_f8;
  int *local_f0;
  ForElementType<Metasound::FFrontendQueryEntry> local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [144];
  byte local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_100 = (ForElementType<Metasound::FFrontendQueryEntry> *)0x0;
  local_e8 = (ForElementType<Metasound::FFrontendQueryEntry>)param_2;
  pFVar9 = FMetasoundFrontendVersionNumber::GetInvalid();
  FVar16 = (param_2->AllocatorInstance).SecondaryData;
  piVar2 = &param_2->ArrayNum;
  iVar8 = *piVar2;
  FVar11 = *pFVar9;
  if (FVar16 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    param_2 = (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
               *)FVar16;
  }
  puVar15 = (uchar *)((longlong)param_2 + 0xa0);
  pFVar14 = (ForElementType<Metasound::FFrontendQueryEntry> *)0x0;
  local_f8 = FVar11;
  local_f0 = piVar2;
  do {
    while( true ) {
      if (*piVar2 != iVar8) {
        local_108[0] = 0;
        `TCheckedPointerIterator<Metasound::FFrontendQueryEntry,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_108);
      }
      FVar16 = local_e8;
      piVar6 = local_f0;
      pFVar1 = (ForElementType<Metasound::FFrontendQueryEntry> *)(puVar15 + -0xa0);
      if (pFVar1 == (ForElementType<Metasound::FFrontendQueryEntry> *)
                    ((longlong)iVar8 * 0xb0 + (longlong)param_2)) {
        if (pFVar14 == (ForElementType<Metasound::FFrontendQueryEntry> *)0x0) {
          piVar2 = (int *)((longlong)local_e8 + 0xbc);
          FVar4 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)local_e8 + 0xb0);
          if (*piVar2 < 0) {
            FVar10 = local_e8;
            if (FVar4 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar10 = FVar4;
            }
            DestructItems<Metasound::FFrontendQueryEntry,int>
                      ((FFrontendQueryEntry *)FVar10,*local_f0);
            *piVar6 = 0;
            if (*piVar2 != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                        (0xb0,8,0,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar16,0,piVar2)
              ;
            }
          }
          else {
            if (FVar4 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar16 = FVar4;
            }
            DestructItems<Metasound::FFrontendQueryEntry,int>
                      ((FFrontendQueryEntry *)FVar16,*local_f0);
            *piVar6 = 0;
          }
        }
        else {
          local_40 = pFVar14->InlineData[0xa0];
          uVar12 = (ulonglong)local_40;
          local_e0 = *(undefined8 *)pFVar14->InlineData;
          uStack_d8 = *(undefined8 *)(pFVar14->InlineData + 8);
          if ((4 < local_40) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xec,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                      ::__l2::CopyConstructors)[uVar12])(local_d0,pFVar14->InlineData + 0x10);
          local_38 = *(undefined4 *)(pFVar14->InlineData + 0xa8);
          piVar2 = (int *)((longlong)FVar16 + 0xbc);
          FVar4 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar16 + 0xb0);
          if (*piVar2 < 0) {
            FVar10 = FVar16;
            if (FVar4 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar10 = FVar4;
            }
            DestructItems<Metasound::FFrontendQueryEntry,int>((FFrontendQueryEntry *)FVar10,*piVar6)
            ;
            *piVar6 = 0;
            if (*piVar2 != 0) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                        (0xb0,8,0,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar16,0,piVar2)
              ;
            }
          }
          else {
            FVar10 = FVar16;
            if (FVar4 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar10 = FVar4;
            }
            DestructItems<Metasound::FFrontendQueryEntry,int>((FFrontendQueryEntry *)FVar10,*piVar6)
            ;
            *piVar6 = 0;
          }
          FVar4 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar16 + 0xb0);
          FVar10 = FVar16;
          if (FVar4 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FVar10 = FVar4;
          }
          if ((ulonglong)FVar10 <= &local_e0) {
            FVar10 = FVar16;
            if (FVar4 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
              FVar10 = FVar4;
            }
            if ((&local_e0 < (undefined8 *)((longlong)*piVar2 * 0xb0 + (longlong)FVar10)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar8 = *piVar6;
          if (iVar8 == *piVar2) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                              (0x8b0,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar16,piVar2
                              );
            *piVar6 = iVar8;
          }
          *piVar6 = iVar8 + 1;
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar16 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FVar16 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar16 + 0xb0);
          }
          lVar13 = (longlong)iVar8 * 0xb0;
          *(undefined8 *)(lVar13 + (longlong)FVar16) = local_e0;
          ((undefined8 *)(lVar13 + (longlong)FVar16))[1] = uStack_d8;
          uVar12 = (ulonglong)local_40;
          *(byte *)(lVar13 + (longlong)FVar16 + 0xa0) = local_40;
          if ((4 < local_40) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xec,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                      ::__l2::CopyConstructors)[uVar12])(lVar13 + (longlong)FVar16 + 0x10,local_d0);
          *(undefined4 *)(lVar13 + 0xa8 + (longlong)FVar16) = local_38;
          uVar12 = (ulonglong)local_40;
          if ((4 < local_40) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar12])(local_d0);
        }
        return;
      }
      bVar3 = *puVar15;
      if ((4 < (ulonglong)bVar3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FMetasoundFrontendInterface,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar3) != '\0') break;
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5349767403691573088>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                         ,0xa0,"Entry.Value.IsType<FMetasoundFrontendInterface>()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_14ae7f141:
      puVar15 = puVar15 + 0xb0;
      pFVar14 = local_100;
    }
    if ((*puVar15 != 4) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(int *)(puVar15 + -0x48) <= FVar11.Major) &&
       ((*(int *)(puVar15 + -0x48) != FVar11.Major || (*(int *)(puVar15 + -0x44) <= local_f8.Minor))
       )) goto LAB_14ae7f141;
    FVar11 = *(FMetasoundFrontendVersionNumber *)(puVar15 + -0x48);
    puVar15 = puVar15 + 0xb0;
    pFVar14 = pFVar1;
    local_100 = pFVar1;
    local_f8 = FVar11;
  } while( true );
}

