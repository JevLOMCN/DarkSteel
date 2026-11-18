// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// FArchiveStackTraceWriter @ 141ed20a0

FArchiveStackTraceWriter * __thiscall
FArchiveStackTraceWriter::FArchiveStackTraceWriter
          (FArchiveStackTraceWriter *this,FArchive *param_1,FArchiveCallstacks *param_2,
          FArchiveDiffMap *param_3,long64 param_4)

{
  FArchiveProxy::FArchiveProxy((FArchiveProxy *)this,param_1);
  this->Callstacks = param_2;
  this->_padding_ = (longlong)&___7FArchiveStackTraceWriter__6B_;
  this->DiffMapOffset = param_4;
  this->DiffMap = param_3;
  this->StackIgnoreCount = 2;
  this->bInnerArchiveDisabled = false;
  return this;
}

// ~FArchiveStackTraceWriter @ 141ed5120

void __thiscall FArchiveStackTraceWriter::~FArchiveStackTraceWriter(FArchiveStackTraceWriter *this)

{
  this->_padding_ = (longlong)&___7FArchiveStackTraceWriter__6B_;
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  return;
}

// Compare @ 141ee0d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FArchiveStackTraceWriter::Compare
          (FPackageData *param_1,FPackageData *param_2,FArchiveCallstacks *param_3,
          FArchiveDiffMap *param_4,wchar_t *param_5,wchar_t *param_6,long64 param_7,int *param_8,
          TMap<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
          *param_9,bool param_10)

{
  longlong lVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  FName FVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FDiffFormatHelper *pFVar10;
  FArchiveDiffStats *pFVar11;
  FCallstackAtOffset *pFVar12;
  FCallstackData *pFVar13;
  FName FVar14;
  FScriptContainerElement *_Str1;
  ForAnyElementType _Str2;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  longlong *plVar19;
  longlong lVar20;
  bool bVar21;
  longlong local_290;
  FName local_288;
  FName local_278;
  undefined1 local_270 [4];
  int local_26c;
  longlong local_268;
  longlong local_260;
  FScriptContainerElement *local_258;
  FString local_250;
  FString local_240;
  FString local_230;
  longlong local_220;
  FCallstackAtOffset *local_218;
  longlong local_210;
  FString local_208;
  longlong local_1f8;
  longlong local_1f0;
  wchar_t *local_1e8;
  wchar_t *local_1e0;
  FPropertyTempVal local_1d8;
  FPropertyTempVal local_1c8;
  FString local_1b8;
  FArchiveState local_1a8;
  undefined8 local_118;
  uchar *local_110;
  longlong local_108;
  FArchiveState local_f8;
  undefined8 local_68;
  uchar *local_60;
  longlong local_58;
  
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
  bVar6 = false;
  pFVar10 = FDiffFormatHelper::Get();
  local_1e8 = pFVar10->Indent;
  pFVar10 = FDiffFormatHelper::Get();
  local_1f8 = param_2->Size - param_2->StartOffset;
  local_1e0 = pFVar10->LineTerminator;
  local_1f0 = param_1->Size - param_1->StartOffset;
  local_210 = local_1f8;
  if (local_1f0 < local_1f8) {
    local_210 = local_1f0;
  }
  local_278 = FVar14;
  if (param_3->Asset != (UObject *)0x0) {
    local_278 = *(FName *)(*(longlong *)&param_3->Asset->field_0x10 + 0x18);
  }
  if (local_1f0 != local_1f8) {
    if ((2 < (byte)LogArchiveDiff._0_1_) && (!param_10)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
    }
    FVar4 = local_278;
    lVar20 = param_2->Size;
    lVar1 = param_1->Size;
    uVar7 = ::GetTypeHash(local_278.ComparisonIndex.Value);
    pFVar11 = TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                          *)param_9,uVar7 + FVar4.Number,&local_278);
    pFVar11->DiffSize = pFVar11->DiffSize + (lVar20 - lVar1);
  }
  local_258 = (FScriptContainerElement *)0x0;
  local_26c = 0;
  iVar9 = -1;
  local_268 = 0;
  lVar20 = -1;
  local_288.ComparisonIndex.Value = 0;
  local_288.Number = 0;
  local_290 = -1;
  local_260 = 0;
  if (0 < local_210) {
    do {
      lVar1 = local_268;
      local_220 = local_260 + param_1->StartOffset;
      lVar16 = local_260 + param_2->StartOffset;
      if (param_1->Data[local_220] != param_2->Data[lVar16]) {
        bVar5 = false;
        iVar8 = *(int *)&param_4->field_0x8;
        plVar15 = *(longlong **)param_4;
        plVar19 = plVar15 + (longlong)iVar8 * 2;
        while( true ) {
          if (*(int *)&param_4->field_0x8 != iVar8) {
            `TCheckedPointerIterator<FArchiveDiffInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_270);
          }
          FVar14 = local_278;
          if (plVar15 == plVar19) {
            uVar7 = ::GetTypeHash(local_278.ComparisonIndex.Value);
            pFVar11 = TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                                  *)param_9,uVar7 + FVar14.Number,&local_278);
            local_268 = lVar1 + 1;
            pFVar11->NumDiffs = pFVar11->NumDiffs + 1;
            if (local_290 == -1) {
              local_290 = lVar16;
            }
            goto LAB_141ee16aa;
          }
          if ((*plVar15 <= lVar16) && (lVar16 < *plVar15 + plVar15[1])) break;
          plVar15 = plVar15 + 2;
        }
        iVar8 = 0;
        if (0 < iVar9) {
          iVar8 = iVar9;
        }
        iVar8 = FArchiveCallstacks::GetCallstackIndexAtOffset(param_3,lVar16,iVar8);
        lVar20 = local_290;
        if (iVar8 < 0) {
          iVar9 = iVar8;
          if ((2 < (byte)LogArchiveDiff._0_1_) && (!param_10)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
          }
        }
        else {
          bVar21 = iVar8 != iVar9;
          iVar9 = iVar8;
          if (bVar21) {
            pFVar12 = FArchiveCallstacks::GetCallstack(param_3,iVar8);
            local_218 = pFVar12;
            pFVar13 = TMapBase<unsigned_int,FArchiveCallstacks::FCallstackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>_>
                      ::FindChecked((TMapBase<unsigned_int,FArchiveCallstacks::FCallstackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>_>
                                     *)&param_3->UniqueCallstacks,pFVar12->Callstack);
            FArchiveCallstacks::FCallstackData::ToString(pFVar13,&local_230,param_6);
            FVar18.Data = local_230.Data.AllocatorInstance.Data;
            _Str2.Data = (FScriptContainerElement *)L"";
            if (local_230.Data.ArrayNum != 0) {
              _Str2.Data = local_230.Data.AllocatorInstance.Data;
            }
            _Str1 = (FScriptContainerElement *)L"";
            if (local_26c != 0) {
              _Str1 = local_258;
            }
            iVar9 = wcscmp((wchar_t *)_Str1,(wchar_t *)_Str2.Data);
            if (iVar9 == 0) {
              iVar9 = iVar8;
              if (FVar18.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar18.Data);
              }
            }
            else {
              if ((pFVar12->bIgnore == false) && ((param_7 < 0 || (*param_8 < param_7)))) {
                pFVar2 = pFVar13->SerializedProp;
                local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_240.Data.ArrayNum = 0;
                local_250.Data.ArrayNum = 0;
                local_240.Data.ArrayMax = 0;
                local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_250.Data.ArrayMax = 0;
                if (((pFVar2 != (FProperty *)0x0) && (local_1f0 == local_1f8)) &&
                   (bVar5 = ::`anonymous_namespace'::ShouldDumpPropertyValueState(pFVar2),
                   lVar20 = lVar16, bVar5)) {
                  do {
                    lVar1 = lVar20;
                    if (lVar1 == 0) break;
                    iVar9 = FArchiveCallstacks::GetCallstackIndexAtOffset(param_3,lVar1 + -1,0);
                    pFVar12 = FArchiveCallstacks::GetCallstack(param_3,iVar9);
                    pFVar13 = TMapBase<unsigned_int,FArchiveCallstacks::FCallstackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>_>
                              ::FindChecked((TMapBase<unsigned_int,FArchiveCallstacks::FCallstackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FArchiveCallstacks::FCallstackData,0>_>
                                             *)&param_3->UniqueCallstacks,pFVar12->Callstack);
                    lVar20 = lVar1 + -1;
                  } while (pFVar13->SerializedProp == pFVar2);
                  FPropertyTempVal::FPropertyTempVal(&local_1c8,pFVar2);
                  FPropertyTempVal::FPropertyTempVal(&local_1d8,pFVar2);
                  local_f8._padding_ = 0;
                  local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
                  puVar3 = param_1->Data;
                  lVar17 = param_1->Size - local_220;
                  lVar20 = local_220 + (lVar1 - lVar16);
                  local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
                  local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
                  local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
                  local_f8._40_8_ = 0;
                  local_f8.ArSerializingDefaults = 0;
                  local_f8.ArPortFlags = 0;
                  local_f8.ArMaxSerializeSize = 0;
                  local_f8.ArUEVer.FileVersionUE4 = 0;
                  local_f8.ArUEVer.FileVersionUE5 = 0;
                  local_f8.ArLicenseeUEVer = 0;
                  local_f8.ArEngineVer.Major = 0;
                  local_f8.ArEngineVer.Minor = 0;
                  local_f8.ArEngineVer.Patch = 0;
                  local_f8.ArEngineVer._6_2_ = 0;
                  local_f8.ArEngineVer.Changelist = 0;
                  local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
                  local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
                  local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
                  local_f8.SerializedProperty = (FProperty *)0x0;
                  local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
                  local_f8.bCustomVersionsAreReset = false;
                  local_f8._129_7_ = 0;
                  local_f8.NextProxy = (FArchiveState *)0x0;
                  FArchiveState::FArchiveState(&local_f8);
                  local_68 = 0;
                  local_f8._padding_ = (longlong)&___7FStaticMemoryReader__6B_;
                  local_60 = puVar3 + lVar20;
                  local_58 = lVar17;
                  FArchiveState::SetIsLoading(&local_f8,true);
                  local_1a8._padding_ = 0;
                  local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
                  lVar20 = param_2->Size;
                  puVar3 = param_2->Data;
                  local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
                  local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
                  local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
                  local_1a8._40_8_ = 0;
                  local_1a8.ArSerializingDefaults = 0;
                  local_1a8.ArPortFlags = 0;
                  local_1a8.ArMaxSerializeSize = 0;
                  local_1a8.ArUEVer.FileVersionUE4 = 0;
                  local_1a8.ArUEVer.FileVersionUE5 = 0;
                  local_1a8.ArLicenseeUEVer = 0;
                  local_1a8.ArEngineVer.Major = 0;
                  local_1a8.ArEngineVer.Minor = 0;
                  local_1a8.ArEngineVer.Patch = 0;
                  local_1a8.ArEngineVer._6_2_ = 0;
                  local_1a8.ArEngineVer.Changelist = 0;
                  local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
                  local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
                  local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
                  local_1a8.SerializedProperty = (FProperty *)0x0;
                  local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
                  local_1a8.bCustomVersionsAreReset = false;
                  local_1a8._129_7_ = 0;
                  local_1a8.NextProxy = (FArchiveState *)0x0;
                  FArchiveState::FArchiveState(&local_1a8);
                  local_118 = 0;
                  local_1a8._padding_ = (longlong)&___7FStaticMemoryReader__6B_;
                  local_110 = puVar3 + lVar1;
                  local_108 = lVar20 - lVar16;
                  FArchiveState::SetIsLoading(&local_1a8,true);
                  FPropertyTempVal::Serialize(&local_1c8,(FArchive *)&local_f8,(void *)0x0);
                  FPropertyTempVal::Serialize(&local_1d8,(FArchive *)&local_1a8,(void *)0x0);
                  if ((local_f8.ArIsError == 0) && (local_1a8.ArIsError == 0)) {
                    FPropertyTempVal::ExportText
                              (&local_1c8,&local_240,(void *)0x0,(UObject *)0x0,0,(UObject *)0x0);
                    FPropertyTempVal::ExportText
                              (&local_1d8,&local_250,(void *)0x0,(UObject *)0x0,0,(UObject *)0x0);
                  }
                  FArchive::~FArchive((FArchive *)&local_1a8);
                  FArchive::~FArchive((FArchive *)&local_f8);
                  FPropertyTempVal::~FPropertyTempVal(&local_1d8);
                  FPropertyTempVal::~FPropertyTempVal(&local_1c8);
                }
                FVar18.Data = (FScriptContainerElement *)0x0;
                if (local_240.Data.ArrayNum == local_250.Data.ArrayNum) {
                  if (1 < local_240.Data.ArrayNum) {
                    iVar9 = FGenericPlatformStricmp::Stricmp
                                      ((wchar_t *)local_240.Data.AllocatorInstance.Data,
                                       (wchar_t *)local_250.Data.AllocatorInstance.Data);
                    bVar5 = iVar9 == 0;
                    goto LAB_141ee13a0;
                  }
                }
                else {
                  bVar5 = local_250.Data.ArrayNum + local_240.Data.ArrayNum == 1;
LAB_141ee13a0:
                  if (!bVar5) {
                    ::FString::PrintfImpl(&local_208,L"\r\n%sBefore: %s\r\n%sAfter:  %s");
                    FVar18.Data = local_208.Data.AllocatorInstance.Data;
                    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_208.Data.ArrayNum = 0;
                    local_208.Data.ArrayMax = 0;
                  }
                }
                if ((2 < (byte)LogArchiveDiff._0_1_) && (!param_10)) {
                  if (local_218->Offset < lVar16) {
                    bVar6 = true;
                    ::FString::PrintfImpl(&local_1b8,L"(+%lld)");
                  }
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
                  if ((bVar6) &&
                     (bVar6 = false,
                     local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                  }
                }
                if ((3 < (byte)LogArchiveDiff._0_1_) && (!param_10)) {
                  UE::Logging::Private::BasicLog<4>
                            (&::LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
                }
                FCompressionUtil::LogHexDump
                          (param_1->Data,param_1->Size,local_220 + -0x40,local_220 + 0x40,0x20);
                if ((3 < (byte)LogArchiveDiff._0_1_) && (!param_10)) {
                  UE::Logging::Private::BasicLog<4>
                            ((FStaticBasicLogRecord *)&PTR_u__s__Logging__d__1507e58e0,
                             (FLogCategoryBase *)&LogArchiveDiff);
                }
                FCompressionUtil::LogHexDump
                          (param_2->Data,param_2->Size,lVar16 + -0x40,lVar16 + 0x40,0x20);
                bVar5 = true;
                if (FVar18.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar18.Data);
                }
                if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_250.Data.AllocatorInstance.Data);
                }
                if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_240.Data.AllocatorInstance.Data);
                }
              }
              else if (local_290 == -1) {
                local_290 = lVar16;
              }
              FVar14 = local_278;
              uVar7 = ::GetTypeHash(local_278.ComparisonIndex.Value);
              pFVar11 = TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                        ::FindOrAddImpl<FName_const_&>
                                  ((TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                                    *)param_9,uVar7 + FVar14.Number,&local_278);
              local_268 = local_268 + 1;
              pFVar11->NumDiffs = pFVar11->NumDiffs + 1;
              if (local_258 != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_258);
              }
              local_26c = local_230.Data.ArrayNum;
              local_258 = local_230.Data.AllocatorInstance.Data;
              local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_230.Data.ArrayNum = 0;
              local_230.Data.ArrayMax = 0;
              iVar9 = iVar8;
LAB_141ee16aa:
              FVar14 = local_278;
              uVar7 = ::GetTypeHash(local_278.ComparisonIndex.Value);
              pFVar11 = TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                        ::FindOrAddImpl<FName_const_&>
                                  ((TMapBase<FName,FArchiveDiffStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FArchiveDiffStats,0>_>
                                    *)param_9,uVar7 + FVar14.Number,&local_278);
              pFVar11->DiffSize = pFVar11->DiffSize + 1;
              lVar20 = local_290;
              if (bVar5) {
                *param_8 = *param_8 + 1;
                local_288 = (FName)((longlong)local_288 + 1);
              }
            }
          }
        }
      }
      local_260 = local_260 + 1;
      FVar14 = local_288;
    } while (local_260 < local_210);
  }
  if ((-1 < param_7) && ((longlong)FVar14 < local_268)) {
    if (lVar20 == -1) {
      if ((2 < (byte)LogArchiveDiff._0_1_) && (!param_10)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
      }
    }
    else if ((2 < (byte)LogArchiveDiff._0_1_) && (!param_10)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogArchiveDiff);
    }
  }
  if (local_258 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258);
  }
  return;
}

// CreateLinkerForPackage @ 141ee7fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FLinkerLoad * __cdecl
FArchiveStackTraceWriter::CreateLinkerForPackage
          (FUObjectSerializeContext *param_1,FString *param_2,FString *param_3,FPackageData *param_4
          )

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  EPackageExtension EVar3;
  EPackageSegment EVar4;
  bool bVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  FLargeMemoryReader *this;
  FLargeMemoryReader *pFVar9;
  FString *pFVar10;
  FLinkerLoad *pFVar11;
  int iVar12;
  wchar_t *pwVar13;
  FNameEntryId FVar14;
  uint uVar15;
  EPackageExtension EVar16;
  FName local_res10;
  FName local_res18;
  FName local_88;
  FPackagePath local_80;
  FString local_70;
  FString local_58;
  TStringView<wchar_t> local_48;
  
  if ((param_2->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(&local_res18,pwVar13);
  FVar1 = *pFVar6;
  pUVar7 = Z_Construct_UClass_UPackage_NoRegister();
  pFVar9 = (FLargeMemoryReader *)0x0;
  pUVar8 = (UPackage *)StaticFindObjectFast(pUVar7,(UObject *)0x0,FVar1,None,RF_NoFlags,Borrowed);
  if (pUVar8 == (UPackage *)0x0) {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pUVar8 = CreatePackage(pwVar13);
  }
  this = ::operator_new(0xb8);
  if (this != (FLargeMemoryReader *)0x0) {
    if ((param_2->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(&local_88,pwVar13);
    pFVar9 = FLargeMemoryReader::FLargeMemoryReader(this,param_4->Data,param_4->Size,None,*pFVar6);
  }
  iVar12 = (param_3->Data).ArrayNum;
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  FVar14.Value = iVar12 - 1;
  if (iVar12 == 0) {
    FVar14.Value = 0;
  }
  local_58.Data.ArrayNum = FVar14.Value;
  local_48.Size = FVar14.Value;
  local_48._12_4_ = local_58.Data.ArrayMax;
  local_58.Data.AllocatorInstance.Data = pFVar2;
  local_48.DataPtr = (wchar_t *)pFVar2;
  EVar3 = FPackagePath::ParseExtension(&local_48,(int *)&local_res10);
  EVar4 = ExtensionToSegment(EVar3);
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  EVar16 = Unspecified;
  if (EVar4 == Header) {
    EVar16 = EVar3;
  }
  if ((int)local_res10.ComparisonIndex.Value < (int)FVar14.Value) {
    FVar14.Value = local_res10.ComparisonIndex.Value;
  }
  uVar15 = 0;
  if (0 < (int)FVar14.Value) {
    uVar15 = FVar14.Value;
  }
  pFVar10 = ::FString::ConstructFromPtrSize((FString *)&local_48,(wchar_t *)pFVar2,uVar15);
  if (&local_70 != pFVar10) {
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    local_70.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_70.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  bVar5 = FPackageName::TryConvertFilenameToLongPackageName(&local_70,&local_58,(FString *)0x0,None)
  ;
  if ((!bVar5) && (1 < (byte)LogPackageName._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPackageName);
  }
  iVar12 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  pFVar6 = ::FName::FName(&local_res10,iVar12,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                          FNAME_Add);
  local_80.PackageName = *pFVar6;
  local_80.HeaderExtension = EVar16;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  pFVar11 = FLinkerLoad::CreateLinker
                      (param_1,pUVar8,&local_80,0x80,(FArchive *)pFVar9,
                       (FLinkerInstancingContext *)0x0);
  if (((pFVar11 != (FLinkerLoad *)0x0) && (pUVar8 != (UPackage *)0x0)) &&
     ((atomic<unsigned_int>)((uint)pUVar8->PackageFlagsPrivate | 0x20) !=
      pUVar8->PackageFlagsPrivate)) {
    LOCK();
    pUVar8->PackageFlagsPrivate = (atomic<unsigned_int>)((uint)pUVar8->PackageFlagsPrivate | 0x20);
    UNLOCK();
  }
  return pFVar11;
}

// DumpPackageHeaderDiffs @ 141eeb2a0

void __cdecl
FArchiveStackTraceWriter::DumpPackageHeaderDiffs
          (FPackageData *param_1,FPackageData *param_2,FString *param_3,int param_4,
          EPackageHeaderFormat param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_5 == PackageFileSummary) {
    DumpPackageHeaderDiffs_LinkerLoad(param_1,param_2,param_3,param_4);
    return;
  }
  if (param_5 != ZenPackageSummary) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\ArchiveStackTrace.cpp"
                       ,0x67d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GenerateDiffMap @ 141ef7780

bool __cdecl
FArchiveStackTraceWriter::GenerateDiffMap
          (FPackageData *param_1,FPackageData *param_2,FArchiveCallstacks *param_3,int param_4,
          FArchiveDiffMap *param_5)

{
  long64 *plVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FCallstackAtOffset *pFVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  long64 local_60;
  long64 lStack_58;
  longlong local_50;
  longlong lStack_48;
  
  lVar12 = param_1->Size - param_1->StartOffset;
  bVar7 = true;
  iVar9 = -1;
  lVar13 = param_2->Size - param_2->StartOffset;
  lVar19 = lVar13;
  if (lVar12 < lVar13) {
    lVar19 = lVar12;
  }
  lVar15 = 0;
  if (0 < lVar19) {
    do {
      lVar14 = param_2->StartOffset + lVar15;
      iVar8 = iVar9;
      if ((param_1->Data[lVar15 + param_1->StartOffset] != param_2->Data[lVar14]) &&
         (bVar7 = false, *(int *)&param_5->field_0x8 < param_4)) {
        iVar8 = 0;
        if (0 < iVar9) {
          iVar8 = iVar9;
        }
        iVar8 = FArchiveCallstacks::GetCallstackIndexAtOffset(param_3,lVar14,iVar8);
        if (((-1 < iVar8) && (iVar8 != iVar9)) &&
           (pFVar11 = FArchiveCallstacks::GetCallstack(param_3,iVar8), pFVar11->bIgnore == false)) {
          local_60 = pFVar11->Offset;
          lStack_58 = 0;
          lStack_58 = FArchiveCallstacks::GetSerializedDataSizeForOffsetIndex(param_3,iVar8);
          if (((*(long64 **)param_5 <= &local_60) &&
              (&local_60 < *(long64 **)param_5 + (longlong)*(int *)&param_5->field_0xc * 2)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar9 = *(int *)&param_5->field_0x8;
          if (iVar9 == *(int *)&param_5->field_0xc) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)param_5,(int *)&param_5->field_0xc);
          }
          *(int *)&param_5->field_0x8 = iVar9 + 1;
          plVar1 = (long64 *)(*(longlong *)param_5 + (longlong)iVar9 * 0x10);
          *plVar1 = local_60;
          plVar1[1] = lStack_58;
        }
      }
      iVar9 = iVar8;
      lVar15 = lVar15 + 1;
    } while (lVar15 < lVar19);
  }
  if (lVar12 < lVar13) {
    uVar17 = iVar9 + 1;
    if ((int)uVar17 < (param_3->CallstackAtOffsetMap).ArrayNum) {
      lVar19 = (longlong)(int)uVar17 << 4;
      uVar18 = uVar17;
      do {
        uVar18 = uVar18 + 1;
        if (param_4 <= *(int *)&param_5->field_0x8) break;
        uVar16 = ~uVar17 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar17 < (param_3->CallstackAtOffsetMap).ArrayNum) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar3 = (param_3->CallstackAtOffsetMap).AllocatorInstance.Data;
        lVar12 = *(longlong *)(pFVar3 + lVar19);
        if (param_2->Size <= lVar12) break;
        if (pFVar3[lVar19 + 0xc] == (FScriptContainerElement)0x0) {
          iVar9 = (param_3->CallstackAtOffsetMap).ArrayNum;
          lStack_48 = 0;
          local_50 = lVar12;
          if ((int)uVar17 < iVar9 + -1) {
            uVar10 = 0;
            if ((int)uVar17 < iVar9) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pFVar3 = (param_3->CallstackAtOffsetMap).AllocatorInstance.Data;
            uVar10 = 0;
            if ((int)uVar18 < (param_3->CallstackAtOffsetMap).ArrayNum) {
              uVar10 = ~uVar18 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            lStack_48 = *(longlong *)
                         ((param_3->CallstackAtOffsetMap).AllocatorInstance.Data + lVar19 + 0x10) -
                        *(longlong *)(pFVar3 + lVar19);
          }
          else {
            uVar10 = 0;
            if ((int)uVar17 < iVar9) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            lStack_48 = param_3->TotalSize -
                        *(longlong *)
                         ((param_3->CallstackAtOffsetMap).AllocatorInstance.Data + lVar19);
          }
          if (((*(longlong **)param_5 <= &local_50) &&
              (&local_50 < *(longlong **)param_5 + (longlong)*(int *)&param_5->field_0xc * 2)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar9 = *(int *)&param_5->field_0x8;
          if (iVar9 == *(int *)&param_5->field_0xc) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)param_5,(int *)&param_5->field_0xc);
          }
          *(int *)&param_5->field_0x8 = iVar9 + 1;
          plVar2 = (longlong *)(*(longlong *)param_5 + (longlong)iVar9 * 0x10);
          *plVar2 = local_50;
          plVar2[1] = lStack_48;
        }
        uVar17 = uVar17 + 1;
        lVar19 = lVar19 + 0x10;
      } while ((int)uVar17 < (param_3->CallstackAtOffsetMap).ArrayNum);
    }
    bVar7 = false;
  }
  else if (lVar13 < lVar12) {
    bVar7 = false;
  }
  return bVar7;
}

// GetDiffMap @ 141ef9ac0

FArchiveDiffMap * __thiscall FArchiveStackTraceWriter::GetDiffMap(FArchiveStackTraceWriter *this)

{
  FArchiveDiffMap *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_FArchiveDiffMap_const&___ptr64___cdecl_FArchiveStackTraceWriter::GetDiffMap(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_FArchiveDiffMap_const&___ptr64___cdecl_FArchiveStackTraceWriter::GetDiffMap(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_FArchiveDiffMap_const&___ptr64___cdecl_FArchiveStackTraceWriter::GetDiffMap(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FArchiveStackTraceWriter::GetDiffMap'::__l2::_dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&`public:_class_FArchiveDiffMap_const&___ptr64___cdecl_FArchiveStackTraceWriter::GetDiffMap(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar1 = &`public:_class_FArchiveDiffMap_const&___ptr64___cdecl_FArchiveStackTraceWriter::GetDiffMap(void)const___ptr64'
            ::__l2::Empty;
  if (this->DiffMap != (FArchiveDiffMap *)0x0) {
    pFVar1 = this->DiffMap;
  }
  return pFVar1;
}

// Serialize @ 141f0f660

void __thiscall
FArchiveStackTraceWriter::Serialize(FArchiveStackTraceWriter *this,void *param_1,long64 param_2)

{
  UObject *pUVar1;
  FArchiveDiffMap *this_00;
  code *pcVar2;
  int iVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  wchar_t *pwVar10;
  FString *pFVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  longlong local_res18;
  FString local_a8;
  FString local_98;
  FString local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FName *local_68;
  undefined1 *puStack_60;
  TStringView<wchar_t> local_58;
  FString local_48;
  TArrayView<FName_const_,int> local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar10 = FCommandLine::Get();
    bVar5 = FParse::Param(pwVar10,L"cooksinglepackage");
    if (bVar5) {
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      pwVar10 = FCommandLine::Get();
      bVar5 = FParse::Value(pwVar10,L"map=",&local_a8,true,(wchar_t **)0x0);
      if (bVar5) {
        pwVar10 = FCommandLine::Get();
        bVar5 = FParse::Value(pwVar10,L"diffonlybreakoffset=",&local_res18);
        if ((bVar5) && (0 < local_res18)) {
          BreakAtOffsetSettings.OffsetToBreakOn = local_res18;
          local_78 = local_a8.Data.AllocatorInstance.Data;
          iStack_70 = local_a8.Data.ArrayNum + -1;
          if (local_a8.Data.ArrayNum == 0) {
            iStack_70 = 0;
          }
          local_58._12_4_ = uStack_6c;
          local_58.Size = iStack_70;
          local_58.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
          pFVar11 = FPackageName::GetShortName(&local_48,&local_58);
          ::FString::ConcatCF(&local_98,L"/",pFVar11);
          if (BreakAtOffsetSettings.PackageToBreakOn.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(BreakAtOffsetSettings.PackageToBreakOn.Data.AllocatorInstance.Data);
          }
          BreakAtOffsetSettings.PackageToBreakOn.Data.AllocatorInstance.Data =
               local_98.Data.AllocatorInstance.Data;
          BreakAtOffsetSettings.PackageToBreakOn.Data.ArrayNum = local_98.Data.ArrayNum;
          BreakAtOffsetSettings.PackageToBreakOn.Data.ArrayMax = local_98.Data.ArrayMax;
          local_98.Data.ArrayNum = 0;
          local_98.Data.ArrayMax = 0;
          local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    atexit(`FArchiveStackTraceWriter::Serialize'::__l2::
           _dynamic_atexit_destructor_for__BreakAtOffsetSettings__);
    _Init_thread_footer(&::_TSS0);
  }
  lVar12 = this->DiffMapOffset;
  lVar7 = (**(code **)(this->_padding_ + 0x28))(this);
  lVar12 = lVar12 + lVar7;
  if (((BreakAtOffsetSettings.OffsetToBreakOn < 0) ||
      (BreakAtOffsetSettings.OffsetToBreakOn < lVar12)) ||
     (lVar12 + param_2 <= BreakAtOffsetSettings.OffsetToBreakOn)) goto LAB_141f0f7be;
  (**(code **)(this->_padding_ + 0x18))(this,&local_88);
  iVar6 = BreakAtOffsetSettings.PackageToBreakOn.Data.ArrayNum + -1;
  FVar4 = BreakAtOffsetSettings.PackageToBreakOn.Data.AllocatorInstance;
  if (BreakAtOffsetSettings.PackageToBreakOn.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  iVar6 = ::FString::Find(&local_88,(wchar_t *)FVar4.Data,iVar6,IgnoreCase,FromEnd,-1);
  if (-1 < iVar6) {
    iVar3 = BreakAtOffsetSettings.PackageToBreakOn.Data.ArrayNum + -1 + iVar6;
    if (BreakAtOffsetSettings.PackageToBreakOn.Data.ArrayNum == 0) {
      iVar3 = iVar6;
    }
    iVar6 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    if (iVar3 != iVar6) {
      if ((((iVar3 < 0) || (local_88.Data.ArrayNum == 0)) || (local_88.Data.ArrayNum + -1 <= iVar3))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                ,0x107,
                                L"String index out of bounds: Index %i from a string with a length of %i"
                               ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(short *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar3 * 2) != 0x2e)
      goto LAB_141f0f7b4;
    }
    bVar5 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_141f0f7b4:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
LAB_141f0f7be:
  if (0 < param_2) {
    puVar8 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    puStack_60 = local_res8;
    local_68 = (FName *)UE::Core::Private::Function::
                        TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                        ::Call;
    pFVar9 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar8);
    local_68 = (FName *)0x0;
    puStack_60 = (undefined1 *)((ulonglong)puStack_60 & 0xffffffff00000000);
    pUVar1 = *(UObject **)((longlong)pFVar9[0x2f] + 0x30);
    this_00 = this->DiffMap;
    if ((this_00 == (FArchiveDiffMap *)0x0) ||
       (bVar5 = FArchiveDiffMap::ContainsOffset(this_00,lVar12), !bVar5)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    local_38.DataPtr = local_68;
    local_38._8_8_ = puStack_60;
    FArchiveCallstacks::Add
              (this->Callstacks,lVar12,param_2,pUVar1,(FProperty *)this->_padding_,&local_38,
               this_00 != (FArchiveDiffMap *)0x0,bVar5,this->StackIgnoreCount);
  }
  if (this->bInnerArchiveDisabled == false) {
    (**(code **)(*(longlong *)this->_padding_ + 0x188))((longlong *)this->_padding_,param_1,param_2)
    ;
  }
  return;
}

