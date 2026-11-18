// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 5

// Call @ 1431970f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),bool,unsigned_int_const_*,unsigned_int_const_&>
::Call(void *param_1,uint **param_2,uint *param_3)

{
  undefined1 uVar1;
  uint local_res8 [8];
  
  local_res8[0] = *param_3;
  uVar1 = (**(code **)param_1)(*param_2,local_res8);
  return (bool)uVar1;
}

// Call @ 143197120

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnalyticsSessionSummaryManager::CleanupExpiredFiles'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
::Call(void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = `FAnalyticsSessionSummaryManager::CleanupExpiredFiles'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143197140

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnalyticsSessionSummaryManager::GetSessionFiles'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
::Call(void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = `FAnalyticsSessionSummaryManager::GetSessionFiles'::__l2::<lambda_1>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 143197160

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::__l11::<lambda_1>,bool,unsigned_int_const_*,unsigned_int_const_&>
::Call(void *param_1,uint **param_2,uint *param_3)

{
  if ((*param_2 != (uint *)0x0) && (**param_2 != *(uint *)param_1)) {
    return false;
  }
  return true;
}

// Call @ 143197180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnalyticsSessionSummaryManager::AggregateSummaries'::__l9::<lambda_2>,void,FAnalyticsEventAttribute_&&>
::Call(void *param_1,FAnalyticsEventAttribute *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar3;
  ForAnyElementType FVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FString *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  FAnalyticsEventAttribute *pFVar13;
  ForAnyElementType _Src;
  longlong lVar14;
  FString FStackX_10;
  FString FStack_58;
  FString FStack_48;
  
  _Src.Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  iVar10 = AnalyticsManagerProperties::InternalPropertyPrefix.Data.ArrayNum + -1;
  FVar4.Data = AnalyticsManagerProperties::InternalPropertyPrefix.Data.AllocatorInstance.Data;
  if (AnalyticsManagerProperties::InternalPropertyPrefix.Data.ArrayNum == 0) {
    iVar10 = iVar7;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  bVar6 = ::FString::StartsWith(&param_2->AttrName,(wchar_t *)FVar4.Data,iVar10,IgnoreCase);
  if (bVar6) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
                ((longlong)param_1 + 0x20),&FStackX_10,(bool *)param_2);
    pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    iVar7 = *(int *)&pFVar2[1].Data;
    if (iVar7 == *piVar1) {
      iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    pFVar12 = pFVar2->Data + (longlong)iVar7 * 0x30;
    ::FString::FString((FString *)pFVar12,&param_2->AttrName);
    ::FString::FString((FString *)(pFVar12 + 0x10),&param_2->AttrValueString);
    *(double *)(pFVar12 + 0x20) = param_2->AttrValueNumber;
    pFVar12[0x28] = (FScriptContainerElement)param_2->AttrValueBool;
    *(AttrTypeEnum *)(pFVar12 + 0x2c) = param_2->AttrType;
    return;
  }
  iVar10 = (param_2->AttrName).Data.ArrayNum;
  if (iVar10 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data;
    iVar7 = iVar10 + -1;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
  iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&AnalyticsManagerProperties::ReservedKeys,uVar8,&param_2->AttrName);
  pTVar3 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
            ((longlong)param_1 + 0x20);
  if (iVar7 == -1) {
    iVar7 = (param_2->AttrName).Data.ArrayNum;
    if (iVar7 == 0) {
      pwVar11 = L"";
      iVar7 = 0;
    }
    else {
      pwVar11 = (wchar_t *)(param_2->AttrName).Data.AllocatorInstance.Data;
      iVar7 = iVar7 + -1;
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
    iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (pTVar3,uVar8,&param_2->AttrName);
    pTVar3 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
              ((longlong)param_1 + 0x20);
    if (iVar7 == -1) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (pTVar3,&FStackX_10,(bool *)param_2);
      pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 8);
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      iVar7 = *(int *)&pFVar2[1].Data;
      if (iVar7 == *piVar1) {
        iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar7 + 1;
      pFVar12 = pFVar2->Data + (longlong)iVar7 * 0x30;
      ::FString::FString((FString *)pFVar12,&param_2->AttrName);
      ::FString::FString((FString *)(pFVar12 + 0x10),&param_2->AttrValueString);
      *(double *)(pFVar12 + 0x20) = param_2->AttrValueNumber;
      pFVar12[0x28] = (FScriptContainerElement)param_2->AttrValueBool;
      *(AttrTypeEnum *)(pFVar12 + 0x2c) = param_2->AttrType;
      return;
    }
    FStackX_10.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_1;
    do {
      ::FString::PrintfImpl(&FStack_48,L"%s_%d");
      if (_Src.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src.Data);
      }
      uVar5 = FStack_48.Data._8_8_;
      _Src.Data = FStack_48.Data.AllocatorInstance.Data;
      iVar7 = FStack_48.Data.ArrayNum;
      lVar14 = (longlong)FStack_48.Data.ArrayNum;
      FStack_58.Data.AllocatorInstance.Data = FStack_48.Data.AllocatorInstance.Data;
      FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_58.Data.ArrayNum = FStack_48.Data.ArrayNum;
      FStack_58.Data.ArrayMax = FStack_48.Data.ArrayMax;
      FStack_48.Data.ArrayNum = 0;
      FStack_48.Data.ArrayMax = 0;
      if (iVar7 == 0) {
        pwVar11 = L"";
        iVar10 = 0;
      }
      else {
        iVar10 = iVar7 + -1;
        pwVar11 = (wchar_t *)_Src.Data;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
      iVar10 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(pTVar3,uVar8,&FStack_58);
    } while (iVar10 != -1);
    if (2 < (byte)LogAnalyticsSessionSummary._0_1_) {
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Renamed_key___s_150a65980,
                 (FLogCategoryBase *)&LogAnalyticsSessionSummary);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
                ((longlong)param_1 + 0x20),&FStackX_10,(bool *)param_2);
    pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 8);
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    iVar10 = *(int *)&pFVar2[1].Data;
    if (iVar10 == *piVar1) {
      iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,pFVar2,piVar1);
    }
    FStack_58.Data.ArrayNum = iVar7;
    *(int *)&pFVar2[1].Data = iVar10 + 1;
    FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = (FAnalyticsEventAttribute *)(pFVar2->Data + (longlong)iVar10 * 0x30);
    if (iVar7 == 0) {
      FStack_58.Data._8_8_ = uVar5 & 0xffffffff;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,(ForAnyElementType *)&FStack_58,iVar7,&FStack_58.Data.ArrayMax);
      memcpy(FStack_58.Data.AllocatorInstance.Data,_Src.Data,lVar14 * 2);
    }
    pFVar9 = FAnalyticsEventAttribute::CheckName(pFVar13,&FStack_58);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    ::FString::FString(&pFVar13->AttrValueString,&param_2->AttrValueString);
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = String;
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    FStackX_10.Data._8_8_ = *(undefined8 *)param_1;
    do {
      ::FString::PrintfImpl(&FStack_58,L"%s_%d");
      if (_Src.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(_Src.Data);
      }
      _Src.Data = FStack_58.Data.AllocatorInstance.Data;
      iVar7 = FStack_58.Data.ArrayNum;
      FStack_48.Data.AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
      FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_48.Data.ArrayNum = FStack_58.Data.ArrayNum;
      FStack_48.Data.ArrayMax = FStack_58.Data.ArrayMax;
      FStack_58.Data.ArrayNum = 0;
      FStack_58.Data.ArrayMax = 0;
      if (iVar7 == 0) {
        pwVar11 = L"";
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + -1;
        pwVar11 = (wchar_t *)_Src.Data;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
      iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>(pTVar3,uVar8,&FStack_48);
    } while (iVar7 != -1);
    if (2 < (byte)LogAnalyticsSessionSummary._0_1_) {
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Renamed_key___s_150a65980,
                 (FLogCategoryBase *)&LogAnalyticsSessionSummary);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (*(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
                ((longlong)param_1 + 0x20),&FStackX_10,(bool *)&FStack_48);
    pFVar2 = *(ForAnyElementType **)((longlong)param_1 + 8);
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    iVar7 = *(int *)&pFVar2[1].Data;
    if (iVar7 == *piVar1) {
      iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,pFVar2,piVar1);
    }
    _Src.Data = FStack_48.Data.AllocatorInstance.Data;
    lVar14 = (longlong)FStack_48.Data.ArrayNum;
    *(int *)&pFVar2[1].Data = iVar7 + 1;
    FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_58.Data.ArrayNum = FStack_48.Data.ArrayNum;
    pFVar13 = (FAnalyticsEventAttribute *)(pFVar2->Data + (longlong)iVar7 * 0x30);
    if (FStack_48.Data.ArrayNum == 0) {
      FStack_58.Data._8_8_ = FStack_48.Data._8_8_ & 0xffffffff;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,FStack_48.Data.ArrayNum,0,(ForAnyElementType *)&FStack_58,
                 FStack_48.Data.ArrayNum,&FStack_58.Data.ArrayMax);
      memcpy(FStack_58.Data.AllocatorInstance.Data,_Src.Data,lVar14 * 2);
    }
    pFVar9 = FAnalyticsEventAttribute::CheckName(pFVar13,&FStack_58);
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar13->AttrName).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (pFVar13->AttrName).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    ::FString::FString(&pFVar13->AttrValueString,&param_2->AttrValueString);
    pFVar13->AttrValueNumber = 0.0;
    pFVar13->AttrValueBool = false;
    pFVar13->AttrType = String;
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
  }
  if (_Src.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src.Data);
  }
  return;
}

