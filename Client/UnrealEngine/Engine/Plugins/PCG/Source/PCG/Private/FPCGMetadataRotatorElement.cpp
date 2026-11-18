// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 149b00790

/* WARNING: Removing unreachable block (ram,0x000149b0098a) */
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
FPCGMetadataRotatorElement::DoOperation(FPCGMetadataRotatorElement *this,FOperationData *param_1)

{
  ushort uVar1;
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
  ushort local_res10 [4];
  ushort local_res18 [4];
  undefined2 local_res20 [4];
  ushort local_128;
  ushort local_126;
  ushort local_124;
  undefined2 local_122;
  ushort local_120 [4];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_6_::<lambda_1>_&&>
  local_118;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_10_::<lambda_2>_&&>
  local_110;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_14_::<lambda_3>_&&>
  local_108;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_16_::<lambda_4>_&&>
  local_100;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_6_::<lambda_1>_&&>
  local_f8;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_10_::<lambda_2>_&&>
  local_f0;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_14_::<lambda_3>_&&>
  local_e8;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_16_::<lambda_4>_&&>
  local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  FString local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  FString local_50;
  FString local_40;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId273,"FPCGMetadataRotatorElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataRotatorOpElement.cpp"
               ,0x111);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId273);
  }
  pUVar3 = param_1->Settings;
  if (pUVar3 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar8 = GetTypeName<UPCGMetadataRotatorSettings>(&local_70);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar7 = UPCGMetadataRotatorSettings::StaticClass();
  iVar2 = (int)pUVar7->_padding_;
  if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar7->_padding_)) {
    pFVar8 = GetTypeName<UPCGMetadataRotatorSettings>(&local_50);
    pwVar9 = L"";
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar8 = GetFullNameForCastLogError<UPCGMetadataSettingsBase_const_>(&local_40,pUVar3);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar9,pwVar10);
  }
  uVar1 = (ushort)pUVar3[1]._padding_;
  switch(param_1->OutputType) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 6:
  case 8:
  case 10:
  case 0xc:
    goto switchD_149b00849_caseD_0;
  case 4:
    local_60 = 0;
    uStack_58 = 0;
    goto switchD_149b00849_caseD_0;
  case 5:
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
switchD_149b00849_caseD_0:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3515391596033998567>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataRotatorOpElement.cpp"
                       ,0x119,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    break;
  case 7:
    if (uVar1 < 100) {
      if ((uVar1 - 2 & 0xfffd) == 0) {
        local_110 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_10_::<lambda_2>_&&>
                     )local_res18;
        local_res18[0] = uVar1;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TQuat<double>,__FPCGMetadataRotatorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l10::<lambda_2>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_110);
      }
      else if (uVar1 == 3) {
        local_res20[0] = 3;
        local_108 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_14_::<lambda_3>_&&>
                     )local_res20;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TQuat<double>,UE::Math::TQuat<double>,double,__FPCGMetadataRotatorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l14::<lambda_3>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_108);
      }
      else {
        local_100 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_16_::<lambda_4>_&&>
                     )&local_128;
        local_128 = uVar1;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TQuat<double>,UE::Math::TQuat<double>,__FPCGMetadataRotatorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l16::<lambda_4>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_100);
      }
    }
    else {
      local_118 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_6_::<lambda_1>_&&>
                   )local_res10;
      local_res10[0] = uVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TQuat<double>,UE::Math::TTransform<double>,__FPCGMetadataRotatorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l6::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_118);
    }
    goto LAB_149b00ae9;
  case 9:
    local_d8 = 0;
    local_d0 = 0;
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3515391596033998567>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataRotatorOpElement.cpp"
                       ,0x119,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    break;
  case 0xb:
    if (uVar1 < 100) {
      if ((uVar1 - 2 & 0xfffd) == 0) {
        local_f0 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_10_::<lambda_2>_&&>
                    )&local_124;
        local_124 = uVar1;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TRotator<double>,__FPCGMetadataRotatorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l10::<lambda_2>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_f0);
      }
      else if (uVar1 == 3) {
        local_122 = 3;
        local_e8 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_14_::<lambda_3>_&&>
                    )&local_122;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TRotator<double>,UE::Math::TRotator<double>,double,__FPCGMetadataRotatorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l14::<lambda_3>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_e8);
      }
      else {
        local_e0 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_16_::<lambda_4>_&&>
                    )local_120;
        local_120[0] = uVar1;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TRotator<double>,UE::Math::TRotator<double>,__FPCGMetadataRotatorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l16::<lambda_4>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_e0);
      }
    }
    else {
      local_f8 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataRotatorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_6_::<lambda_1>_&&>
                  )&local_126;
      local_126 = uVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TRotator<double>,UE::Math::TTransform<double>,__FPCGMetadataRotatorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l6::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_f8);
    }
    goto LAB_149b00ae9;
  case 0xd:
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3515391596033998567>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataRotatorOpElement.cpp"
                       ,0x119,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    break;
  case 0xe:
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3515391596033998567>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataRotatorOpElement.cpp"
                       ,0x119,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    break;
  default:
    bVar5 = false;
    goto LAB_149b00ae9;
  }
  bVar5 = true;
LAB_149b00ae9:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

