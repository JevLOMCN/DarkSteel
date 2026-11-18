// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// BeginMeasurement @ 1419e34f0

void __cdecl FStatsHierarchical::BeginMeasurement(char *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  LARGE_INTEGER local_res10 [3];
  char *local_18;
  DWORD DStack_10;
  undefined4 uStack_c;
  
  if (!bEnabled) {
    return;
  }
  if (Entries.ArrayNum == 0) {
    if (0xfffff < Entries.ArrayMax) goto LAB_1419e356b;
    uVar4 = 0x100000;
  }
  else {
    if (Entries.ArrayNum != Entries.ArrayMax) goto LAB_1419e356b;
    uVar4 = Entries.ArrayMax * 2;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 <= Entries.ArrayMax) goto LAB_1419e356b;
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,uVar4,&Entries.AllocatorInstance,Entries.ArrayNum,&Entries.ArrayMax);
LAB_1419e356b:
  QueryPerformanceCounter(local_res10);
  DStack_10 = local_res10[0].s.LowPart;
  local_18 = param_1;
  if (((Entries.AllocatorInstance.Data <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 <
       Entries.AllocatorInstance.Data + (longlong)Entries.ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (Entries.ArrayNum == Entries.ArrayMax) {
    Entries.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&Entries.AllocatorInstance,&Entries.ArrayMax);
  }
  pFVar1 = Entries.AllocatorInstance.Data + (longlong)Entries.ArrayNum * 0x10;
  Entries.ArrayNum = Entries.ArrayNum + 1;
  *(char **)pFVar1 = local_18;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_c,DStack_10);
  return;
}

// BeginMeasurements @ 1419e3660

void __cdecl FStatsHierarchical::BeginMeasurements(void)

{
  bEnabled = true;
  Entries.ArrayNum = 0;
  if ((Entries.ArrayMax < 0) && (Entries.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&Entries.AllocatorInstance,0,&Entries.ArrayMax);
  }
  return;
}

// DumpEntry @ 1419f02c0

void __cdecl
`FStatsHierarchical::DumpMeasurements'::__l2::Local::DumpEntry
          (FStatsTreeElement *param_1,FMessageLog *param_2,bool param_3,FString *param_4)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FMessageLog *local_res10;
  bool local_res18;
  FString local_108;
  FString local_f8;
  FText local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  TSharedRef<FTokenizedMessage,1> local_78 [4];
  
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_1 == (FStatsTreeElement *)0x0) {
    pFVar5 = (param_4->Data).AllocatorInstance.Data;
  }
  else {
    if (param_1->Name != (FName)0x0) {
      if ((param_1->Invocations == 0) &&
         (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4520621824010092454>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsHierarchical.cpp"
                             ,0x5a,"Invocations > 0"), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FText::FText(&local_e8);
      if (param_1->Invocations < 2) {
        ::FName::ToString(&param_1->Name,&local_c8);
        ::FString::PrintfImpl(&local_a8,L"%s %s %.03fms (1 run)");
        pFVar4 = FText::FromString(&local_88,&local_a8);
        FText::operator=(&local_e8,pFVar4);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      else {
        ::FName::ToString(&param_1->Name,&local_d8);
        ::FString::PrintfImpl(&local_b8,L"%s %s %.03fms (%d runs, %.03fms avg)");
        pFVar4 = FText::FromString(&local_98,&local_b8);
        FText::operator=(&local_e8,pFVar4);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
        local_c8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          local_c8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
        }
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      FMessageLog::Info(param_2,local_78,&local_e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78[0].SharedReferenceCount.ReferenceController);
      ::FString::ConcatFC(&local_108,param_4,L"---");
      if (param_4 != &local_108) {
        pFVar5 = (param_4->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (param_4->Data).AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
        (param_4->Data).ArrayNum = local_108.Data.ArrayNum;
        (param_4->Data).ArrayMax = local_108.Data.ArrayMax;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
    }
    iVar1 = (param_1->Children).ArrayNum;
    pFVar5 = (param_1->Children).AllocatorInstance.Data;
    pFVar7 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((param_1->Children).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar7) break;
      local_f8.Data.ArrayNum = (param_4->Data).ArrayNum;
      lVar6 = (longlong)local_f8.Data.ArrayNum;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      _Src = (param_4->Data).AllocatorInstance.Data;
      if (local_f8.Data.ArrayNum == 0) {
        local_f8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,
                   local_f8.Data.ArrayNum,&local_f8.Data.ArrayMax);
        memcpy(local_f8.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
      }
      DumpEntry(*(FStatsTreeElement **)pFVar5,local_res10,local_res18,&local_f8);
      pFVar5 = pFVar5 + 0x10;
    }
    pFVar5 = (param_4->Data).AllocatorInstance.Data;
  }
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return;
}

// DumpMeasurements @ 1419f23f0

void __cdecl FStatsHierarchical::DumpMeasurements(FMessageLog *param_1,bool param_2)

{
  FText *pFVar1;
  FString *pFVar2;
  FStatsTreeElement *pFVar3;
  TSharedRef<FTokenizedMessage,1> local_28;
  FText local_18;
  
  if (!bEnabled) {
    pFVar1 = FText::FromString(&local_18,L"----------------------------------------------");
    FMessageLog::Info(param_1,&local_28,pFVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    pFVar2 = ::FString::FString((FString *)&local_18,L"+");
    pFVar3 = ::`anonymous_namespace'::GetStatsHierarchicalLastMeasurement();
    `FStatsHierarchical::DumpMeasurements'::__l2::Local::DumpEntry(pFVar3,param_1,param_2,pFVar2);
  }
  return;
}

// EndMeasurement @ 1419f46d0

void __cdecl FStatsHierarchical::EndMeasurement(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  LARGE_INTEGER local_res8 [4];
  undefined8 local_18;
  DWORD DStack_10;
  undefined4 uStack_c;
  
  if (bEnabled) {
    QueryPerformanceCounter(local_res8);
    DStack_10 = local_res8[0].s.LowPart;
    local_18 = 0;
    if (((Entries.AllocatorInstance.Data <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 <
         Entries.AllocatorInstance.Data + (longlong)Entries.ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (Entries.ArrayNum == Entries.ArrayMax) {
      Entries.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&Entries.AllocatorInstance,&Entries.ArrayMax);
    }
    pFVar1 = Entries.AllocatorInstance.Data + (longlong)Entries.ArrayNum * 0x10;
    Entries.ArrayNum = Entries.ArrayNum + 1;
    *(undefined8 *)pFVar1 = local_18;
    *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_c,DStack_10);
  }
  return;
}

// EndMeasurements @ 1419f47d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FStatsTreeElement * __cdecl
FStatsHierarchical::EndMeasurements
          (FStatsTreeElement *__return_storage_ptr__,FStatsTreeElement *param_1,bool param_2)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  double dVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FStatsTreeElement *pFVar11;
  TTuple<FString,_public:_static_class_FStatsTreeElement___cdecl_FStatsHierarchical::EndMeasurements(FStatsTreeElement,bool)_::_2_::FTreeElementInfo>
  *pTVar12;
  FName *pFVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FStatsTreeElement *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  ForAnyElementType FVar23;
  uint uVar24;
  FString *this;
  TSharedPtr<FStatsTreeElement,1> *pTVar25;
  uint *puVar26;
  TReferenceControllerBase<1> *pTVar27;
  uint uVar28;
  uint uVar29;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar30 [16];
  undefined1 auStackY_508 [32];
  ForAnyElementType local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8;
  undefined1 local_4a7;
  undefined1 local_4a6;
  undefined1 local_4a5;
  char local_4a4;
  undefined1 local_4a3;
  undefined1 local_4a2;
  undefined1 local_4a1;
  undefined1 local_4a0 [8];
  FString local_498;
  FStatsTreeElement local_488;
  uint local_428;
  TReferenceControllerBase<1> *local_420;
  TReferenceControllerBase<1> *pTStack_418;
  FString local_410;
  TReferenceControllerBase<1> *local_400;
  TReferenceControllerBase<1> *pTStack_3f8;
  longlong *local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  uint uStack_3d8;
  uint uStack_3d4;
  undefined8 uStack_3d0;
  int local_3c8;
  undefined4 uStack_3c4;
  FString local_3c0;
  FString local_3b0;
  undefined8 local_3a0;
  DWORD DStack_398;
  undefined4 uStack_394;
  char *local_390;
  DWORD DStack_388;
  undefined4 uStack_384;
  FString local_380;
  FString local_370;
  FString local_360;
  FStatsTreeElement local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e8;
  FTreeElementInfo local_2c8;
  int local_268;
  int local_264;
  LARGE_INTEGER local_260;
  LARGE_INTEGER local_258;
  FName local_250;
  FStatsTreeElement *local_248;
  FStatsTreeElement *local_240;
  FString local_238;
  FString local_228;
  LARGE_INTEGER local_218;
  LARGE_INTEGER local_210;
  longlong *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  longlong *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  FString local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  FName local_140;
  TRangedForIterator local_138;
  undefined4 local_ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  undefined1 local_c8 [32];
  uint *local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  void *local_88;
  undefined4 local_80;
  ulonglong local_78;
  TReferenceControllerBase<1> *pTVar22;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_508;
  pTVar22 = (TReferenceControllerBase<1> *)0x0;
  bEnabled = false;
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  local_a8 = (uint *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_4a4 = param_2;
  local_248 = param_1;
  local_240 = __return_storage_ptr__;
  if ((param_1->Name == (FName)0x0) && (0 < (param_1->Children).ArrayNum)) {
    `FStatsHierarchical::EndMeasurements'::__l2::Local::InsertAllElementsToMap
              ((TMap<FString,_public:_static_class_FStatsTreeElement___cdecl_FStatsHierarchical::EndMeasurements(FStatsTreeElement,bool)_::_2_::FTreeElementInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,_public:_static_class_FStatsTreeElement___cdecl_FStatsHierarchical::EndMeasurements(FStatsTreeElement,bool)_::_2_::FTreeElementInfo,0>_>
                *)local_c8,param_1);
  }
  local_4b8.Data = (FScriptContainerElement *)0x0;
  local_4b0 = 0;
  pTVar27 = pTVar22;
  pTVar17 = pTVar22;
  if (0 < Entries.ArrayNum) {
    do {
      uVar10 = (uint)pTVar17;
      uVar20 = 0;
      if ((int)uVar10 < Entries.ArrayNum) {
        uVar20 = ~uVar10 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FStatsTreeElement *)(*pcVar3)();
        return pFVar11;
      }
      FVar23.Data = Entries.AllocatorInstance.Data;
      if (*(char **)(Entries.AllocatorInstance.Data + (longlong)&pTVar27->_padding_) == (char *)0x0)
      {
        if ((int)local_4b0 < 1) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4520621824010092154>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsHierarchical.cpp"
                             ,0x186,"Paths.Num() > 0");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FStatsTreeElement *)(*pcVar3)();
            return pFVar11;
          }
          if (((int)local_4b0 < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FStatsTreeElement *)(*pcVar3)();
            return pFVar11;
          }
        }
        lVar18 = (longlong)(int)local_4b0;
                    /* WARNING: Load size is inaccurate */
        FVar19.Data = local_4b8.Data[lVar18 * 0x10 + -0x10];
        *(undefined8 *)(local_4b8.Data + lVar18 * 0x10 + -0x10) = 0;
        local_370.Data.ArrayNum = *(int *)(local_4b8.Data + lVar18 * 0x10 + -8);
        local_370.Data.ArrayMax = *(int *)(local_4b8.Data + lVar18 * 0x10 + -4);
        *(undefined8 *)(local_4b8.Data + lVar18 * 0x10 + -8) = 0;
        iVar8 = (int)local_4b0 + -1;
        pFVar21 = local_4b8.Data + (longlong)iVar8 * 0x10;
        local_370.Data.AllocatorInstance.Data = FVar19.Data;
        if (*(void **)pFVar21 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar21);
        }
        iVar9 = ((int)local_4b0 - iVar8) + -1;
        iVar8 = (int)local_4b0;
        if (iVar9 != 0) {
          memmove(pFVar21,pFVar21 + 0x10,(longlong)iVar9 << 4);
          iVar8 = (int)local_4b0;
        }
        local_4b0 = CONCAT44(local_4b0._4_4_,iVar8 + -1);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&local_4b8,iVar8 + -1,(int *)((longlong)&local_4b0 + 4));
        pTVar12 = TSet<TTuple<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo>,TDefaultMapHashableKeyFuncs<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo,0>,FDefaultSetAllocator>
                  ::Find(local_c8,&local_370);
        if ((pTVar12 ==
             (TTuple<FString,_public:_static_class_FStatsTreeElement___cdecl_FStatsHierarchical::EndMeasurements(FStatsTreeElement,bool)_::_2_::FTreeElementInfo>
              *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FStatsTreeElement *)(*pcVar3)();
          return pFVar11;
        }
        *(int *)&pTVar12->field_0x2c =
             *(int *)&pTVar12->field_0x2c +
             (*(int *)(FVar23.Data + (longlong)&(pTVar27->SharedReferenceCount).field_0x0) -
             *(int *)&pTVar12->field_0x68);
        *(int *)&pTVar12->field_0x28 = *(int *)&pTVar12->field_0x28 + 1;
      }
      else {
        ::FString::FString(&local_410,
                           *(char **)(Entries.AllocatorInstance.Data + (longlong)&pTVar27->_padding_
                                     ));
        iVar8 = iswalpha(0x2e);
        if (iVar8 == 0) {
          ::FString::ReplaceCharInlineCaseSensitive(&local_410,L'.',L'_');
        }
        else {
          ::FString::ReplaceCharInlineIgnoreCase(&local_410,L'.',L'_');
        }
        local_498.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_498.Data.ArrayNum = 0;
        local_498.Data.ArrayMax = 0;
        if ((int)local_4b0 < 1) {
          uVar20 = local_410.Data.ArrayNum - 1;
          if (local_410.Data.ArrayNum == 0) {
            uVar20 = 0;
          }
          ::FString::AssignRange(&local_498,(wchar_t *)local_410.Data.AllocatorInstance.Data,uVar20)
          ;
        }
        else {
          uVar20 = 0;
          if ((int)((int)local_4b0 - 1U) < (int)local_4b0) {
            uVar20 = ~((int)local_4b0 - 1U) >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FStatsTreeElement *)(*pcVar3)();
            return pFVar11;
          }
          ::FString::PrintfImpl(&local_3b0,L"%s.%s");
          if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_498.Data.AllocatorInstance.Data);
          }
          local_498.Data.AllocatorInstance.Data = local_3b0.Data.AllocatorInstance.Data;
          local_498.Data.ArrayNum = local_3b0.Data.ArrayNum;
          local_498.Data.ArrayMax = local_3b0.Data.ArrayMax;
          local_3b0.Data.ArrayNum = 0;
          local_3b0.Data.ArrayMax = 0;
          local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        pTVar12 = TSet<TTuple<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo>,TDefaultMapHashableKeyFuncs<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo,0>,FDefaultSetAllocator>
                  ::Find(local_c8,&local_498);
        pTVar17 = (TReferenceControllerBase<1> *)&pTVar12->field_0x10;
        if (pTVar12 ==
            (TTuple<FString,_public:_static_class_FStatsTreeElement___cdecl_FStatsHierarchical::EndMeasurements(FStatsTreeElement,bool)_::_2_::FTreeElementInfo>
             *)0x0) {
          pTVar17 = pTVar22;
        }
        if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
          local_2c8.Element.RatioAgainstTotalInclusive = 0.0;
          local_2c8.Element.Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_190 = 0;
          local_2c8.Element.Path.Data.ArrayNum = 0;
          local_2c8.Element.Path.Data.ArrayMax = 0;
          uStack_188 = 0;
          local_2c8.Element.RatioAgainstMaximumExclusive = 0.0;
          local_2c8.Element.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c8.Element.Children.ArrayNum = 0;
          local_2c8.Element.Children.ArrayMax = 0;
          local_198 = 0;
          local_180 = 0;
          local_178 = 0;
          local_170 = 0;
          uStack_168 = 0;
          local_2c8.Element.Name.ComparisonIndex.Value = 0;
          local_2c8.Element.Name.Number = 0;
          local_160 = 0;
          uStack_158 = 0;
          local_2c8.Element.Invocations = 0;
          local_2c8.Element.Cycles = 0;
          local_2c8.Element.CyclesOfChildren = 0;
          local_2c8.Element.RatioAgainstTotalExclusive = 0.0;
          local_2c8.Element.RatioAgainstMaximumInclusive = 0.0;
          DestructItems<TSharedPtr<FStatsTreeElement,1>,int>
                    ((TSharedPtr<FStatsTreeElement,1> *)0x0,0);
          if (local_2c8.Element.Children.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Element.Children.AllocatorInstance.Data);
          }
          local_2c8.Element.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_150 = 0;
          local_2c8.Element.Children.ArrayNum = 0;
          local_2c8.Element.Children.ArrayMax = 0;
          local_148 = 0;
          DestructItems<TSharedPtr<FStatsTreeElement,1>,int>
                    ((TSharedPtr<FStatsTreeElement,1> *)0x0,0);
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_410.Data.ArrayNum != 0) {
            FVar19.Data = local_410.Data.AllocatorInstance.Data;
          }
          pFVar13 = ::FName::FName(&local_140,(wchar_t *)FVar19.Data);
          local_2c8.Element.Name = *pFVar13;
          uVar20 = local_498.Data.ArrayNum - 1;
          if (local_498.Data.ArrayNum == 0) {
            uVar20 = 0;
          }
          ::FString::AssignRange
                    (&local_2c8.Element.Path,(wchar_t *)local_498.Data.AllocatorInstance.Data,uVar20
                    );
          local_2c8.BeginCycles =
               *(uint *)(FVar23.Data + (longlong)&(pTVar27->SharedReferenceCount).field_0x0);
          TMapBase<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo,0>_>
          ::
          Emplace<FString_const_&,_FStatsHierarchical::EndMeasurements_::__l2::FTreeElementInfo_const_&>
                    (local_c8,&local_498,&local_2c8);
          DestructItems<TSharedPtr<FStatsTreeElement,1>,int>
                    ((TSharedPtr<FStatsTreeElement,1> *)
                     local_2c8.Element.Children.AllocatorInstance.Data,
                     local_2c8.Element.Children.ArrayNum);
          if ((TSharedPtr<FStatsTreeElement,1> *)local_2c8.Element.Children.AllocatorInstance.Data
              != (TSharedPtr<FStatsTreeElement,1> *)0x0) {
            FMemory::Free(local_2c8.Element.Children.AllocatorInstance.Data);
          }
          if (local_2c8.Element.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_2c8.Element.Path.Data.AllocatorInstance.Data);
          }
        }
        else {
          pTVar17[5].SharedReferenceCount =
               *(atomic<int> *)(FVar23.Data + (longlong)&(pTVar27->SharedReferenceCount).field_0x0);
        }
        if (((local_4b8.Data <= (FScriptContainerElement *)&local_498) &&
            ((FScriptContainerElement *)&local_498 <
             local_4b8.Data + (longlong)local_4b0._4_4_ * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FStatsTreeElement *)(*pcVar3)();
          return pFVar11;
        }
        iVar8 = (int)local_4b0;
        if ((int)local_4b0 == local_4b0._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_4b8,(int *)((longlong)&local_4b0 + 4));
        }
        local_4b0 = CONCAT44(local_4b0._4_4_,iVar8 + 1);
        ::FString::FString((FString *)(local_4b8.Data + (longlong)iVar8 * 0x10),&local_498);
        FVar19.Data = local_410.Data.AllocatorInstance.Data;
        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
          FVar19.Data = local_410.Data.AllocatorInstance.Data;
        }
      }
      if (FVar19.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar19.Data);
      }
      pTVar27 = pTVar27 + 1;
      pTVar17 = (TReferenceControllerBase<1> *)(ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < Entries.ArrayNum);
    if (((int)local_4b0 != 0) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4520621824010092142>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsHierarchical.cpp"
                           ,0x192,"Paths.Num() == 0"), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FStatsTreeElement *)(*pcVar3)();
      return pFVar11;
    }
  }
  local_2e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
  local_488.Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488.Path.Data.ArrayNum = 0;
  local_488.Path.Data.ArrayMax = 0;
  local_488.RatioAgainstTotalInclusive = 0.0;
  local_488.RatioAgainstMaximumExclusive = 0.0;
  local_488.Name.ComparisonIndex.Value = 0;
  local_488.Name.Number = 0;
  local_488.Invocations = 0;
  local_488.Cycles = 0;
  local_488.CyclesOfChildren = 0;
  local_488.RatioAgainstTotalExclusive = 0.0;
  local_488.RatioAgainstMaximumInclusive = 0.0;
  local_488.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488.Children.ArrayNum = 0;
  local_488.Children.ArrayMax = 0;
  local_2e8._padding_._0_4_ = 0;
  local_2e8._padding_._4_4_ = 1;
  local_2e8.UnvisitedBitMask = 0xffffffff;
  local_2e8.CurrentBitIndex = 0;
  local_2e8.BaseBitIndex = 0;
  if (local_a0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e8);
  }
  uStack_3e8 = CONCAT44(local_2e8._padding_._4_4_,(undefined4)local_2e8._padding_);
  local_3f0 = (longlong *)local_c8;
  uStack_3d4 = local_2e8.CurrentBitIndex;
  uStack_3d8 = local_2e8.UnvisitedBitMask;
  uStack_3d0._4_4_ = local_2e8._28_4_;
  uStack_3d0._0_4_ = local_2e8.BaseBitIndex;
  local_3c8 = local_c8._8_4_ - local_94;
  uStack_3e0 = local_2e8.Array;
  uStack_1e0 = CONCAT44(uStack_3c4,local_3c8);
  TStack_200.Array = local_2e8.Array;
  local_208 = local_3f0;
  TStack_200._padding_ = uStack_3e8;
  TStack_200._16_8_ = _uStack_3d8;
  TStack_200._24_8_ = uStack_3d0;
  pTVar14 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_e8,(TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),local_a0)
  ;
  local_3f0 = (longlong *)local_c8;
  uStack_3e8 = pTVar14->_padding_;
  pTVar5 = pTVar14->Array;
  uStack_3d8 = pTVar14->UnvisitedBitMask;
  uStack_3d4 = pTVar14->CurrentBitIndex;
  uStack_3d0 = *(longlong *)&pTVar14->BaseBitIndex;
  local_3c8 = local_c8._8_4_ - local_94;
  uStack_3e0._0_4_ = SUB84(pTVar5,0);
  uStack_3e0._4_4_ = (undefined4)((ulonglong)pTVar5 >> 0x20);
  local_138._44_4_ = uStack_3c4;
  local_138.InitialNum = local_3c8;
  local_138._padding_._0_4_ = (undefined4)uStack_3e0;
  local_138._padding_._4_4_ = uStack_3e0._4_4_;
  local_138._padding_._0_4_ = uStack_3d8;
  local_138._padding_._4_4_ = uStack_3d4;
  uStack_3e0 = pTVar5;
  local_138._padding_ = (longlong)local_3f0;
  local_138._padding_ = uStack_3e8;
  local_138._padding_ = uStack_3d0;
  bVar7 = TSparseArray<TSparseSetElement<TTuple<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!=(&local_208,&local_138);
  pTVar17 = _UNK_150651568;
  pTVar27 = ___xmm_00000000000000000000000000000010;
  if (bVar7) {
    do {
      local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.Data.ArrayNum = 0;
      local_380.Data.ArrayMax = 0;
      local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this = (FString *)((longlong)TStack_200.CurrentBitIndex * 0x78 + *local_208);
      local_360.Data.ArrayNum = 0;
      local_360.Data.ArrayMax = 0;
      ::FString::FString(&local_1a8,L".");
      ::FString::Split(this,&local_1a8,&local_380,&local_360,IgnoreCase,FromEnd);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      pFVar11 = FStatsTreeElement::FindChild(&local_488,&local_380);
      if ((pFVar11 == (FStatsTreeElement *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsHierarchical.cpp"
                             ,0x19b,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FStatsTreeElement *)(*pcVar3)();
        return pFVar11;
      }
      pTVar15 = ::operator_new(0x68);
      if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
        local_400 = pTVar27;
        pTStack_3f8 = pTVar17;
        pTVar15 = pTVar22;
      }
      else {
        pTVar15->SharedReferenceCount = (atomic<int>)0x1;
        pTVar15->WeakReferenceCount = (atomic<int>)0x1;
        pTVar15->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFStatsTreeElement___00_SharedPointerInternals__6B_
        ;
        FStatsTreeElement::FStatsTreeElement
                  ((FStatsTreeElement *)(pTVar15 + 1),(FStatsTreeElement *)(this + 1));
        if ((pTVar15 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FStatsTreeElement *)(*pcVar3)();
          return pFVar11;
        }
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
        local_400 = pTVar15 + 1;
        pTStack_3f8 = pTVar15;
      }
      pFVar21 = (pFVar11->Children).AllocatorInstance.Data;
      if (((pFVar21 <= (FScriptContainerElement *)&local_400) &&
          ((FScriptContainerElement *)&local_400 <
           pFVar21 + (longlong)(pFVar11->Children).ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FStatsTreeElement *)(*pcVar3)();
        return pFVar11;
      }
      iVar8 = (pFVar11->Children).ArrayNum;
      piVar1 = &(pFVar11->Children).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pFVar11->Children).AllocatorInstance,piVar1);
      }
      (pFVar11->Children).ArrayNum = iVar8 + 1;
      pFVar21 = (pFVar11->Children).AllocatorInstance.Data;
      *(TReferenceControllerBase<1> **)(pFVar21 + (longlong)iVar8 * 0x10) = local_400;
      *(TReferenceControllerBase<1> **)(pFVar21 + (longlong)iVar8 * 0x10 + 8) = pTStack_3f8;
      pTStack_3f8 = (TReferenceControllerBase<1> *)0x0;
      local_400 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_360.Data.AllocatorInstance.Data);
      }
      if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.Data.AllocatorInstance.Data);
      }
      TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
      bVar7 = TSparseArray<TSparseSetElement<TTuple<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!=(&local_208,&local_138);
    } while (bVar7);
  }
  local_488.Invocations = 1;
  Entries.ArrayNum = 0;
  if ((Entries.ArrayMax < 0) && (Entries.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&Entries.AllocatorInstance,0,&Entries.ArrayMax);
  }
  bEnabled = true;
  QueryPerformanceCounter(&local_260);
  do {
    if (bEnabled != false) {
      if (Entries.ArrayNum == 0) {
        if (Entries.ArrayMax < 0x100000) {
          uVar20 = 0x100000;
LAB_1419f52d7:
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar20,&Entries.AllocatorInstance,Entries.ArrayNum,&Entries.ArrayMax);
        }
      }
      else if (Entries.ArrayNum == Entries.ArrayMax) {
        uVar20 = Entries.ArrayMax * 2;
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
        }
        if (Entries.ArrayMax < (int)uVar20) goto LAB_1419f52d7;
      }
      QueryPerformanceCounter(&local_258);
      DStack_388 = local_258.s.LowPart;
      local_390 = "FStatsHierarchical::EndMeasurements";
      if (((Entries.AllocatorInstance.Data <= (FScriptContainerElement *)&local_390) &&
          ((FScriptContainerElement *)&local_390 <
           Entries.AllocatorInstance.Data + (longlong)Entries.ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FStatsTreeElement *)(*pcVar3)();
        return pFVar11;
      }
      if (Entries.ArrayNum == Entries.ArrayMax) {
        Entries.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&Entries.AllocatorInstance,&Entries.ArrayMax);
      }
      pFVar21 = Entries.AllocatorInstance.Data + (longlong)Entries.ArrayNum * 0x10;
      Entries.ArrayNum = Entries.ArrayNum + 1;
      *(char **)pFVar21 = local_390;
      *(ulonglong *)(pFVar21 + 8) = CONCAT44(uStack_384,DStack_388);
      if (bEnabled != false) {
        QueryPerformanceCounter(&local_210);
        DStack_398 = local_210.s.LowPart;
        local_3a0 = 0;
        if (((Entries.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3a0) &&
            ((FScriptContainerElement *)&local_3a0 <
             Entries.AllocatorInstance.Data + (longlong)Entries.ArrayMax * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FStatsTreeElement *)(*pcVar3)();
          return pFVar11;
        }
        if (Entries.ArrayNum == Entries.ArrayMax) {
          Entries.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&Entries.AllocatorInstance,&Entries.ArrayMax);
        }
        pFVar21 = Entries.AllocatorInstance.Data + (longlong)Entries.ArrayNum * 0x10;
        Entries.ArrayNum = Entries.ArrayNum + 1;
        *(undefined8 *)pFVar21 = local_3a0;
        *(ulonglong *)(pFVar21 + 8) = CONCAT44(uStack_394,DStack_398);
      }
    }
    uVar20 = (int)pTVar22 + 1;
    pTVar22 = (TReferenceControllerBase<1> *)(ulonglong)uVar20;
  } while ((int)uVar20 < 100000);
  QueryPerformanceCounter(&local_218);
  Entries.ArrayNum = 0;
  if ((Entries.ArrayMax < 0) && (Entries.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&Entries.AllocatorInstance,0,&Entries.ArrayMax);
  }
  bEnabled = false;
  dVar4 = (double)(local_218.s.LowPart - local_260._0_4_) * __real_3ee4f8b588e368f1;
  if (__real_3e45798ee0000000 < dVar4) {
    if (local_488.Cycles != 0) {
      uVar20 = local_488.Invocations;
      uVar10 = FStatsTreeElement::Num(&local_488,true);
      auVar30._8_8_ = 0;
      auVar30._0_8_ = (double)(uVar10 - uVar20) * dVar4 + __real_3feff7ced916872b;
      auVar30 = roundpd(extraout_XMM0,auVar30,1);
      uVar20 = (uint)(longlong)auVar30._0_8_;
      if (local_488.Cycles < uVar20) {
        local_488._24_8_ = local_488._24_8_ & 0xffffffff;
      }
      else {
        local_488.Cycles = local_488.Cycles - uVar20;
      }
    }
    iVar8 = local_488.Children.ArrayNum;
    pTVar25 = (TSharedPtr<FStatsTreeElement,1> *)
              (local_488.Children.AllocatorInstance.Data +
              (longlong)local_488.Children.ArrayNum * 0x10);
    FVar23.Data = local_488.Children.AllocatorInstance.Data;
    while( true ) {
      if (local_488.Children.ArrayNum != iVar8) {
        local_4a8 = 0;
        `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_4a8);
      }
      if ((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data == pTVar25) break;
      if (((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data)->Object != (FStatsTreeElement *)0x0) {
        `FStatsTreeElement::UpdatePostMeasurement'::__l2::Local::RemoveCyclesForTimers
                  (((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data)->Object,dVar4);
      }
      FVar23.Data = FVar23.Data + 0x10;
    }
  }
  iVar8 = local_488.Children.ArrayNum;
  if (0 < local_488.Children.ArrayNum) {
    pTVar25 = (TSharedPtr<FStatsTreeElement,1> *)
              (local_488.Children.AllocatorInstance.Data +
              (longlong)local_488.Children.ArrayNum * 0x10);
    local_488.CyclesOfChildren = 0;
    FVar23.Data = local_488.Children.AllocatorInstance.Data;
    while( true ) {
      if (local_488.Children.ArrayNum != iVar8) {
        local_4a7 = 0;
        `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_4a7);
      }
      if ((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data == pTVar25) break;
      pFVar11 = ((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data)->Object;
      if (pFVar11 != (FStatsTreeElement *)0x0) {
        local_488.CyclesOfChildren = local_488.CyclesOfChildren + pFVar11->Cycles;
        `FStatsTreeElement::UpdatePostMeasurement'::__l2::Local::ComputeChildrenCycles(pFVar11);
      }
      FVar23.Data = FVar23.Data + 0x10;
    }
  }
  uVar20 = FStatsTreeElement::MaxCycles(&local_488,true);
  uVar10 = FStatsTreeElement::MaxCycles(&local_488,false);
  local_488.RatioAgainstTotalExclusive = 0.0;
  local_488.RatioAgainstMaximumInclusive = 0.0;
  local_488.RatioAgainstTotalInclusive = 0.0;
  local_488.RatioAgainstMaximumExclusive = 0.0;
  if (uVar20 != 0) {
    local_488.RatioAgainstMaximumInclusive = (double)local_488.Cycles / (double)uVar20;
  }
  if (uVar10 != 0) {
    local_488.RatioAgainstMaximumExclusive = (double)local_488.Cycles / (double)uVar10;
  }
  iVar8 = local_488.Children.ArrayNum;
  uVar24 = 0;
  uVar28 = 0;
  pTVar25 = (TSharedPtr<FStatsTreeElement,1> *)
            (local_488.Children.AllocatorInstance.Data +
            (longlong)local_488.Children.ArrayNum * 0x10);
  FVar23.Data = local_488.Children.AllocatorInstance.Data;
  while( true ) {
    if (local_488.Children.ArrayNum != iVar8) {
      local_4a6 = 0;
      `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_4a6);
    }
    if ((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data == pTVar25) break;
    pFVar11 = ((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data)->Object;
    if (pFVar11 != (FStatsTreeElement *)0x0) {
      uVar29 = pFVar11->Cycles;
      uVar28 = uVar28 + uVar29;
      iVar9 = 0;
      if (pFVar11->CyclesOfChildren <= uVar29) {
        iVar9 = uVar29 - pFVar11->CyclesOfChildren;
      }
      uVar24 = uVar24 + iVar9;
    }
    FVar23.Data = FVar23.Data + 0x10;
  }
  iVar8 = local_488.Children.ArrayNum;
  pTVar25 = (TSharedPtr<FStatsTreeElement,1> *)
            (local_488.Children.AllocatorInstance.Data +
            (longlong)local_488.Children.ArrayNum * 0x10);
  FVar23.Data = local_488.Children.AllocatorInstance.Data;
  while( true ) {
    if (local_488.Children.ArrayNum != iVar8) {
      local_4a5 = 0;
      `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_4a5);
    }
    uVar29 = local_a0;
    if ((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data == pTVar25) break;
    if (((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data)->Object != (FStatsTreeElement *)0x0) {
      `FStatsTreeElement::UpdatePostMeasurement'::__l2::Local::UpdateRatios
                (((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data)->Object,uVar28,uVar24,uVar20,
                 uVar10);
    }
    FVar23.Data = FVar23.Data + 0x10;
  }
  if (local_4a4 != '\0') {
    uVar10 = 0;
    uVar24 = 1;
    uVar20 = 0;
    uStack_3d4 = uVar10;
    if (local_a0 != 0) {
      puVar26 = (uint *)(local_c8 + 0x10);
      if (local_a8 != (uint *)0x0) {
        puVar26 = local_a8;
      }
      uVar28 = *puVar26;
      uVar20 = 0;
      uVar10 = 0;
      while (uVar28 == 0) {
        lVar18 = (longlong)(int)uVar10;
        uVar20 = uVar20 + 0x20;
        uVar10 = uVar10 + 1;
        uStack_3d4 = local_a0;
        if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
        goto LAB_1419f57c4;
        uVar28 = (puVar26 + 1)[lVar18];
      }
      uVar24 = ~(uVar28 - 1) & uVar28;
      uVar2 = (ulonglong)uVar24 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_268 = (int)lVar18;
      uStack_3d4 = local_268 + -1 + uVar20;
      if ((int)local_a0 < (int)uStack_3d4) {
        uStack_3d4 = local_a0;
      }
    }
LAB_1419f57c4:
    local_3f0 = (longlong *)local_c8;
    uStack_3e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10);
    local_3c8 = local_c8._8_4_ - local_94;
    uVar28 = local_a0 & 0xffffffe0;
    uStack_3d8 = 0xffffffff;
    local_428 = -1 << ((byte)local_a0 & 0x1f);
    uStack_3e8 = CONCAT44(uVar24,uVar10);
    uStack_3d0 = CONCAT44(local_ec,uVar20);
    TStack_1d0._padding_ = uStack_3e8;
    iVar8 = (int)local_a0 >> 5;
    uStack_1b0 = CONCAT44(uStack_3c4,local_3c8);
    TStack_1d0.UnvisitedBitMask = 0xffffffff;
    TStack_1d0.CurrentBitIndex = uStack_3d4;
    TStack_1d0._24_8_ = uStack_3d0;
    local_1d8 = local_3f0;
    TStack_1d0.Array = uStack_3e0;
    if (((int)local_a0 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FStatsTreeElement *)(*pcVar3)();
      return pFVar11;
    }
    if (uVar29 != local_a0) {
      puVar26 = (uint *)(local_c8 + 0x10);
      if (local_a8 != (uint *)0x0) {
        puVar26 = local_a8;
      }
      uVar20 = local_428 & puVar26[iVar8];
      while (uVar20 == 0) {
        lVar18 = (longlong)iVar8;
        uVar28 = uVar28 + 0x20;
        iVar8 = iVar8 + 1;
        uVar29 = local_a0;
        if ((int)((local_a0 - 1) + ((int)(local_a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_1419f5900;
        uVar20 = (puVar26 + 1)[lVar18];
      }
      uVar2 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_264 = (int)lVar18;
      uVar29 = local_264 + -1 + uVar28;
      if ((int)local_a0 < (int)uVar29) {
        uVar29 = local_a0;
      }
    }
LAB_1419f5900:
    while( true ) {
      plVar6 = local_1d8;
      pTVar22 = (TReferenceControllerBase<1> *)0x0;
      if ((int)local_1d8[1] - *(int *)((longlong)local_1d8 + 0x34) != (int)uStack_1b0) {
        local_4a3 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4a3);
      }
      uVar20 = 0;
      if (((TStack_1d0.CurrentBitIndex == uVar29) &&
          (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10))) &&
         (plVar6 == (longlong *)local_c8)) break;
      pFVar11 = FStatsTreeElement::FindChild
                          (&local_488,
                           (FString *)((longlong)TStack_1d0.CurrentBitIndex * 0x78 + *plVar6));
      if ((pFVar11 == (FStatsTreeElement *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Element",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsHierarchical.cpp"
                             ,0x1b7,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FStatsTreeElement *)(*pcVar3)();
        return pFVar11;
      }
      if ((pFVar11->Children).ArrayNum != 0) {
        if ((pFVar11->CyclesOfChildren < pFVar11->Cycles) &&
           (dVar4 < (double)(pFVar11->Cycles - pFVar11->CyclesOfChildren))) {
          local_348.RatioAgainstTotalInclusive = 0.0;
          local_348.Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_348.Path.Data.ArrayNum = 0;
          local_348.Path.Data.ArrayMax = 0;
          local_348.RatioAgainstMaximumExclusive = 0.0;
          local_348.Invocations = 0;
          local_348.Cycles = 0;
          local_348.CyclesOfChildren = 0;
          local_348.RatioAgainstTotalExclusive = 0.0;
          local_348.RatioAgainstMaximumInclusive = 0.0;
          local_348.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_348.Children.ArrayNum = 0;
          local_348.Children.ArrayMax = 0;
          ::FName::FName(&local_250,L"__UNTRACKED__");
          local_348.Name = local_250;
          ::FName::ToString(&local_348.Name,&local_228);
          ::FString::FString(&local_238,&pFVar11->Path);
          ::FString::PrintfImpl(&local_3c0,L"%s.%s");
          if (local_348.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Path.Data.AllocatorInstance.Data);
          }
          local_348.Path.Data.AllocatorInstance.Data = local_3c0.Data.AllocatorInstance.Data;
          local_348.Path.Data.ArrayNum = local_3c0.Data.ArrayNum;
          local_348.Path.Data.ArrayMax = local_3c0.Data.ArrayMax;
          local_3c0.Data.ArrayNum = 0;
          local_3c0.Data.ArrayMax = 0;
          local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          local_348.Cycles = pFVar11->Cycles - pFVar11->CyclesOfChildren;
          local_348.Invocations = 1;
          pTVar15 = ::operator_new(0x68);
          if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
            local_420 = pTVar27;
            pTStack_418 = pTVar17;
          }
          else {
            pTVar15->SharedReferenceCount = (atomic<int>)0x1;
            pTVar15->WeakReferenceCount = (atomic<int>)0x1;
            pTVar15->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFStatsTreeElement___00_SharedPointerInternals__6B_
            ;
            FStatsTreeElement::FStatsTreeElement((FStatsTreeElement *)(pTVar15 + 1),&local_348);
            if ((pTVar15 + 1 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              pFVar11 = (FStatsTreeElement *)(*pcVar3)();
              return pFVar11;
            }
            LOCK();
            pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
            UNLOCK();
            pTVar22 = pTVar15;
            local_420 = pTVar15 + 1;
            pTStack_418 = pTVar15;
          }
          pFVar21 = (pFVar11->Children).AllocatorInstance.Data;
          if (((pFVar21 <= (FScriptContainerElement *)&local_420) &&
              ((FScriptContainerElement *)&local_420 <
               pFVar21 + (longlong)(pFVar11->Children).ArrayMax * 0x10)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FStatsTreeElement *)(*pcVar3)();
            return pFVar11;
          }
          iVar8 = (pFVar11->Children).ArrayNum;
          piVar1 = &(pFVar11->Children).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(pFVar11->Children).AllocatorInstance,piVar1);
          }
          (pFVar11->Children).ArrayNum = iVar8 + 1;
          pFVar21 = (pFVar11->Children).AllocatorInstance.Data;
          *(TReferenceControllerBase<1> **)(pFVar21 + (longlong)iVar8 * 0x10) = local_420;
          *(TReferenceControllerBase<1> **)(pFVar21 + (longlong)iVar8 * 0x10 + 8) = pTStack_418;
          pTStack_418 = (TReferenceControllerBase<1> *)0x0;
          local_420 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar22);
          DestructItems<TSharedPtr<FStatsTreeElement,1>,int>
                    ((TSharedPtr<FStatsTreeElement,1> *)local_348.Children.AllocatorInstance.Data,
                     local_348.Children.ArrayNum);
          if ((TSharedPtr<FStatsTreeElement,1> *)local_348.Children.AllocatorInstance.Data !=
              (TSharedPtr<FStatsTreeElement,1> *)0x0) {
            FMemory::Free(local_348.Children.AllocatorInstance.Data);
          }
          if (local_348.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Path.Data.AllocatorInstance.Data);
          }
        }
      }
      TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
    }
    iVar8 = local_488.Children.ArrayNum;
    if (0 < local_488.Children.ArrayNum) {
      pTVar25 = (TSharedPtr<FStatsTreeElement,1> *)
                (local_488.Children.AllocatorInstance.Data +
                (longlong)local_488.Children.ArrayNum * 0x10);
      local_488.CyclesOfChildren = 0;
      FVar23.Data = local_488.Children.AllocatorInstance.Data;
      while( true ) {
        if (local_488.Children.ArrayNum != iVar8) {
          local_4a2 = 0;
          `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_4a2);
        }
        if ((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data == pTVar25) break;
        pFVar11 = ((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data)->Object;
        if (pFVar11 != (FStatsTreeElement *)0x0) {
          local_488.CyclesOfChildren = local_488.CyclesOfChildren + pFVar11->Cycles;
          `FStatsTreeElement::UpdatePostMeasurement'::__l2::Local::ComputeChildrenCycles(pFVar11);
        }
        FVar23.Data = FVar23.Data + 0x10;
      }
    }
    uVar10 = FStatsTreeElement::MaxCycles(&local_488,true);
    uVar24 = FStatsTreeElement::MaxCycles(&local_488,false);
    local_488.RatioAgainstTotalExclusive = 0.0;
    local_488.RatioAgainstMaximumInclusive = 0.0;
    local_488.RatioAgainstTotalInclusive = 0.0;
    local_488.RatioAgainstMaximumExclusive = 0.0;
    if (uVar10 != 0) {
      local_488.RatioAgainstMaximumInclusive = (double)local_488.Cycles / (double)uVar10;
    }
    if (uVar24 != 0) {
      local_488.RatioAgainstMaximumExclusive = (double)local_488.Cycles / (double)uVar24;
    }
    iVar8 = local_488.Children.ArrayNum;
    pTVar25 = (TSharedPtr<FStatsTreeElement,1> *)
              (local_488.Children.AllocatorInstance.Data +
              (longlong)local_488.Children.ArrayNum * 0x10);
    FVar23.Data = local_488.Children.AllocatorInstance.Data;
    while( true ) {
      if (local_488.Children.ArrayNum != iVar8) {
        local_4a1 = 0;
        `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_4a1);
      }
      if ((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data == pTVar25) break;
      pFVar11 = ((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data)->Object;
      if (pFVar11 != (FStatsTreeElement *)0x0) {
        uVar28 = pFVar11->Cycles;
        uVar20 = uVar20 + uVar28;
        iVar9 = 0;
        if (pFVar11->CyclesOfChildren <= uVar28) {
          iVar9 = uVar28 - pFVar11->CyclesOfChildren;
        }
        pTVar22 = (TReferenceControllerBase<1> *)(ulonglong)((uint)pTVar22 + iVar9);
      }
      FVar23.Data = FVar23.Data + 0x10;
    }
    iVar8 = local_488.Children.ArrayNum;
    pTVar25 = (TSharedPtr<FStatsTreeElement,1> *)
              (local_488.Children.AllocatorInstance.Data +
              (longlong)local_488.Children.ArrayNum * 0x10);
    FVar23.Data = local_488.Children.AllocatorInstance.Data;
    while( true ) {
      if (local_488.Children.ArrayNum != iVar8) {
        local_4a0[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_4a0);
      }
      if ((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data == pTVar25) break;
      if (((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data)->Object != (FStatsTreeElement *)0x0) {
        `FStatsTreeElement::UpdatePostMeasurement'::__l2::Local::UpdateRatios
                  (((TSharedPtr<FStatsTreeElement,1> *)FVar23.Data)->Object,uVar20,(uint)pTVar22,
                   uVar10,uVar24);
      }
      FVar23.Data = FVar23.Data + 0x10;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < `GetStatsHierarchicalLastMeasurement'::`2'::_TSS0) &&
     (_Init_thread_header(&`GetStatsHierarchicalLastMeasurement'::`2'::_TSS0),
     `GetStatsHierarchicalLastMeasurement'::`2'::_TSS0 == -1)) {
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement._48_16_ = ZEXT816(0);
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.RatioAgainstTotalInclusive = 0.0;
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Path.Data =
         (TArray<wchar_t,TSizedDefaultAllocator<32>_>)ZEXT816(0);
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.RatioAgainstMaximumExclusive = 0.0;
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Name.ComparisonIndex.Value = 0;
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Name.Number = 0;
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Invocations = 0;
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Cycles = 0;
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.CyclesOfChildren = 0;
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children.ArrayNum = 0;
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children.ArrayMax = 0;
    atexit(``anonymous_namespace'::GetStatsHierarchicalLastMeasurement'::__l2::
           _dynamic_atexit_destructor_for__LastMeasurement__);
    _Init_thread_footer(&`GetStatsHierarchicalLastMeasurement'::`2'::_TSS0);
  }
  FVar23.Data = local_488.Path.Data.AllocatorInstance.Data;
  iVar8 = local_488.Path.Data.ArrayNum;
  lVar18 = (longlong)local_488.Path.Data.ArrayNum;
  `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Name = local_488.Name;
  `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Path.Data.ArrayNum =
       local_488.Path.Data.ArrayNum;
  if ((local_488.Path.Data.ArrayNum == 0) &&
     (`GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Path.Data.ArrayMax == 0)) {
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Path.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_488.Path.Data.ArrayNum,
               `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Path.Data.ArrayMax,
               (ForAnyElementType *)
               &`GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Path,
               local_488.Path.Data.ArrayNum,
               &`GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Path.Data.ArrayMax);
    if (iVar8 != 0) {
      memcpy(`GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Path.Data.AllocatorInstance
             .Data,FVar23.Data,lVar18 * 2);
    }
  }
  `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.RatioAgainstTotalInclusive =
       local_488.RatioAgainstTotalInclusive;
  `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Invocations = local_488.Invocations;
  `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Cycles = local_488.Cycles;
  `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.CyclesOfChildren =
       local_488.CyclesOfChildren;
  `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.RatioAgainstMaximumInclusive =
       local_488.RatioAgainstMaximumInclusive;
  `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.RatioAgainstTotalExclusive =
       local_488.RatioAgainstTotalExclusive;
  `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.RatioAgainstMaximumExclusive =
       local_488.RatioAgainstMaximumExclusive;
  DestructItems<TSharedPtr<FStatsTreeElement,1>,int>
            ((TSharedPtr<FStatsTreeElement,1> *)
             `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children.AllocatorInstance.
             Data,`GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children.ArrayNum);
  FVar23.Data = local_488.Children.AllocatorInstance.Data;
  iVar8 = local_488.Children.ArrayNum;
  `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children.ArrayNum =
       local_488.Children.ArrayNum;
  if ((local_488.Children.ArrayNum == 0) &&
     (`GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children.ArrayMax == 0)) {
    `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children._8_8_ =
         local_488.Children._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_488.Children.ArrayNum,
               `GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children.ArrayMax,
               &`GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children.
                AllocatorInstance,local_488.Children.ArrayNum,
               &`GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children.ArrayMax);
    ConstructItems<TSharedPtr<FStatsTreeElement,1>,TSharedPtr<FStatsTreeElement,1>,int>
              (`GetStatsHierarchicalLastMeasurement'::`2'::LastMeasurement.Children.
               AllocatorInstance.Data,(TSharedPtr<FStatsTreeElement,1> *)FVar23.Data,iVar8);
  }
  if ((bEnabled != false) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4520621824010092075>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsHierarchical.cpp"
                         ,0x1d5,"!bEnabled"), bVar7)) {
    pcVar3 = (code *)swi(3);
    pFVar11 = (FStatsTreeElement *)(*pcVar3)();
    return pFVar11;
  }
  pFVar16 = ::`anonymous_namespace'::GetStatsHierarchicalLastMeasurement();
  pFVar11 = local_240;
  FStatsTreeElement::FStatsTreeElement(local_240,pFVar16);
  DestructItems<TSharedPtr<FStatsTreeElement,1>,int>
            ((TSharedPtr<FStatsTreeElement,1> *)local_488.Children.AllocatorInstance.Data,
             local_488.Children.ArrayNum);
  if ((TSharedPtr<FStatsTreeElement,1> *)local_488.Children.AllocatorInstance.Data !=
      (TSharedPtr<FStatsTreeElement,1> *)0x0) {
    FMemory::Free(local_488.Children.AllocatorInstance.Data);
  }
  if (local_488.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Path.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_4b8.Data,(int)local_4b0);
  if (local_4b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data);
  }
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,_FStatsHierarchical::EndMeasurements_::__l2::FTreeElementInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_c8);
  pFVar16 = local_248;
  DestructItems<TSharedPtr<FStatsTreeElement,1>,int>
            ((TSharedPtr<FStatsTreeElement,1> *)(local_248->Children).AllocatorInstance.Data,
             (local_248->Children).ArrayNum);
  pFVar21 = (pFVar16->Children).AllocatorInstance.Data;
  if (pFVar21 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar21);
  }
  pFVar21 = (pFVar16->Path).Data.AllocatorInstance.Data;
  if (pFVar21 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar21);
  }
  return pFVar11;
}

// GetLastMeasurements @ 141a00de0

FStatsTreeElement * __cdecl
FStatsHierarchical::GetLastMeasurements(FStatsTreeElement *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FStatsTreeElement *pFVar3;
  
  if (bEnabled) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4520621824010092075>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsHierarchical.cpp"
                       ,0x1d5,"!bEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStatsTreeElement *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = ::`anonymous_namespace'::GetStatsHierarchicalLastMeasurement();
  FStatsTreeElement::FStatsTreeElement(__return_storage_ptr__,pFVar3);
  return __return_storage_ptr__;
}

// GetUntrackedTimeName @ 141a047a0

FName __cdecl FStatsHierarchical::GetUntrackedTimeName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,L"__UNTRACKED__");
  return in_RCX;
}

// InsertAllElementsToMap @ 141a06fa0

void __cdecl
`FStatsHierarchical::EndMeasurements'::__l2::Local::InsertAllElementsToMap
          (TMap<FString,_public:_static_class_FStatsTreeElement___cdecl_FStatsHierarchical::EndMeasurements(FStatsTreeElement,bool)_::_2_::FTreeElementInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,_public:_static_class_FStatsTreeElement___cdecl_FStatsHierarchical::EndMeasurements(FStatsTreeElement,bool)_::_2_::FTreeElementInfo,0>_>
           *param_1,FStatsTreeElement *param_2)

{
  FName FVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType _Src;
  FScriptContainerElement *pFVar5;
  FName local_res10;
  FString local_98;
  FTreeElementInfo local_88;
  
  if (param_2 != (FStatsTreeElement *)0x0) {
    ::FName::FName(&local_res10,L"__UNTRACKED__");
    FVar1 = param_2->Name;
    if (FVar1 != local_res10) {
      if (FVar1 != (FName)0x0) {
        local_98.Data.ArrayNum = (param_2->Path).Data.ArrayNum;
        lVar3 = (longlong)local_98.Data.ArrayNum;
        pFVar4 = (param_2->Path).Data.AllocatorInstance.Data;
        local_88.Element.RatioAgainstTotalInclusive = 0.0;
        local_88.Element.Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Element.RatioAgainstMaximumExclusive = 0.0;
        local_88.Element.Path.Data.ArrayNum = 0;
        local_88.Element.Path.Data.ArrayMax = 0;
        local_88.Element.CyclesOfChildren = 0;
        local_88.Element.RatioAgainstTotalExclusive = 0.0;
        local_88.Element.RatioAgainstMaximumInclusive = 0.0;
        local_88.Element.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Element.Children.ArrayNum = 0;
        local_88.Element.Children.ArrayMax = 0;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Element.Name = FVar1;
        if (local_98.Data.ArrayNum == 0) {
          local_98.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                     local_98.Data.ArrayNum,&local_98.Data.ArrayMax);
          memcpy(local_98.Data.AllocatorInstance.Data,pFVar4,lVar3 * 2);
        }
        _Src.Data = local_98.Data.AllocatorInstance.Data;
        iVar2 = local_98.Data.ArrayNum;
        if (local_88.Element.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Element.Path.Data.AllocatorInstance.Data);
          _Src.Data = local_98.Data.AllocatorInstance.Data;
          iVar2 = local_98.Data.ArrayNum;
        }
        local_88.Element.Invocations = param_2->Invocations;
        local_88.Element.Cycles = param_2->Cycles;
        local_88.Element.Path.Data.ArrayMax = local_98.Data.ArrayMax;
        local_88.Element.Path.Data.ArrayNum = iVar2;
        local_88.BeginCycles = 0;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Data.ArrayNum = iVar2;
        local_88.Element.Path.Data.AllocatorInstance.Data = _Src.Data;
        if (iVar2 == 0) {
          local_98.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar2,0,(ForAnyElementType *)&local_98,iVar2,&local_98.Data.ArrayMax);
          memcpy(local_98.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
        }
        TMapBase<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,`FStatsHierarchical::EndMeasurements'::__l2::FTreeElementInfo,0>_>
        ::Emplace<FString,_FStatsHierarchical::EndMeasurements_::__l2::FTreeElementInfo_const_&>
                  (param_1,&local_98,&local_88);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        DestructItems<TSharedPtr<FStatsTreeElement,1>,int>
                  ((TSharedPtr<FStatsTreeElement,1> *)
                   local_88.Element.Children.AllocatorInstance.Data,
                   local_88.Element.Children.ArrayNum);
        if ((TSharedPtr<FStatsTreeElement,1> *)local_88.Element.Children.AllocatorInstance.Data !=
            (TSharedPtr<FStatsTreeElement,1> *)0x0) {
          FMemory::Free(local_88.Element.Children.AllocatorInstance.Data);
        }
        if (local_88.Element.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Element.Path.Data.AllocatorInstance.Data);
        }
      }
      iVar2 = (param_2->Children).ArrayNum;
      pFVar4 = (param_2->Children).AllocatorInstance.Data;
      pFVar5 = pFVar4 + (longlong)iVar2 * 0x10;
      while( true ) {
        if ((param_2->Children).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TSharedPtr<FStatsTreeElement,1>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_res10);
        }
        if (pFVar4 == pFVar5) break;
        InsertAllElementsToMap(param_1,*(FStatsTreeElement **)pFVar4);
        pFVar4 = pFVar4 + 0x10;
      }
    }
  }
  return;
}

// IsEnabled @ 141a076a0

bool __cdecl FStatsHierarchical::IsEnabled(void)

{
  return bEnabled;
}

