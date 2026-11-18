// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// ExecuteStep @ 14ae708c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::FrontendQueryPrivate::FMapStepExecuter::ExecuteStep
          (FMapStepExecuter *this,FFrontendQueryEntry *param_1,
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<Metasound::FFrontendQueryEntry> FVar7;
  longlong lVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  ForElementType<Metasound::FFrontendQueryEntry> FVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  FFrontendQueryEntry *local_98;
  ForElementType<Metasound::FFrontendQueryEntry> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  FFrontendQueryKey local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  (**(code **)(**(longlong **)&this->field_0x8 + 8))
            (*(longlong **)&this->field_0x8,&local_68,param_1);
  uVar12 = (param_2->Pairs).ArrayNum;
  pFVar1 = (param_2->Pairs).AllocatorInstance.Data;
  uVar11 = 0;
  if (0 < (int)uVar12) {
    do {
      iVar6 = (uVar12 >> 1) + uVar11;
      bVar5 = Metasound::operator<((FFrontendQueryKey *)(pFVar1 + (longlong)iVar6 * 0xe0),&local_68)
      ;
      if (bVar5) {
        uVar11 = iVar6 + (uVar12 & 1);
      }
      uVar3 = uVar12 >> 1;
      uVar12 = uVar12 >> 1;
    } while (uVar3 != 0);
  }
  if ((int)uVar11 < (param_2->Pairs).ArrayNum) {
    lVar8 = (longlong)(int)uVar11 * 0xe0;
    bVar5 = Metasound::operator<
                      (&local_68,
                       (FFrontendQueryKey *)((param_2->Pairs).AllocatorInstance.Data + lVar8));
    if ((!bVar5) && (uVar11 != 0xffffffff)) {
      iVar6 = (param_2->Pairs).ArrayNum;
      uVar12 = 0;
      if ((int)uVar11 < iVar6) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_98 = (FFrontendQueryEntry *)(longlong)(int)uVar11;
        local_90 = (ForElementType<Metasound::FFrontendQueryEntry>)(longlong)iVar6;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
              ((longlong)(param_2->Pairs).AllocatorInstance.Data + lVar8 + 0x20);
      if (FVar9 != (ForElementType<Metasound::FFrontendQueryEntry>)0x0) goto LAB_14ae709cc;
    }
  }
  FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
          TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
          ::Emplace<Metasound::FFrontendQueryKey>(param_2,&local_68);
LAB_14ae709cc:
  FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
  FVar7 = FVar10;
  if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    FVar7 = FVar9;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = FVar10;
    if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
      FVar7 = FVar9;
    }
    if (param_1 < (FFrontendQueryEntry *)
                  ((longlong)FVar7 + (longlong)*(int *)((longlong)FVar9 + 0xbc) * 0xb0)) {
      local_80 = (longlong)*(int *)((longlong)FVar9 + 0xb8);
      local_78 = 0xb0;
      local_90 = FVar10;
      if (FVar10 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        local_90 = FVar9;
      }
      local_98 = param_1;
      local_88 = (longlong)*(int *)((longlong)FVar9 + 0xbc);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  iVar6 = *(int *)((longlong)FVar9 + 0xb8);
  if (iVar6 == *(int *)((longlong)FVar9 + 0xbc)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Metasound::FFrontendQueryEntry>_>
                      (0x8b0,(ForElementType<Metasound::FFrontendQueryEntry> *)FVar9,
                       (int *)((longlong)FVar9 + 0xbc));
  }
  *(int *)((longlong)FVar9 + 0xb8) = iVar6 + 1;
  uVar4 = *(undefined8 *)&(param_1->ID).C;
  FVar10 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
  if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) ==
      (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
    FVar10 = FVar9;
  }
  lVar8 = (longlong)iVar6 * 0xb0;
  *(undefined8 *)((longlong)FVar10 + lVar8) = *(undefined8 *)&param_1->ID;
  ((undefined8 *)((longlong)FVar10 + lVar8))[1] = uVar4;
  TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
  ::
  TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
            ((TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
              *)(lVar8 + 0x10 + (longlong)FVar10),&param_1->Value);
  *(float *)((longlong)FVar10 + 0xa8 + lVar8) = param_1->Score;
  if (3 < local_68.Key.TypeIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_68.Key.TypeIndex])(&local_68);
  return;
}

