// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 149b00e60

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
FPCGMetadataTransformElement::DoOperation
          (FPCGMetadataTransformElement *this,FOperationData *param_1)

{
  int iVar1;
  UPCGMetadataSettingsBase *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  bool bVar8;
  short local_res10;
  undefined2 local_res12;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataTransformElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
  local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId230,"FPCGMetadataTransformElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataTransformOpElement.cpp"
               ,0xe6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId230);
  }
  pUVar2 = param_1->Settings;
  if (pUVar2 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar5 = GetTypeName<UPCGMetadataTransformSettings>(&local_38);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = UPCGMetadataTransformSettings::StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar4->_padding_)) {
    local_res10 = (short)pUVar2[1]._padding_;
    local_res12 = *(undefined2 *)((longlong)&pUVar2[1]._padding_ + 2);
    if (local_res10 == 1) {
      local_res18[0] =
           (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataTransformElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
            )&local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TTransform<double>,_FPCGMetadataTransformElement::DoOperation_::__l5::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,local_res18);
    }
    else {
      local_res18[0] =
           (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataTransformElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
            )&local_res10;
      if (local_res10 == 2) {
        bVar3 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TTransform<double>,UE::Math::TTransform<double>,double,_FPCGMetadataTransformElement::DoOperation_::__l9::<lambda_2>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,
                           (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataTransformElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_9_::<lambda_2>_&&>
                            *)local_res18);
      }
      else {
        bVar3 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TTransform<double>,UE::Math::TTransform<double>,_FPCGMetadataTransformElement::DoOperation_::__l11::<lambda_3>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,
                           (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataTransformElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_11_::<lambda_3>_&&>
                            *)local_res18);
      }
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar3;
  }
  pFVar5 = GetTypeName<UPCGMetadataTransformSettings>(&local_38);
  pwVar6 = L"";
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pFVar5 = GetFullNameForCastLogError<UPCGMetadataSettingsBase_const_>(&local_28,pUVar2);
  if ((pFVar5->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

