// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestorePreAnimatedValue @ 1467bdc40

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
UE::MovieScene::FCustomPrimitiveDataEntryTraits::RestorePreAnimatedValue
          (FKeyType *param_1,float param_2,FRestoreStateParams *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UPrimitiveComponent *this;
  UClass *pUVar5;
  ForAnyElementType _Str;
  FWeakObjectPtr local_res8;
  FString local_28 [2];
  
  local_res8.ObjectIndex = (param_1->Object).ObjectIndex;
  local_res8.ObjectSerialNumber = (param_1->Object).ObjectSerialNumber;
  this = (UPrimitiveComponent *)FWeakObjectPtr::Get(&local_res8);
  if (this != (UPrimitiveComponent *)0x0) {
    pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      ::FName::ToString(&param_1->IndexName,local_28);
      bVar3 = ::FString::IsNumeric(local_28);
      if (!bVar3) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParameterNameString.IsNumeric()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneCustomPrimitiveDataSystem.cpp"
                           ,0x16a,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_28[0].Data.ArrayNum != 0) {
        _Str.Data = local_28[0].Data.AllocatorInstance.Data;
      }
      uVar4 = _wtoi((wchar_t *)_Str.Data);
      if (0x23 < uVar4) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataIndex >= 0 && DataIndex < FCustomPrimitiveData::NumCustomPrimitiveDataFloats"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneCustomPrimitiveDataSystem.cpp"
                           ,0x16c,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      UPrimitiveComponent::SetCustomPrimitiveDataFloat(this,uVar4,param_2);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

