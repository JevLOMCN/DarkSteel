// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 149b00bc0

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
FPCGMetadataStringOpElement::DoOperation(FPCGMetadataStringOpElement *this,FOperationData *param_1)

{
  short sVar1;
  int iVar2;
  UPCGMetadataSettingsBase *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  bool bVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5 [5];
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
  local_b0;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_9_::<lambda_2>_&&>
  local_a8;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_13_::<lambda_3>_&&>
  local_a0;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_17_::<lambda_4>_&&>
  local_98;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_21_::<lambda_5>_&&>
  local_90;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_25_::<lambda_6>_&&>
  local_88;
  UPCGMetadataSettingsBase *local_80;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_29_::<lambda_7>_&&>
  local_78;
  UPCGMetadataSettingsBase *local_70;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_33_::<lambda_8>_&&>
  local_68;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_37_::<lambda_9>_&&>
  local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId143,"FPCGMetadataStringOpElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataStringOpElement.cpp"
               ,0x8f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId143);
  }
  pUVar3 = param_1->Settings;
  if (pUVar3 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar8 = GetTypeName<UPCGMetadataStringOpSettings>(&local_58);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar7 = UPCGMetadataStringOpSettings::StaticClass();
  iVar2 = (int)pUVar7->_padding_;
  if ((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar7->_padding_)) {
    sVar1 = (short)pUVar3[1]._padding_;
    if (sVar1 == 4) {
      local_b0 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_5_::<lambda_1>_&&>
                  )local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FString,_FPCGMetadataStringOpElement::DoOperation_::__l5::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_b0);
    }
    else if (sVar1 == 5) {
      local_a8 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_9_::<lambda_2>_&&>
                  )local_res18;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FString,_FPCGMetadataStringOpElement::DoOperation_::__l9::<lambda_2>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_a8);
    }
    else if (sVar1 == 6) {
      local_a0 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_13_::<lambda_3>_&&>
                  )local_res20;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FString,_FPCGMetadataStringOpElement::DoOperation_::__l13::<lambda_3>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_a0);
    }
    else if (sVar1 == 7) {
      local_98 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_17_::<lambda_4>_&&>
                  )&local_b8;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FString,_FPCGMetadataStringOpElement::DoOperation_::__l17::<lambda_4>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_98);
    }
    else if (sVar1 == 8) {
      local_90 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_21_::<lambda_5>_&&>
                  )&local_b7;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FString,_FPCGMetadataStringOpElement::DoOperation_::__l21::<lambda_5>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_90);
    }
    else if (sVar1 == 0) {
      local_88 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_25_::<lambda_6>_&&>
                  )&local_b6;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FString,FString,_FPCGMetadataStringOpElement::DoOperation_::__l25::<lambda_6>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_88);
    }
    else if (sVar1 == 2) {
      local_78 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_29_::<lambda_7>_&&>
                  )&local_80;
      local_80 = pUVar3;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FString,FString,_FPCGMetadataStringOpElement::DoOperation_::__l29::<lambda_7>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_78);
    }
    else if (sVar1 == 3) {
      local_68 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_33_::<lambda_8>_&&>
                  )&local_70;
      local_70 = pUVar3;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FString,FString,_FPCGMetadataStringOpElement::DoOperation_::__l33::<lambda_8>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_68);
    }
    else if (sVar1 == 1) {
      local_60 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataStringOpElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_37_::<lambda_9>_&&>
                  )local_b5;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FString,FString,FString,_FPCGMetadataStringOpElement::DoOperation_::__l37::<lambda_9>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_60);
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3065703245922959172>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataStringOpElement.cpp"
                         ,0xbc,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = true;
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar5;
  }
  pFVar8 = GetTypeName<UPCGMetadataStringOpSettings>(&local_48);
  pwVar9 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<UPCGMetadataSettingsBase_const_>(&local_38,pUVar3);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar10);
}

