// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 149b00240

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
FPCGAttributeRemapElement::DoOperation(FPCGAttributeRemapElement *this,FOperationData *param_1)

{
  double dVar1;
  int iVar2;
  UPCGMetadataSettingsBase *pUVar3;
  FPCGContext *pFVar4;
  bool bVar5;
  UClass *pUVar6;
  FText *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  bool bVar11;
  double dVar12;
  int *local_res10;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
  local_res18;
  FText local_88;
  FString local_78;
  int local_68 [2];
  double local_60;
  double dStack_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  ulonglong local_30;
  FRichCurve *local_28;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"FPCGAttributeRemapElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeRemap.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  pUVar3 = param_1->Settings;
  if (pUVar3 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar8 = GetTypeName<UPCGAttributeRemapSettings>((FString *)&local_88);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar6 = UPCGAttributeRemapSettings::StaticClass();
  iVar2 = (int)pUVar6->_padding_;
  if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar6->_padding_)) {
    pFVar8 = GetTypeName<UPCGAttributeRemapSettings>((FString *)&local_88);
    pwVar9 = L"";
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar8 = GetFullNameForCastLogError<UPCGMetadataSettingsBase_const_>(&local_78,pUVar3);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar9,pwVar10);
  }
  local_60 = 0.0;
  dStack_58 = 0.0;
  local_30 = 0;
  local_50 = 0.0;
  dStack_48 = 0.0;
  local_28 = (FRichCurve *)0x0;
  local_40 = 0.0;
  dStack_38 = 0.0;
  local_68[0] = (int)pUVar3[1]._padding_;
  if (local_68[0] == 0) {
    local_30 = (ulonglong)(ushort)pUVar3[1]._padding_;
    local_50 = (double)pUVar3[1]._padding_;
    if ((double)pUVar3[1]._padding_ <= (double)pUVar3[1]._padding_) {
      local_50 = (double)pUVar3[1]._padding_;
    }
    dStack_48 = (double)pUVar3[1]._padding_;
    if ((double)pUVar3[1]._padding_ <= (double)pUVar3[1]._padding_) {
      dStack_48 = (double)pUVar3[1]._padding_;
    }
    if (*(char *)((longlong)&pUVar3[1]._padding_ + 2) == '\0') {
      dVar12 = (double)pUVar3[1]._padding_;
      dVar1 = (double)pUVar3[1]._padding_;
      dStack_38 = dVar12;
      if (dVar1 <= dVar12) {
        dStack_38 = dVar1;
      }
      local_60 = local_50;
      dStack_58 = dStack_48;
      if (dVar12 <= dVar1) {
        dVar12 = dVar1;
      }
    }
    else {
      dStack_38 = (double)pUVar3[1]._padding_;
      dVar12 = (double)pUVar3[1]._padding_;
      local_60 = (double)pUVar3[1]._padding_;
      dStack_58 = (double)pUVar3[1]._padding_;
    }
    if (dStack_58 - local_60 == 0.0) {
      local_40 = 0.0;
      dStack_38 = (dStack_38 + dVar12) * __real_3fe0000000000000;
    }
    else {
      local_40 = (dVar12 - dStack_38) / (dStack_58 - local_60);
    }
LAB_149b003d6:
    switch(param_1->MostComplexInputType) {
    case 0:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<float,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<float>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 1:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<double,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<double>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 2:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<int,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<int>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_res18);
      break;
    case 3:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<__int64,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<__int64>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 4:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector2<double>,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 5:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 6:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector4<double>,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 7:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TRotator<double>,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 8:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TTransform<double>,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TTransform<double>_>(UE::Math::TTransform<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 9:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<FString>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FString>(FString)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 10:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<bool,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<bool>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 0xb:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TRotator<double>,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 0xc:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FName,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<FName>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FName>(FName)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 0xd:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FSoftObjectPath,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftObjectPath>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftObjectPath>(FSoftObjectPath)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case 0xe:
      local_res10 = local_68;
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_res10;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FSoftClassPath,__FPCGAttributeRemapElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftClassPath>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGAttributeRemapElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftClassPath>(FSoftClassPath)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    default:
      bVar5 = false;
    }
  }
  else {
    if (local_68[0] == 1) {
      local_28 = FRuntimeFloatCurve::GetRichCurveConst((FRuntimeFloatCurve *)&pUVar3[1]._padding_);
      if (local_28 != (FRichCurve *)0x0) goto LAB_149b003d6;
      pwVar10 = L"Curve is invalid";
      pwVar9 = L"InvalidCurve";
    }
    else {
      pwVar10 = L"Invalid mode";
      pwVar9 = L"InvalidMode";
    }
    pFVar4 = param_1->Context;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"PCGAttributeRemapElement",pwVar9,pwVar10);
    PCGLog::LogErrorOnGraph(pFVar7,pFVar4);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    bVar5 = true;
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

