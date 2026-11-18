// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// operator() @ 149ae71f0

double __thiscall
`FPCGMetadataTrigElement::DoOperation'::__l7::<lambda_2>::operator()(void *this,double *param_1)

{
  double dVar1;
  double dVar2;
  
  switch(*(undefined2 *)this) {
  case 0:
    dVar2 = *param_1;
    dVar1 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar2) && (dVar1 = dVar2, __real_3ff0000000000000 <= dVar2)) {
      dVar1 = __real_3ff0000000000000;
    }
    break;
  case 1:
    dVar2 = *param_1;
    dVar1 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar2) && (dVar1 = dVar2, __real_3ff0000000000000 <= dVar2)) {
      dVar1 = __real_3ff0000000000000;
    }
    dVar2 = asin(dVar1);
    return dVar2;
  case 2:
    dVar2 = atan(*param_1);
    return dVar2;
  default:
    return 0.0;
  case 4:
    dVar2 = cos(*param_1);
    return dVar2;
  case 5:
    dVar2 = sin(*param_1);
    return dVar2;
  case 6:
    dVar2 = tan(*param_1);
    return dVar2;
  case 7:
    return *param_1 * __real_3f91df46a2529d39;
  case 8:
    return *param_1 * __real_404ca5dc1a63c1f8;
  }
  dVar2 = acos(dVar1);
  return dVar2;
}

// DoOperation @ 149b00fe0

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
FPCGMetadataTrigElement::DoOperation(FPCGMetadataTrigElement *this,FOperationData *param_1)

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
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataTrigElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
  local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId153,"FPCGMetadataTrigElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataTrigOpElement.cpp"
               ,0x99);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId153);
  }
  pUVar3 = param_1->Settings;
  if (pUVar3 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar6 = GetTypeName<UPCGMetadataTrigSettings>(&local_38);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar5 = UPCGMetadataTrigSettings::StaticClass();
  iVar2 = (int)pUVar5->_padding_;
  if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar5->_padding_)) {
    sVar1 = (short)pUVar3[1]._padding_;
    if (sVar1 == 3) {
      local_res18[0] =
           (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataTrigElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
            )local_res10;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<double,double,_FPCGMetadataTrigElement::DoOperation_::__l5::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,local_res18);
    }
    else {
      local_res18[0] =
           (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataTrigElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
            )local_res10;
      local_res10[0] = sVar1;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<double,_FPCGMetadataTrigElement::DoOperation_::__l7::<lambda_2>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataTrigElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_7_::<lambda_2>_&&>
                          *)local_res18);
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar4;
  }
  pFVar6 = GetTypeName<UPCGMetadataTrigSettings>(&local_38);
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

