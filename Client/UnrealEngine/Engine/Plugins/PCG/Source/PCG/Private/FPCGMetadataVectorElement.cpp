// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 149b01140

/* WARNING: Removing unreachable block (ram,0x000149b015c9) */
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
FPCGMetadataVectorElement::DoOperation(FPCGMetadataVectorElement *this,FOperationData *param_1)

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
  ushort local_res20 [4];
  ushort local_198;
  undefined2 local_196;
  ushort local_194;
  ushort local_192;
  ushort local_190;
  ushort local_18e;
  ushort local_18c;
  undefined2 local_18a;
  ushort local_188;
  ushort local_186;
  ushort local_184;
  ushort local_182;
  ushort local_180;
  undefined2 local_17e;
  ushort local_17c [2];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_6_::<lambda_1>_&&>
  local_178;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_13_::<lambda_2>_&&>
  local_170;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_15_::<lambda_3>_&&>
  local_168;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_20_::<lambda_4>_&&>
  local_160;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_24_::<lambda_5>_&&>
  local_158;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_26_::<lambda_6>_&&>
  local_150;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_6_::<lambda_1>_&&>
  local_148;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_13_::<lambda_2>_&&>
  local_140;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_15_::<lambda_3>_&&>
  local_138;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_20_::<lambda_4>_&&>
  local_130;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_24_::<lambda_5>_&&>
  local_128;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_26_::<lambda_6>_&&>
  local_120;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_6_::<lambda_1>_&&>
  local_118;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_13_::<lambda_2>_&&>
  local_110;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_15_::<lambda_3>_&&>
  local_108;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_20_::<lambda_4>_&&>
  local_100;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_24_::<lambda_5>_&&>
  local_f8;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_26_::<lambda_6>_&&>
  local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId391,"FPCGMetadataVectorElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataVectorOpElement.cpp"
               ,0x187);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId391);
  }
  pUVar3 = param_1->Settings;
  if (pUVar3 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar8 = GetTypeName<UPCGMetadataVectorSettings>(&local_70);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar7 = UPCGMetadataVectorSettings::StaticClass();
  iVar2 = (int)pUVar7->_padding_;
  if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar7->_padding_)) {
    pFVar8 = GetTypeName<UPCGMetadataVectorSettings>(&local_60);
    pwVar9 = L"";
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar8 = GetFullNameForCastLogError<UPCGMetadataSettingsBase_const_>(&local_80,pUVar3);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar9,pwVar10);
  }
  uVar1 = (ushort)pUVar3[1]._padding_;
  switch(param_1->MostComplexInputType) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 8:
  case 10:
  case 0xc:
    goto switchD_149b011fc_caseD_0;
  case 4:
    if (uVar1 < 100) {
      if ((param_1->OutputType < 0xff) && (param_1->OutputType == 1)) {
        if ((ushort)(uVar1 - 4) < 2) {
          local_170 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_13_::<lambda_2>_&&>
                       )local_res18;
          local_res18[0] = uVar1;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<UE::Math::TVector2<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l13::<lambda_2>_&&>
                            ((FPCGMetadataElementBase *)this,param_1,&local_170);
        }
        else {
          local_168 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_15_::<lambda_3>_&&>
                       )local_res20;
          local_res20[0] = uVar1;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<UE::Math::TVector2<double>,UE::Math::TVector2<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l15::<lambda_3>_&&>
                            ((FPCGMetadataElementBase *)this,param_1,&local_168);
        }
      }
      else if ((ushort)(uVar1 - 4) < 2) {
        local_160 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_20_::<lambda_4>_&&>
                     )&local_198;
        local_198 = uVar1;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector2<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l20::<lambda_4>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_160);
      }
      else if (uVar1 == 6) {
        local_196 = 6;
        local_158 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_24_::<lambda_5>_&&>
                     )&local_196;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector2<double>,UE::Math::TVector2<double>,double,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l24::<lambda_5>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_158);
      }
      else {
        local_150 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_26_::<lambda_6>_&&>
                     )&local_194;
        local_194 = uVar1;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector2<double>,UE::Math::TVector2<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l26::<lambda_6>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_150);
      }
    }
    else {
      local_178 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_6_::<lambda_1>_&&>
                   )local_res10;
      local_res10[0] = uVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector2<double>,UE::Math::TTransform<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l6::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_178);
    }
    goto LAB_149b0167f;
  case 5:
    if (uVar1 < 100) {
      if ((param_1->OutputType < 0xff) && (param_1->OutputType == 1)) {
        if ((ushort)(uVar1 - 4) < 2) {
          local_140 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_13_::<lambda_2>_&&>
                       )&local_190;
          local_190 = uVar1;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<UE::Math::TVector<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l13::<lambda_2>_&&>
                            ((FPCGMetadataElementBase *)this,param_1,&local_140);
        }
        else {
          local_138 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_15_::<lambda_3>_&&>
                       )&local_18e;
          local_18e = uVar1;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l15::<lambda_3>_&&>
                            ((FPCGMetadataElementBase *)this,param_1,&local_138);
        }
      }
      else if ((ushort)(uVar1 - 4) < 2) {
        local_130 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_20_::<lambda_4>_&&>
                     )&local_18c;
        local_18c = uVar1;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l20::<lambda_4>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_130);
      }
      else if (uVar1 == 6) {
        local_18a = 6;
        local_128 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_24_::<lambda_5>_&&>
                     )&local_18a;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,double,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l24::<lambda_5>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_128);
      }
      else {
        local_120 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_26_::<lambda_6>_&&>
                     )&local_188;
        local_188 = uVar1;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l26::<lambda_6>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_120);
      }
    }
    else {
      local_148 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_6_::<lambda_1>_&&>
                   )&local_192;
      local_192 = uVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,UE::Math::TTransform<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l6::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_148);
    }
    goto LAB_149b0167f;
  case 6:
    if (uVar1 < 100) {
      if ((param_1->OutputType < 0xff) && (param_1->OutputType == 1)) {
        if ((ushort)(uVar1 - 4) < 2) {
          local_110 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_13_::<lambda_2>_&&>
                       )&local_184;
          local_184 = uVar1;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<UE::Math::TVector4<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l13::<lambda_2>_&&>
                            ((FPCGMetadataElementBase *)this,param_1,&local_110);
        }
        else {
          local_108 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_15_::<lambda_3>_&&>
                       )&local_182;
          local_182 = uVar1;
          bVar5 = FPCGMetadataElementBase::
                  DoNAryOp<UE::Math::TVector4<double>,UE::Math::TVector4<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l15::<lambda_3>_&&>
                            ((FPCGMetadataElementBase *)this,param_1,&local_108);
        }
      }
      else if ((ushort)(uVar1 - 4) < 2) {
        local_100 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_20_::<lambda_4>_&&>
                     )&local_180;
        local_180 = uVar1;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector4<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l20::<lambda_4>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_100);
      }
      else if (uVar1 == 6) {
        local_17e = 6;
        local_f8 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_24_::<lambda_5>_&&>
                    )&local_17e;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector4<double>,UE::Math::TVector4<double>,double,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l24::<lambda_5>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_f8);
      }
      else {
        local_f0 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_26_::<lambda_6>_&&>
                    )local_17c;
        local_17c[0] = uVar1;
        bVar5 = FPCGMetadataElementBase::
                DoNAryOp<UE::Math::TVector4<double>,UE::Math::TVector4<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l26::<lambda_6>_&&>
                          ((FPCGMetadataElementBase *)this,param_1,&local_f0);
      }
    }
    else {
      local_118 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataVectorElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_6_::<lambda_1>_&&>
                   )&local_186;
      local_186 = uVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector4<double>,UE::Math::TTransform<double>,__FPCGMetadataVectorElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l6::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_118);
    }
    goto LAB_149b0167f;
  case 7:
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    goto switchD_149b011fc_caseD_0;
  case 9:
    local_e8 = 0;
    local_e0 = 0;
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1100545443584016783>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataVectorOpElement.cpp"
                       ,399,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    break;
  case 0xb:
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
switchD_149b011fc_caseD_0:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1100545443584016783>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataVectorOpElement.cpp"
                       ,399,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    break;
  case 0xd:
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1100545443584016783>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataVectorOpElement.cpp"
                       ,399,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    break;
  case 0xe:
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1100545443584016783>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataVectorOpElement.cpp"
                       ,399,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    break;
  default:
    bVar5 = false;
    goto LAB_149b0167f;
  }
  bVar5 = true;
LAB_149b0167f:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

