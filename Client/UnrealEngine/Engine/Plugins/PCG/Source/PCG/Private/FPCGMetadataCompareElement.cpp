// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 1499e08e0

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
FPCGMetadataCompareElement::DoOperation(FPCGMetadataCompareElement *this,FOperationData *param_1)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  UPCGMetadataSettingsBase *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  bool bVar10;
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
  local_res10;
  FString local_38;
  FString local_28;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"FPCGMetadataCompareElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGMetadataCompareOpElement.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  pUVar4 = param_1->Settings;
  if (pUVar4 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar7 = GetTypeName<UPCGMetadataCompareSettings>(&local_38);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar6 = UPCGMetadataCompareSettings::StaticClass();
  iVar3 = (int)pUVar6->_padding_;
  if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
      &pUVar6->_padding_)) {
    uVar2 = (undefined2)pUVar4[1]._padding_;
    lVar1 = pUVar4[1]._padding_;
    switch(param_1->MostComplexInputType) {
    case 0:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<float,float,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<float>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 1:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<double,double,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<double>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 2:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<int,int,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<int>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_res10);
      break;
    case 3:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<__int64,__int64,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<__int64>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 4:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector2<double>,UE::Math::TVector2<double>,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 5:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector<double>,UE::Math::TVector<double>,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 6:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TVector4<double>,UE::Math::TVector4<double>,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 7:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TQuat<double>,UE::Math::TQuat<double>,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 8:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TTransform<double>,UE::Math::TTransform<double>,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TTransform<double>_>(UE::Math::TTransform<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 9:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FString,FString,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<FString>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FString>(FString)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 10:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<bool,bool,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<bool>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 0xb:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<UE::Math::TRotator<double>,UE::Math::TRotator<double>,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 0xc:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FName,FName,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<FName>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FName>(FName)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 0xd:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FSoftObjectPath,FSoftObjectPath,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftObjectPath>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftObjectPath>(FSoftObjectPath)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    case 0xe:
      local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )&local_38;
      local_38.Data.AllocatorInstance.Data._0_2_ = uVar2;
      local_38.Data._8_8_ = lVar1;
      bVar5 = FPCGMetadataElementBase::
              DoNAryOp<FSoftClassPath,FSoftClassPath,__FPCGMetadataCompareElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftClassPath>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGMetadataCompareElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftClassPath>(FSoftClassPath)const_::_2_::<lambda_1>_&&>
                          *)&local_res10);
      break;
    default:
      bVar5 = false;
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar5;
  }
  pFVar7 = GetTypeName<UPCGMetadataCompareSettings>(&local_38);
  pwVar8 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UPCGMetadataSettingsBase_const_>(&local_28,pUVar4);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar9);
}

