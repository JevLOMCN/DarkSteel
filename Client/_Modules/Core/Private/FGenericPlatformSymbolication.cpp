// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// LoadSymbolDatabaseForBinary @ 14164c250

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __cdecl
FGenericPlatformSymbolication::LoadSymbolDatabaseForBinary
          (FString *param_1,FString *param_2,FString *param_3,TOptional<FString> *param_4,
          FGenericPlatformSymbolDatabase *param_5)

{
  uint uVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  FNameEntryId FVar5;
  int iVar6;
  IFileManager *pIVar7;
  longlong lVar8;
  undefined4 extraout_var;
  FArchive *pFVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  bool bVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  uint local_res8 [2];
  FString *local_res10;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_148;
  FString local_138;
  FString local_128;
  FArchiveLoadCompressedProxy local_118;
  
  bVar14 = false;
  bVar12 = false;
  local_res10 = param_2;
  FPaths::GetBaseFilename(&local_128,param_2,true);
  uVar1 = (param_1->Data).ArrayNum;
  iVar6 = local_128.Data.ArrayNum + -1;
  if (local_128.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  if ((uVar1 == 0) && (iVar6 != -1)) {
    pFVar13 = (param_1->Data).AllocatorInstance.Data;
    iVar4 = iVar6 + 2;
LAB_14164c2cc:
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar4 != 0) goto LAB_14164c2d6;
    local_148.ArrayMax = 0;
    local_148.ArrayNum = uVar1;
  }
  else {
    pFVar13 = (param_1->Data).AllocatorInstance.Data;
    iVar4 = iVar6 + 1;
    if (uVar1 == 0) goto LAB_14164c2cc;
LAB_14164c2d6:
    local_148.ArrayNum = uVar1;
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar11 = uVar1 + iVar4;
    if ((int)uVar11 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar11,0,&local_148.AllocatorInstance,uVar1,&local_148.ArrayMax);
    if (uVar1 != 0) {
      memcpy(local_148.AllocatorInstance.Data,pFVar13,(longlong)(int)uVar1 * 2);
    }
  }
  ::FString::PathAppend
            ((FString *)&local_148,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar6);
  ::FString::ConcatFC(&local_138,(FString *)&local_148,L".udebugsymbols");
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  pIVar7 = IFileManager::Get();
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar10.Data = local_138.Data.AllocatorInstance.Data;
  }
  lVar8 = (**(code **)((longlong)*pIVar7 + 0x110))(pIVar7,FVar10.Data);
  if (lVar8 < 1) goto LAB_14164c472;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar10.Data = local_138.Data.AllocatorInstance.Data;
  }
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  bVar3 = FFileHelper::LoadFileToArray(&local_148,(wchar_t *)FVar10.Data,0);
  bVar12 = bVar14;
  if (bVar3) {
    FVar5 = FNameEntryId::FromValidEName((EName)local_res8);
    local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar5.Value);
    local_res8[1] = 0;
    FVar2.Number = 0;
    FVar2.ComparisonIndex.Value = local_res8[0];
    FArchiveLoadCompressedProxy::FArchiveLoadCompressedProxy
              (&local_118,&local_148,FVar2,COMPRESS_NoFlags);
    pFVar9 = ::operator<<((FArchive *)&local_118,&param_5->Signature);
    pFVar9 = ::operator<<(pFVar9,&param_5->Name);
    pFVar9 = TArrayPrivateFriend::Serialize<FGenericPlatformSymbolData,TSizedDefaultAllocator<32>_>
                       (pFVar9,&param_5->Symbols);
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              (pFVar9,&param_5->StringTable);
    if ((local_118._padding_._1_1_ & 2) == 0) {
      iVar6 = (param_5->Signature).Data.ArrayNum;
      iVar4 = (param_3->Data).ArrayNum;
      if (iVar6 == iVar4) {
        if (1 < iVar6) {
          iVar6 = StricmpImpl<wchar_t,wchar_t>
                            ((wchar_t *)(param_5->Signature).Data.AllocatorInstance.Data,
                             (wchar_t *)(param_3->Data).AllocatorInstance.Data);
          bVar14 = iVar6 == 0;
          goto LAB_14164c44f;
        }
      }
      else {
        bVar14 = iVar6 + iVar4 == 1;
LAB_14164c44f:
        if (!bVar14) goto LAB_14164c459;
      }
      bVar12 = true;
    }
LAB_14164c459:
    FArchiveLoadCompressedProxy::~FArchiveLoadCompressedProxy(&local_118);
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
LAB_14164c472:
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  pFVar13 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  pFVar13 = (local_res10->Data).AllocatorInstance.Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  pFVar13 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  if ((*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) &&
     (pFVar13 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
     pFVar13 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar13);
  }
  return bVar12;
}

// SaveSymbolDatabaseForBinary @ 141659aa0

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGenericPlatformSymbolication::SaveSymbolDatabaseForBinary
          (FString *param_1,FString *param_2,FGenericPlatformSymbolDatabase *param_3)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FNameEntryId FVar7;
  undefined4 extraout_var;
  FArchive *pFVar8;
  IFileManager *pIVar9;
  FStaticBasicLogRecord *pFVar10;
  ForAnyElementType FVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  FString local_168;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_158;
  FString local_148;
  FString local_138;
  TArrayView<unsigned_char_const_,__int64> local_128;
  FArchiveSaveCompressedProxy local_118;
  
  bVar15 = false;
  FPaths::GetBaseFilename(&local_138,param_2,true);
  iVar1 = (param_1->Data).ArrayNum;
  iVar12 = local_138.Data.ArrayNum + -1;
  if (local_138.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  local_168.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar12 != -1)) {
    pFVar14 = (param_1->Data).AllocatorInstance.Data;
    iVar6 = iVar12 + 2;
LAB_141659b17:
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar6 != 0) goto LAB_141659b21;
    local_168.Data.ArrayMax = 0;
  }
  else {
    pFVar14 = (param_1->Data).AllocatorInstance.Data;
    iVar6 = iVar12 + 1;
    if (iVar1 == 0) goto LAB_141659b17;
LAB_141659b21:
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar13 = iVar1 + iVar6;
    if ((int)uVar13 < iVar1) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar13,0,(ForAnyElementType *)&local_168,iVar1,&local_168.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(local_168.Data.AllocatorInstance.Data,pFVar14,(longlong)iVar1 * 2);
    }
  }
  ::FString::PathAppend(&local_168,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar12);
  ::FString::ConcatFC(&local_148,&local_168,L".udebugsymbols");
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  FVar7 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar7.Value);
  FArchiveSaveCompressedProxy::FArchiveSaveCompressedProxy
            (&local_118,&local_158,FVar3,COMPRESS_BiasSpeed);
  pFVar8 = ::operator<<((FArchive *)&local_118,&param_3->Signature);
  pFVar8 = ::operator<<(pFVar8,&param_3->Name);
  pFVar8 = TArrayPrivateFriend::Serialize<FGenericPlatformSymbolData,TSizedDefaultAllocator<32>_>
                     (pFVar8,&param_3->Symbols);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(pFVar8,&param_3->StringTable);
  FArchiveSaveCompressedProxy::Flush(&local_118);
  if ((local_118._padding_._1_1_ & 2) == 0) {
    pIVar9 = IFileManager::Get();
    local_128.DataPtr = (uchar *)local_158.AllocatorInstance.Data;
    local_128.ArrayNum = (long64)local_158.ArrayNum;
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_148.Data.ArrayNum != 0) {
      FVar11.Data = local_148.Data.AllocatorInstance.Data;
    }
    if (local_158.ArrayNum < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    bVar4 = FFileHelper::SaveArrayToFile(&local_128,(wchar_t *)FVar11.Data,pIVar9,0);
    if (bVar4) {
      bVar15 = true;
      goto LAB_141659cce;
    }
    if ((byte)LogGenericPlatformSymbolication._0_1_ < 2) goto LAB_141659cce;
    pFVar10 = &::LOG_Static;
  }
  else {
    if ((byte)LogGenericPlatformSymbolication._0_1_ < 2) goto LAB_141659cce;
    pFVar10 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar10,(FLogCategoryBase *)&LogGenericPlatformSymbolication);
LAB_141659cce:
  FArchiveSaveCompressedProxy::~FArchiveSaveCompressedProxy(&local_118);
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pFVar14 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  pFVar14 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  return bVar15;
}

// SymbolInfoForStrippedSymbol @ 141662dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FGenericPlatformSymbolication::SymbolInfoForStrippedSymbol
          (FGenericPlatformSymbolDatabase *param_1,ulong64 param_2,ulong64 param_3,FString *param_4,
          FProgramCounterSymbolInfo *param_5)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  FProgramCounterSymbolInfo *pFVar4;
  undefined1 uVar5;
  int iVar6;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298;
  undefined1 local_297 [7];
  ForAnyElementType local_290;
  int local_288;
  int local_284;
  ForAnyElementType local_280;
  int local_278;
  int local_274;
  ulonglong local_270;
  longlong local_268;
  uint local_260;
  ForAnyElementType local_258;
  uint local_250;
  int local_24c;
  FProgramCounterSymbolInfo *local_248;
  ulong64 local_240;
  ulong64 uStack_238;
  FString *local_230;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_228;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_188;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  iVar6 = (param_1->Signature).Data.ArrayNum;
  iVar1 = (param_4->Data).ArrayNum;
  local_248 = param_5;
  local_290.Data = (FScriptContainerElement *)param_3;
  local_240 = param_2;
  local_230 = param_4;
  if (iVar6 == iVar1) {
    if (1 < iVar6) {
      iVar6 = StricmpImpl<wchar_t,wchar_t>
                        ((wchar_t *)(param_1->Signature).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_4->Data).AllocatorInstance.Data);
      bVar17 = iVar6 == 0;
      goto LAB_141662e31;
    }
  }
  else {
    bVar17 = iVar6 + iVar1 == 1;
LAB_141662e31:
    bVar16 = false;
    if (!bVar17) goto LAB_141663277;
  }
  pFVar11 = (param_1->Symbols).AllocatorInstance.Data;
  iVar6 = (param_1->Symbols).ArrayNum;
  local_280.Data = pFVar11 + (longlong)iVar6 * 0x28;
  while( true ) {
    FVar13.Data = local_280.Data;
    if ((param_1->Symbols).ArrayNum != iVar6) {
      local_298 = 0;
      `TCheckedPointerIterator<FGenericPlatformSymbolData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_298);
    }
    bVar16 = false;
    if (pFVar11 == FVar13.Data) goto LAB_141663277;
    local_250 = *(uint *)(pFVar11 + 0x20);
    lVar14 = (longlong)(int)local_250;
    local_270 = *(ulonglong *)pFVar11;
    local_268 = *(longlong *)(pFVar11 + 8);
    local_260 = *(uint *)(pFVar11 + 0x10);
    pvVar2 = *(void **)(pFVar11 + 0x18);
    local_258.Data = (FScriptContainerElement *)0x0;
    if (local_250 == 0) {
      local_24c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_250,0,&local_258,local_250,&local_24c);
      memcpy(local_258.Data,pvVar2,lVar14 << 5);
    }
    uVar15 = local_240 - (longlong)local_290.Data;
    if ((local_270 <= uVar15) && (uVar15 <= local_268 + local_270)) break;
    if (local_258.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data);
    }
    pFVar11 = pFVar11 + 0x28;
  }
  if ((param_1->Name).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Name).Data.AllocatorInstance.Data;
  }
  pTVar7 = StringCast<char,128,wchar_t>(&local_228,pwVar9);
  pFVar4 = local_248;
  strncpy(local_248->ModuleName,pTVar7->Ptr,0x400);
  pFVar4->ModuleName[0x3ff] = '\0';
  if ((void *)local_228._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_228._padding_);
  }
  lVar14 = (longlong)(int)local_260;
  uVar8 = 0;
  if ((int)local_260 < (param_1->StringTable).ArrayNum) {
    uVar8 = ~local_260 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar11 = (param_1->StringTable).AllocatorInstance.Data;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288 = *(int *)(pFVar11 + lVar14 * 0x10 + 8);
  lVar12 = (longlong)local_288;
  pvVar2 = *(void **)(pFVar11 + lVar14 * 0x10);
  if (local_288 == 0) {
    local_284 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_288,0,&local_290,local_288,&local_284);
    memcpy(local_290.Data,pvVar2,lVar12 * 2);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_288 != 0) {
    FVar13.Data = local_290.Data;
  }
  pTVar7 = StringCast<char,128,wchar_t>(&local_188,(wchar_t *)FVar13.Data);
  strncpy(pFVar4->FunctionName,pTVar7->Ptr,0x400);
  pFVar4->FunctionName[0x3ff] = '\0';
  if ((void *)local_188._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_188._padding_);
  }
  uVar8 = local_250;
  uVar10 = (ulonglong)(int)local_250;
  pFVar4->ProgramCounter = local_240;
  pFVar4->OffsetInModule = local_270;
  pFVar11 = local_258.Data + uVar10 * 0x20;
  pFVar4->LineNumber = -1;
  FVar13.Data = local_258.Data;
  while( true ) {
    if ((uint)uVar10 != uVar8) {
      local_297[0] = 0;
      `TCheckedPointerIterator<FGenericPlatformSymbolInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_297);
      uVar10 = (ulonglong)local_250;
    }
    if (FVar13.Data == pFVar11) goto LAB_141663237;
    local_240 = *(ulong64 *)FVar13.Data;
    uStack_238 = *(ulong64 *)(FVar13.Data + 8);
    iVar6 = (int)*(ulong64 *)(FVar13.Data + 0x18);
    if ((*(ulonglong *)(FVar13.Data + 8) <= uVar15) &&
       (uVar15 <= *(ulonglong *)(FVar13.Data + 8) + *(ulong64 *)(FVar13.Data + 0x10))) break;
    FVar13.Data = FVar13.Data + 0x20;
  }
  if ((iVar6 < 0 || (param_1->StringTable).ArrayNum <= iVar6) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar11 = (param_1->StringTable).AllocatorInstance.Data;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278 = *(int *)(pFVar11 + (longlong)iVar6 * 0x10 + 8);
  lVar14 = (longlong)local_278;
  pvVar2 = *(void **)(pFVar11 + (longlong)iVar6 * 0x10);
  if (local_278 == 0) {
    local_274 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_278,0,&local_280,local_278,&local_274);
    memcpy(local_280.Data,pvVar2,lVar14 * 2);
  }
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_278 != 0) {
    FVar13.Data = local_280.Data;
  }
  pTVar7 = StringCast<char,128,wchar_t>(&local_e8,(wchar_t *)FVar13.Data);
  pFVar4 = local_248;
  strncpy(local_248->Filename,pTVar7->Ptr,0x400);
  pFVar4->Filename[0x3ff] = '\0';
  if ((void *)local_e8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._padding_);
  }
  pFVar4->LineNumber = (int)local_240;
  if (local_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data);
  }
LAB_141663237:
  bVar16 = true;
  if (local_290.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data);
  }
  if (local_258.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data);
  }
LAB_141663277:
  pFVar11 = (local_230->Data).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  return bVar16;
}

