// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FLLMTraceWriter @ 1416785f0

FLLMTraceWriter * __thiscall UE::LLMPrivate::FLLMTraceWriter::FLLMTraceWriter(FLLMTraceWriter *this)

{
  *(undefined8 *)&this->DeclaredTags = 0;
  *(undefined8 *)&(this->DeclaredTags).field_0x8 = 0;
  *(undefined8 *)&(this->DeclaredTags).field_0x10 = 0;
  *(undefined8 *)&(this->DeclaredTags).field_0x28 = 0;
  *(undefined8 *)&(this->DeclaredTags).field_0x30 = 0;
  *(undefined4 *)&(this->DeclaredTags).field_0x38 = 0;
  *(undefined4 *)&(this->DeclaredTags).field_0x3c = 0x80;
  *(undefined4 *)&(this->DeclaredTags).field_0x44 = 0;
  *(undefined4 *)&(this->DeclaredTags).field_0x40 = 0xffffffff;
  *(undefined8 *)&(this->DeclaredTags).field_0x50 = 0;
  *(undefined8 *)&(this->DeclaredTags).field_0x58 = 0;
  *(undefined4 *)&(this->DeclaredTags).field_0x60 = 0;
  this->bTrackerSpecSent = false;
  this->bTagSetSpecSent = false;
  return this;
}

// operator() @ 14167cc20

void __thiscall
`UE::LLMPrivate::FLLMTraceWriter::Publish'::__l2::<lambda_1>::operator()
          (void *this,FTagData *param_1,long64 param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  long64 local_res18 [2];
  FTagData *local_18 [2];
  
  if (param_1 != (FTagData *)0x0) {
    pFVar2 = *(ForAnyElementType **)this;
    local_res18[0] = param_2;
    local_18[0] = param_1;
    if ((pFVar2->Data <= local_18) &&
       (local_18 <
        (FTagData **)
        ((longlong)pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(FTagData **)((longlong)pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    if ((pFVar2->Data <= local_res18) &&
       (local_res18 <
        (long64 *)((longlong)pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    *(long64 *)((longlong)pFVar2->Data + (longlong)iVar5 * 8) = local_res18[0];
  }
  return;
}

// Clear @ 14168aa50

void __thiscall UE::LLMPrivate::FLLMTraceWriter::Clear(FLLMTraceWriter *this)

{
  TLLMSet<UE::LLMPrivate::FTagData_const_*> *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->DeclaredTags;
  bVar3 = 1 < *(int *)&(this->DeclaredTags).field_0x60;
  if (!bVar3) {
    TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
    ::UnhashElements((TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
                      *)this_00);
  }
  puVar1 = &(this->DeclaredTags).field_0x14;
  *(undefined4 *)&(this->DeclaredTags).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->DeclaredTags).field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->DeclaredTags).field_0x44 = 0;
  iVar2 = *(int *)&(this->DeclaredTags).field_0x3c;
  *(undefined4 *)&(this->DeclaredTags).field_0x38 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->DeclaredTags).field_0x3c = 0x80;
    TBitArray<FDefaultBitArrayLLMAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayLLMAllocator> *)&(this->DeclaredTags).field_0x18,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->DeclaredTags).field_0x60 = 1;
    TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
    ::Rehash((TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
              *)this_00);
  }
  return;
}

// GetTagId @ 1416a0a80

void * __cdecl UE::LLMPrivate::FLLMTraceWriter::GetTagId(FTagData *param_1)

{
  return param_1;
}

// Publish @ 1416b77e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESizeParams": Some values do not have unique names */

void __thiscall
UE::LLMPrivate::FLLMTraceWriter::Publish
          (FLLMTraceWriter *this,FLowLevelMemTracker *param_1,
          TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *param_2,
          FTagData *param_3,FTagData *param_4,long64 param_5,ESizeParams param_6)

{
  int *piVar1;
  undefined1 *puVar2;
  ELLMTagSet EVar3;
  uint uVar4;
  FTagData *pFVar5;
  FTagData *pFVar6;
  FName *pFVar7;
  code *pcVar8;
  char *pcVar9;
  FName FVar10;
  ForAnyElementType *pFVar11;
  ForAnyElementType *pFVar12;
  FLLMTraceWriter *this_00;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *pTVar13;
  bool bVar14;
  int iVar15;
  FTagData **ppFVar16;
  FTrackerTagSizeData *pFVar17;
  longlong lVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *pTVar22;
  byte bVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  long64 lVar27;
  undefined1 *puVar28;
  uint *puVar29;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298;
  undefined1 local_297 [7];
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *local_290;
  FName *local_288;
  longlong local_280;
  FTagData *local_278;
  ForAnyElementType local_270;
  int local_260;
  int local_25c;
  ForAnyElementType *local_258;
  ForAnyElementType *local_250;
  ForAnyElementType local_248;
  undefined8 local_238;
  FLLMTraceWriter *local_230;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *local_228;
  int iStack_220;
  uint uStack_21c;
  undefined1 *local_218;
  undefined4 uStack_210;
  int iStack_20c;
  int local_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  FTagData *local_1e8;
  LARGE_INTEGER local_1e0;
  FTagDataNameKey local_1d8;
  FImportantLogScope local_1c8;
  FImportantLogScope local_1b8;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  undefined1 *local_198;
  undefined4 uStack_190;
  int iStack_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *local_178;
  TConstSetBitIterator<FDefaultBitArrayLLMAllocator> TStack_170;
  undefined8 uStack_150;
  TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *local_148;
  TConstSetBitIterator<FDefaultBitArrayLLMAllocator> TStack_140;
  undefined8 uStack_120;
  char *local_118;
  undefined4 local_110 [2];
  char *local_108;
  undefined4 local_100;
  char *local_f8;
  undefined4 local_f0 [2];
  char *local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined4 local_7c;
  ELLMTracker *local_78;
  longlong local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_230 = this;
  local_1e8 = param_3;
  local_278 = param_4;
  if (MemTagChannel->Enabled < 0) {
    return;
  }
  local_290 = param_2;
  if (this->bTrackerSpecSent == false) {
    local_110[0] = 8;
    local_118 = "Platform";
    local_108 = "Default";
    local_100 = 7;
    this->bTrackerSpecSent = true;
    pcVar9 = *(char **)(local_110 + (ulonglong)this->Tracker * 4 + -2);
    uStack_b0 = *(undefined8 *)(local_110 + (ulonglong)this->Tracker * 4);
    local_b8 = pcVar9;
    if (-1 < MemTagChannel->Enabled) {
      uVar24 = (uint)uStack_b0;
      Trace::Private::FImportantLogScope::Enter<FLLMTrackerSpecFields>(&local_1c8,uVar24);
      *local_1c8.Ptr = this->Tracker;
      Trace::Private::FImportantLogScope::
      FFieldSet<UE::Trace::TField<1,1,enum_UE::Trace::AnsiString>,enum_UE::Trace::AnsiString>::Impl
                (&local_1c8,pcVar9,uVar24);
      LOCK();
      *(undefined4 *)(local_1c8.Ptr + local_1c8.BufferOffset) =
           *(undefined4 *)(local_1c8.Ptr + local_1c8.BufferOffset) + Default;
      UNLOCK();
    }
  }
  if ((this->bTagSetSpecSent == false) && (this->Tracker == Default)) {
    this->bTagSetSpecSent = true;
    local_f8 = "System";
    uVar25 = 0;
    local_f0[0] = 6;
    local_e8 = "Assets";
    local_d8 = "AssetClasses";
    local_c8 = "UObjectClasses";
    local_e0 = 6;
    local_d0 = 0xc;
    local_c0 = 0xe;
    do {
      if ((FLowLevelMemTracker::EnabledState != Disabled) &&
         (FLowLevelMemTracker::BootstrapInitialise(param_1), param_1->ActiveSets[uVar25] != false))
      {
        pcVar9 = *(char **)(local_f0 + uVar25 * 4 + -2);
        uStack_a0 = *(undefined8 *)(local_f0 + uVar25 * 4);
        local_a8 = pcVar9;
        if (-1 < MemTagChannel->Enabled) {
          uVar24 = (uint)uStack_a0;
          Trace::Private::FImportantLogScope::Enter<FLLMTagSetSpecFields>(&local_1b8,uVar24);
          *local_1b8.Ptr = (uchar)uVar25;
          Trace::Private::FImportantLogScope::
          FFieldSet<UE::Trace::TField<1,1,enum_UE::Trace::AnsiString>,enum_UE::Trace::AnsiString>::
          Impl(&local_1b8,pcVar9,uVar24);
          LOCK();
          *(int *)(local_1b8.Ptr + local_1b8.BufferOffset) =
               *(int *)(local_1b8.Ptr + local_1b8.BufferOffset) + 1;
          UNLOCK();
        }
      }
      bVar23 = (uchar)uVar25 + 1;
      uVar25 = (ulonglong)bVar23;
    } while (bVar23 < 4);
  }
  SendTagDeclaration(this,param_3);
  SendTagDeclaration(this,param_4);
  iVar15 = *(int *)&param_2->field_0x38;
  puVar2 = &param_2->field_0x18;
  iStack_220 = 0;
  local_208 = 0;
  uStack_21c = 1;
  iStack_20c = 0;
  if (iVar15 != 0) {
    puVar29 = *(uint **)&param_2->field_0x28;
    if (*(uint **)&param_2->field_0x28 == (uint *)0x0) {
      puVar29 = (uint *)puVar2;
    }
    uVar24 = *puVar29;
    while (uVar24 == 0) {
      lVar18 = (longlong)iStack_220;
      local_208 = local_208 + 0x20;
      iStack_220 = iStack_220 + 1;
      iStack_20c = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_220) goto LAB_1416b7a9d;
      uVar24 = puVar29[lVar18 + 1];
    }
    uStack_21c = -uVar24 & uVar24;
    uVar25 = (ulonglong)uStack_21c * 2 + 1;
    lVar18 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1f8 = (int)lVar18;
    iStack_20c = local_208 + -1 + local_1f8;
    if (iVar15 < iStack_20c) {
      iStack_20c = iVar15;
    }
  }
LAB_1416b7a9d:
  uStack_204 = local_7c;
  iStack_200 = *(int *)&param_2->field_0x10 - *(int *)&param_2->field_0x44;
  uVar24 = *(uint *)&param_2->field_0x38;
  TStack_170._padding_ = CONCAT44(uStack_21c,iStack_220);
  uVar21 = uVar24 & 0xffffffe0;
  uStack_210 = 0xffffffff;
  TStack_170.CurrentBitIndex = iStack_20c;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar24 >> 5;
  TStack_170._28_4_ = local_7c;
  TStack_170.BaseBitIndex = local_208;
  uStack_150 = CONCAT44(uStack_1fc,iStack_200);
  local_228 = param_2;
  local_218 = puVar2;
  local_178 = param_2;
  TStack_170.Array = (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar2;
  if ((((int)uVar24 < 0) || (iVar15 < (int)uVar24)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = local_230;
  pTVar22 = local_290;
  uVar4 = *(uint *)&param_2->field_0x38;
  if (uVar24 != uVar4) {
    puVar28 = *(undefined1 **)&param_2->field_0x28;
    if (*(undefined1 **)&param_2->field_0x28 == (undefined1 *)0x0) {
      puVar28 = puVar2;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar19 * 4);
    while (uVar24 == 0) {
      lVar18 = (longlong)iVar19;
      uVar21 = uVar21 + 0x20;
      iVar19 = iVar19 + 1;
      uVar24 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1416b7bc0;
      uVar24 = *(uint *)(puVar28 + lVar18 * 4 + 4);
    }
    uVar25 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1f4 = (int)lVar18;
    uVar24 = (uVar21 - 1) + local_1f4;
    if ((int)uVar4 < (int)uVar24) {
      uVar24 = uVar4;
    }
  }
LAB_1416b7bc0:
  while( true ) {
    pTVar13 = local_178;
    if (*(int *)&local_178->field_0x10 - *(int *)&local_178->field_0x44 != (int)uStack_150) {
      local_298 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_298);
    }
    if (((TStack_170.CurrentBitIndex == uVar24) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar2)) &&
       (pTVar13 == pTVar22)) break;
    pFVar5 = *(FTagData **)((longlong)TStack_170.CurrentBitIndex * 0x38 + *(longlong *)pTVar13);
    if ((((pFVar5->bIsReportable != false) &&
         (EVar3 = pFVar5->TagSet, FLowLevelMemTracker::EnabledState != Disabled)) &&
        (FLowLevelMemTracker::BootstrapInitialise(param_1), param_1->ActiveSets[EVar3] != false)) &&
       (((local_278 == (FTagData *)0x0 || (pFVar5->TagSet != None)) ||
        (pFVar5->Name != TagName_Untagged)))) {
      SendTagDeclaration(this_00,pFVar5);
    }
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayLLMAllocator>::FindFirstSetBit(&TStack_170);
  }
  uVar24 = (*(int *)&pTVar22->field_0x10 - *(int *)&pTVar22->field_0x44) + 2;
  local_238 = 0;
  local_248.Data = (uchar *)0x0;
  local_248.Size = 0;
  local_260 = 0;
  local_270.Data = (uchar *)0x0;
  local_270.Size = 0;
  local_25c = 0;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  if (0 < (int)uVar24) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,uVar24,&local_248,0,(int *)((longlong)&local_238 + 4));
  }
  pTVar22 = local_290;
  uVar24 = (*(int *)&local_290->field_0x10 - *(int *)&local_290->field_0x44) + 2;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  if (local_25c < (int)uVar24) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (8,8,uVar24,&local_270,local_260,&local_25c);
  }
  local_258 = &local_248;
  local_250 = &local_270;
  `UE::LLMPrivate::FLLMTraceWriter::Publish'::__l2::<lambda_1>::operator()
            (&local_258,local_1e8,param_5);
  pFVar5 = local_278;
  FVar10 = TagName_Untagged;
  if (local_278 == (FTagData *)0x0) goto LAB_1416b7dec;
  AcquireSRWLockShared((PSRWLOCK)&param_1->TagDataMutex);
  local_1d8.Name = FVar10;
  local_1d8.TagSet = None;
  ppFVar16 = TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
             ::Find((TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
                     *)param_1->TagDataNameMap,&local_1d8);
  if (ppFVar16 == (FTagData **)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)&param_1->TagDataMutex);
LAB_1416b7ddd:
    lVar27 = 0;
  }
  else {
    pFVar6 = *ppFVar16;
    FLowLevelMemTracker::FinishConstruct(param_1,pFVar6,FunctionAPI);
    ReleaseSRWLockShared((PSRWLOCK)&param_1->TagDataMutex);
    if ((pFVar6 == (FTagData *)0x0) ||
       (pFVar17 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                  ::Find((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                          *)pTVar22,pFVar6), pFVar17 == (FTrackerTagSizeData *)0x0))
    goto LAB_1416b7ddd;
    lVar27 = pFVar17->Size;
    if ((param_6 & ReportPeak) != Default) {
      lVar27 = pFVar17->PeakSize;
    }
    if ((param_6 & RelativeToSnapshot) != Default) {
      lVar26 = lVar27 - pFVar17->SizeInSnapshot;
      lVar18 = 0x7fffffffffffffff;
      if (lVar26 < 0x7fffffffffffffff) {
        lVar18 = lVar26;
      }
      lVar27 = 0;
      if (0 < lVar18) {
        lVar27 = lVar18;
      }
    }
  }
  `UE::LLMPrivate::FLLMTraceWriter::Publish'::__l2::<lambda_1>::operator()(&local_258,pFVar5,lVar27)
  ;
LAB_1416b7dec:
  iVar15 = *(int *)&param_2->field_0x38;
  iStack_1a0 = 0;
  local_188 = 0;
  uStack_19c = 1;
  iStack_18c = 0;
  if (iVar15 != 0) {
    puVar29 = *(uint **)&param_2->field_0x28;
    if (*(uint **)&param_2->field_0x28 == (uint *)0x0) {
      puVar29 = (uint *)puVar2;
    }
    uVar24 = *puVar29;
    while (uVar24 == 0) {
      lVar18 = (longlong)iStack_1a0;
      local_188 = local_188 + 0x20;
      iStack_1a0 = iStack_1a0 + 1;
      iStack_18c = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a0) goto LAB_1416b7e6d;
      uVar24 = puVar29[lVar18 + 1];
    }
    uStack_19c = -uVar24 & uVar24;
    uVar25 = (ulonglong)uStack_19c * 2 + 1;
    lVar18 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1f0 = (int)lVar18;
    iStack_18c = local_188 + -1 + local_1f0;
    if (iVar15 < iStack_18c) {
      iStack_18c = iVar15;
    }
  }
LAB_1416b7e6d:
  uVar24 = *(uint *)&pTVar22->field_0x38;
  iStack_184 = iStack_20c;
  iStack_180 = *(int *)&pTVar22->field_0x10 - *(int *)&pTVar22->field_0x44;
  uVar21 = uVar24 & 0xffffffe0;
  uStack_190 = 0xffffffff;
  local_1a8 = pTVar22;
  TStack_140._padding_ = CONCAT44(uStack_19c,iStack_1a0);
  TStack_140.CurrentBitIndex = iStack_18c;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  local_148 = pTVar22;
  iVar19 = (int)uVar24 >> 5;
  TStack_140._28_4_ = iStack_20c;
  TStack_140.BaseBitIndex = local_188;
  uStack_120 = CONCAT44(uStack_17c,iStack_180);
  local_198 = puVar2;
  TStack_140.Array = (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar2;
  if ((((int)uVar24 < 0) || (iVar15 < (int)uVar24)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x38;
  if (uVar24 != uVar4) {
    puVar28 = *(undefined1 **)&param_2->field_0x28;
    if (*(undefined1 **)&param_2->field_0x28 == (undefined1 *)0x0) {
      puVar28 = puVar2;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar19 * 4);
    while (uVar24 == 0) {
      lVar18 = (longlong)iVar19;
      uVar21 = uVar21 + 0x20;
      iVar19 = iVar19 + 1;
      uVar24 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1416b7f80;
      uVar24 = *(uint *)(puVar28 + lVar18 * 4 + 4);
    }
    uVar25 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1ec = (int)lVar18;
    uVar24 = (uVar21 - 1) + local_1ec;
    if ((int)uVar4 < (int)uVar24) {
      uVar24 = uVar4;
    }
  }
LAB_1416b7f80:
  do {
    pTVar13 = local_148;
    if (*(int *)&local_148->field_0x10 - *(int *)&local_148->field_0x44 != (int)uStack_120) {
      local_297[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_297);
    }
    if (((TStack_140.CurrentBitIndex == uVar24) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar2)) &&
       (pTVar13 == pTVar22)) {
      iVar15 = (int)local_238;
      if ((int)local_238 != local_260) {
        HandleAssert(true,L"LLM check failed: %s [File:%s] [Line: %d]\r\n");
        FWindowsPlatformMisc::RaiseException(1);
      }
      QueryPerformanceCounter(&local_1e0);
      if (-1 < MemTagChannel->Enabled) {
        Trace::Private::FLogScope::Enter<FLLMTagValueFields>((TLogScope<1> *)&local_78);
        uVar24 = iVar15 * 8 & 0x7fff8;
        *local_78 = local_230->Tracker;
        *(LARGE_INTEGER *)(local_78 + 1) = local_1e0;
        Trace::Private::Field_WriteAuxData(2,local_248.Data,uVar24);
        Trace::Private::Field_WriteAuxData(3,local_270.Data,uVar24);
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar18 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar18 = *(longlong *)(lVar18 + 0x20);
        **(undefined1 **)(lVar18 + 0x20) = 6;
        lVar26 = *(longlong *)(lVar18 + 0x20) + 1;
        *(longlong *)(lVar18 + 0x20) = lVar26;
        if (lVar18 != local_70) {
          *(longlong *)(lVar18 + 0x28) = lVar26;
        }
        *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(local_70 + 0x20);
      }
      if (local_270.Data != (uchar *)0x0) {
        FLLMAllocator::Free(Allocator,local_270.Data,local_270.Size);
      }
      if (local_248.Data != (uchar *)0x0) {
        FLLMAllocator::Free(Allocator,local_248.Data,local_248.Size);
      }
      return;
    }
    plVar20 = (longlong *)(*(longlong *)pTVar13 + (longlong)TStack_140.CurrentBitIndex * 0x38);
    pFVar7 = (FName *)*plVar20;
    if ((((char)pFVar7[7].ComparisonIndex.Value != '\0') &&
        (uVar21 = pFVar7[6].Number, pTVar22 = local_290,
        FLowLevelMemTracker::EnabledState != Disabled)) &&
       ((FLowLevelMemTracker::BootstrapInitialise(param_1), pFVar11 = local_258, pTVar22 = local_290
        , param_1->ActiveSets[(byte)uVar21] != false &&
        (((local_278 == (FTagData *)0x0 || ((char)pFVar7[6].Number != '\0')) ||
         (*pFVar7 != TagName_Untagged)))))) {
      local_280 = plVar20[1];
      if ((param_6 & ReportPeak) != Default) {
        local_280 = plVar20[2];
      }
      if ((param_6 & RelativeToSnapshot) != Default) {
        lVar18 = 0x7fffffffffffffff;
        if (local_280 - plVar20[3] < 0x7fffffffffffffff) {
          lVar18 = local_280 - plVar20[3];
        }
        local_280 = 0;
        if (0 < lVar18) {
          local_280 = lVar18;
        }
      }
      if (pFVar7 != (FName *)0x0) {
        local_288 = pFVar7;
        if (((local_258->Data <= &local_288) &&
            (&local_288 <
             (FName **)
             ((longlong)local_258->Data + (longlong)*(int *)((longlong)&local_258[1].Data + 4) * 8))
            ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = *(int *)&pFVar11[1].Data;
        piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
        if (iVar15 == *piVar1) {
          iVar15 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                             (0x808,pFVar11,piVar1);
        }
        pFVar12 = local_250;
        *(int *)&pFVar11[1].Data = iVar15 + 1;
        *(FName **)((longlong)pFVar11->Data + (longlong)iVar15 * 8) = local_288;
        if (((local_250->Data <= &local_280) &&
            (&local_280 <
             (longlong *)
             ((longlong)local_250->Data + (longlong)*(int *)((longlong)&local_250[1].Data + 4) * 8))
            ) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = *(int *)&pFVar12[1].Data;
        piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
        if (iVar15 == *piVar1) {
          iVar15 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TSizedLLMAllocator<32>::ForAnyElementType>
                             (0x808,pFVar12,piVar1);
        }
        *(int *)&pFVar12[1].Data = iVar15 + 1;
        *(longlong *)((longlong)pFVar12->Data + (longlong)iVar15 * 8) = local_280;
        pTVar22 = local_290;
      }
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayLLMAllocator>::FindFirstSetBit(&TStack_140);
  } while( true );
}

// SendTagDeclaration @ 1416bf3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::LLMPrivate::FLLMTraceWriter::SendTagDeclaration(FLLMTraceWriter *this,FTagData *param_1)

{
  wchar_t wVar1;
  uchar *puVar2;
  FName FVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  undefined1 auStack_888 [32];
  char local_868;
  FImportantLogScope local_860;
  FTagData *local_850;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  if (param_1 != (FTagData *)0x0) {
    local_28[0] = __security_cookie.value ^ (ulonglong)auStack_888;
    local_860.Ptr = (uchar *)param_1;
    TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
    ::Emplace<UE::LLMPrivate::FTagData_const_*_const_&>
              ((TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetLLMAllocator>
                *)&this->DeclaredTags,&local_850,(bool *)&local_860);
    if (local_868 == '\0') {
      FVar3 = (FName)FTagData::GetParent(param_1);
      SendTagDeclaration(this,(FTagData *)FVar3);
      local_848.Base = local_828;
      local_848.bIsDynamic = false;
      local_848.bIsExternal = false;
      local_848.CurPos = local_828;
      local_848.End = (wchar_t *)local_28;
      FTagData::AppendDisplayPath(param_1,&local_848,-1);
      if (-1 < MemTagChannel->Enabled) {
        Trace::Private::FImportantLogScope::Enter<FLLMTagsSpecFields>
                  (&local_860,(uint)((longlong)local_848.CurPos - (longlong)local_848.Base >> 1));
        puVar2 = local_860.Ptr;
        *(FName *)local_860.Ptr = (FName)param_1;
        *(FName *)((longlong)local_860.Ptr + 8) = FVar3;
        *(ELLMTagSet *)((longlong)local_860.Ptr + 0x10) = param_1->TagSet;
        uVar8 = (longlong)local_848.CurPos - (longlong)local_848.Base >> 1;
        if (local_848.End < local_848.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_848,1);
        }
        *local_848.CurPos = L'\0';
        if ((int)uVar8 < 0) {
          uVar8 = 0;
          wVar1 = *local_848.Base;
          pwVar7 = local_848.Base;
          while (wVar1 != L'\0') {
            pwVar7 = pwVar7 + 1;
            uVar8 = (ulonglong)((int)uVar8 + 1);
            wVar1 = *pwVar7;
          }
        }
        iVar5 = (int)uVar8;
        puVar6 = (uint *)((longlong)&(((FName *)puVar2)->ComparisonIndex).Value +
                         (longlong)local_860.AuxCursor);
        *puVar6 = iVar5 << 0xd | 0x300;
        *(undefined1 *)puVar6 = 1;
        puVar6 = puVar6 + 1;
        if (0 < iVar5) {
          uVar8 = uVar8 & 0xffffffff;
          pwVar7 = local_848.Base;
          do {
            wVar1 = *pwVar7;
            pwVar7 = pwVar7 + 1;
            *(char *)puVar6 = (char)wVar1;
            puVar6 = (uint *)((longlong)puVar6 + 1);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        iVar5 = local_860.AuxCursor + iVar5;
        local_860.AuxCursor = iVar5 + 4;
        *(undefined1 *)((longlong)&((FName *)puVar2)->Number + (longlong)iVar5) = 3;
        piVar4 = (int *)((longlong)&(((FName *)local_860.Ptr)->ComparisonIndex).Value +
                        (longlong)local_860.BufferOffset);
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
    }
  }
  return;
}

