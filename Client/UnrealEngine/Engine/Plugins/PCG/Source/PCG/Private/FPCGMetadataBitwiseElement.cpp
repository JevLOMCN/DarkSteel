// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 1499e0210

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
FPCGMetadataBitwiseElement::DoOperation(FPCGMetadataBitwiseElement *this,FOperationData *param_1)

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
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataBitwiseElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
  local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId148,"FPCGMetadataBitwiseElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataBitwiseOpElement.cpp"
               ,0x94);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId148);
  }
  pUVar3 = param_1->Settings;
  if (pUVar3 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar6 = GetTypeName<UPCGMetadataBitwiseSettings>(&local_38);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar7);
  }
  pUVar5 = UPCGMetadataBitwiseSettings::StaticClass();
  iVar2 = (int)pUVar5->_padding_;
  if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar5->_padding_)) {
    sVar1 = (short)pUVar3[1]._padding_;
    if (sVar1 == 1) {
      local_res18[0] =
           (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataBitwiseElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
            )local_res10;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<__int64,_FPCGMetadataBitwiseElement::DoOperation_::__l5::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,local_res18);
    }
    else {
      local_res18[0] =
           (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataBitwiseElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
            )local_res10;
      local_res10[0] = sVar1;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<__int64,__int64,_FPCGMetadataBitwiseElement::DoOperation_::__l7::<lambda_2>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataBitwiseElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_7_::<lambda_2>_&&>
                          *)local_res18);
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar4;
  }
  pFVar6 = GetTypeName<UPCGMetadataBitwiseSettings>(&local_38);
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

