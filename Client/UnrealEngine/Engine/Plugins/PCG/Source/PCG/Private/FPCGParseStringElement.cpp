// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 149c07c00

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
FPCGParseStringElement::DoOperation(FPCGParseStringElement *this,FOperationData *param_1)

{
  int iVar1;
  UPCGMetadataSettingsBase *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
  local_res18;
  FString local_38;
  FString local_28;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId81,"UPCGParseStringElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGParseString.cpp"
               ,0x51);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId81);
  }
  pUVar2 = param_1->Settings;
  if (pUVar2 == (UPCGMetadataSettingsBase *)0x0) {
    pFVar5 = GetTypeName<UPCGParseStringSettings>(&local_38);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar4 = UPCGParseStringSettings::StaticClass();
  iVar1 = (int)pUVar4->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar4->_padding_)) {
    switch((char)pUVar2[1]._padding_) {
    case '\0':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<float>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\x01':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<double>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\x02':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<int>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,&local_res18);
      break;
    case '\x03':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<__int64>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\x04':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\x05':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\x06':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\a':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\b':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TTransform<double>_>(UE::Math::TTransform<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\t':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<FString>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FString>(FString)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\n':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<bool>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\v':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\f':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<FName>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FName>(FName)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\r':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftObjectPath>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftObjectPath>(FSoftObjectPath)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    case '\x0e':
      local_res18 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                     )local_res10;
      bVar3 = FPCGMetadataElementBase::
              DoNAryOp<FString,__FPCGParseStringElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftClassPath>_::__l2::<lambda_1>_&&>
                        ((FPCGMetadataElementBase *)this,param_1,
                         (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGParseStringElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftClassPath>(FSoftClassPath)const_::_2_::<lambda_1>_&&>
                          *)&local_res18);
      break;
    default:
      bVar3 = false;
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return bVar3;
  }
  pFVar5 = GetTypeName<UPCGParseStringSettings>(&local_38);
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

