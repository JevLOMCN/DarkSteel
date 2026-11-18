// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// operator() @ 1499c77d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRotator<double> * __thiscall
`FPCGMetadataMakeRotatorElement::DoOperation'::__l4::<lambda_10>::operator()
          (void *this,TRotator<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_148 [64];
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_148;
  dVar4 = (param_3->field0_0x0)._s_0.X;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  dVar3 = dVar1 * dVar1 + dVar4 * dVar4 + dVar2 * dVar2;
  if (dVar3 == __real_3ff0000000000000) {
    local_108.M[2][0] = (param_3->field0_0x0)._s_0.X;
    local_108.M[2][1] = (param_3->field0_0x0)._s_0.Y;
    local_108.M[2][2] = (param_3->field0_0x0)._s_0.Z;
  }
  else {
    local_108.M[2][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_108.M[2][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_108.M[2][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar3) {
      dVar3 = __real_3ff0000000000000 / SQRT(dVar3);
      local_108.M[2][0] = dVar4 * dVar3;
      local_108.M[2][1] = dVar1 * dVar3;
      local_108.M[2][2] = dVar2 * dVar3;
    }
  }
  dVar4 = (param_2->field0_0x0)._s_0.X;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar3 = dVar1 * dVar1 + dVar4 * dVar4 + dVar2 * dVar2;
  if (dVar3 == __real_3ff0000000000000) {
    local_108.M[1][2] = (param_2->field0_0x0)._s_0.Z;
    local_108.M[1][1] = (param_2->field0_0x0)._s_0.Y;
    local_108.M[1][0] = (param_2->field0_0x0)._s_0.X;
  }
  else {
    local_108.M[1][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_108.M[1][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_108.M[1][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar3) {
      dVar3 = __real_3ff0000000000000 / SQRT(dVar3);
      local_108.M[1][2] = dVar2 * dVar3;
      local_108.M[1][1] = dVar1 * dVar3;
      local_108.M[1][0] = dVar4 * dVar3;
    }
  }
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = dVar4 * dVar4 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar4 == __real_3ff0000000000000) {
    local_108.M[0][1] = (param_1->field0_0x0)._s_0.Y;
    local_108.M[0][2] = (param_1->field0_0x0)._s_0.Z;
    local_108.M[0][0] = (param_1->field0_0x0)._s_0.X;
  }
  else {
    local_108.M[0][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_108.M[0][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_108.M[0][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar4) {
      dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
      local_108.M[0][1] = dVar4 * (param_1->field0_0x0)._s_0.Y;
      local_108.M[0][2] = dVar4 * (param_1->field0_0x0)._s_0.Z;
      local_108.M[0][0] = dVar4 * (param_1->field0_0x0)._s_0.X;
    }
  }
  local_108.M[0][3] = 0.0;
  local_108.M[1][3] = 0.0;
  local_108.M[2][3] = 0.0;
  local_108.M[3][1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_108.M[3][0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_108.M[3][2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108.M[3][3] = __real_3ff0000000000000;
  UE::Math::TMatrix<double>::Rotator(&local_108,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DoOperation @ 1499e0cd0

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
FPCGMetadataMakeRotatorElement::DoOperation
          (FPCGMetadataMakeRotatorElement *this,FOperationData *param_1)

{
  int iVar1;
  UPCGMetadataSettingsBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_1>_&&>
  local_b0;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_2>_&&>
  local_a8;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_3>_&&>
  local_a0;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_4>_&&>
  local_98;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_5>_&&>
  local_90;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_6>_&&>
  local_88;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_7>_&&>
  local_80;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_8>_&&>
  local_78;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_9>_&&>
  local_70;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_10>_&&>
  local_68;
  TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_11>_&&>
  local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId264,"FPCGMetadataMakeRotatorElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMakeRotator.cpp"
               ,0x108);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId264);
  }
  pUVar2 = param_1->Settings;
  if (pUVar2 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar7 = GetTypeName<UPCGMetadataMakeRotatorSettings>(&local_58);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar6 = UPCGMetadataMakeRotatorSettings::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar6->_padding_)) {
    switch((char)pUVar2[1]._padding_) {
    case '\0':
      local_b0 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_1>_&&>
                  )local_res10;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,_FPCGMetadataMakeRotatorElement::DoOperation_::__l4::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_b0);
      break;
    case '\x01':
      local_a8 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_2>_&&>
                  )local_res18;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,_FPCGMetadataMakeRotatorElement::DoOperation_::__l4::<lambda_2>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_a8);
      break;
    case '\x02':
      local_a0 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_3>_&&>
                  )local_res20;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,_FPCGMetadataMakeRotatorElement::DoOperation_::__l4::<lambda_3>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_a0);
      break;
    case '\x03':
      local_98 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_4>_&&>
                  )&local_b8;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,_FPCGMetadataMakeRotatorElement::DoOperation_::__l4::<lambda_4>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_98);
      break;
    case '\x04':
      local_90 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_5>_&&>
                  )&local_b7;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,_FPCGMetadataMakeRotatorElement::DoOperation_::__l4::<lambda_5>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_90);
      break;
    case '\x05':
      local_88 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_6>_&&>
                  )&local_b6;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,_FPCGMetadataMakeRotatorElement::DoOperation_::__l4::<lambda_6>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_88);
      break;
    case '\x06':
      local_80 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_7>_&&>
                  )&local_b5;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,_FPCGMetadataMakeRotatorElement::DoOperation_::__l4::<lambda_7>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_80);
      break;
    case '\a':
      local_78 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_8>_&&>
                  )&local_b4;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,_FPCGMetadataMakeRotatorElement::DoOperation_::__l4::<lambda_8>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_78);
      break;
    case '\b':
      local_70 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_9>_&&>
                  )&local_b3;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,_FPCGMetadataMakeRotatorElement::DoOperation_::__l4::<lambda_9>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_70);
      break;
    case '\t':
      local_68 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_10>_&&>
                  )&local_b2;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,_FPCGMetadataMakeRotatorElement::DoOperation_::__l4::<lambda_10>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_68);
      break;
    case '\n':
      local_60 = (TTuple<_protected:_virtual_bool___cdecl_FPCGMetadataMakeRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_4_::<lambda_11>_&&>
                  )&local_b1;
      bVar4 = FPCGMetadataElementBase::
              DoNAryOp<double,double,double,_FPCGMetadataMakeRotatorElement::DoOperation_::__l4::<lambda_11>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_60);
      break;
    default:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<333807662858764587>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataMakeRotator.cpp"
                         ,299,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      bVar4 = true;
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar4;
  }
  pFVar7 = GetTypeName<UPCGMetadataMakeRotatorSettings>(&local_48);
  pwVar8 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UPCGMetadataSettingsBase_const_>(&local_38,pUVar2);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar9);
}

