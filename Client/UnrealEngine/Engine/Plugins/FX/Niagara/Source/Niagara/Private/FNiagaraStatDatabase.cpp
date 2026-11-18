// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// AddStatCapture @ 14902b6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraStatDatabase::AddStatCapture
          (FNiagaraStatDatabase *this,TTuple<unsigned___int64,ENiagaraScriptUsage> *param_1,
          TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
          *param_2)

{
  int *piVar1;
  TStatIdData **ppTVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>
  *this_00;
  TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  FStatExecutionTimer *pFVar11;
  longlong lVar12;
  void *pvVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  TTuple<unsigned___int64,ENiagaraScriptUsage> *pTVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_158 [32];
  undefined1 local_108 [8];
  undefined4 local_100 [2];
  TArray<TTuple<unsigned___int64,ENiagaraScriptUsage>,TSizedDefaultAllocator<32>_> local_f8;
  int local_e8;
  int local_e4;
  TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>
  *local_e0;
  LPCRITICAL_SECTION local_d8;
  TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
  *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)&param_2->field_0x8 == *(int *)&param_2->field_0x34) {
    *(undefined4 *)&param_2->field_0x48 = 0;
    pvVar13 = *(void **)&param_2->field_0x40;
  }
  else {
    if (((this->CriticalSection).Object == (FWindowsRecursiveMutex *)0x0) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8123773844012924418>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                           ,0x1fe,"CriticalSection.IsValid()"), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_d8 = (LPCRITICAL_SECTION)(this->CriticalSection).Object;
    if (local_d8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(local_d8);
    uVar16 = 0;
    if (GNiagaraMaxStatInstanceReports <
        *(int *)&(this->StatCaptures).field_0x8 - *(int *)&(this->StatCaptures).field_0x34) {
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 0;
      local_f8.ArrayMax = 0;
      TMapBase<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,0>_>
      ::GetKeys<TSizedDefaultAllocator<32>_>(this,&local_f8);
      iVar14 = local_f8.ArrayNum;
      uVar15 = 0;
      if (0 < local_f8.ArrayNum) {
        uVar15 = local_f8.ArrayNum - 1;
        uVar10 = rand();
        uVar10 = (uint)((float)(uVar10 & 0x7fff) * (float)iVar14 * __real_38000100);
        if ((int)uVar10 < (int)uVar15) {
          uVar15 = uVar10;
        }
      }
      uVar10 = uVar16;
      if ((int)uVar15 < local_f8.ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar18 = (TTuple<unsigned___int64,ENiagaraScriptUsage> *)
                (local_f8.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10);
      if (*(int *)&(this->StatCaptures).field_0x8 != *(int *)&(this->StatCaptures).field_0x34) {
        uVar15 = (int)((ulonglong)*(undefined8 *)pTVar18 >> 0x20) * 0x17 +
                 (int)*(undefined8 *)pTVar18;
        TSet<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>,TDefaultMapHashableKeyFuncs<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>_>
                  (this,(uVar15 >> 2) + 0x9e3779b9 + (uint)(byte)pTVar18->field_0x8 + uVar15 * 0x40
                        ^ uVar15,pTVar18);
      }
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
    }
    uVar15 = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0x17 + (int)*(undefined8 *)param_1;
    local_e0 = TMapBase<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,0>_>
               ::FindOrAddImpl<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>_const_&>
                         (this,(uint)(byte)param_1->field_0x8 + uVar15 * 0x40 +
                               (uVar15 >> 2) + 0x9e3779b9 ^ uVar15,param_1);
    uVar15 = *(uint *)&param_2->field_0x28;
    local_c0 = &param_2->field_0x10;
    uStack_c4 = 1;
    uStack_b4 = uVar16;
    local_b0 = uVar16;
    if (uVar15 != 0) {
      puVar19 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar19 = (uint *)local_c0;
      }
      uVar10 = *puVar19;
      local_b0 = 0;
      uVar16 = 0;
      while (uVar10 == 0) {
        lVar12 = (longlong)(int)uVar16;
        local_b0 = local_b0 + 0x20;
        uVar16 = uVar16 + 1;
        uStack_b4 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
        goto LAB_14902b93f;
        uVar10 = puVar19[lVar12 + 1];
      }
      uStack_c4 = -uVar10 & uVar10;
      uVar3 = (ulonglong)uStack_c4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_e8 = (int)lVar12;
      uStack_b4 = (local_b0 - 1) + local_e8;
      if ((int)uVar15 < (int)uStack_b4) {
        uStack_b4 = uVar15;
      }
    }
LAB_14902b93f:
    uVar10 = *(uint *)&param_2->field_0x28;
    uStack_ac = local_54;
    iStack_a8 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
    uVar20 = uVar10 & 0xffffffe0;
    uStack_b8 = 0xffffffff;
    TStack_98.CurrentBitIndex = uStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,uVar16);
    iVar14 = (int)uVar10 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = param_2;
    uStack_c8 = uVar16;
    local_a0 = param_2;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if ((((int)uVar10 < 0) || ((int)uVar15 < (int)uVar10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = local_e0;
    uVar16 = *(uint *)&param_2->field_0x28;
    if (uVar10 != uVar16) {
      puVar17 = *(undefined1 **)&param_2->field_0x20;
      if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
        puVar17 = &param_2->field_0x10;
      }
      uVar15 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
      while (uVar15 == 0) {
        lVar12 = (longlong)iVar14;
        uVar20 = uVar20 + 0x20;
        iVar14 = iVar14 + 1;
        uVar10 = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14902ba40;
        uVar15 = *(uint *)(puVar17 + lVar12 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_e4 = (int)lVar12;
      uVar10 = local_e4 + -1 + uVar20;
      if ((int)uVar16 < (int)uVar10) {
        uVar10 = uVar16;
      }
    }
LAB_14902ba40:
    while( true ) {
      pTVar8 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_108[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
      }
      if (((TStack_98.CurrentBitIndex == uVar10) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10)) &&
         (pTVar8 == param_2)) break;
      lVar12 = *(longlong *)pTVar8;
      ppTVar2 = (TStatIdData **)(lVar12 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      uVar3 = *(ulonglong *)(lVar12 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      uVar16 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      pFVar11 = TMapBase<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>
                ::FindOrAddImpl<TStatIdData_const_*_const_&>
                          ((TMapBase<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>
                            *)this_00,uVar16 >> 0x10 ^ uVar16,ppTVar2);
      uVar4 = *(undefined4 *)(ppTVar2 + 1);
      iVar14 = (pFVar11->CapturedTimings).ArrayNum;
      local_100[0] = uVar4;
      if (iVar14 < GbMaxStatRecordedFrames) {
        pFVar6 = (pFVar11->CapturedTimings).AllocatorInstance.Data;
        if (((pFVar6 <= (FScriptContainerElement *)local_100) &&
            ((FScriptContainerElement *)local_100 <
             pFVar6 + (longlong)(pFVar11->CapturedTimings).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = (pFVar11->CapturedTimings).ArrayNum;
        piVar1 = &(pFVar11->CapturedTimings).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar11,piVar1);
        }
        (pFVar11->CapturedTimings).ArrayNum = iVar14 + 1;
        *(undefined4 *)((pFVar11->CapturedTimings).AllocatorInstance.Data + (longlong)iVar14 * 4) =
             local_100[0];
      }
      else {
        iVar5 = pFVar11->CurrentIndex;
        if ((-1 < iVar5) && (iVar5 < iVar14)) {
          if ((iVar5 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined4 *)((pFVar11->CapturedTimings).AllocatorInstance.Data + (longlong)iVar5 * 4) =
               uVar4;
          pFVar11->CurrentIndex = (pFVar11->CurrentIndex + 1) % GbMaxStatRecordedFrames;
        }
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    LeaveCriticalSection(local_d8);
    *(undefined4 *)&param_2->field_0x48 = 0;
    pvVar13 = *(void **)&param_2->field_0x40;
  }
  if (pvVar13 != (void *)0x0) {
    FMemory::Free(pvVar13);
  }
  TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_2);
  return;
}

// ClearStatCaptures @ 149032af0

void __thiscall FNiagaraStatDatabase::ClearStatCaptures(FNiagaraStatDatabase *this)

{
  undefined1 *puVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar3;
  bool bVar4;
  
  if (((this->CriticalSection).Object == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8123773844012924418>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                         ,0x1fe,"CriticalSection.IsValid()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this->CriticalSection).Object;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  bVar4 = 1 < *(int *)&(this->StatCaptures).field_0x48;
  if (!bVar4) {
    TSet<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>,TDefaultMapHashableKeyFuncs<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,0>,FDefaultSetAllocator>
    ::UnhashElements(this);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this,0,*(int *)&(this->StatCaptures).field_0x8);
  puVar1 = &(this->StatCaptures).field_0xc;
  *(undefined4 *)&(this->StatCaptures).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->StatCaptures).field_0x34 = 0;
  *(undefined4 *)&(this->StatCaptures).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->StatCaptures).field_0x2c;
  *(undefined4 *)&(this->StatCaptures).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->StatCaptures).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->StatCaptures).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->StatCaptures).field_0x48 = 1;
    TSet<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>,TDefaultMapHashableKeyFuncs<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>,0>,FDefaultSetAllocator>
    ::Rehash(this);
  }
                    /* WARNING: Could not recover jumptable at 0x000149032bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// GetAvailableStatNames @ 149043c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
* __thiscall
FNiagaraStatDatabase::GetAvailableStatNames
          (FNiagaraStatDatabase *this,
          TMap<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
          *__return_storage_ptr__)

{
  FNiagaraStatDatabase *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  FNiagaraStatDatabase *pFVar8;
  bool bVar9;
  TMap<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
  *pTVar10;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  uint *puVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  uint uVar19;
  undefined1 auStackY_188 [32];
  undefined1 local_158;
  undefined1 local_157;
  ENiagaraScriptUsage local_156 [2];
  uint local_154;
  FNiagaraStatDatabase *local_150;
  int iStack_148;
  uint uStack_144;
  TBitArray<FDefaultBitArrayAllocator> *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  TMap<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
  *local_118;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  FName local_100;
  longlong local_f8;
  FNiagaraStatDatabase *local_f0;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  LPCRITICAL_SECTION local_e0;
  FNiagaraStatDatabase *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FNiagaraStatDatabase *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 local_5c;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_118 = __return_storage_ptr__;
  local_f0 = this;
  if (((this->CriticalSection).Object == (FWindowsRecursiveMutex *)0x0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8123773844012924418>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                         ,0x1fe,"CriticalSection.IsValid()"), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TMap<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
               *)(*pcVar7)();
    return pTVar10;
  }
  local_e0 = (LPCRITICAL_SECTION)(this->CriticalSection).Object;
  if (local_e0 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_e0);
  iStack_148 = 0;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->StatCaptures).field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  uStack_144 = 1;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  local_130 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar3 = *(int *)&(this->StatCaptures).field_0x28;
  iStack_134 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->StatCaptures).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar18;
    }
    uVar13 = *puVar17;
    local_130 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      iStack_134 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_149043ddf;
      uVar13 = puVar17[lVar11 + 1];
    }
    uStack_144 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_144 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_110 = (int)lVar11;
    iStack_134 = local_130 + -1 + local_110;
    if (iVar3 < iStack_134) {
      iStack_134 = iVar3;
    }
  }
LAB_149043ddf:
  uVar13 = *(uint *)&(this->StatCaptures).field_0x28;
  uStack_12c = local_5c;
  uVar19 = uVar13 & 0xffffffe0;
  iStack_128 = *(int *)&(this->StatCaptures).field_0x8 - *(int *)&(this->StatCaptures).field_0x34;
  TStack_a0._padding_ = CONCAT44(uStack_144,iStack_148);
  uStack_138 = 0xffffffff;
  TStack_a0.CurrentBitIndex = iStack_134;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_a0._28_4_ = local_5c;
  TStack_a0.BaseBitIndex = local_130;
  uStack_80 = CONCAT44(uStack_124,iStack_128);
  local_154 = uVar13;
  local_150 = this;
  local_140 = pTVar18;
  local_e8 = pTVar18;
  local_a8 = this;
  TStack_a0.Array = pTVar18;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TMap<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
               *)(*pcVar7)();
    return pTVar10;
  }
  pTVar10 = local_118;
  uVar4 = *(uint *)&(this->StatCaptures).field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&(this->StatCaptures).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = (undefined1 *)pTVar18;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar4;
      local_154 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149043f10;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_10c = (int)lVar11;
    uVar13 = local_10c + -1 + uVar19;
    local_154 = uVar13;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
      local_154 = uVar4;
    }
  }
LAB_149043f10:
  do {
    pFVar1 = local_a8;
    if (*(int *)&(local_a8->StatCaptures).field_0x8 - *(int *)&(local_a8->StatCaptures).field_0x34
        != (int)uStack_80) {
      local_158 = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_158);
    }
    if (((TStack_a0.CurrentBitIndex == uVar13) && (TStack_a0.Array == pTVar18)) && (pFVar1 == this))
    {
      LeaveCriticalSection(local_e0);
      return pTVar10;
    }
    iStack_148 = 0;
    local_130 = 0;
    lVar11 = (longlong)TStack_a0.CurrentBitIndex * 0x68 + *(longlong *)&pFVar1->StatCaptures;
    uStack_144 = 1;
    iVar3 = *(int *)(lVar11 + 0x38);
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar11 + 0x20);
    pFVar1 = (FNiagaraStatDatabase *)(lVar11 + 0x10);
    iStack_134 = 0;
    if (iVar3 != 0) {
      pTVar16 = pTVar18;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x30) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x30);
      }
      uVar13 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
      while (uVar13 == 0) {
        lVar12 = (longlong)iStack_148;
        local_130 = local_130 + 0x20;
        iStack_148 = iStack_148 + 1;
        iStack_134 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_149043fde;
        uVar13 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uStack_144 = -uVar13 & uVar13;
      uVar2 = (ulonglong)uStack_144 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_108 = (int)lVar12;
      iStack_134 = local_108 + -1 + local_130;
      if (iVar3 < iStack_134) {
        iStack_134 = iVar3;
      }
    }
LAB_149043fde:
    uVar13 = *(uint *)(lVar11 + 0x38);
    uStack_12c = local_3c;
    iStack_128 = *(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x44);
    uVar19 = uVar13 & 0xffffffe0;
    TStack_d0._padding_ = CONCAT44(uStack_144,iStack_148);
    uStack_138 = 0xffffffff;
    TStack_d0.CurrentBitIndex = iStack_134;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_d0._28_4_ = local_3c;
    TStack_d0.BaseBitIndex = local_130;
    uStack_b0 = CONCAT44(uStack_124,iStack_128);
    local_150 = pFVar1;
    local_140 = pTVar18;
    local_f8 = lVar11;
    local_d8 = pFVar1;
    TStack_d0.Array = pTVar18;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TMap<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                 *)(*pcVar7)();
      return pTVar10;
    }
    lVar12 = local_f8;
    uVar4 = *(uint *)(lVar11 + 0x38);
    if (uVar13 != uVar4) {
      pTVar16 = pTVar18;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x30) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x30);
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) &
               *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar14;
        uVar19 = uVar19 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_149044100;
        uVar13 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_104 = (int)lVar11;
      uVar13 = local_104 + -1 + uVar19;
      if ((int)uVar4 < (int)uVar13) {
        uVar13 = uVar4;
      }
    }
LAB_149044100:
    while( true ) {
      pFVar8 = local_d8;
      if (*(int *)&(local_d8->StatCaptures).field_0x8 - *(int *)&(local_d8->StatCaptures).field_0x34
          != (int)uStack_b0) {
        local_157 = 0;
        `TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,FStatExecutionTimer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_157);
      }
      lVar11 = (longlong)TStack_d0.CurrentBitIndex;
      if (((TStack_d0.CurrentBitIndex == uVar13) && (TStack_d0.Array == pTVar18)) &&
         (pFVar8 == pFVar1)) break;
      local_156[0] = *(ENiagaraScriptUsage *)(lVar12 + 8);
      lVar5 = *(longlong *)&pFVar8->StatCaptures;
      this_00 = TMapBase<enum_ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ENiagaraScriptUsage,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<enum_ENiagaraScriptUsage_const_&>
                          (pTVar10,(uint)local_156[0],local_156);
      uVar6 = **(undefined8 **)(lVar5 + lVar11 * 0x28);
      local_120 = (undefined4)uVar6;
      local_11c = (undefined4)((ulonglong)uVar6 >> 0x20);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                (this_00,&local_100,(bool *)&local_120);
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    pTVar18 = local_e8;
    this = local_f0;
    uVar13 = local_154;
  } while( true );
}

// GetCriticalSection @ 1490448d0

FWindowsRecursiveMutex * __thiscall
FNiagaraStatDatabase::GetCriticalSection(FNiagaraStatDatabase *this)

{
  code *pcVar1;
  bool bVar2;
  FWindowsRecursiveMutex *pFVar3;
  
  if ((this->CriticalSection).Object != (FWindowsRecursiveMutex *)0x0) {
    return (this->CriticalSection).Object;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8123773844012924418>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                     ,0x1fe,"CriticalSection.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWindowsRecursiveMutex *)(*pcVar1)();
    return pFVar3;
  }
  return (this->CriticalSection).Object;
}

// GetRuntimeStat @ 149048840

float __thiscall
FNiagaraStatDatabase::GetRuntimeStat
          (FNiagaraStatDatabase *this,FName param_1,ENiagaraScriptUsage param_2,
          ENiagaraStatEvaluationType param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  float fVar3;
  uint uVar4;
  FName FVar5;
  code *pcVar6;
  undefined4 uVar7;
  FNiagaraStatDatabase *pFVar8;
  FNiagaraStatDatabase *pFVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  float *pfVar14;
  undefined1 *puVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  ForElementType<unsigned_int> FVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176 [6];
  ForElementType<unsigned_int> local_170;
  int local_168;
  FNiagaraStatDatabase *local_160;
  int iStack_158;
  uint uStack_154;
  ForElementType<unsigned_int> local_150;
  undefined4 uStack_148;
  uint uStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  uint local_130;
  uint uStack_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  FNiagaraStatDatabase *local_118;
  LPCRITICAL_SECTION local_110;
  FNiagaraStatDatabase *local_108;
  undefined1 auStack_100 [16];
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  FNiagaraStatDatabase *local_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined4 local_6c;
  
  if (((this->CriticalSection).Object == (FWindowsRecursiveMutex *)0x0) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_8123773844012924418>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                          ,0x1fe,"CriticalSection.IsValid()"), bVar10)) {
    pcVar6 = (code *)swi(3);
    fVar22 = (float)(*pcVar6)();
    return fVar22;
  }
  local_110 = (LPCRITICAL_SECTION)(this->CriticalSection).Object;
  if (local_110 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_110);
  uVar4 = *(uint *)&(this->StatCaptures).field_0x28;
  iStack_158 = 0;
  local_168 = 0;
  local_140 = 0;
  fVar23 = 0.0;
  fVar22 = 0.0;
  uStack_154 = 1;
  uStack_144 = 0;
  if (uVar4 != 0) {
    puVar17 = *(uint **)&(this->StatCaptures).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)&(this->StatCaptures).field_0x10;
    }
    uVar20 = *puVar17;
    while (uVar20 == 0) {
      lVar11 = (longlong)iStack_158;
      local_140 = local_140 + 0x20;
      iStack_158 = iStack_158 + 1;
      uStack_144 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_158)
      goto LAB_149048984;
      uVar20 = puVar17[lVar11 + 1];
    }
    uStack_154 = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_154 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_128 = (int)lVar11;
    uStack_144 = local_140 + -1 + local_128;
    if ((int)uVar4 < (int)uStack_144) {
      uStack_144 = uVar4;
    }
  }
LAB_149048984:
  local_150 = (ForElementType<unsigned_int>)&(this->StatCaptures).field_0x10;
  uVar20 = *(uint *)&(this->StatCaptures).field_0x28;
  uStack_13c = local_8c;
  uVar21 = uVar20 & 0xffffffe0;
  iStack_138 = *(int *)&(this->StatCaptures).field_0x8 - *(int *)&(this->StatCaptures).field_0x34;
  auStack_d0._0_8_ = CONCAT44(uStack_154,iStack_158);
  uStack_148 = 0xffffffff;
  uStack_c0 = 0xffffffff;
  auStack_d0._8_8_ = local_150;
  iStack_bc = uStack_144;
  iVar13 = (int)uVar20 >> 5;
  local_b8._4_4_ = local_8c;
  local_b8._0_4_ = local_140;
  uStack_b0 = CONCAT44(uStack_134,iStack_138);
  local_170._0_4_ = uVar20;
  local_160 = this;
  local_d8 = this;
  if ((((int)uVar20 < 0) || ((int)uVar4 < (int)uVar20)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    fVar22 = (float)(*pcVar6)();
    return fVar22;
  }
  uVar4 = *(uint *)&(this->StatCaptures).field_0x28;
  if (uVar20 != uVar4) {
    puVar15 = *(undefined1 **)&(this->StatCaptures).field_0x20;
    local_170._0_4_ = uVar4;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->StatCaptures).field_0x10;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar20 == 0) {
      lVar11 = (longlong)iVar13;
      uVar21 = uVar21 + 0x20;
      iVar13 = iVar13 + 1;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_149048aa3;
      uVar20 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_124 = (int)lVar11;
    local_170._0_4_ = local_124 + -1 + uVar21;
    if ((int)uVar4 < (int)local_170._0_4_) {
      local_170._0_4_ = uVar4;
    }
  }
LAB_149048aa3:
  uVar7 = local_170._0_4_;
LAB_149048ab0:
  pFVar8 = local_d8;
  if (*(int *)&(local_d8->StatCaptures).field_0x8 - *(int *)&(local_d8->StatCaptures).field_0x34 !=
      (int)uStack_b0) {
    local_178 = 0;
    `TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_178);
  }
  if (((iStack_bc == uVar7) && ((undefined1 *)auStack_d0._8_8_ == &(this->StatCaptures).field_0x10))
     && (pFVar8 == this)) {
    if (param_3 != Maximum) {
      if (local_168 == 0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = fVar23 / (float)local_168;
      }
    }
    LeaveCriticalSection(local_110);
    return fVar22;
  }
  lVar11 = *(longlong *)&pFVar8->StatCaptures;
  lVar19 = (longlong)iStack_bc * 0x68;
  if (param_2 == *(ENiagaraScriptUsage *)(lVar19 + 8 + lVar11)) {
    iStack_158 = 0;
    local_170 = (ForElementType<unsigned_int>)(lVar11 + 0x20 + lVar19);
    local_160 = (FNiagaraStatDatabase *)(lVar11 + 0x10 + lVar19);
    uStack_144 = 0;
    local_140 = 0;
    uStack_154 = 1;
    uVar4 = *(int *)((longlong)local_170 + 0x18);
    local_150 = local_170;
    if (uVar4 != 0) {
      FVar18 = local_170;
      if (*(ForElementType<unsigned_int> *)((longlong)local_170 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar18 = *(ForElementType<unsigned_int> *)((longlong)local_170 + 0x10);
      }
      uVar20 = *(uint *)FVar18;
      while (uVar20 == 0) {
        lVar12 = (longlong)iStack_158;
        local_140 = local_140 + 0x20;
        iStack_158 = iStack_158 + 1;
        uStack_144 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_158)
        goto LAB_149048b9f;
        uVar20 = ((uint *)((longlong)FVar18 + 4))[lVar12];
      }
      uStack_154 = -uVar20 & uVar20;
      uVar2 = (ulonglong)uStack_154 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_120 = (int)lVar12;
      uStack_144 = local_140 + -1 + local_120;
      if ((int)uVar4 < (int)uStack_144) {
        uStack_144 = uVar4;
      }
LAB_149048b9f:
      local_150 = (ForElementType<unsigned_int>)(lVar11 + 0x20 + lVar19);
    }
    uStack_13c = local_6c;
    iStack_138 = *(int *)(lVar19 + 0x18 + lVar11) - *(int *)(lVar19 + 0x44 + lVar11);
    uVar20 = *(uint *)(lVar19 + 0x38 + lVar11);
    uVar21 = uVar20 & 0xffffffe0;
    auStack_100._0_8_ = CONCAT44(uStack_154,iStack_158);
    uStack_148 = 0xffffffff;
    uStack_f0 = 0xffffffff;
    auStack_100._8_8_ = local_150;
    uStack_ec = uStack_144;
    iVar13 = (int)uVar20 >> 5;
    local_e8._4_4_ = local_6c;
    local_e8._0_4_ = local_140;
    uStack_e0 = CONCAT44(uStack_134,iStack_138);
    local_118 = local_160;
    local_108 = local_160;
    if ((((int)uVar20 < 0) || (FVar18 = local_150, (int)uVar4 < (int)uVar20)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), FVar18 = local_170, bVar10)) {
      pcVar6 = (code *)swi(3);
      fVar22 = (float)(*pcVar6)();
      return fVar22;
    }
    pFVar8 = local_118;
    uVar4 = *(int *)((longlong)FVar18 + 0x18);
    if (uVar20 != uVar4) {
      FVar16 = FVar18;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar16 = *(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10);
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar13 * 4);
      while (uVar20 == 0) {
        lVar11 = (longlong)iVar13;
        uVar21 = uVar21 + 0x20;
        iVar13 = iVar13 + 1;
        uVar20 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_149048cd0;
        uVar20 = ((uint *)((longlong)FVar16 + 4))[lVar11];
      }
      uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_11c = (int)lVar11;
      uVar20 = local_11c + -1 + uVar21;
      if ((int)uVar4 < (int)uVar20) {
        uVar20 = uVar4;
      }
    }
LAB_149048cd0:
    do {
      pFVar9 = local_108;
      if (*(int *)&(local_108->StatCaptures).field_0x8 -
          *(int *)&(local_108->StatCaptures).field_0x34 != (int)uStack_e0) {
        local_177 = 0;
        `TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,FStatExecutionTimer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_177);
        FVar18 = local_170;
      }
      lVar11 = (longlong)(int)uStack_ec;
      if (((uStack_ec == uVar20) && ((ForElementType<unsigned_int>)auStack_100._8_8_ == FVar18)) &&
         (pFVar9 == pFVar8)) break;
      lVar19 = *(longlong *)&pFVar9->StatCaptures;
      FVar5 = **(FName **)(lVar19 + lVar11 * 0x28);
      local_130 = (uint)FVar5.ComparisonIndex.Value;
      uStack_12c = FVar5.Number;
      if (FVar5 == param_1) goto LAB_149048d45;
      uStack_f0 = uStack_f0 & ~auStack_100._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_100);
      FVar18 = local_170;
    } while( true );
  }
  goto LAB_149048d92;
LAB_149048d45:
  iVar13 = *(int *)(lVar19 + 0x10 + lVar11 * 0x28);
  pfVar14 = *(float **)(lVar19 + 8 + lVar11 * 0x28);
  local_168 = local_168 + iVar13;
  pfVar1 = pfVar14 + iVar13;
  fVar3 = fVar22;
  while( true ) {
    fVar22 = fVar3;
    if (*(int *)(lVar19 + 0x10 + lVar11 * 0x28) != iVar13) {
      local_176[0] = 0;
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_176);
    }
    if (pfVar14 == pfVar1) break;
    fVar3 = *pfVar14;
    pfVar14 = pfVar14 + 1;
    fVar23 = fVar23 + fVar3;
    if (fVar3 <= fVar22) {
      fVar3 = fVar22;
    }
  }
LAB_149048d92:
  uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
  goto LAB_149048ab0;
}

// GetRuntimeStat @ 149048e30

float __thiscall
FNiagaraStatDatabase::GetRuntimeStat
          (FNiagaraStatDatabase *this,ENiagaraScriptUsage param_1,ENiagaraStatEvaluationType param_2
          )

{
  ulonglong uVar1;
  code *pcVar2;
  FNiagaraStatDatabase *pFVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  ForElementType<unsigned_int> FVar13;
  uint *puVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res20 [8];
  undefined1 local_178 [4];
  uint local_174;
  FNiagaraStatDatabase *local_170;
  int iStack_168;
  uint uStack_164;
  uint *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  FNiagaraStatDatabase *local_130;
  LPCRITICAL_SECTION local_128;
  FNiagaraStatDatabase *local_120;
  undefined1 auStack_118 [16];
  uint uStack_108;
  uint uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  FNiagaraStatDatabase *local_f0;
  undefined1 auStack_e8 [16];
  uint uStack_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_a4;
  undefined4 local_84;
  
  if (((this->CriticalSection).Object == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8123773844012924418>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                         ,0x1fe,"CriticalSection.IsValid()"), bVar4)) {
    pcVar2 = (code *)swi(3);
    fVar18 = (float)(*pcVar2)();
    return fVar18;
  }
  local_128 = (LPCRITICAL_SECTION)(this->CriticalSection).Object;
  if (local_128 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_128);
  uVar11 = *(uint *)&(this->StatCaptures).field_0x28;
  iVar10 = 0;
  iStack_168 = 0;
  local_150 = 0;
  fVar19 = 0.0;
  fVar18 = 0.0;
  uStack_164 = 1;
  uStack_154 = 0;
  if (uVar11 != 0) {
    puVar14 = *(uint **)&(this->StatCaptures).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)&(this->StatCaptures).field_0x10;
    }
    uVar8 = *puVar14;
    while (uVar8 == 0) {
      lVar5 = (longlong)iStack_168;
      local_150 = local_150 + 0x20;
      iStack_168 = iStack_168 + 1;
      uStack_154 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_168)
      goto LAB_149048f73;
      uVar8 = puVar14[lVar5 + 1];
    }
    uStack_164 = -uVar8 & uVar8;
    uVar1 = (ulonglong)uStack_164 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_140 = (int)lVar5;
    uStack_154 = local_150 + -1 + local_140;
    if ((int)uVar11 < (int)uStack_154) {
      uStack_154 = uVar11;
    }
  }
LAB_149048f73:
  local_160 = (uint *)&(this->StatCaptures).field_0x10;
  uVar8 = *(uint *)&(this->StatCaptures).field_0x28;
  uStack_14c = local_a4;
  uVar17 = uVar8 & 0xffffffe0;
  iStack_148 = *(int *)&(this->StatCaptures).field_0x8 - *(int *)&(this->StatCaptures).field_0x34;
  auStack_e8._0_8_ = CONCAT44(uStack_164,iStack_168);
  uStack_158 = 0xffffffff;
  uStack_d8 = 0xffffffff;
  auStack_e8._8_8_ = local_160;
  uStack_d4 = uStack_154;
  iVar9 = (int)uVar8 >> 5;
  local_d0._4_4_ = local_a4;
  local_d0._0_4_ = local_150;
  uStack_c8 = CONCAT44(uStack_144,iStack_148);
  local_174 = uVar8;
  local_170 = this;
  local_f0 = this;
  if ((((int)uVar8 < 0) || ((int)uVar11 < (int)uVar8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    fVar18 = (float)(*pcVar2)();
    return fVar18;
  }
  uVar11 = *(uint *)&(this->StatCaptures).field_0x28;
  iVar16 = 0;
  if (uVar8 != uVar11) {
    puVar12 = *(undefined1 **)&(this->StatCaptures).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->StatCaptures).field_0x10;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (iVar16 = iVar10, uVar8 == 0) {
      lVar5 = (longlong)iVar9;
      uVar17 = uVar17 + 0x20;
      iVar9 = iVar9 + 1;
      uVar8 = uVar11;
      local_174 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_1490490a0;
      uVar8 = *(uint *)(puVar12 + lVar5 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_13c = (int)lVar5;
    uVar8 = local_13c + -1 + uVar17;
    local_174 = uVar8;
    if ((int)uVar11 < (int)uVar8) {
      uVar8 = uVar11;
      local_174 = uVar11;
    }
  }
LAB_1490490a0:
  do {
    pFVar3 = local_f0;
    if (*(int *)&(local_f0->StatCaptures).field_0x8 - *(int *)&(local_f0->StatCaptures).field_0x34
        != (int)uStack_c8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((uStack_d4 == uVar8) &&
        ((undefined1 *)auStack_e8._8_8_ == &(this->StatCaptures).field_0x10)) && (pFVar3 == this)) {
      if (param_2 != Maximum) {
        if (iVar16 == 0) {
          fVar18 = 0.0;
        }
        else {
          fVar18 = fVar19 / (float)iVar16;
        }
      }
      LeaveCriticalSection(local_128);
      return fVar18;
    }
    lVar5 = *(longlong *)&pFVar3->StatCaptures;
    lVar15 = (longlong)(int)uStack_d4 * 0x68;
    if (param_1 == *(ENiagaraScriptUsage *)(lVar15 + 8 + lVar5)) {
      iStack_168 = 0;
      local_160 = (uint *)(lVar5 + 0x20 + lVar15);
      local_170 = (FNiagaraStatDatabase *)(lVar5 + 0x10 + lVar15);
      local_150 = 0;
      uStack_164 = 1;
      uVar11 = local_160[6];
      uStack_154 = 0;
      if (uVar11 != 0) {
        puVar14 = local_160;
        if (*(uint **)(local_160 + 4) != (uint *)0x0) {
          puVar14 = *(uint **)(local_160 + 4);
        }
        uVar8 = *puVar14;
        while (uVar8 == 0) {
          lVar6 = (longlong)iStack_168;
          local_150 = local_150 + 0x20;
          iStack_168 = iStack_168 + 1;
          uStack_154 = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_168)
          goto LAB_149049191;
          uVar8 = puVar14[lVar6 + 1];
        }
        uStack_164 = -uVar8 & uVar8;
        uVar1 = (ulonglong)uStack_164 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        local_138 = (int)lVar6;
        uStack_154 = local_150 + -1 + local_138;
        if ((int)uVar11 < (int)uStack_154) {
          uStack_154 = uVar11;
        }
      }
LAB_149049191:
      uStack_14c = local_84;
      iStack_148 = *(int *)(lVar15 + 0x18 + lVar5) - *(int *)(lVar15 + 0x44 + lVar5);
      FVar7 = (ForElementType<unsigned_int>)(lVar5 + 0x20 + lVar15);
      uVar17 = *(uint *)(lVar15 + 0x38 + lVar5);
      auStack_118._0_8_ = CONCAT44(uStack_164,iStack_168);
      uStack_158 = 0xffffffff;
      uStack_108 = 0xffffffff;
      auStack_118._8_8_ = local_160;
      uStack_104 = uStack_154;
      uVar8 = uVar17 & 0xffffffe0;
      iVar10 = (int)uVar17 >> 5;
      local_100._4_4_ = local_84;
      local_100._0_4_ = local_150;
      uStack_f8 = CONCAT44(uStack_144,iStack_148);
      local_130 = local_170;
      local_120 = local_170;
      if ((((int)uVar17 < 0) || ((int)uVar11 < (int)uVar17)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        fVar18 = (float)(*pcVar2)();
        return fVar18;
      }
      uVar11 = *(int *)((longlong)FVar7 + 0x18);
      if (uVar17 != uVar11) {
        FVar13 = FVar7;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar13 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)FVar13 + (longlong)iVar10 * 4);
        while (uVar17 == 0) {
          lVar5 = (longlong)iVar10;
          uVar8 = uVar8 + 0x20;
          iVar10 = iVar10 + 1;
          uVar17 = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
          goto LAB_1490492b0;
          uVar17 = *(uint *)((longlong)FVar13 + 4 + lVar5 * 4);
        }
        uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_134 = (int)lVar5;
        uVar17 = local_134 + -1 + uVar8;
        if ((int)uVar11 < (int)uVar17) {
          uVar17 = uVar11;
        }
      }
LAB_1490492b0:
      while( true ) {
        pFVar3 = local_120;
        if (*(int *)&(local_120->StatCaptures).field_0x8 -
            *(int *)&(local_120->StatCaptures).field_0x34 != (int)uStack_f8) {
          local_178[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<TStatIdData_const_*,FStatExecutionTimer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
        }
        lVar5 = (longlong)(int)uStack_104;
        if (((uStack_104 == uVar17) && ((ForElementType<unsigned_int>)auStack_118._8_8_ == FVar7))
           && (uVar8 = local_174, pFVar3 == local_130)) break;
        lVar15 = *(longlong *)&pFVar3->StatCaptures;
        uVar11 = 0;
        if (0 < *(int *)(lVar15 + 0x10 + lVar5 * 0x28)) {
          lVar6 = 0;
          fVar20 = fVar18;
          do {
            uVar8 = 0;
            if ((int)uVar11 < *(int *)(lVar15 + 0x10 + lVar5 * 0x28)) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              fVar18 = (float)(*pcVar2)();
              return fVar18;
            }
            iVar16 = iVar16 + 1;
            uVar11 = uVar11 + 1;
            fVar18 = *(float *)(lVar6 + *(longlong *)(lVar15 + 8 + lVar5 * 0x28));
            lVar6 = lVar6 + 4;
            fVar19 = fVar19 + fVar18;
            if (fVar18 <= fVar20) {
              fVar18 = fVar20;
            }
            fVar20 = fVar18;
          } while ((int)uVar11 < *(int *)(lVar15 + 0x10 + lVar5 * 0x28));
        }
        uStack_108 = uStack_108 & ~auStack_118._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_118);
      }
    }
    uStack_d8 = uStack_d8 & ~auStack_e8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_e8);
  } while( true );
}

// Init @ 149057cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FNiagaraStatDatabase::Init(FNiagaraStatDatabase *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *local_18;
  FSharedReferencer<1> FStack_10;
  
  if ((this->CriticalSection).Object == (FWindowsRecursiveMutex *)0x0) {
    pTVar3 = ::operator_new(0x38);
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pTVar3 = (TReferenceControllerBase<1> *)0x0;
      local_18 = ___xmm_00000000000000000000000000000010;
      pTVar4 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_10.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFWindowsRecursiveMutex_UE___00_SharedPointerInternals__6B_
      ;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
      pTVar4 = pTVar3 + 1;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      FStack_10.ReferenceController = pTVar3;
      local_18 = pTVar4;
    }
    if (&this->CriticalSection != (TSharedPtr<UE::FWindowsRecursiveMutex,1> *)&local_18) {
      (this->CriticalSection).Object = (FWindowsRecursiveMutex *)pTVar4;
      local_18 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CriticalSection).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

