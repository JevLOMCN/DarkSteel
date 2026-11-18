// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 1467906a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::FApplyCustomPrimitiveDataParameters::ForEachAllocation
          (FEntityAllocationProxy *param_1,TRead<UObject_*> param_2,TRead<FName> param_3,
          TRead<double> param_4)

{
  ushort uVar1;
  int iVar2;
  UPrimitiveComponent *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FEntityAllocation *pFVar6;
  UClass *pUVar7;
  FString *pFVar8;
  ForAnyElementType _Str;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  iVar12 = 0;
  lVar13 = 0;
  uVar1 = pFVar6->Size;
  if ((ulonglong)uVar1 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_4;
    pwVar10 = L"";
    do {
      this = *(UPrimitiveComponent **)((longlong)param_4 + lVar11);
      if (this == (UPrimitiveComponent *)0x0) {
        pFVar8 = GetTypeName<UPrimitiveComponent>(&local_40);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar10);
      }
      pUVar7 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) {
        pFVar8 = GetTypeName<UPrimitiveComponent>(&local_60);
        if ((pFVar8->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
        pFVar8 = GetFullNameForCastLogError<UObject>(&local_50,(UObject *)this);
        if ((pFVar8->Data).ArrayNum != 0) {
          pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar10,pwVar9);
      }
      ::FName::ToString((FName *)((longlong)param_3 + (longlong)iVar12 * 8),&local_70);
      bVar4 = ::FString::IsNumeric(&local_70);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParameterNameString.IsNumeric()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneCustomPrimitiveDataSystem.cpp"
                             ,0x73,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_70.Data.ArrayNum != 0) {
        _Str.Data = local_70.Data.AllocatorInstance.Data;
      }
      uVar5 = _wtoi((wchar_t *)_Str.Data);
      if ((0x23 < uVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DataIndex >= 0 && DataIndex < FCustomPrimitiveData::NumCustomPrimitiveDataFloats"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneCustomPrimitiveDataSystem.cpp"
                             ,0x75,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UPrimitiveComponent::SetCustomPrimitiveDataFloat(this,uVar5,(float)*(double *)param_4);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      iVar12 = iVar12 + 1;
      lVar13 = lVar13 + 1;
      param_4 = (TRead<double>)((longlong)param_4 + 8);
    } while (lVar13 < (longlong)(ulonglong)uVar1);
  }
  return;
}

