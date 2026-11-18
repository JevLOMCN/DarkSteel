// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Reduce @ 14ae7e950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FReduceClassesToHighestVersion::Reduce
          (FReduceClassesToHighestVersion *this,FFrontendQueryKey *param_1,
          TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FMetasoundFrontendVersionNumber *pFVar7;
  ForElementType<Metasound::FFrontendQueryEntry> FVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForElementType<Metasound::FFrontendQueryEntry> FVar11;
  ForElementType<Metasound::FFrontendQueryEntry> FVar12;
  ForElementType<Metasound::FFrontendQueryEntry> FVar13;
  ForElementType<Metasound::FFrontendQueryEntry> FVar14;
  undefined1 auStackY_148 [32];
  undefined1 local_f8 [8];
  FMetasoundFrontendVersionNumber local_f0;
  ForElementType<Metasound::FFrontendQueryEntry> local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [144];
  byte local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FVar14 = (param_2->AllocatorInstance).SecondaryData;
  piVar1 = &param_2->ArrayNum;
  iVar5 = 1;
  FVar11 = (ForElementType<Metasound::FFrontendQueryEntry>)0x0;
  iVar6 = *piVar1;
  FVar8 = (ForElementType<Metasound::FFrontendQueryEntry>)param_2;
  if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    FVar8 = FVar14;
  }
  FVar12 = (ForElementType<Metasound::FFrontendQueryEntry>)
           ((longlong)iVar6 * 0xb0 + (longlong)FVar8);
  FVar14 = FVar11;
  local_e8 = (ForElementType<Metasound::FFrontendQueryEntry>)param_2;
  while( true ) {
    if (*piVar1 != iVar6) {
      local_f8[0] = 0;
      `TCheckedPointerIterator<Metasound::FFrontendQueryEntry,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_f8);
    }
    FVar13 = local_e8;
    if (FVar8 == FVar12) break;
    if ((*(uchar *)((longlong)FVar8 + 0xa0) != '\x02') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = FMetasoundFrontendClassMetadata::GetVersion
                       ((FMetasoundFrontendClassMetadata *)((longlong)FVar8 + 0x28));
    if (((FVar11 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) || (iVar5 < pFVar7->Major))
       || ((iVar5 == pFVar7->Major && (FVar14._0_4_ < pFVar7->Minor)))) {
      local_f0 = *pFVar7;
      iVar5 = local_f0.Major;
      FVar14 = (ForElementType<Metasound::FFrontendQueryEntry>)((ulonglong)local_f0 >> 0x20);
      FVar11 = FVar8;
    }
    FVar8 = (ForElementType<Metasound::FFrontendQueryEntry>)((longlong)FVar8 + 0xb0);
  }
  if (FVar11 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    local_40 = *(uchar *)((longlong)FVar11 + 0xa0);
    uVar9 = (ulonglong)local_40;
    local_e0 = *(undefined8 *)FVar11;
    uStack_d8 = *(undefined8 *)((longlong)FVar11 + 8);
    if ((4 < local_40) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xec,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[uVar9])(local_d0,(uchar *)((longlong)FVar11 + 0x10));
    local_38 = *(undefined4 *)((longlong)FVar11 + 0xa8);
    piVar2 = (int *)((longlong)FVar13 + 0xbc);
    FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar13 + 0xb0);
    if (*piVar2 < 0) {
      FVar8 = FVar13;
      if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar8 = FVar14;
      }
      DestructItems<Metasound::FFrontendQueryEntry,int>((FFrontendQueryEntry *)FVar8,*piVar1);
      *piVar1 = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                  (0xb0,8,0,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar13,0,piVar2);
      }
    }
    else {
      FVar8 = FVar13;
      if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar8 = FVar14;
      }
      DestructItems<Metasound::FFrontendQueryEntry,int>((FFrontendQueryEntry *)FVar8,*piVar1);
      *piVar1 = 0;
    }
    FVar14 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar13 + 0xb0);
    FVar8 = FVar13;
    if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      FVar8 = FVar14;
    }
    if ((ulonglong)FVar8 <= &local_e0) {
      FVar8 = FVar13;
      if (FVar14 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        FVar8 = FVar14;
      }
      if ((&local_e0 < (undefined8 *)((longlong)*piVar2 * 0xb0 + (longlong)FVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *piVar1;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                        (0x8b0,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar13,piVar2);
      *piVar1 = iVar6;
    }
    *piVar1 = iVar6 + 1;
    if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar13 + 0xb0) !=
        (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      FVar13 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar13 + 0xb0);
    }
    lVar10 = (longlong)iVar6 * 0xb0;
    *(undefined8 *)(lVar10 + (longlong)FVar13) = local_e0;
    ((undefined8 *)(lVar10 + (longlong)FVar13))[1] = uStack_d8;
    uVar9 = (ulonglong)local_40;
    *(byte *)(lVar10 + (longlong)FVar13 + 0xa0) = local_40;
    if ((4 < local_40) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xec,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[uVar9])(lVar10 + (longlong)FVar13 + 0x10,local_d0);
    *(undefined4 *)(lVar10 + 0xa8 + (longlong)FVar13) = local_38;
    uVar9 = (ulonglong)local_40;
    if ((4 < local_40) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(local_d0);
  }
  return;
}

