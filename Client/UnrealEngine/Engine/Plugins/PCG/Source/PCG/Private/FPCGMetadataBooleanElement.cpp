// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// operator() @ 1499cca00

bool __thiscall
`FPCGMetadataBooleanElement::DoOperation'::__l7::<lambda_2>::operator()
          (void *this,bool *param_1,bool *param_2)

{
  switch(*(undefined2 *)this) {
  case 0:
    if ((*param_1 != false) && (*param_2 != false)) {
      return true;
    }
    break;
  case 2:
    if ((*param_1 != false) || (*param_2 != false)) {
      return true;
    }
    break;
  case 3:
    return *param_1 != *param_2;
  case 4:
    if (*param_1 == false) {
      return true;
    }
    if (*param_2 == false) {
      return true;
    }
    break;
  case 5:
    if ((*param_1 == false) && (*param_2 == false)) {
      return true;
    }
    break;
  case 6:
    return *param_1 == *param_2;
  case 7:
    if (*param_1 == false) {
      return true;
    }
    if (*param_2 != false) {
      return true;
    }
    break;
  case 8:
    if ((*param_1 != false) && (*param_2 == false)) {
      return true;
    }
  }
  return false;
}

// DoOperation @ 1499e0370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGMetadataBooleanElement::DoOperation(FPCGMetadataBooleanElement *this,FOperationData *param_1)

{
  short sVar1;
  int iVar2;
  UPCGMetadataSettingsBase *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  bool bVar9;
  short local_res10 [4];
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataBooleanElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
  local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId151,"FPCGMetadataBooleanElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataBooleanOpElement.cpp"
               ,0x97);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId151);
  }
  pUVar3 = param_1->Settings;
  if (pUVar3 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar6 = GetTypeName<UPCGMetadataBooleanSettings>(&local_38);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar5 = UPCGMetadataBooleanSettings::StaticClass();
  iVar2 = (int)pUVar5->_padding_;
  if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar5->_padding_)) {
    sVar1 = (short)pUVar3[1]._padding_;
    if (sVar1 == 1) {
      local_res18[0] =
           (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataBooleanElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
            )local_res10;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<bool,_FPCGMetadataBooleanElement::DoOperation_::__l5::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,local_res18);
    }
    else {
      local_res18[0] =
           (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataBooleanElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
            )local_res10;
      local_res10[0] = sVar1;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<bool,bool,_FPCGMetadataBooleanElement::DoOperation_::__l7::<lambda_2>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataBooleanElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_7_::<lambda_2>_&&>
                          *)local_res18);
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar4;
  }
  pFVar6 = GetTypeName<UPCGMetadataBooleanSettings>(&local_38);
  pwVar7 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UPCGMetadataSettingsBase_const_>(&local_28,pUVar3);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar7,pwVar8);
}

