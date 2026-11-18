// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// DoOperation @ 1499dff70

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
FPCGHashAttributeElement::DoOperation(FPCGHashAttributeElement *this,FOperationData *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
  local_res10;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId24,"FPCGHashAttributeElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Metadata\\PCGHashAttribute.cpp"
               ,0x18);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId24);
  }
  switch(param_1->MostComplexInputType) {
  case 0:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<float,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<float>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<float>(float)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 1:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<double,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<double>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<double>(double)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 2:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<int,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<int>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,&local_res10);
    break;
  case 3:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<__int64,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<__int64>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<__int64>(__int64)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 4:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector2<double>,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector2<double>_>(UE::Math::TVector2<double>)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 5:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector<double>,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector<double>_>(UE::Math::TVector<double>)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 6:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TVector4<double>,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TVector4<double>_>(UE::Math::TVector4<double>)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 7:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TQuat<double>,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TQuat<double>_>(UE::Math::TQuat<double>)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 8:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TTransform<double>,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TTransform<double>_>(UE::Math::TTransform<double>)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 9:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<FString,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<FString>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FString>(FString)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 10:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<bool,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<bool>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<bool>(bool)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 0xb:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<UE::Math::TRotator<double>,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<UE::Math::TRotator<double>_>(UE::Math::TRotator<double>)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 0xc:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<FName,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<FName>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FName>(FName)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 0xd:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<FSoftObjectPath,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftObjectPath>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftObjectPath>(FSoftObjectPath)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  case 0xe:
    local_res10 = (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<int>(int)const_::_2_::<lambda_1>_&&>
                   )local_res8;
    bVar1 = FPCGMetadataElementBase::
            DoNAryOp<FSoftClassPath,__FPCGHashAttributeElement::DoOperation_::__l2::<lambda_1>::operator()<FSoftClassPath>_::__l2::<lambda_1>_&&>
                      ((FPCGMetadataElementBase *)this,param_1,
                       (TTuple<_public:_bool___cdecl__protected:_virtual_bool___cdecl_FPCGHashAttributeElement::DoOperation(PCGMetadataOps::FOperationData_&)const_::_2_::<lambda_1>::operator()<FSoftClassPath>(FSoftClassPath)const_::_2_::<lambda_1>_&&>
                        *)&local_res10);
    break;
  default:
    bVar1 = false;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

