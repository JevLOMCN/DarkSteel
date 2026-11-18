// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 5

// GenerateSearchName @ 14a92a590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FText * __thiscall
UE::PoseSearch::FTraceMotionMatchingStateMessage::GenerateSearchName
          (FTraceMotionMatchingStateMessage *this,FText *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  void *pvVar9;
  FText *pFVar10;
  FString *pFVar11;
  ulong64 uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  wchar_t *pwVar19;
  char *pcVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStack_328 [32];
  longlong local_308;
  longlong local_300;
  undefined1 local_2f8 [8];
  FString local_2f0;
  FString local_2e0;
  FName local_2d0;
  FName local_2c8;
  FText *local_2c0;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_328;
  local_268.Base = local_248;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.End = (wchar_t *)local_48;
  local_268.CurPos = local_248;
  iVar21 = (this->DatabaseEntries).ArrayNum;
  bVar5 = false;
  pFVar18 = (this->DatabaseEntries).AllocatorInstance.Data;
  pFVar2 = pFVar18 + (longlong)iVar21 * 0x28;
  local_2c0 = __return_storage_ptr__;
  while( true ) {
    uVar15 = 0;
    if ((this->DatabaseEntries).ArrayNum != iVar21) {
      local_2f8[0] = 0;
      `TCheckedPointerIterator<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_2f8);
    }
    iVar13 = 0;
    if (pFVar18 == pFVar2) break;
    if (bVar5) {
      if (local_268.End < local_268.CurPos + 3) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,3);
      }
      local_268.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_268.CurPos,3," - ",3);
    }
    if ((*(ulong64 *)pFVar18 == 0) ||
       (pUVar7 = FObjectTrace::GetObjectFromId(*(ulong64 *)pFVar18), pUVar7 == (UObject *)0x0)) {
      if (local_268.End < local_268.CurPos + 7) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,7);
      }
      local_268.CurPos =
           FGenericPlatformString::Convert<char,wchar_t>(local_268.CurPos,7,"Unknown",7);
      pFVar18 = pFVar18 + 0x28;
      bVar5 = true;
    }
    else {
      pUVar8 = Z_Construct_UClass_UPoseSearchDatabase_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        pFVar11 = GetTypeName<UPoseSearchDatabase>(&local_2a8);
        pwVar16 = L"";
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        pFVar11 = GetFullNameForCastLogError<UObject>(&local_298,pUVar7);
        if ((pFVar11->Data).ArrayNum != 0) {
          pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar16,pwVar19);
      }
      local_2d0.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
      local_2d0.Number = *(uint *)&pUVar7->field_0x1c;
      ::FName::ToString(&local_2d0,&local_2f0);
      FVar4.Data = local_2f0.Data.AllocatorInstance.Data;
      if (local_2f0.Data.ArrayNum != 0) {
        iVar13 = local_2f0.Data.ArrayNum + -1;
      }
      uVar12 = (ulong64)iVar13;
      if (local_268.End < local_268.CurPos + uVar12) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar12);
      }
      if (iVar13 != 0) {
        pvVar9 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar4.Data,uVar12 * 2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar9 + uVar12 * 2);
      }
      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
      pFVar18 = pFVar18 + 0x28;
    }
  }
  iVar21 = (this->Roles).ArrayNum;
  if (1 < iVar21) {
    if (iVar21 == (this->SkeletalMeshComponentIds).ArrayNum) {
      if (local_268.End < local_268.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,2);
      }
      local_268.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_268.CurPos,2," [",2);
      uVar22 = uVar15;
      if (0 < (this->Roles).ArrayNum) {
        do {
          iVar21 = (this->Roles).ArrayNum;
          uVar14 = (uint)uVar15;
          uVar6 = 0;
          if ((int)uVar14 < iVar21) {
            uVar6 = ~uVar14 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_308 = (longlong)(int)uVar14;
            local_300 = (longlong)iVar21;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pFVar10 = (FText *)(*pcVar3)();
              return pFVar10;
            }
          }
          pFVar11 = ::FName::ToString((FName *)((this->Roles).AllocatorInstance.Data +
                                               (longlong)(int)uVar14 * 8),&local_2b8);
          iVar21 = (pFVar11->Data).ArrayNum;
          pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
          uVar6 = iVar21 - 1;
          if (iVar21 == 0) {
            uVar6 = 0;
          }
          uVar12 = (ulong64)(int)uVar6;
          if (local_268.End < local_268.CurPos + uVar12) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,uVar12);
          }
          if (uVar6 != 0) {
            pvVar9 = FGenericPlatformString::Memcpy(local_268.CurPos,pFVar2,uVar12 * 2);
            local_268.CurPos = (wchar_t *)((longlong)pvVar9 + uVar12 * 2);
          }
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
          if (local_268.End < local_268.CurPos + 2) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,2);
          }
          local_268.CurPos =
               FGenericPlatformString::Convert<char,wchar_t>(local_268.CurPos,2,": ",2);
          iVar21 = (this->SkeletalMeshComponentIds).ArrayNum;
          uVar17 = 0;
          uVar6 = uVar17;
          if ((int)uVar14 < iVar21) {
            uVar6 = ~uVar14 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_308 = (longlong)(int)uVar14;
            local_300 = (longlong)iVar21;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pFVar10 = (FText *)(*pcVar3)();
              return pFVar10;
            }
          }
          uVar12 = *(ulong64 *)((this->SkeletalMeshComponentIds).AllocatorInstance.Data + uVar22);
          if ((uVar12 == 0) ||
             (pUVar7 = FObjectTrace::GetObjectFromId(uVar12), pUVar7 == (UObject *)0x0)) {
            if (local_268.End < local_268.CurPos + 6) {
LAB_14a92aa4c:
              TStringBuilderBase<wchar_t>::Extend(&local_268,6);
            }
LAB_14a92aa5e:
            local_268.CurPos =
                 FGenericPlatformString::Convert<char,wchar_t>(local_268.CurPos,6,"Error!",6);
          }
          else {
            pUVar8 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
            iVar21 = (int)pUVar8->_padding_;
            if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar21) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar21 * 8) !=
                &pUVar8->_padding_)) {
              pFVar11 = GetTypeName<USkeletalMeshComponent>(&local_288);
              pwVar16 = L"";
              if ((pFVar11->Data).ArrayNum == 0) {
                pwVar19 = L"";
              }
              else {
                pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
              }
              pFVar11 = GetFullNameForCastLogError<UObject>(&local_278,pUVar7);
              if ((pFVar11->Data).ArrayNum != 0) {
                pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
              }
                    /* WARNING: Subroutine does not return */
              CastLogError(pwVar16,pwVar19);
            }
            if (*(longlong *)&pUVar7[4].field_0x8 == 0) {
              if (local_268.End < local_268.CurPos + 6) goto LAB_14a92aa4c;
              goto LAB_14a92aa5e;
            }
            local_2c8 = *(FName *)(*(longlong *)&pUVar7[4].field_0x8 + 0x18);
            ::FName::ToString(&local_2c8,&local_2e0);
            FVar4.Data = local_2e0.Data.AllocatorInstance.Data;
            if (local_2e0.Data.ArrayNum != 0) {
              uVar17 = local_2e0.Data.ArrayNum - 1;
            }
            uVar12 = (ulong64)(int)uVar17;
            if (local_268.End < local_268.CurPos + uVar12) {
              TStringBuilderBase<wchar_t>::Extend(&local_268,uVar12);
            }
            if (uVar17 != 0) {
              pvVar9 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar4.Data,uVar12 * 2);
              local_268.CurPos = (wchar_t *)((longlong)pvVar9 + uVar12 * 2);
            }
            if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
            }
          }
          uVar15 = (ulonglong)(uVar14 + 1);
          if ((this->Roles).ArrayNum <= (int)(uVar14 + 1)) break;
          if (local_268.End < local_268.CurPos + 3) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,3);
          }
          local_268.CurPos =
               FGenericPlatformString::Convert<char,wchar_t>(local_268.CurPos,3," - ",3);
          uVar22 = uVar22 + 8;
        } while( true );
      }
      if (local_268.End < local_268.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,1);
      }
      iVar21 = 1;
      pcVar20 = "]";
    }
    else {
      if (local_268.End < local_268.CurPos + 6) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,6);
      }
      iVar21 = 6;
      pcVar20 = "Error!";
    }
    local_268.CurPos =
         FGenericPlatformString::Convert<char,wchar_t>(local_268.CurPos,iVar21,pcVar20,iVar21);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  FText::FromString(local_2c0,local_268.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return local_2c0;
}

// GetCurrentDatabase @ 14a92b480

UPoseSearchDatabase * __thiscall
UE::PoseSearch::FTraceMotionMatchingStateMessage::GetCurrentDatabase
          (FTraceMotionMatchingStateMessage *this)

{
  code *pcVar1;
  bool bVar2;
  UPoseSearchDatabase *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\Trace\\PoseSearchTraceLogger.cpp"
                     ,0x71,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UPoseSearchDatabase *)(*pcVar1)();
    return pUVar3;
  }
  return (UPoseSearchDatabase *)0x0;
}

// GetCurrentDatabasePoseIndex @ 14a92b4c0

int __thiscall
UE::PoseSearch::FTraceMotionMatchingStateMessage::GetCurrentDatabasePoseIndex
          (FTraceMotionMatchingStateMessage *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = this->CurrentDbEntryIdx;
  if ((-1 < (int)uVar2) && ((int)uVar2 < (this->DatabaseEntries).ArrayNum)) {
    uVar7 = 0;
    if ((int)uVar2 < (this->DatabaseEntries).ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pFVar3 = (this->DatabaseEntries).AllocatorInstance.Data;
    uVar7 = this->CurrentPoseEntryIdx;
    if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(pFVar3 + (longlong)(int)uVar2 * 0x28 + 0x20))) {
      uVar8 = 0;
      if ((int)uVar7 < *(int *)(pFVar3 + (longlong)(int)uVar2 * 0x28 + 0x20)) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      piVar1 = (int *)(*(longlong *)(pFVar3 + (longlong)(int)uVar2 * 0x28 + 0x18) +
                      (longlong)(int)uVar7 * 0xc);
      if (piVar1 != (int *)0x0) {
        return *piVar1;
      }
    }
  }
  return -1;
}

// GetCurrentPoseEntry @ 14a92b5d0

FTraceMotionMatchingStatePoseEntry * __thiscall
UE::PoseSearch::FTraceMotionMatchingStateMessage::GetCurrentPoseEntry
          (FTraceMotionMatchingStateMessage *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FTraceMotionMatchingStatePoseEntry *pFVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = this->CurrentDbEntryIdx;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->DatabaseEntries).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar1 < (this->DatabaseEntries).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FTraceMotionMatchingStatePoseEntry *)(*pcVar3)();
      return pFVar5;
    }
    pFVar2 = (this->DatabaseEntries).AllocatorInstance.Data;
    uVar6 = this->CurrentPoseEntryIdx;
    if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x28 + 0x20))) {
      uVar7 = 0;
      if ((int)uVar6 < *(int *)(pFVar2 + (longlong)(int)uVar1 * 0x28 + 0x20)) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FTraceMotionMatchingStatePoseEntry *)(*pcVar3)();
        return pFVar5;
      }
      return (FTraceMotionMatchingStatePoseEntry *)
             (*(longlong *)(pFVar2 + (longlong)(int)uVar1 * 0x28 + 0x18) +
             (longlong)(int)uVar6 * 0xc);
    }
  }
  return (FTraceMotionMatchingStatePoseEntry *)0x0;
}

// Output @ 14a934500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::PoseSearch::FTraceMotionMatchingStateMessage::Output(FTraceMotionMatchingStateMessage *this)

{
  longlong lVar1;
  FName *pFVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  FName local_108;
  uchar *local_100;
  undefined8 local_f8;
  FCustomVersionContainer local_f0;
  FArchiveState local_d8;
  undefined8 local_48;
  uchar **local_40;
  undefined8 local_38;
  FGuid local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_100 = (uchar *)0x0;
  local_f8 = 0;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  local_d8._padding_ = 0;
  local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_d8._40_8_ = 0;
  local_d8.ArSerializingDefaults = 0;
  local_d8.ArPortFlags = 0;
  local_d8.ArMaxSerializeSize = 0;
  local_d8.ArUEVer.FileVersionUE4 = 0;
  local_d8.ArUEVer.FileVersionUE5 = 0;
  local_d8.ArLicenseeUEVer = 0;
  local_d8.ArEngineVer.Major = 0;
  local_d8.ArEngineVer.Minor = 0;
  local_d8.ArEngineVer.Patch = 0;
  local_d8.ArEngineVer._6_2_ = 0;
  local_d8.ArEngineVer.Changelist = 0;
  local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_d8.SerializedProperty = (FProperty *)0x0;
  local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_d8.bCustomVersionsAreReset = false;
  local_d8._129_7_ = 0;
  local_d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_d8);
  local_48 = 0;
  local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_40 = &local_100;
  local_38 = 0;
  FArchiveState::SetIsSaving(&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
  local_f0.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_f0.Versions.ArrayNum = 0;
  local_f0.Versions.ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_108,L"Dev-PoseSearch-Version");
  local_28 = FPoseSearchCustomVersion::GUID;
  FCustomVersionContainer::SetVersion(&local_f0,&local_28,2,*pFVar2);
  (**(code **)(local_d8._padding_ + 0x68))(&local_d8,&local_f0);
  PoseSearch::operator<<((FArchive *)&local_d8,this);
  if (-1 < PoseSearchChannel->Enabled) {
    Trace::Private::FLogScope::Enter<FPoseSearchMotionMatchingState3Fields>
              ((TLogScope<1> *)&local_28);
    Trace::Private::Field_WriteAuxData(0,local_100,(uint)local_f8 & 0x7ffff);
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)(lVar1 + 0x20);
    **(undefined1 **)(lVar1 + 0x20) = 6;
    lVar3 = *(longlong *)(lVar1 + 0x20) + 1;
    *(longlong *)(lVar1 + 0x20) = lVar3;
    if (lVar1 != local_28._8_8_) {
      *(longlong *)(lVar1 + 0x28) = lVar3;
    }
    *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
  }
  if (local_f0.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Versions.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_d8);
  if (local_100 != (uchar *)0x0) {
    FMemory::Free(local_100);
  }
  return;
}

