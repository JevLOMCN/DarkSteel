// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetDisplayString @ 14175ca50

FString * __cdecl FTextInspector::GetDisplayString(FText *param_1)

{
  FString *pFVar1;
  
  FText::Rebuild(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014175ca69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FString *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x28))();
  return pFVar1;
}

// GetFlags @ 14175d1c0

uint __cdecl FTextInspector::GetFlags(FText *param_1)

{
  return param_1->Flags;
}

// GetHistoricFormatData @ 14175e300

void __cdecl
FTextInspector::GetHistoricFormatData
          (FText *param_1,TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014175e336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x98))(plVar1,param_1,param_2,*(code **)(*plVar1 + 0x98));
  return;
}

// GetHistoricNumericData @ 14175e4d0

bool __cdecl
FTextInspector::GetHistoricNumericData(FText *param_1,FHistoricTextNumericData *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014175e506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar2 + 0xa0))(plVar2,param_1,param_2,*(code **)(*plVar2 + 0xa0));
  return (bool)uVar1;
}

// GetKey @ 14175e680

TOptional<FString> * __cdecl
FTextInspector::GetKey(TOptional<FString> *__return_storage_ptr__,FText *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  TOptional<FString> *pTVar5;
  FTextKey local_res10 [2];
  int local_res18;
  int local_res1c;
  FString local_18;
  
  plVar4 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_res18);
  if ((local_res18 == -1) && (local_res1c == -1)) {
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  }
  local_res10[0].Index = local_res1c;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FTextKey::AppendString(local_res10,&local_18);
  (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
       local_18.Data.AllocatorInstance.Data;
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_18.Data.ArrayNum;
  iVar2 = local_18.Data.ArrayMax;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if ((iVar2 == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TOptional<FString> *)(*pcVar1)();
    return pTVar5;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNamespace @ 14175fc30

TOptional<FString> * __cdecl
FTextInspector::GetNamespace(TOptional<FString> *__return_storage_ptr__,FText *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  TOptional<FString> *pTVar5;
  FTextKey local_res10 [2];
  int local_res18;
  int iStackX_1c;
  FString local_18;
  
  plVar4 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_res18);
  if ((local_res18 == -1) && (iStackX_1c == -1)) {
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    return __return_storage_ptr__;
  }
  local_res10[0].Index = local_res18;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FTextKey::AppendString(local_res10,&local_18);
  (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
       local_18.Data.AllocatorInstance.Data;
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_18.Data.ArrayNum;
  iVar2 = local_18.Data.ArrayMax;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if ((iVar2 == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TOptional<FString> *)(*pcVar1)();
    return pTVar5;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSharedDataId @ 141760c80

void * __cdecl FTextInspector::GetSharedDataId(FText *param_1)

{
  return (param_1->TextData).Reference;
}

// GetSourceString @ 141761070

FString * __cdecl FTextInspector::GetSourceString(FText *param_1)

{
  FString *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141761076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FString *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x20))();
  return pFVar1;
}

// GetTableIdAndKey @ 1417613a0

bool __cdecl FTextInspector::GetTableIdAndKey(FText *param_1,FName *param_2,FString *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  FTextKeyState *SRWLock;
  FKeyData *pFVar7;
  int iVar8;
  
  iVar8 = -1;
  plVar5 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
  cVar2 = (**(code **)(*plVar5 + 0x58))(plVar5);
  if (cVar2 == '\v') {
    lVar6 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
    lVar6 = *(longlong *)(lVar6 + 0x18);
    if (lVar6 != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x38);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      EnterCriticalSection(lpCriticalSection);
      *param_2 = *(FName *)(lVar6 + 0x10);
      iVar8 = *(int *)(lVar6 + 0x18);
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    ::FString::Reset(param_3,0);
    if (iVar8 != -1) {
      SRWLock = FTextKeyState::GetState();
      if (SRWLock == (FTextKeyState *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      pFVar7 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                         (&(SRWLock->KeyDataAllocations).Elements,iVar8);
      iVar8 = pFVar7->StrLen;
      if (iVar8 < 0) {
        if (iVar8 != -1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsGuid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                             ,0x157,L"AsGuid called on a FKeyData that doesn\'t reference a GUID!");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        FGuid::AppendString(pFVar7->DataPtr,param_3,Digits);
      }
      else {
        ::FString::AppendChars(param_3,pFVar7->DataPtr,iVar8);
      }
      if (SRWLock != (FTextKeyState *)0x0) {
        ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      }
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// GetTableIdAndKey @ 141761550

bool __cdecl FTextInspector::GetTableIdAndKey(FText *param_1,FName *param_2,FTextKey *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
  cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
  if (cVar1 == '\v') {
    lVar3 = (**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
    if (*(FStringTableReferenceData **)(lVar3 + 0x18) != (FStringTableReferenceData *)0x0) {
      FTextHistory_StringTableEntry::FStringTableReferenceData::GetTableIdAndKey
                (*(FStringTableReferenceData **)(lVar3 + 0x18),param_2,param_3);
    }
    return true;
  }
  return false;
}

// GetTextId @ 141761850

FTextId __cdecl FTextInspector::GetTextId(FText *param_1)

{
  longlong *plVar1;
  undefined8 *in_RDX;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*in_RDX + 0x48))();
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  return (FTextId)param_1;
}

// ShouldGatherForLocalization @ 14177df60

bool __cdecl FTextInspector::ShouldGatherForLocalization(FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  bVar2 = FGenericPlatformProcess::SupportsMultithreading();
  if (!bVar2) {
    return false;
  }
  plVar5 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x20))();
  if ((param_1->Flags & 3) == 0) {
    plVar6 = (longlong *)(**(code **)((longlong)*(param_1->TextData).Reference + 0x48))();
    cVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
    if ((cVar3 != '\v') && (1 < (int)plVar5[1])) {
      iVar8 = 0;
      lVar9 = 0;
      while( true ) {
        iVar7 = (int)plVar5[1] + -1;
        if ((int)plVar5[1] == 0) {
          iVar7 = 0;
        }
        if (iVar7 <= iVar8) break;
        if ((iVar8 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        bVar2 = FTextChar::IsWhitespace((uint)*(ushort *)(lVar9 + *plVar5));
        if (!bVar2) {
          return true;
        }
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 2;
      }
    }
  }
  return false;
}

