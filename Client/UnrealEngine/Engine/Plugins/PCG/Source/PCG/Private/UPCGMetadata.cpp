// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 219

// FindOrCreateAttribute<FSoftObjectPath> @ 1497bb380

FPCGMetadataAttribute<FSoftObjectPath> * __thiscall
UPCGMetadata::FindOrCreateAttribute<FSoftObjectPath>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,FSoftObjectPath *param_2,bool param_3
          ,bool param_4,bool param_5)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                       (this_00,param_1->Name,param_2,param_3,param_4,param_5);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
}

// FindOrCreateAttribute<int> @ 149861ba0

FPCGMetadataAttribute<int> * __thiscall
UPCGMetadata::FindOrCreateAttribute<int>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,int *param_2,bool param_3,
          bool param_4,bool param_5)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<int> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::FindOrCreateAttribute<int>
                       (this_00,param_1->Name,param_2,param_3,param_4,param_5);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<int> *)0x0;
}

// CreateAttribute<int> @ 14995ef70

FPCGMetadataAttribute<int> * __thiscall
UPCGMetadata::CreateAttribute<int>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,int *param_2,bool param_3,
          bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<int> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<int>(this_00,param_1->Name,param_2,param_3,param_4)
    ;
    return pFVar1;
  }
  return (FPCGMetadataAttribute<int> *)0x0;
}

// CreateAttribute<float> @ 14995f220

FPCGMetadataAttribute<float> * __thiscall
UPCGMetadata::CreateAttribute<float>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,float *param_2,bool param_3,
          bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<float> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<float>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<float> *)0x0;
}

// CreateAttribute<double> @ 14995f4d0

FPCGMetadataAttribute<double> * __thiscall
UPCGMetadata::CreateAttribute<double>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,double *param_2,bool param_3,
          bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<double> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<double>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<double> *)0x0;
}

// CreateAttribute<UE::Math::TQuat<double>_> @ 14995f780

FPCGMetadataAttribute<UE::Math::TQuat<double>_> * __thiscall
UPCGMetadata::CreateAttribute<UE::Math::TQuat<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,TQuat<double> *param_2,bool param_3,
          bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
}

// CreateAttribute<UE::Math::TRotator<double>_> @ 14995fa30

FPCGMetadataAttribute<UE::Math::TRotator<double>_> * __thiscall
UPCGMetadata::CreateAttribute<UE::Math::TRotator<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,TRotator<double> *param_2,
          bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<UE::Math::TRotator<double>_>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
}

// CreateAttribute<UE::Math::TTransform<double>_> @ 14995fce0

FPCGMetadataAttribute<UE::Math::TTransform<double>_> * __thiscall
UPCGMetadata::CreateAttribute<UE::Math::TTransform<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,TTransform<double> *param_2,
          bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<UE::Math::TTransform<double>_>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
}

// CreateAttribute<UE::Math::TVector2<double>_> @ 14995ff90

FPCGMetadataAttribute<UE::Math::TVector2<double>_> * __thiscall
UPCGMetadata::CreateAttribute<UE::Math::TVector2<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,TVector2<double> *param_2,
          bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
}

// CreateAttribute<UE::Math::TVector4<double>_> @ 149960240

FPCGMetadataAttribute<UE::Math::TVector4<double>_> * __thiscall
UPCGMetadata::CreateAttribute<UE::Math::TVector4<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,TVector4<double> *param_2,
          bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector4<double>_>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
}

// CreateAttribute<UE::Math::TVector<double>_> @ 1499604f0

FPCGMetadataAttribute<UE::Math::TVector<double>_> * __thiscall
UPCGMetadata::CreateAttribute<UE::Math::TVector<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,TVector<double> *param_2,bool param_3
          ,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
}

// CreateAttribute<FSoftClassPath> @ 1499607a0

FPCGMetadataAttribute<FSoftClassPath> * __thiscall
UPCGMetadata::CreateAttribute<FSoftClassPath>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,FSoftClassPath *param_2,bool param_3,
          bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FSoftClassPath> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<FSoftClassPath>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
}

// CreateAttribute<FSoftObjectPath> @ 149960a50

FPCGMetadataAttribute<FSoftObjectPath> * __thiscall
UPCGMetadata::CreateAttribute<FSoftObjectPath>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,FSoftObjectPath *param_2,bool param_3
          ,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
}

// CreateAttribute<FName> @ 149960d00

FPCGMetadataAttribute<FName> * __thiscall
UPCGMetadata::CreateAttribute<FName>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,FName *param_2,bool param_3,
          bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FName> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<FName>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<FName> *)0x0;
}

// CreateAttribute<FString> @ 149960fb0

FPCGMetadataAttribute<FString> * __thiscall
UPCGMetadata::CreateAttribute<FString>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,FString *param_2,bool param_3,
          bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FString> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<FString>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<FString> *)0x0;
}

// CreateAttribute<__int64> @ 149961260

FPCGMetadataAttribute<__int64> * __thiscall
UPCGMetadata::CreateAttribute<__int64>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,long64 *param_2,bool param_3,
          bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<__int64> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<__int64>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<__int64> *)0x0;
}

// CreateAttribute<bool> @ 149961510

FPCGMetadataAttribute<bool> * __thiscall
UPCGMetadata::CreateAttribute<bool>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,bool *param_2,bool param_3,
          bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<bool> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<bool>
                       (this_00,param_1->Name,param_2,param_3,param_4);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<bool> *)0x0;
}

// FindOrCreateAttribute<double> @ 14997bf10

FPCGMetadataAttribute<double> * __thiscall
UPCGMetadata::FindOrCreateAttribute<double>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,double *param_2,bool param_3,
          bool param_4,bool param_5)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<double> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::FindOrCreateAttribute<double>
                       (this_00,param_1->Name,param_2,param_3,param_4,param_5);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<double> *)0x0;
}

// FindOrCreateAttribute<UE::Math::TVector4<double>_> @ 14997bf90

FPCGMetadataAttribute<UE::Math::TVector4<double>_> * __thiscall
UPCGMetadata::FindOrCreateAttribute<UE::Math::TVector4<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,TVector4<double> *param_2,
          bool param_3,bool param_4,bool param_5)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector4<double>_>
                       (this_00,param_1->Name,param_2,param_3,param_4,param_5);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
}

// FindOrCreateAttribute<UE::Math::TVector<double>_> @ 14997c010

FPCGMetadataAttribute<UE::Math::TVector<double>_> * __thiscall
UPCGMetadata::FindOrCreateAttribute<UE::Math::TVector<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,TVector<double> *param_2,bool param_3
          ,bool param_4,bool param_5)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector<double>_>
                       (this_00,param_1->Name,param_2,param_3,param_4,param_5);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
}

// FindOrCreateAttribute<FName> @ 14997c090

FPCGMetadataAttribute<FName> * __thiscall
UPCGMetadata::FindOrCreateAttribute<FName>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,FName *param_2,bool param_3,
          bool param_4,bool param_5)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FName> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::FindOrCreateAttribute<FName>
                       (this_00,param_1->Name,param_2,param_3,param_4,param_5);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<FName> *)0x0;
}

// FindOrCreateAttribute<FString> @ 14997c110

FPCGMetadataAttribute<FString> * __thiscall
UPCGMetadata::FindOrCreateAttribute<FString>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,FString *param_2,bool param_3,
          bool param_4,bool param_5)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FString> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::FindOrCreateAttribute<FString>
                       (this_00,param_1->Name,param_2,param_3,param_4,param_5);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<FString> *)0x0;
}

// FindOrCreateAttribute<bool> @ 14997c190

FPCGMetadataAttribute<bool> * __thiscall
UPCGMetadata::FindOrCreateAttribute<bool>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,bool *param_2,bool param_3,
          bool param_4,bool param_5)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<bool> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::FindOrCreateAttribute<bool>
                       (this_00,param_1->Name,param_2,param_3,param_4,param_5);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<bool> *)0x0;
}

// GetConstTypedAttribute<int> @ 1499a6eb0

FPCGMetadataAttribute<int> * __thiscall
UPCGMetadata::GetConstTypedAttribute<int>(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<int> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<int> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<int> *)0x0) || ((short)pFVar1->_padding_ != 2)) {
    pFVar1 = (FPCGMetadataAttribute<int> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<float> @ 1499a6ef0

FPCGMetadataAttribute<float> * __thiscall
UPCGMetadata::GetConstTypedAttribute<float>(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<float> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<float> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<float> *)0x0) || ((short)pFVar1->_padding_ != 0)) {
    pFVar1 = (FPCGMetadataAttribute<float> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<double> @ 1499a6f60

FPCGMetadataAttribute<double> * __thiscall
UPCGMetadata::GetConstTypedAttribute<double>(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<double> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<double> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<double> *)0x0) || ((short)pFVar1->_padding_ != 1)) {
    pFVar1 = (FPCGMetadataAttribute<double> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TQuat<double>_> @ 1499a6fa0

FPCGMetadataAttribute<UE::Math::TQuat<double>_> * __thiscall
UPCGMetadata::GetConstTypedAttribute<UE::Math::TQuat<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) ||
     (*(short *)&pFVar1->field_0x70 != 7)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TRotator<double>_> @ 1499a6fe0

FPCGMetadataAttribute<UE::Math::TRotator<double>_> * __thiscall
UPCGMetadata::GetConstTypedAttribute<UE::Math::TRotator<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) ||
     ((short)pFVar1->_padding_ != 0xb)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TTransform<double>_> @ 1499a7020

FPCGMetadataAttribute<UE::Math::TTransform<double>_> * __thiscall
UPCGMetadata::GetConstTypedAttribute<UE::Math::TTransform<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)GetConstAttribute(this,&local_28)
  ;
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) ||
     (*(short *)&pFVar1->field_0x70 != 8)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TVector2<double>_> @ 1499a7060

FPCGMetadataAttribute<UE::Math::TVector2<double>_> * __thiscall
UPCGMetadata::GetConstTypedAttribute<UE::Math::TVector2<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) ||
     ((short)pFVar1->_padding_ != 4)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TVector4<double>_> @ 1499a70a0

FPCGMetadataAttribute<UE::Math::TVector4<double>_> * __thiscall
UPCGMetadata::GetConstTypedAttribute<UE::Math::TVector4<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) ||
     (*(short *)&pFVar1->field_0x70 != 6)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TVector<double>_> @ 1499a70e0

FPCGMetadataAttribute<UE::Math::TVector<double>_> * __thiscall
UPCGMetadata::GetConstTypedAttribute<UE::Math::TVector<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) ||
     ((short)pFVar1->_padding_ != 5)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<FSoftClassPath> @ 1499a7120

FPCGMetadataAttribute<FSoftClassPath> * __thiscall
UPCGMetadata::GetConstTypedAttribute<FSoftClassPath>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<FSoftClassPath> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<FSoftClassPath> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<FSoftClassPath> *)0x0) || ((short)pFVar1->_padding_ != 0xe))
  {
    pFVar1 = (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<FSoftObjectPath> @ 1499a7160

FPCGMetadataAttribute<FSoftObjectPath> * __thiscall
UPCGMetadata::GetConstTypedAttribute<FSoftObjectPath>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<FSoftObjectPath> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) || ((short)pFVar1->_padding_ != 0xd)
     ) {
    pFVar1 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<FName> @ 1499a71a0

FPCGMetadataAttribute<FName> * __thiscall
UPCGMetadata::GetConstTypedAttribute<FName>(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<FName> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<FName> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<FName> *)0x0) || ((short)pFVar1->_padding_ != 0xc)) {
    pFVar1 = (FPCGMetadataAttribute<FName> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<FString> @ 1499a71e0

FPCGMetadataAttribute<FString> * __thiscall
UPCGMetadata::GetConstTypedAttribute<FString>(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<FString> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<FString> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<FString> *)0x0) || ((short)pFVar1->_padding_ != 9)) {
    pFVar1 = (FPCGMetadataAttribute<FString> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<__int64> @ 1499a7220

FPCGMetadataAttribute<__int64> * __thiscall
UPCGMetadata::GetConstTypedAttribute<__int64>(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<__int64> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<__int64> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<__int64> *)0x0) || ((short)pFVar1->_padding_ != 3)) {
    pFVar1 = (FPCGMetadataAttribute<__int64> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<bool> @ 1499a7260

FPCGMetadataAttribute<bool> * __thiscall
UPCGMetadata::GetConstTypedAttribute<bool>(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<bool> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<bool> *)GetConstAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<bool> *)0x0) || ((short)pFVar1->_padding_ != 10)) {
    pFVar1 = (FPCGMetadataAttribute<bool> *)0x0;
  }
  return pFVar1;
}

// FindOrCreateAttribute<float> @ 149c412d0

FPCGMetadataAttribute<float> * __thiscall
UPCGMetadata::FindOrCreateAttribute<float>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,float *param_2,bool param_3,
          bool param_4,bool param_5)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<float> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::FindOrCreateAttribute<float>
                       (this_00,param_1->Name,param_2,param_3,param_4,param_5);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<float> *)0x0;
}

// GetMutableTypedAttribute<UE::Math::TTransform<double>_> @ 149c43440

FPCGMetadataAttribute<UE::Math::TTransform<double>_> * __thiscall
UPCGMetadata::GetMutableTypedAttribute<UE::Math::TTransform<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
           GetMutableAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) ||
     (*(short *)&pFVar1->field_0x70 != 8)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
  }
  return pFVar1;
}

// FindOrCreateAttribute<UE::Math::TVector2<double>_> @ 149d283e0

FPCGMetadataAttribute<UE::Math::TVector2<double>_> * __thiscall
UPCGMetadata::FindOrCreateAttribute<UE::Math::TVector2<double>_>
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,TVector2<double> *param_2,
          bool param_3,bool param_4,bool param_5)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar1;
  
  this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector2<double>_>
                       (this_00,param_1->Name,param_2,param_3,param_4,param_5);
    return pFVar1;
  }
  return (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
}

// StaticClass @ 149d73df0

UClass * __cdecl UPCGMetadata::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadata.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadata",&Z_Registration_Info_UClass_UPCGMetadata.InnerSingleton
               ,StaticRegisterNativesUPCGMetadata,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGMetadata>,InternalVTableHelperCtorCaller<UPCGMetadata>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadata.InnerSingleton;
}

// WithConstMetadataDomain<FPCGMetadataAttributeBase_const_*_(__cdecl_FPCGMetadataDomain::*)(FName)const_,FName_&> @ 149e313c0

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttributeBase * __thiscall
UPCGMetadata::
WithConstMetadataDomain<FPCGMetadataAttributeBase_const_*_(__cdecl_FPCGMetadataDomain::*)(FName)const_,FName_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_763ef17e param_2,FName *param_3)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  FPCGMetadataAttributeBase *pFVar2;
  longlong *plVar3;
  FString local_18;
  
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,param_1);
  plVar3 = (longlong *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e31413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FPCGMetadataAttributeBase *)(*(code *)param_2)(*plVar3,*param_3);
    return pFVar2;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<class_FPCGMetadataAttributeBase_const*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase_const*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (FPCGMetadataAttributeBase *)0x0;
}

// WithConstMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64,int>,TBitArray<FDefaultBitArrayAllocator>_const_*)const_,TArrayView<__int64,int>_&,TBitArray<FDefaultBitArrayAllocator>_const_*_&> @ 149e31480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::
WithConstMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64,int>,TBitArray<FDefaultBitArrayAllocator>_const_*)const_,TArrayView<__int64,int>_&,TBitArray<FDefaultBitArrayAllocator>_const_*_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_a6e0b78c param_2,
          TArrayView<__int64,int> *param_3,TBitArray<FDefaultBitArrayAllocator> **param_4)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  longlong *plVar2;
  FString local_18;
  
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,param_1);
  plVar2 = (longlong *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
    local_18.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_3->DataPtr;
    local_18.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
    local_18.Data.ArrayNum = param_3->ArrayNum;
    local_18.Data.ArrayMax = *(int *)&param_3->field_0xc;
    (*(code *)param_2)(*plVar2,&local_18,*param_4);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64,int>,TBitArray<FDefaultBitArrayAllocator>_const*___ptr64)const___ptr64,TArrayView<__int64,int>&___ptr64,TBitArray<class_FDefaultBitArrayAllocator>_const*___ptr64&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64,int>,TBitArray<FDefaultBitArrayAllocator>_const*___ptr64)const___ptr64,TArrayView<__int64,int>&___ptr64,TBitArray<class_FDefaultBitArrayAllocator>_const*___ptr64&___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                         local_18.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                                     local_18.Data.AllocatorInstance.Data._0_4_));
    }
  }
  return;
}

// WithConstMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(void)const_> @ 149e31550

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
UPCGMetadata::WithConstMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(void)const_>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_1ba0799c param_2)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  long64 lVar2;
  longlong *plVar3;
  FString local_18;
  
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,param_1);
  plVar3 = (longlong *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e31593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*(code *)param_2)();
    return lVar2;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(void)const___ptr64>(FPCGMetadataDomainID_const&___ptr64,__int64_(__cdecl_FPCGMetadataDomain::*)(void)const___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// WithConstMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(__int64)const_,__int64_&> @ 149e31600

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
UPCGMetadata::
WithConstMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(__int64)const_,__int64_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_08764c2f param_2,long64 *param_3)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  long64 lVar2;
  longlong *plVar3;
  FString local_18;
  
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,param_1);
  plVar3 = (longlong *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e31653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*(code *)param_2)(*plVar3,*param_3);
    return lVar2;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(__int64)const___ptr64,__int64&___ptr64>(FPCGMetadataDomainID_const&___ptr64,__int64_(__cdecl_FPCGMetadataDomain::*)(__int64)const___ptr64,__int64&___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// WithConstMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(FName)const_,FName_&> @ 149e316c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGMetadata::WithConstMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(FName)const_,FName_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_cf5ee9ed param_2,FName *param_3)

{
  undefined1 uVar1;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar2;
  longlong *plVar3;
  FString local_18;
  
  pTVar2 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,param_1);
  plVar3 = (longlong *)&pTVar2->field_0x10;
  if (pTVar2 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e31713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_2)(*plVar3,*param_3);
    return (bool)uVar1;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// WithMetadataDomain<TArray<__int64,TSizedDefaultAllocator<32>_>_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64_const_,int>),TArrayView<__int64_const_,int>_&> @ 149e31780

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMetadata::
WithMetadataDomain<TArray<__int64,TSizedDefaultAllocator<32>_>_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64_const_,int>),TArrayView<__int64_const_,int>_&>
          (UPCGMetadata *this,TArray<__int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGMetadataDomainID *param_1,pmf_92d85ecd param_2,TArrayView<__int64_const_,int> *param_3
          )

{
  FPCGMetadataDomain *pFVar1;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar1 = FindOrCreateMetadataDomain(this,param_1), pFVar1 != (FPCGMetadataDomain *)0x0)) {
    local_18.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_3->DataPtr;
    local_18.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
    local_18.Data.ArrayNum = param_3->ArrayNum;
    local_18.Data.ArrayMax = *(int *)&param_3->field_0xc;
    (*(code *)param_2)(pFVar1,__return_storage_ptr__,&local_18);
    return __return_storage_ptr__;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_TArray<__int64,TSizedDefaultAllocator<32>_>_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64_const_,int>)___ptr64,TArrayView<__int64_const_,int>&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_TArray<__int64,TSizedDefaultAllocator<32>_>_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64_const_,int>)___ptr64,TArrayView<__int64_const_,int>&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                         local_18.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                                     local_18.Data.AllocatorInstance.Data._0_4_));
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// WithMetadataDomain<FPCGMetadataAttributeBase_*_(__cdecl_FPCGMetadataDomain::*)(FName),FName_&> @ 149e31850

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttributeBase * __thiscall
UPCGMetadata::
WithMetadataDomain<FPCGMetadataAttributeBase_*_(__cdecl_FPCGMetadataDomain::*)(FName),FName_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_33ca734a param_2,FName *param_3)

{
  FPCGMetadataDomain *pFVar1;
  FPCGMetadataAttributeBase *pFVar2;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar1 = FindOrCreateMetadataDomain(this,param_1), pFVar1 != (FPCGMetadataDomain *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e3188f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FPCGMetadataAttributeBase *)(*(code *)param_2)(pFVar1,*param_3);
    return pFVar2;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (FPCGMetadataAttributeBase *)0x0;
}

// WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64_&),__int64_&> @ 149e31900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64_&),__int64_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_7f2627e7 param_2,long64 *param_3)

{
  FPCGMetadataDomain *pFVar1;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar1 = FindOrCreateMetadataDomain(this,param_1), pFVar1 != (FPCGMetadataDomain *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e3193f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2)(pFVar1,param_3);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64)___ptr64,__int64&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64)___ptr64,__int64&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64_&,TArrayView<TTuple<__int64,float>,int>_const_&,FPCGMetadataDomain_const_*),__int64_&,TArrayView<TTuple<__int64,float>,int>_const_&,FPCGMetadataDomain_const_*> @ 149e319b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::
WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64_&,TArrayView<TTuple<__int64,float>,int>_const_&,FPCGMetadataDomain_const_*),__int64_&,TArrayView<TTuple<__int64,float>,int>_const_&,FPCGMetadataDomain_const_*>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_4c5f1454 param_2,long64 *param_3,
          TArrayView<TTuple<__int64,float>,int> *param_4,FPCGMetadataDomain **param_5)

{
  FPCGMetadataDomain *pFVar1;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar1 = FindOrCreateMetadataDomain(this,param_1), pFVar1 != (FPCGMetadataDomain *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e319fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2)(pFVar1,param_3,param_4,*param_5);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,TArrayView<TTuple<__int64,float>,int>_const&___ptr64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,TArrayView<struct_TTuple<__int64,float>,int>_const&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,TArrayView<TTuple<__int64,float>,int>_const&___ptr64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,TArrayView<TTuple<__int64,float>,int>_const&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_>_const_&),TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_>_const_&> @ 149e31a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::
WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_>_const_&),TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_>_const_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_fbedb403 param_2,
          TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_> *param_3)

{
  FPCGMetadataDomain *pFVar1;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar1 = FindOrCreateMetadataDomain(this,param_1), pFVar1 != (FPCGMetadataDomain *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e31a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2)(pFVar1,param_3);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64,TArray<struct_TTuple<__int64,__int64>,class_TSizedDefaultAllocator<32>_>_const&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64,TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64_*,int>),TArrayView<__int64_*,int>_&> @ 149e31b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::
WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64_*,int>),TArrayView<__int64_*,int>_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_1e128c42 param_2,
          TArrayView<__int64_*,int> *param_3)

{
  FPCGMetadataDomain *pFVar1;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar1 = FindOrCreateMetadataDomain(this,param_1), pFVar1 != (FPCGMetadataDomain *)0x0)) {
    local_18.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&param_3->DataPtr;
    local_18.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
    local_18.Data.ArrayNum = param_3->ArrayNum;
    local_18.Data.ArrayMax = *(int *)&param_3->field_0xc;
    (*(code *)param_2)(pFVar1,&local_18);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64*___ptr64,int>)___ptr64,TArrayView<__int64*___ptr64,int>&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64*___ptr64,int>)___ptr64,TArrayView<__int64*___ptr64,int>&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                         local_18.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_18.Data.AllocatorInstance.Data._4_4_,
                                     local_18.Data.AllocatorInstance.Data._0_4_));
    }
  }
  return;
}

// WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(FName),FName_&> @ 149e31bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(FName),FName_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_a3074a3d param_2,FName *param_3)

{
  FPCGMetadataDomain *pFVar1;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar1 = FindOrCreateMetadataDomain(this,param_1), pFVar1 != (FPCGMetadataDomain *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e31bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2)(pFVar1,*param_3);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const_*,FPCGMetadataDomain_const_*,__int64,FPCGMetadataDomain_const_*,FPCGMetadataDomain_const_*,__int64_&,enum_EPCGMetadataOp),__int64_&,FPCGMetadataDomain_const_*_&,FPCGMetadataDomain_const_*_&,__int64_&,FPCGMetadataDomain_const_*_&,FPCGMetadataDomain_const_*_&,__int64_&,enum_EPCGMetadataOp_&> @ 149e31c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::
WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const_*,FPCGMetadataDomain_const_*,__int64,FPCGMetadataDomain_const_*,FPCGMetadataDomain_const_*,__int64_&,enum_EPCGMetadataOp),__int64_&,FPCGMetadataDomain_const_*_&,FPCGMetadataDomain_const_*_&,__int64_&,FPCGMetadataDomain_const_*_&,FPCGMetadataDomain_const_*_&,__int64_&,enum_EPCGMetadataOp_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_5e51f17f param_2,long64 *param_3,
          FPCGMetadataDomain **param_4,FPCGMetadataDomain **param_5,long64 *param_6,
          FPCGMetadataDomain **param_7,FPCGMetadataDomain **param_8,long64 *param_9,
          EPCGMetadataOp *param_10)

{
  FPCGMetadataDomain *pFVar1;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar1 = FindOrCreateMetadataDomain(this,param_1), pFVar1 != (FPCGMetadataDomain *)0x0)) {
    (*(code *)param_2)(pFVar1,*param_3,*param_4,*param_5,*param_6,*param_7,*param_8,param_9,
                       *param_10);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const*___ptr64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,EPCGMetadataOp)___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,__int64&___ptr64,EPCGMetadataOp&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const*___ptr64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,EPCGMetadataOp)___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,__int64&___ptr64,EPCGMetadataOp&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const_*,float,bool,__int64_&),__int64_&,FPCGMetadataDomain_const_*,float_&,bool_&,__int64_&> @ 149e31d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::
WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const_*,float,bool,__int64_&),__int64_&,FPCGMetadataDomain_const_*,float_&,bool_&,__int64_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_cd09143f param_2,long64 *param_3,
          FPCGMetadataDomain **param_4,float *param_5,bool *param_6,long64 *param_7)

{
  FPCGMetadataDomain *pFVar1;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar1 = FindOrCreateMetadataDomain(this,param_1), pFVar1 != (FPCGMetadataDomain *)0x0)) {
    (*(code *)param_2)(pFVar1,*param_3,*param_4,*param_5,*param_6,param_7);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const*___ptr64,float,bool,__int64&___ptr64)___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,float&___ptr64,bool&___ptr64,__int64&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const*___ptr64,float,bool,__int64&___ptr64)___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,float&___ptr64,bool&___ptr64,__int64&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WithMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(void)> @ 149e31e50

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
UPCGMetadata::WithMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(void)>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_47c70ac3 param_2)

{
  FPCGMetadataDomain *pFVar1;
  long64 lVar2;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar1 = FindOrCreateMetadataDomain(this,param_1), pFVar1 != (FPCGMetadataDomain *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e31e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*(code *)param_2)(pFVar1);
    return lVar2;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(void)___ptr64>(FPCGMetadataDomainID_const&___ptr64,__int64_(__cdecl_FPCGMetadataDomain::*)(void)___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// WithMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(__int64),__int64_&> @ 149e31ee0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
UPCGMetadata::WithMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(__int64),__int64_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_2aac67f2 param_2,long64 *param_3)

{
  FPCGMetadataDomain *pFVar1;
  long64 lVar2;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar1 = FindOrCreateMetadataDomain(this,param_1), pFVar1 != (FPCGMetadataDomain *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e31f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*(code *)param_2)(pFVar1,*param_3);
    return lVar2;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(__int64)___ptr64,__int64&___ptr64>(FPCGMetadataDomainID_const&___ptr64,__int64_(__cdecl_FPCGMetadataDomain::*)(__int64)___ptr64,__int64&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64_&,__int64,FPCGMetadataDomain_const_*,__int64,FPCGMetadataDomain_const_*),__int64_&,__int64_&,FPCGMetadataDomain_const_*,__int64_&,FPCGMetadataDomain_const_*> @ 149e31f90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGMetadata::
WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64_&,__int64,FPCGMetadataDomain_const_*,__int64,FPCGMetadataDomain_const_*),__int64_&,__int64_&,FPCGMetadataDomain_const_*,__int64_&,FPCGMetadataDomain_const_*>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_54996306 param_2,long64 *param_3,
          long64 *param_4,FPCGMetadataDomain **param_5,long64 *param_6,FPCGMetadataDomain **param_7)

{
  undefined1 uVar1;
  FPCGMetadataDomain *pFVar2;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar2 = FindOrCreateMetadataDomain(this,param_1), pFVar2 != (FPCGMetadataDomain *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e31fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_2)(pFVar2,param_3,*param_4,*param_5);
    return (bool)uVar1;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(FName,short),FName_&,short_&> @ 149e32070

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(FName,short),FName_&,short_&>
          (UPCGMetadata *this,FPCGMetadataDomainID *param_1,pmf_896c63cd param_2,FName *param_3,
          short *param_4)

{
  undefined1 uVar1;
  FPCGMetadataDomain *pFVar2;
  FString local_18;
  
  if ((param_1->Flag != Invalid) &&
     (pFVar2 = FindOrCreateMetadataDomain(this,param_1), pFVar2 != (FPCGMetadataDomain *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000149e320b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)param_2)(pFVar2,*param_3,*param_4);
    return (bool)uVar1;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&param_1->DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(FName,short)___ptr64,FName&___ptr64,short&___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(FName,short)___ptr64,FName&___ptr64,short&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// UPCGMetadata @ 149e36280

UPCGMetadata * __thiscall UPCGMetadata::UPCGMetadata(UPCGMetadata *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGMetadata__6B_;
  (this->Parent).field0_0x0.DebugPtr = (UPCGMetadata *)0x0;
  *(undefined8 *)&(this->OtherParents).Elements = 0;
  *(undefined8 *)&(this->OtherParents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OtherParents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OtherParents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OtherParents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OtherParents).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->OtherParents).Elements.field_0x30 = 0xffffffff;
  (this->OtherParents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OtherParents).HashSize = 0;
  this->DefaultDomain = PCGMetadataDomainID::Default;
  *(undefined8 *)&this->MetadataDomains = 0;
  *(undefined8 *)&(this->MetadataDomains).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataDomains).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataDomains).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataDomains).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataDomains).field_0x34 = 0;
  *(undefined4 *)&(this->MetadataDomains).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetadataDomains).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataDomains).field_0x48 = 0;
  (this->MetadataDomainsSpinLock).bFlag = (atomic<bool>)0x0;
  return this;
}

// UPCGMetadata @ 149e36330

UPCGMetadata * __thiscall UPCGMetadata::UPCGMetadata(UPCGMetadata *this,FObjectInitializer *param_1)

{
  FPCGMetadataDomainID local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGMetadata__6B_;
  (this->Parent).field0_0x0.DebugPtr = (UPCGMetadata *)0x0;
  *(undefined8 *)&(this->OtherParents).Elements = 0;
  *(undefined8 *)&(this->OtherParents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OtherParents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OtherParents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OtherParents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OtherParents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OtherParents).Elements.field_0x34 = 0;
  (this->OtherParents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OtherParents).HashSize = 0;
  this->DefaultDomain = PCGMetadataDomainID::Default;
  *(undefined8 *)&this->MetadataDomains = 0;
  *(undefined8 *)&(this->MetadataDomains).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataDomains).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataDomains).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataDomains).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataDomains).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataDomains).field_0x34 = 0;
  *(undefined8 *)&(this->MetadataDomains).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataDomains).field_0x48 = 0;
  (this->MetadataDomainsSpinLock).bFlag = (atomic<bool>)0x0;
  local_18 = PCGMetadataDomainID::Default;
  SetupDomain(this,&local_18,true);
  CreateMetadataDomain_Unsafe(this,&PCGMetadataDomainID::Default);
  return this;
}

// ~UPCGMetadata @ 149e37710

void __thiscall UPCGMetadata::~UPCGMetadata(UPCGMetadata *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UPCGMetadata__6B_;
  *(undefined4 *)&(this->MetadataDomains).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetadataDomains).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetadataDomains);
  (this->OtherParents).HashSize = 0;
  FVar2 = (this->OtherParents).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OtherParents).Elements);
  UObject::~UObject((UObject *)this);
  return;
}

// AccumulatePointWeightedAttributes @ 149e463d0

void __thiscall
UPCGMetadata::AccumulatePointWeightedAttributes
          (UPCGMetadata *this,FPCGPoint *param_1,UPCGMetadata *param_2,float param_3,bool param_4,
          FPCGPoint *param_5)

{
  AccumulateWeightedAttributes
            (this,param_1->MetadataEntry,param_2,param_3,param_4,&param_5->MetadataEntry);
  return;
}

// AccumulateWeightedAttributes @ 149e467e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::AccumulateWeightedAttributes
          (UPCGMetadata *this,long64 param_1,UPCGMetadata *param_2,float param_3,bool param_4,
          long64 *param_5)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  FPCGMetadataDomain *pFVar2;
  FPCGMetadataDomain *pFVar3;
  FString local_28 [2];
  
  if (param_2 == (UPCGMetadata *)0x0) {
    pFVar3 = (FPCGMetadataDomain *)0x0;
  }
  else {
    pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)&param_2->MetadataDomains,&PCGMetadataDomainID::Default);
    pFVar3 = (FPCGMetadataDomain *)0x0;
    pFVar2 = (FPCGMetadataDomain *)&pTVar1->field_0x10;
    if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      pFVar2 = pFVar3;
    }
    if (pFVar2 != (FPCGMetadataDomain *)0x0) {
      pFVar3 = (FPCGMetadataDomain *)pFVar2->_padding_;
    }
  }
  if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
     (pFVar2 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
     pFVar2 == (FPCGMetadataDomain *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,local_28);
      UE::Logging::Private::BasicLog<2>
                (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const*___ptr64,float,bool,__int64&___ptr64)___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,float&___ptr64,bool&___ptr64,__int64&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const*___ptr64,float,bool,__int64&___ptr64)___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,float&___ptr64,bool&___ptr64,__int64&___ptr64)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FPCGMetadataDomain::AccumulateWeightedAttributes(pFVar2,param_1,pFVar3,param_3,param_4,param_5);
  }
  return;
}

// AccumulateWeightedAttributesByKey @ 149e468e0

void __thiscall
UPCGMetadata::AccumulateWeightedAttributesByKey
          (UPCGMetadata *this,long64 param_1,UPCGMetadata *param_2,float param_3,bool param_4,
          long64 param_5,long64 *param_6)

{
  *param_6 = param_5;
  AccumulateWeightedAttributes(this,param_1,param_2,param_3,param_4,param_6);
  return;
}

// AddAttribute @ 149e469c0

void __thiscall
UPCGMetadata::AddAttribute
          (UPCGMetadata *this,UPCGMetadata *param_1,FPCGAttributeIdentifier *param_2)

{
  UPCGMetadata *pUVar1;
  bool bVar2;
  FPCGMetadataAttributeBase *pFVar3;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  FPCGAttributeIdentifier local_38;
  
  if (param_1 != (UPCGMetadata *)0x0) {
    local_38.Name = param_2->Name;
    local_38.MetadataDomain.Flag = (param_2->MetadataDomain).Flag;
    local_38.MetadataDomain._1_3_ = *(undefined3 *)&(param_2->MetadataDomain).field_0x1;
    local_38.MetadataDomain.CustomFlag = (param_2->MetadataDomain).CustomFlag;
    local_38.MetadataDomain.DebugName = (param_2->MetadataDomain).DebugName;
    bVar2 = HasAttribute(param_1,&local_38);
    if (bVar2) {
      local_38.Name = param_2->Name;
      local_38.MetadataDomain.Flag = (param_2->MetadataDomain).Flag;
      local_38.MetadataDomain._1_3_ = *(undefined3 *)&(param_2->MetadataDomain).field_0x1;
      local_38.MetadataDomain.CustomFlag = (param_2->MetadataDomain).CustomFlag;
      local_38.MetadataDomain.DebugName = (param_2->MetadataDomain).DebugName;
      bVar2 = HasAttribute(this,&local_38);
      if (!bVar2) {
        pUVar1 = (this->Parent).field0_0x0.DebugPtr;
        local_38.Name = param_2->Name;
        local_38.MetadataDomain.Flag = (param_2->MetadataDomain).Flag;
        local_38.MetadataDomain._1_3_ = *(undefined3 *)&(param_2->MetadataDomain).field_0x1;
        local_38.MetadataDomain.CustomFlag = (param_2->MetadataDomain).CustomFlag;
        local_38.MetadataDomain.DebugName = (param_2->MetadataDomain).DebugName;
        pFVar3 = GetConstAttribute(param_1,&local_38);
        local_38.Name = param_2->Name;
        local_38.MetadataDomain.Flag = (param_2->MetadataDomain).Flag;
        local_38.MetadataDomain._1_3_ = *(undefined3 *)&(param_2->MetadataDomain).field_0x1;
        local_38.MetadataDomain.CustomFlag = (param_2->MetadataDomain).CustomFlag;
        local_38.MetadataDomain.DebugName = (param_2->MetadataDomain).DebugName;
        pFVar3 = CopyAttribute(this,pFVar3,&local_38,
                               pUVar1 != (UPCGMetadata *)0x0 && pUVar1 == param_1,false,false);
        pUVar1 = (this->Parent).field0_0x0.DebugPtr;
        if (((pUVar1 == (UPCGMetadata *)0x0) || (pUVar1 != param_1)) &&
           (pFVar3 != (FPCGMetadataAttributeBase *)0x0)) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_res10[0] = (FWeakObjectPtr)param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_res10);
          TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>
                    (&this->OtherParents,
                     (TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr> *)local_res10,
                     (bool *)&local_res20);
        }
      }
    }
  }
  return;
}

// AddAttributes @ 149e47160

void __thiscall
UPCGMetadata::AddAttributes(UPCGMetadata *this,FPCGMetadataInitializeParams *param_1)

{
  UPCGMetadata *pUVar1;
  TObjectPtr<UPCGMetadata_const_>_u_0 TVar2;
  bool bVar3;
  bool local_res10 [8];
  TObjectPtr<UPCGMetadata_const_>_u_0 local_res18;
  FWeakObjectPtr local_res20;
  <lambda_1> local_28;
  
  if (param_1->Parent != (UPCGMetadata *)0x0) {
    local_28.bAddSucceeded = local_res10;
    local_res10[0] = false;
    local_28.__this = this;
    local_28.InParams = param_1;
    ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::AddAttributes_::__l2::<lambda_1>_>
              (param_1->Parent,&local_28);
    if (local_res10[0] != false) {
      pUVar1 = (this->Parent).field0_0x0.DebugPtr;
      TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)param_1->Parent;
      if (pUVar1 == (UPCGMetadata *)0x0) {
        bVar3 = TVar2.DebugPtr == (UPCGMetadata *)0x0;
      }
      else {
        bVar3 = pUVar1 == TVar2.DebugPtr;
      }
      if (!bVar3) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2.DebugPtr != (UPCGMetadata *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_res18.ObjectPtr.field0_0x0 = TVar2.ObjectPtr.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2.DebugPtr != (UPCGMetadata *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res18);
        TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Emplace<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>
                  (&this->OtherParents,
                   (TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr> *)&local_res18.ObjectPtr,
                   (bool *)&local_res20);
      }
    }
  }
  return;
}

// AddAttributes @ 149e47240

void __thiscall UPCGMetadata::AddAttributes(UPCGMetadata *this,UPCGMetadata *param_1)

{
  FPCGMetadataInitializeParams local_38;
  
  if ((param_1 != (UPCGMetadata *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    local_38.DomainMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.DomainMapping.ArrayNum = 0;
    local_38.DomainMapping.ArrayMax = 0;
    local_38.DomainInitializeParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.DomainInitializeParams.ArrayNum = 0;
    local_38.DomainInitializeParams.ArrayMax = 0;
    local_38.Parent = param_1;
    AddAttributes(this,&local_38);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_38.DomainInitializeParams.AllocatorInstance.Data,
               local_38.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_38.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_38.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_38.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DomainMapping.AllocatorInstance.Data);
    }
  }
  return;
}

// AddAttributesFiltered @ 149e472b0

void __thiscall
UPCGMetadata::AddAttributesFiltered
          (UPCGMetadata *this,UPCGMetadata *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          EPCGMetadataFilterMode param_3,EPCGStringMatchingOperator param_4)

{
  code *pcVar1;
  bool bVar2;
  FPCGMetadataInitializeParams local_38;
  
  if ((param_1 != (UPCGMetadata *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    FPCGMetadataInitializeParams::FPCGMetadataInitializeParams
              (&local_38,param_1,(TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0);
    if ((local_38.DomainInitializeParams.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38.DomainInitializeParams.AllocatorInstance.Data[0x68] = (FScriptContainerElement)param_3;
    local_38.DomainInitializeParams.AllocatorInstance.Data[0x69] = (FScriptContainerElement)param_4;
    if ((*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) &&
       (param_2 !=
        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
        (local_38.DomainInitializeParams.AllocatorInstance.Data + 0x18))) {
      TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>::
      Emplace<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&>
                ((TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *)
                 (local_38.DomainInitializeParams.AllocatorInstance.Data + 0x18),param_2);
    }
    AddAttributes(this,&local_38);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_38.DomainInitializeParams.AllocatorInstance.Data,
               local_38.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_38.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_38.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_38.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DomainMapping.AllocatorInstance.Data);
    }
  }
  return;
}

// AddDelayedEntries @ 149e476d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::AddDelayedEntries
          (UPCGMetadata *this,TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_> *param_1)

{
  FPCGMetadataDomain *this_00;
  FString local_18;
  
  if ((PCGMetadataDomainID::Default.Flag != Invalid) &&
     (this_00 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
     this_00 != (FPCGMetadataDomain *)0x0)) {
    FPCGMetadataDomain::AddDelayedEntries(this_00,param_1);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64,TArray<struct_TTuple<__int64,__int64>,class_TSizedDefaultAllocator<32>_>_const&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64,TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AddEntries @ 149e47c40

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMetadata::AddEntries
          (UPCGMetadata *this,TArray<__int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<__int64_const_,int> *param_1)

{
  FPCGMetadataDomain *this_00;
  TArrayView<__int64_const_,int> local_18;
  
  if ((PCGMetadataDomainID::Default.Flag != Invalid) &&
     (this_00 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
     this_00 != (FPCGMetadataDomain *)0x0)) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FPCGMetadataDomain::AddEntries(this_00,__return_storage_ptr__,&local_18);
    return __return_storage_ptr__;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_TArray<__int64,TSizedDefaultAllocator<32>_>_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64_const_,int>)___ptr64,TArrayView<__int64_const_,int>&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_TArray<__int64,TSizedDefaultAllocator<32>_>_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64_const_,int>)___ptr64,TArrayView<__int64_const_,int>&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.DataPtr != (long64 *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// AddEntriesInPlace @ 149e47fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::AddEntriesInPlace(UPCGMetadata *this,TArrayView<__int64_*,int> *param_1)

{
  FPCGMetadataDomain *this_00;
  TArrayView<__int64_*,int> local_18;
  
  if ((PCGMetadataDomainID::Default.Flag != Invalid) &&
     (this_00 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
     this_00 != (FPCGMetadataDomain *)0x0)) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FPCGMetadataDomain::AddEntriesInPlace(this_00,&local_18);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64*___ptr64,int>)___ptr64,TArrayView<__int64*___ptr64,int>&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64*___ptr64,int>)___ptr64,TArrayView<__int64*___ptr64,int>&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.DataPtr != (long64 **)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  return;
}

// AddEntry @ 149e48290

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UPCGMetadata::AddEntry(UPCGMetadata *this,long64 param_1)

{
  FPCGMetadataDomain *this_00;
  long64 lVar1;
  FString local_18;
  
  if ((PCGMetadataDomainID::Default.Flag != Invalid) &&
     (this_00 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
     this_00 != (FPCGMetadataDomain *)0x0)) {
    lVar1 = FPCGMetadataDomain::AddEntry(this_00,param_1);
    return lVar1;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(__int64)___ptr64,__int64&___ptr64>(FPCGMetadataDomainID_const&___ptr64,__int64_(__cdecl_FPCGMetadataDomain::*)(__int64)___ptr64,__int64&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// AddEntryPlaceholder @ 149e48400

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UPCGMetadata::AddEntryPlaceholder(UPCGMetadata *this)

{
  FPCGMetadataDomain *this_00;
  long64 lVar1;
  FString local_18;
  
  if ((PCGMetadataDomainID::Default.Flag != Invalid) &&
     (this_00 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
     this_00 != (FPCGMetadataDomain *)0x0)) {
    lVar1 = FPCGMetadataDomain::AddEntryPlaceholder(this_00);
    return lVar1;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(void)___ptr64>(FPCGMetadataDomainID_const&___ptr64,__int64_(__cdecl_FPCGMetadataDomain::*)(void)___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// AddToCrc @ 149e48f10

void __thiscall UPCGMetadata::AddToCrc(UPCGMetadata *this,FArchiveCrc32 *param_1,bool param_2)

{
  uint *puVar1;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *this_00;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar8;
  UPCGData *pUVar9;
  ForAnyElementType FVar10;
  FPCGMetadataDomainID *pFVar11;
  FIdentityFunctor FVar12;
  undefined1 local_res20 [8];
  undefined1 local_58 [4];
  uint local_54;
  TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> local_50;
  
  FVar12 = (FIdentityFunctor)(-1 < CpuChannel->Enabled);
  if ((bool)FVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId435,"UPCGMetadata::AddToCrc",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
               ,0x1b3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId435);
  }
  pUVar9 = (UPCGData *)this->_padding_;
  if (pUVar9 != (UPCGData *)0x0) {
    pUVar7 = Z_Construct_UClass_UPCGData_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) goto LAB_149e48fd4;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Data",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                     ,0x1b5,L"");
  pUVar9 = (UPCGData *)0x0;
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_149e48fd4:
  this_00 = &this->MetadataDomains;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  TMapBase<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
              *)this_00,&local_50);
  AlgoImpl::
  IntroSortInternal<FPCGMetadataDomainID,int,FIdentityFunctor,TDereferenceWrapper<FPCGMetadataDomainID,TLess<void>_>_>
            ((FPCGMetadataDomainID *)local_50.AllocatorInstance.Data,local_50.ArrayNum,FVar12,
             (TLess<void> *)local_58);
  iVar2 = local_50.ArrayNum;
  pFVar11 = (FPCGMetadataDomainID *)
            (local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 0x10);
  FVar10.Data = local_50.AllocatorInstance.Data;
  do {
    if (local_50.ArrayNum != iVar2) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FPCGMetadataDomainID,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if ((FPCGMetadataDomainID *)FVar10.Data == pFVar11) {
      if ((FPCGMetadataDomainID *)local_50.AllocatorInstance.Data != (FPCGMetadataDomainID *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      if ((bool)FVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if (((FPCGMetadataDomainID *)FVar10.Data)->Flag != Default) {
      pTVar8 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                       *)this_00,(FPCGMetadataDomainID *)FVar10.Data);
      if ((pTVar8 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar4 = (ulonglong *)param_1->_padding_;
      bVar6 = *(longlong *)&pTVar8->field_0x10 != 0;
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        local_54 = 0;
        if ((param_1->_padding_ & 1) == 0) {
          local_54 = (uint)(*(longlong *)&pTVar8->field_0x10 != 0);
        }
        (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_54,4);
        if (1 < local_54) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
        uVar3 = local_54;
        if ((param_1->_padding_ & 1) != 0) goto LAB_149e4910b;
      }
      else {
        uVar3 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
LAB_149e4910b:
        bVar6 = uVar3 != 0;
      }
      if (bVar6) {
        pTVar8 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                         *)this_00,(FPCGMetadataDomainID *)FVar10.Data);
        if ((pTVar8 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(longlong *)&pTVar8->field_0x10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FPCGMetadataDomain::AddToCrc
                  (*(FPCGMetadataDomain **)&pTVar8->field_0x10,param_1,pUVar9,param_2);
      }
    }
    FVar10.Data = FVar10.Data + 0x10;
  } while( true );
}

// BP_AddAttribute @ 149e4bed0

void __thiscall
UPCGMetadata::BP_AddAttribute(UPCGMetadata *this,UPCGMetadata *param_1,FName param_2)

{
  UPCGMetadata *pUVar1;
  undefined8 uVar2;
  FName FVar3;
  bool bVar4;
  FPCGMetadataAttributeBase *pFVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FPCGAttributeIdentifier local_68;
  FPCGAttributeIdentifier local_48;
  
  FVar3 = PCGMetadataDomainID::Default.DebugName;
  uVar2 = PCGMetadataDomainID::Default._0_8_;
  if (param_1 != (UPCGMetadata *)0x0) {
    local_68.MetadataDomain._0_8_ = PCGMetadataDomainID::Default._0_8_;
    local_68.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    local_68.Name = param_2;
    bVar4 = HasAttribute(param_1,&local_68);
    if (bVar4) {
      local_68.MetadataDomain._0_8_ = uVar2;
      local_68.MetadataDomain.DebugName = FVar3;
      local_68.Name = param_2;
      bVar4 = HasAttribute(this,&local_68);
      if (!bVar4) {
        pUVar1 = (this->Parent).field0_0x0.DebugPtr;
        local_48.MetadataDomain._0_8_ = uVar2;
        local_48.MetadataDomain.DebugName = FVar3;
        local_68.MetadataDomain._0_8_ = uVar2;
        local_68.MetadataDomain.DebugName = FVar3;
        local_68.Name = param_2;
        local_48.Name = param_2;
        pFVar5 = GetConstAttribute(param_1,&local_48);
        local_48.Name = local_68.Name;
        local_48.MetadataDomain.Flag = local_68.MetadataDomain.Flag;
        local_48.MetadataDomain._1_3_ = local_68.MetadataDomain._1_3_;
        local_48.MetadataDomain.CustomFlag = local_68.MetadataDomain.CustomFlag;
        local_48.MetadataDomain.DebugName = local_68.MetadataDomain.DebugName;
        pFVar5 = CopyAttribute(this,pFVar5,&local_48,
                               pUVar1 != (UPCGMetadata *)0x0 && pUVar1 == param_1,false,false);
        pUVar1 = (this->Parent).field0_0x0.DebugPtr;
        if (((pUVar1 == (UPCGMetadata *)0x0) || (pUVar1 != param_1)) &&
           (pFVar5 != (FPCGMetadataAttributeBase *)0x0)) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_res18.ObjectIndex = 0;
          local_res18.ObjectSerialNumber = 0;
          local_res10 = (FWeakObjectPtr)param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res10);
          TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>
                    (&this->OtherParents,
                     (TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr> *)&local_res10,
                     (bool *)&local_res18);
        }
      }
    }
  }
  return;
}

// BP_ClearAttribute @ 149e4c070

void __thiscall UPCGMetadata::BP_ClearAttribute(UPCGMetadata *this,FName param_1)

{
  FName local_28;
  FPCGMetadataDomainID aFStack_20 [2];
  
  aFStack_20[0] = PCGMetadataDomainID::Default;
  local_28 = param_1;
  WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(FName),FName_&>
            (this,aFStack_20,(pmf_a3074a3d)0x149e4ca60,&local_28);
  return;
}

// BP_CopyAttribute @ 149e4c0c0

void __thiscall
UPCGMetadata::BP_CopyAttribute(UPCGMetadata *this,UPCGMetadata *param_1,FName param_2,FName param_3)

{
  FPCGAttributeIdentifier local_28;
  
  local_28.MetadataDomain = PCGMetadataDomainID::Default;
  local_28.Name = param_2;
  CopyAttribute(this,param_1,&local_28,param_3);
  return;
}

// BP_CopyExistingAttribute @ 149e4c100

bool __thiscall
UPCGMetadata::BP_CopyExistingAttribute(UPCGMetadata *this,FName param_1,FName param_2,bool param_3)

{
  bool bVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.MetadataDomain = PCGMetadataDomainID::Default;
  local_28.Name = param_1;
  bVar1 = CopyExistingAttribute(this,&local_28,param_2,param_3);
  return bVar1;
}

// BP_DeleteAttribute @ 149e4c140

void __thiscall UPCGMetadata::BP_DeleteAttribute(UPCGMetadata *this,FName param_1)

{
  FName local_28;
  FPCGMetadataDomainID aFStack_20 [2];
  
  aFStack_20[0] = PCGMetadataDomainID::Default;
  local_28 = param_1;
  WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(FName),FName_&>
            (this,aFStack_20,(pmf_a3074a3d)0x149e54330,&local_28);
  return;
}

// BP_HasAttribute @ 149e4c190

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPCGMetadata::BP_HasAttribute(UPCGMetadata *this,FName param_1)

{
  bool bVar1;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar2;
  undefined8 *puVar3;
  FString local_38;
  FName local_28;
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_28 = param_1;
  pTVar2 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,&local_20);
  puVar3 = (undefined8 *)&pTVar2->field_0x10;
  if (pTVar2 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if ((puVar3 != (undefined8 *)0x0) && ((FPCGMetadataDomain *)*puVar3 != (FPCGMetadataDomain *)0x0))
  {
    bVar1 = FPCGMetadataDomain::HasAttribute((FPCGMetadataDomain *)*puVar3,param_1);
    return bVar1;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&local_20.DebugName,&local_38);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// BP_RenameAttribute @ 149e4c250

bool __thiscall UPCGMetadata::BP_RenameAttribute(UPCGMetadata *this,FName param_1,FName param_2)

{
  bool bVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.MetadataDomain = PCGMetadataDomainID::Default;
  local_28.Name = param_1;
  bVar1 = RenameAttribute(this,&local_28,param_2);
  return bVar1;
}

// ChangeAttributeType @ 149e4c9b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGMetadata::ChangeAttributeType(UPCGMetadata *this,FPCGAttributeIdentifier *param_1,short param_2)

{
  bool bVar1;
  FPCGMetadataDomain *this_00;
  FString local_18;
  
  if (((param_1->MetadataDomain).Flag != Invalid) &&
     (this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain),
     this_00 != (FPCGMetadataDomain *)0x0)) {
    bVar1 = FPCGMetadataDomain::ChangeAttributeType(this_00,param_1->Name,param_2);
    return bVar1;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&(param_1->MetadataDomain).DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(FName,short)___ptr64,FName&___ptr64,short&___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(FName,short)___ptr64,FName&___ptr64,short&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// ClearAttribute @ 149e4cae0

void __thiscall UPCGMetadata::ClearAttribute(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(FName),FName_&>
            (this,&param_1->MetadataDomain,(pmf_a3074a3d)0x149e4ca60,&param_1->Name);
  return;
}

// ComputePointWeightedAttribute @ 149e4da00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::ComputePointWeightedAttribute
          (UPCGMetadata *this,FPCGPoint *param_1,
          TArrayView<TTuple<FPCGPoint_const_*,float>,int> *param_2,UPCGMetadata *param_3)

{
  FPCGMetadataDomain *pFVar1;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar2;
  FPCGMetadataDomain *pFVar3;
  FPCGMetadataDomain *pFVar4;
  FString local_18;
  
  if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
     (pFVar1 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
     pFVar1 == (FPCGMetadataDomain *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_18);
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe40f0,
                 (FLogCategoryBase *)&LogPCG);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pTVar2 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)&param_3->MetadataDomains,&PCGMetadataDomainID::Default);
    pFVar4 = (FPCGMetadataDomain *)0x0;
    pFVar3 = (FPCGMetadataDomain *)&pTVar2->field_0x10;
    if (pTVar2 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      pFVar3 = pFVar4;
    }
    if (pFVar3 != (FPCGMetadataDomain *)0x0) {
      pFVar4 = (FPCGMetadataDomain *)pFVar3->_padding_;
    }
    PCGMetadataHelpers::ComputePointWeightedAttribute(pFVar1,param_1,param_2,pFVar4);
  }
  return;
}

// ComputeWeightedAttribute @ 149e4ddf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::ComputeWeightedAttribute
          (UPCGMetadata *this,long64 *param_1,TArrayView<TTuple<__int64,float>,int> *param_2,
          UPCGMetadata *param_3)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  FPCGMetadataDomain *pFVar2;
  FPCGMetadataDomain *pFVar3;
  FString local_18;
  
  if ((param_3 != (UPCGMetadata *)0x0) && (param_2->ArrayNum != 0)) {
    pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)&param_3->MetadataDomains,&PCGMetadataDomainID::Default);
    pFVar3 = (FPCGMetadataDomain *)0x0;
    pFVar2 = (FPCGMetadataDomain *)&pTVar1->field_0x10;
    if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      pFVar2 = pFVar3;
    }
    if (pFVar2 != (FPCGMetadataDomain *)0x0) {
      pFVar3 = (FPCGMetadataDomain *)pFVar2->_padding_;
    }
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar2 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
       pFVar2 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_18);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,TArrayView<TTuple<__int64,float>,int>_const&___ptr64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,TArrayView<struct_TTuple<__int64,float>,int>_const&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,TArrayView<TTuple<__int64,float>,int>_const&___ptr64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,TArrayView<TTuple<__int64,float>,int>_const&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      FPCGMetadataDomain::ComputeWeightedAttribute(pFVar2,param_1,param_2,pFVar3);
    }
  }
  return;
}

// CopyAttribute @ 149e4e850

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttributeBase * __thiscall
UPCGMetadata::CopyAttribute
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,FName param_2,bool param_3,
          bool param_4,bool param_5)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttributeBase *pFVar1;
  FString local_18;
  
  if (((param_1->MetadataDomain).Flag == Invalid) ||
     (this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain),
     this_00 == (FPCGMetadataDomain *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&(param_1->MetadataDomain).DebugName,&local_18);
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe3cf8,
                 (FLogCategoryBase *)&LogPCG);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pFVar1 = (FPCGMetadataAttributeBase *)0x0;
  }
  else {
    pFVar1 = FPCGMetadataDomain::CopyAttribute
                       (this_00,param_1->Name,param_2,param_3,param_4,param_5);
  }
  return pFVar1;
}

// CopyAttribute @ 149e4e910

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttributeBase * __thiscall
UPCGMetadata::CopyAttribute
          (UPCGMetadata *this,FPCGMetadataAttributeBase *param_1,FPCGAttributeIdentifier *param_2,
          bool param_3,bool param_4,bool param_5)

{
  UPCGMetadata *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttributeBase *pFVar4;
  UPCGMetadata *pUVar5;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar6;
  FPCGMetadataDomain *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FString local_38;
  
  if ((param_1 == (FPCGMetadataAttributeBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalAttribute",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                         ,0x3ad,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPCGMetadataAttributeBase *)(*pcVar1)();
    return pFVar4;
  }
  pFVar7 = param_1->Metadata;
  if ((pFVar7 == (FPCGMetadataDomain *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalMetadataDomain",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                         ,0x3af,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPCGMetadataAttributeBase *)(*pcVar1)();
    return pFVar4;
  }
  this_00 = (this->Parent).field0_0x0.DebugPtr;
  pUVar5 = this;
  if (this_00 != (UPCGMetadata *)0x0) {
    pUVar5 = GetRoot(this_00);
  }
  if (pUVar5 != (UPCGMetadata *)0x0) {
    uVar8 = (pFVar7->DomainID).CustomFlag;
    uVar10 = (pFVar7->DomainID).Flag - uVar8 ^ uVar8 >> 0xd;
    uVar9 = (-0x61c88647 - uVar10) - uVar8 ^ uVar10 << 8;
    uVar8 = (uVar8 - uVar10) - uVar9 ^ uVar9 >> 0xd;
    uVar10 = (uVar10 - uVar8) - uVar9 ^ uVar8 >> 0xc;
    uVar9 = (uVar9 - uVar10) - uVar8 ^ uVar10 << 0x10;
    uVar8 = (uVar8 - uVar9) - uVar10 ^ uVar9 >> 5;
    uVar10 = (uVar10 - uVar8) - uVar9 ^ uVar8 >> 3;
    uVar9 = (uVar9 - uVar10) - uVar8 ^ uVar10 << 10;
    iVar3 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FPCGMetadataDomainID>
                      ((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                        *)&pUVar5->MetadataDomains,(uVar8 - uVar9) - uVar10 ^ uVar9 >> 0xf,
                       &pFVar7->DomainID);
    if (iVar3 != -1) {
      pTVar6 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                       *)&pUVar5->MetadataDomains,&pFVar7->DomainID);
      if ((pTVar6 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPCGMetadataAttributeBase *)(*pcVar1)();
        return pFVar4;
      }
      if (pFVar7->Parent != (FPCGMetadataDomain *)0x0) {
        pFVar7 = FPCGMetadataDomain::GetRoot(pFVar7->Parent);
      }
      if (*(FPCGMetadataDomain **)&pTVar6->field_0x10 == pFVar7) goto LAB_149e4eac6;
    }
  }
  if ((param_3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(RootMetadata && RootMetadata->MetadataDomains.Contains(OriginalMetadataDomain->DomainID) && RootMetadata->MetadataDomains[OriginalMetadataDomain->DomainID].Get() == OriginalMetadataDomain->GetRoot()) || !bKeepParent"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                         ,0x3b1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPCGMetadataAttributeBase *)(*pcVar1)();
    return pFVar4;
  }
LAB_149e4eac6:
  if (((param_2->MetadataDomain).Flag == Invalid) ||
     (pFVar7 = FindOrCreateMetadataDomain(this,&param_2->MetadataDomain),
     pFVar7 == (FPCGMetadataDomain *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&(param_2->MetadataDomain).DebugName,&local_38);
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe3d18,
                 (FLogCategoryBase *)&LogPCG);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar4 = FPCGMetadataDomain::CopyAttribute(pFVar7,param_1,param_2->Name,param_3,param_4,param_5)
    ;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      return pFVar4;
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return (FPCGMetadataAttributeBase *)0x0;
}

// CopyAttribute @ 149e4eba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::CopyAttribute
          (UPCGMetadata *this,UPCGMetadata *param_1,FPCGAttributeIdentifier *param_2,FName param_3)

{
  UPCGMetadata *pUVar1;
  bool bVar2;
  long64 lVar3;
  long64 lVar4;
  FPCGMetadataAttributeBase *pFVar5;
  FPCGAttributeIdentifier local_48;
  FPCGAttributeIdentifier local_28;
  
  if (param_1 != (UPCGMetadata *)0x0) {
    local_48.MetadataDomain._0_8_ = PCGMetadataDomainID::Default._0_8_;
    local_48.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    local_48.Name = param_3;
    bVar2 = HasAttribute(this,&local_48);
    if (!bVar2) {
      local_48.Name = param_2->Name;
      local_48.MetadataDomain.Flag = (param_2->MetadataDomain).Flag;
      local_48.MetadataDomain._1_3_ = *(undefined3 *)&(param_2->MetadataDomain).field_0x1;
      local_48.MetadataDomain.CustomFlag = (param_2->MetadataDomain).CustomFlag;
      local_48.MetadataDomain.DebugName = (param_2->MetadataDomain).DebugName;
      bVar2 = HasAttribute(param_1,&local_48);
      if (bVar2) {
        pUVar1 = (this->Parent).field0_0x0.DebugPtr;
        if (pUVar1 == (UPCGMetadata *)0x0 || pUVar1 != param_1) {
          lVar3 = GetItemCountForChild(param_1);
          lVar4 = GetItemCountForChild(this);
          if (lVar4 == lVar3) {
            local_28.Name = param_2->Name;
            local_28.MetadataDomain.Flag = (param_2->MetadataDomain).Flag;
            local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_2->MetadataDomain).field_0x1;
            local_28.MetadataDomain.CustomFlag = (param_2->MetadataDomain).CustomFlag;
            local_28.MetadataDomain.DebugName = (param_2->MetadataDomain).DebugName;
            local_48.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
            local_48.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
            local_48.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
            local_48.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            local_48.Name = param_3;
            pFVar5 = GetConstAttribute(param_1,&local_28);
            local_28.Name = local_48.Name;
            local_28.MetadataDomain.Flag = local_48.MetadataDomain.Flag;
            local_28.MetadataDomain._1_3_ = local_48.MetadataDomain._1_3_;
            local_28.MetadataDomain.CustomFlag = local_48.MetadataDomain.CustomFlag;
            local_28.MetadataDomain.DebugName = local_48.MetadataDomain.DebugName;
            CopyAttribute(this,pFVar5,&local_28,false,true,true);
          }
          else if (1 < (byte)LogPCG._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          }
        }
        else {
          local_48.Name = param_2->Name;
          local_48.MetadataDomain = param_2->MetadataDomain;
          CopyExistingAttribute(this,&local_48,param_3,true);
        }
      }
    }
  }
  return;
}

// CopyAttributes @ 149e4f060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGMetadata::CopyAttributes(UPCGMetadata *this,UPCGMetadata *param_1)

{
  UPCGMetadata *pUVar1;
  long64 lVar2;
  long64 lVar3;
  
  if ((param_1 != (UPCGMetadata *)0x0) &&
     ((pUVar1 = (this->Parent).field0_0x0.DebugPtr, pUVar1 == (UPCGMetadata *)0x0 ||
      (pUVar1 != param_1)))) {
    lVar2 = GetItemCountForChild(param_1);
    lVar3 = GetItemCountForChild(this);
    if (lVar3 == lVar2) {
      ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::CopyAttributes_::__l2::<lambda_1>_>
                (param_1,(<lambda_1>)this);
    }
    else if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      return;
    }
  }
  return;
}

// CopyExistingAttribute @ 149e4f120

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGMetadata::CopyExistingAttribute
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,FName param_2,bool param_3)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttributeBase *pFVar1;
  FString local_38;
  FName local_28;
  FPCGMetadataDomainID FStack_20;
  
  local_28 = param_1->Name;
  FStack_20.Flag = (param_1->MetadataDomain).Flag;
  FStack_20._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  FStack_20.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  FStack_20.DebugName = (param_1->MetadataDomain).DebugName;
  if (((char)*(undefined4 *)&param_1->MetadataDomain != -2) &&
     (this_00 = FindOrCreateMetadataDomain(this,&FStack_20), this_00 != (FPCGMetadataDomain *)0x0))
  {
    pFVar1 = FPCGMetadataDomain::CopyAttribute(this_00,local_28,param_2,param_3,true,true);
    return pFVar1 != (FPCGMetadataAttributeBase *)0x0;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&FStack_20.DebugName,&local_38);
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe3cf8,(FLogCategoryBase *)&LogPCG
              );
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// CreateAttributeFromDataProperty @ 149e50060

bool __thiscall
UPCGMetadata::CreateAttributeFromDataProperty
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,void *param_2,FProperty *param_3)

{
  bool bVar1;
  <lambda_1> local_18;
  
  local_18.Metadata = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (((local_18.Metadata != (FPCGMetadataDomain *)0x0) && (param_3 != (FProperty *)0x0)) &&
     (param_2 != (void *)0x0)) {
    local_18.AttributeName = param_1->Name;
    bVar1 = PCGPropertyHelpers::
            GetPropertyValueWithCallback<void,_PCGMetadata::CreateAttributeFromPropertyHelper<void>_::__l2::<lambda_1>_>
                      (param_2,param_3,&local_18);
    return bVar1;
  }
  return false;
}

// CreateAttributeFromProperty @ 149e50130

bool __thiscall
UPCGMetadata::CreateAttributeFromProperty
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,UObject *param_2,FProperty *param_3)

{
  bool bVar1;
  <lambda_1> local_18;
  
  local_18.Metadata = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (((local_18.Metadata != (FPCGMetadataDomain *)0x0) && (param_3 != (FProperty *)0x0)) &&
     (param_2 != (UObject *)0x0)) {
    local_18.AttributeName = param_1->Name;
    bVar1 = PCGPropertyHelpers::
            GetPropertyValueWithCallback<UObject,_PCGMetadata::CreateAttributeFromPropertyHelper<UObject>_::__l2::<lambda_1>_>
                      (param_2,param_3,&local_18);
    return bVar1;
  }
  return false;
}

// CreateBoolAttribute @ 149e501b0

UPCGMetadata * __thiscall
UPCGMetadata::CreateBoolAttribute
          (UPCGMetadata *this,FName param_1,bool param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  bool local_res18 [16];
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res18[0] = param_2;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<bool>(this_00,param_1,local_res18,param_3,param_4);
  }
  return this;
}

// CreateDoubleAttribute @ 149e51ad0

UPCGMetadata * __thiscall
UPCGMetadata::CreateDoubleAttribute
          (UPCGMetadata *this,FName param_1,double param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  double local_res18 [2];
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res18[0] = param_2;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<double>(this_00,param_1,local_res18,param_3,param_4);
  }
  return this;
}

// CreateFloatAttribute @ 149e51bc0

UPCGMetadata * __thiscall
UPCGMetadata::CreateFloatAttribute
          (UPCGMetadata *this,FName param_1,float param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  float local_res18 [4];
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res18[0] = param_2;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<float>(this_00,param_1,local_res18,param_3,param_4);
  }
  return this;
}

// CreateInteger32Attribute @ 149e51c50

UPCGMetadata * __thiscall
UPCGMetadata::CreateInteger32Attribute
          (UPCGMetadata *this,FName param_1,int param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  int local_res18 [4];
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res18[0] = param_2;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<int>(this_00,param_1,local_res18,param_3,param_4);
  }
  return this;
}

// CreateInteger64Attribute @ 149e51cd0

UPCGMetadata * __thiscall
UPCGMetadata::CreateInteger64Attribute
          (UPCGMetadata *this,FName param_1,long64 param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  long64 local_res18 [2];
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res18[0] = param_2;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<__int64>(this_00,param_1,local_res18,param_3,param_4);
  }
  return this;
}

// CreateMetadataDomain_Unsafe @ 149e51e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPCGMetadataDomain * __thiscall
UPCGMetadata::CreateMetadataDomain_Unsafe(UPCGMetadata *this,FPCGMetadataDomainID *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar4;
  FPCGMetadataDomain *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uVar7;
  FSharedReferencer<1> FVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uVar10;
  uint uVar11;
  TReferenceControllerBase<1> *local_38;
  FSharedReferencer<1> FStack_30;
  FPCGMetadataDomainID local_28;
  
  uVar7 = param_1->CustomFlag;
  uVar11 = param_1->Flag - uVar7 ^ uVar7 >> 0xd;
  uVar10 = (-0x61c88647 - uVar11) - uVar7 ^ uVar11 << 8;
  uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar10 >> 0xd;
  uVar11 = (uVar11 - uVar7) - uVar10 ^ uVar7 >> 0xc;
  uVar10 = (uVar10 - uVar11) - uVar7 ^ uVar11 << 0x10;
  uVar7 = (uVar7 - uVar10) - uVar11 ^ uVar10 >> 5;
  uVar11 = (uVar11 - uVar7) - uVar10 ^ uVar7 >> 3;
  uVar10 = (uVar10 - uVar11) - uVar7 ^ uVar11 << 10;
  iVar3 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FPCGMetadataDomainID>
                    ((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                      *)&this->MetadataDomains,(uVar7 - uVar10) - uVar11 ^ uVar10 >> 0xf,param_1);
  if (iVar3 != -1) {
    pTVar4 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)&this->MetadataDomains,param_1);
    if ((pTVar4 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPCGMetadataDomain *)(*pcVar1)();
      return pFVar5;
    }
    if (*(longlong *)&pTVar4->field_0x10 == 0) goto LAB_149e51f45;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MetadataDomains.Contains(InMetadataDomainID) && !MetadataDomains[InMetadataDomainID].IsValid()"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                     ,0xe6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FPCGMetadataDomain *)(*pcVar1)();
    return pFVar5;
  }
LAB_149e51f45:
  if (((param_1->Flag == Default) || (param_1->Flag != (this->DefaultDomain).Flag)) ||
     (param_1->CustomFlag != (this->DefaultDomain).CustomFlag)) {
    pTVar4 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)&this->MetadataDomains,param_1);
    if ((pTVar4 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FPCGMetadataDomain *)(*pcVar1)();
      return pFVar5;
    }
    if (*(longlong *)&pTVar4->field_0x10 == 0) {
      pTVar6 = ::operator_new(200);
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        FVar8.ReferenceController = _UNK_150651568;
        pTVar9 = ___xmm_00000000000000000000000000000010;
      }
      else {
        pTVar6->SharedReferenceCount = (atomic<int>)0x1;
        pTVar6->WeakReferenceCount = (atomic<int>)0x1;
        pTVar6->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFPCGMetadataDomain___00_SharedPointerInternals__6B_
        ;
        local_28.Flag = param_1->Flag;
        local_28._1_3_ = *(undefined3 *)&param_1->field_0x1;
        local_28.CustomFlag = param_1->CustomFlag;
        local_28.DebugName = param_1->DebugName;
        FPCGMetadataDomain::FPCGMetadataDomain((FPCGMetadataDomain *)(pTVar6 + 1),this,&local_28);
        if ((pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FPCGMetadataDomain *)(*pcVar1)();
          return pFVar5;
        }
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        FVar8.ReferenceController = pTVar6;
        pTVar9 = pTVar6 + 1;
      }
      local_38 = pTVar9;
      FStack_30.ReferenceController = FVar8.ReferenceController;
      pTVar4 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                       *)&this->MetadataDomains,param_1);
      if ((pTVar4 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FPCGMetadataDomain *)(*pcVar1)();
        return pFVar5;
      }
      if ((TReferenceControllerBase<1> **)&pTVar4->field_0x10 != &local_38) {
        *(TReferenceControllerBase<1> **)&pTVar4->field_0x10 = pTVar9;
        local_38 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pTVar4->field_0x18,&FStack_30);
        FVar8.ReferenceController = FStack_30.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
  }
  pTVar4 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,param_1);
  if (pTVar4 != (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    return *(FPCGMetadataDomain **)&pTVar4->field_0x10;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return _DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FPCGMetadataDomain *)(*pcVar1)();
  return pFVar5;
}

// CreateNameAttribute @ 149e52160

UPCGMetadata * __thiscall
UPCGMetadata::CreateNameAttribute
          (UPCGMetadata *this,FName param_1,FName param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FName local_res18 [2];
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_res18[0] = param_2;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FName>(this_00,param_1,local_res18,param_3,param_4);
  }
  return this;
}

// CreateQuatAttribute @ 149e52450

UPCGMetadata * __thiscall
UPCGMetadata::CreateQuatAttribute
          (UPCGMetadata *this,FName param_1,TQuat<double> *param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>
              (this_00,param_1,param_2,param_3,param_4);
  }
  return this;
}

// CreateRotatorAttribute @ 149e52e50

UPCGMetadata * __thiscall
UPCGMetadata::CreateRotatorAttribute
          (UPCGMetadata *this,FName param_1,TRotator<double> *param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TRotator<double>_>
              (this_00,param_1,param_2,param_3,param_4);
  }
  return this;
}

// CreateSoftClassPathAttribute @ 149e53a50

UPCGMetadata * __thiscall
UPCGMetadata::CreateSoftClassPathAttribute
          (UPCGMetadata *this,FName param_1,FSoftClassPath *param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FSoftClassPath>(this_00,param_1,param_2,param_3,param_4);
  }
  return this;
}

// CreateSoftObjectPathAttribute @ 149e53ae0

UPCGMetadata * __thiscall
UPCGMetadata::CreateSoftObjectPathAttribute
          (UPCGMetadata *this,FName param_1,FSoftObjectPath *param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>(this_00,param_1,param_2,param_3,param_4);
  }
  return this;
}

// CreateStringAttribute @ 149e53b70

UPCGMetadata * __thiscall
UPCGMetadata::CreateStringAttribute
          (UPCGMetadata *this,FName param_1,FString *param_2,bool param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  FPCGMetadataDomain *this_00;
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FString>(this_00,param_1,param_2,param_3,param_4);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// CreateTransformAttribute @ 149e53c10

UPCGMetadata * __thiscall
UPCGMetadata::CreateTransformAttribute
          (UPCGMetadata *this,FName param_1,TTransform<double> *param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataDomainID local_30;
  
  local_30._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_30.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_00 = FindOrCreateMetadataDomain(this,&local_30);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TTransform<double>_>
              (this_00,param_1,param_2,param_3,param_4);
  }
  return this;
}

// CreateVector2Attribute @ 149e54170

UPCGMetadata * __thiscall
UPCGMetadata::CreateVector2Attribute
          (UPCGMetadata *this,FName param_1,TVector2<double> *param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>
              (this_00,param_1,param_2,param_3,param_4);
  }
  return this;
}

// CreateVector4Attribute @ 149e54200

UPCGMetadata * __thiscall
UPCGMetadata::CreateVector4Attribute
          (UPCGMetadata *this,FName param_1,TVector4<double> *param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TVector4<double>_>
              (this_00,param_1,param_2,param_3,param_4);
  }
  return this;
}

// CreateVectorAttribute @ 149e54290

UPCGMetadata * __thiscall
UPCGMetadata::CreateVectorAttribute
          (UPCGMetadata *this,FName param_1,TVector<double> *param_2,bool param_3,bool param_4)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataDomainID local_20;
  
  local_20._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  this_00 = FindOrCreateMetadataDomain(this,&local_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
              (this_00,param_1,param_2,param_3,param_4);
  }
  return this;
}

// DeleteAttribute @ 149e54430

void __thiscall UPCGMetadata::DeleteAttribute(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(FName),FName_&>
            (this,&param_1->MetadataDomain,(pmf_a3074a3d)0x149e54330,&param_1->Name);
  return;
}

// FindOrCreateMetadataDomain @ 149e56170

FPCGMetadataDomain * __thiscall
UPCGMetadata::FindOrCreateMetadataDomain(UPCGMetadata *this,FPCGMetadataDomainID *param_1)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar5;
  FPCGMetadataDomain *pFVar6;
  longlong *plVar7;
  
  pTVar5 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,param_1);
  plVar7 = (longlong *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 == (longlong *)0x0) {
    pFVar6 = (FPCGMetadataDomain *)0x0;
  }
  else {
    if (*plVar7 == 0) {
      pFVar1 = &this->MetadataDomainsSpinLock;
      if ((pFVar1 == (FSpinLock *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPCGMetadataDomain *)(*pcVar3)();
        return pFVar6;
      }
      LOCK();
      aVar2 = pFVar1->bFlag;
      pFVar1->bFlag = (atomic<bool>)0x1;
      UNLOCK();
      while (aVar2 != (atomic<bool>)0x0) {
        aVar2 = pFVar1->bFlag;
        while (aVar2 != (atomic<bool>)0x0) {
          aVar2 = pFVar1->bFlag;
        }
        LOCK();
        aVar2 = pFVar1->bFlag;
        pFVar1->bFlag = (atomic<bool>)0x1;
        UNLOCK();
      }
      pTVar5 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                       *)&this->MetadataDomains,param_1);
      plVar7 = (longlong *)&pTVar5->field_0x10;
      if (pTVar5 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      if (*plVar7 == 0) {
        CreateMetadataDomain_Unsafe(this,param_1);
      }
      if (pFVar1 != (FSpinLock *)0x0) {
        pFVar1->bFlag = (atomic<bool>)0x0;
      }
    }
    pFVar6 = (FPCGMetadataDomain *)*plVar7;
  }
  return pFVar6;
}

// Flatten @ 149e56270

void __thiscall UPCGMetadata::Flatten(UPCGMetadata *this)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  bool bVar4;
  <lambda_1> local_res8;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x000149e562b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x330))(plVar2);
      return;
    }
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId743,"UPCGMetadata::FlattenImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
               ,0x2e7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId743);
  }
  ForEachValidUniqueMetadataDomain<_UPCGMetadata::FlattenImpl_::__l2::<lambda_1>_>(this,local_res8);
  (this->Parent).field0_0x0.DebugPtr = (UPCGMetadata *)0x0;
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FlattenAndCompress @ 149e56720

bool __thiscall
UPCGMetadata::FlattenAndCompress
          (UPCGMetadata *this,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId753,"UPCGMetadata::FlattenAndCompress",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
               ,0x2f1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId753);
  }
  ForEachValidUniqueMetadataDomain<_UPCGMetadata::FlattenAndCompress_::__l2::<lambda_1>_>
            (this,(<lambda_1>)param_1);
  (this->Parent).field0_0x0.DebugPtr = (UPCGMetadata *)0x0;
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// FlattenAndCompress @ 149e567b0

bool __thiscall
UPCGMetadata::FlattenAndCompress
          (UPCGMetadata *this,
          TMap<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
          *param_1)

{
  <lambda_1>_conflict local_18;
  
  local_18.__this = this;
  local_18.InEntryKeysToKeepMapping = param_1;
  if (CpuChannel->Enabled < 0) {
    ForEachValidUniqueMetadataDomain<_UPCGMetadata::FlattenAndCompress_::__l2::<lambda_1>_>
              (this,&local_18);
    (this->Parent).field0_0x0.DebugPtr = (UPCGMetadata *)0x0;
    return true;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId763,"UPCGMetadata::FlattenAndCompress",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
             ,0x2fb);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId763);
  ForEachValidUniqueMetadataDomain<_UPCGMetadata::FlattenAndCompress_::__l2::<lambda_1>_>
            (this,&local_18);
  (this->Parent).field0_0x0.DebugPtr = (UPCGMetadata *)0x0;
  FCpuProfilerTrace::OutputEndEvent();
  return true;
}

// FlattenImpl @ 149e56c90

void __thiscall UPCGMetadata::FlattenImpl(UPCGMetadata *this)

{
  bool bVar1;
  <lambda_1> local_res8;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId743,"UPCGMetadata::FlattenImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
               ,0x2e7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId743);
  }
  ForEachValidUniqueMetadataDomain<_UPCGMetadata::FlattenImpl_::__l2::<lambda_1>_>(this,local_res8);
  (this->Parent).field0_0x0.DebugPtr = (UPCGMetadata *)0x0;
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetAllAttributes @ 149e577d0

void __thiscall
UPCGMetadata::GetAllAttributes
          (UPCGMetadata *this,TArray<FPCGAttributeIdentifier,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  <lambda_1> local_28;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_28.SubAttributeNames = &local_38;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28.AttributeNames = param_1;
  local_28.AttributeTypes = param_2;
  ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::GetAllAttributes_::__l2::<lambda_1>_>
            (this,&local_28);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// GetAttributeCount @ 149e57da0

int __thiscall UPCGMetadata::GetAttributeCount(UPCGMetadata *this)

{
  int local_res10 [6];
  
  local_res10[0] = 0;
  ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::GetAttributeCount_::__l2::<lambda_1>_>
            (this,(<lambda_1>)local_res10);
  return local_res10[0];
}

// GetAttributes @ 149e58580

void __thiscall
UPCGMetadata::GetAttributes
          (UPCGMetadata *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> *param_2)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  undefined8 *puVar2;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,&PCGMetadataDomainID::Default);
  puVar2 = (undefined8 *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if ((puVar2 != (undefined8 *)0x0) && ((FPCGMetadataDomain *)*puVar2 != (FPCGMetadataDomain *)0x0))
  {
    FPCGMetadataDomain::GetAttributes((FPCGMetadataDomain *)*puVar2,param_1,param_2);
  }
  return;
}

// GetConstAttribute @ 149e58700

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttributeBase * __thiscall
UPCGMetadata::GetConstAttribute(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  FPCGMetadataAttributeBase *pFVar2;
  undefined8 *puVar3;
  FString local_18;
  
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,&param_1->MetadataDomain);
  puVar3 = (undefined8 *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if ((puVar3 != (undefined8 *)0x0) && ((FPCGMetadataDomain *)*puVar3 != (FPCGMetadataDomain *)0x0))
  {
    pFVar2 = FPCGMetadataDomain::GetConstAttribute((FPCGMetadataDomain *)*puVar3,param_1->Name);
    return pFVar2;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&(param_1->MetadataDomain).DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<class_FPCGMetadataAttributeBase_const*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase_const*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (FPCGMetadataAttributeBase *)0x0;
}

// GetConstMetadataDomain @ 149e58a10

FPCGMetadataDomain * __thiscall
UPCGMetadata::GetConstMetadataDomain(UPCGMetadata *this,FPCGMetadataDomainID *param_1)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  undefined8 *puVar2;
  
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,param_1);
  puVar2 = (undefined8 *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (puVar2 != (undefined8 *)0x0) {
    return (FPCGMetadataDomain *)*puVar2;
  }
  return (FPCGMetadataDomain *)0x0;
}

// GetConstMetadataDomainFromSelector @ 149e58a50

FPCGMetadataDomain * __thiscall
UPCGMetadata::GetConstMetadataDomainFromSelector
          (UPCGMetadata *this,FPCGAttributePropertySelector *param_1)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  FPCGMetadataDomainID *pFVar4;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar5;
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pFVar4 = (FPCGMetadataDomainID *)(**(code **)(*plVar2 + 0x348))(plVar2,local_18,param_1);
      pTVar5 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                       *)&this->MetadataDomains,pFVar4);
      if ((pTVar5 != (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
         (&pTVar5->field_0x10 != (undefined1 *)0x0)) {
        return *(FPCGMetadataDomain **)&pTVar5->field_0x10;
      }
    }
  }
  return (FPCGMetadataDomain *)0x0;
}

// GetItemCountForChild @ 149e5a4e0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UPCGMetadata::GetItemCountForChild(UPCGMetadata *this)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar4;
  longlong *plVar5;
  FString local_18;
  
  pTVar4 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,&PCGMetadataDomainID::Default);
  plVar5 = (longlong *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if ((plVar5 != (longlong *)0x0) && (lVar2 = *plVar5, lVar2 != 0)) {
    AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0xa8));
    iVar1 = *(int *)(lVar2 + 0x90);
    lVar3 = *(longlong *)(lVar2 + 0x98);
    ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0xa8));
    return lVar3 + iVar1;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(void)const___ptr64>(FPCGMetadataDomainID_const&___ptr64,__int64_(__cdecl_FPCGMetadataDomain::*)(void)const___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// GetItemKeyCountForParent @ 149e5a5c0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UPCGMetadata::GetItemKeyCountForParent(UPCGMetadata *this)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  longlong *plVar2;
  FString local_18;
  
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,&PCGMetadataDomainID::Default);
  plVar2 = (longlong *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
    return *(long64 *)(*plVar2 + 0x98);
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(void)const___ptr64>(FPCGMetadataDomainID_const&___ptr64,__int64_(__cdecl_FPCGMetadataDomain::*)(void)const___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// GetLatestAttributeNameOrNone @ 149e5ab10

FName __thiscall UPCGMetadata::GetLatestAttributeNameOrNone(UPCGMetadata *this)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar3;
  FName FVar4;
  FPCGMetadataDomain *pFVar5;
  FName in_RDX;
  FPCGMetadataDomain *this_00;
  
  pTVar3 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,&PCGMetadataDomainID::Default);
  this_00 = (FPCGMetadataDomain *)0x0;
  pFVar5 = (FPCGMetadataDomain *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    pFVar5 = this_00;
  }
  if ((pFVar5 == (FPCGMetadataDomain *)0x0) ||
     (this_00 = (FPCGMetadataDomain *)pFVar5->_padding_, this_00 == (FPCGMetadataDomain *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DefaultMetadataDomain",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                       ,0x362,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  FPCGMetadataDomain::GetLatestAttributeNameOrNone(this_00);
  return in_RDX;
}

// GetLocalItemCount @ 149e5acb0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UPCGMetadata::GetLocalItemCount(UPCGMetadata *this)

{
  int iVar1;
  longlong lVar2;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar3;
  longlong *plVar4;
  FString local_18;
  
  pTVar3 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,&PCGMetadataDomainID::Default);
  plVar4 = (longlong *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if ((plVar4 != (longlong *)0x0) && (lVar2 = *plVar4, lVar2 != 0)) {
    AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0xa8));
    iVar1 = *(int *)(lVar2 + 0x90);
    ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0xa8));
    return (longlong)iVar1;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(void)const___ptr64>(FPCGMetadataDomainID_const&___ptr64,__int64_(__cdecl_FPCGMetadataDomain::*)(void)const___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// GetMetadataDomain @ 149e5b420

FPCGMetadataDomain * __thiscall
UPCGMetadata::GetMetadataDomain(UPCGMetadata *this,FPCGMetadataDomainID *param_1)

{
  FSpinLock *pFVar1;
  atomic<bool> aVar2;
  code *pcVar3;
  bool bVar4;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar5;
  FPCGMetadataDomain *pFVar6;
  longlong *plVar7;
  
  if (param_1->Flag == Invalid) {
    return (FPCGMetadataDomain *)0x0;
  }
  pTVar5 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,param_1);
  plVar7 = (longlong *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 == (longlong *)0x0) {
    pFVar6 = (FPCGMetadataDomain *)0x0;
  }
  else {
    if (*plVar7 == 0) {
      pFVar1 = &this->MetadataDomainsSpinLock;
      if ((pFVar1 == (FSpinLock *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FPCGMetadataDomain *)(*pcVar3)();
        return pFVar6;
      }
      LOCK();
      aVar2 = pFVar1->bFlag;
      pFVar1->bFlag = (atomic<bool>)0x1;
      UNLOCK();
      while (aVar2 != (atomic<bool>)0x0) {
        aVar2 = pFVar1->bFlag;
        while (aVar2 != (atomic<bool>)0x0) {
          aVar2 = pFVar1->bFlag;
        }
        LOCK();
        aVar2 = pFVar1->bFlag;
        pFVar1->bFlag = (atomic<bool>)0x1;
        UNLOCK();
      }
      pTVar5 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                       *)&this->MetadataDomains,param_1);
      plVar7 = (longlong *)&pTVar5->field_0x10;
      if (pTVar5 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      if (*plVar7 == 0) {
        CreateMetadataDomain_Unsafe(this,param_1);
      }
      if (pFVar1 != (FSpinLock *)0x0) {
        pFVar1->bFlag = (atomic<bool>)0x0;
      }
    }
    pFVar6 = (FPCGMetadataDomain *)*plVar7;
  }
  return pFVar6;
}

// GetMetadataDomainFromSelector @ 149e5b440

FPCGMetadataDomain * __thiscall
UPCGMetadata::GetMetadataDomainFromSelector
          (UPCGMetadata *this,FPCGAttributePropertySelector *param_1)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  FPCGMetadataDomainID *pFVar4;
  FPCGMetadataDomain *pFVar5;
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pFVar4 = (FPCGMetadataDomainID *)(**(code **)(*plVar2 + 0x348))(plVar2,local_18,param_1);
      if (pFVar4->Flag != Invalid) {
        pFVar5 = FindOrCreateMetadataDomain(this,pFVar4);
        return pFVar5;
      }
    }
  }
  return (FPCGMetadataDomain *)0x0;
}

// GetMutableAttribute @ 149e5c0d0

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttributeBase * __thiscall
UPCGMetadata::GetMutableAttribute(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttributeBase *pFVar1;
  FString local_18;
  
  if (((param_1->MetadataDomain).Flag != Invalid) &&
     (this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain),
     this_00 != (FPCGMetadataDomain *)0x0)) {
    pFVar1 = FPCGMetadataDomain::GetMutableAttribute(this_00,param_1->Name);
    return pFVar1;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&(param_1->MetadataDomain).DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (FPCGMetadataAttributeBase *)0x0;
}

// GetParentKey @ 149e5c5c0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall UPCGMetadata::GetParentKey(UPCGMetadata *this,long64 param_1)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  long64 lVar2;
  undefined8 *puVar3;
  FString local_18;
  
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,&PCGMetadataDomainID::Default);
  puVar3 = (undefined8 *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if ((puVar3 != (undefined8 *)0x0) && ((FPCGMetadataDomain *)*puVar3 != (FPCGMetadataDomain *)0x0))
  {
    lVar2 = FPCGMetadataDomain::GetParentKey((FPCGMetadataDomain *)*puVar3,param_1);
    return lVar2;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<__int64_(__cdecl_FPCGMetadataDomain::*)(__int64)const___ptr64,__int64&___ptr64>(FPCGMetadataDomainID_const&___ptr64,__int64_(__cdecl_FPCGMetadataDomain::*)(__int64)const___ptr64,__int64&___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return 0;
}

// GetParentKeys @ 149e5c720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::GetParentKeys
          (UPCGMetadata *this,TArrayView<__int64,int> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  undefined8 *puVar2;
  TArrayView<__int64,int> local_18;
  
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,&PCGMetadataDomainID::Default);
  puVar2 = (undefined8 *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if ((puVar2 != (undefined8 *)0x0) && ((FPCGMetadataDomain *)*puVar2 != (FPCGMetadataDomain *)0x0))
  {
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FPCGMetadataDomain::GetParentKeys((FPCGMetadataDomain *)*puVar2,&local_18,param_2);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64,int>,TBitArray<FDefaultBitArrayAllocator>_const*___ptr64)const___ptr64,TArrayView<__int64,int>&___ptr64,TBitArray<class_FDefaultBitArrayAllocator>_const*___ptr64&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(TArrayView<__int64,int>,TBitArray<FDefaultBitArrayAllocator>_const*___ptr64)const___ptr64,TArrayView<__int64,int>&___ptr64,TBitArray<class_FDefaultBitArrayAllocator>_const*___ptr64&___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.DataPtr != (long64 *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
  }
  return;
}

// GetPrivateStaticClass @ 149e5d960

UClass * __cdecl UPCGMetadata::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadata.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadata",&Z_Registration_Info_UClass_UPCGMetadata.InnerSingleton
               ,StaticRegisterNativesUPCGMetadata,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGMetadata>,InternalVTableHelperCtorCaller<UPCGMetadata>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadata.InnerSingleton;
}

// GetRoot @ 149e6ac80

UPCGMetadata * __thiscall UPCGMetadata::GetRoot(UPCGMetadata *this)

{
  UPCGMetadata *pUVar1;
  UPCGMetadata *pUVar2;
  
  pUVar2 = (this->Parent).field0_0x0.DebugPtr;
  if (pUVar2 != (UPCGMetadata *)0x0) {
    do {
      pUVar1 = pUVar2;
      pUVar2 = (pUVar2->Parent).field0_0x0.DebugPtr;
    } while (pUVar2 != (UPCGMetadata *)0x0);
    return pUVar1;
  }
  return this;
}

// HasAttribute @ 149e72e10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UPCGMetadata::HasAttribute(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  bool bVar1;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar2;
  undefined8 *puVar3;
  FString local_18;
  
  pTVar2 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&this->MetadataDomains,&param_1->MetadataDomain);
  puVar3 = (undefined8 *)&pTVar2->field_0x10;
  if (pTVar2 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if ((puVar3 != (undefined8 *)0x0) && ((FPCGMetadataDomain *)*puVar3 != (FPCGMetadataDomain *)0x0))
  {
    bVar1 = FPCGMetadataDomain::HasAttribute((FPCGMetadataDomain *)*puVar3,param_1->Name);
    return bVar1;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&(param_1->MetadataDomain).DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// HasCommonAttributes @ 149e73260

bool __thiscall UPCGMetadata::HasCommonAttributes(UPCGMetadata *this,UPCGMetadata *param_1)

{
  bool local_res10 [24];
  <lambda_1> local_18;
  
  if (param_1 == (UPCGMetadata *)0x0) {
    return false;
  }
  local_18.bHasCommonAttribute = local_res10;
  local_res10[0] = false;
  local_18.InMetadata = param_1;
  ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::HasCommonAttributes_::__l2::<lambda_1>_>
            (this,&local_18);
  return local_res10[0];
}

// HasParent @ 149e732f0

bool __thiscall UPCGMetadata::HasParent(UPCGMetadata *this,UPCGMetadata *param_1)

{
  UPCGMetadata *pUVar1;
  
  if (param_1 == (UPCGMetadata *)0x0) {
    return false;
  }
  pUVar1 = (this->Parent).field0_0x0.DebugPtr;
  while( true ) {
    if (pUVar1 == (UPCGMetadata *)0x0) {
      return param_1 == (UPCGMetadata *)0x0;
    }
    if (pUVar1 == param_1) break;
    pUVar1 = (pUVar1->Parent).field0_0x0.DebugPtr;
  }
  return true;
}

// Initialize @ 149e76550

void __thiscall UPCGMetadata::Initialize(UPCGMetadata *this,FPCGMetadataInitializeParams *param_1)

{
  UPCGMetadata *pUVar1;
  <lambda_1> local_18;
  
  if ((((this->Parent).field0_0x0.DebugPtr == (UPCGMetadata *)0x0) &&
      (pUVar1 = param_1->Parent, pUVar1 != this)) && (pUVar1 != (UPCGMetadata *)0x0)) {
    if ((param_1->DomainMapping).ArrayNum == 0) {
      SetupDomainsFromOtherMetadataIfNeeded(this,pUVar1);
    }
    pUVar1 = param_1->Parent;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGMetadata *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->Parent).field0_0x0.DebugPtr = pUVar1;
    local_18.__this = this;
    local_18.InParams = param_1;
    ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::Initialize_::__l2::<lambda_1>_>
              (pUVar1,&local_18);
  }
  return;
}

// Initialize @ 149e765d0

void __thiscall UPCGMetadata::Initialize(UPCGMetadata *this,UPCGMetadata *param_1)

{
  TObjectPtr<UPCGMetadata_const_>_u_0 this_00;
  int iVar1;
  <lambda_1> local_48;
  TObjectPtr<UPCGMetadata_const_>_u_0 local_38;
  void *local_30;
  undefined8 local_28;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_20;
  undefined8 local_18;
  
  if ((param_1 != (UPCGMetadata *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    local_30 = (void *)0x0;
    local_28 = 0;
    local_20 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
    local_18 = 0;
    local_38.DebugPtr = param_1;
    iVar1 = 0;
    if (((this->Parent).field0_0x0.DebugPtr == (UPCGMetadata *)0x0) && (iVar1 = 0, param_1 != this))
    {
      SetupDomainsFromOtherMetadataIfNeeded(this,param_1);
      this_00 = local_38;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_38.DebugPtr != (UPCGMetadata *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
      }
      local_48.InParams = (FPCGMetadataInitializeParams *)&local_38;
      (this->Parent).field0_0x0.DebugPtr = (UPCGMetadata *)this_00;
      local_48.__this = this;
      ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::Initialize_::__l2::<lambda_1>_>
                (this_00.DebugPtr,&local_48);
      iVar1 = (int)local_18;
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              (local_20,iVar1);
    if (local_20 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_20);
    }
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
  }
  return;
}

// Initialize @ 149e766a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPCGMetadata::Initialize(UPCGMetadata *this,UPCGMetadata *param_1,bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_e8 [32];
  TObjectPtr<UPCGMetadata_const_>_u_0 local_b8;
  void *local_b0;
  int local_a8;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_a0;
  int local_98;
  <lambda_1> local_88;
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  ForElementType<FSetElementId> local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  if ((param_1 != (UPCGMetadata *)0x0) &&
     (local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8,
     ((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    local_78._16_8_ = 0;
    uStack_60 = 0;
    local_40.InlineData[0] = '\0';
    local_40.InlineData[1] = '\0';
    local_40.InlineData[2] = '\0';
    local_40.InlineData[3] = '\0';
    local_40._padding_ = 0;
    local_30 = 0;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_4c = 0x80;
    local_48 = 0xffffffff;
    FPCGMetadataInitializeParams::FPCGMetadataInitializeParams
              ((FPCGMetadataInitializeParams *)&local_b8.ObjectPtr,param_1,
               (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0);
    if ((local_98 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_a0->field_0x68 = !param_2;
    local_a0->field_0x69 = 0;
    if ((local_78._8_4_ != local_44) && (local_78 != &local_a0->field_0x18)) {
      TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>::
      Emplace<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&>
                ((TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *)
                 &local_a0->field_0x18,
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_78);
    }
    local_30 = local_30 & 0xffffffff00000000;
    if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_40.SecondaryData);
    }
    iVar2 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_44 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    if ((((this->Parent).field0_0x0.DebugPtr == (UPCGMetadata *)0x0) && (local_b8.DebugPtr != this))
       && (local_b8.DebugPtr != (UPCGMetadata *)0x0)) {
      if (local_a8 == 0) {
        SetupDomainsFromOtherMetadataIfNeeded(this,local_b8.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_b8.DebugPtr != (UPCGMetadata *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_b8.DebugPtr);
      }
      local_88.InParams = (FPCGMetadataInitializeParams *)&local_b8;
      (this->Parent).field0_0x0.DebugPtr = (UPCGMetadata *)local_b8;
      local_88.__this = this;
      ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::Initialize_::__l2::<lambda_1>_>
                (local_b8.DebugPtr,&local_88);
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              (local_a0,local_98);
    if (local_a0 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_a0);
    }
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
  }
  return;
}

// InitializeAsCopy @ 149e770e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::InitializeAsCopy(UPCGMetadata *this,FPCGMetadataInitializeParams *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  UPCGMetadata *pUVar3;
  TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *this_01;
  bool local_res10 [8];
  <lambda_1> local_28;
  
  if (param_1->Parent != (UPCGMetadata *)0x0) {
    if ((this->Parent).field0_0x0.DebugPtr == (UPCGMetadata *)0x0) {
      local_res10[0] = false;
      SetupDomainsFromOtherMetadataIfNeeded(this,param_1->Parent);
      local_28.bShouldParent = local_res10;
      local_28.__this = this;
      local_28.InParams = param_1;
      ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::InitializeAsCopy_::__l2::<lambda_1>_>
                (param_1->Parent,&local_28);
      if (local_res10[0] != false) {
        pUVar3 = param_1->Parent;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGMetadata *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        (this->Parent).field0_0x0.DebugPtr = pUVar3;
        this_01 = &this->OtherParents;
        pUVar3 = param_1->Parent;
        if (this_01 != &pUVar3->OtherParents) {
          UE::Core::Private::
          CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                    (&(this->OtherParents).Hash,&(this->OtherParents).HashSize,
                     &(pUVar3->OtherParents).Hash,(pUVar3->OtherParents).HashSize);
          iVar2 = *(int *)&(pUVar3->OtherParents).Elements.field_0x8;
          TSparseArray<TSparseSetElement<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty(&this_01->Elements,iVar2);
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar2,(ForAnyElementType *)this_01,
                     (int *)&(this->OtherParents).Elements.field_0x8,
                     (int *)&(this->OtherParents).Elements.field_0xc);
          puVar1 = &(pUVar3->OtherParents).Elements.field_0x10;
          this_00 = &(this->OtherParents).Elements.field_0x10;
          *(undefined4 *)&(this->OtherParents).Elements.field_0x30 =
               *(undefined4 *)&(pUVar3->OtherParents).Elements.field_0x30;
          *(undefined4 *)&(this->OtherParents).Elements.field_0x34 =
               *(undefined4 *)&(pUVar3->OtherParents).Elements.field_0x34;
          if (this_00 != puVar1) {
            TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
          }
          if (iVar2 != 0) {
            memcpy(*(void **)&this_01->Elements,*(void **)&(pUVar3->OtherParents).Elements,
                   (longlong)iVar2 << 4);
          }
        }
      }
    }
    else if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      return;
    }
  }
  return;
}

// InitializeAsCopy @ 149e77230

void __thiscall
UPCGMetadata::InitializeAsCopy
          (UPCGMetadata *this,UPCGMetadata *param_1,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FPCGMetadataInitializeParams *pFVar1;
  FPCGMetadataInitializeParams local_38;
  
  if ((param_1 != (UPCGMetadata *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    pFVar1 = FPCGMetadataInitializeParams::FPCGMetadataInitializeParams(&local_38,param_1,param_2);
    InitializeAsCopy(this,pFVar1);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_38.DomainInitializeParams.AllocatorInstance.Data,
               local_38.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_38.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_38.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_38.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DomainMapping.AllocatorInstance.Data);
    }
  }
  return;
}

// InitializeAsCopyWithAttributeFilter @ 149e772a0

void __thiscall
UPCGMetadata::InitializeAsCopyWithAttributeFilter
          (UPCGMetadata *this,UPCGMetadata *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          EPCGMetadataFilterMode param_3,TArray<__int64,TSizedDefaultAllocator<32>_> *param_4,
          EPCGStringMatchingOperator param_5)

{
  code *pcVar1;
  bool bVar2;
  FPCGMetadataInitializeParams local_38;
  
  if ((param_1 != (UPCGMetadata *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    FPCGMetadataInitializeParams::FPCGMetadataInitializeParams(&local_38,param_1,param_4);
    if ((local_38.DomainInitializeParams.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38.DomainInitializeParams.AllocatorInstance.Data[0x68] = (FScriptContainerElement)param_3;
    local_38.DomainInitializeParams.AllocatorInstance.Data[0x69] = (FScriptContainerElement)param_5;
    if ((*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) &&
       (param_2 !=
        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
        (local_38.DomainInitializeParams.AllocatorInstance.Data + 0x18))) {
      TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>::
      Emplace<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&>
                ((TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *)
                 (local_38.DomainInitializeParams.AllocatorInstance.Data + 0x18),param_2);
    }
    InitializeAsCopy(this,&local_38);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_38.DomainInitializeParams.AllocatorInstance.Data,
               local_38.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_38.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_38.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_38.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DomainMapping.AllocatorInstance.Data);
    }
  }
  return;
}

// InitializeOnSet @ 149e77810

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGMetadata::InitializeOnSet
          (UPCGMetadata *this,long64 *param_1,long64 param_2,UPCGMetadata *param_3,long64 param_4,
          UPCGMetadata *param_5)

{
  longlong lVar1;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar2;
  FPCGMetadataDomain *this_00;
  long64 lVar3;
  undefined8 *puVar4;
  FPCGMetadataDomain *pFVar5;
  FPCGMetadataDomain *pFVar6;
  FString local_28;
  
  if (param_5 != (UPCGMetadata *)0x0) {
    pTVar2 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)&param_5->MetadataDomains,&PCGMetadataDomainID::Default);
    puVar4 = (undefined8 *)&pTVar2->field_0x10;
    if (pTVar2 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      pFVar5 = (FPCGMetadataDomain *)*puVar4;
      goto LAB_149e7786d;
    }
  }
  pFVar5 = (FPCGMetadataDomain *)0x0;
LAB_149e7786d:
  pFVar6 = (FPCGMetadataDomain *)0x0;
  if (param_3 != (UPCGMetadata *)0x0) {
    pTVar2 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)&param_3->MetadataDomains,&PCGMetadataDomainID::Default);
    puVar4 = (undefined8 *)&pTVar2->field_0x10;
    if (pTVar2 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      pFVar6 = (FPCGMetadataDomain *)*puVar4;
    }
  }
  if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
     (this_00 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
     this_00 == (FPCGMetadataDomain *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    lVar1 = *param_1;
    if (lVar1 == -1) {
      if (((param_2 != -1) && (this_00->Parent == pFVar6)) ||
         ((param_4 != -1 && (param_2 = param_4, this_00->Parent == pFVar5)))) {
        lVar3 = FPCGMetadataDomain::AddEntry(this_00,param_2);
        *param_1 = lVar3;
        return true;
      }
      lVar3 = FPCGMetadataDomain::AddEntry(this_00,-1);
      *param_1 = lVar3;
    }
    else if (lVar1 < this_00->ItemKeyOffset) {
      lVar3 = FPCGMetadataDomain::AddEntry(this_00,lVar1);
      *param_1 = lVar3;
    }
  }
  return false;
}

// InitializeWithAttributeFilter @ 149e77990

void __thiscall
UPCGMetadata::InitializeWithAttributeFilter
          (UPCGMetadata *this,UPCGMetadata *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          EPCGMetadataFilterMode param_3,EPCGStringMatchingOperator param_4)

{
  code *pcVar1;
  bool bVar2;
  FPCGMetadataInitializeParams local_38;
  
  if ((param_1 != (UPCGMetadata *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    FPCGMetadataInitializeParams::FPCGMetadataInitializeParams
              (&local_38,param_1,(TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0);
    if ((local_38.DomainInitializeParams.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38.DomainInitializeParams.AllocatorInstance.Data[0x68] = (FScriptContainerElement)param_3;
    local_38.DomainInitializeParams.AllocatorInstance.Data[0x69] = (FScriptContainerElement)param_4;
    if ((*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) &&
       (param_2 !=
        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
        (local_38.DomainInitializeParams.AllocatorInstance.Data + 0x18))) {
      TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>::
      Emplace<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&>
                ((TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *)
                 (local_38.DomainInitializeParams.AllocatorInstance.Data + 0x18),param_2);
    }
    Initialize(this,&local_38);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_38.DomainInitializeParams.AllocatorInstance.Data,
               local_38.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_38.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_38.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_38.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DomainMapping.AllocatorInstance.Data);
    }
  }
  return;
}

// K2_InitializeAsCopy @ 149e78460

void __thiscall
UPCGMetadata::K2_InitializeAsCopy
          (UPCGMetadata *this,UPCGMetadata *param_1,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_2)

{
  FPCGMetadataInitializeParams *pFVar1;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FPCGMetadataInitializeParams local_38;
  
  if ((param_1 != (UPCGMetadata *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    pTVar2 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0;
    if (param_2->ArrayNum != 0) {
      pTVar2 = param_2;
    }
    pFVar1 = FPCGMetadataInitializeParams::FPCGMetadataInitializeParams(&local_38,param_1,pTVar2);
    InitializeAsCopy(this,pFVar1);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_38.DomainInitializeParams.AllocatorInstance.Data,
               local_38.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_38.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_38.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_38.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DomainMapping.AllocatorInstance.Data);
    }
  }
  return;
}

// K2_InitializeAsCopyWithAttributeFilter @ 149e784e0

void __thiscall
UPCGMetadata::K2_InitializeAsCopyWithAttributeFilter
          (UPCGMetadata *this,UPCGMetadata *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_3,EPCGMetadataFilterMode param_4,
          EPCGStringMatchingOperator param_5)

{
  code *pcVar1;
  bool bVar2;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar3;
  FPCGMetadataInitializeParams local_38;
  
  if ((param_1 != (UPCGMetadata *)0x0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    pTVar3 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0;
    if (param_3->ArrayNum != 0) {
      pTVar3 = param_3;
    }
    FPCGMetadataInitializeParams::FPCGMetadataInitializeParams(&local_38,param_1,pTVar3);
    if ((local_38.DomainInitializeParams.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38.DomainInitializeParams.AllocatorInstance.Data[0x68] = (FScriptContainerElement)param_4;
    local_38.DomainInitializeParams.AllocatorInstance.Data[0x69] = (FScriptContainerElement)param_5;
    if ((*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) &&
       (param_2 !=
        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
        (local_38.DomainInitializeParams.AllocatorInstance.Data + 0x18))) {
      TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>::
      Emplace<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const_&>
                ((TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *)
                 (local_38.DomainInitializeParams.AllocatorInstance.Data + 0x18),param_2);
    }
    InitializeAsCopy(this,&local_38);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_38.DomainInitializeParams.AllocatorInstance.Data,
               local_38.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_38.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_38.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_38.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DomainMapping.AllocatorInstance.Data);
    }
  }
  return;
}

// MergeAttributes @ 149e79530

void __thiscall
UPCGMetadata::MergeAttributes
          (UPCGMetadata *this,long64 param_1,UPCGMetadata *param_2,long64 param_3,
          UPCGMetadata *param_4,long64 *param_5,EPCGMetadataOp param_6)

{
  MergeAttributesSubset(this,param_1,param_2,param_2,param_3,param_4,param_4,param_5,param_6);
  return;
}

// MergeAttributesByKey @ 149e79580

void __thiscall
UPCGMetadata::MergeAttributesByKey
          (UPCGMetadata *this,long64 param_1,UPCGMetadata *param_2,long64 param_3,
          UPCGMetadata *param_4,long64 param_5,EPCGMetadataOp param_6,long64 *param_7)

{
  *param_7 = param_5;
  MergeAttributesSubset(this,param_1,param_2,param_2,param_3,param_4,param_4,param_7,param_6);
  return;
}

// MergeAttributesSubset @ 149e79a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::MergeAttributesSubset
          (UPCGMetadata *this,long64 param_1,UPCGMetadata *param_2,UPCGMetadata *param_3,
          long64 param_4,UPCGMetadata *param_5,UPCGMetadata *param_6,long64 *param_7,
          EPCGMetadataOp param_8)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  FPCGMetadataDomain *pFVar2;
  FPCGMetadataDomain *pFVar3;
  FPCGMetadataDomain *pFVar4;
  FPCGMetadataDomain *pFVar5;
  FPCGMetadataDomain *pFVar6;
  FString local_28;
  
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&param_2->MetadataDomains,&PCGMetadataDomainID::Default);
  pFVar3 = (FPCGMetadataDomain *)0x0;
  pFVar2 = (FPCGMetadataDomain *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    pFVar2 = pFVar3;
  }
  pFVar4 = pFVar3;
  if (pFVar2 != (FPCGMetadataDomain *)0x0) {
    pFVar4 = (FPCGMetadataDomain *)pFVar2->_padding_;
  }
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&param_3->MetadataDomains,&PCGMetadataDomainID::Default);
  pFVar2 = (FPCGMetadataDomain *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    pFVar2 = pFVar3;
  }
  pFVar5 = pFVar3;
  if (pFVar2 != (FPCGMetadataDomain *)0x0) {
    pFVar5 = (FPCGMetadataDomain *)pFVar2->_padding_;
  }
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&param_5->MetadataDomains,&PCGMetadataDomainID::Default);
  pFVar2 = (FPCGMetadataDomain *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    pFVar2 = pFVar3;
  }
  pFVar6 = pFVar3;
  if (pFVar2 != (FPCGMetadataDomain *)0x0) {
    pFVar6 = (FPCGMetadataDomain *)pFVar2->_padding_;
  }
  pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&param_6->MetadataDomains,&PCGMetadataDomainID::Default);
  pFVar2 = (FPCGMetadataDomain *)&pTVar1->field_0x10;
  if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    pFVar2 = pFVar3;
  }
  if (pFVar2 != (FPCGMetadataDomain *)0x0) {
    pFVar3 = (FPCGMetadataDomain *)pFVar2->_padding_;
  }
  if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
     (pFVar2 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
     pFVar2 == (FPCGMetadataDomain *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const*___ptr64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,EPCGMetadataOp)___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,__int64&___ptr64,EPCGMetadataOp&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const*___ptr64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,EPCGMetadataOp)___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,FPCGMetadataDomain_const*___ptr64&___ptr64,__int64&___ptr64,EPCGMetadataOp&___ptr64)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FPCGMetadataDomain::MergeAttributesSubset
              (pFVar2,param_1,pFVar4,pFVar5,param_4,pFVar6,pFVar3,param_7,param_8);
  }
  return;
}

// MergePointAttributes @ 149e79bb0

void __thiscall
UPCGMetadata::MergePointAttributes
          (UPCGMetadata *this,FPCGPoint *param_1,FPCGPoint *param_2,FPCGPoint *param_3,
          EPCGMetadataOp param_4)

{
  MergeAttributesSubset
            (this,param_1->MetadataEntry,this,this,param_2->MetadataEntry,this,this,
             &param_3->MetadataEntry,param_4);
  return;
}

// MergePointAttributes @ 149e79c00

void __thiscall
UPCGMetadata::MergePointAttributes
          (UPCGMetadata *this,FPCGPoint *param_1,UPCGMetadata *param_2,FPCGPoint *param_3,
          UPCGMetadata *param_4,FPCGPoint *param_5,EPCGMetadataOp param_6)

{
  MergeAttributesSubset
            (this,param_1->MetadataEntry,param_2,param_2,param_3->MetadataEntry,param_4,param_4,
             &param_5->MetadataEntry,param_6);
  return;
}

// MergePointAttributesSubset @ 149e79c60

void __thiscall
UPCGMetadata::MergePointAttributesSubset
          (UPCGMetadata *this,FPCGPoint *param_1,UPCGMetadata *param_2,UPCGMetadata *param_3,
          FPCGPoint *param_4,UPCGMetadata *param_5,UPCGMetadata *param_6,FPCGPoint *param_7,
          EPCGMetadataOp param_8)

{
  MergeAttributesSubset
            (this,param_1->MetadataEntry,param_2,param_3,param_4->MetadataEntry,param_5,param_6,
             &param_7->MetadataEntry,param_8);
  return;
}

// MetadataDomainSupportsMultiEntries @ 149e79cb0

bool __thiscall
UPCGMetadata::MetadataDomainSupportsMultiEntries(UPCGMetadata *this,FPCGMetadataDomainID *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_149e79d36;
  }
  pUVar5 = Z_Construct_UClass_UPCGData_NoRegister();
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pUVar6 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar6 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                       ,0x4d3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
LAB_149e79d36:
                    /* WARNING: Could not recover jumptable at 0x000149e79d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)pUVar6 + 0x358))(pUVar6,param_1);
  return (bool)uVar4;
}

// MetadataDomainSupportsParenting @ 149e79d60

bool __thiscall
UPCGMetadata::MetadataDomainSupportsParenting(UPCGMetadata *this,FPCGMetadataDomainID *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_149e79de6;
  }
  pUVar5 = Z_Construct_UClass_UPCGData_NoRegister();
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pUVar6 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar6 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                       ,0x4df,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
LAB_149e79de6:
                    /* WARNING: Could not recover jumptable at 0x000149e79df9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(longlong *)pUVar6 + 0x360))(pUVar6,param_1);
  return (bool)uVar4;
}

// ParentHasAttribute @ 149e79e50

bool __thiscall
UPCGMetadata::ParentHasAttribute(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  UPCGMetadata *this_00;
  bool bVar1;
  FPCGAttributeIdentifier local_28;
  
  this_00 = (this->Parent).field0_0x0.DebugPtr;
  if (this_00 != (UPCGMetadata *)0x0) {
    local_28.Name = param_1->Name;
    local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
    local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
    local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
    local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
    bVar1 = HasAttribute(this_00,&local_28);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// RenameAttribute @ 149e85a80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UPCGMetadata::RenameAttribute(UPCGMetadata *this,FPCGAttributeIdentifier *param_1,FName param_2)

{
  longlong lVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  FPCGMetadataDomain *this_00;
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar5;
  longlong *plVar6;
  TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&> local_res10;
  FName local_res20;
  FName local_58;
  FName local_50;
  longlong local_48;
  undefined1 local_40 [24];
  
  if (((param_1->MetadataDomain).Flag == Invalid) ||
     (this_00 = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain),
     this_00 == (FPCGMetadataDomain *)0x0)) {
    return false;
  }
  local_58 = param_1->Name;
  local_res20 = param_2;
  bVar3 = FPCGMetadataAttributeBase::IsValidName(&local_res20);
  if (!bVar3) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res20,(FString *)local_40);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_40._0_8_);
      }
    }
    return false;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this_00->AttributeLock);
  pTVar5 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this_00->Attributes,local_58);
  FVar2 = local_58;
  plVar6 = (longlong *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    lVar1 = *plVar6;
    local_res10.Key = (FName *)local_58;
    if (*(int *)&(this_00->Attributes).field_0x8 != *(int *)&(this_00->Attributes).field_0x34) {
      uVar4 = ::GetTypeHash(local_58.ComparisonIndex.Value);
      TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                           *)&this_00->Attributes,FVar2.Number + uVar4,(FName *)&local_res10);
    }
    *(FName *)(lVar1 + 0x74) = local_res20;
    local_50 = local_res20;
    local_40._0_8_ = &local_50;
    local_40._8_8_ = &local_48;
    local_48 = lVar1;
    TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&>_>
              ((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                *)&this_00->Attributes,&local_res10,(bool *)local_40);
    FPCGMetadataDomain::SetLastCachedSelectorOnOwner(this_00,local_res20);
    ReleaseSRWLockExclusive((PSRWLOCK)&this_00->AttributeLock);
    return true;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this_00->AttributeLock);
  if (2 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&local_58,(FString *)local_40);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_40._0_8_);
    }
  }
  return false;
}

// ResetPointWeightedAttributes @ 149e86160

void __thiscall UPCGMetadata::ResetPointWeightedAttributes(UPCGMetadata *this,FPCGPoint *param_1)

{
  ResetWeightedAttributes(this,&param_1->MetadataEntry);
  return;
}

// ResetWeightedAttributes @ 149e863f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGMetadata::ResetWeightedAttributes(UPCGMetadata *this,long64 *param_1)

{
  FPCGMetadataDomain *this_00;
  FString local_18;
  
  if ((PCGMetadataDomainID::Default.Flag != Invalid) &&
     (this_00 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
     this_00 != (FPCGMetadataDomain *)0x0)) {
    FPCGMetadataDomain::ResetWeightedAttributes(this_00,param_1);
    return;
  }
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_18);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64)___ptr64,__int64&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64)___ptr64,__int64&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ResetWeightedAttributesByKey @ 149e86480

void __thiscall
UPCGMetadata::ResetWeightedAttributesByKey(UPCGMetadata *this,long64 param_1,long64 *param_2)

{
  *param_2 = param_1;
  ResetWeightedAttributes(this,param_2);
  return;
}

// Serialize @ 149e8d390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGMetadata::Serialize(UPCGMetadata *this,FArchive *param_1)

{
  uint *puVar1;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *this_00;
  uint uVar2;
  ulonglong *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FPCGMetadataDomain *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar11;
  ForAnyElementType FVar12;
  FPCGMetadataDomainID *pFVar13;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_98;
  uint local_94;
  TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> local_90;
  FLLMScope local_80;
  uint local_7c;
  FPCGMetadataDomainID local_78;
  FName local_68;
  FMemScope local_60;
  FString local_58;
  FString local_48;
  
  FLLMScope::FLLMScope(&local_80,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_68 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_60,&local_68,true);
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPCGCustomVersion::GUID);
  pFVar8 = (FPCGMetadataDomain *)0x0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    this_00 = &this->MetadataDomains;
    TMapBase<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
                *)this_00,&local_90);
    AlgoImpl::
    IntroSortInternal<FPCGMetadataDomainID,int,FIdentityFunctor,TDereferenceWrapper<FPCGMetadataDomainID,TLess<void>_>_>
              ((FPCGMetadataDomainID *)local_90.AllocatorInstance.Data,local_90.ArrayNum,
               local_res10[0],(TLess<void> *)local_res20);
    ::operator<<(param_1,&this->DefaultDomain);
    TArrayPrivateFriend::Serialize<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_>
              (param_1,&local_90);
    iVar7 = local_90.ArrayNum;
    uVar10 = (ulonglong)local_90.ArrayNum;
    pFVar13 = (FPCGMetadataDomainID *)(local_90.AllocatorInstance.Data + uVar10 * 0x10);
    FVar12.Data = local_90.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPCGMetadataDomainID,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if ((FPCGMetadataDomainID *)FVar12.Data == pFVar13) break;
      pTVar11 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                        *)this_00,(FPCGMetadataDomainID *)FVar12.Data);
      if ((pTVar11 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(ulonglong **)&param_1->field_0x8;
      bVar5 = *(longlong *)&pTVar11->field_0x10 != 0;
      puVar1 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar1) {
        local_98 = 0;
        if ((param_1->field_0x28 & 1) == 0) {
          local_98 = (uint)(*(longlong *)&pTVar11->field_0x10 != 0);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,4);
        if (1 < local_98) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
        uVar2 = local_98;
        if ((param_1->field_0x28 & 1) != 0) goto LAB_149e8d7c4;
      }
      else {
        uVar2 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
LAB_149e8d7c4:
        bVar5 = uVar2 != 0;
      }
      if ((bVar5) && (((FPCGMetadataDomainID *)FVar12.Data)->Flag != Default)) {
        pTVar11 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                          *)this_00,(FPCGMetadataDomainID *)FVar12.Data);
        if ((pTVar11 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(longlong *)&pTVar11->field_0x10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(**(longlong **)&pTVar11->field_0x10 + 8))
                  (*(longlong **)&pTVar11->field_0x10,param_1);
      }
      uVar10 = local_90._8_8_ & 0xffffffff;
      FVar12.Data = FVar12.Data + 0x10;
    }
  }
  else {
    iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPCGCustomVersion::GUID);
    if (iVar7 < 0x18) {
      if (this->_padding_ != 0) {
        Z_Construct_UClass_UPCGData_NoRegister();
      }
      if (((PCGMetadataDomainID::Default.Flag == Invalid) ||
          (pFVar8 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
          pFVar8 == (FPCGMetadataDomain *)0x0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DefaultMetadataDomain",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                             ,0x15f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(pFVar8->_padding_ + 8))(pFVar8,param_1);
    }
    else {
      local_78.Flag = Default;
      local_78.CustomFlag = -1;
      local_78.DebugName.ComparisonIndex.Value = 0;
      local_78.DebugName.Number = 0;
      ::operator<<(param_1,&local_78);
      if (((local_78.Flag != (this->DefaultDomain).Flag) ||
          (local_78.CustomFlag != (this->DefaultDomain).CustomFlag)) && (2 < (byte)LogPCG._0_1_)) {
        ::FName::ToString(&(this->DefaultDomain).DebugName,&local_48);
        ::FName::ToString(&local_78.DebugName,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      TArrayPrivateFriend::Serialize<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_>
                (param_1,&local_90);
      uVar9 = (ulonglong)local_90.ArrayNum;
      pFVar13 = (FPCGMetadataDomainID *)(local_90.AllocatorInstance.Data + uVar9 * 0x10);
      local_7c = local_90.ArrayNum;
      uVar10 = uVar9;
      FVar12.Data = local_90.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar9 != (int)uVar10) {
          local_res10[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<FPCGMetadataDomainID,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if ((FPCGMetadataDomainID *)FVar12.Data == pFVar13) break;
        puVar3 = *(ulonglong **)&param_1->field_0x8;
        bVar5 = false;
        puVar1 = (uint *)*puVar3 + 1;
        if ((uint *)puVar3[1] < puVar1) {
          local_94 = 0;
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_94,4);
          if (1 < local_94) {
            FArchiveState::SetError((FArchiveState *)param_1);
          }
          uVar2 = local_94;
          if ((param_1->field_0x28 & 1) != 0) goto LAB_149e8d64b;
        }
        else {
          uVar2 = *(uint *)*puVar3;
          *puVar3 = (ulonglong)puVar1;
LAB_149e8d64b:
          bVar5 = uVar2 != 0;
        }
        if (((FPCGMetadataDomainID *)FVar12.Data)->Flag != Default) {
          pFVar8 = FindOrCreateMetadataDomain(this,(FPCGMetadataDomainID *)FVar12.Data);
          if ((pFVar8 == (FPCGMetadataDomain *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NewMetadataDomain",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                                 ,0x17a,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (bVar5) {
            (**(code **)(pFVar8->_padding_ + 8))(pFVar8,param_1);
          }
        }
        uVar9 = local_90._8_8_ & 0xffffffff;
        FVar12.Data = FVar12.Data + 0x10;
        uVar10 = (ulonglong)local_7c;
      }
    }
  }
  if ((FPCGMetadataDomainID *)local_90.AllocatorInstance.Data != (FPCGMetadataDomainID *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(&local_80);
  return;
}

// Serialize @ 149e8d860

void __thiscall UPCGMetadata::Serialize(UPCGMetadata *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetAttributeFromDataProperty @ 149e8dc90

bool __thiscall
UPCGMetadata::SetAttributeFromDataProperty
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,long64 *param_2,void *param_3,
          FProperty *param_4,bool param_5)

{
  FName FVar1;
  bool bVar2;
  undefined7 uStack_37;
  <lambda_1> local_28;
  
  local_28.Metadata = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (local_28.Metadata != (FPCGMetadataDomain *)0x0) {
    FVar1 = param_1->Name;
    if (((param_4 == (FProperty *)0x0) || (param_3 == (void *)0x0)) ||
       ((!param_5 && (bVar2 = FPCGMetadataDomain::HasAttribute(local_28.Metadata,FVar1), !bVar2))))
    {
      bVar2 = false;
    }
    else {
      local_28._17_7_ = uStack_37;
      local_28.bCreate = param_5;
      local_28.AttributeName = FVar1;
      local_28.EntryKey = param_2;
      bVar2 = PCGPropertyHelpers::
              GetPropertyValueWithCallback<void,_PCGMetadata::SetAttributeFromPropertyHelper<void>_::__l2::<lambda_1>_>
                        (param_3,param_4,&local_28);
    }
    return bVar2;
  }
  return false;
}

// SetAttributeFromProperty @ 149e8de20

bool __thiscall
UPCGMetadata::SetAttributeFromProperty
          (UPCGMetadata *this,FPCGAttributeIdentifier *param_1,long64 *param_2,UObject *param_3,
          FProperty *param_4,bool param_5)

{
  FName FVar1;
  bool bVar2;
  undefined7 uStack_37;
  <lambda_1> local_28;
  
  local_28.Metadata = FindOrCreateMetadataDomain(this,&param_1->MetadataDomain);
  if (local_28.Metadata != (FPCGMetadataDomain *)0x0) {
    FVar1 = param_1->Name;
    if (((param_4 == (FProperty *)0x0) || (param_3 == (UObject *)0x0)) ||
       ((!param_5 && (bVar2 = FPCGMetadataDomain::HasAttribute(local_28.Metadata,FVar1), !bVar2))))
    {
      bVar2 = false;
    }
    else {
      local_28._17_7_ = uStack_37;
      local_28.bCreate = param_5;
      local_28.AttributeName = FVar1;
      local_28.EntryKey = param_2;
      bVar2 = PCGPropertyHelpers::
              GetPropertyValueWithCallback<UObject,_PCGMetadata::SetAttributeFromPropertyHelper<UObject>_::__l2::<lambda_1>_>
                        (param_3,param_4,&local_28);
    }
    return bVar2;
  }
  return false;
}

// SetAttributes @ 149e8ef70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGMetadata::SetAttributes
          (UPCGMetadata *this,TArrayView<__int64_const_,int> *param_1,UPCGMetadata *param_2,
          TArrayView<__int64,int> *param_3,FPCGContext *param_4)

{
  FPCGContext *pFVar1;
  FPCGMetadataDomain *this_00;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar2;
  FPCGMetadataDomain *pFVar3;
  FPCGMetadataDomain *pFVar4;
  FString local_28;
  
  pFVar1 = param_4;
  if (param_2 != (UPCGMetadata *)0x0) {
    pFVar4 = (FPCGMetadataDomain *)0x0;
    param_4._0_4_ = 0;
    ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::GetAttributeCount_::__l2::<lambda_1>_>
              (param_2,(<lambda_1>)&param_4);
    if ((int)param_4 != 0) {
      param_4._0_4_ = 0;
      ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::GetAttributeCount_::__l2::<lambda_1>_>
                (this,(<lambda_1>)&param_4);
      if (((int)param_4 != 0) && (param_1->ArrayNum != 0)) {
        if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
           (this_00 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
           this_00 == (FPCGMetadataDomain *)0x0)) {
          if (1 < (byte)LogPCG._0_1_) {
            ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_28);
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe4170,
                       (FLogCategoryBase *)&LogPCG);
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          pTVar2 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                           *)&param_2->MetadataDomains,&PCGMetadataDomainID::Default);
          pFVar3 = (FPCGMetadataDomain *)&pTVar2->field_0x10;
          if (pTVar2 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
            pFVar3 = pFVar4;
          }
          if (pFVar3 != (FPCGMetadataDomain *)0x0) {
            pFVar4 = (FPCGMetadataDomain *)pFVar3->_padding_;
          }
          FPCGMetadataDomain::SetAttributes(this_00,param_1,pFVar4,param_3,pFVar1);
        }
      }
    }
  }
  return;
}

// SetAttributes @ 149e8f0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGMetadata::SetAttributes
          (UPCGMetadata *this,TArrayView<__int64_const_,int> *param_1,UPCGMetadata *param_2,
          TArrayView<__int64,int> *param_3,FPCGContext *param_4)

{
  FPCGMetadataDomain *this_00;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  FPCGMetadataDomain *pFVar2;
  FPCGMetadataDomain *pFVar3;
  int local_28 [2];
  FString local_20;
  
  if (param_2 != (UPCGMetadata *)0x0) {
    pFVar3 = (FPCGMetadataDomain *)0x0;
    local_28[0] = 0;
    ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::GetAttributeCount_::__l2::<lambda_1>_>
              (param_2,(<lambda_1>)local_28);
    if (local_28[0] != 0) {
      local_28[0] = 0;
      ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::GetAttributeCount_::__l2::<lambda_1>_>
                (this,(<lambda_1>)local_28);
      if ((local_28[0] != 0) && (param_1->ArrayNum != 0)) {
        if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
           (this_00 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
           this_00 == (FPCGMetadataDomain *)0x0)) {
          if (1 < (byte)LogPCG._0_1_) {
            ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_20);
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe4170,
                       (FLogCategoryBase *)&LogPCG);
            if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_20.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                           *)&param_2->MetadataDomains,&PCGMetadataDomainID::Default);
          pFVar2 = (FPCGMetadataDomain *)&pTVar1->field_0x10;
          if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
            pFVar2 = pFVar3;
          }
          if (pFVar2 != (FPCGMetadataDomain *)0x0) {
            pFVar3 = (FPCGMetadataDomain *)pFVar2->_padding_;
          }
          FPCGMetadataDomain::SetAttributes(this_00,param_1,pFVar3,param_3,param_4);
        }
      }
    }
  }
  return;
}

// SetAttributes @ 149e8f210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPCGMetadata::SetAttributes(UPCGMetadata *this,long64 param_1,UPCGMetadata *param_2,long64 *param_3)

{
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar1;
  FPCGMetadataDomain *pFVar2;
  FPCGMetadataDomain *pFVar3;
  FString local_18;
  
  if (param_2 != (UPCGMetadata *)0x0) {
    pTVar1 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)&param_2->MetadataDomains,&PCGMetadataDomainID::Default);
    pFVar3 = (FPCGMetadataDomain *)0x0;
    pFVar2 = (FPCGMetadataDomain *)&pTVar1->field_0x10;
    if (pTVar1 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      pFVar2 = pFVar3;
    }
    if (pFVar2 != (FPCGMetadataDomain *)0x0) {
      pFVar3 = (FPCGMetadataDomain *)pFVar2->_padding_;
    }
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar2 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
       pFVar2 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_18);
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe4130,
                   (FLogCategoryBase *)&LogPCG);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      FPCGMetadataDomain::SetAttributes(pFVar2,param_1,pFVar3,param_3);
    }
  }
  return;
}

// SetAttributesByKey @ 149e8f300

void __thiscall
UPCGMetadata::SetAttributesByKey
          (UPCGMetadata *this,long64 param_1,UPCGMetadata *param_2,long64 param_3,long64 *param_4)

{
  *param_4 = param_3;
  SetAttributes(this,param_1,param_2,param_4);
  return;
}

// SetLastCachedSelectorOnOwner @ 149e8f760

void __thiscall
UPCGMetadata::SetLastCachedSelectorOnOwner
          (UPCGMetadata *this,FName param_1,FPCGMetadataDomainID *param_2)

{
  int iVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined **local_48;
  undefined8 local_40;
  undefined4 local_38;
  FName local_34;
  undefined8 local_2c;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    pUVar2 = Z_Construct_UClass_UPCGData_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(plVar3[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar3[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_149e8f7b4;
  }
  plVar3 = (longlong *)0x0;
LAB_149e8f7b4:
  if (plVar3 != (longlong *)0x0) {
    local_40 = 0;
    local_48 = &___7FPCGAttributePropertyInputSelector__6B_;
    local_38 = 0;
    local_2c = 0;
    local_34 = PCGMetadataAttributeConstants::LastAttributeName;
    if (PCGMetadataAttributeConstants::LastAttributeName != param_1) {
      local_34 = param_1;
    }
    local_20 = (FString *)0x0;
    local_18 = 0;
    local_10 = 0;
    if ((param_2->Flag != Default) &&
       ((param_2->Flag != (this->DefaultDomain).Flag ||
        (param_2->CustomFlag != (this->DefaultDomain).CustomFlag)))) {
      (**(code **)(*plVar3 + 0x350))(plVar3,param_2,&local_48);
    }
    (**(code **)(*plVar3 + 0x308))(plVar3,&local_48);
    DestructItems<FString,int>(local_20,(int)local_18);
    if (local_20 != (FString *)0x0) {
      FMemory::Free(local_20);
    }
  }
  return;
}

// SetPointAttributes @ 149e8fc80

void __thiscall
UPCGMetadata::SetPointAttributes
          (UPCGMetadata *this,FPCGPoint *param_1,UPCGMetadata *param_2,FPCGPoint *param_3)

{
  SetAttributes(this,param_1->MetadataEntry,param_2,&param_3->MetadataEntry);
  return;
}

// SetPointAttributes @ 149e8fca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGMetadata::SetPointAttributes
          (UPCGMetadata *this,TArrayView<FPCGPoint_const_,int> *param_1,UPCGMetadata *param_2,
          TArrayView<FPCGPoint,int> *param_3,FPCGContext *param_4)

{
  FPCGMetadataDomain *pFVar1;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar2;
  FPCGMetadataDomain *pFVar3;
  FPCGMetadataDomain *pFVar4;
  int local_28 [2];
  FString local_20;
  
  if (param_2 != (UPCGMetadata *)0x0) {
    pFVar4 = (FPCGMetadataDomain *)0x0;
    local_28[0] = 0;
    ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::GetAttributeCount_::__l2::<lambda_1>_>
              (param_2,(<lambda_1>)local_28);
    if (local_28[0] != 0) {
      local_28[0] = 0;
      ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::GetAttributeCount_::__l2::<lambda_1>_>
                (this,(<lambda_1>)local_28);
      if (local_28[0] != 0) {
        if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
           (pFVar1 = FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
           pFVar1 == (FPCGMetadataDomain *)0x0)) {
          if (1 < (byte)LogPCG._0_1_) {
            ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_20);
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe4150,
                       (FLogCategoryBase *)&LogPCG);
            if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_20.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          pTVar2 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                           *)&param_2->MetadataDomains,&PCGMetadataDomainID::Default);
          pFVar3 = (FPCGMetadataDomain *)&pTVar2->field_0x10;
          if (pTVar2 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
            pFVar3 = pFVar4;
          }
          if (pFVar3 != (FPCGMetadataDomain *)0x0) {
            pFVar4 = (FPCGMetadataDomain *)pFVar3->_padding_;
          }
          PCGMetadataHelpers::SetPointAttributes(pFVar1,param_1,pFVar4,param_3,param_4);
        }
      }
    }
  }
  return;
}

// SetupDomain @ 149ec1390

void __thiscall
UPCGMetadata::SetupDomain(UPCGMetadata *this,FPCGMetadataDomainID *param_1,bool param_2)

{
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *this_00;
  FPCGMetadataDomainID *pFVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  undefined8 uVar5;
  undefined3 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar10;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  TKeyInitializer<FPCGMetadataDomainID_&> local_res8;
  FPCGMetadataDomainID *local_res10;
  TPairInitializer<FPCGMetadataDomainID_&,TSharedPtr<FPCGMetadataDomain,1>_&> local_res18;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  undefined8 local_58;
  TReferenceControllerBase<1> *local_50;
  FPCGMetadataDomainID *local_48;
  undefined8 *local_40;
  
  this_00 = &this->MetadataDomains;
  uVar12 = param_1->CustomFlag;
  uVar16 = param_1->Flag - uVar12 ^ uVar12 >> 0xd;
  uVar15 = (-0x61c88647 - uVar16) - uVar12 ^ uVar16 << 8;
  uVar12 = (uVar12 - uVar15) - uVar16 ^ uVar15 >> 0xd;
  uVar16 = (uVar16 - uVar12) - uVar15 ^ uVar12 >> 0xc;
  uVar15 = (uVar15 - uVar16) - uVar12 ^ uVar16 << 0x10;
  uVar12 = (uVar12 - uVar15) - uVar16 ^ uVar15 >> 5;
  uVar16 = (uVar16 - uVar12) - uVar15 ^ uVar12 >> 3;
  uVar15 = (uVar15 - uVar16) - uVar12 ^ uVar16 << 10;
  iVar8 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FPCGMetadataDomainID>
                    ((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                      *)this_00,(uVar12 - uVar15) - uVar16 ^ uVar15 >> 0xf,param_1);
  if ((iVar8 != -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!MetadataDomains.Contains(DomainID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                         ,0x131,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((!param_2) || (param_1->Flag == Default)) {
    local_res10 = param_1;
    TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FPCGMetadataDomainID_&>_>
              ((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_res10);
    return;
  }
  uVar15 = (uint)PCGMetadataDomainID::Default.Flag - PCGMetadataDomainID::Default.CustomFlag ^
           (uint)PCGMetadataDomainID::Default.CustomFlag >> 0xd;
  uVar12 = (-0x61c88647 - uVar15) - PCGMetadataDomainID::Default.CustomFlag ^ uVar15 << 8;
  uVar16 = (PCGMetadataDomainID::Default.CustomFlag - uVar12) - uVar15 ^ uVar12 >> 0xd;
  uVar15 = (uVar15 - uVar16) - uVar12 ^ uVar16 >> 0xc;
  uVar12 = (uVar12 - uVar16) - uVar15 ^ uVar15 << 0x10;
  uVar16 = (uVar16 - uVar12) - uVar15 ^ uVar12 >> 5;
  uVar15 = (uVar15 - uVar16) - uVar12 ^ uVar16 >> 3;
  uVar12 = (uVar12 - uVar15) - uVar16 ^ uVar15 << 10;
  if (*(int *)&(this->MetadataDomains).field_0x8 != *(int *)&(this->MetadataDomains).field_0x34) {
    puVar13 = *(undefined1 **)&(this->MetadataDomains).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->MetadataDomains).field_0x38;
    }
    iVar8 = *(int *)(puVar13 +
                    (ulonglong)
                    (*(int *)&(this->MetadataDomains).field_0x48 - 1U &
                    ((uVar16 - uVar12) - uVar15 ^ uVar12 >> 0xf)) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this_00->field_0x0;
      do {
        lVar9 = (longlong)iVar8;
        if ((*(EPCGMetadataDomainFlag *)(lVar2 + lVar9 * 0x28) == PCGMetadataDomainID::Default.Flag)
           && (*(int *)(lVar2 + 4 + lVar9 * 0x28) == PCGMetadataDomainID::Default.CustomFlag)) {
          if (iVar8 != -1) {
            pTVar10 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                              *)this_00,&PCGMetadataDomainID::Default);
            if ((pTVar10 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0)
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Pair != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                      ,0x288,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(longlong *)&pTVar10->field_0x10 != 0) goto LAB_149ec15d1;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0x20 + lVar9 * 0x28);
      } while (iVar8 != -1);
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("MetadataDomains.Contains(PCGMetadataDomainID::Default) && MetadataDomains[PCGMetadataDomainID::Default].IsValid()"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                     ,0x134,L"");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_149ec15d1:
  pFVar1 = &this->DefaultDomain;
  if (pFVar1->Flag == Default) goto LAB_149ec1770;
  uVar12 = (this->DefaultDomain).CustomFlag;
  uVar15 = pFVar1->Flag - uVar12 ^ uVar12 >> 0xd;
  uVar14 = (-0x61c88647 - uVar15) - uVar12 ^ uVar15 << 8;
  uVar16 = (uVar12 - uVar14) - uVar15 ^ uVar14 >> 0xd;
  uVar12 = (uVar15 - uVar16) - uVar14 ^ uVar16 >> 0xc;
  uVar14 = (uVar14 - uVar12) - uVar16 ^ uVar12 << 0x10;
  uVar15 = (uVar16 - uVar14) - uVar12 ^ uVar14 >> 5;
  uVar12 = (uVar12 - uVar15) - uVar14 ^ uVar15 >> 3;
  uVar16 = (uVar14 - uVar12) - uVar15 ^ uVar12 << 10;
  iVar8 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FPCGMetadataDomainID>
                    ((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                      *)this_00,(uVar15 - uVar16) - uVar12 ^ uVar16 >> 0xf,pFVar1);
  if (iVar8 == -1) {
LAB_149ec16db:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetadataDomains.Contains(DefaultDomain) && MetadataDomains[DefaultDomain] == MetadataDomains[PCGMetadataDomainID::Default]"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                       ,0x138,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pTVar10 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                      *)this_00,&PCGMetadataDomainID::Default);
    if ((pTVar10 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar11 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                      *)this_00,pFVar1);
    if ((pTVar11 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)&pTVar11->field_0x10 != *(longlong *)&pTVar10->field_0x10) goto LAB_149ec16db;
  }
  pTVar10 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                    *)this_00,pFVar1);
  if ((pTVar10 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_68 = 0;
  FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&pTVar10->field_0x10 != &local_68) {
    *(undefined8 *)&pTVar10->field_0x10 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pTVar10->field_0x18,&FStack_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_60.ReferenceController);
LAB_149ec1770:
  uVar6 = *(undefined3 *)&param_1->field_0x1;
  iVar8 = param_1->CustomFlag;
  FVar4 = param_1->DebugName;
  pFVar1->Flag = param_1->Flag;
  *(undefined3 *)&pFVar1->field_0x1 = uVar6;
  pFVar1->CustomFlag = iVar8;
  (this->DefaultDomain).DebugName = FVar4;
  pTVar10 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                    *)this_00,&PCGMetadataDomainID::Default);
  if ((pTVar10 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_58 = *(undefined8 *)&pTVar10->field_0x10;
  local_50 = *(TReferenceControllerBase<1> **)&pTVar10->field_0x18;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar5 = *(undefined8 *)param_1;
  FVar4 = param_1->DebugName;
  local_40 = &local_58;
  local_48 = param_1;
  TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FPCGMetadataDomainID_&,TSharedPtr<FPCGMetadataDomain,1>_&>_>
            ((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
              *)this_00,&local_res18,(bool *)&local_48);
  lVar2 = *(longlong *)&this_00->field_0x0;
  if ((*(longlong *)(lVar2 + 0x10 + (longlong)(int)local_res18.Key * 0x28) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + (longlong)(int)local_res18.Key * 0x28 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = uVar5;
  *(FName *)(lVar2 + 0x18) = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  return;
}

// SetupDomainsFromOtherMetadataIfNeeded @ 149ec1890

void __thiscall
UPCGMetadata::SetupDomainsFromOtherMetadataIfNeeded(UPCGMetadata *this,UPCGMetadata *param_1)

{
  undefined1 *puVar1;
  FPCGMetadataDomainID *pFVar2;
  ulonglong uVar3;
  EPCGMetadataDomainFlag EVar4;
  code *pcVar5;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  int local_res18;
  FPCGMetadataDomainID local_a8;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((((param_1 != (UPCGMetadata *)0x0) && ((param_1->DefaultDomain).Flag != Default)) &&
      ((this->DefaultDomain).Flag == Default)) &&
     (((UObjectBaseUtility *)this->_padding_ == (UObjectBaseUtility *)0x0 ||
      (bVar7 = UObjectBaseUtility::IsA<UPCGData>((UObjectBaseUtility *)this->_padding_), !bVar7))))
  {
    iStack_90 = 0;
    local_98 = &param_1->MetadataDomains;
    puVar1 = &(param_1->MetadataDomains).field_0x10;
    iVar8 = *(int *)&(param_1->MetadataDomains).field_0x28;
    uStack_8c = 1;
    local_78 = 0;
    iStack_7c = 0;
    if (iVar8 != 0) {
      puVar16 = *(uint **)&(param_1->MetadataDomains).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar13 = *puVar16;
      while (uVar13 == 0) {
        lVar11 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_149ec198c;
        uVar13 = puVar16[lVar11 + 1];
      }
      uStack_8c = -uVar13 & uVar13;
      uVar3 = (ulonglong)uStack_8c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res18 = (int)lVar11;
      iStack_7c = local_78 + -1 + local_res18;
      if (iVar8 < iStack_7c) {
        iStack_7c = iVar8;
      }
    }
LAB_149ec198c:
    uVar13 = *(uint *)&(param_1->MetadataDomains).field_0x28;
    iStack_70 = *(int *)&(param_1->MetadataDomains).field_0x8 -
                *(int *)&(param_1->MetadataDomains).field_0x34;
    uVar17 = uVar13 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    uStack_80 = 0xffffffff;
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar13 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_88 = puVar1;
    iStack_74 = iStack_7c;
    local_68 = local_98;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = *(uint *)&(param_1->MetadataDomains).field_0x28;
    if (uVar13 != uVar9) {
      puVar15 = *(undefined1 **)&(param_1->MetadataDomains).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar12;
        uVar17 = uVar17 + 0x20;
        iVar12 = iVar12 + 1;
        uVar13 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_149ec1a90;
        uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar13 = (int)lVar11 + -1 + uVar17;
      if ((int)uVar9 < (int)uVar13) {
        uVar13 = uVar9;
      }
    }
LAB_149ec1a90:
    while( true ) {
      pTVar6 = local_68;
      if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_60.CurrentBitIndex == uVar13) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar6 == &param_1->MetadataDomains)) break;
      lVar11 = *(longlong *)pTVar6;
      uVar17 = *(uint *)(lVar11 + 4 + (longlong)TStack_60.CurrentBitIndex * 0x28);
      pFVar2 = (FPCGMetadataDomainID *)(lVar11 + (longlong)TStack_60.CurrentBitIndex * 0x28);
      EVar4 = pFVar2->Flag;
      uVar14 = EVar4 - uVar17 ^ uVar17 >> 0xd;
      uVar9 = (-0x61c88647 - uVar14) - uVar17 ^ uVar14 << 8;
      uVar10 = (uVar17 - uVar9) - uVar14 ^ uVar9 >> 0xd;
      uVar14 = (uVar14 - uVar10) - uVar9 ^ uVar10 >> 0xc;
      uVar9 = (uVar9 - uVar14) - uVar10 ^ uVar14 << 0x10;
      uVar10 = (uVar10 - uVar9) - uVar14 ^ uVar9 >> 5;
      uVar14 = (uVar14 - uVar10) - uVar9 ^ uVar10 >> 3;
      uVar9 = (uVar9 - uVar14) - uVar10 ^ uVar14 << 10;
      iVar8 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FPCGMetadataDomainID>
                        ((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                          *)&this->MetadataDomains,(uVar10 - uVar9) - uVar14 ^ uVar9 >> 0xf,pFVar2);
      if (iVar8 == -1) {
        if ((EVar4 == (param_1->DefaultDomain).Flag) &&
           (uVar17 == (param_1->DefaultDomain).CustomFlag)) {
          bVar7 = true;
        }
        else {
          bVar7 = false;
        }
        local_a8.Flag = pFVar2->Flag;
        local_a8._1_3_ = *(undefined3 *)&pFVar2->field_0x1;
        local_a8.CustomFlag = pFVar2->CustomFlag;
        local_a8.DebugName = pFVar2->DebugName;
        SetupDomain(this,&local_a8,bVar7);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// SetupDomainsFromPCGDataType @ 149ec1bf0

void __thiscall
UPCGMetadata::SetupDomainsFromPCGDataType(UPCGMetadata *this,TSubclassOf<UPCGData> *param_1)

{
  int iVar1;
  UObject *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UPCGMetadata *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FString local_28;
  FString local_18;
  
  pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UPCGData_NoRegister();
  if (pUVar4 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar5->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
  if (pUVar5 == (UClass *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UPCGData_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
      goto LAB_149ec1c88;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_149ec1c88:
  if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar5);
  }
  pUVar2 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar6 = (UPCGMetadata *)(**(code **)(*(longlong *)pUVar2 + 800))(pUVar2);
      SetupDomainsFromOtherMetadataIfNeeded(this,pUVar6);
      return;
    }
    pFVar7 = GetTypeName<UPCGData_const_>(&local_28);
    pwVar8 = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = GetFullNameForCastLogError<UObject>(&local_18,pUVar2);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar8,pwVar9);
  }
  pFVar7 = GetTypeName<UPCGData_const_>(&local_28);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar8);
}

// StaticRegisterNativesUPCGMetadata @ 149ec1e10

void __cdecl UPCGMetadata::StaticRegisterNativesUPCGMetadata(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2b;
  local_18.DataPtr = Z_Construct_UClass_UPCGMetadata_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAccumulatePointWeightedAttributes @ 149ec5180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGMetadata::execAccumulatePointWeightedAttributes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double *pdVar2;
  double *pdVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStackY_228 [32];
  int local_1f8;
  float local_1f4;
  UPCGMetadata *local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  double dStack_160;
  double local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_8c;
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  uVar6 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_1e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_1e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_188 = 0x3f800000;
  local_128 = 0x3f000000;
  local_120 = 0xffffffffffffffff;
  local_1d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_1d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_1b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_198 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_190 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_178 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                             0x20) ^ uVar6,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar5);
  local_180 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar6,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar5);
  local_168 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
  dStack_160 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_148 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_140 = _UNK_150689688;
  local_138 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_130 = _UNK_150689688;
  local_170 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar6,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar5);
  local_158 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  local_1f0 = (UPCGMetadata *)0x0;
  pdVar2 = &local_1e8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  local_1f4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f4);
  }
  local_1f8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  bVar4 = local_1f8 != 0;
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_b8 = 0x3f800000;
  local_58 = 0x3f000000;
  local_50 = 0xffffffffffffffff;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uStack_90 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  uStack_8c = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_c8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_b0 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar6,
                      UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar5);
  local_a8 = CONCAT44(uStack_8c ^ uVar6,uStack_90 ^ uVar5);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar6,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar5);
  local_78 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_70 = _UNK_150689688;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_98 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_94 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  pdVar3 = &local_118;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AccumulateWeightedAttributes
            ((UPCGMetadata *)param_1,(long64)pdVar2[0x19],local_1f0,local_1f4,bVar4,
             (long64 *)(pdVar3 + 0x19));
  return;
}

// execAccumulateWeightedAttributesByKey @ 149ec5520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadata::execAccumulateWeightedAttributesByKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  float fVar3;
  longlong lVar4;
  long64 lVar5;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar6;
  FPCGMetadataDomain *pFVar7;
  long64 *plVar8;
  FPCGMetadataDomain *pFVar9;
  bool bVar10;
  int local_res10 [2];
  float local_res20 [2];
  long64 local_68;
  longlong local_60;
  long64 local_58;
  long64 local_50;
  FString local_48 [2];
  
  pFVar9 = (FPCGMetadataDomain *)0x0;
  local_58 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_60 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar10 = local_res10[0] != 0;
  local_50 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_68 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  lVar5 = local_58;
  lVar4 = local_60;
  fVar3 = local_res20[0];
  plVar8 = &local_68;
  if ((long64 *)param_2->MostRecentPropertyAddress != (long64 *)0x0) {
    plVar8 = (long64 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *plVar8 = local_50;
  if (lVar4 != 0) {
    pTVar6 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)(lVar4 + 0x90),&PCGMetadataDomainID::Default);
    pFVar7 = (FPCGMetadataDomain *)&pTVar6->field_0x10;
    if (pTVar6 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      pFVar7 = pFVar9;
    }
    if (pFVar7 != (FPCGMetadataDomain *)0x0) {
      pFVar9 = (FPCGMetadataDomain *)pFVar7->_padding_;
    }
  }
  if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
     (pFVar7 = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&PCGMetadataDomainID::Default),
     pFVar7 == (FPCGMetadataDomain *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,local_48);
      UE::Logging::Private::BasicLog<2>
                (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const*___ptr64,float,bool,__int64&___ptr64)___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,float&___ptr64,bool&___ptr64,__int64&___ptr64>(FPCGMetadataDomainID_const&___ptr64,void_(__cdecl_FPCGMetadataDomain::*)(__int64,FPCGMetadataDomain_const*___ptr64,float,bool,__int64&___ptr64)___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,float&___ptr64,bool&___ptr64,__int64&___ptr64)___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FPCGMetadataDomain::AccumulateWeightedAttributes(pFVar7,lVar5,pFVar9,fVar3,bVar10,plVar8);
  }
  return;
}

// execAddAttributes @ 149ec57a0

void __cdecl UPCGMetadata::execAddAttributes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FWeakObjectPtr FVar2;
  UPCGMetadata *pUVar3;
  bool bVar4;
  bool local_res10 [16];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  <lambda_1> local_68;
  FPCGMetadataInitializeParams local_48;
  
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_78 != (FWeakObjectPtr)0x0) && ((*(uint *)((longlong)local_78 + 8) >> 0x1e & 1) == 0)) {
    local_68.InParams = &local_48;
    local_68.bAddSucceeded = local_res10;
    local_48.Parent = (UPCGMetadata *)local_78;
    local_48.DomainMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.DomainMapping.ArrayNum = 0;
    local_48.DomainMapping.ArrayMax = 0;
    local_48.DomainInitializeParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.DomainInitializeParams.ArrayNum = 0;
    local_48.DomainInitializeParams.ArrayMax = 0;
    local_res10[0] = false;
    local_68.__this = (UPCGMetadata *)param_1;
    ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::AddAttributes_::__l2::<lambda_1>_>
              ((UPCGMetadata *)local_78,&local_68);
    pUVar3 = local_48.Parent;
    if (local_res10[0] != false) {
      FVar2.ObjectIndex = *(int *)&param_1[1].field_0x0;
      FVar2.ObjectSerialNumber = *(int *)&param_1[1].field_0x4;
      if (FVar2 == (FWeakObjectPtr)0x0) {
        bVar4 = (FWeakObjectPtr)local_48.Parent == (FWeakObjectPtr)0x0;
      }
      else {
        bVar4 = FVar2 == (FWeakObjectPtr)local_48.Parent;
      }
      if (!bVar4) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((FWeakObjectPtr)local_48.Parent != (FWeakObjectPtr)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_48.Parent);
        }
        local_70.ObjectIndex = 0;
        local_70.ObjectSerialNumber = 0;
        local_res20 = (FWeakObjectPtr)pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((FWeakObjectPtr)pUVar3 != (FWeakObjectPtr)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res20);
        TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Emplace<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>
                  ((TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)&param_1[1].field_0x8,
                   (TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr> *)&local_res20,
                   (bool *)&local_70);
      }
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_48.DomainInitializeParams.AllocatorInstance.Data,
               local_48.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_48.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_48.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_48.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DomainMapping.AllocatorInstance.Data);
    }
  }
  return;
}

// execAddAttributesFiltered @ 149ec5920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UPCGMetadata::execAddAttributesFiltered(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName *this;
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement FVar5;
  UPCGMetadata *pUVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  FPCGMetadataDomainID *pFVar14;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar15;
  undefined1 auStackY_1b8 [32];
  FScriptContainerElement local_188;
  FScriptContainerElement local_187;
  bool local_186 [6];
  UPCGMetadata *local_180;
  FPCGMetadataInitializeParams local_178;
  FWeakObjectPtr local_150;
  TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr> local_148;
  UPCGMetadata *local_140;
  undefined8 *local_138;
  undefined1 local_130 [32];
  void *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ForElementType<FSetElementId> local_f0;
  int local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  FName FStack_d0;
  undefined8 local_c8;
  FName FStack_c0;
  EPCGMetadataDomainFlag local_b8;
  <lambda_1> local_a8;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  puVar12 = (undefined8 *)0x0;
  local_180 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_187 = (FScriptContainerElement)0x0;
  pTVar15 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_88;
  if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
    pTVar15 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
              param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_187,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_187);
  }
  local_188 = (FScriptContainerElement)0x0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  FVar5 = local_187;
  FVar4 = local_188;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_180 != (UPCGMetadata *)0x0) && (((uint)local_180->_padding_ >> 0x1e & 1) == 0)) {
    local_178.Parent = local_180;
    local_178.DomainMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.DomainMapping.ArrayNum = 0;
    local_178.DomainMapping.ArrayMax = 0;
    local_178.DomainInitializeParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.DomainInitializeParams.ArrayNum = 0;
    local_178.DomainInitializeParams.ArrayMax = 0;
    if (((uint)local_180->_padding_ >> 0x1e & 1) == 0) {
      pTVar11 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                        *)&local_180->MetadataDomains,&PCGMetadataDomainID::Default);
      puVar13 = (undefined8 *)&pTVar11->field_0x10;
      if (pTVar11 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
        puVar13 = puVar12;
      }
      if (puVar13 != (undefined8 *)0x0) {
        puVar12 = (undefined8 *)*puVar13;
      }
      local_108 = ___xmm_00000000ffffffff0000008000000000;
      uStack_100 = _UNK_150631d98;
      local_130._0_8_ = (FScriptContainerElement *)0x0;
      local_130._8_4_ = 0;
      local_130._12_4_ = -1;
      local_110 = (void *)0x0;
      local_f0 = (ForElementType<FSetElementId>)0x0;
      local_e8 = 0;
      local_e0 = 0;
      local_b8 = Default;
      local_138 = puVar12;
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x898,&local_178.DomainInitializeParams.AllocatorInstance,
                          &local_178.DomainInitializeParams.ArrayMax);
      local_178.DomainInitializeParams.ArrayNum = iVar10 + 1;
      pFVar14 = (FPCGMetadataDomainID *)
                (local_178.DomainInitializeParams.AllocatorInstance.Data + (longlong)iVar10 * 0x98);
      *pFVar14 = PCGMetadataDomainID::Default;
      this = &pFVar14[1].DebugName;
      *(undefined8 **)(pFVar14 + 1) = local_138;
      this->ComparisonIndex = 0;
      this->Number = 0;
      *(undefined4 *)(pFVar14 + 2) = 0;
      pFVar14[2].CustomFlag = -1;
      pFVar14[3].DebugName.ComparisonIndex = 0;
      pFVar14[3].DebugName.Number = 0;
      *(undefined4 *)(pFVar14 + 4) = 0;
      pFVar14[4].CustomFlag = 0x80;
      pFVar14[4].DebugName.ComparisonIndex.Value = 0xffffffff;
      pFVar14[4].DebugName.Number = 0;
      pFVar14[5].DebugName.ComparisonIndex = 0;
      pFVar14[5].DebugName.Number = 0;
      *(undefined4 *)(pFVar14 + 6) = 0;
      if (local_130._12_4_ != -1) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this,
                   (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_130);
      }
      *(undefined1 *)&pFVar14[6].DebugName.ComparisonIndex.Value = (undefined1)local_e0;
      pFVar14[9].Flag = Default;
      *(undefined1 *)((longlong)&pFVar14[6].DebugName.ComparisonIndex.Value + 1) = local_e0._1_1_;
      pFVar14[9].Flag = local_b8;
      if (local_b8 != Default) {
        pFVar14[7].Flag = (undefined1)local_d8;
        *(undefined3 *)&pFVar14[7].field_0x1 = local_d8._1_3_;
        pFVar14[7].CustomFlag = local_d8._4_4_;
        pFVar14[7].DebugName = FStack_d0;
        pFVar14[8].Flag = (undefined1)local_c8;
        *(undefined3 *)&pFVar14[8].field_0x1 = local_c8._1_3_;
        pFVar14[8].CustomFlag = local_c8._4_4_;
        pFVar14[8].DebugName = FStack_c0;
      }
      if (local_130._12_4_ != -1) {
        local_e8 = 0;
        if (local_f0 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_f0);
        }
        local_130._8_4_ = 0;
        if (local_130._12_4_ != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_130,0,(int *)(local_130 + 0xc));
        }
        uVar8 = local_108._4_4_;
        uStack_100 = 0xffffffff;
        local_108 = (ulonglong)local_108._4_4_ << 0x20;
        if (0x80 < uVar8) {
          local_108 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_130 + 0x10),0);
        }
        if (local_110 != (void *)0x0) {
          FMemory::Free(local_110);
        }
        if ((FScriptContainerElement *)local_130._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_130._0_8_);
        }
      }
    }
    if ((local_178.DomainInitializeParams.ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar7.Data = local_178.DomainInitializeParams.AllocatorInstance.Data;
    local_178.DomainInitializeParams.AllocatorInstance.Data[0x68] = FVar5;
    local_178.DomainInitializeParams.AllocatorInstance.Data[0x69] = FVar4;
    if ((*(int *)&(pTVar15->Elements).field_0x8 != *(int *)&(pTVar15->Elements).field_0x34) &&
       (this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                  (local_178.DomainInitializeParams.AllocatorInstance.Data + 0x18),
       pTVar15 != this_00)) {
      *(undefined4 *)(local_178.DomainInitializeParams.AllocatorInstance.Data + 0x60) = 0;
      if (*(void **)(local_178.DomainInitializeParams.AllocatorInstance.Data + 0x58) != (void *)0x0)
      {
        FMemory::Free(*(void **)(local_178.DomainInitializeParams.AllocatorInstance.Data + 0x58));
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00);
      *(undefined8 *)&this_00->Elements = 0;
      *(undefined8 *)(FVar7.Data + 0x20) = 0;
      *(undefined8 *)(FVar7.Data + 0x38) = 0;
      *(undefined4 *)(FVar7.Data + 0x40) = 0;
      *(undefined4 *)(FVar7.Data + 0x44) = 0x80;
      *(undefined4 *)(FVar7.Data + 0x48) = 0xffffffff;
      *(undefined4 *)(FVar7.Data + 0x4c) = 0;
      *(undefined8 *)(FVar7.Data + 0x58) = 0;
      *(undefined4 *)(FVar7.Data + 0x60) = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(this_00,pTVar15);
      if ((*(int *)(FVar7.Data + 0x24) == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_178.Parent != (UPCGMetadata *)0x0) {
      local_a8.InParams = &local_178;
      local_186[0] = false;
      local_a8.bAddSucceeded = local_186;
      local_a8.__this = (UPCGMetadata *)param_1;
      ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::AddAttributes_::__l2::<lambda_1>_>
                (local_178.Parent,&local_a8);
      pUVar6 = local_178.Parent;
      if (local_186[0] != false) {
        if (*(UPCGMetadata **)(param_1 + 1) == (UPCGMetadata *)0x0) {
          bVar9 = local_178.Parent == (UPCGMetadata *)0x0;
        }
        else {
          bVar9 = *(UPCGMetadata **)(param_1 + 1) == local_178.Parent;
        }
        if (!bVar9) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_178.Parent != (UPCGMetadata *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_178.Parent);
          }
          local_150.ObjectIndex = 0;
          local_150.ObjectSerialNumber = 0;
          local_140 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar6 != (UPCGMetadata *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_140);
          TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>
                    ((TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)&param_1[1].field_0x8,&local_148,(bool *)&local_150);
        }
      }
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_178.DomainInitializeParams.AllocatorInstance.Data,
               local_178.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_178.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_178.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_178.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.DomainMapping.AllocatorInstance.Data);
    }
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar10 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// execAddEntry @ 149ec5f00

void __cdecl UPCGMetadata::execAddEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  long64 lVar2;
  long64 local_res10;
  
  local_res10 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = AddEntry((UPCGMetadata *)param_1,local_res10);
  *(long64 *)param_3 = lVar2;
  return;
}

// execBP_AddAttribute @ 149ec5fa0

void __cdecl UPCGMetadata::execBP_AddAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FWeakObjectPtr FVar2;
  FWeakObjectPtr FVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName FVar6;
  FName FVar7;
  FWeakObjectPtr this;
  bool bVar8;
  FPCGMetadataAttributeBase *pFVar9;
  FWeakObjectPtr local_res10 [2];
  FName local_res20;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  FName local_98;
  FPCGMetadataDomainID FStack_90;
  FPCGAttributeIdentifier local_78;
  FPCGAttributeIdentifier local_58;
  
  local_a8.ObjectIndex = 0;
  local_a8.ObjectSerialNumber = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  this = local_a8;
  FVar7 = local_res20;
  local_98 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = PCGMetadataDomainID::Default.DebugName;
  uVar4 = PCGMetadataDomainID::Default._0_8_;
  FStack_90.Flag = PCGMetadataDomainID::Default.Flag;
  FStack_90._1_3_ = PCGMetadataDomainID::Default._1_3_;
  FStack_90.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  FStack_90.DebugName = PCGMetadataDomainID::Default.DebugName;
  if (local_a8 != (FWeakObjectPtr)0x0) {
    local_78.Name = local_res20;
    local_78.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
    local_78.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
    local_78.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    local_78.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    bVar8 = HasAttribute((UPCGMetadata *)local_a8,&local_78);
    if (bVar8) {
      local_78.Name = local_98;
      local_78.MetadataDomain.Flag = FStack_90.Flag;
      local_78.MetadataDomain._1_3_ = FStack_90._1_3_;
      local_78.MetadataDomain.CustomFlag = FStack_90.CustomFlag;
      local_78.MetadataDomain.DebugName = FStack_90.DebugName;
      bVar8 = HasAttribute((UPCGMetadata *)param_1,&local_78);
      uVar5 = PCGMetadataDomainID::Default._0_8_;
      if (!bVar8) {
        FVar2.ObjectIndex = *(int *)&param_1[1].field_0x0;
        FVar2.ObjectSerialNumber = *(int *)&param_1[1].field_0x4;
        if (FVar2 == (FWeakObjectPtr)0x0) {
          bVar8 = this == (FWeakObjectPtr)0x0;
        }
        else {
          bVar8 = FVar2 == this;
        }
        local_58.Name = local_98;
        local_58.MetadataDomain.Flag = FStack_90.Flag;
        local_58.MetadataDomain._1_3_ = FStack_90._1_3_;
        local_58.MetadataDomain.CustomFlag = FStack_90.CustomFlag;
        local_58.MetadataDomain.DebugName = FStack_90.DebugName;
        local_78.Name = FVar7;
        PCGMetadataDomainID::Default.Flag = (EPCGMetadataDomainFlag)uVar4;
        PCGMetadataDomainID::Default._1_3_ = SUB83(uVar4,1);
        PCGMetadataDomainID::Default.CustomFlag = SUB84(uVar4,4);
        local_78.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
        local_78.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
        local_78.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        local_78.MetadataDomain.DebugName = FVar6;
        PCGMetadataDomainID::Default._0_8_ = uVar5;
        pFVar9 = GetConstAttribute((UPCGMetadata *)this,&local_58);
        local_58.Name = local_78.Name;
        local_58.MetadataDomain.Flag = local_78.MetadataDomain.Flag;
        local_58.MetadataDomain._1_3_ = local_78.MetadataDomain._1_3_;
        local_58.MetadataDomain.CustomFlag = local_78.MetadataDomain.CustomFlag;
        local_58.MetadataDomain.DebugName = local_78.MetadataDomain.DebugName;
        pFVar9 = CopyAttribute((UPCGMetadata *)param_1,pFVar9,&local_58,bVar8,false,false);
        FVar3.ObjectIndex = *(int *)&param_1[1].field_0x0;
        FVar3.ObjectSerialNumber = *(int *)&param_1[1].field_0x4;
        if (FVar3 == (FWeakObjectPtr)0x0) {
          bVar8 = this == (FWeakObjectPtr)0x0;
        }
        else {
          bVar8 = FVar3 == this;
        }
        if ((!bVar8) && (pFVar9 != (FPCGMetadataAttributeBase *)0x0)) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          local_a0.ObjectIndex = 0;
          local_a0.ObjectSerialNumber = 0;
          local_res10[0] = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)local_res10);
          TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>
                    ((TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)&param_1[1].field_0x8,
                     (TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr> *)local_res10,
                     (bool *)&local_a0);
        }
      }
    }
  }
  return;
}

// execBP_ClearAttribute @ 149ec61d0

void __cdecl UPCGMetadata::execBP_ClearAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  FName local_28;
  FPCGMetadataDomainID FStack_20;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_res10;
  FStack_20 = PCGMetadataDomainID::Default;
  WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(FName),FName_&>
            ((UPCGMetadata *)param_1,&FStack_20,(pmf_a3074a3d)0x149e4ca60,&local_28);
  return;
}

// execBP_CopyAttribute @ 149ec62a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGMetadata::execBP_CopyAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  UPCGMetadata *this;
  bool bVar4;
  long64 lVar5;
  long64 lVar6;
  FPCGMetadataAttributeBase *pFVar7;
  FName local_res10 [2];
  FName local_res20;
  UPCGMetadata *local_98 [2];
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FPCGAttributeIdentifier local_68;
  FPCGAttributeIdentifier local_48;
  
  local_98[0] = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  this = local_98[0];
  FVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = local_res10[0];
  FStack_80.Flag = PCGMetadataDomainID::Default.Flag;
  FStack_80._1_3_ = PCGMetadataDomainID::Default._1_3_;
  FStack_80.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
  if (local_98[0] != (UPCGMetadata *)0x0) {
    local_68.Name = local_res20;
    local_68.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
    local_68.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
    local_68.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
    local_68.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    bVar4 = HasAttribute((UPCGMetadata *)param_1,&local_68);
    if (!bVar4) {
      local_68.Name = local_88;
      local_68.MetadataDomain.Flag = FStack_80.Flag;
      local_68.MetadataDomain._1_3_ = FStack_80._1_3_;
      local_68.MetadataDomain.CustomFlag = FStack_80.CustomFlag;
      local_68.MetadataDomain.DebugName = FStack_80.DebugName;
      bVar4 = HasAttribute(this,&local_68);
      if (bVar4) {
        if (*(UPCGMetadata **)(param_1 + 1) == (UPCGMetadata *)0x0) {
          bVar4 = this == (UPCGMetadata *)0x0;
        }
        else {
          bVar4 = *(UPCGMetadata **)(param_1 + 1) == this;
        }
        if (bVar4) {
          local_68.Name = local_88;
          local_68.MetadataDomain.DebugName = FStack_80.DebugName;
          local_68.MetadataDomain.Flag = FStack_80.Flag;
          local_68.MetadataDomain._1_3_ = FStack_80._1_3_;
          local_68.MetadataDomain.CustomFlag = FStack_80.CustomFlag;
          CopyExistingAttribute((UPCGMetadata *)param_1,&local_68,FVar3,true);
        }
        else {
          lVar5 = GetItemCountForChild(this);
          lVar6 = GetItemCountForChild((UPCGMetadata *)param_1);
          if (lVar6 == lVar5) {
            local_48.Name = local_88;
            local_48.MetadataDomain.Flag = FStack_80.Flag;
            local_48.MetadataDomain._1_3_ = FStack_80._1_3_;
            local_48.MetadataDomain.CustomFlag = FStack_80.CustomFlag;
            local_68.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
            local_68.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
            local_68.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
            local_68.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
            local_48.MetadataDomain.DebugName = FStack_80.DebugName;
            local_68.Name = FVar3;
            pFVar7 = GetConstAttribute(this,&local_48);
            local_48.Name = local_68.Name;
            local_48.MetadataDomain.Flag = local_68.MetadataDomain.Flag;
            local_48.MetadataDomain._1_3_ = local_68.MetadataDomain._1_3_;
            local_48.MetadataDomain.CustomFlag = local_68.MetadataDomain.CustomFlag;
            local_48.MetadataDomain.DebugName = local_68.MetadataDomain.DebugName;
            CopyAttribute((UPCGMetadata *)param_1,pFVar7,&local_48,false,true,true);
          }
          else if (1 < (byte)LogPCG._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          }
        }
      }
    }
  }
  return;
}

// execBP_CopyExistingAttribute @ 149ec6500

void __cdecl
UPCGMetadata::execBP_CopyExistingAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  FPCGAttributeIdentifier local_38;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.Name = local_res18;
  local_38.MetadataDomain = PCGMetadataDomainID::Default;
  bVar2 = CopyExistingAttribute((UPCGMetadata *)param_1,&local_38,local_res20,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execBP_DeleteAttribute @ 149ec6640

void __cdecl UPCGMetadata::execBP_DeleteAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  FName local_28;
  FPCGMetadataDomainID FStack_20;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_res10;
  FStack_20 = PCGMetadataDomainID::Default;
  WithMetadataDomain<void_(__cdecl_FPCGMetadataDomain::*)(FName),FName_&>
            ((UPCGMetadata *)param_1,&FStack_20,(pmf_a3074a3d)0x149e54330,&local_28);
  return;
}

// execBP_HasAttribute @ 149ec6710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGMetadata::execBP_HasAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  bool bVar3;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar4;
  undefined8 *puVar5;
  FName local_res8;
  FString local_38;
  FName local_28;
  FPCGMetadataDomainID local_20;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20.Flag = PCGMetadataDomainID::Default.Flag;
  local_20._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_20.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_20.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_28 = local_res8;
  pTVar4 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   *)&param_1[3].field_0x18,&local_20);
  puVar5 = (undefined8 *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  if ((puVar5 == (undefined8 *)0x0) || ((FPCGMetadataDomain *)*puVar5 == (FPCGMetadataDomain *)0x0))
  {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_20.DebugName,&local_38);
      UE::Logging::Private::BasicLog<2>
                (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithConstMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(FName)const___ptr64,FName&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    *(undefined1 *)param_3 = 0;
  }
  else {
    bVar3 = FPCGMetadataDomain::HasAttribute((FPCGMetadataDomain *)*puVar5,FVar2);
    *(bool *)param_3 = bVar3;
  }
  return;
}

// execBP_RenameAttribute @ 149ec6850

void __cdecl UPCGMetadata::execBP_RenameAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName local_res10;
  FName local_res18 [2];
  FPCGAttributeIdentifier local_38;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.Name = local_res10;
  local_38.MetadataDomain = PCGMetadataDomainID::Default;
  bVar2 = RenameAttribute((UPCGMetadata *)param_1,&local_38,local_res18[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execCopyAttributes @ 149ec6f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGMetadata::execCopyAttributes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGMetadata *this;
  long64 lVar2;
  long64 lVar3;
  bool bVar4;
  UPCGMetadata *local_res10;
  
  local_res10 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UPCGMetadata *)0x0) {
    if (*(UPCGMetadata **)(param_1 + 1) == (UPCGMetadata *)0x0) {
      bVar4 = local_res10 == (UPCGMetadata *)0x0;
    }
    else {
      bVar4 = *(UPCGMetadata **)(param_1 + 1) == local_res10;
    }
    if (!bVar4) {
      lVar2 = GetItemCountForChild(local_res10);
      lVar3 = GetItemCountForChild((UPCGMetadata *)param_1);
      if (lVar3 == lVar2) {
        ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::CopyAttributes_::__l2::<lambda_1>_>
                  (this,(<lambda_1>)param_1);
      }
      else if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        return;
      }
    }
  }
  return;
}

// execCreateBoolAttribute @ 149ec7570

void __cdecl UPCGMetadata::execCreateBoolAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  FName local_68 [2];
  FName local_58;
  FPCGMetadataDomainID local_50;
  
  local_68[0].ComparisonIndex.Value = 0;
  local_68[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FVar2 = local_68[0];
  bVar5 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50.Flag = PCGMetadataDomainID::Default.Flag;
  local_50._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_50.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_50.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58 = local_68[0];
  local_res8[0] = bVar3;
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&local_50);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<bool>(this,FVar2,local_res8,bVar4,bVar5);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execCreateDoubleAttribute @ 149ec7750

void __cdecl UPCGMetadata::execCreateDoubleAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res18;
  double local_res20;
  double local_68 [2];
  FName local_58;
  FPCGMetadataDomainID local_50 [2];
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res18;
  bVar4 = local_res10[0] != 0;
  local_68[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50[0].Flag = PCGMetadataDomainID::Default.Flag;
  local_50[0]._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_50[0].CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_50[0].DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58 = local_res18;
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,local_50);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<double>(this,FVar2,local_68,bVar3,bVar4);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execCreateFloatAttribute @ 149ec7930

void __cdecl UPCGMetadata::execCreateFloatAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  FName local_68 [2];
  FName local_58;
  FPCGMetadataDomainID local_50 [2];
  
  local_68[0].ComparisonIndex.Value = 0;
  local_68[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_68[0];
  bVar4 = local_res10[0] != 0;
  local_res20[0] = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50[0].Flag = PCGMetadataDomainID::Default.Flag;
  local_50[0]._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_50[0].CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_50[0].DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58 = local_68[0];
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,local_50);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<float>(this,FVar2,local_res20,bVar3,bVar4);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execCreateInteger32Attribute @ 149ec7b00

void __cdecl
UPCGMetadata::execCreateInteger32Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  FName local_68 [2];
  FName local_58;
  FPCGMetadataDomainID local_50 [2];
  
  local_68[0].ComparisonIndex.Value = 0;
  local_68[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_68[0];
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20[0] = local_res18[0];
  local_50[0].Flag = PCGMetadataDomainID::Default.Flag;
  local_50[0]._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_50[0].CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_50[0].DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58 = local_68[0];
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,local_50);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<int>(this,FVar2,local_res20,bVar3,bVar4);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execCreateInteger64Attribute @ 149ec7cd0

void __cdecl
UPCGMetadata::execCreateInteger64Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res18;
  long64 local_res20;
  long64 local_68 [2];
  FName local_58;
  FPCGMetadataDomainID local_50 [2];
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res18;
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68[0] = local_res20;
  local_50[0].Flag = PCGMetadataDomainID::Default.Flag;
  local_50[0]._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_50[0].CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_50[0].DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58 = local_res18;
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,local_50);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<__int64>(this,FVar2,local_68,bVar3,bVar4);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execCreateNameAttribute @ 149ec7eb0

void __cdecl UPCGMetadata::execCreateNameAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  FName local_68 [2];
  FName local_58;
  FPCGMetadataDomainID local_50;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res20;
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68[0] = local_res18;
  local_50.Flag = PCGMetadataDomainID::Default.Flag;
  local_50._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_50.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_50.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58 = local_res20;
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&local_50);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FName>(this,FVar2,local_68,bVar3,bVar4);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execCreateQuatAttribute @ 149ec8050

void __cdecl UPCGMetadata::execCreateQuatAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res18 [2];
  FPCGMetadataDomainID local_90;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  TQuat<double> local_58;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res18[0];
  bVar4 = local_res10[0] != 0;
  local_58.X = local_78;
  local_58.Y = dStack_70;
  local_58.Z = local_68;
  local_58.W = dStack_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_90.Flag = PCGMetadataDomainID::Default.Flag;
  local_90._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_90.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_90.DebugName = PCGMetadataDomainID::Default.DebugName;
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&local_90);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>(this,FVar2,&local_58,bVar3,bVar4);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execCreateRotatorAttribute @ 149ec81f0

void __cdecl
UPCGMetadata::execCreateRotatorAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res18 [2];
  double local_98;
  double dStack_90;
  double local_88;
  FName local_78;
  FPCGMetadataDomainID local_70;
  TRotator<double> local_58;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res18[0];
  bVar4 = local_res10[0] != 0;
  local_58.Pitch = local_98;
  local_58.Yaw = dStack_90;
  local_58.Roll = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_70.Flag = PCGMetadataDomainID::Default.Flag;
  local_70._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_70.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_70.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_78 = local_res18[0];
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&local_70);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TRotator<double>_>
              (this,FVar2,&local_58,bVar3,bVar4);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execCreateSoftClassPathAttribute @ 149ec8390

void __cdecl
UPCGMetadata::execCreateSoftClassPathAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  FSoftClassPath *pFVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res18;
  FPCGMetadataDomainID local_70;
  undefined1 local_58 [16];
  void *local_48;
  undefined8 local_40;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res8[0] = 0;
  pFVar3 = (FSoftClassPath *)local_58;
  if ((FSoftClassPath *)param_2->MostRecentPropertyAddress != (FSoftClassPath *)0x0) {
    pFVar3 = (FSoftClassPath *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res18;
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_70.Flag = PCGMetadataDomainID::Default.Flag;
  local_70._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_70.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_70.DebugName = PCGMetadataDomainID::Default.DebugName;
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&local_70);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FSoftClassPath>(this,FVar2,pFVar3,bVar4,bVar5);
  }
  *(UObject **)param_3 = param_1;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execCreateSoftObjectPathAttribute @ 149ec8560

void __cdecl
UPCGMetadata::execCreateSoftObjectPathAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  FSoftObjectPath *pFVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res18;
  FPCGMetadataDomainID local_70;
  FSoftObjectPath local_58;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_58.AssetPath.PackageName.Number = 0;
  local_58.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_58.AssetPath.AssetName.Number = 0;
  local_58.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.SubPathString.Data.ArrayNum = 0;
  local_58.SubPathString.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res8[0] = 0;
  pFVar3 = &local_58;
  if ((FSoftObjectPath *)param_2->MostRecentPropertyAddress != (FSoftObjectPath *)0x0) {
    pFVar3 = (FSoftObjectPath *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res18;
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_70.Flag = PCGMetadataDomainID::Default.Flag;
  local_70._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_70.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_70.DebugName = PCGMetadataDomainID::Default.DebugName;
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&local_70);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>(this,FVar2,pFVar3,bVar4,bVar5);
  }
  *(UObject **)param_3 = param_1;
  if (local_58.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execCreateStringAttribute @ 149ec8730

void __cdecl UPCGMetadata::execCreateStringAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  void *_Src;
  FPCGMetadataDomain *this;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res18;
  FString local_78;
  void *local_68;
  undefined8 local_60;
  FName local_58;
  FPCGMetadataDomainID local_50;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_68;
  bVar5 = local_res10[0] != 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_60;
  local_78.Data.ArrayNum = (int)local_60;
  if ((int)local_60 == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_60,0,(ForAnyElementType *)&local_78,(int)local_60,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  FVar2 = local_res18;
  local_50.Flag = PCGMetadataDomainID::Default.Flag;
  local_50._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_50.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_50.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58 = local_res18;
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&local_50);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<FString>(this,FVar2,&local_78,bVar4,bVar5);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  *(UObject **)param_3 = param_1;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execCreateTransformAttribute @ 149ec8950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGMetadata::execCreateTransformAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  undefined1 auStack_168 [32];
  int local_138;
  int local_134;
  FName local_130;
  FName local_128;
  FPCGMetadataDomainID local_120;
  TTransform<double> local_108;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_138 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  bVar3 = local_138 != 0;
  local_134 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_134,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_134);
  }
  FVar2 = local_130;
  bVar4 = local_134 != 0;
  local_108.Rotation.XY.m128d_f64[0] = (double)local_a8._0_8_;
  local_108.Rotation.XY.m128d_f64[1] = (double)local_a8._8_8_;
  local_108.Rotation.ZW.m128d_f64[0] = (double)local_98._0_8_;
  local_108.Rotation.ZW.m128d_f64[1] = (double)local_98._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_120.Flag = PCGMetadataDomainID::Default.Flag;
  local_120._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_120.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_108.Translation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_108.Translation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_108.Translation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_108.Translation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_120.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_108.Scale3D.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_108.Scale3D.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_108.Scale3D.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_108.Scale3D.ZW.m128d_f64[1] = (double)local_58._8_8_;
  local_128 = local_130;
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&local_120);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TTransform<double>_>
              (this,FVar2,&local_108,bVar3,bVar4);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execCreateVector2Attribute @ 149ec8b90

void __cdecl
UPCGMetadata::execCreateVector2Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res18;
  double local_68;
  double dStack_60;
  TVector2<double>_u_0 local_58;
  FName local_48;
  FPCGMetadataDomainID local_40;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res18;
  bVar4 = local_res10[0] != 0;
  local_58._s_0.X = local_68;
  local_58._s_0.Y = dStack_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40.Flag = PCGMetadataDomainID::Default.Flag;
  local_40._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_40.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_40.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_48 = local_res18;
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&local_40);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>
              (this,FVar2,(TVector2<double> *)&local_58._s_0,bVar3,bVar4);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execCreateVector4Attribute @ 149ec8d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGMetadata::execCreateVector4Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res18 [2];
  FPCGMetadataDomainID local_90;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  TVector4<double>_u_0 local_58;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_78 = 0.0;
  dStack_70 = 0.0;
  local_68 = ___xmm_3ff00000000000000000000000000000;
  dStack_60 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res18[0];
  bVar4 = local_res10[0] != 0;
  local_58._s_0.X = local_78;
  local_58._s_0.Y = dStack_70;
  local_58._s_0.Z = local_68;
  local_58._s_0.W = dStack_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_90.Flag = PCGMetadataDomainID::Default.Flag;
  local_90._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_90.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_90.DebugName = PCGMetadataDomainID::Default.DebugName;
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&local_90);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TVector4<double>_>
              (this,FVar2,(TVector4<double> *)&local_58._s_0,bVar3,bVar4);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execCreateVectorAttribute @ 149ec8f20

void __cdecl UPCGMetadata::execCreateVectorAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FPCGMetadataDomain *this;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res18 [2];
  double local_98;
  double dStack_90;
  double local_88;
  FName local_78;
  FPCGMetadataDomainID local_70;
  TVector<double>_u_0 local_58;
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res18[0];
  bVar4 = local_res10[0] != 0;
  local_58._s_0.X = local_98;
  local_58._s_0.Y = dStack_90;
  local_58._s_0.Z = local_88;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_70.Flag = PCGMetadataDomainID::Default.Flag;
  local_70._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_70.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_70.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_78 = local_res18[0];
  this = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&local_70);
  if (this != (FPCGMetadataDomain *)0x0) {
    FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
              (this,FVar2,(TVector<double> *)&local_58._s_0,bVar3,bVar4);
  }
  *(UObject **)param_3 = param_1;
  return;
}

// execFlatten @ 149ec90c0

void __cdecl UPCGMetadata::execFlatten(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  bool bVar4;
  <lambda_1> local_res8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)&param_1->field_0x20;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x000149ec911c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x330))(plVar2);
      return;
    }
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId743,"UPCGMetadata::FlattenImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
               ,0x2e7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId743);
  }
  ForEachValidUniqueMetadataDomain<_UPCGMetadata::FlattenImpl_::__l2::<lambda_1>_>
            ((UPCGMetadata *)param_1,local_res8);
  *(undefined8 *)(param_1 + 1) = 0;
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// execGetAttributeCount @ 149ec91a0

void __cdecl UPCGMetadata::execGetAttributeCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::GetAttributeCount_::__l2::<lambda_1>_>
            ((UPCGMetadata *)param_1,(<lambda_1>)local_res10);
  *(undefined4 *)param_3 = local_res10[0];
  return;
}

// execGetAttributes @ 149ec92c0

void __cdecl UPCGMetadata::execGetAttributes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar2 = &local_18;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar3 = &local_28;
  if ((TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetAttributes((UPCGMetadata *)param_1,pTVar2,pTVar3);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetItemCountForChild @ 149ecb700

void __cdecl UPCGMetadata::execGetItemCountForChild(UObject *param_1,FFrame *param_2,void *param_3)

{
  long64 lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = GetItemCountForChild((UPCGMetadata *)param_1);
  *(long64 *)param_3 = lVar1;
  return;
}

// execHasCommonAttributes @ 149ed0330

void __cdecl UPCGMetadata::execHasCommonAttributes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool local_res10 [8];
  UPCGMetadata *local_res18 [2];
  <lambda_1> local_28;
  
  local_res18[0] = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] == (UPCGMetadata *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  local_28.InMetadata = local_res18[0];
  local_28.bHasCommonAttribute = local_res10;
  local_res10[0] = false;
  ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::HasCommonAttributes_::__l2::<lambda_1>_>
            ((UPCGMetadata *)param_1,&local_28);
  *(bool *)param_3 = local_res10[0];
  return;
}

// execInitialize @ 149ed03f0

void __cdecl UPCGMetadata::execInitialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FPCGMetadataDomainID *pFVar2;
  ulonglong uVar3;
  EPCGMetadataDomainFlag EVar4;
  int iVar5;
  FProperty *pFVar6;
  code *pcVar7;
  UPCGMetadata *pUVar8;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res10 [16];
  int local_res20;
  UPCGMetadata *local_e8;
  FPCGMetadataInitializeParams local_e0;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  <lambda_1> local_58;
  FPCGMetadataDomainID local_48;
  
  iVar15 = 0;
  local_e8 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar6 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar6->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar6);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pUVar8 = local_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_e8 != (UPCGMetadata *)0x0) && (((uint)local_e8->_padding_ >> 0x1e & 1) == 0)) {
    local_e0.Parent = local_e8;
    local_e0.DomainMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.DomainMapping.ArrayNum = 0;
    local_e0.DomainMapping.ArrayMax = 0;
    local_e0.DomainInitializeParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.DomainInitializeParams.ArrayNum = 0;
    local_e0.DomainInitializeParams.ArrayMax = 0;
    if ((*(longlong *)(param_1 + 1) == 0) && (local_e8 != (UPCGMetadata *)param_1)) {
      if ((((local_e8->DefaultDomain).Flag != Default) && (param_1[3].field_0x8 == '\0')) &&
         ((*(UObjectBaseUtility **)&param_1->field_0x20 == (UObjectBaseUtility *)0x0 ||
          (bVar10 = UObjectBaseUtility::IsA<UPCGData>(*(UObjectBaseUtility **)&param_1->field_0x20),
          !bVar10)))) {
        local_98 = 0;
        local_b8 = &pUVar8->MetadataDomains;
        puVar1 = &(pUVar8->MetadataDomains).field_0x10;
        iVar5 = *(int *)&(pUVar8->MetadataDomains).field_0x28;
        uStack_ac = 1;
        iStack_9c = local_98;
        if (iVar5 != 0) {
          puVar19 = *(uint **)&(pUVar8->MetadataDomains).field_0x20;
          if (puVar19 == (uint *)0x0) {
            puVar19 = (uint *)puVar1;
          }
          uVar14 = *puVar19;
          iVar15 = 0;
          local_98 = 0;
          while (uVar14 == 0) {
            lVar12 = (longlong)iVar15;
            local_98 = local_98 + 0x20;
            iVar15 = iVar15 + 1;
            iStack_9c = iVar5;
            if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_149ed057e;
            uVar14 = puVar19[lVar12 + 1];
          }
          uStack_ac = -uVar14 & uVar14;
          uVar3 = (ulonglong)uStack_ac * 2 + 1;
          lVar12 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_res20 = (int)lVar12;
          iStack_9c = local_98 + -1 + local_res20;
          if (iVar5 < iStack_9c) {
            iStack_9c = iVar5;
          }
        }
LAB_149ed057e:
        uVar14 = *(uint *)&(pUVar8->MetadataDomains).field_0x28;
        TStack_80._padding_ = CONCAT44(uStack_ac,iVar15);
        uVar20 = uVar14 & 0xffffffe0;
        iStack_90 = *(int *)&(pUVar8->MetadataDomains).field_0x8 -
                    *(int *)&(pUVar8->MetadataDomains).field_0x34;
        uStack_a0 = 0xffffffff;
        TStack_80.CurrentBitIndex = iStack_9c;
        TStack_80.UnvisitedBitMask = 0xffffffff;
        iVar16 = (int)uVar14 >> 5;
        TStack_80._28_4_ = iStack_9c;
        TStack_80.BaseBitIndex = local_98;
        uStack_60 = CONCAT44(uStack_8c,iStack_90);
        iStack_b0 = iVar15;
        local_a8 = puVar1;
        iStack_94 = iStack_9c;
        local_88 = local_b8;
        TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar14 < 0) || (iVar5 < (int)uVar14)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar11 = *(uint *)&(pUVar8->MetadataDomains).field_0x28;
        if (uVar14 != uVar11) {
          puVar18 = *(undefined1 **)&(pUVar8->MetadataDomains).field_0x20;
          if (puVar18 == (undefined1 *)0x0) {
            puVar18 = puVar1;
          }
          uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
          while (uVar14 == 0) {
            lVar12 = (longlong)iVar16;
            uVar20 = uVar20 + 0x20;
            iVar16 = iVar16 + 1;
            uVar14 = uVar11;
            if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
            goto LAB_149ed0680;
            uVar14 = *(uint *)(puVar18 + lVar12 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar14 = (int)lVar12 + -1 + uVar20;
          if ((int)uVar11 < (int)uVar14) {
            uVar14 = uVar11;
          }
        }
LAB_149ed0680:
        while( true ) {
          pTVar9 = local_88;
          if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
            `TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (((TStack_80.CurrentBitIndex == uVar14) &&
              (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar9 == &pUVar8->MetadataDomains)) break;
          lVar12 = *(longlong *)pTVar9;
          uVar20 = *(uint *)(lVar12 + 4 + (longlong)TStack_80.CurrentBitIndex * 0x28);
          pFVar2 = (FPCGMetadataDomainID *)(lVar12 + (longlong)TStack_80.CurrentBitIndex * 0x28);
          EVar4 = pFVar2->Flag;
          uVar17 = EVar4 - uVar20 ^ uVar20 >> 0xd;
          uVar11 = (-0x61c88647 - uVar20) - uVar17 ^ uVar17 << 8;
          uVar13 = (uVar20 - uVar11) - uVar17 ^ uVar11 >> 0xd;
          uVar17 = (uVar17 - uVar13) - uVar11 ^ uVar13 >> 0xc;
          uVar11 = (uVar11 - uVar17) - uVar13 ^ uVar17 << 0x10;
          uVar13 = (uVar13 - uVar11) - uVar17 ^ uVar11 >> 5;
          uVar17 = (uVar17 - uVar13) - uVar11 ^ uVar13 >> 3;
          uVar11 = (uVar11 - uVar17) - uVar13 ^ uVar17 << 10;
          iVar15 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FPCGMetadataDomainID>
                             ((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                               *)&param_1[3].field_0x18,(uVar13 - uVar11) - uVar17 ^ uVar11 >> 0xf,
                              pFVar2);
          if (iVar15 == -1) {
            if ((EVar4 == (pUVar8->DefaultDomain).Flag) &&
               (uVar20 == (pUVar8->DefaultDomain).CustomFlag)) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
            local_48.Flag = pFVar2->Flag;
            local_48._1_3_ = *(undefined3 *)&pFVar2->field_0x1;
            local_48.CustomFlag = pFVar2->CustomFlag;
            local_48.DebugName = pFVar2->DebugName;
            SetupDomain((UPCGMetadata *)param_1,&local_48,bVar10);
          }
          TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        }
      }
      pUVar8 = local_e0.Parent;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_e0.Parent != (UPCGMetadata *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_e0.Parent);
      }
      local_58.InParams = &local_e0;
      *(UPCGMetadata **)(param_1 + 1) = pUVar8;
      local_58.__this = (UPCGMetadata *)param_1;
      ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::Initialize_::__l2::<lambda_1>_>
                (pUVar8,&local_58);
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_e0.DomainInitializeParams.AllocatorInstance.Data,
               local_e0.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_e0.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_e0.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_e0.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.DomainMapping.AllocatorInstance.Data);
    }
  }
  return;
}

// execInitializeWithAttributeFilter @ 149ed0c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGMetadata::execInitializeWithAttributeFilter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName *this;
  FField **ppFVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  FProperty *pFVar4;
  code *pcVar5;
  FScriptContainerElement FVar6;
  FScriptContainerElement FVar7;
  UPCGMetadata *pUVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar12;
  byte bVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  FPCGMetadataDomainID *pFVar17;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  uint uVar18;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar25;
  undefined1 auStackY_298 [32];
  FScriptContainerElement local_268;
  FScriptContainerElement local_267 [7];
  UPCGMetadata *local_260;
  FPCGMetadataInitializeParams local_258;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *local_230;
  uint uStack_228;
  uint uStack_224;
  undefined1 *local_220;
  uint uStack_218;
  uint uStack_214;
  uint local_210;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  ulonglong local_200;
  int local_1f8;
  undefined8 *local_1e8;
  undefined1 local_1e0 [32];
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ForElementType<FSetElementId> local_1a0;
  int local_198;
  undefined2 local_190;
  undefined8 local_188;
  FName FStack_180;
  undefined8 local_178;
  FName FStack_170;
  EPCGMetadataDomainFlag local_168;
  undefined1 local_158 [12];
  uint uStack_14c;
  undefined1 *local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  <lambda_1> local_128;
  FPCGMetadataDomainID local_118;
  TRangedForConstIterator local_108;
  undefined4 local_bc;
  undefined4 local_9c;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  undefined8 *puVar19;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  puVar19 = (undefined8 *)0x0;
  local_260 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_260,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_260);
  }
  local_98._0_8_ = (void *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  uVar18 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_267[0] = (FScriptContainerElement)0x0;
  pTVar25 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98;
  if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
    pTVar25 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
              param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_267,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_267);
  }
  local_268 = (FScriptContainerElement)0x0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_268,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_268);
  }
  FVar7 = local_267[0];
  FVar6 = local_268;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_260 != (UPCGMetadata *)0x0) && (((uint)local_260->_padding_ >> 0x1e & 1) == 0)) {
    local_258.Parent = local_260;
    local_258.DomainMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.DomainMapping.ArrayNum = 0;
    local_258.DomainMapping.ArrayMax = 0;
    local_258.DomainInitializeParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.DomainInitializeParams.ArrayNum = 0;
    local_258.DomainInitializeParams.ArrayMax = 0;
    if (((uint)local_260->_padding_ >> 0x1e & 1) == 0) {
      pTVar12 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                        *)&local_260->MetadataDomains,&PCGMetadataDomainID::Default);
      puVar14 = (undefined8 *)&pTVar12->field_0x10;
      if (pTVar12 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
        puVar14 = puVar19;
      }
      local_1e8 = puVar19;
      if (puVar14 != (undefined8 *)0x0) {
        local_1e8 = (undefined8 *)*puVar14;
      }
      local_1b8 = ___xmm_00000000ffffffff0000008000000000;
      uStack_1b0 = _UNK_150631d98;
      local_1e0._0_8_ = (FScriptContainerElement *)0x0;
      local_1e0._8_4_ = 0;
      local_1e0._12_4_ = -1;
      local_1c0 = (void *)0x0;
      local_1a0 = (ForElementType<FSetElementId>)0x0;
      local_198 = 0;
      local_190 = 0;
      local_168 = Default;
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x898,&local_258.DomainInitializeParams.AllocatorInstance,
                          &local_258.DomainInitializeParams.ArrayMax);
      local_258.DomainInitializeParams.ArrayNum = iVar11 + 1;
      pFVar17 = (FPCGMetadataDomainID *)
                (local_258.DomainInitializeParams.AllocatorInstance.Data + (longlong)iVar11 * 0x98);
      *pFVar17 = PCGMetadataDomainID::Default;
      this = &pFVar17[1].DebugName;
      *(undefined8 **)(pFVar17 + 1) = local_1e8;
      this->ComparisonIndex = 0;
      this->Number = 0;
      *(undefined4 *)(pFVar17 + 2) = 0;
      pFVar17[2].CustomFlag = -1;
      pFVar17[3].DebugName.ComparisonIndex = 0;
      pFVar17[3].DebugName.Number = 0;
      *(undefined4 *)(pFVar17 + 4) = 0;
      pFVar17[4].CustomFlag = 0x80;
      pFVar17[4].DebugName.ComparisonIndex.Value = 0xffffffff;
      pFVar17[4].DebugName.Number = 0;
      pFVar17[5].DebugName.ComparisonIndex = 0;
      pFVar17[5].DebugName.Number = 0;
      *(undefined4 *)(pFVar17 + 6) = 0;
      if (local_1e0._12_4_ != -1) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this,
                   (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1e0);
      }
      *(undefined1 *)&pFVar17[6].DebugName.ComparisonIndex.Value = (undefined1)local_190;
      pFVar17[9].Flag = Default;
      *(undefined1 *)((longlong)&pFVar17[6].DebugName.ComparisonIndex.Value + 1) = local_190._1_1_;
      pFVar17[9].Flag = local_168;
      if (local_168 != Default) {
        pFVar17[7].Flag = (undefined1)local_188;
        *(undefined3 *)&pFVar17[7].field_0x1 = local_188._1_3_;
        pFVar17[7].CustomFlag = local_188._4_4_;
        pFVar17[7].DebugName = FStack_180;
        pFVar17[8].Flag = (undefined1)local_178;
        *(undefined3 *)&pFVar17[8].field_0x1 = local_178._1_3_;
        pFVar17[8].CustomFlag = local_178._4_4_;
        pFVar17[8].DebugName = FStack_170;
      }
      if (local_1e0._12_4_ != -1) {
        local_198 = 0;
        if (local_1a0 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_1a0);
        }
        local_1e0._8_4_ = 0;
        if (local_1e0._12_4_ != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_1e0,0,(int *)(local_1e0 + 0xc));
        }
        uVar24 = local_1b8._4_4_;
        uStack_1b0 = 0xffffffff;
        local_1b8 = (ulonglong)local_1b8._4_4_ << 0x20;
        if (0x80 < uVar24) {
          local_1b8 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_1e0 + 0x10),0);
        }
        if (local_1c0 != (void *)0x0) {
          FMemory::Free(local_1c0);
        }
        if ((FScriptContainerElement *)local_1e0._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1e0._0_8_);
        }
      }
    }
    if ((local_258.DomainInitializeParams.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar9.Data = local_258.DomainInitializeParams.AllocatorInstance.Data;
    local_258.DomainInitializeParams.AllocatorInstance.Data[0x68] = FVar7;
    local_258.DomainInitializeParams.AllocatorInstance.Data[0x69] = FVar6;
    if ((*(int *)&(pTVar25->Elements).field_0x8 != *(int *)&(pTVar25->Elements).field_0x34) &&
       (this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                  (local_258.DomainInitializeParams.AllocatorInstance.Data + 0x18),
       pTVar25 != this_00)) {
      *(undefined4 *)(local_258.DomainInitializeParams.AllocatorInstance.Data + 0x60) = 0;
      if (*(void **)(local_258.DomainInitializeParams.AllocatorInstance.Data + 0x58) != (void *)0x0)
      {
        FMemory::Free(*(void **)(local_258.DomainInitializeParams.AllocatorInstance.Data + 0x58));
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00);
      *(undefined8 *)&this_00->Elements = 0;
      *(undefined8 *)(FVar9.Data + 0x20) = 0;
      *(undefined8 *)(FVar9.Data + 0x38) = 0;
      *(undefined4 *)(FVar9.Data + 0x40) = 0;
      *(undefined4 *)(FVar9.Data + 0x44) = 0x80;
      *(undefined4 *)(FVar9.Data + 0x48) = 0xffffffff;
      *(undefined4 *)(FVar9.Data + 0x4c) = 0;
      *(undefined8 *)(FVar9.Data + 0x58) = 0;
      *(undefined4 *)(FVar9.Data + 0x60) = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(this_00,pTVar25);
      if ((*(int *)(FVar9.Data + 0x24) == -1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x171,
                              L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pUVar8 = local_258.Parent;
    if (((*(longlong *)(param_1 + 1) == 0) && (local_258.Parent != (UPCGMetadata *)param_1)) &&
       (local_258.Parent != (UPCGMetadata *)0x0)) {
      if (((local_258.DomainMapping.ArrayNum == 0) &&
          (((local_258.Parent)->DefaultDomain).Flag != Default)) &&
         ((param_1[3].field_0x8 == '\0' &&
          ((*(UObjectBaseUtility **)&param_1->field_0x20 == (UObjectBaseUtility *)0x0 ||
           (bVar10 = UObjectBaseUtility::IsA<UPCGData>(*(UObjectBaseUtility **)&param_1->field_0x20)
           , !bVar10)))))) {
        local_220 = &(pUVar8->MetadataDomains).field_0x10;
        iVar11 = *(int *)&(pUVar8->MetadataDomains).field_0x28;
        local_230 = &pUVar8->MetadataDomains;
        local_210 = 0;
        uStack_224 = 1;
        uStack_214 = 0;
        if (iVar11 != 0) {
          puVar21 = *(uint **)&(pUVar8->MetadataDomains).field_0x20;
          if (puVar21 == (uint *)0x0) {
            puVar21 = (uint *)local_220;
          }
          uStack_224 = *puVar21;
          uVar18 = 0;
          while (uStack_224 == 0) {
            iVar16 = (int)puVar19;
            local_210 = local_210 + 0x20;
            uVar18 = iVar16 + 1;
            puVar19 = (undefined8 *)(ulonglong)uVar18;
            uStack_224 = 1;
            uStack_214 = iVar11;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
            goto LAB_149ed11f0;
            uStack_224 = puVar21[(longlong)iVar16 + 1];
          }
          uStack_224 = -uStack_224 & uStack_224;
          uVar3 = (ulonglong)uStack_224 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_1f8 = (int)lVar15;
          uStack_214 = local_210 + -1 + local_1f8;
          if (iVar11 < (int)uStack_214) {
            uStack_214 = iVar11;
          }
        }
LAB_149ed11f0:
        uStack_20c = local_bc;
        iStack_208 = *(int *)&(pUVar8->MetadataDomains).field_0x8 -
                     *(int *)&(pUVar8->MetadataDomains).field_0x34;
        uVar24 = *(uint *)&(pUVar8->MetadataDomains).field_0x28;
        bVar13 = (byte)uVar24 & 0x1f;
        unique0x10000581 = CONCAT44(uStack_224,uVar18);
        local_200 = (ulonglong)(uint)(1 << bVar13);
        puVar2 = &(pUVar8->MetadataDomains).field_0x10;
        uStack_218 = 0xffffffff;
        uStack_140 = CONCAT44(uStack_214,0xffffffff);
        uVar23 = uVar24 & 0xffffffe0;
        uVar22 = -1 << bVar13;
        local_138 = CONCAT44(local_bc,local_210);
        uStack_130._4_4_ = uStack_204;
        uStack_130._0_4_ = iStack_208;
        iVar16 = (int)uVar24 >> 5;
        local_158._0_8_ = local_230;
        local_148 = local_220;
        if ((((int)uVar24 < 0) || (iVar11 < (int)uVar24)) &&
           (uStack_228 = uVar18,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar18 = *(uint *)&(pUVar8->MetadataDomains).field_0x28;
        if (uVar24 == uVar18) {
LAB_149ed1321:
          uStack_224 = (uint)local_200;
          uStack_214 = uVar24;
        }
        else {
          puVar20 = *(undefined1 **)&(pUVar8->MetadataDomains).field_0x20;
          if (puVar20 == (undefined1 *)0x0) {
            puVar20 = puVar2;
          }
          uStack_224 = uVar22 & *(uint *)(puVar20 + (longlong)iVar16 * 4);
          while (uStack_224 == 0) {
            lVar15 = (longlong)iVar16;
            uVar23 = uVar23 + 0x20;
            iVar16 = iVar16 + 1;
            uVar24 = uVar18;
            if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
            goto LAB_149ed1321;
            uVar22 = 0xffffffff;
            uStack_224 = *(uint *)(puVar20 + lVar15 * 4 + 4);
          }
          uStack_224 = -uStack_224 & uStack_224;
          uVar3 = (ulonglong)uStack_224 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uStack_214 = (int)lVar15 + -1 + uVar23;
          if ((int)uVar18 < (int)uStack_214) {
            uStack_214 = uVar18;
          }
        }
        local_230 = &pUVar8->MetadataDomains;
        uStack_20c = local_9c;
        iStack_208 = *(int *)&(pUVar8->MetadataDomains).field_0x8 -
                     *(int *)&(pUVar8->MetadataDomains).field_0x34;
        local_108._padding_ = CONCAT44(uStack_224,iVar16);
        local_108._padding_ = CONCAT44(uStack_214,uVar22);
        local_108._padding_ = CONCAT44(local_9c,uVar23);
        local_108._44_4_ = uStack_204;
        local_108.InitialNum = iStack_208;
        uStack_228 = iVar16;
        local_220 = puVar2;
        uStack_218 = uVar22;
        local_210 = uVar23;
        local_108._padding_ = (longlong)local_230;
        local_108._padding_ = (longlong)puVar2;
        bVar10 = TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_158,&local_108);
        if (bVar10) {
          do {
            pFVar17 = (FPCGMetadataDomainID *)
                      (*(longlong *)local_158._0_8_ + (longlong)uStack_140._4_4_ * 0x28);
            uVar18 = ::GetTypeHash(pFVar17);
            iVar11 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FPCGMetadataDomainID>
                               ((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                                 *)&param_1[3].field_0x18,uVar18,pFVar17);
            if (iVar11 == -1) {
              if ((pFVar17->Flag == (pUVar8->DefaultDomain).Flag) &&
                 (pFVar17->CustomFlag == (pUVar8->DefaultDomain).CustomFlag)) {
                bVar10 = true;
              }
              else {
                bVar10 = false;
              }
              local_118.Flag = pFVar17->Flag;
              local_118._1_3_ = *(undefined3 *)&pFVar17->field_0x1;
              local_118.CustomFlag = pFVar17->CustomFlag;
              local_118.DebugName = pFVar17->DebugName;
              SetupDomain((UPCGMetadata *)param_1,&local_118,bVar10);
            }
            uStack_140 = CONCAT44(uStack_140._4_4_,(uint)uStack_140 & ~uStack_14c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_158 + 8));
            bVar10 = TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForConstIterator::operator!=
                               ((TRangedForConstIterator *)local_158,&local_108);
          } while (bVar10);
        }
      }
      pUVar8 = local_258.Parent;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_258.Parent != (UPCGMetadata *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_258.Parent);
      }
      local_128.InParams = &local_258;
      *(UPCGMetadata **)(param_1 + 1) = pUVar8;
      local_128.__this = (UPCGMetadata *)param_1;
      ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::Initialize_::__l2::<lambda_1>_>
                (pUVar8,&local_128);
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_258.DomainInitializeParams.AllocatorInstance.Data,
               local_258.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_258.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_258.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_258.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.DomainMapping.AllocatorInstance.Data);
    }
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_98,0);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((void *)local_98._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// execK2_InitializeAsCopy @ 149ed1540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGMetadata::execK2_InitializeAsCopy(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName *this;
  undefined1 *puVar1;
  ulonglong uVar2;
  EPCGMetadataDomainFlag EVar3;
  FProperty *pFVar4;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *pTVar5;
  code *pcVar6;
  FName FVar7;
  UPCGMetadata *pUVar8;
  UPCGMetadata *pUVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar13;
  void **ppvVar14;
  longlong lVar15;
  uint uVar16;
  void **ppvVar17;
  uint uVar18;
  void **ppvVar19;
  FPCGMetadataDomainID *pFVar20;
  TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  uint uVar25;
  bool local_res10 [16];
  undefined1 local_res20 [8];
  UPCGMetadata *local_1c8;
  FPCGMetadataInitializeParams local_1c0;
  undefined8 local_198;
  uint uStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  FNameEntryId FStack_180;
  uint uStack_17c;
  uint local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  void *local_168;
  undefined8 local_160;
  int local_158;
  void **local_148;
  undefined1 local_140 [32];
  void *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ForElementType<FSetElementId> local_100;
  int local_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  FName FStack_e0;
  undefined8 local_d8;
  FName FStack_d0;
  EPCGMetadataDomainFlag local_c8;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  <lambda_1> local_88;
  FPCGMetadataDomainID local_68 [2];
  undefined4 local_3c;
  
  ppvVar17 = (void **)0x0;
  uVar16 = 0;
  local_1c8 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_168 = (void *)0x0;
  local_160 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  ppvVar14 = &local_168;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar14 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_1c8 != (UPCGMetadata *)0x0) && (((uint)local_1c8->_padding_ >> 0x1e & 1) == 0)) {
    local_1c0.Parent = local_1c8;
    ppvVar19 = ppvVar17;
    if (*(int *)(ppvVar14 + 1) != 0) {
      ppvVar19 = ppvVar14;
    }
    local_1c0.DomainMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.DomainMapping.ArrayNum = 0;
    local_1c0.DomainMapping.ArrayMax = 0;
    local_1c0.DomainInitializeParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.DomainInitializeParams.ArrayNum = 0;
    local_1c0.DomainInitializeParams.ArrayMax = 0;
    if (((uint)local_1c8->_padding_ >> 0x1e & 1) == 0) {
      pTVar13 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                        *)&local_1c8->MetadataDomains,&PCGMetadataDomainID::Default);
      ppvVar14 = (void **)&pTVar13->field_0x10;
      if (pTVar13 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
        ppvVar14 = ppvVar17;
      }
      local_148 = ppvVar17;
      if (ppvVar14 != (void **)0x0) {
        local_148 = *ppvVar14;
      }
      local_118 = ___xmm_00000000ffffffff0000008000000000;
      uStack_110 = _UNK_150631d98;
      local_140._0_8_ = (FScriptContainerElement *)0x0;
      local_140._8_4_ = 0;
      local_140._12_4_ = -1;
      local_120 = (void *)0x0;
      local_100 = (ForElementType<FSetElementId>)0x0;
      local_f8 = 0;
      local_f0 = 0;
      local_c8 = Default;
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x898,&local_1c0.DomainInitializeParams.AllocatorInstance,
                          &local_1c0.DomainInitializeParams.ArrayMax);
      local_1c0.DomainInitializeParams.ArrayNum = iVar11 + 1;
      pFVar20 = (FPCGMetadataDomainID *)
                (local_1c0.DomainInitializeParams.AllocatorInstance.Data + (longlong)iVar11 * 0x98);
      *pFVar20 = PCGMetadataDomainID::Default;
      this = &pFVar20[1].DebugName;
      *(void ***)(pFVar20 + 1) = local_148;
      this->ComparisonIndex = 0;
      this->Number = 0;
      *(undefined4 *)(pFVar20 + 2) = 0;
      pFVar20[2].CustomFlag = -1;
      pFVar20[3].DebugName.ComparisonIndex = 0;
      pFVar20[3].DebugName.Number = 0;
      *(undefined4 *)(pFVar20 + 4) = 0;
      pFVar20[4].CustomFlag = 0x80;
      pFVar20[4].DebugName.ComparisonIndex.Value = 0xffffffff;
      pFVar20[4].DebugName.Number = 0;
      pFVar20[5].DebugName.ComparisonIndex = 0;
      pFVar20[5].DebugName.Number = 0;
      *(undefined4 *)(pFVar20 + 6) = 0;
      if (local_140._12_4_ != -1) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this,
                   (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_140);
      }
      *(undefined1 *)&pFVar20[6].DebugName.ComparisonIndex.Value = (undefined1)local_f0;
      pFVar20[9].Flag = Default;
      *(undefined1 *)((longlong)&pFVar20[6].DebugName.ComparisonIndex.Value + 1) = local_f0._1_1_;
      pFVar20[9].Flag = local_c8;
      if (local_c8 != Default) {
        pFVar20[7].Flag = (undefined1)local_e8;
        *(undefined3 *)&pFVar20[7].field_0x1 = local_e8._1_3_;
        pFVar20[7].CustomFlag = local_e8._4_4_;
        pFVar20[7].DebugName = FStack_e0;
        pFVar20[8].Flag = (undefined1)local_d8;
        *(undefined3 *)&pFVar20[8].field_0x1 = local_d8._1_3_;
        pFVar20[8].CustomFlag = local_d8._4_4_;
        pFVar20[8].DebugName = FStack_d0;
      }
      if (local_140._12_4_ != -1) {
        local_f8 = 0;
        if (local_100 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_100);
        }
        local_140._8_4_ = 0;
        if (local_140._12_4_ != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_140,0,(int *)(local_140 + 0xc));
        }
        uVar18 = local_118._4_4_;
        uStack_110 = 0xffffffff;
        local_118 = (ulonglong)local_118._4_4_ << 0x20;
        if (0x80 < uVar18) {
          local_118 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_140 + 0x10),0);
        }
        if (local_120 != (void *)0x0) {
          FMemory::Free(local_120);
        }
        if ((FScriptContainerElement *)local_140._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_140._0_8_);
        }
      }
      if (ppvVar19 != (void **)0x0) {
        pTVar5 = *ppvVar19;
        uVar18 = *(uint *)(ppvVar19 + 1);
        if (((int)uVar18 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uStack_190 = 8;
        local_198 = pTVar5;
        uStack_18c = uVar18;
        if (((int)uVar18 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumElements >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                                ,0x3f,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(pFVar20 + 7) = (undefined4)local_198;
        pFVar20[7].CustomFlag = local_198._4_4_;
        pFVar20[7].DebugName.ComparisonIndex.Value = uStack_190;
        pFVar20[7].DebugName.Number = uStack_18c;
        local_188 = (undefined1 *)CONCAT44(local_188._4_4_,uStack_18c);
        FVar7.Number = uStack_17c;
        FVar7.ComparisonIndex.Value = FStack_180.Value;
        *(undefined1 **)(pFVar20 + 8) = local_188;
        pFVar20[8].DebugName = FVar7;
        pFVar20[9].Flag = Data;
      }
    }
    pUVar8 = local_1c0.Parent;
    if (local_1c0.Parent != (UPCGMetadata *)0x0) {
      if (*(longlong *)(param_1 + 1) == 0) {
        local_res10[0] = false;
        if (((((local_1c0.Parent)->DefaultDomain).Flag != Default) && (param_1[3].field_0x8 == '\0')
            ) && ((*(UObjectBaseUtility **)&param_1->field_0x20 == (UObjectBaseUtility *)0x0 ||
                  (bVar10 = UObjectBaseUtility::IsA<UPCGData>
                                      (*(UObjectBaseUtility **)&param_1->field_0x20), !bVar10)))) {
          local_198 = &pUVar8->MetadataDomains;
          uVar18 = *(uint *)&(pUVar8->MetadataDomains).field_0x28;
          local_188 = &(pUVar8->MetadataDomains).field_0x10;
          uStack_18c = 1;
          local_178 = 0;
          uStack_17c = uVar16;
          if (uVar18 != 0) {
            puVar24 = *(uint **)&(pUVar8->MetadataDomains).field_0x20;
            if (puVar24 == (uint *)0x0) {
              puVar24 = (uint *)local_188;
            }
            uVar12 = *puVar24;
            ppvVar14 = ppvVar17;
            local_178 = 0;
            uVar16 = 0;
            while (uVar12 == 0) {
              iVar11 = (int)ppvVar17;
              local_178 = (int)ppvVar14 + 0x20;
              ppvVar14 = (void **)(ulonglong)local_178;
              uVar16 = iVar11 + 1;
              ppvVar17 = (void **)(ulonglong)uVar16;
              uStack_17c = uVar18;
              if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
              goto LAB_149ed19be;
              uVar12 = puVar24[(longlong)iVar11 + 1];
            }
            uStack_18c = -uVar12 & uVar12;
            uVar2 = (ulonglong)uStack_18c * 2 + 1;
            lVar15 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_158 = (int)lVar15;
            uStack_17c = (local_178 - 1) + local_158;
            if ((int)uVar18 < (int)uStack_17c) {
              uStack_17c = uVar18;
            }
          }
LAB_149ed19be:
          puVar1 = &(pUVar8->MetadataDomains).field_0x10;
          uStack_174 = local_3c;
          iStack_170 = *(int *)&(pUVar8->MetadataDomains).field_0x8 -
                       *(int *)&(pUVar8->MetadataDomains).field_0x34;
          uVar12 = *(uint *)&(pUVar8->MetadataDomains).field_0x28;
          FStack_180.Value = 0xffffffff;
          TStack_b0.CurrentBitIndex = uStack_17c;
          TStack_b0.UnvisitedBitMask = 0xffffffff;
          TStack_b0._padding_ = CONCAT44(uStack_18c,uVar16);
          uVar25 = uVar12 & 0xffffffe0;
          iVar11 = (int)uVar12 >> 5;
          TStack_b0._28_4_ = local_3c;
          TStack_b0.BaseBitIndex = local_178;
          uStack_90 = CONCAT44(uStack_16c,iStack_170);
          uStack_190 = uVar16;
          local_b8 = local_198;
          TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_188;
          if ((((int)uVar12 < 0) || ((int)uVar18 < (int)uVar12)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar16 = *(uint *)&(pUVar8->MetadataDomains).field_0x28;
          if (uVar12 != uVar16) {
            puVar23 = *(undefined1 **)&(pUVar8->MetadataDomains).field_0x20;
            if (puVar23 == (undefined1 *)0x0) {
              puVar23 = puVar1;
            }
            uVar18 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar11 * 4);
            while (uVar18 == 0) {
              lVar15 = (longlong)iVar11;
              uVar25 = uVar25 + 0x20;
              iVar11 = iVar11 + 1;
              uVar12 = uVar16;
              if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
              goto LAB_149ed1ad0;
              uVar18 = *(uint *)(puVar23 + lVar15 * 4 + 4);
            }
            uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar12 = (uVar25 - 1) + (int)lVar15;
            if ((int)uVar16 < (int)uVar12) {
              uVar12 = uVar16;
            }
          }
LAB_149ed1ad0:
          while( true ) {
            pTVar5 = local_b8;
            if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
              `TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
            }
            if (((TStack_b0.CurrentBitIndex == uVar12) &&
                (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
               (pTVar5 == &pUVar8->MetadataDomains)) break;
            lVar15 = *(longlong *)pTVar5;
            uVar16 = *(uint *)(lVar15 + 4 + (longlong)TStack_b0.CurrentBitIndex * 0x28);
            pFVar20 = (FPCGMetadataDomainID *)(lVar15 + (longlong)TStack_b0.CurrentBitIndex * 0x28);
            EVar3 = pFVar20->Flag;
            uVar22 = EVar3 - uVar16 ^ uVar16 >> 0xd;
            uVar18 = (-0x61c88647 - uVar22) - uVar16 ^ uVar22 << 8;
            uVar25 = (uVar16 - uVar18) - uVar22 ^ uVar18 >> 0xd;
            uVar22 = (uVar22 - uVar25) - uVar18 ^ uVar25 >> 0xc;
            uVar18 = (uVar18 - uVar22) - uVar25 ^ uVar22 << 0x10;
            uVar25 = (uVar25 - uVar18) - uVar22 ^ uVar18 >> 5;
            uVar22 = (uVar22 - uVar25) - uVar18 ^ uVar25 >> 3;
            uVar18 = (uVar18 - uVar22) - uVar25 ^ uVar22 << 10;
            iVar11 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FPCGMetadataDomainID>
                               ((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                                 *)&param_1[3].field_0x18,(uVar25 - uVar18) - uVar22 ^ uVar18 >> 0xf
                                ,pFVar20);
            if (iVar11 == -1) {
              if ((EVar3 == (pUVar8->DefaultDomain).Flag) &&
                 (uVar16 == (pUVar8->DefaultDomain).CustomFlag)) {
                bVar10 = true;
              }
              else {
                bVar10 = false;
              }
              local_68[0].Flag = pFVar20->Flag;
              local_68[0]._1_3_ = *(undefined3 *)&pFVar20->field_0x1;
              local_68[0].CustomFlag = pFVar20->CustomFlag;
              local_68[0].DebugName = pFVar20->DebugName;
              SetupDomain((UPCGMetadata *)param_1,local_68,bVar10);
            }
            TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
          }
        }
        local_88.bShouldParent = local_res10;
        local_88.InParams = &local_1c0;
        local_88.__this = (UPCGMetadata *)param_1;
        ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::InitializeAsCopy_::__l2::<lambda_1>_>
                  (local_1c0.Parent,&local_88);
        pUVar8 = local_1c0.Parent;
        if (local_res10[0] != false) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_1c0.Parent != (UPCGMetadata *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_1c0.Parent);
          }
          pUVar9 = local_1c0.Parent;
          *(UPCGMetadata **)(param_1 + 1) = pUVar8;
          pTVar21 = &(local_1c0.Parent)->OtherParents;
          puVar1 = &param_1[1].field_0x8;
          if ((TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
               *)puVar1 != pTVar21) {
            UE::Core::Private::
            CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                      ((ForElementType<FSetElementId> *)&param_1[2].field_0x18,(int *)(param_1 + 3),
                       &((local_1c0.Parent)->OtherParents).Hash,
                       ((local_1c0.Parent)->OtherParents).HashSize);
            iVar11 = *(int *)&(pUVar9->OtherParents).Elements.field_0x8;
            TSparseArray<TSparseSetElement<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty((TSparseArray<TSparseSetElement<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)puVar1,iVar11);
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,iVar11,(ForAnyElementType *)puVar1,(int *)&param_1[1].field_0x10,
                       (int *)&param_1[1].field_0x14);
            puVar23 = &(pUVar9->OtherParents).Elements.field_0x10;
            *(undefined4 *)&param_1[2].field_0x10 =
                 *(undefined4 *)&(pUVar9->OtherParents).Elements.field_0x30;
            *(undefined4 *)&param_1[2].field_0x14 =
                 *(undefined4 *)&(pUVar9->OtherParents).Elements.field_0x34;
            if (&param_1[1].field_0x18 != puVar23) {
              TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                        ((TBitArray<FDefaultBitArrayAllocator> *)&param_1[1].field_0x18,
                         (TBitArray<FDefaultBitArrayAllocator> *)puVar23);
            }
            if (iVar11 != 0) {
              memcpy(*(void **)puVar1,*(void **)&pTVar21->Elements,(longlong)iVar11 << 4);
            }
          }
        }
      }
      else if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_1c0.DomainInitializeParams.AllocatorInstance.Data,
               local_1c0.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_1c0.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_1c0.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_1c0.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.DomainMapping.AllocatorInstance.Data);
    }
  }
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  return;
}

// execK2_InitializeAsCopyWithAttributeFilter @ 149ed1d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadata::execK2_InitializeAsCopyWithAttributeFilter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FName *this;
  undefined1 *puVar1;
  FField **ppFVar2;
  ulonglong uVar3;
  uint uVar4;
  FProperty *pFVar5;
  void *pvVar6;
  code *pcVar7;
  FName FVar8;
  FScriptContainerElement FVar9;
  UPCGMetadata *pUVar10;
  UPCGMetadata *pUVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  int iVar14;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar15;
  byte bVar16;
  undefined8 *puVar17;
  longlong lVar18;
  FPCGMetadataDomainID *pFVar19;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement FVar20;
  uint uVar21;
  void **ppvVar22;
  TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar23;
  uint uVar24;
  undefined1 *puVar26;
  uint *puVar27;
  uint uVar28;
  void **ppvVar29;
  uint uVar30;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar31;
  undefined1 auStackY_2b8 [32];
  FScriptContainerElement local_288;
  FScriptContainerElement local_287;
  bool local_286;
  FScriptContainerElement local_285;
  UPCGMetadata *local_280;
  FPCGMetadataInitializeParams local_278;
  undefined8 local_250;
  uint uStack_248;
  uint uStack_244;
  undefined1 *local_240;
  FNameEntryId FStack_238;
  uint uStack_234;
  int local_230;
  uint uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  void *local_220;
  undefined8 local_218;
  TMap<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>_>
  *local_210;
  int iStack_208;
  uint uStack_204;
  undefined1 *local_200;
  uint uStack_1f8;
  uint uStack_1f4;
  uint local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  undefined8 *local_1d8;
  undefined1 local_1d0 [32];
  void *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ForElementType<FSetElementId> local_190;
  int local_188;
  undefined2 local_180;
  undefined8 local_178;
  FName FStack_170;
  undefined8 local_168;
  FName FStack_160;
  EPCGMetadataDomainFlag local_158;
  undefined1 local_148 [12];
  uint uStack_13c;
  undefined1 *local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  <lambda_1> local_118;
  FPCGMetadataDomainID local_f8;
  TRangedForConstIterator local_e8;
  undefined4 local_9c;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  undefined8 *puVar25;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_280 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_280,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_280);
  }
  local_98._0_8_ = (void *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_220 = (void *)0x0;
  local_218 = 0;
  pTVar31 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98;
  if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
      param_2->MostRecentPropertyAddress !=
      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
    pTVar31 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
              param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_220,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_220);
  }
  local_287 = (FScriptContainerElement)0x0;
  ppvVar29 = &local_220;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar29 = (void **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_287,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_287);
  }
  local_288 = (FScriptContainerElement)0x0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  FVar20 = local_287;
  FVar9 = local_288;
  local_285 = local_287;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_280 != (UPCGMetadata *)0x0) && (((uint)local_280->_padding_ >> 0x1e & 1) == 0)) {
    ppvVar22 = (void **)0x0;
    if (*(int *)(ppvVar29 + 1) != 0) {
      ppvVar22 = ppvVar29;
    }
    local_278.Parent = local_280;
    puVar25 = (undefined8 *)0x0;
    local_278.DomainMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.DomainMapping.ArrayNum = 0;
    local_278.DomainMapping.ArrayMax = 0;
    local_278.DomainInitializeParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.DomainInitializeParams.ArrayNum = 0;
    local_278.DomainInitializeParams.ArrayMax = 0;
    uVar24 = 0;
    if (((uint)local_280->_padding_ >> 0x1e & 1) == 0) {
      pTVar15 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                        *)&local_280->MetadataDomains,&PCGMetadataDomainID::Default);
      puVar17 = (undefined8 *)&pTVar15->field_0x10;
      if (pTVar15 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
        puVar17 = puVar25;
      }
      local_1d8 = puVar25;
      if (puVar17 != (undefined8 *)0x0) {
        local_1d8 = (undefined8 *)*puVar17;
      }
      local_1a8 = ___xmm_00000000ffffffff0000008000000000;
      uStack_1a0 = _UNK_150631d98;
      local_1d0._0_8_ = (FScriptContainerElement *)0x0;
      local_1d0._8_4_ = 0;
      local_1d0._12_4_ = -1;
      local_1b0 = (void *)0x0;
      local_190 = (ForElementType<FSetElementId>)0x0;
      local_188 = 0;
      local_180 = 0;
      local_158 = Default;
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x898,&local_278.DomainInitializeParams.AllocatorInstance,
                          &local_278.DomainInitializeParams.ArrayMax);
      local_278.DomainInitializeParams.ArrayNum = iVar14 + 1;
      pFVar19 = (FPCGMetadataDomainID *)
                (local_278.DomainInitializeParams.AllocatorInstance.Data + (longlong)iVar14 * 0x98);
      *pFVar19 = PCGMetadataDomainID::Default;
      this = &pFVar19[1].DebugName;
      *(undefined8 **)(pFVar19 + 1) = local_1d8;
      this->ComparisonIndex = 0;
      this->Number = 0;
      *(undefined4 *)(pFVar19 + 2) = 0;
      pFVar19[2].CustomFlag = -1;
      pFVar19[3].DebugName.ComparisonIndex = 0;
      pFVar19[3].DebugName.Number = 0;
      *(undefined4 *)(pFVar19 + 4) = 0;
      pFVar19[4].CustomFlag = 0x80;
      pFVar19[4].DebugName.ComparisonIndex.Value = 0xffffffff;
      pFVar19[4].DebugName.Number = 0;
      pFVar19[5].DebugName.ComparisonIndex = 0;
      pFVar19[5].DebugName.Number = 0;
      *(undefined4 *)(pFVar19 + 6) = 0;
      if (local_1d0._12_4_ != -1) {
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this,
                   (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1d0);
      }
      *(undefined1 *)&pFVar19[6].DebugName.ComparisonIndex.Value = (undefined1)local_180;
      pFVar19[9].Flag = Default;
      *(undefined1 *)((longlong)&pFVar19[6].DebugName.ComparisonIndex.Value + 1) = local_180._1_1_;
      pFVar19[9].Flag = local_158;
      if (local_158 != Default) {
        pFVar19[7].Flag = (undefined1)local_178;
        *(undefined3 *)&pFVar19[7].field_0x1 = local_178._1_3_;
        pFVar19[7].CustomFlag = local_178._4_4_;
        pFVar19[7].DebugName = FStack_170;
        pFVar19[8].Flag = (undefined1)local_168;
        *(undefined3 *)&pFVar19[8].field_0x1 = local_168._1_3_;
        pFVar19[8].CustomFlag = local_168._4_4_;
        pFVar19[8].DebugName = FStack_160;
      }
      if (local_1d0._12_4_ != -1) {
        local_188 = 0;
        if (local_190 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_190);
        }
        local_1d0._8_4_ = 0;
        if (local_1d0._12_4_ != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_1d0,0,(int *)(local_1d0 + 0xc));
        }
        uVar4 = local_1a8._4_4_;
        uStack_1a0 = 0xffffffff;
        local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
        if (0x80 < uVar4) {
          local_1a8 = 0x8000000000;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d0 + 0x10),0);
        }
        if (local_1b0 != (void *)0x0) {
          FMemory::Free(local_1b0);
        }
        if ((FScriptContainerElement *)local_1d0._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1d0._0_8_);
        }
      }
      if (ppvVar22 != (void **)0x0) {
        pvVar6 = *ppvVar22;
        uVar4 = *(uint *)(ppvVar22 + 1);
        if (((int)uVar4 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uStack_248 = 8;
        local_250 = pvVar6;
        uStack_244 = uVar4;
        if (((int)uVar4 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumElements >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                                ,0x3f,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined4 *)(pFVar19 + 7) = (undefined4)local_250;
        pFVar19[7].CustomFlag = local_250._4_4_;
        pFVar19[7].DebugName.ComparisonIndex.Value = uStack_248;
        pFVar19[7].DebugName.Number = uStack_244;
        local_240 = (undefined1 *)CONCAT44(local_240._4_4_,uStack_244);
        FVar8.Number = uStack_234;
        FVar8.ComparisonIndex.Value = FStack_238.Value;
        *(undefined1 **)(pFVar19 + 8) = local_240;
        pFVar19[8].DebugName = FVar8;
        pFVar19[9].Flag = Data;
        FVar20 = local_285;
      }
    }
    if ((local_278.DomainInitializeParams.ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar12.Data = local_278.DomainInitializeParams.AllocatorInstance.Data;
    local_278.DomainInitializeParams.AllocatorInstance.Data[0x68] = FVar20;
    local_278.DomainInitializeParams.AllocatorInstance.Data[0x69] = FVar9;
    if ((*(int *)&(pTVar31->Elements).field_0x8 != *(int *)&(pTVar31->Elements).field_0x34) &&
       (this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                  (local_278.DomainInitializeParams.AllocatorInstance.Data + 0x18),
       pTVar31 != this_00)) {
      *(undefined4 *)(local_278.DomainInitializeParams.AllocatorInstance.Data + 0x60) = 0;
      if (*(void **)(local_278.DomainInitializeParams.AllocatorInstance.Data + 0x58) != (void *)0x0)
      {
        FMemory::Free(*(void **)(local_278.DomainInitializeParams.AllocatorInstance.Data + 0x58));
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00);
      *(undefined8 *)&this_00->Elements = 0;
      *(undefined8 *)(FVar12.Data + 0x20) = 0;
      *(undefined8 *)(FVar12.Data + 0x38) = 0;
      *(undefined4 *)(FVar12.Data + 0x40) = 0;
      *(undefined4 *)(FVar12.Data + 0x44) = 0x80;
      *(undefined4 *)(FVar12.Data + 0x48) = 0xffffffff;
      *(undefined4 *)(FVar12.Data + 0x4c) = 0;
      *(undefined8 *)(FVar12.Data + 0x58) = 0;
      *(undefined4 *)(FVar12.Data + 0x60) = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(this_00,pTVar31);
      if ((*(int *)(FVar12.Data + 0x24) == -1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x171,
                              L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                             ), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pUVar10 = local_278.Parent;
    if (local_278.Parent != (UPCGMetadata *)0x0) {
      if (*(longlong *)(param_1 + 1) == 0) {
        local_286 = false;
        if (((((local_278.Parent)->DefaultDomain).Flag != Default) && (param_1[3].field_0x8 == '\0')
            ) && ((*(UObjectBaseUtility **)&param_1->field_0x20 == (UObjectBaseUtility *)0x0 ||
                  (bVar13 = UObjectBaseUtility::IsA<UPCGData>
                                      (*(UObjectBaseUtility **)&param_1->field_0x20), !bVar13)))) {
          local_240 = &(pUVar10->MetadataDomains).field_0x10;
          uVar4 = *(uint *)&(pUVar10->MetadataDomains).field_0x28;
          local_148._0_8_ = &pUVar10->MetadataDomains;
          local_230 = 0;
          uStack_234 = 0;
          uStack_244 = 1;
          if (uVar4 != 0) {
            puVar27 = *(uint **)&(pUVar10->MetadataDomains).field_0x20;
            if (puVar27 == (uint *)0x0) {
              puVar27 = (uint *)local_240;
            }
            uStack_244 = *puVar27;
            uVar24 = 0;
            while (uStack_244 == 0) {
              iVar14 = (int)puVar25;
              local_230 = local_230 + 0x20;
              uVar24 = iVar14 + 1;
              puVar25 = (undefined8 *)(ulonglong)uVar24;
              uStack_234 = uVar4;
              uStack_244 = 1;
              if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
              goto LAB_149ed23df;
              uStack_244 = puVar27[(longlong)iVar14 + 1];
            }
            uStack_244 = -uStack_244 & uStack_244;
            uVar3 = (ulonglong)uStack_244 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            local_1e0 = (int)lVar18;
            uStack_234 = local_1e0 + -1 + local_230;
            if ((int)uVar4 < (int)uStack_234) {
              uStack_234 = uVar4;
            }
          }
LAB_149ed23df:
          puVar1 = &(pUVar10->MetadataDomains).field_0x10;
          uStack_22c = uStack_1f4;
          iStack_228 = *(int *)&(pUVar10->MetadataDomains).field_0x8 -
                       *(int *)&(pUVar10->MetadataDomains).field_0x34;
          uVar28 = *(uint *)&(pUVar10->MetadataDomains).field_0x28;
          unique0x1000075e = CONCAT44(uStack_244,uVar24);
          bVar16 = (byte)uVar28 & 0x1f;
          FStack_238.Value = 0xffffffff;
          uStack_130 = CONCAT44(uStack_234,0xffffffff);
          local_250 = (void *)(ulonglong)(uint)(1 << bVar16);
          uVar21 = uVar28 & 0xffffffe0;
          uVar30 = -1 << bVar16;
          local_128 = CONCAT44(uStack_1f4,local_230);
          uStack_120._4_4_ = uStack_224;
          uStack_120._0_4_ = iStack_228;
          iVar14 = (int)uVar28 >> 5;
          uStack_248 = uVar24;
          local_138 = local_240;
          if ((((int)uVar28 < 0) || ((int)uVar4 < (int)uVar28)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar24 = *(uint *)&(pUVar10->MetadataDomains).field_0x28;
          if (uVar28 == uVar24) {
LAB_149ed250f:
            uStack_204 = (uint)local_250;
            uStack_1f4 = uVar28;
          }
          else {
            puVar26 = *(undefined1 **)&(pUVar10->MetadataDomains).field_0x20;
            if (puVar26 == (undefined1 *)0x0) {
              puVar26 = puVar1;
            }
            uStack_204 = uVar30 & *(uint *)(puVar26 + (longlong)iVar14 * 4);
            while (uStack_204 == 0) {
              lVar18 = (longlong)iVar14;
              uVar21 = uVar21 + 0x20;
              iVar14 = iVar14 + 1;
              uVar28 = uVar24;
              if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
              goto LAB_149ed250f;
              uVar30 = 0xffffffff;
              uStack_204 = *(uint *)(puVar26 + lVar18 * 4 + 4);
            }
            uStack_204 = -uStack_204 & uStack_204;
            uVar3 = (ulonglong)uStack_204 * 2 + 1;
            lVar18 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            uStack_1f4 = (int)lVar18 + -1 + uVar21;
            if ((int)uVar24 < (int)uStack_1f4) {
              uStack_1f4 = uVar24;
            }
          }
          local_210 = &pUVar10->MetadataDomains;
          uStack_1ec = local_9c;
          iStack_1e8 = *(int *)&(pUVar10->MetadataDomains).field_0x8 -
                       *(int *)&(pUVar10->MetadataDomains).field_0x34;
          local_e8._padding_ = CONCAT44(uStack_204,iVar14);
          local_e8._padding_ = CONCAT44(uStack_1f4,uVar30);
          local_e8._padding_ = CONCAT44(local_9c,uVar21);
          local_e8._44_4_ = uStack_1e4;
          local_e8.InitialNum = iStack_1e8;
          iStack_208 = iVar14;
          local_200 = puVar1;
          uStack_1f8 = uVar30;
          local_1f0 = uVar21;
          local_e8._padding_ = (longlong)local_210;
          local_e8._padding_ = (longlong)puVar1;
          bVar13 = TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForConstIterator::operator!=
                             ((TRangedForConstIterator *)local_148,&local_e8);
          if (bVar13) {
            do {
              pFVar19 = (FPCGMetadataDomainID *)
                        (*(longlong *)local_148._0_8_ + (longlong)uStack_130._4_4_ * 0x28);
              uVar24 = ::GetTypeHash(pFVar19);
              iVar14 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FPCGMetadataDomainID>
                                 ((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                                   *)&param_1[3].field_0x18,uVar24,pFVar19);
              if (iVar14 == -1) {
                if ((pFVar19->Flag == (pUVar10->DefaultDomain).Flag) &&
                   (pFVar19->CustomFlag == (pUVar10->DefaultDomain).CustomFlag)) {
                  bVar13 = true;
                }
                else {
                  bVar13 = false;
                }
                local_f8.Flag = pFVar19->Flag;
                local_f8._1_3_ = *(undefined3 *)&pFVar19->field_0x1;
                local_f8.CustomFlag = pFVar19->CustomFlag;
                local_f8.DebugName = pFVar19->DebugName;
                SetupDomain((UPCGMetadata *)param_1,&local_f8,bVar13);
              }
              uStack_130 = CONCAT44(uStack_130._4_4_,(uint)uStack_130 & ~uStack_13c);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_148 + 8));
              bVar13 = TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForConstIterator::operator!=
                                 ((TRangedForConstIterator *)local_148,&local_e8);
            } while (bVar13);
          }
        }
        local_118.bShouldParent = &local_286;
        local_118.InParams = &local_278;
        local_118.__this = (UPCGMetadata *)param_1;
        ForEachValidUniqueConstMetadataDomain<_UPCGMetadata::InitializeAsCopy_::__l2::<lambda_1>_>
                  (local_278.Parent,&local_118);
        pUVar10 = local_278.Parent;
        if (local_286 != false) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_278.Parent != (UPCGMetadata *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_278.Parent);
          }
          pUVar11 = local_278.Parent;
          *(UPCGMetadata **)(param_1 + 1) = pUVar10;
          pTVar23 = &(local_278.Parent)->OtherParents;
          puVar1 = &param_1[1].field_0x8;
          if ((TSet<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
               *)puVar1 != pTVar23) {
            UE::Core::Private::
            CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                      ((ForElementType<FSetElementId> *)&param_1[2].field_0x18,(int *)(param_1 + 3),
                       &((local_278.Parent)->OtherParents).Hash,
                       ((local_278.Parent)->OtherParents).HashSize);
            iVar14 = *(int *)&(pUVar11->OtherParents).Elements.field_0x8;
            TSparseArray<TSparseSetElement<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty((TSparseArray<TSparseSetElement<TWeakObjectPtr<UPCGMetadata_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)puVar1,iVar14);
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,iVar14,(ForAnyElementType *)puVar1,(int *)&param_1[1].field_0x10,
                       (int *)&param_1[1].field_0x14);
            puVar26 = &(pUVar11->OtherParents).Elements.field_0x10;
            *(undefined4 *)&param_1[2].field_0x10 =
                 *(undefined4 *)&(pUVar11->OtherParents).Elements.field_0x30;
            *(undefined4 *)&param_1[2].field_0x14 =
                 *(undefined4 *)&(pUVar11->OtherParents).Elements.field_0x34;
            if (&param_1[1].field_0x18 != puVar26) {
              TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                        ((TBitArray<FDefaultBitArrayAllocator> *)&param_1[1].field_0x18,
                         (TBitArray<FDefaultBitArrayAllocator> *)puVar26);
            }
            if (iVar14 != 0) {
              memcpy(*(void **)puVar1,*(void **)&pTVar23->Elements,(longlong)iVar14 << 4);
            }
          }
        }
      }
      else if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_278.DomainInitializeParams.AllocatorInstance.Data,
               local_278.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_278.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_278.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_278.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.DomainMapping.AllocatorInstance.Data);
    }
  }
  if (local_220 != (void *)0x0) {
    FMemory::Free(local_220);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_98,0);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((void *)local_98._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// execMergeAttributesByKey @ 149ed27d0

void __cdecl UPCGMetadata::execMergeAttributesByKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  long64 *plVar2;
  EPCGMetadataOp local_res10 [16];
  long64 local_res20;
  UPCGMetadata *local_48;
  long64 local_40;
  UPCGMetadata *local_38;
  long64 local_30;
  long64 local_28 [2];
  
  local_30 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_40 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28[0] = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = Min;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  plVar2 = &local_res20;
  if ((long64 *)param_2->MostRecentPropertyAddress != (long64 *)0x0) {
    plVar2 = (long64 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *plVar2 = local_28[0];
  MergeAttributesSubset
            ((UPCGMetadata *)param_1,local_30,local_38,local_38,local_40,local_48,local_48,plVar2,
             local_res10[0]);
  return;
}

// execMergePointAttributes @ 149ed2a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UPCGMetadata::execMergePointAttributes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStackY_338 [32];
  EPCGMetadataOp local_2e8 [8];
  UPCGMetadata *local_2e0;
  UPCGMetadata *local_2d8 [2];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined4 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  uint uStack_240;
  uint uStack_23c;
  double local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined4 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  uint uStack_170;
  uint uStack_16c;
  double local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  uVar3 = _UNK_150689688;
  uVar2 = ___xmm_3ff00000000000003ff0000000000000;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_338;
  uVar7 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_268 = 0x3f800000;
  local_208 = 0x3f000000;
  local_200 = 0xffffffffffffffff;
  local_2c8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_2c8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_2b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_2b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_2a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_2a8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_288._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_288._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_288._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_298._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_298._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_298._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_278._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_278._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_278._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  uStack_240 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  uStack_23c = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_260 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar8,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar7);
  local_258 = CONCAT44(uStack_23c ^ uVar8,uStack_240 ^ uVar7);
  local_248 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_244 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_250 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar8,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar7);
  local_238 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_228 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_220 = _UNK_150689688;
  local_218 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_210 = _UNK_150689688;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2c8);
  }
  local_2d8[0] = (UPCGMetadata *)0x0;
  puVar6 = local_2c8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2d8);
  }
  local_198 = 0x3f800000;
  local_138 = 0x3f000000;
  local_130 = 0xffffffffffffffff;
  local_1f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uStack_170 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  uStack_16c = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_1c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_188 = CONCAT44(uStack_16c ^ uVar8,uStack_170 ^ uVar7);
  local_190 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar8,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar7);
  local_180 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar8,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar7);
  local_178 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_174 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_168 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_158 = uVar2;
  uStack_150 = uVar3;
  local_148 = uVar2;
  uStack_140 = uVar3;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1f8);
  }
  local_2e0 = (UPCGMetadata *)0x0;
  puVar5 = local_1f8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2e0);
  }
  local_c8 = 0x3f800000;
  local_68 = 0x3f000000;
  local_60 = 0xffffffffffffffff;
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_118._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uStack_a0 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  uStack_9c = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_b8 = CONCAT44(uStack_9c ^ uVar8,uStack_a0 ^ uVar7);
  local_c0 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar8,
                      UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar7);
  local_b0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar8,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar7);
  local_a8 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_a4 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_98 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_88 = uVar2;
  uStack_80 = uVar3;
  local_78 = uVar2;
  uStack_70 = uVar3;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  local_2e8[0] = Min;
  puVar4 = local_128;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2e8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  MergeAttributesSubset
            ((UPCGMetadata *)param_1,*(long64 *)(puVar6 + 200),local_2d8[0],local_2d8[0],
             *(long64 *)(puVar5 + 200),local_2e0,local_2e0,(long64 *)(puVar4 + 200),local_2e8[0]);
  return;
}

// execResetPointWeightedAttributes @ 149ed2f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGMetadata::execResetPointWeightedAttributes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88 = 0x3f800000;
  local_d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar3 = (uint)__xmm_80000000000000008000000000000000;
  uVar4 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_98 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_90 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar4,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar3);
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar4,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar3);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_30 = _UNK_150689688;
  local_70 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar4,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar3);
  local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_28 = 0x3f000000;
  local_20 = 0xffffffffffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  pdVar2 = &local_e8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ResetWeightedAttributes((UPCGMetadata *)param_1,(long64 *)(pdVar2 + 0x19));
  return;
}

// execResetWeightedAttributesByKey @ 149ed30b0

void __cdecl
UPCGMetadata::execResetWeightedAttributesByKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  long64 *plVar2;
  long64 local_res10;
  long64 local_res20;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar2 = &local_res10;
  if ((long64 *)param_2->MostRecentPropertyAddress != (long64 *)0x0) {
    plVar2 = (long64 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *plVar2 = local_res20;
  ResetWeightedAttributes((UPCGMetadata *)param_1,plVar2);
  return;
}

// execSetAttributesByKey @ 149ed38b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGMetadata::execSetAttributesByKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  long64 lVar4;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar5;
  FPCGMetadataDomain *pFVar6;
  long64 *plVar7;
  FPCGMetadataDomain *pFVar8;
  long64 local_res10;
  longlong local_res20;
  long64 local_38;
  long64 local_30;
  FString local_28;
  
  pFVar8 = (FPCGMetadataDomain *)0x0;
  local_38 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_30 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar4 = local_38;
  lVar3 = local_res20;
  plVar7 = &local_res10;
  if ((long64 *)param_2->MostRecentPropertyAddress != (long64 *)0x0) {
    plVar7 = (long64 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *plVar7 = local_30;
  if (lVar3 != 0) {
    pTVar5 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)(lVar3 + 0x90),&PCGMetadataDomainID::Default);
    pFVar6 = (FPCGMetadataDomain *)&pTVar5->field_0x10;
    if (pTVar5 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      pFVar6 = pFVar8;
    }
    if (pFVar6 != (FPCGMetadataDomain *)0x0) {
      pFVar8 = (FPCGMetadataDomain *)pFVar6->_padding_;
    }
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar6 = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&PCGMetadataDomainID::Default),
       pFVar6 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_28);
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe4130,
                   (FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      FPCGMetadataDomain::SetAttributes(pFVar6,lVar4,pFVar8,plVar7);
    }
  }
  return;
}

// execSetPointAttributes @ 149ed6ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGMetadata::execSetPointAttributes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double dVar3;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar4;
  FPCGMetadataDomain *pFVar5;
  FPCGMetadataDomain *pFVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_228 [32];
  longlong local_208;
  FString local_200;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  double dStack_160;
  double local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_8c;
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  pFVar6 = (FPCGMetadataDomain *)0x0;
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_188 = 0x3f800000;
  local_1e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_1e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_128 = 0x3f000000;
  local_120 = 0xffffffffffffffff;
  local_1d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_1d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_1b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_198 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_190 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_178 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                             0x20) ^ uVar10,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar9);
  local_180 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar10,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar9);
  local_168 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
  dStack_160 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_148 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_140 = _UNK_150689688;
  local_138 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_130 = _UNK_150689688;
  local_170 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar10,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar9);
  local_158 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  local_208 = 0;
  pdVar8 = &local_1e8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar8 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_b8 = 0x3f800000;
  local_58 = 0x3f000000;
  local_50 = 0xffffffffffffffff;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_e8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uStack_90 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
  uStack_8c = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
  local_c8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_b0 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar10,
                      UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar9);
  local_a8 = CONCAT44(uStack_8c ^ uVar10,uStack_90 ^ uVar9);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar10,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar9);
  local_78 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_70 = _UNK_150689688;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_98 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uStack_94 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  pdVar7 = &local_118;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar7 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar3 = pdVar8[0x19];
  if (local_208 != 0) {
    pTVar4 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                     *)(local_208 + 0x90),&PCGMetadataDomainID::Default);
    pFVar5 = (FPCGMetadataDomain *)&pTVar4->field_0x10;
    if (pTVar4 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
      pFVar5 = pFVar6;
    }
    if (pFVar5 != (FPCGMetadataDomain *)0x0) {
      pFVar6 = (FPCGMetadataDomain *)pFVar5->_padding_;
    }
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = FindOrCreateMetadataDomain((UPCGMetadata *)param_1,&PCGMetadataDomainID::Default),
       pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_200);
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe4130,
                   (FLogCategoryBase *)&LogPCG);
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      FPCGMetadataDomain::SetAttributes(pFVar5,(long64)dVar3,pFVar6,(long64 *)(pdVar7 + 0x19));
    }
  }
  return;
}

// GetMutableTypedAttribute<int> @ 149fe16e0

FPCGMetadataAttribute<int> * __thiscall
UPCGMetadata::GetMutableTypedAttribute<int>(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<int> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<int> *)GetMutableAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<int> *)0x0) || ((short)pFVar1->_padding_ != 2)) {
    pFVar1 = (FPCGMetadataAttribute<int> *)0x0;
  }
  return pFVar1;
}

// GetMutableTypedAttribute<double> @ 149fe1720

FPCGMetadataAttribute<double> * __thiscall
UPCGMetadata::GetMutableTypedAttribute<double>(UPCGMetadata *this,FPCGAttributeIdentifier *param_1)

{
  FPCGMetadataAttribute<double> *pFVar1;
  FPCGAttributeIdentifier local_28;
  
  local_28.Name = param_1->Name;
  local_28.MetadataDomain.Flag = (param_1->MetadataDomain).Flag;
  local_28.MetadataDomain._1_3_ = *(undefined3 *)&(param_1->MetadataDomain).field_0x1;
  local_28.MetadataDomain.CustomFlag = (param_1->MetadataDomain).CustomFlag;
  local_28.MetadataDomain.DebugName = (param_1->MetadataDomain).DebugName;
  pFVar1 = (FPCGMetadataAttribute<double> *)GetMutableAttribute(this,&local_28);
  if ((pFVar1 == (FPCGMetadataAttribute<double> *)0x0) || ((short)pFVar1->_padding_ != 1)) {
    pFVar1 = (FPCGMetadataAttribute<double> *)0x0;
  }
  return pFVar1;
}

