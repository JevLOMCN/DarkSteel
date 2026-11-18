// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 12

// ~TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy> @ 14ae5b460

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::
~TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>
          (TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>
           *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ResultCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResultCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResultCache);
  DestructItems<Metasound::FFrontendQuery::FStepInfo,int>
            ((FStepInfo *)(this->Query).Steps.AllocatorInstance.Data,(this->Query).Steps.ArrayNum);
  pFVar2 = (this->Query).Steps.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Query).Result.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x00014ae5b4c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueryCriticalSection);
  return;
}

// ~TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy> @ 14ae5b4d0

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::
~TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>
          (TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>
           *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ResultCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResultCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResultCache);
  DestructItems<Metasound::FFrontendQuery::FStepInfo,int>
            ((FStepInfo *)(this->Query).Steps.AllocatorInstance.Data,(this->Query).Steps.ArrayNum);
  pFVar2 = (this->Query).Steps.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Query).Result.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x00014ae5b532. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueryCriticalSection);
  return;
}

// ~TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy> @ 14ae5b540

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::
~TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>
          (TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>
           *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ResultCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResultCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResultCache);
  DestructItems<Metasound::FFrontendQuery::FStepInfo,int>
            ((FStepInfo *)(this->Query).Steps.AllocatorInstance.Data,(this->Query).Steps.ArrayNum);
  pFVar2 = (this->Query).Steps.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Query).Result.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x00014ae5b5a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueryCriticalSection);
  return;
}

// ~TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy> @ 14ae5b5b0

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::
~TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>
          (TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>
           *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ResultCache).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResultCache).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResultCache);
  DestructItems<Metasound::FFrontendQuery::FStepInfo,int>
            ((FStepInfo *)(this->Query).Steps.AllocatorInstance.Data,(this->Query).Steps.ArrayNum);
  pFVar2 = (this->Query).Steps.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Query).Result.SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x00014ae5b612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueryCriticalSection);
  return;
}

// Prime @ 14ae7e5b0

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::Prime
          (TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>
           *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  lpCriticalSection = &this->QueryCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Update(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Prime @ 14ae7e650

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::Prime
          (TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>
           *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  lpCriticalSection = &this->QueryCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Update(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Prime @ 14ae7e6f0

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::Prime
          (TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>
           *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  lpCriticalSection = &this->QueryCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Update(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Prime @ 14ae7e790

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::Prime
          (TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>
           *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  lpCriticalSection = &this->QueryCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Update(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Update @ 14ae8ee30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::
Update(TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>
       *this)

{
  FFrontendQueryKey *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  byte bVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  char cVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_148 [32];
  char local_128;
  char local_127;
  undefined1 local_126 [2];
  uint local_124;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  undefined1 local_ec [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FFrontendQueryKey *local_b0;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *local_a8;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_a0;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  iVar15 = GCycleStatsShouldEmitNamedEvents;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_ec._4_8_ = this;
  if (GCycleStatsShouldEmitNamedEvents < 1) {
    local_128 = '\0';
  }
  else {
    local_128 = '\x01';
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::SearchEngineQuery::Update");
  }
  cVar10 = 0 < iVar15;
  bVar16 = CpuChannel->Enabled < 0;
  if (bVar16) {
    local_127 = '\0';
  }
  else {
    local_127 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::Update(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId230,"MetaSound::SearchEngineQuery::Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.h"
               ,0xe6);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::Update(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId230);
  }
  cVar14 = !bVar16;
  local_5c = 0x80;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar11 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  FFrontendQuery::UpdateInternal
            (&this->Query,
             (TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
              *)local_88);
  if (0 < local_88._8_4_ - local_54) {
    bVar16 = 0 < GCycleStatsShouldEmitNamedEvents;
    if (bVar16) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"MetaSound::SearchEngineQuery::BuildResult");
    }
    bVar17 = -1 < CpuChannel->Enabled;
    if (bVar17) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::Update(void)___ptr64'
                  ::__l5::__CpuProfilerEventSpecId237,"MetaSound::SearchEngineQuery::BuildResult",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.h"
                 ,0xed);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindAllDefaultInterfaceVersionsForUClassQueryPolicy>::Update(void)___ptr64'
                 ::__l5::__CpuProfilerEventSpecId237);
    }
    uStack_114 = 1;
    local_100 = 0;
    uStack_104 = local_100;
    if (local_60 != 0) {
      puVar12 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar12 = local_68;
      }
      uVar13 = *puVar12;
      local_100 = 0;
      uVar11 = 0;
      while (uVar13 == 0) {
        lVar9 = (longlong)(int)uVar11;
        local_100 = local_100 + 0x20;
        uVar11 = uVar11 + 1;
        uStack_104 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
        goto LAB_14ae8f024;
        uVar13 = puVar12[lVar9 + 1];
      }
      uStack_114 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_114 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_f0 = (int)lVar9;
      uStack_104 = (local_100 - 1) + local_f0;
      if ((int)local_60 < (int)uStack_104) {
        uStack_104 = local_60;
      }
    }
LAB_14ae8f024:
    local_120 = (longlong *)local_88;
    uVar13 = local_60 & 0xffffffe0;
    iStack_f8 = local_88._8_4_ - local_54;
    local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uStack_108 = 0xffffffff;
    TStack_d8.CurrentBitIndex = uStack_104;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    TStack_d8._padding_ = CONCAT44(uStack_114,uVar11);
    iVar15 = (int)local_60 >> 5;
    bVar8 = (byte)local_60;
    local_124 = local_60;
    TStack_d8._28_4_ = uStack_104;
    TStack_d8.BaseBitIndex = local_100;
    uStack_b8 = CONCAT44(uStack_f4,iStack_f8);
    uStack_118 = uVar11;
    uStack_fc = uStack_104;
    local_ec._12_8_ = local_120;
    TStack_d8.Array = local_110;
    if (((int)local_60 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar4 = local_ec._4_8_;
    uVar11 = local_124;
    if (local_124 != local_60) {
      puVar12 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar12 = local_68;
      }
      uVar11 = -1 << (bVar8 & 0x1f) & puVar12[iVar15];
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar15;
        uVar13 = uVar13 + 0x20;
        iVar15 = iVar15 + 1;
        uVar11 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14ae8f152;
        uVar11 = puVar12[lVar9 + 1];
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar13;
      if ((int)local_60 < (int)uVar11) {
        uVar11 = local_60;
      }
    }
LAB_14ae8f152:
    while( true ) {
      uVar5 = local_ec._12_8_;
      if ((int)*(longlong *)(local_ec._12_8_ + 8) - *(int *)(local_ec._12_8_ + 0x34) !=
          (int)uStack_b8) {
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_126);
      }
      cVar14 = local_127;
      cVar10 = local_128;
      if (((TStack_d8.CurrentBitIndex == uVar11) &&
          (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         ((undefined1 *)uVar5 == local_88)) break;
      pFVar1 = (FFrontendQueryKey *)
               (*(longlong *)uVar5 + (longlong)TStack_d8.CurrentBitIndex * 0x28);
      pTVar7 = TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find((((FFrontendQuery *)(uVar4 + 0x30))->Result).Object,pFVar1);
      if (pTVar7 == (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        if (*(int *)&((TMap<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>_>
                       *)(uVar4 + 0x58))->field_0x8 !=
            *(int *)&((TMap<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>_>
                       *)(uVar4 + 0x58))->field_0x34) {
          TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<Metasound::FFrontendQueryKey>
                    ((TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)(uVar4 + 0x58),pFVar1->Hash,pFVar1);
        }
      }
      else {
        SearchEngineQuerySteps::BuildArrayOfVersionsFromPartition(&local_a0,pTVar7);
        local_a8 = &local_a0;
        local_b0 = pFVar1;
        TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<Metasound::FFrontendQueryKey_const_&,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_&&>_>
                  ((TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)(uVar4 + 0x58),
                   (TPairInitializer<Metasound::FFrontendQueryKey_const_&,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_&&>
                    *)local_ec,(bool *)&local_b0);
        if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.AllocatorInstance.Data);
        }
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar16) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (cVar14 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (cVar10 != '\0') {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Update @ 14ae8f2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::Update
          (TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>
           *this)

{
  FFrontendQueryKey *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  byte bVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  char cVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_148 [32];
  char local_128;
  char local_127;
  undefined1 local_126 [2];
  uint local_124;
  longlong *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  undefined1 local_ec [20];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FFrontendQueryKey *local_b0;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> *local_a8;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_a0;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  iVar15 = GCycleStatsShouldEmitNamedEvents;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_ec._4_8_ = this;
  if (GCycleStatsShouldEmitNamedEvents < 1) {
    local_128 = '\0';
  }
  else {
    local_128 = '\x01';
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::SearchEngineQuery::Update");
  }
  cVar10 = 0 < iVar15;
  bVar16 = CpuChannel->Enabled < 0;
  if (bVar16) {
    local_127 = '\0';
  }
  else {
    local_127 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::Update(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId230,"MetaSound::SearchEngineQuery::Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.h"
               ,0xe6);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::Update(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId230);
  }
  cVar14 = !bVar16;
  local_5c = 0x80;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar11 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  FFrontendQuery::UpdateInternal
            (&this->Query,
             (TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
              *)local_88);
  if (0 < local_88._8_4_ - local_54) {
    bVar16 = 0 < GCycleStatsShouldEmitNamedEvents;
    if (bVar16) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"MetaSound::SearchEngineQuery::BuildResult");
    }
    bVar17 = -1 < CpuChannel->Enabled;
    if (bVar17) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::Update(void)___ptr64'
                  ::__l5::__CpuProfilerEventSpecId237,"MetaSound::SearchEngineQuery::BuildResult",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.h"
                 ,0xed);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindAllRegisteredInterfacesWithNameQueryPolicy>::Update(void)___ptr64'
                 ::__l5::__CpuProfilerEventSpecId237);
    }
    uStack_114 = 1;
    local_100 = 0;
    uStack_104 = local_100;
    if (local_60 != 0) {
      puVar12 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar12 = local_68;
      }
      uVar13 = *puVar12;
      local_100 = 0;
      uVar11 = 0;
      while (uVar13 == 0) {
        lVar9 = (longlong)(int)uVar11;
        local_100 = local_100 + 0x20;
        uVar11 = uVar11 + 1;
        uStack_104 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
        goto LAB_14ae8f4c4;
        uVar13 = puVar12[lVar9 + 1];
      }
      uStack_114 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_114 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_f0 = (int)lVar9;
      uStack_104 = (local_100 - 1) + local_f0;
      if ((int)local_60 < (int)uStack_104) {
        uStack_104 = local_60;
      }
    }
LAB_14ae8f4c4:
    local_120 = (longlong *)local_88;
    uVar13 = local_60 & 0xffffffe0;
    iStack_f8 = local_88._8_4_ - local_54;
    local_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uStack_108 = 0xffffffff;
    TStack_d8.CurrentBitIndex = uStack_104;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    TStack_d8._padding_ = CONCAT44(uStack_114,uVar11);
    iVar15 = (int)local_60 >> 5;
    bVar8 = (byte)local_60;
    local_124 = local_60;
    TStack_d8._28_4_ = uStack_104;
    TStack_d8.BaseBitIndex = local_100;
    uStack_b8 = CONCAT44(uStack_f4,iStack_f8);
    uStack_118 = uVar11;
    uStack_fc = uStack_104;
    local_ec._12_8_ = local_120;
    TStack_d8.Array = local_110;
    if (((int)local_60 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar4 = local_ec._4_8_;
    uVar11 = local_124;
    if (local_124 != local_60) {
      puVar12 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar12 = local_68;
      }
      uVar11 = -1 << (bVar8 & 0x1f) & puVar12[iVar15];
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar15;
        uVar13 = uVar13 + 0x20;
        iVar15 = iVar15 + 1;
        uVar11 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14ae8f5f2;
        uVar11 = puVar12[lVar9 + 1];
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar13;
      if ((int)local_60 < (int)uVar11) {
        uVar11 = local_60;
      }
    }
LAB_14ae8f5f2:
    while( true ) {
      uVar5 = local_ec._12_8_;
      if ((int)*(longlong *)(local_ec._12_8_ + 8) - *(int *)(local_ec._12_8_ + 0x34) !=
          (int)uStack_b8) {
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_126);
      }
      cVar14 = local_127;
      cVar10 = local_128;
      if (((TStack_d8.CurrentBitIndex == uVar11) &&
          (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         ((undefined1 *)uVar5 == local_88)) break;
      pFVar1 = (FFrontendQueryKey *)
               (*(longlong *)uVar5 + (longlong)TStack_d8.CurrentBitIndex * 0x28);
      pTVar7 = TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
               ::Find((((FFrontendQuery *)(uVar4 + 0x30))->Result).Object,pFVar1);
      if (pTVar7 == (TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                     *)0x0) {
        if (*(int *)&((TMap<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>_>
                       *)(uVar4 + 0x58))->field_0x8 !=
            *(int *)&((TMap<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>_>
                       *)(uVar4 + 0x58))->field_0x34) {
          TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<Metasound::FFrontendQueryKey>
                    ((TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)(uVar4 + 0x58),pFVar1->Hash,pFVar1);
        }
      }
      else {
        SearchEngineQuerySteps::BuildArrayOfVersionsFromPartition(&local_a0,pTVar7);
        local_a8 = &local_a0;
        local_b0 = pFVar1;
        TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<Metasound::FFrontendQueryKey_const_&,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_&&>_>
                  ((TSet<TTuple<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)(uVar4 + 0x58),
                   (TPairInitializer<Metasound::FFrontendQueryKey_const_&,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_&&>
                    *)local_ec,(bool *)&local_b0);
        if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.AllocatorInstance.Data);
        }
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar16) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (cVar14 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (cVar10 != '\0') {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Update @ 14ae8f770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::Update
          (TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>
           *this)

{
  int *piVar1;
  FNodeClassRegistryKey *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  char cVar5;
  longlong *plVar6;
  FNameEntryId FVar7;
  ForElementType<Metasound::FFrontendQueryEntry> FVar8;
  byte bVar9;
  longlong lVar10;
  TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy> *pTVar11;
  char cVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  int iVar18;
  int *piVar19;
  bool bVar20;
  undefined1 auStack_198 [32];
  char local_178;
  char local_177;
  char local_176;
  char local_175;
  undefined1 local_174;
  undefined1 local_173 [3];
  uint local_170;
  int local_16c;
  TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy> *local_168;
  longlong *local_160;
  undefined8 uStack_158;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  int local_128;
  int local_124;
  TPairInitializer<Metasound::FFrontendQueryKey_const_&,Metasound::Frontend::FNodeClassRegistryKey_&&>
  local_120;
  longlong *local_110;
  undefined1 auStack_108 [8];
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  uint uStack_f8;
  uint uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  FNameEntryId FStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  int iStack_c4;
  uint uStack_c0;
  FNodeClassRegistryKey *local_b8;
  longlong **local_b0;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  iVar18 = GCycleStatsShouldEmitNamedEvents;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_168 = this;
  if (GCycleStatsShouldEmitNamedEvents < 1) {
    local_177 = '\0';
  }
  else {
    local_177 = '\x01';
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::SearchEngineQuery::Update");
  }
  cVar12 = 0 < iVar18;
  bVar20 = CpuChannel->Enabled < 0;
  if (bVar20) {
    local_175 = '\0';
  }
  else {
    local_175 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::Update(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId230,"MetaSound::SearchEngineQuery::Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.h"
               ,0xe6);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::Update(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId230);
  }
  cVar17 = !bVar20;
  local_5c = 0x80;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar13 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  FFrontendQuery::UpdateInternal
            (&this->Query,
             (TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
              *)local_88);
  if (0 < local_88._8_4_ - local_54) {
    if (GCycleStatsShouldEmitNamedEvents < 1) {
      local_176 = '\0';
    }
    else {
      local_176 = '\x01';
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"MetaSound::SearchEngineQuery::BuildResult");
    }
    if (CpuChannel->Enabled < 0) {
      local_178 = '\0';
    }
    else {
      local_178 = '\x01';
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::Update(void)___ptr64'
                  ::__l5::__CpuProfilerEventSpecId237,"MetaSound::SearchEngineQuery::BuildResult",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.h"
                 ,0xed);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindClassWithHighestMinorVersionQueryPolicy>::Update(void)___ptr64'
                 ::__l5::__CpuProfilerEventSpecId237);
    }
    FVar7.Value = 1;
    local_140 = 0;
    uStack_144 = local_140;
    if (local_60 != 0) {
      puVar14 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar14 = local_68;
      }
      uVar15 = *puVar14;
      local_140 = 0;
      uVar13 = 0;
      while (uVar15 == 0) {
        lVar10 = (longlong)(int)uVar13;
        local_140 = local_140 + 0x20;
        uVar13 = uVar13 + 1;
        uStack_144 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
        goto LAB_14ae8f975;
        uVar15 = puVar14[lVar10 + 1];
      }
      FVar7.Value = -uVar15 & uVar15;
      uVar3 = (ulonglong)FVar7.Value * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_128 = (int)lVar10;
      uStack_144 = (local_140 - 1) + local_128;
      if ((int)local_60 < (int)uStack_144) {
        uStack_144 = local_60;
      }
    }
LAB_14ae8f975:
    local_160 = (longlong *)local_88;
    uStack_13c = local_8c;
    uVar15 = local_60 & 0xffffffe0;
    iStack_138 = local_88._8_4_ - local_54;
    local_150 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uStack_148 = 0xffffffff;
    uStack_158 = CONCAT44(FVar7.Value,uVar13);
    iVar18 = (int)local_60 >> 5;
    auStack_108 = (undefined1  [8])uStack_158;
    bVar9 = (byte)local_60;
    local_170 = local_60;
    local_f0._4_4_ = local_8c;
    local_f0._0_4_ = local_140;
    uStack_e8 = CONCAT44(uStack_134,iStack_138);
    uStack_f8 = 0xffffffff;
    uStack_f4 = uStack_144;
    local_110 = local_160;
    local_100 = local_150;
    if (((int)local_60 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar20)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar11 = local_168;
    uVar13 = local_170;
    if (local_170 != local_60) {
      puVar14 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar14 = local_68;
      }
      uVar13 = -1 << (bVar9 & 0x1f) & puVar14[iVar18];
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar18;
        uVar15 = uVar15 + 0x20;
        iVar18 = iVar18 + 1;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) {
          local_170 = local_60;
          uVar13 = local_60;
          goto LAB_14ae8fab0;
        }
        uVar13 = puVar14[lVar10 + 1];
      }
      uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_124 = (int)lVar10;
      uVar13 = local_124 + -1 + uVar15;
      local_170 = uVar13;
      if ((int)local_60 < (int)uVar13) {
        uVar13 = local_60;
        local_170 = local_60;
      }
    }
LAB_14ae8fab0:
    while( true ) {
      plVar6 = local_110;
      if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
        local_174 = 0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_174);
      }
      cVar17 = local_175;
      cVar5 = local_176;
      cVar12 = local_177;
      if (((uStack_f4 == uVar13) &&
          (local_100 == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar6 == (longlong *)local_88)) break;
      pFVar2 = (FNodeClassRegistryKey *)(*plVar6 + (longlong)(int)uStack_f4 * 0x28);
      local_120.Value = pFVar2;
      FVar8 = (ForElementType<Metasound::FFrontendQueryEntry>)
              TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
              ::Find((pTVar11->Query).Result.Object,(FFrontendQueryKey *)pFVar2);
      if (FVar8 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        if (*(int *)&(pTVar11->ResultCache).field_0x8 != *(int *)&(pTVar11->ResultCache).field_0x34)
        {
          TSet<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey,0>,FDefaultSetAllocator>
          ::RemoveImpl<Metasound::FFrontendQueryKey>
                    ((TSet<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey,0>,FDefaultSetAllocator>
                      *)&pTVar11->ResultCache,(pFVar2->ClassName).Variant.Number,
                     (FFrontendQueryKey *)pFVar2);
        }
      }
      else {
        piVar1 = (int *)((longlong)FVar8 + 0xb8);
        iVar16 = -1;
        iVar18 = *piVar1;
        local_140 = InvalidKey.Version.Minor;
        local_16c = -1;
        local_160 = (longlong *)InvalidKey._0_8_;
        uStack_158._0_4_ = InvalidKey.ClassName.Namespace.Number;
        uStack_158._4_4_ = InvalidKey.ClassName.Name.ComparisonIndex.Value;
        local_150 = (TBitArray<FDefaultBitArrayAllocator> *)InvalidKey.ClassName._12_8_;
        uStack_148 = InvalidKey.ClassName.Variant.Number;
        uStack_144 = InvalidKey.Version.Major;
        if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar8 + 0xb0) !=
            (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
          FVar8 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar8 + 0xb0);
        }
        piVar19 = (int *)((longlong)FVar8 + 0x50);
        while( true ) {
          if (*piVar1 != iVar18) {
            local_173[0] = 0;
            `TCheckedPointerIterator<Metasound::FFrontendQueryEntry_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_173);
          }
          if (piVar19 + -0x14 == (int *)((longlong)iVar18 * 0xb0 + (longlong)FVar8)) break;
          bVar9 = *(byte *)(piVar19 + 0x14);
          if ((4 < (ulonglong)bVar9) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0x12f,L""), bVar20)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + (ulonglong)bVar9) != '\0') {
            if (((char)piVar19[0x14] != '\x01') &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index == TypeIndex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                    ,0x97,L""), bVar20)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (((char)piVar19[-0x10] == '\0') &&
               ((iVar16 < *piVar19 || ((*piVar19 == iVar16 && (local_16c < piVar19[1])))))) {
              local_130 = *(undefined8 *)piVar19;
              local_e0 = CONCAT31(local_e0._1_3_,(char)piVar19[-9]);
              uStack_cc = (undefined4)*(undefined8 *)(piVar19 + -0xb);
              uStack_c8 = (uint)((ulonglong)*(undefined8 *)(piVar19 + -0xb) >> 0x20);
              iStack_c4 = (int)local_130;
              uStack_c0 = (uint)((ulonglong)local_130 >> 0x20);
              uStack_dc = (undefined4)*(undefined8 *)(piVar19 + -0xf);
              uStack_d8 = (uint)((ulonglong)*(undefined8 *)(piVar19 + -0xf) >> 0x20);
              FStack_d4.Value = (uint)*(undefined8 *)(piVar19 + -0xd);
              uStack_d0 = (undefined4)((ulonglong)*(undefined8 *)(piVar19 + -0xd) >> 0x20);
              if (((char)piVar19[-9] == '\x01') &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InClassInfo.Type != EMetasoundFrontendClassType::Graph",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                                      ,0xb8,
                                      L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                                     ), bVar20)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_160 = (longlong *)CONCAT44(uStack_dc,local_e0);
              uStack_158 = CONCAT44(FStack_d4.Value,uStack_d8);
              local_150 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uStack_cc,uStack_d0);
              uStack_144 = iStack_c4;
              uStack_148 = uStack_c8;
              local_140 = uStack_c0;
              local_16c = local_130._4_4_;
              iVar16 = (int)local_130;
            }
          }
          piVar19 = piVar19 + 0x2c;
        }
        local_b8 = local_120.Value;
        local_b0 = &local_160;
        TSet<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<Metasound::FFrontendQueryKey_const_&,Metasound::Frontend::FNodeClassRegistryKey_&&>_>
                  ((TSet<TTuple<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,Metasound::Frontend::FNodeClassRegistryKey,0>,FDefaultSetAllocator>
                    *)&local_168->ResultCache,&local_120,(bool *)&local_b8);
        pTVar11 = local_168;
        uVar13 = local_170;
      }
      uStack_f8 = uStack_f8 & ~auStack_108._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_108);
    }
    if (local_178 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (cVar5 != '\0') {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (cVar17 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (cVar12 != '\0') {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// Update @ 14ae8fde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Metasound::Frontend::
TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::Update
          (TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>
           *this)

{
  ulonglong uVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy> *pTVar5;
  FMetasoundFrontendInterface *pFVar6;
  uint uVar7;
  bool bVar8;
  ForElementType<Metasound::FFrontendQueryEntry> FVar9;
  byte bVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStackY_1c8 [32];
  uint local_184;
  undefined1 local_180;
  undefined1 local_17f [7];
  TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy> *local_178;
  FMetasoundFrontendClassInterface local_170;
  undefined8 local_130;
  undefined8 uStack_128;
  ForAnyElementType local_120;
  undefined8 local_118;
  FMetasoundFrontendInterface *local_110;
  uint uStack_108;
  uint uStack_104;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  TPairInitializer<Metasound::FFrontendQueryKey_const_&,FMetasoundFrontendInterface_&&> local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy> *local_a0;
  FMetasoundFrontendClassInterface *local_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  iVar4 = GCycleStatsShouldEmitNamedEvents;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_178 = this;
  if (0 < GCycleStatsShouldEmitNamedEvents) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"MetaSound::SearchEngineQuery::Update");
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::Update(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId230,"MetaSound::SearchEngineQuery::Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.h"
               ,0xe6);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::Update(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId230);
  }
  local_5c = 0x80;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar12 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  FFrontendQuery::UpdateInternal
            (&this->Query,
             (TSet<Metasound::FFrontendQueryKey,DefaultKeyFuncs<Metasound::FFrontendQueryKey,0>,FDefaultSetAllocator>
              *)local_88);
  if (0 < local_88._8_4_ - local_54) {
    bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
    if (bVar2) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"MetaSound::SearchEngineQuery::BuildResult");
    }
    bVar17 = -1 < CpuChannel->Enabled;
    if (bVar17) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::Update(void)___ptr64'
                  ::__l5::__CpuProfilerEventSpecId237,"MetaSound::SearchEngineQuery::BuildResult",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.h"
                 ,0xed);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_void___cdecl_Metasound::Frontend::TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>::Update(void)___ptr64'
                 ::__l5::__CpuProfilerEventSpecId237);
    }
    uVar7 = local_60;
    uStack_104 = 1;
    local_f0 = 0;
    uStack_f4 = local_f0;
    if (local_60 != 0) {
      puVar13 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar13 = local_68;
      }
      uVar14 = *puVar13;
      local_f0 = 0;
      uVar12 = 0;
      while (uVar14 == 0) {
        lVar11 = (longlong)(int)uVar12;
        local_f0 = local_f0 + 0x20;
        uVar12 = uVar12 + 1;
        uStack_f4 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
        goto LAB_14ae8ffe1;
        uVar14 = (puVar13 + 1)[lVar11];
      }
      uStack_104 = -uVar14 & uVar14;
      uVar1 = (ulonglong)uStack_104 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_e0 = (int)lVar11;
      uStack_f4 = (local_f0 - 1) + local_e0;
      if ((int)local_60 < (int)uStack_f4) {
        uStack_f4 = local_60;
      }
    }
LAB_14ae8ffe1:
    local_110 = (FMetasoundFrontendInterface *)local_88;
    uVar14 = local_60 & 0xffffffe0;
    iStack_e8 = local_88._8_4_ - local_54;
    local_100 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uStack_f8 = 0xffffffff;
    TStack_c8.CurrentBitIndex = uStack_f4;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    TStack_c8._padding_ = CONCAT44(uStack_104,uVar12);
    iVar15 = (int)local_60 >> 5;
    bVar10 = (byte)local_60;
    local_184 = local_60;
    TStack_c8._28_4_ = uStack_f4;
    TStack_c8.BaseBitIndex = local_f0;
    uStack_a8 = CONCAT44(uStack_e4,iStack_e8);
    uStack_108 = uVar12;
    uStack_ec = uStack_f4;
    local_d8.Value = local_110;
    TStack_c8.Array = local_100;
    if (((int)local_60 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar5 = local_178;
    if (uVar7 != local_60) {
      puVar13 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar13 = local_68;
      }
      uVar12 = -1 << (bVar10 & 0x1f) & puVar13[iVar15];
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar15;
        uVar14 = uVar14 + 0x20;
        iVar15 = iVar15 + 1;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) {
          local_184 = local_60;
          goto LAB_14ae90110;
        }
        uVar12 = (puVar13 + 1)[lVar11];
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_dc = (int)lVar11;
      local_184 = local_dc + -1 + uVar14;
      if ((int)local_60 < (int)local_184) {
        local_184 = local_60;
      }
    }
LAB_14ae90110:
    while( true ) {
      pFVar6 = local_d8.Value;
      if ((int)(local_d8.Value)->_padding_ - *(int *)((longlong)&(local_d8.Value)->_padding_ + 4) !=
          (int)uStack_a8) {
        local_180 = 0;
        `TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_180);
      }
      if (((TStack_c8.CurrentBitIndex == local_184) &&
          (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (pFVar6 == (FMetasoundFrontendInterface *)local_88)) break;
      local_178 = (TSearchEngineQuery<Metasound::Frontend::FFindInterfaceWithHighestVersionQueryPolicy>
                   *)(pFVar6->_padding_ + (longlong)TStack_c8.CurrentBitIndex * 0x28);
      FVar9 = (ForElementType<Metasound::FFrontendQueryEntry>)
              TSortedMap<Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>,TLess<Metasound::FFrontendQueryKey_const_&>_>
              ::Find((pTVar5->Query).Result.Object,(FFrontendQueryKey *)local_178);
      if (FVar9 == (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
        if (*(int *)&(pTVar5->ResultCache).field_0x8 != *(int *)&(pTVar5->ResultCache).field_0x34) {
          TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
          ::RemoveImpl<Metasound::FFrontendQueryKey>
                    ((TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
                      *)&pTVar5->ResultCache,
                     *(uint *)(local_178->QueryCriticalSection).CriticalSection.Opaque3,
                     (FFrontendQueryKey *)local_178);
        }
      }
      else {
        uStack_128 = 1;
        local_170.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_170.Inputs.ArrayNum = 0;
        local_170.Inputs.ArrayMax = 0;
        local_170.Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_170.Outputs.ArrayNum = 0;
        local_170.Outputs.ArrayMax = 0;
        local_170.Environment.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_170.Environment.ArrayNum = 0;
        local_170.Environment.ArrayMax = 0;
        local_170.ChangeID.A = 0;
        local_170.ChangeID.B = 0;
        local_170.ChangeID.C = 0;
        local_170.ChangeID.D = 0;
        local_130 = 0;
        local_120.Data = (FScriptContainerElement *)0x0;
        local_118 = 0;
        if (*(int *)((longlong)FVar9 + 0xb8) < 1) {
          local_17f[0] = 0;
          bVar8 = `Metasound::Frontend::SearchEngineQuerySteps::BuildSingleInterfaceFromPartition'::
                  __l3::<lambda_1>::operator()(local_17f);
          if (bVar8) goto LAB_14ae901df;
        }
        else {
LAB_14ae901df:
          if ((*(int *)((longlong)FVar9 + 0xb8) < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0) !=
              (ForElementType<Metasound::FFrontendQueryEntry>)0x0) {
            FVar9 = *(ForElementType<Metasound::FFrontendQueryEntry> *)((longlong)FVar9 + 0xb0);
          }
          if ((*(char *)((longlong)FVar9 + 0xa0) != '\x04') &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FMetasoundFrontendClassInterface::operator=
                    (&local_170,(FMetasoundFrontendClassInterface *)((longlong)FVar9 + 0x10));
          local_130 = *(undefined8 *)((longlong)FVar9 + 0x50);
          uStack_128 = *(undefined8 *)((longlong)FVar9 + 0x58);
          if (&local_120 != (ForAnyElementType *)((longlong)FVar9 + 0x60)) {
            iVar15 = *(int *)((longlong)FVar9 + 0x68);
            _Src = ((ForAnyElementType *)((longlong)FVar9 + 0x60))->Data;
            local_118 = CONCAT44(local_118._4_4_,iVar15);
            if ((iVar15 == 0) && (local_118._4_4_ == 0)) {
              local_118 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x14,4,iVar15,local_118._4_4_,&local_120,iVar15,
                         (int *)((longlong)&local_118 + 4));
              if (iVar15 != 0) {
                memcpy(local_120.Data,_Src,(longlong)iVar15 * 0x14);
              }
            }
          }
        }
        local_98 = &local_170;
        local_a0 = local_178;
        TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<Metasound::FFrontendQueryKey_const_&,FMetasoundFrontendInterface_&&>_>
                  ((TSet<TTuple<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>,TDefaultMapHashableKeyFuncs<Metasound::FFrontendQueryKey,FMetasoundFrontendInterface,0>,FDefaultSetAllocator>
                    *)&pTVar5->ResultCache,&local_d8,(bool *)&local_a0);
        if (local_120.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data);
        }
        if (local_170.Environment.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Environment.AllocatorInstance.Data);
        }
        if (local_170.Outputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Outputs.AllocatorInstance.Data);
        }
        DestructItems<FMetasoundFrontendClassInput,int>
                  ((FMetasoundFrontendClassInput *)local_170.Inputs.AllocatorInstance.Data,
                   local_170.Inputs.ArrayNum);
        if ((FMetasoundFrontendClassInput *)local_170.Inputs.AllocatorInstance.Data !=
            (FMetasoundFrontendClassInput *)0x0) {
          FMemory::Free(local_170.Inputs.AllocatorInstance.Data);
        }
      }
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    }
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar2) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<Metasound::FFrontendQueryKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (0 < iVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

