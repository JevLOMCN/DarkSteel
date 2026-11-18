// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// GetControl @ 14a4125c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigControlCopy * __thiscall
FControlRigPoseMirrorTable::GetControl
          (FControlRigPoseMirrorTable *this,UControlRig *param_1,FControlRigControlPose *param_2,
          FName param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FMatchedControls *this_00;
  FName *pFVar4;
  TTuple<FName,int> *pTVar5;
  FRigControlCopy *pFVar6;
  int *piVar7;
  
  if (param_4) {
    SetUpMirrorTable(this,param_1);
    this_00 = TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
              ::Find((TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                      *)&MatchedControls,param_1);
    if ((this_00 != (FMatchedControls *)0x0) &&
       (pFVar4 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                         *)this_00,param_3), pFVar4 != (FName *)0x0)) {
      pTVar5 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                       *)&param_2->CopyOfControlsNameToIndex,*pFVar4);
      piVar7 = (int *)&pTVar5->field_0x8;
      if (pTVar5 == (TTuple<FName,int> *)0x0) {
        piVar7 = (int *)0x0;
      }
      if (piVar7 != (int *)0x0) {
        iVar1 = *piVar7;
        if ((-1 < iVar1) && (iVar1 < (param_2->CopyOfControls).ArrayNum)) {
          if ((iVar1 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FRigControlCopy *)(*pcVar2)();
            return pFVar6;
          }
          return (FRigControlCopy *)
                 ((param_2->CopyOfControls).AllocatorInstance.Data + (longlong)iVar1 * 0x220);
        }
      }
    }
  }
  pTVar5 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&param_2->CopyOfControlsNameToIndex,param_3);
  piVar7 = (int *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,int> *)0x0) {
    piVar7 = (int *)0x0;
  }
  if (piVar7 != (int *)0x0) {
    iVar1 = *piVar7;
    if ((-1 < iVar1) && (iVar1 < (param_2->CopyOfControls).ArrayNum)) {
      if ((iVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FRigControlCopy *)(*pcVar2)();
        return pFVar6;
      }
      return (FRigControlCopy *)
             ((param_2->CopyOfControls).AllocatorInstance.Data + (longlong)iVar1 * 0x220);
    }
  }
  return (FRigControlCopy *)0x0;
}

// GetMirrorString @ 14a416080

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FString * __cdecl
FControlRigPoseMirrorTable::GetMirrorString
          (FString *__return_storage_ptr__,FString *param_1,
          TArray<FMirrorFindReplaceExpression,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  FName *this;
  int iVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  undefined1 local_res18 [8];
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FRegexMatcher local_58;
  FRegexPattern local_38;
  
  iVar7 = param_2->ArrayNum;
  this = (FName *)(param_2->AllocatorInstance).Data;
  pFVar1 = (FName *)((longlong)this + (longlong)iVar7 * 0x14);
  do {
    if (param_2->ArrayNum != iVar7) {
      `TCheckedPointerIterator<FMirrorFindReplaceExpression_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (this == pFVar1) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    ::FName::ToString(this,&local_c8);
    ::FName::ToString(this + 1,&local_d8);
    cVar2 = (char)this[2].ComparisonIndex.Value;
    if (cVar2 == '\0') {
      ::FString::ConcatFC(&local_88,&local_c8,L"([^}]*)");
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      local_c8.Data.ArrayNum = local_88.Data.ArrayNum;
      local_c8.Data.ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::FString::ConcatCF(&local_78,L"^",&local_c8);
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      local_c8.Data.ArrayNum = local_78.Data.ArrayNum;
      local_c8.Data.ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::FString::ConcatFC(&local_98,&local_d8,L"$1");
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_d8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      iVar4 = local_98.Data.ArrayNum;
      iVar5 = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14a41625b:
      local_d8.Data.ArrayMax = iVar5;
      local_d8.Data.ArrayNum = iVar4;
    }
    else if (cVar2 == '\x01') {
      ::FString::ConcatCF(&local_68,L"([^}]*)",&local_c8);
      ::FString::ConcatFC(&local_a8,&local_68,L"$");
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      local_c8.Data.ArrayNum = local_a8.Data.ArrayNum;
      local_c8.Data.ArrayMax = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      ::FString::ConcatCF(&local_b8,L"$1",&local_d8);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_d8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      iVar4 = local_b8.Data.ArrayNum;
      iVar5 = local_b8.Data.ArrayMax;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      goto LAB_14a41625b;
    }
    FRegexPattern::FRegexPattern(&local_38,&local_c8,None);
    FRegexMatcher::FRegexMatcher(&local_58,&local_38,param_1);
    bVar3 = FRegexMatcher::FindNext(&local_58);
    if (bVar3) {
      do {
        iVar7 = 1;
        do {
          FRegexMatcher::GetCaptureGroup(&local_58,&local_b8,iVar7);
          iVar4 = FRegexMatcher::GetCaptureGroupBeginning(&local_58,iVar7);
          iVar5 = FRegexMatcher::GetCaptureGroupEnding(&local_58,iVar7);
          ::FString::Mid(&local_b8,&local_68,iVar4,iVar5 - iVar4);
          if (local_b8.Data.ArrayNum < 2) {
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            break;
          }
          ::FString::PrintfImpl(&local_a8,L"$%i");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_b8.Data.ArrayNum != 0) {
            FVar9.Data = local_b8.Data.AllocatorInstance.Data;
          }
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_a8.Data.ArrayNum != 0) {
            FVar8.Data = local_a8.Data.AllocatorInstance.Data;
          }
          pFVar6 = ::FString::Replace(&local_d8,&local_98,(wchar_t *)FVar8.Data,
                                      (wchar_t *)FVar9.Data,IgnoreCase);
          if (&local_d8 != pFVar6) {
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            local_d8.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
            (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.Data.ArrayNum = (pFVar6->Data).ArrayNum;
            local_d8.Data.ArrayMax = (pFVar6->Data).ArrayMax;
            (pFVar6->Data).ArrayNum = 0;
            (pFVar6->Data).ArrayMax = 0;
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 10);
        bVar3 = FRegexMatcher::FindNext(&local_58);
        if (!bVar3) {
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_d8.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayNum = local_d8.Data.ArrayNum;
          (__return_storage_ptr__->Data).ArrayMax = local_d8.Data.ArrayMax;
          local_d8.Data.ArrayNum = 0;
          local_d8.Data.ArrayMax = 0;
          local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.Implementation.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.Pattern.Implementation.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.Implementation.SharedReferenceCount.ReferenceController);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          return __return_storage_ptr__;
        }
      } while( true );
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.Pattern.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.Implementation.SharedReferenceCount.ReferenceController);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    this = (FName *)&this[2].Number;
  } while( true );
}

// GetMirrorTransform @ 14a4164b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigPoseMirrorTable::GetMirrorTransform
          (FControlRigPoseMirrorTable *this,FRigControlCopy *param_1,bool param_2,bool param_3,
          TTransform<double> *param_4,TTransform<double> *param_5)

{
  UObject *pUVar1;
  UClass *this_00;
  undefined1 auStack_1f8 [32];
  FRigVMMirrorSettings local_1d8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  this_00 = UControlRigPoseMirrorSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  local_1a8.Rotation.XY.m128d_f64[0] = (param_1->GlobalTransform).Rotation.XY.m128d_f64[0];
  local_1a8.Rotation.XY.m128d_f64[1] = (param_1->GlobalTransform).Rotation.XY.m128d_f64[1];
  local_1a8.Rotation.ZW.m128d_f64[0] = (param_1->GlobalTransform).Rotation.ZW.m128d_f64[0];
  local_1a8.Rotation.ZW.m128d_f64[1] = (param_1->GlobalTransform).Rotation.ZW.m128d_f64[1];
  local_1a8.Translation.XY.m128d_f64[0] = (param_1->GlobalTransform).Translation.XY.m128d_f64[0];
  local_1a8.Translation.XY.m128d_f64[1] = (param_1->GlobalTransform).Translation.XY.m128d_f64[1];
  local_1a8.Translation.ZW.m128d_f64[0] = (param_1->GlobalTransform).Translation.ZW.m128d_f64[0];
  local_1a8.Translation.ZW.m128d_f64[1] = (param_1->GlobalTransform).Translation.ZW.m128d_f64[1];
  local_1a8.Scale3D.XY.m128d_f64[0] = (param_1->GlobalTransform).Scale3D.XY.m128d_f64[0];
  local_1a8.Scale3D.XY.m128d_f64[1] = (param_1->GlobalTransform).Scale3D.XY.m128d_f64[1];
  local_1a8.Scale3D.ZW.m128d_f64[0] = (param_1->GlobalTransform).Scale3D.ZW.m128d_f64[0];
  local_1a8.Scale3D.ZW.m128d_f64[1] = (param_1->GlobalTransform).Scale3D.ZW.m128d_f64[1];
  (param_4->Rotation).XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
  (param_4->Rotation).XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
  (param_4->Rotation).ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
  (param_4->Rotation).ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
  (param_4->Translation).XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
  (param_4->Translation).XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
  (param_4->Translation).ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0];
  (param_4->Translation).ZW.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[1];
  (param_4->Scale3D).XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
  (param_4->Scale3D).XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
  (param_4->Scale3D).ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
  (param_4->Scale3D).ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
  local_148.Rotation.XY.m128d_f64[0] = (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1] = (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
  local_148.Rotation.ZW.m128d_f64[0] = (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[1] = (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
  local_148.Translation.XY.m128d_f64[0] = (param_1->LocalTransform).Translation.XY.m128d_f64[0];
  local_148.Translation.XY.m128d_f64[1] = (param_1->LocalTransform).Translation.XY.m128d_f64[1];
  local_148.Translation.ZW.m128d_f64[0] = (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
  local_148.Translation.ZW.m128d_f64[1] = (param_1->LocalTransform).Translation.ZW.m128d_f64[1];
  local_148.Scale3D.XY.m128d_f64[0] = (param_1->LocalTransform).Scale3D.XY.m128d_f64[0];
  local_148.Scale3D.XY.m128d_f64[1] = (param_1->LocalTransform).Scale3D.XY.m128d_f64[1];
  local_148.Scale3D.ZW.m128d_f64[0] = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0];
  local_148.Scale3D.ZW.m128d_f64[1] = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[1];
  (param_5->Rotation).XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
  (param_5->Rotation).XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
  (param_5->Rotation).ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
  (param_5->Rotation).ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
  (param_5->Translation).XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
  (param_5->Translation).XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
  (param_5->Translation).ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
  (param_5->Translation).ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
  (param_5->Scale3D).XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
  (param_5->Scale3D).XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
  (param_5->Scale3D).ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
  (param_5->Scale3D).ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
  if ((pUVar1 != (UObject *)0x0) && (!param_3)) {
    local_1d8.SearchString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.SearchString.Data.ArrayNum = 0;
    local_1d8.SearchString.Data.ArrayMax = 0;
    local_1d8.ReplaceString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ReplaceString.Data.ArrayNum = 0;
    local_1d8.ReplaceString.Data.ArrayMax = 0;
    local_1d8.MirrorAxis.Value = pUVar1[1].field_0x20;
    local_1d8.AxisToFlip.Value = pUVar1[1].field_0x21;
    FRigVMMirrorSettings::MirrorTransform(&local_1d8,&local_e8,&local_1a8);
    (param_4->Translation).XY.m128d_f64[0] = local_e8.Translation.XY.m128d_f64[0];
    (param_4->Translation).XY.m128d_f64[1] = local_e8.Translation.XY.m128d_f64[1];
    (param_4->Translation).ZW.m128d_f64[0] = local_e8.Translation.ZW.m128d_f64[0];
    (param_4->Translation).ZW.m128d_f64[1] = 0.0;
    (param_4->Rotation).XY.m128d_f64[0] = local_e8.Rotation.XY.m128d_f64[0];
    (param_4->Rotation).XY.m128d_f64[1] = local_e8.Rotation.XY.m128d_f64[1];
    (param_4->Rotation).ZW.m128d_f64[0] = local_e8.Rotation.ZW.m128d_f64[0];
    (param_4->Rotation).ZW.m128d_f64[1] = local_e8.Rotation.ZW.m128d_f64[1];
    FRigVMMirrorSettings::MirrorTransform(&local_1d8,&local_88,&local_148);
    (param_5->Translation).XY.m128d_f64[0] = local_88.Translation.XY.m128d_f64[0];
    (param_5->Translation).XY.m128d_f64[1] = local_88.Translation.XY.m128d_f64[1];
    (param_5->Translation).ZW.m128d_f64[0] = local_88.Translation.ZW.m128d_f64[0];
    (param_5->Translation).ZW.m128d_f64[1] = 0.0;
    (param_5->Rotation).XY.m128d_f64[0] = local_88.Rotation.XY.m128d_f64[0];
    (param_5->Rotation).XY.m128d_f64[1] = local_88.Rotation.XY.m128d_f64[1];
    (param_5->Rotation).ZW.m128d_f64[0] = local_88.Rotation.ZW.m128d_f64[0];
    (param_5->Rotation).ZW.m128d_f64[1] = local_88.Rotation.ZW.m128d_f64[1];
    if (local_1d8.ReplaceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.ReplaceString.Data.AllocatorInstance.Data);
    }
    if (local_1d8.SearchString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.SearchString.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// IsMatched @ 14a428320

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigPoseMirrorTable::IsMatched
          (FControlRigPoseMirrorTable *this,UControlRig *param_1,FName *param_2)

{
  FMatchedControls *this_00;
  FName *pFVar1;
  
  SetUpMirrorTable(this,param_1);
  this_00 = TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
            ::Find((TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                    *)&MatchedControls,param_1);
  if ((this_00 != (FMatchedControls *)0x0) &&
     (0 < *(int *)&(this_00->Match).field_0x8 - *(int *)&(this_00->Match).field_0x34)) {
    pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
             ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                     *)this_00,*param_2);
    return pFVar1 != (FName *)0x0;
  }
  return false;
}

// Reset @ 14a44fdf0

void __thiscall FControlRigPoseMirrorTable::Reset(FControlRigPoseMirrorTable *this)

{
  TSet<TTuple<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls>,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls>,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>,FDefaultSetAllocator>
           *)&MatchedControls);
  return;
}

// SetUpMirrorTable @ 14a45ad20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigPoseMirrorTable::SetUpMirrorTable(FControlRigPoseMirrorTable *this,UControlRig *param_1)

{
  UObject *pUVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  code *pcVar4;
  longlong *plVar5;
  ForAnyElementType FVar6;
  int iVar7;
  uint uVar8;
  FMatchedControls *pFVar9;
  UClass *pUVar10;
  FString *pFVar11;
  FString *pFVar12;
  byte bVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  ForElementType<FSetElementId> FVar16;
  int iVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  longlong *plVar23;
  wchar_t *pwVar24;
  bool bVar25;
  undefined1 auStackY_338 [32];
  undefined1 local_2f8;
  undefined1 local_2f7 [7];
  longlong *local_2f0;
  FString local_2e8;
  UControlRig *local_2d8;
  longlong *local_2d0;
  uint local_2c8;
  longlong *local_2c0;
  int iStack_2b8;
  uint uStack_2b4;
  TBitArray<FDefaultBitArrayAllocator> *local_2b0;
  undefined4 uStack_2a8;
  uint uStack_2a4;
  int local_2a0;
  uint uStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  undefined1 local_290 [16];
  TPairInitializer<UControlRig_const_*_const_&,FControlRigPoseMirrorTable::FMatchedControls_const_&>
  local_280;
  FName local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong *local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_250;
  undefined8 uStack_230;
  FString local_228;
  FMatchedControls **local_218;
  FName *local_210;
  longlong **local_208;
  undefined8 *local_200;
  UControlRig **local_1f8;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
  *local_1f0;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
  local_1a8;
  undefined1 local_158 [72];
  uint *local_110;
  uint local_108;
  int local_fc;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2d8 = param_1;
  pFVar9 = TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
           ::Find((TMapBase<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>_>
                   *)&MatchedControls,param_1);
  if ((pFVar9 == (FMatchedControls *)0x0) ||
     (*(int *)&(pFVar9->Match).field_0x8 == *(int *)&(pFVar9->Match).field_0x34)) {
    local_1a8.Elements._44_4_ = 0x80;
    local_1a8.Elements._0_8_ = 0;
    local_1a8.Elements._8_8_ = 0;
    local_1a8.Elements._32_8_ = 0;
    local_1a8.Elements._40_4_ = 0;
    local_1a8.Elements._52_4_ = 0;
    local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1a8.HashSize = 0;
    local_1a8.Elements._48_4_ = 0xffffffff;
    (**(code **)(param_1->_padding_ + 0x3c0))(param_1,&local_2d0);
    pUVar10 = Z_Construct_UClass_UAnimationSettings_NoRegister();
    if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar10);
    }
    pUVar1 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      pFVar12 = GetTypeName<UAnimationSettings>(&local_1d8);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar24);
    }
    pUVar10 = Z_Construct_UClass_UAnimationSettings_NoRegister();
    uVar21 = local_2c8;
    iVar17 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar1->field_0x10 + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar1->field_0x10 + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar10->_padding_)) {
      pFVar12 = GetTypeName<UAnimationSettings>(&local_1c8);
      pwVar24 = L"";
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      pFVar12 = GetFullNameForCastLogError<UObject>(&local_1b8,pUVar1);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar24 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar24,pwVar19);
    }
    uVar14 = (ulonglong)(int)local_2c8;
    local_2f0 = local_2d0 + uVar14;
    plVar23 = local_2d0;
    while( true ) {
      plVar5 = local_2f0;
      if ((uint)uVar14 != uVar21) {
        local_2f8 = 0;
        `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_2f8);
      }
      if (plVar23 == plVar5) break;
      lVar2 = *plVar23;
      if ((*(int *)(lVar2 + 0x58) < 2) && (*(longlong *)(lVar2 + 0x14) != 0)) {
        pFVar11 = ::FName::ToString((FName *)(lVar2 + 0x14),&local_1e8);
        pFVar12 = (FString *)(lVar2 + 0x50);
        if (pFVar12 != pFVar11) {
          pFVar3 = (pFVar12->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pFVar12->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(lVar2 + 0x58) = (pFVar11->Data).ArrayNum;
          *(int *)(lVar2 + 0x5c) = (pFVar11->Data).ArrayMax;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
      local_2e8.Data.ArrayNum = *(int *)(lVar2 + 0x58);
      lVar18 = (longlong)local_2e8.Data.ArrayNum;
      _Src = *(void **)(lVar2 + 0x50);
      local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_2e8.Data.ArrayNum == 0) {
        local_2e8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_2e8.Data.ArrayNum,0,(ForAnyElementType *)&local_2e8,
                   local_2e8.Data.ArrayNum,&local_2e8.Data.ArrayMax);
        memcpy(local_2e8.Data.AllocatorInstance.Data,_Src,lVar18 * 2);
      }
      GetMirrorString(&local_228,&local_2e8,
                      (TArray<FMirrorFindReplaceExpression,TSizedDefaultAllocator<32>_> *)
                      &pUVar1[7].field_0x10);
      iVar17 = local_228.Data.ArrayNum;
      FVar6.Data = local_228.Data.AllocatorInstance.Data;
      if (1 < local_228.Data.ArrayNum) {
        if (local_2e8.Data.ArrayNum == local_228.Data.ArrayNum) {
          if (local_2e8.Data.ArrayNum < 2) goto LAB_14a45afda;
          iVar7 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_2e8.Data.AllocatorInstance.Data,
                             (wchar_t *)local_228.Data.AllocatorInstance.Data);
          bVar25 = iVar7 == 0;
        }
        else {
          bVar25 = local_228.Data.ArrayNum + local_2e8.Data.ArrayNum == 1;
        }
        if (!bVar25) {
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_2e8.Data.ArrayNum != 0) {
            FVar15.Data = local_2e8.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_270,(wchar_t *)FVar15.Data);
          FVar15.Data = (FScriptContainerElement *)L"";
          if (iVar17 != 0) {
            FVar15.Data = FVar6.Data;
          }
          ::FName::FName((FName *)&local_280.Value,(wchar_t *)FVar15.Data);
          local_218 = &local_280.Value;
          local_210 = &local_270;
          TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
                    (&local_1a8,(TPairInitializer<FName_const_&,FName_const_&> *)local_290,
                     (bool *)&local_218);
        }
      }
LAB_14a45afda:
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      uVar14 = (ulonglong)local_2c8;
      plVar23 = plVar23 + 1;
    }
    FControlRigToMirrorItems::FControlRigToMirrorItems
              ((FControlRigToMirrorItems *)local_158,local_2d8);
    uVar21 = local_108;
    if (0 < local_158._48_4_ - local_fc) {
      iStack_2b8 = 0;
      local_2a0 = 0;
      uStack_2b4 = 1;
      uStack_2a4 = 0;
      if (local_108 != 0) {
        puVar22 = (uint *)(local_158 + 0x38);
        if (local_110 != (uint *)0x0) {
          puVar22 = local_110;
        }
        uVar20 = *puVar22;
        while (uVar20 == 0) {
          iStack_2b8 = iStack_2b8 + 1;
          local_2a0 = local_2a0 + 0x20;
          uStack_2a4 = local_108;
          if ((int)((local_108 - 1) + ((int)(local_108 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2b8)
          goto LAB_14a45b0bf;
          uVar20 = puVar22[iStack_2b8];
        }
        uStack_2b4 = -uVar20 & uVar20;
        uVar14 = (ulonglong)uStack_2b4 * 2 + 1;
        lVar2 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        local_290._4_4_ = (undefined4)lVar2;
        uStack_2a4 = local_290._4_4_ + -1 + local_2a0;
        if ((int)local_108 < (int)uStack_2a4) {
          uStack_2a4 = local_108;
        }
      }
LAB_14a45b0bf:
      iStack_298 = local_158._48_4_ - local_fc;
      local_2c0 = (longlong *)(local_158 + 0x28);
      local_2b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x38);
      uStack_2a8 = 0xffffffff;
      TStack_250.CurrentBitIndex = uStack_2a4;
      TStack_250.UnvisitedBitMask = 0xffffffff;
      uVar20 = local_108 & 0xffffffe0;
      TStack_250._padding_ = CONCAT44(uStack_2b4,iStack_2b8);
      iVar17 = (int)local_108 >> 5;
      TStack_250._28_4_ = uStack_2a4;
      TStack_250.BaseBitIndex = local_2a0;
      uStack_230 = CONCAT44(uStack_294,iStack_298);
      bVar13 = (byte)local_108;
      uStack_29c = uStack_2a4;
      local_258 = local_2c0;
      TStack_250.Array = local_2b0;
      if (((int)local_108 < 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar25)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar21 != local_108) {
        puVar22 = (uint *)(local_158 + 0x38);
        if (local_110 != (uint *)0x0) {
          puVar22 = local_110;
        }
        uVar21 = -1 << (bVar13 & 0x1f) & puVar22[iVar17];
        while (uVar21 == 0) {
          iVar17 = iVar17 + 1;
          uVar20 = uVar20 + 0x20;
          uVar21 = local_108;
          if ((int)(((int)(local_108 - 1) >> 0x1f & 0x1fU) + (local_108 - 1)) >> 5 < iVar17)
          goto LAB_14a45b1c0;
          uVar21 = puVar22[iVar17];
        }
        uVar14 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        local_290._8_4_ = (undefined4)lVar2;
        uVar21 = local_290._8_4_ + -1 + uVar20;
        if ((int)local_108 < (int)uVar21) {
          uVar21 = local_108;
        }
      }
LAB_14a45b1c0:
      while( true ) {
        plVar23 = local_258;
        if ((int)local_258[1] - *(int *)((longlong)local_258 + 0x34) != (int)uStack_230) {
          local_2f7[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2f7);
        }
        if (((TStack_250.CurrentBitIndex == uVar21) &&
            (TStack_250.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x38))) &&
           (plVar23 == (longlong *)(local_158 + 0x28))) break;
        puVar22 = (uint *)((longlong)TStack_250.CurrentBitIndex * 0x10 + *plVar23);
        uVar20 = *puVar22;
        uVar8 = 0;
        if ((int)uVar20 < (int)local_158._16_4_) {
          uVar8 = ~uVar20 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = puVar22[1];
        local_2f0 = *(longlong **)
                     (*(longlong *)(local_158._8_8_ + (longlong)(int)uVar20 * 8) + 0x14);
        uVar20 = 0;
        if ((int)uVar8 < (int)local_158._16_4_) {
          uVar20 = ~uVar8 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar23 = local_2f0;
        local_260 = *(undefined8 *)
                     (*(longlong *)(local_158._8_8_ + (longlong)(int)uVar8 * 8) + 0x14);
        local_268 = local_2f0;
        uVar20 = ::GetTypeHash((FNameEntryId)(uint)local_2f0);
        if (local_1a8.Elements._8_4_ != local_1a8.Elements._52_4_) {
          FVar16 = (ForElementType<FSetElementId>)&local_1a8.Hash;
          if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar16 = local_1a8.Hash.SecondaryData;
          }
          for (iVar17 = *(int *)((longlong)FVar16 +
                                (ulonglong)(local_1a8.HashSize - 1U & local_268._4_4_ + uVar20) * 4)
              ; iVar17 != -1;
              iVar17 = *(int *)(local_1a8.Elements._0_8_ + 0x10 + (longlong)iVar17 * 0x18)) {
            if (*(longlong **)(local_1a8.Elements._0_8_ + (longlong)iVar17 * 0x18) == plVar23)
            goto LAB_14a45b36d;
          }
        }
        local_208 = &local_2f0;
        local_200 = &local_260;
        TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
                  (&local_1a8,(TPairInitializer<FName_const_&,FName_const_&> *)(local_290 + 0xc),
                   (bool *)&local_208);
LAB_14a45b36d:
        TStack_250.UnvisitedBitMask = TStack_250.UnvisitedBitMask & ~TStack_250._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_250);
      }
    }
    local_1f8 = &local_2d8;
    local_1f0 = &local_1a8;
    TSet<TTuple<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls>,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UControlRig_const_*_const_&,FControlRigPoseMirrorTable::FMatchedControls_const_&>_>
              ((TSet<TTuple<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls>,TDefaultMapHashableKeyFuncs<UControlRig_const_*,FControlRigPoseMirrorTable::FMatchedControls,0>,FDefaultSetAllocator>
                *)&MatchedControls,&local_280,(bool *)&local_1f8);
    UE::AIE::FMirrorItemResults::~FMirrorItemResults((FMirrorItemResults *)(local_158 + 0x28));
    if ((FScriptContainerElement *)local_158._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_158._24_8_);
    }
    if ((FScriptContainerElement *)local_158._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_158._8_8_);
    }
    if (local_2d0 != (longlong *)0x0) {
      FMemory::Free(local_2d0);
    }
    local_1a8.HashSize = 0;
    if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1a8.Elements);
  }
  return;
}

