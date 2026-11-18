// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 15

// operator= @ 148bc4ad0

FInstallManagerBundleReport * __thiscall
FInstallManagerBundleReport::operator=
          (FInstallManagerBundleReport *this,FInstallManagerBundleReport *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<FInstallBundleSourceReport,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FInstallBundleSourceReport,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = &param_1->SessionId;
  pFVar2 = &this->SessionId;
  this->ContextName = param_1->ContextName;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SessionId).Data.ArrayNum = (param_1->SessionId).Data.ArrayNum;
    (this->SessionId).Data.ArrayMax = (param_1->SessionId).Data.ArrayMax;
    (param_1->SessionId).Data.ArrayNum = 0;
    (param_1->SessionId).Data.ArrayMax = 0;
  }
  if (&param_1->BackgroundedCount != &this->BackgroundedCount) {
    if ((param_1->BackgroundedCount).bIsSet == false) {
      if ((this->BackgroundedCount).bIsSet != false) {
        (this->BackgroundedCount).bIsSet = false;
      }
    }
    else {
      (this->BackgroundedCount).TypedValue = (param_1->BackgroundedCount).TypedValue;
      (this->BackgroundedCount).bIsSet = true;
    }
  }
  pTVar3 = &param_1->SourceReports;
  pTVar4 = &this->SourceReports;
  this->LoadedCount = param_1->LoadedCount;
  if (pTVar4 != pTVar3) {
    DestructItems<FInstallBundleSourceReport,int>
              ((FInstallBundleSourceReport *)(pTVar4->AllocatorInstance).Data,
               (this->SourceReports).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SourceReports).ArrayNum = (param_1->SourceReports).ArrayNum;
    (this->SourceReports).ArrayMax = (param_1->SourceReports).ArrayMax;
    (param_1->SourceReports).ArrayNum = 0;
    (param_1->SourceReports).ArrayMax = 0;
  }
  return this;
}

// DownloadedBytes @ 148bc8480

ulong64 __thiscall FInstallManagerBundleReport::DownloadedBytes(FInstallManagerBundleReport *this)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  FInstallBundleReport *this_00;
  FInstallBundleReport *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  uint local_res18;
  
  local_res18 = (this->SourceReports).ArrayNum;
  uVar3 = (ulonglong)(int)local_res18;
  uVar7 = 0;
  pFVar9 = (this->SourceReports).AllocatorInstance.Data;
  pFVar6 = pFVar9 + 0x28;
  pFVar8 = pFVar9 + uVar3 * 0x30;
  while( true ) {
    if ((this->SourceReports).ArrayNum != (int)uVar3) {
      `TCheckedPointerIterator<FInstallBundleSourceReport_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar8) break;
    iVar1 = *(int *)pFVar6;
    lVar5 = 0;
    this_00 = *(FInstallBundleReport **)(pFVar6 + -8);
    pFVar4 = this_00 + iVar1;
    while( true ) {
      if (*(int *)pFVar6 != iVar1) {
        `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_00 == pFVar4) break;
      uVar2 = FInstallBundleReport::DownloadedBytes(this_00);
      lVar5 = lVar5 + uVar2;
      this_00 = this_00 + 1;
    }
    uVar7 = uVar7 + lVar5;
    uVar3 = (ulonglong)local_res18;
    pFVar9 = pFVar9 + 0x30;
    pFVar6 = pFVar6 + 0x30;
  }
  return uVar7;
}

// FindOrAddBundleSourceReport @ 148bc9270

FInstallBundleSourceReport * __thiscall
FInstallManagerBundleReport::FindOrAddBundleSourceReport
          (FInstallManagerBundleReport *this,FInstallBundleSourceType *param_1)

{
  int *piVar1;
  int iVar2;
  FInstallBundleSourceReport *pFVar3;
  FString *pFVar4;
  FName *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  
  pFVar3 = TryFindBundleSourceReport(this,param_1);
  if (pFVar3 == (FInstallBundleSourceReport *)0x0) {
    iVar2 = (this->SourceReports).ArrayNum;
    piVar1 = &(this->SourceReports).ArrayMax;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->SourceReports).AllocatorInstance,piVar1);
    }
    pFVar7 = (FScriptContainerElement *)0x0;
    (this->SourceReports).ArrayNum = iVar2 + 1;
    pFVar8 = (this->SourceReports).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
    *(undefined ***)pFVar8 = &___7FInstallBundleSourceReport__6B_;
    *(undefined8 *)(pFVar8 + 8) = 0;
    *(undefined8 *)(pFVar8 + 0x10) = 0;
    *(undefined4 *)(pFVar8 + 0x18) = 0;
    *(undefined4 *)(pFVar8 + 0x1c) = 0xffffffff;
    *(undefined8 *)(pFVar8 + 0x20) = 0;
    *(undefined8 *)(pFVar8 + 0x28) = 0;
    pFVar4 = ::FString::ConstructFromPtrSize
                       (&local_48,(param_1->NameStr).DataPtr,
                        (int)*(undefined8 *)&(param_1->NameStr).Size);
    iVar2 = 0;
    if (&local_38 != pFVar4) {
      pFVar7 = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar2 = (pFVar4->Data).ArrayNum;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    pFVar5 = ::FName::FName(local_res18,iVar6,(wchar_t *)pFVar7,FNAME_Add);
    *(FName *)(pFVar8 + 8) = *pFVar5;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar3 = TryFindBundleSourceReport(this,param_1);
  }
  return pFVar3;
}

// GetCombinedStatus @ 148bcaa90

ECombinedStatus __thiscall
FInstallManagerBundleReport::GetCombinedStatus(FInstallManagerBundleReport *this)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ECombinedStatus EVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  
  iVar5 = TotalBundleCount(this);
  if (iVar5 == 0) {
    return Unknown;
  }
  uVar2 = (this->SourceReports).ArrayNum;
  uVar7 = (ulonglong)(int)uVar2;
  iVar10 = 0;
  pFVar11 = (this->SourceReports).AllocatorInstance.Data;
  iVar9 = 0;
  iVar16 = 0;
  iVar15 = 0;
  pFVar12 = pFVar11 + 0x28;
  pFVar13 = pFVar11 + uVar7 * 0x30;
LAB_148bcaae3:
  if ((this->SourceReports).ArrayNum != (int)uVar7) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<FInstallBundleSourceReport_const_,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(local_res10);
  }
  if (pFVar11 == pFVar13) {
    if ((iVar5 != iVar15 + iVar16 + iVar9 + iVar10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("BundleCount == NumUpdatable + NumUpdating + NumInstalling + NumUpdated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleManagerReporting.cpp"
                           ,0x153,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    if (((iVar10 < 1) || (iVar9 != 0)) || (iVar16 != 0)) {
      if (((0 < iVar16) && (iVar9 == 0)) && (iVar10 == 0)) {
        return Finishing;
      }
    }
    else if (iVar15 == 0) {
      return Updatable;
    }
    if (iVar15 == iVar5) {
      return Finished;
    }
    return Updating;
  }
  local_res20 = *(uint *)pFVar12;
  uVar7 = (ulonglong)(int)local_res20;
  lVar8 = *(longlong *)(pFVar12 + -8);
  lVar14 = uVar7 * 0x50 + lVar8;
LAB_148bcab26:
  do {
    if (*(int *)pFVar12 != (int)uVar7) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (lVar8 == lVar14) break;
    if (*(char *)(lVar8 + 0x48) == '\0') {
      return Unknown;
    }
    bVar1 = *(byte *)(lVar8 + 0x40);
    if ((3 < (ulonglong)bVar1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar6 = (*pcVar3)();
      return EVar6;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1 + 4) == '\0') {
      if (*(char *)(lVar8 + 0x48) != '\0') {
        bVar1 = *(byte *)(lVar8 + 0x40);
        if ((3 < (ulonglong)bVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          EVar6 = (*pcVar3)();
          return EVar6;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') {
          uVar7 = (ulonglong)local_res20;
          iVar9 = iVar9 + 1;
          lVar8 = lVar8 + 0x50;
          goto LAB_148bcab26;
        }
        if (*(char *)(lVar8 + 0x48) != '\0') {
          bVar1 = *(byte *)(lVar8 + 0x40);
          if ((3 < (ulonglong)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            EVar6 = (*pcVar3)();
            return EVar6;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdated,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + (ulonglong)bVar1 + 4) != '\0') {
            uVar7 = (ulonglong)local_res20;
            iVar16 = iVar16 + 1;
            lVar8 = lVar8 + 0x50;
            goto LAB_148bcab26;
          }
        }
      }
      uVar7 = (ulonglong)local_res20;
      iVar15 = iVar15 + 1;
      lVar8 = lVar8 + 0x50;
      goto LAB_148bcab26;
    }
    uVar7 = (ulonglong)local_res20;
    iVar10 = iVar10 + 1;
    lVar8 = lVar8 + 0x50;
  } while( true );
  pFVar11 = pFVar11 + 0x30;
  pFVar12 = pFVar12 + 0x30;
  uVar7 = (ulonglong)uVar2;
  goto LAB_148bcaae3;
}

// GetDownloadProgress @ 148bcb140

float __thiscall FInstallManagerBundleReport::GetDownloadProgress(FInstallManagerBundleReport *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = TotalDownloadSize(this);
  if (uVar1 == 0) {
    return 0.0;
  }
  uVar2 = DownloadedBytes(this);
  if (-1 < (longlong)uVar1) {
    return (float)uVar2 / (float)(longlong)uVar1;
  }
  return (float)uVar2 / (float)uVar1;
}

// GetHighestCurrentBundleVersion @ 148bcb4b0

TOptional<FString> * __thiscall
FInstallManagerBundleReport::GetHighestCurrentBundleVersion
          (FInstallManagerBundleReport *this,TOptional<FString> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TOptional<FString> *pTVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  int *piVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  local_res20 = (this->SourceReports).ArrayNum;
  uVar8 = (ulonglong)(int)local_res20;
  pFVar13 = (this->SourceReports).AllocatorInstance.Data;
  pFVar14 = pFVar13 + 0x28;
  pFVar10 = pFVar13 + uVar8 * 0x30;
  do {
    if ((this->SourceReports).ArrayNum != (int)uVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FInstallBundleSourceReport_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar13 == pFVar10) {
      return __return_storage_ptr__;
    }
    lVar12 = *(longlong *)(pFVar14 + -8);
    iVar1 = *(int *)pFVar14;
    piVar11 = (int *)(lVar12 + 0x1c);
    lVar15 = (longlong)iVar1 * 0x50 + lVar12;
    while( true ) {
      if (*(int *)pFVar14 != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (lVar12 == lVar15) break;
      if (*piVar11 != -1) {
        if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) != -1) {
          if (piVar11[-1] == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)(piVar11 + -3);
          }
          if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) == 0) {
            pwVar7 = L"";
          }
          else {
            pwVar7 = (wchar_t *)
                     (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp(pwVar7,pwVar9);
          if (-1 < iVar5) goto LAB_148bcb61b;
        }
        if (*piVar11 == -1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TOptional<FString> *)(*pcVar3)();
            return pTVar6;
          }
        }
        if ((FString *)(piVar11 + -3) != (FString *)__return_storage_ptr__) {
          pFVar2 = (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          ::FString::FString((FString *)__return_storage_ptr__,(FString *)(piVar11 + -3));
          if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar6 = (TOptional<FString> *)(*pcVar3)();
              return pTVar6;
            }
          }
        }
      }
LAB_148bcb61b:
      lVar12 = lVar12 + 0x50;
      piVar11 = piVar11 + 0x14;
    }
    pFVar13 = pFVar13 + 0x30;
    pFVar14 = pFVar14 + 0x30;
    uVar8 = (ulonglong)local_res20;
  } while( true );
}

// GetInstallationProgress @ 148bcb8e0

float __thiscall
FInstallManagerBundleReport::GetInstallationProgress(FInstallManagerBundleReport *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  ulong64 uVar4;
  FInstallBundleReport *this_00;
  FInstallBundleReport *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res8 [8];
  
  fVar3 = __real_30800000;
  pFVar7 = (this->SourceReports).AllocatorInstance.Data;
  iVar1 = (this->SourceReports).ArrayNum;
  fVar10 = 0.0;
  pFVar6 = pFVar7 + 0x28;
  fVar11 = 0.0;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->SourceReports).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInstallBundleSourceReport_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    iVar2 = *(int *)pFVar6;
    this_00 = *(FInstallBundleReport **)(pFVar6 + -8);
    pFVar5 = this_00 + iVar2;
    while( true ) {
      if (*(int *)pFVar6 != iVar2) {
        `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar5) break;
      uVar4 = FInstallBundleReport::TotalDownloadSize(this_00);
      fVar11 = fVar11 + (float)uVar4 * fVar3;
      fVar9 = FInstallBundleReport::InstallationProgress(this_00);
      this_00 = this_00 + 1;
      fVar10 = fVar10 + fVar9 * (float)uVar4 * fVar3;
    }
    pFVar7 = pFVar7 + 0x30;
    pFVar6 = pFVar6 + 0x30;
  }
  if (fVar11 == 0.0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = fVar10 / fVar11;
  }
  return fVar10;
}

// GetLongProgressString @ 148bcba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FInstallManagerBundleReport::GetLongProgressString
          (FInstallManagerBundleReport *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  ulong64 uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_4f8 [32];
  ulonglong local_4d8;
  ulonglong local_4d0;
  ulonglong local_4c8;
  longlong local_4c0;
  ulonglong local_4b8;
  ulonglong local_4b0;
  ulonglong local_4a8;
  FScriptContainerElement *local_4a0;
  FScriptContainerElement *local_498;
  FString *local_490;
  FString local_488;
  FString local_478;
  TStringBuilderBase<wchar_t> local_468;
  wchar_t local_448 [512];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_4f8;
  local_468.Base = local_448;
  local_468.CurPos = local_448;
  local_468.End = (wchar_t *)local_48;
  local_468.bIsDynamic = false;
  local_468.bIsExternal = false;
  local_490 = __return_storage_ptr__;
  pFVar6 = GetProgressString(this,&local_488);
  iVar9 = (pFVar6->Data).ArrayNum;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  iVar12 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar12 = 0;
  }
  uVar10 = (ulong64)iVar12;
  if (local_468.End < local_468.CurPos + uVar10) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,uVar10);
  }
  if (iVar12 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_468.CurPos,pFVar1,uVar10 * 2);
    local_468.CurPos = (wchar_t *)((longlong)pvVar7 + uVar10 * 2);
  }
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  uVar14 = 0;
  if (0 < (this->SourceReports).ArrayNum) {
    local_4b8 = 0;
    uVar18 = uVar14;
    do {
      uVar13 = local_4b8;
      uVar16 = 0;
      iVar12 = (this->SourceReports).ArrayNum;
      uVar17 = (uint)uVar18;
      uVar15 = ~uVar17 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar17 < iVar12) {
        uVar5 = uVar15;
      }
      if (uVar5 == 0) {
        local_4d8 = (ulonglong)(int)uVar17;
        local_4d0 = (longlong)iVar12;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
      }
      if (*(int *)((this->SourceReports).AllocatorInstance.Data + uVar14 + 0x28) != 0) {
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_468,L" [%d");
        local_4c8 = 0;
        local_4c0 = 0;
        while( true ) {
          iVar12 = (this->SourceReports).ArrayNum;
          uVar5 = 0;
          if ((int)uVar17 < iVar12) {
            uVar5 = uVar15;
          }
          if ((uVar5 == 0) &&
             (local_4d8 = uVar13, local_4d0 = (longlong)iVar12,
             bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar2)();
            return pFVar6;
          }
          if (*(int *)((this->SourceReports).AllocatorInstance.Data + uVar14 + 0x28) <= (int)uVar16)
          break;
          iVar12 = (this->SourceReports).ArrayNum;
          uVar5 = 0;
          if ((int)uVar17 < iVar12) {
            uVar5 = uVar15;
          }
          if ((uVar5 == 0) &&
             (local_4d8 = uVar13, local_4d0 = (longlong)iVar12,
             bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar2)();
            return pFVar6;
          }
          pFVar1 = (this->SourceReports).AllocatorInstance.Data;
          uVar11 = ~uVar16 >> 0x1f;
          iVar12 = *(int *)(pFVar1 + uVar14 + 0x28);
          uVar5 = 0;
          if ((int)uVar16 < iVar12) {
            uVar5 = uVar11;
          }
          if (uVar5 == 0) {
            local_4d8 = (ulonglong)(int)uVar16;
            local_4d0 = (longlong)iVar12;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar2)();
              return pFVar6;
            }
          }
          uVar10 = FInstallBundleReport::TotalDownloadSize
                             ((FInstallBundleReport *)
                              (local_4c0 + *(longlong *)(pFVar1 + uVar14 + 0x20)));
          iVar12 = (this->SourceReports).ArrayNum;
          local_4b0 = uVar10 / 1000000;
          uVar5 = 0;
          if ((int)uVar17 < iVar12) {
            uVar5 = uVar15;
          }
          if (uVar5 == 0) {
            local_4d8 = local_4b8;
            local_4d0 = (longlong)iVar12;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar2)();
              return pFVar6;
            }
          }
          pFVar1 = (this->SourceReports).AllocatorInstance.Data;
          iVar12 = *(int *)(pFVar1 + uVar14 + 0x28);
          uVar5 = 0;
          if ((int)uVar16 < iVar12) {
            uVar5 = uVar11;
          }
          if (uVar5 == 0) {
            local_4d8 = local_4c8;
            local_4d0 = (longlong)iVar12;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar2)();
              return pFVar6;
            }
          }
          uVar10 = FInstallBundleReport::DownloadedBytes
                             ((FInstallBundleReport *)
                              (local_4c0 + *(longlong *)(pFVar1 + uVar14 + 0x20)));
          iVar12 = (this->SourceReports).ArrayNum;
          local_4a8 = uVar10 / 1000000;
          uVar5 = 0;
          if ((int)uVar17 < iVar12) {
            uVar5 = uVar15;
          }
          if (uVar5 == 0) {
            local_4d8 = local_4b8;
            local_4d0 = (longlong)iVar12;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar2)();
              return pFVar6;
            }
          }
          pFVar1 = (this->SourceReports).AllocatorInstance.Data;
          iVar12 = *(int *)(pFVar1 + uVar14 + 0x28);
          uVar5 = 0;
          if ((int)uVar16 < iVar12) {
            uVar5 = uVar11;
          }
          if (uVar5 == 0) {
            local_4d8 = local_4c8;
            local_4d0 = (longlong)iVar12;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar2)();
              return pFVar6;
            }
          }
          pFVar6 = ::FName::ToString((FName *)(local_4c0 + 8 + *(longlong *)(pFVar1 + uVar14 + 0x20)
                                              ),&local_478);
          iVar9 = (pFVar6->Data).ArrayNum;
          iVar12 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar12 = 0;
          }
          iVar9 = iVar12;
          if (7 < iVar12) {
            iVar9 = 7;
          }
          iVar8 = 0;
          if (0 < iVar9) {
            iVar8 = iVar9;
          }
          ::FString::RemoveAt(pFVar6,0,iVar12 - iVar8,No);
          local_498 = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar12 = (pFVar6->Data).ArrayNum;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
          local_4a0 = (FScriptContainerElement *)L"";
          if (iVar12 != 0) {
            local_4a0 = local_498;
          }
          iVar12 = (this->SourceReports).ArrayNum;
          uVar5 = 0;
          if ((int)uVar17 < iVar12) {
            uVar5 = uVar15;
          }
          if (uVar5 == 0) {
            local_4d8 = local_4b8;
            local_4d0 = (longlong)iVar12;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar2)();
              return pFVar6;
            }
          }
          pFVar1 = (this->SourceReports).AllocatorInstance.Data;
          iVar12 = *(int *)(pFVar1 + uVar14 + 0x28);
          uVar5 = 0;
          if ((int)uVar16 < iVar12) {
            uVar5 = uVar11;
          }
          if (uVar5 == 0) {
            local_4d8 = local_4c8;
            local_4d0 = (longlong)iVar12;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar2)();
              return pFVar6;
            }
          }
          lVar3 = local_4c0;
          if ((*(char *)(*(longlong *)(pFVar1 + uVar14 + 0x20) + 0x48 + local_4c0) == '\0') &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar2)();
            return pFVar6;
          }
          local_4d0 = local_4b0;
          local_4d8 = local_4a8;
          TStringBuilderBase<wchar_t>::AppendfImpl(&local_468,L" #%d,%s,%llu/%lluM");
          if (local_498 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_498);
          }
          if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_478.Data.AllocatorInstance.Data);
          }
          local_4c8 = local_4c8 + 1;
          local_4c0 = lVar3 + 0x50;
          uVar16 = uVar16 + 1;
          uVar13 = local_4b8;
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_468,L"]");
      }
      local_4b8 = uVar13 + 1;
      uVar18 = (ulonglong)(uVar17 + 1);
      uVar14 = uVar14 + 0x30;
      __return_storage_ptr__ = local_490;
    } while ((int)(uVar17 + 1) < (this->SourceReports).ArrayNum);
  }
  if (local_468.End < local_468.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_468,1);
  }
  *local_468.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_468.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_468);
  return __return_storage_ptr__;
}

// GetLowestCurrentBundleVersion @ 148bcc060

TOptional<FString> * __thiscall
FInstallManagerBundleReport::GetLowestCurrentBundleVersion
          (FInstallManagerBundleReport *this,TOptional<FString> *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TOptional<FString> *pTVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FString local_48;
  
  pFVar13 = (this->SourceReports).AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = (this->SourceReports).ArrayNum;
  uVar7 = (ulonglong)(int)uVar1;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = -1;
  pFVar14 = pFVar13 + 0x28;
  pFVar9 = pFVar13 + uVar7 * 0x30;
  do {
    if ((this->SourceReports).ArrayNum != (int)uVar7) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FInstallBundleSourceReport_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar13 == pFVar9) {
      (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
      *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
      if (local_48.Data.ArrayMax != -1) {
        *(FScriptContainerElement **)&__return_storage_ptr__->field0_0x0 =
             local_48.Data.AllocatorInstance.Data;
        *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_48.Data.ArrayNum;
        *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_48.Data.ArrayMax;
      }
      return __return_storage_ptr__;
    }
    lVar12 = *(longlong *)(pFVar14 + -8);
    iVar2 = *(int *)pFVar14;
    piVar10 = (int *)(lVar12 + 0x1c);
    lVar11 = (longlong)iVar2 * 0x50 + lVar12;
    while( true ) {
      if (*(int *)pFVar14 != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (lVar12 == lVar11) break;
      if ((*piVar10 == -1) || (piVar10[-1] < 2)) {
        *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
        (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
        if (local_48.Data.ArrayMax == -1) {
          return __return_storage_ptr__;
        }
        if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      if (local_48.Data.ArrayMax == -1) {
LAB_148bcc153:
        if ((*piVar10 == -1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TOptional<FString> *)(*pcVar3)();
          return pTVar6;
        }
        if ((FString *)(piVar10 + -3) != &local_48) {
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_48,(FString *)(piVar10 + -3));
          if ((local_48.Data.ArrayMax == -1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TOptional<FString> *)(*pcVar3)();
            return pTVar6;
          }
        }
      }
      else {
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar8.Data = local_48.Data.AllocatorInstance.Data;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)(piVar10 + -3),(wchar_t *)FVar8.Data);
        if (iVar5 < 0) goto LAB_148bcc153;
      }
      lVar12 = lVar12 + 0x50;
      piVar10 = piVar10 + 0x14;
    }
    pFVar13 = pFVar13 + 0x30;
    pFVar14 = pFVar14 + 0x30;
    uVar7 = (ulonglong)uVar1;
  } while( true );
}

// GetProgressString @ 148bcc560

/* WARNING: Removing unreachable block (ram,0x000148bcc688) */

FString * __thiscall
FInstallManagerBundleReport::GetProgressString
          (FInstallManagerBundleReport *this,FString *__return_storage_ptr__)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  FString *pFVar7;
  longlong lVar8;
  FInstallBundleReport *this_00;
  longlong lVar9;
  FInstallBundleReport *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_d8;
  undefined1 local_d7 [3];
  int local_d4;
  uint local_d0;
  ulong64 local_c8;
  ulong64 local_c0;
  FScriptContainerElement *local_b8;
  
  local_c0 = DownloadedBytes(this);
  local_c8 = TotalDownloadSize(this);
  pFVar12 = (this->SourceReports).AllocatorInstance.Data;
  local_d4 = 0;
  local_d0 = (this->SourceReports).ArrayNum;
  uVar6 = (ulonglong)(int)local_d0;
  pFVar11 = pFVar12 + 0x28;
  local_b8 = pFVar12 + uVar6 * 0x30;
  do {
    pFVar13 = local_b8;
    if ((this->SourceReports).ArrayNum != (int)uVar6) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FInstallBundleSourceReport_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar12 == pFVar13) {
      TotalBundleCount(this);
      pFVar12 = (this->SourceReports).AllocatorInstance.Data;
      iVar2 = (this->SourceReports).ArrayNum;
      pFVar11 = pFVar12 + 0x28;
      pFVar13 = pFVar12 + (longlong)iVar2 * 0x30;
      while( true ) {
        if ((this->SourceReports).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FInstallBundleSourceReport_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_d8);
        }
        if (pFVar12 == pFVar13) break;
        iVar5 = *(int *)pFVar11;
        this_00 = *(FInstallBundleReport **)(pFVar11 + -8);
        pFVar10 = this_00 + iVar5;
        while( true ) {
          if (*(int *)pFVar11 != iVar5) {
            `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_d7);
          }
          if (this_00 == pFVar10) break;
          FInstallBundleReport::TotalDownloadSize(this_00);
          FInstallBundleReport::InstallationProgress(this_00);
          this_00 = this_00 + 1;
        }
        pFVar12 = pFVar12 + 0x30;
        pFVar11 = pFVar11 + 0x30;
      }
      ::FString::PrintfImpl
                (__return_storage_ptr__,
                 L"{Sess.%d} INST %.2f%% DL %.2f%% [%.2f / %.2fGB] [%d / %d bundles]");
      return __return_storage_ptr__;
    }
    iVar2 = *(int *)pFVar11;
    lVar8 = *(longlong *)(pFVar11 + -8);
    iVar5 = 0;
    lVar9 = (longlong)iVar2 * 0x50 + lVar8;
    while( true ) {
      if (*(int *)pFVar11 != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (lVar8 == lVar9) break;
      if (*(char *)(lVar8 + 0x48) == '\0') {
LAB_148bcc68f:
        lVar8 = lVar8 + 0x50;
      }
      else {
        bVar1 = *(byte *)(lVar8 + 0x40);
        if ((3 < (ulonglong)bVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar3)();
          return pFVar7;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdated,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') goto LAB_148bcc68f;
        iVar5 = iVar5 + 1;
        lVar8 = lVar8 + 0x50;
      }
    }
    local_d4 = local_d4 + iVar5;
    pFVar12 = pFVar12 + 0x30;
    pFVar11 = pFVar11 + 0x30;
    uVar6 = (ulonglong)local_d0;
  } while( true );
}

// Serialize @ 148bd5fc0

void __thiscall
FInstallManagerBundleReport::Serialize
          (FInstallManagerBundleReport *this,FJsonSerializerBase *param_1,bool param_2)

{
  int *piVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName *pFVar8;
  longlong *plVar9;
  TSharedPtr<FJsonValue,1> *pTVar10;
  FJsonSerializerBase FVar11;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FName local_res10;
  char local_res18;
  undefined4 uStack_13c;
  FScriptContainerElement *local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  FString local_118;
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [8];
  TReferenceControllerBase<1> *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  TStringView<wchar_t> local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  local_res18 = param_2;
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  cVar4 = (**(code **)*param_1)(param_1);
  uVar15 = 0;
  if (cVar4 == '\0') {
    ::FName::ToString(&this->ContextName,&local_118);
    local_d8 = 0x51c7be70;
    uStack_d4 = 1;
    uStack_d0 = 0xb;
    (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_d8,&local_118);
  }
  else {
    local_138 = (FScriptContainerElement *)0x0;
    local_130 = 0;
    local_e8 = 0x51c7be70;
    uStack_e4 = 1;
    uStack_e0 = 0xb;
    (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_e8,&local_138);
    pFVar16 = (FScriptContainerElement *)L"";
    if ((int)local_130 != 0) {
      pFVar16 = local_138;
    }
    pFVar8 = ::FName::FName(&local_res10,(wchar_t *)pFVar16);
    this->ContextName = *pFVar8;
    local_118.Data.AllocatorInstance.Data = local_138;
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_c8 = 0x50a639f8;
  uStack_c4 = 1;
  uStack_c0 = 9;
  (**(code **)((longlong)*param_1 + 0x70))(param_1,&local_c8,&this->SessionId);
  cVar4 = (**(code **)*param_1)(param_1);
  if (cVar4 == '\0') {
    if ((this->BackgroundedCount).bIsSet == false) goto LAB_148bd6208;
    FVar11 = *param_1;
    local_128 = L"BackgroundedCount";
    uStack_120 = 0x11;
    puVar14 = &local_98;
    local_98 = 0x51c7be88;
    uStack_94 = 1;
    uStack_90 = 0x11;
    uStack_8c = uStack_11c;
  }
  else {
    plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,&local_128);
    if ((*plVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)*plVar9;
    local_b8._12_4_ = uStack_13c;
    local_b8.Size = 0x11;
    local_b8.DataPtr = L"BackgroundedCount";
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(0x11,L"BackgroundedCount");
    pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar2,uVar6,&local_b8);
    if ((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_11c,uStack_120));
      goto LAB_148bd6208;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(uStack_11c,uStack_120));
    FVar11 = *param_1;
    puVar14 = &local_a8;
    (this->BackgroundedCount).TypedValue = 0;
    (this->BackgroundedCount).bIsSet = true;
    local_a8 = 0x51c7be88;
    uStack_a4 = 1;
    uStack_a0 = 0x11;
  }
  (**(code **)((longlong)FVar11 + 0x88))(param_1,puVar14,&this->BackgroundedCount);
LAB_148bd6208:
  local_88 = 0x51c7beb0;
  uStack_84 = 1;
  uStack_80 = 0xb;
  (**(code **)((longlong)*param_1 + 0x88))(param_1,&local_88,&this->LoadedCount);
  cVar4 = (**(code **)*param_1)(param_1);
  if (cVar4 == '\0') {
    local_48 = 0x51c7bec8;
    uStack_44 = 1;
    uStack_40 = 0xd;
    (**(code **)((longlong)*param_1 + 0x28))(param_1,&local_48);
    for (; (-1 < (int)uVar15 && ((int)uVar15 < (this->SourceReports).ArrayNum)); uVar15 = uVar15 + 1
        ) {
      if (((int)uVar15 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = (this->SourceReports).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x30;
      (**(code **)(*(longlong *)pFVar16 + 0x50))(pFVar16,param_1,0);
    }
    (**(code **)((longlong)*param_1 + 0x38))(param_1);
  }
  else {
    plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_f8);
    if ((*plVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)*plVar9;
    local_78._12_4_ = uStack_13c;
    local_78.Size = 0xd;
    local_78.DataPtr = L"SourceReports";
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(0xd,L"SourceReports");
    pTVar10 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              ::FindByHash<TStringView<wchar_t>_>(pTVar2,uVar6,&local_78);
    if (((pTVar10 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar10->Object == (FJsonValue *)0x0)) ||
       (pTVar10->Object->Type != Array)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
      plVar9 = (longlong *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_58);
      if ((*plVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_68._12_4_ = uStack_13c;
      local_68.Size = 0xd;
      local_68.DataPtr = L"SourceReports";
      pTVar12 = FJsonObject::GetArrayField((FJsonObject *)*plVar9,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      for (; (param_2 = (bool)local_res18, -1 < (int)uVar15 && ((int)uVar15 < pTVar12->ArrayNum));
          uVar15 = uVar15 + 1) {
        iVar7 = (this->SourceReports).ArrayNum;
        piVar1 = &(this->SourceReports).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&(this->SourceReports).AllocatorInstance,piVar1);
        }
        (this->SourceReports).ArrayNum = iVar7 + 1;
        pFVar16 = (this->SourceReports).AllocatorInstance.Data + (longlong)iVar7 * 0x30;
        DefaultConstructItems<FInstallBundleSourceReport,int>(pFVar16,1);
        pcVar3 = *(code **)(*(longlong *)pFVar16 + 0x18);
        uVar6 = 0;
        if ((int)uVar15 < pTVar12->ArrayNum) {
          uVar6 = ~uVar15 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar17 = (pTVar12->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x10;
        if ((*(longlong *)pFVar17 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        puVar13 = (undefined8 *)(**(code **)**(undefined8 **)pFVar17)();
        local_108 = *puVar13;
        local_100 = puVar13[1];
        if (local_100 != 0) {
          LOCK();
          *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
          UNLOCK();
        }
        (*pcVar3)(pFVar16,&local_108);
      }
    }
  }
  if (param_2 == false) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

// TotalBundleCount @ 148bdb5f0

int __thiscall FInstallManagerBundleReport::TotalBundleCount(FInstallManagerBundleReport *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SourceReports).ArrayNum;
  iVar4 = 0;
  pFVar2 = (this->SourceReports).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->SourceReports).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInstallBundleSourceReport_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    iVar4 = iVar4 + *(int *)(pFVar2 + 0x28);
    pFVar2 = pFVar2 + 0x30;
  }
  return iVar4;
}

// TotalDownloadSize @ 148bdb7e0

ulong64 __thiscall FInstallManagerBundleReport::TotalDownloadSize(FInstallManagerBundleReport *this)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  FInstallBundleReport *this_00;
  FInstallBundleReport *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  uint local_res18;
  
  local_res18 = (this->SourceReports).ArrayNum;
  uVar3 = (ulonglong)(int)local_res18;
  uVar7 = 0;
  pFVar9 = (this->SourceReports).AllocatorInstance.Data;
  pFVar6 = pFVar9 + 0x28;
  pFVar8 = pFVar9 + uVar3 * 0x30;
  while( true ) {
    if ((this->SourceReports).ArrayNum != (int)uVar3) {
      `TCheckedPointerIterator<FInstallBundleSourceReport_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar8) break;
    iVar1 = *(int *)pFVar6;
    lVar5 = 0;
    this_00 = *(FInstallBundleReport **)(pFVar6 + -8);
    pFVar4 = this_00 + iVar1;
    while( true ) {
      if (*(int *)pFVar6 != iVar1) {
        `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_00 == pFVar4) break;
      uVar2 = FInstallBundleReport::TotalDownloadSize(this_00);
      lVar5 = lVar5 + uVar2;
      this_00 = this_00 + 1;
    }
    uVar7 = uVar7 + lVar5;
    uVar3 = (ulonglong)local_res18;
    pFVar9 = pFVar9 + 0x30;
    pFVar6 = pFVar6 + 0x30;
  }
  return uVar7;
}

// TryFindBundleSourceReport @ 148bdb930

FInstallBundleSourceReport * __thiscall
FInstallManagerBundleReport::TryFindBundleSourceReport
          (FInstallManagerBundleReport *this,FInstallBundleSourceType *param_1)

{
  FName FVar1;
  FString *pFVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  FInstallBundleSourceReport *pFVar6;
  FInstallBundleSourceReport *pFVar7;
  FInstallBundleSourceReport *pFVar8;
  FInstallBundleSourceReport *pFVar9;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_48,(param_1->NameStr).DataPtr,
                      (int)*(undefined8 *)&(param_1->NameStr).Size);
  pFVar9 = (FInstallBundleSourceReport *)0x0;
  iVar5 = 0;
  if (&local_38 != pFVar2) {
    pFVar9 = (FInstallBundleSourceReport *)(pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = (pFVar2->Data).ArrayNum;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  iVar4 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(&local_res8,iVar4,(wchar_t *)pFVar9,FNAME_Add);
  iVar5 = (this->SourceReports).ArrayNum;
  pFVar6 = (FInstallBundleSourceReport *)(this->SourceReports).AllocatorInstance.Data;
  FVar1 = *pFVar3;
  pFVar8 = pFVar6 + iVar5;
  while( true ) {
    if ((this->SourceReports).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FInstallBundleSourceReport,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    pFVar7 = (FInstallBundleSourceReport *)0x0;
    if ((pFVar6 == pFVar8) || (pFVar7 = pFVar6, pFVar6->SourceType == FVar1)) break;
    pFVar6 = pFVar6 + 1;
  }
  if (pFVar9 != (FInstallBundleSourceReport *)0x0) {
    FMemory::Free(pFVar9);
  }
  return pFVar7;
}

// UpdatedBundleCount @ 148bde8c0

/* WARNING: Removing unreachable block (ram,0x000148bde9a7) */

int __thiscall FInstallManagerBundleReport::UpdatedBundleCount(FInstallManagerBundleReport *this)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  
  uVar2 = (this->SourceReports).ArrayNum;
  uVar7 = (ulonglong)(int)uVar2;
  iVar6 = 0;
  pFVar11 = (this->SourceReports).AllocatorInstance.Data;
  pFVar12 = pFVar11 + 0x28;
  pFVar8 = pFVar11 + uVar7 * 0x30;
  do {
    local_res20 = iVar6;
    if ((this->SourceReports).ArrayNum != (int)uVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FInstallBundleSourceReport_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar8) {
      return iVar6;
    }
    iVar3 = *(int *)pFVar12;
    lVar9 = *(longlong *)(pFVar12 + -8);
    iVar6 = 0;
    lVar10 = (longlong)iVar3 * 0x50 + lVar9;
    while( true ) {
      if (*(int *)pFVar12 != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FInstallBundleReport_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (lVar9 == lVar10) break;
      if (*(char *)(lVar9 + 0x48) == '\0') {
LAB_148bde9ae:
        lVar9 = lVar9 + 0x50;
      }
      else {
        bVar1 = *(byte *)(lVar9 + 0x40);
        if ((3 < (ulonglong)bVar1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdated,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') goto LAB_148bde9ae;
        iVar6 = iVar6 + 1;
        lVar9 = lVar9 + 0x50;
      }
    }
    pFVar11 = pFVar11 + 0x30;
    iVar6 = local_res20 + iVar6;
    pFVar12 = pFVar12 + 0x30;
    uVar7 = (ulonglong)uVar2;
  } while( true );
}

