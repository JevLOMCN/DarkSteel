// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 9

// FTable @ 145c467b0

FTable * __thiscall UE::RHI::GPUProfiler::FTable::FTable(FTable *this)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  pTVar1 = GCVarProfileGPU_UnicodeOutput.Ref;
  bVar2 = IsInParallelGameThread();
  lVar4 = 0;
  if (bVar2) {
LAB_145c467e9:
    lVar3 = lVar4;
  }
  else {
    bVar2 = IsInGameThread();
    lVar3 = 1;
    if (bVar2) goto LAB_145c467e9;
  }
  this->bUnicodeOutput = pTVar1->ShadowedValue[lVar3];
  pTVar1 = GCVarProfileGPU_ShowHeader.Ref;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_145c4680e:
    lVar3 = lVar4;
  }
  else {
    bVar2 = IsInGameThread();
    lVar3 = 1;
    if (bVar2) goto LAB_145c4680e;
  }
  this->bShowHeader = pTVar1->ShadowedValue[lVar3];
  pTVar1 = GCVarProfileGPU_ShowEmptyQueues.Ref;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_145c46834:
    lVar3 = lVar4;
  }
  else {
    bVar2 = IsInGameThread();
    lVar3 = 1;
    if (bVar2) goto LAB_145c46834;
  }
  this->bShowEmptyQueues = pTVar1->ShadowedValue[lVar3];
  pTVar1 = GCVarProfileGPU_ShowStats.Ref;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_145c4685a:
    lVar3 = lVar4;
  }
  else {
    bVar2 = IsInGameThread();
    lVar3 = 1;
    if (bVar2) goto LAB_145c4685a;
  }
  this->bShowStats = pTVar1->ShadowedValue[lVar3];
  pTVar1 = GCVarProfileGPU_ShowPercentColumn.Ref;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_145c46880:
    lVar3 = lVar4;
  }
  else {
    bVar2 = IsInGameThread();
    lVar3 = 1;
    if (bVar2) goto LAB_145c46880;
  }
  this->bShowPercent = pTVar1->ShadowedValue[lVar3];
  pTVar1 = GCVarProfileGPU_ShowInclusive.Ref;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_145c468a6:
    lVar3 = lVar4;
  }
  else {
    bVar2 = IsInGameThread();
    lVar3 = 1;
    if (bVar2) goto LAB_145c468a6;
  }
  this->bShowInclusive = pTVar1->ShadowedValue[lVar3];
  pTVar1 = GCVarProfileGPU_ShowExclusive.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 1;
    if (!bVar2) goto LAB_145c468cc;
  }
  lVar3 = lVar4;
LAB_145c468cc:
  this->bShowExclusive = pTVar1->ShadowedValue[lVar3];
  this->NumRows = 0;
  (this->Columns).Elements[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[0].ArrayNum = 0;
  (this->Columns).Elements[0].ArrayMax = 0;
  (this->Columns).Elements[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[1].ArrayNum = 0;
  (this->Columns).Elements[1].ArrayMax = 0;
  (this->Columns).Elements[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[2].ArrayNum = 0;
  (this->Columns).Elements[2].ArrayMax = 0;
  (this->Columns).Elements[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[3].ArrayNum = 0;
  (this->Columns).Elements[3].ArrayMax = 0;
  (this->Columns).Elements[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[4].ArrayNum = 0;
  (this->Columns).Elements[4].ArrayMax = 0;
  (this->Columns).Elements[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[5].ArrayNum = 0;
  (this->Columns).Elements[5].ArrayMax = 0;
  (this->Columns).Elements[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[6].ArrayNum = 0;
  (this->Columns).Elements[6].ArrayMax = 0;
  (this->Columns).Elements[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[7].ArrayNum = 0;
  (this->Columns).Elements[7].ArrayMax = 0;
  (this->Columns).Elements[8].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[8].ArrayNum = 0;
  (this->Columns).Elements[8].ArrayMax = 0;
  (this->Columns).Elements[9].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[9].ArrayNum = 0;
  (this->Columns).Elements[9].ArrayMax = 0;
  (this->Columns).Elements[10].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[10].ArrayNum = 0;
  (this->Columns).Elements[10].ArrayMax = 0;
  (this->Columns).Elements[0xb].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[0xb].ArrayNum = 0;
  (this->Columns).Elements[0xb].ArrayMax = 0;
  (this->Columns).Elements[0xc].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Columns).Elements[0xc].ArrayNum = 0;
  (this->Columns).Elements[0xc].ArrayMax = 0;
  (this->RowBreaks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowBreaks).ArrayNum = 0;
  (this->RowBreaks).ArrayMax = 0;
  return this;
}

// operator() @ 145c4b7a0

void __thiscall
`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l19::<lambda_10>::operator()
          (void *this,FColumn param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString local_18;
  
  uVar3 = 0;
  if ((int)**(uint **)((longlong)this + 8) <
      *(int *)((((ulonglong)param_1 & 0xffffffff) + 1) * 0x10 + *(longlong *)this + 8)) {
    uVar3 = ~**(uint **)((longlong)this + 8) >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  ::FString::PrintfImpl(&local_18,L"%*s%*s%*s");
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars
            (*(FString **)((longlong)this + 0x10),(wchar_t *)local_18.Data.AllocatorInstance.Data,
             iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 145c4bb50

void __thiscall
`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_1>::operator()
          (void *this,FChars *param_1,
          TUniqueFunction<void___cdecl(_public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToStringInner(UE::RHI::GPUProfiler::FTable::FFormat_const_&)const_::_2_::FGroup)>
          *param_2)

{
  wchar_t *pwVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  size_t local_50;
  undefined8 local_48 [2];
  
  sVar4 = wcslen(param_1->CellSeparator);
  pwVar1 = *(wchar_t **)(*(longlong *)((longlong)this + 8) + 0x10);
  local_50 = sVar4;
  sVar5 = wcslen(pwVar1);
  ::FString::AppendChars(*(FString **)this,pwVar1,(int)sVar5);
  sVar5 = wcslen(param_1->Left);
  ::FString::AppendChars(*(FString **)this,param_1->Left,(int)sVar5);
  iVar9 = 0;
  iVar13 = 0;
  uVar10 = 0;
  lVar11 = 0;
  lVar12 = 0;
  do {
    if (*(int *)(*(longlong *)((longlong)this + 0x10) + 0x18 + lVar12) != 0) {
      iVar9 = iVar9 + *(int *)(*(longlong *)((longlong)this + 0x18) + lVar11) + 2;
      switch(uVar10) {
      default:
        iVar13 = 0;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
        iVar13 = 1;
        break;
      case 0xc:
        iVar13 = 2;
      }
      switch(uVar10) {
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
        iVar3 = 1;
        break;
      default:
        iVar3 = 2;
        break;
      case 0xffffffff:
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        iVar3 = 0;
      }
      if (iVar13 == iVar3) {
        if (uVar10 < 0xc) {
          iVar9 = iVar9 + (int)sVar4;
        }
      }
      else {
        local_48[0] = CONCAT44(iVar9,iVar13);
        UE::Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar2 = *(code **)param_2;
        plVar8 = *(longlong **)&param_2->field_0x28;
        if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
          plVar8 = (longlong *)&param_2->field_0x10;
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        (*pcVar2)(uVar7,local_48);
        lVar6 = 8;
        if (iVar13 != 0) {
          lVar6 = 0x10;
        }
        pwVar1 = *(wchar_t **)((longlong)&param_1->Left + lVar6);
        sVar4 = wcslen(pwVar1);
        ::FString::AppendChars(*(FString **)this,pwVar1,(int)sVar4);
        iVar9 = 0;
        sVar4 = local_50;
      }
    }
    uVar10 = uVar10 + 1;
    lVar12 = lVar12 + 0x10;
    lVar11 = lVar11 + 4;
  } while (uVar10 < 0xd);
  local_50 = CONCAT44(iVar9,iVar13);
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar2 = *(code **)param_2;
  plVar8 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar8 = *(longlong **)&param_2->field_0x28;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar2)(uVar7,&local_50);
  sVar4 = wcslen(param_1->Right);
  ::FString::AppendChars(*(FString **)this,param_1->Right,(int)sVar4);
  ::FString::AppendChars(*(FString **)this,L"\n",1);
  if (*(longlong *)param_2 != 0) {
    plVar8 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return;
}

// operator() @ 145c4c3b0

void __thiscall
`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_2>::operator()
          (void *this,bool param_1,FChars *param_2,
          TUniqueFunction<void___cdecl(_public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToStringInner(UE::RHI::GPUProfiler::FTable::FFormat_const_&)const_::_2_::FColumn)>
          *param_3)

{
  wchar_t *_Str;
  code *pcVar1;
  size_t sVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FChars *pFVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_48 [2];
  
  _Str = *(wchar_t **)(*(longlong *)((longlong)this + 8) + 0x10);
  sVar2 = wcslen(_Str);
  ::FString::AppendChars(*(FString **)this,_Str,(int)sVar2);
  uVar9 = 0;
  pFVar6 = param_2;
  if (param_1) {
    piVar3 = (int *)(*(longlong *)((longlong)this + 0x10) + 0x18);
    do {
      if (*piVar3 != 0) break;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      piVar3 = piVar3 + 4;
    } while (uVar8 < 0xd);
    if (0xb < (uint)uVar9) {
      pFVar6 = (FChars *)&param_2->Right;
    }
  }
  sVar2 = wcslen(pFVar6->Left);
  ::FString::AppendChars(*(FString **)this,pFVar6->Left,(int)sVar2);
  if ((uint)uVar9 < 0xd) {
    lVar7 = uVar9 * 4;
    lVar10 = uVar9 << 4;
    do {
      uVar8 = (uint)uVar9;
      if (*(int *)(lVar10 + 0x18 + *(longlong *)((longlong)this + 0x10)) != 0) {
        local_48[0] = CONCAT44(*(int *)(*(longlong *)((longlong)this + 0x18) + lVar7) + 2,uVar8);
        UE::Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar1 = *(code **)param_3;
        plVar5 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar5 = (longlong *)&param_3->field_0x10;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar1)(uVar4,local_48);
        if (uVar8 < 0xc) {
          uVar8 = uVar8 + 1;
          if (0xc < uVar8) goto LAB_145c4c503;
          goto LAB_145c4c4f0;
        }
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      lVar10 = lVar10 + 0x10;
      lVar7 = lVar7 + 4;
    } while (uVar8 + 1 < 0xd);
  }
  sVar2 = wcslen(param_2->Right);
  ::FString::AppendChars(*(FString **)this,param_2->Right,(int)sVar2);
  ::FString::AppendChars(*(FString **)this,L"\n",1);
  if (*(longlong *)param_3 == 0) {
    return;
  }
  plVar5 = (longlong *)&param_3->field_0x10;
  if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
    plVar5 = *(longlong **)&param_3->field_0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x000145c4c608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))();
  return;
  while (uVar8 = uVar8 + 1, uVar8 < 0xd) {
LAB_145c4c4f0:
    if (*(int *)(*(longlong *)((longlong)this + 0x10) + 0x18 + (ulonglong)uVar8 * 0x10) != 0) break;
  }
LAB_145c4c503:
                    /* WARNING: Could not recover jumptable at 0x000145c4c50e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + *(uint *)(&UNK_145c4c614 + uVar9 * 4)))();
  return;
}

// operator() @ 145c4c690

void __thiscall
`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_3>::operator()
          (void *this,wchar_t *param_1,uint param_2)

{
  int iVar1;
  FString local_18;
  
  wcslen(param_1);
  ::FString::PrintfImpl(&local_18,L"%*s%s%*s");
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars(*(FString **)this,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 145c4c8e0

void __thiscall
`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_6>::operator()
          (void *this,FColumn param_1)

{
  wchar_t *_Str;
  size_t sVar1;
  uint uVar2;
  uint local_res10;
  
  local_res10 = param_1.Index;
  uVar2 = param_1.Width;
  if (local_res10 != 0xc) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      _Str = *(wchar_t **)(*(longlong *)((longlong)this + 0x18) + 8);
      sVar1 = wcslen(_Str);
      ::FString::AppendChars(*(FString **)((longlong)this + 0x10),_Str,(int)sVar1);
    }
    return;
  }
  __l2::<lambda_3>::operator()(*(void **)this,L"Events",uVar2);
  return;
}

// AddRow @ 145c4d300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::RHI::GPUProfiler::FTable::AddRow
          (FTable *this,FNode *param_1,FStats *param_2,FStats *param_3,FString *param_4,uint param_5
          )

{
  int *piVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_1c8 [32];
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  FScriptContainerElement local_178 [8];
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  TUnicodeHorizontalBar<8> local_a0;
  TUnicodeHorizontalBar<8> local_88;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  dVar9 = __real_3ff0000000000000 / (double)(param_1->Inclusive).BusyCycles;
  uVar3 = param_2->BusyCycles;
  TUnicodeHorizontalBar<8>::TUnicodeHorizontalBar<8>(&local_a0,(double)param_3->BusyCycles * dVar9);
  TUnicodeHorizontalBar<8>::TUnicodeHorizontalBar<8>(&local_88,(double)uVar3 * dVar9);
  if (this->bShowExclusive != false) {
    if (this->bShowStats != false) {
      ::FString::PrintfImpl(&local_170,L"%d");
      iVar6 = (this->Columns).Elements[0].ArrayNum;
      piVar1 = &(this->Columns).Elements[0].ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&this->Columns,piVar1);
      }
      pFVar7 = (this->Columns).Elements[0].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      (this->Columns).Elements[0].ArrayNum = iVar6 + 1;
      *(undefined8 *)&pFVar7->field_0x0 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (pFVar7 != (FScriptContainerElement *)&local_170) {
        *(FScriptContainerElement **)&pFVar7->field_0x0 = local_170.Data.AllocatorInstance.Data;
        local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_170.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_170.Data.ArrayMax;
        local_170.Data.ArrayNum = 0;
        local_170.Data.ArrayMax = 0;
      }
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_160,L"%d");
      iVar6 = (this->Columns).Elements[1].ArrayNum;
      piVar1 = &(this->Columns).Elements[1].ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Columns).Elements[1].AllocatorInstance,piVar1);
      }
      pFVar7 = (this->Columns).Elements[1].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      (this->Columns).Elements[1].ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (pFVar7 != (FScriptContainerElement *)&local_160) {
        *(FScriptContainerElement **)pFVar7 = local_160.Data.AllocatorInstance.Data;
        local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_160.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_160.Data.ArrayMax;
        local_160.Data.ArrayNum = 0;
        local_160.Data.ArrayMax = 0;
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_150,L"%d");
      iVar6 = (this->Columns).Elements[2].ArrayNum;
      piVar1 = &(this->Columns).Elements[2].ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Columns).Elements[2].AllocatorInstance,piVar1);
      }
      pFVar7 = (this->Columns).Elements[2].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      (this->Columns).Elements[2].ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (pFVar7 != (FScriptContainerElement *)&local_150) {
        *(FScriptContainerElement **)pFVar7 = local_150.Data.AllocatorInstance.Data;
        local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_150.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_150.Data.ArrayMax;
        local_150.Data.ArrayNum = 0;
        local_150.Data.ArrayMax = 0;
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_140,L"%d");
      iVar6 = (this->Columns).Elements[3].ArrayNum;
      piVar1 = &(this->Columns).Elements[3].ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Columns).Elements[3].AllocatorInstance,piVar1);
      }
      pFVar7 = (this->Columns).Elements[3].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      (this->Columns).Elements[3].ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (pFVar7 != (FScriptContainerElement *)&local_140) {
        *(FScriptContainerElement **)pFVar7 = local_140.Data.AllocatorInstance.Data;
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_140.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_140.Data.ArrayMax;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
    if (this->bShowPercent != false) {
      local_1a8 = (FScriptContainerElement *)&local_a0;
      if (this->bUnicodeOutput == false) {
        local_1a8 = (FScriptContainerElement *)0x15060d16c;
      }
      ::FString::PrintfImpl(&local_130,L"%.1f%%%s%s");
      iVar6 = (this->Columns).Elements[4].ArrayNum;
      piVar1 = &(this->Columns).Elements[4].ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Columns).Elements[4].AllocatorInstance,piVar1);
      }
      pFVar7 = (this->Columns).Elements[4].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      (this->Columns).Elements[4].ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (pFVar7 != (FScriptContainerElement *)&local_130) {
        *(FScriptContainerElement **)pFVar7 = local_130.Data.AllocatorInstance.Data;
        local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_130.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_130.Data.ArrayMax;
        local_130.Data.ArrayNum = 0;
        local_130.Data.ArrayMax = 0;
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl(&local_120,L"%.3f ms");
    iVar6 = (this->Columns).Elements[5].ArrayNum;
    piVar1 = &(this->Columns).Elements[5].ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Columns).Elements[5].AllocatorInstance,piVar1);
    }
    pFVar7 = (this->Columns).Elements[5].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    (this->Columns).Elements[5].ArrayNum = iVar6 + 1;
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)(pFVar7 + 8) = 0;
    if (pFVar7 != (FScriptContainerElement *)&local_120) {
      *(FScriptContainerElement **)pFVar7 = local_120.Data.AllocatorInstance.Data;
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar7 + 8) = local_120.Data.ArrayNum;
      *(int *)(pFVar7 + 0xc) = local_120.Data.ArrayMax;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  if (this->bShowInclusive != false) {
    if (this->bShowStats != false) {
      ::FString::PrintfImpl(&local_110,L"%d");
      iVar6 = (this->Columns).Elements[6].ArrayNum;
      piVar1 = &(this->Columns).Elements[6].ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Columns).Elements[6].AllocatorInstance,piVar1);
      }
      pFVar7 = (this->Columns).Elements[6].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      (this->Columns).Elements[6].ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (pFVar7 != (FScriptContainerElement *)&local_110) {
        *(FScriptContainerElement **)pFVar7 = local_110.Data.AllocatorInstance.Data;
        local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_110.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_110.Data.ArrayMax;
        local_110.Data.ArrayNum = 0;
        local_110.Data.ArrayMax = 0;
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_100,L"%d");
      iVar6 = (this->Columns).Elements[7].ArrayNum;
      piVar1 = &(this->Columns).Elements[7].ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Columns).Elements[7].AllocatorInstance,piVar1);
      }
      pFVar7 = (this->Columns).Elements[7].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      (this->Columns).Elements[7].ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (pFVar7 != (FScriptContainerElement *)&local_100) {
        *(FScriptContainerElement **)pFVar7 = local_100.Data.AllocatorInstance.Data;
        local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_100.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_100.Data.ArrayMax;
        local_100.Data.ArrayNum = 0;
        local_100.Data.ArrayMax = 0;
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_f0,L"%d");
      iVar6 = (this->Columns).Elements[8].ArrayNum;
      piVar1 = &(this->Columns).Elements[8].ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Columns).Elements[8].AllocatorInstance,piVar1);
      }
      pFVar7 = (this->Columns).Elements[8].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      (this->Columns).Elements[8].ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (pFVar7 != (FScriptContainerElement *)&local_f0) {
        *(FScriptContainerElement **)pFVar7 = local_f0.Data.AllocatorInstance.Data;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_f0.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_f0.Data.ArrayMax;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_e0,L"%d");
      iVar6 = (this->Columns).Elements[9].ArrayNum;
      piVar1 = &(this->Columns).Elements[9].ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Columns).Elements[9].AllocatorInstance,piVar1);
      }
      pFVar7 = (this->Columns).Elements[9].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      (this->Columns).Elements[9].ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (pFVar7 != (FScriptContainerElement *)&local_e0) {
        *(FScriptContainerElement **)pFVar7 = local_e0.Data.AllocatorInstance.Data;
        local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_e0.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_e0.Data.ArrayMax;
        local_e0.Data.ArrayNum = 0;
        local_e0.Data.ArrayMax = 0;
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    if (this->bShowPercent != false) {
      local_1a8 = (FScriptContainerElement *)&local_88;
      if (this->bUnicodeOutput == false) {
        local_1a8 = (FScriptContainerElement *)0x15060d16c;
      }
      ::FString::PrintfImpl(&local_d0,L"%.1f%%%s%s");
      iVar6 = (this->Columns).Elements[10].ArrayNum;
      piVar1 = &(this->Columns).Elements[10].ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->Columns).Elements[10].AllocatorInstance,piVar1);
      }
      pFVar7 = (this->Columns).Elements[10].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      (this->Columns).Elements[10].ArrayNum = iVar6 + 1;
      *(undefined8 *)pFVar7 = 0;
      *(undefined8 *)(pFVar7 + 8) = 0;
      if (pFVar7 != (FScriptContainerElement *)&local_d0) {
        *(FScriptContainerElement **)pFVar7 = local_d0.Data.AllocatorInstance.Data;
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar7 + 8) = local_d0.Data.ArrayNum;
        *(int *)(pFVar7 + 0xc) = local_d0.Data.ArrayMax;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl(&local_c0,L"%.3f ms");
    iVar6 = (this->Columns).Elements[0xb].ArrayNum;
    piVar1 = &(this->Columns).Elements[0xb].ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Columns).Elements[0xb].AllocatorInstance,piVar1);
    }
    pFVar7 = (this->Columns).Elements[0xb].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    (this->Columns).Elements[0xb].ArrayNum = iVar6 + 1;
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)(pFVar7 + 8) = 0;
    if (pFVar7 != (FScriptContainerElement *)&local_c0) {
      *(FScriptContainerElement **)pFVar7 = local_c0.Data.AllocatorInstance.Data;
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar7 + 8) = local_c0.Data.ArrayNum;
      *(int *)(pFVar7 + 0xc) = local_c0.Data.ArrayMax;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(&local_b0,L"%*s");
  iVar6 = (this->Columns).Elements[0xc].ArrayNum;
  piVar1 = &(this->Columns).Elements[0xc].ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Columns).Elements[0xc].AllocatorInstance,piVar1);
  }
  pFVar7 = (this->Columns).Elements[0xc].AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  (this->Columns).Elements[0xc].ArrayNum = iVar6 + 1;
  *(undefined8 *)pFVar7 = 0;
  *(undefined8 *)(pFVar7 + 8) = 0;
  if (pFVar7 != (FScriptContainerElement *)&local_b0) {
    *(FScriptContainerElement **)pFVar7 = local_b0.Data.AllocatorInstance.Data;
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar7 + 8) = local_b0.Data.ArrayNum;
    *(int *)(pFVar7 + 0xc) = local_b0.Data.ArrayMax;
    local_b0.Data.ArrayNum = 0;
    local_b0.Data.ArrayMax = 0;
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  local_178[0] = (FScriptContainerElement)(param_5 == 0);
  pTVar2 = &this->RowBreaks;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar7 <= local_178) &&
     (lVar8 = (longlong)(this->RowBreaks).ArrayMax, local_178 < pFVar7 + lVar8)) {
    local_190 = (longlong)(this->RowBreaks).ArrayNum;
    local_188 = 1;
    local_1a8 = local_178;
    local_1a0 = pFVar7;
    local_198 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->RowBreaks).ArrayNum;
  piVar1 = &(this->RowBreaks).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RowBreaks).ArrayNum = iVar6 + 1;
  (pTVar2->AllocatorInstance).Data[iVar6] = local_178[0];
  this->NumRows = this->NumRows + 1;
  return;
}

// GetColumnHeader @ 145c5abd0

wchar_t * __thiscall UE::RHI::GPUProfiler::FTable::GetColumnHeader(FTable *this,EColumn param_1)

{
  switch(param_1) {
  case Exclusive_NumDraws:
  case Inclusive_NumDraws:
    return L"Draws";
  case Exclusive_NumDispatches:
  case Inclusive_NumDispatches:
    return L"Dsptch";
  case Exclusive_NumPrimitives:
  case Inclusive_NumPrimitives:
    return L"Prim";
  case Exclusive_NumVertices:
  case Inclusive_NumVertices:
    return L"Vert";
  case Exclusive_Percent:
  case Inclusive_Percent:
    return L"Percent";
  case Exclusive_Time:
  case Inclusive_Time:
    return L"Time";
  default:
    return L"";
  }
}

// ToStringInner @ 145c7c2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::RHI::GPUProfiler::FTable::ToStringInner
          (FTable *this,FString *__return_storage_ptr__,FFormat *param_1)

{
  code *pcVar1;
  FFormat *pFVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FString *pFVar6;
  size_t sVar7;
  wchar_t *_Str;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int *piVar11;
  uint uVar12;
  int *piVar13;
  undefined1 auStack_298 [32];
  longlong local_278;
  longlong local_270;
  undefined1 local_268 [4];
  uint local_264;
  FString *local_260;
  FString *local_258;
  FFormat *local_250;
  FTable *local_248;
  int *local_240;
  FTable *local_238;
  FString *local_230;
  FFormat *local_228;
  FString *local_220;
  FFormat *local_218;
  FTable *local_210;
  int *local_208;
  code *local_1f8 [2];
  undefined **local_1e8;
  FString *local_1e0;
  FFormat *local_1d8;
  undefined8 local_1d0;
  code *local_1c8 [2];
  undefined **local_1b8;
  FTable *local_1b0;
  FString **local_1a8;
  undefined8 local_1a0;
  code *local_198 [2];
  undefined **local_188;
  FString **local_180;
  FTable *local_178;
  undefined8 local_170;
  code *local_168 [2];
  undefined **local_158;
  FString *local_150;
  FFormat *local_148;
  undefined8 local_140;
  code *local_138 [2];
  undefined **local_128;
  FString *local_120;
  FFormat *local_118;
  undefined8 local_110;
  code *local_108 [2];
  undefined **local_f8;
  FString *local_f0;
  FFormat *local_e8;
  undefined8 local_e0;
  code *local_d8 [5];
  undefined8 *local_b0;
  code *local_a8 [5];
  undefined8 *local_80;
  int local_78 [14];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_78[0xc] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  uVar12 = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  piVar13 = local_78;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  piVar11 = &(this->Columns).Elements[0].ArrayNum;
  local_238 = this;
  local_230 = __return_storage_ptr__;
  local_228 = param_1;
  do {
    if (*piVar11 != 0) {
      if ((*piVar11 != this->NumRows) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Columns[ColumnIndex].Num() == NumRows",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                             ,0x4ac,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar1)();
        return pFVar6;
      }
      iVar8 = 0;
      if (uVar12 == 0xc) {
        iVar8 = 6;
      }
      switch(uVar12) {
      case 0:
      case 6:
        _Str = L"Draws";
        break;
      case 1:
      case 7:
        _Str = L"Dsptch";
        break;
      case 2:
      case 8:
        _Str = L"Prim";
        break;
      case 3:
      case 9:
        _Str = L"Vert";
        break;
      case 4:
      case 10:
        _Str = L"Percent";
        break;
      case 5:
      case 0xb:
        _Str = L"Time";
        break;
      default:
        _Str = L"";
      }
      sVar7 = wcslen(_Str);
      uVar5 = *piVar11;
      iVar4 = (int)sVar7;
      if ((int)sVar7 < iVar8) {
        iVar4 = iVar8;
      }
      pFVar9 = (((TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar11 + -2))->AllocatorInstance).
               Data;
      pFVar10 = pFVar9 + (longlong)(int)uVar5 * 0x10;
      *piVar13 = iVar4;
      while( true ) {
        if (*piVar11 != uVar5) {
          local_268[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_268);
        }
        this = local_238;
        if (pFVar9 == pFVar10) break;
        iVar8 = *(int *)(pFVar9 + 8) + -1;
        if (*(int *)(pFVar9 + 8) == 0) {
          iVar8 = 0;
        }
        if (iVar8 < *piVar13) {
          iVar8 = *piVar13;
        }
        pFVar9 = pFVar9 + 0x10;
        *piVar13 = iVar8;
      }
    }
    pFVar2 = local_228;
    pFVar6 = local_230;
    uVar12 = uVar12 + 1;
    piVar13 = piVar13 + 1;
    piVar11 = piVar11 + 4;
    if (0xc < uVar12) {
      local_208 = local_78;
      local_220 = local_230;
      local_240 = local_78;
      (local_230->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_230->Data).ArrayNum = 0;
      (local_230->Data).ArrayMax = 0;
      local_1e8 = &
                  ___7__TFunction_OwnedObject_V<lambda_4>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_1f8[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_4>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FGroup>
                     ::Call;
      local_218 = local_228;
      local_258 = local_230;
      local_250 = local_228;
      local_260 = local_230;
      local_1d0 = 0;
      local_1e0 = local_230;
      local_1d8 = local_228;
      local_248 = this;
      local_210 = this;
      `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_1>::operator()
                (&local_220,&local_228->TopRow,
                 (TUniqueFunction<void___cdecl(_public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToStringInner(UE::RHI::GPUProfiler::FTable::FFormat_const_&)const_::_2_::FGroup)>
                  *)local_1f8);
      local_1a0 = 0;
      local_1b8 = &
                  ___7__TFunction_OwnedObject_V<lambda_5>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_1a8 = &local_260;
      local_1c8[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_5>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FGroup>
                     ::Call;
      local_1b0 = this;
      `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_1>::operator()
                (&local_220,&pFVar2->GroupNameRow,
                 (TUniqueFunction<void___cdecl(_public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToStringInner(UE::RHI::GPUProfiler::FTable::FFormat_const_&)const_::_2_::FGroup)>
                  *)local_1c8);
      local_a8[0] = (code *)0x0;
      local_80 = FMemory::Malloc(0x28,8);
      *local_80 = &
                  ___7__TFunction_OwnedObject_V<lambda_6>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_00_Function_Private_Core_UE__6B_
      ;
      local_80[1] = &local_260;
      local_80[2] = this;
      local_80[3] = pFVar6;
      local_80[4] = pFVar2;
      if (local_80 + 1 != (longlong *)0x0) {
        local_a8[0] = Core::Private::Function::
                      TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_6>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
                      ::Call;
      }
      `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_2>::operator()
                (&local_258,true,&pFVar2->GroupBorderRow,
                 (TUniqueFunction<void___cdecl(_public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToStringInner(UE::RHI::GPUProfiler::FTable::FFormat_const_&)const_::_2_::FColumn)>
                  *)local_a8);
      local_170 = 0;
      local_188 = &
                  ___7__TFunction_OwnedObject_V<lambda_7>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_180 = &local_260;
      local_198[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_7>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
                     ::Call;
      local_178 = this;
      `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_2>::operator()
                (&local_258,false,&pFVar2->ValueRow,
                 (TUniqueFunction<void___cdecl(_public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToStringInner(UE::RHI::GPUProfiler::FTable::FFormat_const_&)const_::_2_::FColumn)>
                  *)local_198);
      local_140 = 0;
      local_158 = &
                  ___7__TFunction_OwnedObject_V<lambda_8>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_150 = pFVar6;
      local_168[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_8>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
                     ::Call;
      local_148 = pFVar2;
      `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_2>::operator()
                (&local_258,false,&pFVar2->DividorRow,
                 (TUniqueFunction<void___cdecl(_public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToStringInner(UE::RHI::GPUProfiler::FTable::FFormat_const_&)const_::_2_::FColumn)>
                  *)local_168);
      local_264 = 0;
      if (this->NumRows != 0) {
        do {
          uVar12 = local_264;
          if (local_264 != 0) {
            iVar8 = (this->RowBreaks).ArrayNum;
            uVar5 = 0;
            if ((int)local_264 < iVar8) {
              uVar5 = ~local_264 >> 0x1f;
            }
            if (uVar5 == 0) {
              local_278 = (longlong)(int)local_264;
              local_270 = (longlong)iVar8;
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                pFVar6 = (FString *)(*pcVar1)();
                return pFVar6;
              }
            }
            if ((this->RowBreaks).AllocatorInstance.Data[(int)uVar12] !=
                (FScriptContainerElement)0x0) {
              local_128 = &
                          ___7__TFunction_OwnedObject_V<lambda_9>__BG___ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
              ;
              local_138[0] = Core::Private::Function::
                             TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l22::<lambda_9>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
                             ::Call;
              local_110 = 0;
              local_120 = pFVar6;
              local_118 = pFVar2;
              `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_2>::operator()
                        (&local_258,false,&pFVar2->DividorRow,
                         (TUniqueFunction<void___cdecl(_public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToStringInner(UE::RHI::GPUProfiler::FTable::FFormat_const_&)const_::_2_::FColumn)>
                          *)local_138);
            }
          }
          local_d8[0] = (code *)0x0;
          local_b0 = (undefined8 *)0x0;
          local_b0 = FMemory::Malloc(0x20,8);
          *local_b0 = &
                      ___7__TFunction_OwnedObject_V<lambda_10>__BD___ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_00_Function_Private_Core_UE__6B_
          ;
          local_b0[1] = this;
          local_b0[2] = &local_264;
          local_b0[3] = pFVar6;
          if (local_b0 + 1 != (undefined8 *)0x0) {
            local_d8[0] = Core::Private::Function::
                          TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l19::<lambda_10>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
                          ::Call;
          }
          `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_2>::operator()
                    (&local_258,false,&pFVar2->ValueRow,
                     (TUniqueFunction<void___cdecl(_public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToStringInner(UE::RHI::GPUProfiler::FTable::FFormat_const_&)const_::_2_::FColumn)>
                      *)local_d8);
          local_264 = local_264 + 1;
        } while (local_264 < this->NumRows);
      }
      local_e0 = 0;
      local_f8 = &
                 ___7__TFunction_OwnedObject_V<lambda_11>__1__ToStringInner_FTable_GPUProfiler_RHI_UE__QEBA_AVFString__AEBUFFormat_3456__Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_f0 = pFVar6;
      local_108[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_11>,void,`UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::FColumn>
                     ::Call;
      local_e8 = pFVar2;
      `UE::RHI::GPUProfiler::FTable::ToStringInner'::__l2::<lambda_2>::operator()
                (&local_258,false,&pFVar2->BottomRow,
                 (TUniqueFunction<void___cdecl(_public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToStringInner(UE::RHI::GPUProfiler::FTable::FFormat_const_&)const_::_2_::FColumn)>
                  *)local_108);
      return pFVar6;
    }
  } while( true );
}

