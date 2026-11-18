// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 22

// operator()<int> @ 149906f90

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::operator()<int>
          (void *this,int param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttribute<int> *this_01;
  int local_res8 [2];
  FPCGMetadataDomainID FStack_50;
  FPCGAttributeIdentifier local_38;
  
  FStack_50._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_38.MetadataDomain.Flag = FStack_50.Flag;
  local_38.MetadataDomain._1_3_ = FStack_50._1_3_;
  local_38.MetadataDomain.CustomFlag = FStack_50.CustomFlag;
  local_38.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_38.Name = param_2;
  this_01 = (FPCGMetadataAttribute<int> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_38);
  if ((this_01 == (FPCGMetadataAttribute<int> *)0x0) || ((short)this_01->_padding_ != 2)) {
    this_01 = (FPCGMetadataAttribute<int> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = *(bool *)((longlong)&this_01->_padding_ + 2);
  iVar3 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  local_res8[0] = FPCGMetadataAttribute<int>::GetValue(this_01,iVar3);
  FPCGMetadataDomain::CreateAttribute<int>(this_00,param_2,local_res8,bVar2,true);
  return;
}

// operator()<float> @ 149908d00

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::operator()<float>
          (void *this,float param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttribute<float> *this_01;
  float local_res8 [2];
  FPCGMetadataDomainID FStack_50;
  FPCGAttributeIdentifier local_38;
  
  FStack_50._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_38.MetadataDomain.Flag = FStack_50.Flag;
  local_38.MetadataDomain._1_3_ = FStack_50._1_3_;
  local_38.MetadataDomain.CustomFlag = FStack_50.CustomFlag;
  local_38.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_38.Name = param_2;
  this_01 = (FPCGMetadataAttribute<float> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_38);
  if ((this_01 == (FPCGMetadataAttribute<float> *)0x0) || ((short)this_01->_padding_ != 0)) {
    this_01 = (FPCGMetadataAttribute<float> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = *(bool *)((longlong)&this_01->_padding_ + 2);
  iVar3 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  local_res8[0] = FPCGMetadataAttribute<float>::GetValue(this_01,iVar3);
  FPCGMetadataDomain::CreateAttribute<float>(this_00,param_2,local_res8,bVar2,true);
  return;
}

// operator()<double> @ 14990aa90

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::operator()<double>
          (void *this,double param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttribute<double> *this_01;
  double local_res8;
  FPCGMetadataDomainID FStack_50;
  FPCGAttributeIdentifier local_38;
  
  FStack_50._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_38.MetadataDomain.Flag = FStack_50.Flag;
  local_38.MetadataDomain._1_3_ = FStack_50._1_3_;
  local_38.MetadataDomain.CustomFlag = FStack_50.CustomFlag;
  local_38.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_38.Name = param_2;
  this_01 = (FPCGMetadataAttribute<double> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_38);
  if ((this_01 == (FPCGMetadataAttribute<double> *)0x0) || ((short)this_01->_padding_ != 1)) {
    this_01 = (FPCGMetadataAttribute<double> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = *(bool *)((longlong)&this_01->_padding_ + 2);
  iVar3 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  local_res8 = FPCGMetadataAttribute<double>::GetValue(this_01,iVar3);
  FPCGMetadataDomain::CreateAttribute<double>(this_00,param_2,&local_res8,bVar2,true);
  return;
}

// operator()<UE::Math::TQuat<double>_> @ 14990c2a0

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
operator()<UE::Math::TQuat<double>_>(void *this,TQuat<double> *param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_01;
  FPCGMetadataDomainID FStack_60;
  FPCGAttributeIdentifier local_48;
  TQuat<double> local_28;
  
  FStack_60._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_48.MetadataDomain.Flag = FStack_60.Flag;
  local_48.MetadataDomain._1_3_ = FStack_60._1_3_;
  local_48.MetadataDomain.CustomFlag = FStack_60.CustomFlag;
  local_48.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_48.Name = param_2;
  this_01 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_48);
  if ((this_01 == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) ||
     (*(short *)&this_01->field_0x70 != 7)) {
    this_01 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = (bool)this_01->field_0x72;
  iVar3 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue(this_01,&local_28,iVar3);
  FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>
            (this_00,param_2,&local_28,bVar2,true);
  return;
}

// operator()<UE::Math::TRotator<double>_> @ 14990dcd0

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
operator()<UE::Math::TRotator<double>_>(void *this,TRotator<double> *param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this_01;
  FPCGMetadataDomainID FStack_60;
  FPCGAttributeIdentifier local_48;
  TRotator<double> local_28;
  
  FStack_60._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_48.MetadataDomain.Flag = FStack_60.Flag;
  local_48.MetadataDomain._1_3_ = FStack_60._1_3_;
  local_48.MetadataDomain.CustomFlag = FStack_60.CustomFlag;
  local_48.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_48.Name = param_2;
  this_01 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_48);
  if ((this_01 == (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) ||
     ((short)this_01->_padding_ != 0xb)) {
    this_01 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = *(bool *)((longlong)&this_01->_padding_ + 2);
  iVar3 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue(this_01,&local_28,iVar3);
  FPCGMetadataDomain::CreateAttribute<UE::Math::TRotator<double>_>
            (this_00,param_2,&local_28,bVar2,true);
  return;
}

// operator()<UE::Math::TTransform<double>_> @ 14990f680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this_01;
  undefined1 auStack_f8 [32];
  FPCGAttributeIdentifier local_a8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_a8.MetadataDomain._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_a8.Name = param_2;
  this_01 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_a8);
  if ((this_01 == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) ||
     (*(short *)&this_01->field_0x70 != 8)) {
    this_01 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = (bool)this_01->field_0x72;
  iVar3 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  FPCGMetadataAttribute<UE::Math::TTransform<double>_>::GetValue(this_01,&local_88,iVar3);
  FPCGMetadataDomain::CreateAttribute<UE::Math::TTransform<double>_>
            (this_00,param_2,&local_88,bVar2,true);
  return;
}

// operator()<UE::Math::TVector2<double>_> @ 149911340

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
operator()<UE::Math::TVector2<double>_>(void *this,TVector2<double> *param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  FPCGMetadataDomainID FVar2;
  bool bVar3;
  int iVar4;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this_01;
  TVector2<double> local_58;
  FName local_48;
  FPCGMetadataDomainID FStack_40;
  FPCGAttributeIdentifier local_28;
  
  FStack_40 = PCGMetadataDomainID::Default;
  FVar2 = FStack_40;
  FStack_40._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_28.MetadataDomain.Flag = FStack_40.Flag;
  local_28.MetadataDomain._1_3_ = FStack_40._1_3_;
  local_28.MetadataDomain.CustomFlag = FStack_40.CustomFlag;
  local_28.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_48 = param_2;
  FStack_40 = FVar2;
  local_28.Name = param_2;
  this_01 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_28);
  if ((this_01 == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) ||
     ((short)this_01->_padding_ != 4)) {
    this_01 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar3 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar3) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar3 = *(bool *)((longlong)&this_01->_padding_ + 2);
  iVar4 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  FPCGMetadataAttribute<UE::Math::TVector2<double>_>::GetValue(this_01,&local_58,iVar4);
  FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>
            (this_00,param_2,&local_58,bVar3,true);
  return;
}

// operator()<UE::Math::TVector4<double>_> @ 149912d20

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
operator()<UE::Math::TVector4<double>_>(void *this,TVector4<double> *param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *this_01;
  FPCGMetadataDomainID FStack_60;
  FPCGAttributeIdentifier local_48;
  TVector4<double> local_28;
  
  FStack_60._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_48.MetadataDomain.Flag = FStack_60.Flag;
  local_48.MetadataDomain._1_3_ = FStack_60._1_3_;
  local_48.MetadataDomain.CustomFlag = FStack_60.CustomFlag;
  local_48.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_48.Name = param_2;
  this_01 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_48);
  if ((this_01 == (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) ||
     (*(short *)&this_01->field_0x70 != 6)) {
    this_01 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = (bool)this_01->field_0x72;
  iVar3 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue(this_01,&local_28,iVar3);
  FPCGMetadataDomain::CreateAttribute<UE::Math::TVector4<double>_>
            (this_00,param_2,&local_28,bVar2,true);
  return;
}

// operator()<UE::Math::TVector<double>_> @ 1499149e0

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
operator()<UE::Math::TVector<double>_>(void *this,TVector<double> *param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_01;
  FPCGMetadataDomainID FStack_60;
  FPCGAttributeIdentifier local_48;
  TVector<double> local_28;
  
  FStack_60._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_48.MetadataDomain.Flag = FStack_60.Flag;
  local_48.MetadataDomain._1_3_ = FStack_60._1_3_;
  local_48.MetadataDomain.CustomFlag = FStack_60.CustomFlag;
  local_48.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_48.Name = param_2;
  this_01 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_48);
  if ((this_01 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) ||
     ((short)this_01->_padding_ != 5)) {
    this_01 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = *(bool *)((longlong)&this_01->_padding_ + 2);
  iVar3 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue(this_01,&local_28,iVar3);
  FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
            (this_00,param_2,&local_28,bVar2,true);
  return;
}

// operator()<FSoftClassPath> @ 149916480

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::operator()<FSoftClassPath>
          (void *this,FSoftClassPath *param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttribute<FSoftClassPath> *this_01;
  FPCGMetadataDomainID FStack_70;
  FPCGAttributeIdentifier local_58;
  undefined1 local_38 [32];
  
  FStack_70._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_58.MetadataDomain.Flag = FStack_70.Flag;
  local_58.MetadataDomain._1_3_ = FStack_70._1_3_;
  local_58.MetadataDomain.CustomFlag = FStack_70.CustomFlag;
  local_58.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58.Name = param_2;
  this_01 = (FPCGMetadataAttribute<FSoftClassPath> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_58);
  if ((this_01 == (FPCGMetadataAttribute<FSoftClassPath> *)0x0) ||
     ((short)this_01->_padding_ != 0xe)) {
    this_01 = (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = *(bool *)((longlong)&this_01->_padding_ + 2);
  iVar3 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  FPCGMetadataAttribute<FSoftClassPath>::GetValue(this_01,(FSoftClassPath *)local_38,iVar3);
  FPCGMetadataDomain::CreateAttribute<FSoftClassPath>
            (this_00,param_2,(FSoftClassPath *)local_38,bVar2,true);
  if ((void *)local_38._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38._16_8_);
  }
  if (*(void **)&param_1->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x10);
  }
  return;
}

// operator()<FSoftObjectPath> @ 149917f40

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::operator()<FSoftObjectPath>
          (void *this,FSoftObjectPath *param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPCGMetadataAttribute<FSoftObjectPath> *this_01;
  FPCGMetadataDomainID FStack_70;
  FPCGAttributeIdentifier local_58;
  FSoftObjectPath local_38;
  
  FStack_70._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_58.MetadataDomain.Flag = FStack_70.Flag;
  local_58.MetadataDomain._1_3_ = FStack_70._1_3_;
  local_58.MetadataDomain.CustomFlag = FStack_70.CustomFlag;
  local_58.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58.Name = param_2;
  this_01 = (FPCGMetadataAttribute<FSoftObjectPath> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_58);
  if ((this_01 == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) ||
     ((short)this_01->_padding_ != 0xd)) {
    this_01 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar3) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar3 = *(bool *)((longlong)&this_01->_padding_ + 2);
  iVar4 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  FPCGMetadataAttribute<FSoftObjectPath>::GetValue(this_01,&local_38,iVar4);
  FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>(this_00,param_2,&local_38,bVar3,true);
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator()<FName> @ 149919fc0

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::operator()<FName>
          (void *this,FName param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  FPCGMetadataAttribute<FName> *this_01;
  FName local_res8;
  FPCGMetadataDomainID FStack_50;
  FPCGAttributeIdentifier local_38;
  
  FStack_50._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_38.MetadataDomain.Flag = FStack_50.Flag;
  local_38.MetadataDomain._1_3_ = FStack_50._1_3_;
  local_38.MetadataDomain.CustomFlag = FStack_50.CustomFlag;
  local_38.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_38.Name = param_2;
  this_01 = (FPCGMetadataAttribute<FName> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_38);
  if ((this_01 == (FPCGMetadataAttribute<FName> *)0x0) || ((short)this_01->_padding_ != 0xc)) {
    this_01 = (FPCGMetadataAttribute<FName> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = *(bool *)((longlong)&this_01->_padding_ + 2);
  FPCGMetadataAttributeBase::GetValueKey
            ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  FPCGMetadataAttribute<FName>::GetValue(this_01,(int)&local_res8);
  FPCGMetadataDomain::CreateAttribute<FName>(this_00,param_2,&local_res8,bVar2,true);
  return;
}

// operator()<FString> @ 14991bdd0

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::operator()<FString>
          (void *this,FString *param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FPCGMetadataDomainID FVar3;
  bool bVar4;
  int iVar5;
  FPCGMetadataAttribute<FString> *this_01;
  FString local_68;
  FName local_58;
  FPCGMetadataDomainID FStack_50;
  FPCGAttributeIdentifier local_38;
  
  FStack_50 = PCGMetadataDomainID::Default;
  FVar3 = FStack_50;
  FStack_50._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_38.MetadataDomain.Flag = FStack_50.Flag;
  local_38.MetadataDomain._1_3_ = FStack_50._1_3_;
  local_38.MetadataDomain.CustomFlag = FStack_50.CustomFlag;
  local_38.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_58 = param_2;
  FStack_50 = FVar3;
  local_38.Name = param_2;
  this_01 = (FPCGMetadataAttribute<FString> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_38);
  if ((this_01 == (FPCGMetadataAttribute<FString> *)0x0) || ((short)this_01->_padding_ != 9)) {
    this_01 = (FPCGMetadataAttribute<FString> *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar4 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar4) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar4 = *(bool *)((longlong)&this_01->_padding_ + 2);
  iVar5 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  FPCGMetadataAttribute<FString>::GetValue(this_01,&local_68,iVar5);
  FPCGMetadataDomain::CreateAttribute<FString>(this_00,param_2,&local_68,bVar4,true);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator()<__int64> @ 14991dca0

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::operator()<__int64>
          (void *this,long64 param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttribute<__int64> *this_01;
  long64 local_res8;
  FPCGMetadataDomainID FStack_50;
  FPCGAttributeIdentifier local_38;
  
  FStack_50._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_38.MetadataDomain.Flag = FStack_50.Flag;
  local_38.MetadataDomain._1_3_ = FStack_50._1_3_;
  local_38.MetadataDomain.CustomFlag = FStack_50.CustomFlag;
  local_38.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_38.Name = param_2;
  this_01 = (FPCGMetadataAttribute<__int64> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_38);
  if ((this_01 == (FPCGMetadataAttribute<__int64> *)0x0) || ((short)this_01->_padding_ != 3)) {
    this_01 = (FPCGMetadataAttribute<__int64> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = *(bool *)((longlong)&this_01->_padding_ + 2);
  iVar3 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  local_res8 = FPCGMetadataAttribute<__int64>::GetValue(this_01,iVar3);
  FPCGMetadataDomain::CreateAttribute<__int64>(this_00,param_2,&local_res8,bVar2,true);
  return;
}

// operator()<bool> @ 14991fa80

void __thiscall
`FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::operator()<bool>
          (void *this,bool param_1,FName param_2)

{
  FPCGMetadataDomain *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FPCGMetadataAttribute<bool> *this_01;
  bool local_res8 [8];
  FPCGMetadataDomainID FStack_50;
  FPCGAttributeIdentifier local_38;
  
  FStack_50._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_38.MetadataDomain.Flag = FStack_50.Flag;
  local_38.MetadataDomain._1_3_ = FStack_50._1_3_;
  local_38.MetadataDomain.CustomFlag = FStack_50.CustomFlag;
  local_38.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_38.Name = param_2;
  this_01 = (FPCGMetadataAttribute<bool> *)
            UPCGMetadata::GetConstAttribute(*(UPCGMetadata **)this,&local_38);
  if ((this_01 == (FPCGMetadataAttribute<bool> *)0x0) || ((short)this_01->_padding_ != 10)) {
    this_01 = (FPCGMetadataAttribute<bool> *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAttribute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                       ,0x1e4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPCGMetadataDomain::HasAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  if (bVar2) {
    FPCGMetadataDomain::DeleteAttribute(*(FPCGMetadataDomain **)((longlong)this + 8),param_2);
  }
  this_00 = *(FPCGMetadataDomain **)((longlong)this + 8);
  bVar2 = *(bool *)((longlong)&this_01->_padding_ + 2);
  iVar3 = FPCGMetadataAttributeBase::GetValueKey
                    ((FPCGMetadataAttributeBase *)this_01,*(long64 *)((longlong)this + 0x10));
  local_res8[0] = FPCGMetadataAttribute<bool>::GetValue(this_01,iVar3);
  FPCGMetadataDomain::CreateAttribute<bool>(this_00,param_2,local_res8,bVar2,true);
  return;
}

// GetModulesInfoMap @ 1499f8810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
* __thiscall
FPCGSubdivisionBaseElement::GetModulesInfoMap
          (FPCGSubdivisionBaseElement *this,
          TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
          *__return_storage_ptr__,FPCGContext *param_1,FPCGSubdivisionModuleAttributeNames *param_2,
          UPCGParamData **param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FObjectPtr_u_0 FVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FText *pFVar11;
  TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
  *pTVar12;
  UClass *pUVar13;
  FName *pFVar14;
  FTextFormat *pFVar15;
  ulonglong uVar16;
  byte bVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint *puVar25;
  FScriptContainerElement *pFVar26;
  ForAnyElementType FVar27;
  int iVar28;
  undefined1 auStackY_298 [32];
  uint local_268;
  TArray<FPCGSubdivisionSubmodule,TSizedDefaultAllocator<32>_> local_260;
  FScriptContainerElement *local_250;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_248;
  int local_238;
  uint uStack_234;
  undefined1 *puStack_230;
  undefined4 local_228;
  int iStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  FObjectPtr_u_0 local_218;
  longlong local_210;
  longlong local_208;
  TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
  *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f8;
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined4 local_1c8;
  int local_1c4;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FPCGContext *local_1a0;
  FObjectPtr_u_0 *local_198;
  FName local_190;
  undefined1 local_188;
  FName local_184;
  undefined1 local_17c;
  FName local_178;
  undefined1 local_170;
  FName local_16c;
  undefined1 local_164;
  FName *local_160;
  FName *local_158;
  FName *local_150;
  FName *local_148;
  FName *local_140;
  FName *local_138;
  FName *local_130;
  FName *local_128;
  FSparseArrayAllocationInfo local_120;
  FName local_110;
  FName local_108;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FName local_d0;
  FName local_c8;
  FText local_c0;
  FTextFormat local_b0;
  TSet<TTuple<FName,TTuple<FName,bool>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  *param_3 = (UPCGParamData *)0x0;
  local_198 = (FObjectPtr_u_0 *)param_3;
  local_1a0 = param_1;
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_248,&PCGSubdivisionBase::Constants::ModulesInfoPinLabel);
  if (local_248.ArrayNum == 0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_100,L"PCGSubdivisionBaseElement",L"NoModuleInfo",
                         L"No data was found on the module info pin.");
    PCGLog::LogWarningOnGraph(pFVar11,param_1);
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
    if ((FPCGTaggedData *)local_248.AllocatorInstance.Data == (FPCGTaggedData *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_248.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  if ((local_248.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar12 = (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
               *)(*pcVar3)();
    return pTVar12;
  }
  local_218 = *(FObjectPtr_u_0 *)local_248.AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UPCGParamData *)local_218.Handle != (UPCGParamData *)0x0)) {
    UE::GC::MarkAsReachable(local_218.Handle);
  }
  if ((UPCGParamData *)local_218.Handle != (UPCGParamData *)0x0) {
    pUVar13 = Z_Construct_UClass_UPCGParamData_NoRegister();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&local_218,pUVar13);
    FVar5 = local_218;
    if ((bVar7) && ((UPCGParamData *)local_218.Handle != (UPCGParamData *)0x0)) {
      local_190 = param_2->SymbolAttributeName;
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_188 = 0;
      pFVar14 = ::FName::FName(&local_c8,6,L"Symbol",FNAME_Add);
      local_1c0 = *pFVar14;
      local_160 = &local_1c0;
      local_158 = &local_190;
      TSet<TTuple<FName,TTuple<FName,bool>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TTuple<FName,bool>_&&>_>
                (&local_98,(TPairInitializer<FName_&&,TTuple<FName,bool>_&&> *)local_1d8,
                 (bool *)&local_160);
      local_184 = param_2->SizeAttributeName;
      local_17c = 0;
      pFVar14 = ::FName::FName(&local_110,4,L"Size",FNAME_Add);
      local_1b8 = *pFVar14;
      local_150 = &local_1b8;
      local_148 = &local_184;
      TSet<TTuple<FName,TTuple<FName,bool>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TTuple<FName,bool>_&&>_>
                (&local_98,(TPairInitializer<FName_&&,TTuple<FName,bool>_&&> *)(local_1d8 + 4),
                 (bool *)&local_150);
      local_170 = param_2->bProvideScalable == false;
      local_178 = param_2->ScalableAttributeName;
      pFVar14 = ::FName::FName(&local_108,9,L"bScalable",FNAME_Add);
      local_1b0 = *pFVar14;
      local_140 = &local_1b0;
      local_138 = &local_178;
      TSet<TTuple<FName,TTuple<FName,bool>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TTuple<FName,bool>_&&>_>
                (&local_98,(TPairInitializer<FName_&&,TTuple<FName,bool>_&&> *)local_1d0,
                 (bool *)&local_140);
      local_164 = param_2->bProvideDebugColor == false;
      local_16c = param_2->DebugColorAttributeName;
      pFVar14 = ::FName::FName(&local_d0,10,L"DebugColor",FNAME_Add);
      local_1a8 = *pFVar14;
      local_130 = &local_1a8;
      local_128 = &local_16c;
      TSet<TTuple<FName,TTuple<FName,bool>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TTuple<FName,bool>_&&>_>
                (&local_98,(TPairInitializer<FName_&&,TTuple<FName,bool>_&&> *)(local_1d0 + 4),
                 (bool *)&local_130);
      PCGPropertyHelpers::ExtractAttributeSetAsArrayOfStructs<FPCGSubdivisionSubmodule>
                (&local_260,(UPCGParamData *)FVar5.Handle,
                 (TMap<FName,TTuple<FName,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>_>
                  *)&local_98,param_1);
      iVar28 = local_260.ArrayNum;
      TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
                 *)__return_storage_ptr__,local_260.ArrayNum);
      local_268 = 0;
      if (0 < iVar28) {
        local_210 = 0;
        local_208 = 0;
        FVar27.Data = local_260.AllocatorInstance.Data;
        do {
          lVar20 = local_208;
          uVar22 = ~local_268 >> 0x1f;
          uVar8 = 0;
          if ((int)local_268 < iVar28) {
            uVar8 = uVar22;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                       *)(*pcVar3)();
            return pTVar12;
          }
          lVar20 = *(longlong *)(FVar27.Data + lVar20);
          uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar20);
          if (*(int *)&__return_storage_ptr__->field_0x8 !=
              *(int *)&__return_storage_ptr__->field_0x34) {
            puVar18 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar18 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            iVar9 = *(int *)(puVar18 +
                            (ulonglong)
                            (*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                            (int)((ulonglong)lVar20 >> 0x20) + uVar8) * 4);
            if (iVar9 != -1) {
              do {
                if (*(longlong *)((longlong)iVar9 * 0x60 + *(longlong *)__return_storage_ptr__) ==
                    lVar20) {
                  uVar8 = 0;
                  if ((int)local_268 < iVar28) {
                    uVar8 = uVar22;
                  }
                  if ((uVar8 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    pTVar12 = (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                               *)(*pcVar3)();
                    return pTVar12;
                  }
                  pFVar11 = FText::FromName(&local_c0,
                                            (FName *)(FVar27.Data + (longlong)(int)local_268 * 0x40)
                                           );
                  pFVar15 = FTextFormat::FTextFormat
                                      (&local_b0,&PCGSubdivisionBase::DuplicatedSymbolText,Default);
                  pFVar11 = FText::Format<FText>(&local_f0,pFVar15,pFVar11);
                  PCGLog::LogWarningOnGraph(pFVar11,local_1a0);
                  if (local_f0.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
                  }
                  goto LAB_1499f908b;
                }
                iVar9 = *(int *)((longlong)iVar9 * 0x60 + 0x50 + *(longlong *)__return_storage_ptr__
                                );
              } while (iVar9 != -1);
            }
          }
          uVar8 = 0;
          if ((int)local_268 < iVar28) {
            uVar8 = uVar22;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                       *)(*pcVar3)();
            return pTVar12;
          }
          lVar20 = local_208;
          pFVar26 = FVar27.Data + local_208;
          uVar8 = 0;
          if ((int)local_268 < iVar28) {
            uVar8 = uVar22;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                       *)(*pcVar3)();
            return pTVar12;
          }
          local_250 = local_260.AllocatorInstance.Data + lVar20;
          if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x60,0x10,1,(ForAnyElementType *)__return_storage_ptr__,
                               (int *)&__return_storage_ptr__->field_0x8,
                               (int *)&__return_storage_ptr__->field_0xc);
            iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                               ((TBitArray<FDefaultBitArrayAllocator> *)
                                &__return_storage_ptr__->field_0x10,1);
            puVar18 = &__return_storage_ptr__->field_0x10;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x20 != (undefined1 *)0x0) {
              puVar18 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
            }
            bVar17 = (byte)iVar10 & 0x1f;
            if (iVar10 < 0) {
              iVar10 = iVar10 + 0x1f;
              bVar17 = bVar17 - 0x20;
            }
            *(uint *)(puVar18 + (longlong)(iVar10 >> 5) * 4) =
                 *(uint *)(puVar18 + (longlong)(iVar10 >> 5) * 4) & ~(1 << (bVar17 & 0x1f));
          }
          else {
            iVar9 = *(int *)&__return_storage_ptr__->field_0x30;
            iVar10 = *(int *)&__return_storage_ptr__->field_0x34 + -1;
            iVar1 = *(int *)((longlong)iVar9 * 0x60 + 4 + *(longlong *)__return_storage_ptr__);
            *(int *)&__return_storage_ptr__->field_0x30 = iVar1;
            *(int *)&__return_storage_ptr__->field_0x34 = iVar10;
            if (iVar10 != 0) {
              *(undefined4 *)((longlong)iVar1 * 0x60 + *(longlong *)__return_storage_ptr__) =
                   0xffffffff;
            }
          }
          pFVar4 = local_250;
          TSparseArrayBase<96,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<96,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)__return_storage_ptr__,&local_120,iVar9);
          pvVar6 = local_120.Pointer;
          if (local_120.Pointer != (TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_> *)0x0
             ) {
            *(undefined8 *)local_120.Pointer = *(undefined8 *)pFVar4;
            uVar2 = *(undefined8 *)(pFVar26 + 8);
            *(undefined8 *)((longlong)local_120.Pointer + 0x10) = *(undefined8 *)pFVar26;
            *(undefined8 *)((longlong)local_120.Pointer + 0x18) = uVar2;
            uVar2 = *(undefined8 *)(pFVar26 + 0x18);
            *(undefined8 *)((longlong)local_120.Pointer + 0x20) = *(undefined8 *)(pFVar26 + 0x10);
            *(undefined8 *)((longlong)local_120.Pointer + 0x28) = uVar2;
            uVar2 = *(undefined8 *)(pFVar26 + 0x28);
            *(undefined8 *)((longlong)local_120.Pointer + 0x30) = *(undefined8 *)(pFVar26 + 0x20);
            *(undefined8 *)((longlong)local_120.Pointer + 0x38) = uVar2;
            uVar2 = *(undefined8 *)(pFVar26 + 0x38);
            *(undefined8 *)((longlong)local_120.Pointer + 0x40) = *(undefined8 *)(pFVar26 + 0x30);
            *(undefined8 *)((longlong)local_120.Pointer + 0x48) = uVar2;
            *(undefined4 *)((longlong)local_120.Pointer + 0x50) = 0xffffffff;
          }
          uVar2 = *(undefined8 *)local_120.Pointer;
          local_250 = (FScriptContainerElement *)CONCAT44(local_250._4_4_,local_120.Index);
          uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
          uVar8 = uVar8 + (int)((ulonglong)uVar2 >> 0x20);
          bVar7 = TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
                  ::TryReplaceExisting
                            ((TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
                              *)__return_storage_ptr__,uVar8,pvVar6,(int *)&local_250,(bool *)0x0);
          FVar27.Data = local_260.AllocatorInstance.Data;
          if (!bVar7) {
            uVar23 = 1;
            uVar22 = *(int *)&__return_storage_ptr__->field_0x8 -
                     *(int *)&__return_storage_ptr__->field_0x34;
            if (3 < uVar22) {
              uVar19 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
              lVar20 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              local_1c8 = (undefined4)lVar20;
              uVar23 = 1 << ((byte)lVar20 & 0x1f);
            }
            if (((int)uVar22 < 1) || ((int)uVar23 <= *(int *)&__return_storage_ptr__->field_0x48)) {
              uVar8 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar8;
              *(uint *)((longlong)pvVar6 + 0x54) = uVar8;
              puVar18 = &__return_storage_ptr__->field_0x38;
              if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
                puVar18 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
              }
              uVar19 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                       (longlong)(int)uVar8;
              *(undefined4 *)((longlong)pvVar6 + 0x50) = *(undefined4 *)(puVar18 + uVar19 * 4);
              *(undefined4 *)(puVar18 + uVar19 * 4) = local_250._0_4_;
            }
            else {
              *(uint *)&__return_storage_ptr__->field_0x48 = uVar23;
              if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
              }
              if (uVar23 != 0) {
                uVar8 = uVar23;
                if (uVar23 < 2) {
                  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
                    uVar8 = 0;
                    goto LAB_1499f8f5a;
                  }
                }
                else {
LAB_1499f8f5a:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar8,4);
                }
                if (0 < (int)uVar23) {
                  uVar24 = (ulonglong)uVar23;
                  uVar19 = 0;
                  do {
                    puVar18 = &__return_storage_ptr__->field_0x38;
                    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
                      puVar18 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
                    }
                    uVar16 = uVar19 & (longlong)(int)uVar23 - 1U;
                    uVar19 = uVar19 + 1;
                    *(undefined4 *)(puVar18 + uVar16 * 4) = 0xffffffff;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
              }
              FVar27.Data = local_260.AllocatorInstance.Data;
              if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
                iVar9 = *(int *)&__return_storage_ptr__->field_0x28;
                puStack_230 = &__return_storage_ptr__->field_0x10;
                uStack_234 = 1;
                local_238 = 0;
                iStack_224 = 0;
                iStack_220 = 0;
                local_200 = __return_storage_ptr__;
                local_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_230;
                if (iVar9 != 0) {
                  puVar25 = (uint *)puStack_230;
                  if (*(uint **)&__return_storage_ptr__->field_0x20 != (uint *)0x0) {
                    puVar25 = *(uint **)&__return_storage_ptr__->field_0x20;
                  }
                  uVar8 = *puVar25;
                  iStack_220 = 0;
                  local_238 = 0;
                  while (uVar8 == 0) {
                    iStack_220 = iStack_220 + 0x20;
                    lVar20 = (longlong)local_238;
                    local_238 = local_238 + 1;
                    if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < local_238)
                    goto LAB_1499f9066;
                    uVar8 = puVar25[lVar20 + 1];
                  }
                  uStack_234 = -uVar8 & uVar8;
                  uVar19 = (ulonglong)uStack_234 * 2 + 1;
                  lVar20 = 0x3f;
                  if (uVar19 != 0) {
                    for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  local_1c4 = (int)lVar20;
                  iStack_224 = iStack_220 + -1 + local_1c4;
                  if (iVar9 < iStack_224) {
LAB_1499f9066:
                    local_228 = 0xffffffff;
                    local_1f8._padding_ = CONCAT44(uStack_234,local_238);
                    local_1f8.CurrentBitIndex = iVar9;
                    local_1f8.UnvisitedBitMask = 0xffffffff;
                    local_1f8._28_4_ = uStack_21c;
                    local_1f8.BaseBitIndex = iStack_220;
                    iStack_224 = iVar9;
                    goto LAB_1499f908b;
                  }
                }
                local_228 = 0xffffffff;
                local_1f8._padding_ = CONCAT44(uStack_234,local_238);
                local_1f8.CurrentBitIndex = iStack_224;
                local_1f8.UnvisitedBitMask = 0xffffffff;
                local_1f8._28_4_ = uStack_21c;
                local_1f8.BaseBitIndex = iStack_220;
                iVar10 = iStack_224;
                if (iStack_224 < iVar9) {
                  do {
                    puVar21 = (undefined8 *)((longlong)iVar10 * 0x60 + *(longlong *)local_200);
                    uVar2 = *puVar21;
                    uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
                    uVar8 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                            uVar8 + (int)((ulonglong)uVar2 >> 0x20);
                    *(uint *)((longlong)puVar21 + 0x54) = uVar8;
                    puVar18 = &__return_storage_ptr__->field_0x38;
                    if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
                      puVar18 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
                    }
                    uVar19 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                             (longlong)(int)uVar8;
                    *(undefined4 *)(puVar21 + 10) = *(undefined4 *)(puVar18 + uVar19 * 4);
                    *(int *)(puVar18 + uVar19 * 4) = iVar10;
                    local_1f8.UnvisitedBitMask =
                         local_1f8.UnvisitedBitMask & ~local_1f8._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f8);
                    FVar27.Data = local_260.AllocatorInstance.Data;
                    iVar28 = local_260.ArrayNum;
                    iVar10 = local_1f8.CurrentBitIndex;
                  } while (local_1f8.CurrentBitIndex < (local_1f8.Array)->NumBits);
                }
              }
            }
          }
LAB_1499f908b:
          local_268 = local_268 + 1;
          local_210 = local_210 + 1;
          local_208 = local_208 + 0x40;
        } while ((int)local_268 < iVar28);
      }
      local_198->Handle = (UObject *)FVar5;
      if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.AllocatorInstance.Data);
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TTuple<FName,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TTuple<FName,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      goto LAB_1499f922c;
    }
  }
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_e0,L"PCGSubdivisionBaseElement",L"ModuleInfoWrongType",
                       L"Module info input is not of type attribute set.");
  PCGLog::LogWarningOnGraph(pFVar11,param_1);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
LAB_1499f922c:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
  if ((FPCGTaggedData *)local_248.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetModulesInfoMap @ 1499f9280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
* __thiscall
FPCGSubdivisionBaseElement::GetModulesInfoMap
          (FPCGSubdivisionBaseElement *this,
          TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
          *__return_storage_ptr__,FPCGContext *param_1,
          TArray<FPCGSubdivisionSubmodule,TSizedDefaultAllocator<32>_> *param_2,
          UPCGParamData **param_3)

{
  int iVar1;
  undefined8 uVar2;
  FName FVar3;
  ITextData *pIVar4;
  code *pcVar5;
  FName *pFVar6;
  void *pvVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
  *pTVar15;
  byte bVar16;
  undefined1 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint *puVar26;
  FName *pFVar27;
  int local_res10 [2];
  FPCGContext *local_res18;
  TArray<FPCGSubdivisionSubmodule,TSizedDefaultAllocator<32>_> *local_res20;
  int local_168;
  uint uStack_164;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_148;
  uint local_138;
  uint local_130;
  uint uStack_12c;
  undefined1 *puStack_128;
  undefined4 local_120;
  uint uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  int local_dc;
  FName *local_d8;
  TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  FTextFormat local_a8;
  FText local_98;
  FSparseArrayAllocationInfo local_88;
  FFormatArgumentValue local_78;
  FText local_58;
  FTextFormat local_48;
  
  uVar12 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  *param_3 = (UPCGParamData *)0x0;
  uVar23 = param_2->ArrayNum;
  local_res18 = param_1;
  local_res20 = param_2;
  if (uVar23 <= (uint)(*(int *)&__return_storage_ptr__->field_0x8 -
                      *(int *)&__return_storage_ptr__->field_0x34)) goto LAB_1499f9523;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar23);
  }
  TSparseArrayBase<96,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar23);
  if (uVar23 < 4) {
    uVar23 = 1;
  }
  else {
    uVar19 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_e8 = (undefined4)lVar21;
    uVar23 = 1 << ((byte)lVar21 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar23 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_1499f9523;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar23;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar23 != 0) {
    uVar18 = uVar23;
    if (uVar23 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar18 = 0;
        goto LAB_1499f937a;
      }
    }
    else {
LAB_1499f937a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar18,4);
    }
    if (0 < (int)uVar23) {
      uVar25 = (ulonglong)uVar23;
      uVar19 = uVar12;
      do {
        puVar17 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar17 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar11 = uVar19 & (longlong)(int)uVar23 - 1U;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(puVar17 + uVar11 * 4) = 0xffffffff;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar23 = *(uint *)&__return_storage_ptr__->field_0x28;
    puStack_128 = &__return_storage_ptr__->field_0x10;
    uStack_12c = 1;
    local_130 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    if (uVar23 != 0) {
      puVar26 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar26 = (uint *)puStack_128;
      }
      uVar18 = *puVar26;
      uVar19 = uVar12;
      while (uVar18 == 0) {
        uStack_118 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_118;
        iVar10 = (int)uVar12;
        local_130 = iVar10 + 1;
        uVar12 = (ulonglong)local_130;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_130)
        goto LAB_1499f946f;
        uVar18 = puVar26[(longlong)iVar10 + 1];
      }
      uStack_12c = -uVar18 & uVar18;
      uVar12 = (ulonglong)uStack_12c * 2 + 1;
      lVar21 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_e4 = (int)lVar21;
      uStack_11c = local_e4 + -1 + uStack_118;
      uVar12 = (ulonglong)uStack_11c;
      if ((int)uVar23 < (int)uStack_11c) {
LAB_1499f946f:
        uVar12 = (ulonglong)uVar23;
        uStack_11c = uVar23;
      }
    }
    local_120 = 0xffffffff;
    local_c8._padding_ = CONCAT44(uStack_12c,local_130);
    local_c8.CurrentBitIndex = uStack_11c;
    local_c8.UnvisitedBitMask = 0xffffffff;
    local_c8._28_4_ = uStack_114;
    local_c8.BaseBitIndex = uStack_118;
    param_1 = local_res18;
    local_d0 = __return_storage_ptr__;
    local_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_128;
    if ((int)uVar12 < (int)uVar23) {
      do {
        puVar22 = (undefined8 *)((longlong)(int)uVar12 * 0x60 + *(longlong *)local_d0);
        uVar2 = *puVar22;
        uVar23 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar23 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                 uVar23 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)((longlong)puVar22 + 0x54) = uVar23;
        puVar17 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar17 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar19 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar23;
        *(undefined4 *)(puVar22 + 10) = *(undefined4 *)(puVar17 + uVar19 * 4);
        *(int *)(puVar17 + uVar19 * 4) = (int)uVar12;
        local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
        uVar12 = (ulonglong)(uint)local_c8.CurrentBitIndex;
        param_1 = local_res18;
      } while (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits);
    }
  }
LAB_1499f9523:
  local_138 = param_2->ArrayNum;
  uVar12 = (ulonglong)(int)local_138;
  pFVar27 = (FName *)(param_2->AllocatorInstance).Data;
  local_d8 = pFVar27 + uVar12 * 8;
LAB_1499f9540:
  do {
    pFVar6 = local_d8;
    puVar17 = &__return_storage_ptr__->field_0x8;
    if (param_2->ArrayNum != (int)uVar12) {
      param_3._0_1_ = 0;
      `TCheckedPointerIterator<FPCGSubdivisionSubmodule_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&param_3);
    }
    if (pFVar27 == pFVar6) {
      return __return_storage_ptr__;
    }
    FVar3 = *pFVar27;
    uVar23 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    iVar10 = *(int *)&__return_storage_ptr__->field_0x34;
    if (*(int *)puVar17 != iVar10) {
      puVar20 = &__return_storage_ptr__->field_0x38;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
        puVar20 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
      }
      iVar9 = *(int *)(puVar20 +
                      (ulonglong)
                      (*(int *)&__return_storage_ptr__->field_0x48 - 1U & FVar3.Number + uVar23) * 4
                      );
      if (iVar9 != -1) {
        do {
          if (*(FName *)((longlong)iVar9 * 0x60 + *(longlong *)__return_storage_ptr__) == FVar3) {
            pFVar13 = FText::FromName(&local_58,pFVar27);
            pFVar14 = FTextFormat::FTextFormat
                                (&local_48,&PCGSubdivisionBase::DuplicatedSymbolText,Default);
            local_78.Type = Text;
            FText::FText((FText *)&local_78.TextValue,pFVar13);
            if ((local_78.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0xbd,
                                   L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              pTVar15 = (TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
                         *)(*pcVar5)();
              return pTVar15;
            }
            local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_148.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_148.AllocatorInstance,1,&local_148.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_148.AllocatorInstance.Data,&local_78,1);
            local_a8.TextFormatData.Object = (pFVar14->TextFormatData).Object;
            local_a8.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar14->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_a8.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_a8.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_98,&local_a8,&local_148);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
            if ((FFormatArgumentValue *)local_148.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_148.AllocatorInstance.Data);
            }
            if (local_78.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)local_78.TextValue.field0_0x0.TypedValue.TextData.Reference
                          + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar14->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar4 = (pFVar13->TextData).Reference;
            if (pIVar4 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar4 + 0x10))();
            }
            PCGLog::LogWarningOnGraph(&local_98,param_1);
            if (local_98.TextData.Reference == (ITextData *)0x0) goto LAB_1499f99ff;
            (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
            uVar12 = (ulonglong)local_138;
            pFVar27 = pFVar27 + 8;
            goto LAB_1499f9540;
          }
          iVar9 = *(int *)((longlong)iVar9 * 0x60 + 0x50 + *(longlong *)__return_storage_ptr__);
        } while (iVar9 != -1);
      }
    }
    if (iVar10 == 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x60,0x10,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar17,
                         (int *)&__return_storage_ptr__->field_0xc);
      iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)
                          &__return_storage_ptr__->field_0x10,1);
      puVar20 = &__return_storage_ptr__->field_0x10;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x20 != (undefined1 *)0x0) {
        puVar20 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
      }
      bVar16 = (byte)iVar10 & 0x1f;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0x1f;
        bVar16 = bVar16 - 0x20;
      }
      *(uint *)(puVar20 + (longlong)(iVar10 >> 5) * 4) =
           *(uint *)(puVar20 + (longlong)(iVar10 >> 5) * 4) & ~(1 << (bVar16 & 0x1f));
    }
    else {
      iVar9 = *(int *)&__return_storage_ptr__->field_0x30;
      iVar1 = *(int *)((longlong)iVar9 * 0x60 + 4 + *(longlong *)__return_storage_ptr__);
      *(int *)&__return_storage_ptr__->field_0x30 = iVar1;
      *(int *)&__return_storage_ptr__->field_0x34 = iVar10 + -1;
      if (iVar10 + -1 != 0) {
        *(undefined4 *)((longlong)iVar1 * 0x60 + *(longlong *)__return_storage_ptr__) = 0xffffffff;
      }
    }
    TSparseArrayBase<96,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<96,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)__return_storage_ptr__,&local_88,iVar9);
    pvVar7 = local_88.Pointer;
    if (local_88.Pointer != (TSparseSetElement<TTuple<FName,FPCGSubdivisionSubmodule>_> *)0x0) {
      *(FName *)local_88.Pointer = *pFVar27;
      FVar3 = pFVar27[1];
      *(FName *)((longlong)local_88.Pointer + 0x10) = *pFVar27;
      *(FName *)((longlong)local_88.Pointer + 0x18) = FVar3;
      FVar3 = pFVar27[3];
      *(FName *)((longlong)local_88.Pointer + 0x20) = pFVar27[2];
      *(FName *)((longlong)local_88.Pointer + 0x28) = FVar3;
      FVar3 = pFVar27[5];
      *(FName *)((longlong)local_88.Pointer + 0x30) = pFVar27[4];
      *(FName *)((longlong)local_88.Pointer + 0x38) = FVar3;
      FVar3 = pFVar27[7];
      *(FName *)((longlong)local_88.Pointer + 0x40) = pFVar27[6];
      *(FName *)((longlong)local_88.Pointer + 0x48) = FVar3;
      *(undefined4 *)((longlong)local_88.Pointer + 0x50) = 0xffffffff;
    }
    uVar2 = *(undefined8 *)local_88.Pointer;
    local_res10[0] = local_88.Index;
    uVar23 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    uVar23 = uVar23 + (int)((ulonglong)uVar2 >> 0x20);
    bVar8 = TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      ((TSet<TTuple<FName,FPCGSubdivisionSubmodule>,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>,FDefaultSetAllocator>
                        *)__return_storage_ptr__,uVar23,pvVar7,local_res10,(bool *)0x0);
    param_1 = local_res18;
    if (!bVar8) {
      uVar24 = 1;
      uVar18 = *(int *)puVar17 - *(int *)&__return_storage_ptr__->field_0x34;
      if (3 < uVar18) {
        uVar12 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_e0 = (undefined4)lVar21;
        uVar24 = 1 << ((byte)lVar21 & 0x1f);
      }
      if (((int)uVar18 < 1) || ((int)uVar24 <= *(int *)&__return_storage_ptr__->field_0x48)) {
        uVar23 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar23;
        *(uint *)((longlong)pvVar7 + 0x54) = uVar23;
        puVar17 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar17 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar12 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar23;
        pFVar27 = pFVar27 + 8;
        *(undefined4 *)((longlong)pvVar7 + 0x50) = *(undefined4 *)(puVar17 + uVar12 * 4);
        *(int *)(puVar17 + uVar12 * 4) = local_res10[0];
        uVar12 = (ulonglong)local_138;
        goto LAB_1499f9540;
      }
      *(uint *)&__return_storage_ptr__->field_0x48 = uVar24;
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
      }
      if (uVar24 != 0) {
        uVar23 = uVar24;
        if (uVar24 < 2) {
          if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
            uVar23 = 0;
            goto LAB_1499f98cc;
          }
        }
        else {
LAB_1499f98cc:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar23,4);
        }
        if (0 < (int)uVar24) {
          uVar19 = (ulonglong)uVar24;
          uVar12 = 0;
          do {
            puVar17 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar17 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar25 = uVar12 & (longlong)(int)uVar24 - 1U;
            uVar12 = uVar12 + 1;
            *(undefined4 *)(puVar17 + uVar25 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      param_2 = local_res20;
      param_1 = local_res18;
      if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
        iVar10 = *(int *)&__return_storage_ptr__->field_0x28;
        local_108.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
        uStack_164 = 1;
        local_168 = 0;
        iStack_154 = 0;
        iStack_150 = 0;
        local_110 = __return_storage_ptr__;
        if (iVar10 != 0) {
          puVar26 = (uint *)local_108.Array;
          if (*(uint **)&__return_storage_ptr__->field_0x20 != (uint *)0x0) {
            puVar26 = *(uint **)&__return_storage_ptr__->field_0x20;
          }
          uVar23 = *puVar26;
          iStack_150 = 0;
          local_168 = 0;
          while (uVar23 == 0) {
            iStack_150 = iStack_150 + 0x20;
            lVar21 = (longlong)local_168;
            local_168 = local_168 + 1;
            if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < local_168)
            goto LAB_1499f99d2;
            uVar23 = puVar26[lVar21 + 1];
          }
          uStack_164 = -uVar23 & uVar23;
          uVar12 = (ulonglong)uStack_164 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          local_dc = (int)lVar21;
          iStack_154 = local_dc + -1 + iStack_150;
          if (iVar10 < iStack_154) {
LAB_1499f99d2:
            local_108._padding_ = CONCAT44(uStack_164,local_168);
            local_108.CurrentBitIndex = iVar10;
            local_108.UnvisitedBitMask = 0xffffffff;
            local_108._28_4_ = uStack_14c;
            local_108.BaseBitIndex = iStack_150;
            goto LAB_1499f99ff;
          }
        }
        local_108._padding_ = CONCAT44(uStack_164,local_168);
        local_108.CurrentBitIndex = iStack_154;
        local_108.UnvisitedBitMask = 0xffffffff;
        local_108._28_4_ = uStack_14c;
        local_108.BaseBitIndex = iStack_150;
        if (iStack_154 < iVar10) {
          do {
            puVar22 = (undefined8 *)((longlong)iStack_154 * 0x60 + *(longlong *)local_110);
            uVar2 = *puVar22;
            uVar23 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
            uVar23 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                     uVar23 + (int)((ulonglong)uVar2 >> 0x20);
            *(uint *)((longlong)puVar22 + 0x54) = uVar23;
            puVar17 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar17 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            uVar12 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                     (longlong)(int)uVar23;
            *(undefined4 *)(puVar22 + 10) = *(undefined4 *)(puVar17 + uVar12 * 4);
            *(int *)(puVar17 + uVar12 * 4) = iStack_154;
            local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
            param_2 = local_res20;
            param_1 = local_res18;
            iStack_154 = local_108.CurrentBitIndex;
          } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
        }
      }
    }
LAB_1499f99ff:
    pFVar27 = pFVar27 + 8;
    uVar12 = (ulonglong)local_138;
  } while( true );
}

// GetModulesInfoMap @ 1499f9b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
* __thiscall
FPCGSubdivisionBaseElement::GetModulesInfoMap
          (FPCGSubdivisionBaseElement *this,
          TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
          *__return_storage_ptr__,FPCGContext *param_1,UPCGSubdivisionBaseSettings *param_2,
          UPCGParamData **param_3)

{
  if (param_2->bModuleInfoAsInput != false) {
    GetModulesInfoMap(this,__return_storage_ptr__,param_1,&param_2->ModulesInfoAttributeNames,
                      param_3);
    return __return_storage_ptr__;
  }
  GetModulesInfoMap(this,__return_storage_ptr__,param_1,&param_2->ModulesInfo,param_3);
  return __return_storage_ptr__;
}

// GetTokenizedGrammar @ 1499fd380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTokenizedGrammar * __thiscall
FPCGSubdivisionBaseElement::GetTokenizedGrammar
          (FPCGSubdivisionBaseElement *this,FTokenizedGrammar *__return_storage_ptr__,
          FPCGContext *param_1,UPCGData *param_2,UPCGSubdivisionBaseSettings *param_3,
          TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
          *param_4,double *param_5)

{
  FScriptContainerElement *_Src;
  UPCGSubdivisionBaseSettings *pUVar1;
  bool bVar2;
  FString *pFVar3;
  longlong lVar4;
  undefined1 local_a8 [16];
  int local_98;
  int local_94 [3];
  TArrayView<FString,int> local_88;
  FString local_78;
  FPCGAttributePropertySelector local_68;
  
  pUVar1 = param_3;
  local_a8._8_8_ = (void *)0x0;
  local_98 = (param_3->GrammarSelection).GrammarString.Data.ArrayNum;
  lVar4 = (longlong)local_98;
  _Src = (param_3->GrammarSelection).GrammarString.Data.AllocatorInstance.Data;
  if (local_98 == 0) {
    local_94[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_98,0,(ForAnyElementType *)(local_a8 + 8),local_98,local_94);
    memcpy((void *)local_a8._8_8_,_Src,lVar4 * 2);
  }
  if ((pUVar1->GrammarSelection).bGrammarAsAttribute == false) {
LAB_1499fd57b:
    PCGSubdivisionBase::GetTokenizedGrammar
              (__return_storage_ptr__,param_1,(FString *)(local_a8 + 8),param_4,param_5);
  }
  else {
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              (&(pUVar1->GrammarSelection).GrammarAttribute,
               (FPCGAttributePropertyInputSelector *)&local_68,param_2);
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((UPCGData *)&param_3,(FPCGAttributePropertySelector *)param_2,SUB81(&local_68,0));
    PCGAttributeAccessorHelpers::CreateConstKeys
              ((UPCGData *)local_a8,(FPCGAttributePropertySelector *)param_2);
    if ((param_3 == (UPCGSubdivisionBaseSettings *)0x0) ||
       ((IPCGAttributeAccessorKeys *)local_a8._0_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
      PCGLog::Metadata::LogFailToCreateAccessorError(&local_68,param_1);
    }
    else {
      local_88.ArrayNum = 1;
      local_88.DataPtr = (FString *)(local_a8 + 8);
      bVar2 = IPCGAttributeAccessor::GetRange<FString>
                        ((IPCGAttributeAccessor *)param_3,&local_88,0,
                         (IPCGAttributeAccessorKeys *)local_a8._0_8_,AllowBroadcastAndConstructible)
      ;
      pUVar1 = param_3;
      if (bVar2) {
        if ((IPCGAttributeAccessorKeys *)local_a8._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_a8._0_8_)(local_a8._0_8_,1);
        }
        if (param_3 != (UPCGSubdivisionBaseSettings *)0x0) {
          (**(code **)param_3->_padding_)(param_3,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_68.ExtraNames.AllocatorInstance.Data,
                   local_68.ExtraNames.ArrayNum);
        if (local_68.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.ExtraNames.AllocatorInstance.Data);
        }
        goto LAB_1499fd57b;
      }
      pFVar3 = FPCGAttributePropertySelector::ToString(&local_68,&local_78,false);
      FText::FromString((FText *)&local_88,pFVar3);
      if ((FPCGCrc)local_78.Data.AllocatorInstance.Data != (FPCGCrc)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      PCGLog::Metadata::LogFailToGetAttributeError<FString>
                ((FText *)&local_88,(IPCGAttributeAccessor *)pUVar1,param_1);
      if (local_88.DataPtr != (FString *)0x0) {
        (**(code **)(((local_88.DataPtr)->Data).AllocatorInstance.Data + 0x10))();
      }
    }
    (__return_storage_ptr__->ModuleGrammar).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->ModuleGrammar).Object = (FTokenizedModule *)0x0;
    (__return_storage_ptr__->ParsedGrammar).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->ParsedGrammar).Object = (FModuleDescriptor *)0x0;
    if ((IPCGAttributeAccessorKeys *)local_a8._0_8_ != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)*(longlong *)local_a8._0_8_)(local_a8._0_8_,1);
    }
    if (param_3 != (UPCGSubdivisionBaseSettings *)0x0) {
      (**(code **)param_3->_padding_)(param_3,1);
    }
    DestructItems<FString,int>
              ((FString *)local_68.ExtraNames.AllocatorInstance.Data,local_68.ExtraNames.ArrayNum);
    if (local_68.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.ExtraNames.AllocatorInstance.Data);
    }
  }
  if ((void *)local_a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._8_8_);
  }
  return __return_storage_ptr__;
}

// GetTokenizedGrammarForPoints @ 1499fde80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TMap<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
* __thiscall
FPCGSubdivisionBaseElement::GetTokenizedGrammarForPoints
          (FPCGSubdivisionBaseElement *this,
          TMap<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
          *__return_storage_ptr__,FPCGContext *param_1,UPCGBasePointData *param_2,
          UPCGSubdivisionBaseSettings *param_3,
          TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
          *param_4,double *param_5)

{
  undefined1 *puVar1;
  TSharedPtr<PCGGrammar::FTokenizedModule,1> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FPCGSubdivisionSubmodule,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGSubdivisionSubmodule,0>_>
  *pTVar6;
  double *pdVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FString *pFVar12;
  TMap<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
  *pTVar13;
  FTokenizedGrammar *pFVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_138 [16];
  TMap<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
  *local_128;
  uint uStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  TObjectPtr<UPCGMetadata>_u_0 TStack_100;
  TObjectPtr<UPCGMetadata>_u_0 local_f8;
  TMap<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  FPCGAttributePropertySelector local_b8;
  FText local_78;
  FString local_68;
  FTokenizedGrammar local_58;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uVar10 = 1;
  uVar17 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if ((param_3->GrammarSelection).bGrammarAsAttribute == false) {
    TMapBase<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
    ::Emplace<FString_const_&>
              ((TMapBase<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
                *)__return_storage_ptr__,&(param_3->GrammarSelection).GrammarString);
LAB_1499fe055:
    uVar4 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_108 = 0;
    puVar1 = &__return_storage_ptr__->field_0x10;
    uStack_10c = local_108;
    if (uVar4 != 0) {
      puVar19 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar11 = *puVar19;
      local_108 = 0;
      uVar17 = 0;
      while (uVar11 == 0) {
        lVar15 = (longlong)(int)uVar17;
        local_108 = local_108 + 0x20;
        uVar17 = uVar17 + 1;
        uStack_10c = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
        goto LAB_1499fe0df;
        uVar11 = puVar19[lVar15 + 1];
      }
      uVar10 = -uVar11 & uVar11;
      uVar3 = (ulonglong)uVar10 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uStack_10c = (local_108 - 1) + (int)lVar15;
      if ((int)uVar4 < (int)uStack_10c) {
        uStack_10c = uVar4;
      }
    }
LAB_1499fe0df:
    uVar11 = *(uint *)&__return_storage_ptr__->field_0x28;
    uVar20 = uVar11 & 0xffffffe0;
    TStack_100._0_4_ =
         *(int *)&__return_storage_ptr__->field_0x8 - *(int *)&__return_storage_ptr__->field_0x34;
    uStack_110 = 0xffffffff;
    TStack_e8._padding_ = CONCAT44(uVar10,uVar17);
    TStack_e8.CurrentBitIndex = uStack_10c;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar11 >> 5;
    TStack_e8._28_4_ = uStack_10c;
    TStack_e8.BaseBitIndex = local_108;
    uStack_c8 = CONCAT44(TStack_100._4_4_,TStack_100._0_4_);
    local_128 = __return_storage_ptr__;
    uStack_120 = uVar17;
    uStack_11c = uVar10;
    local_118 = puVar1;
    uStack_104 = uStack_10c;
    local_f0 = __return_storage_ptr__;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || ((int)uVar4 < (int)uVar11)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar13 = (TMap<FString,PCGGrammar::FTokenizedGrammar,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,PCGGrammar::FTokenizedGrammar,0>_>
                 *)(*pcVar5)();
      return pTVar13;
    }
    pdVar7 = param_5;
    pTVar6 = param_4;
    uVar17 = *(uint *)&__return_storage_ptr__->field_0x28;
    if (uVar11 != uVar17) {
      puVar18 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
      if (*(undefined1 **)&__return_storage_ptr__->field_0x20 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar10 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
      while (uVar10 == 0) {
        lVar15 = (longlong)iVar16;
        uVar20 = uVar20 + 0x20;
        iVar16 = iVar16 + 1;
        uVar11 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_1499fe200;
        uVar10 = *(uint *)(puVar18 + lVar15 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar11 = (int)lVar15 + -1 + uVar20;
      if ((int)uVar17 < (int)uVar11) {
        uVar11 = uVar17;
      }
    }
LAB_1499fe200:
    while( true ) {
      pTVar13 = local_f0;
      if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
        `TSparseArray<TSparseSetElement<TTuple<FString,PCGGrammar::FTokenizedGrammar>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&param_3);
      }
      if (((TStack_e8.CurrentBitIndex == uVar11) &&
          (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar13 == __return_storage_ptr__)) break;
      pFVar12 = (FString *)((longlong)TStack_e8.CurrentBitIndex * 0x38 + *(longlong *)pTVar13);
      pFVar14 = PCGSubdivisionBase::GetTokenizedGrammar(&local_58,param_1,pFVar12,pTVar6,pdVar7);
      if ((FTokenizedGrammar *)(pFVar12 + 1) != pFVar14) {
        (((FTokenizedGrammar *)(pFVar12 + 1))->ParsedGrammar).Object =
             (pFVar14->ParsedGrammar).Object;
        (pFVar14->ParsedGrammar).Object = (FModuleDescriptor *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pFVar12[1].Data.ArrayNum,
                   &(pFVar14->ParsedGrammar).SharedReferenceCount);
      }
      pTVar2 = &pFVar14->ModuleGrammar;
      if ((TSharedPtr<PCGGrammar::FTokenizedModule,1> *)(pFVar12 + 2) != pTVar2) {
        pFVar12[2].Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar2->Object;
        pTVar2->Object = (FTokenizedModule *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pFVar12[2].Data.ArrayNum,
                   &(pFVar14->ModuleGrammar).SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.ModuleGrammar.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.ParsedGrammar.SharedReferenceCount.ReferenceController);
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
  }
  else {
    FPCGAttributePropertyInputSelector::CopyAndFixLast
              (&(param_3->GrammarSelection).GrammarAttribute,
               (FPCGAttributePropertyInputSelector *)&local_b8,(UPCGData *)param_2);
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((UPCGData *)local_138,(FPCGAttributePropertySelector *)param_2,SUB81(&local_b8,0));
    PCGAttributeAccessorHelpers::CreateConstKeys
              ((UPCGData *)(local_138 + 8),(FPCGAttributePropertySelector *)param_2);
    if (((IPCGAttributeAccessor *)local_138._0_8_ == (IPCGAttributeAccessor *)0x0) ||
       ((IPCGAttributeAccessorKeys *)local_138._8_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
      PCGLog::Metadata::LogFailToCreateAccessorError(&local_b8,param_1);
    }
    else {
      local_f8 = (TObjectPtr<UPCGMetadata>_u_0)__return_storage_ptr__;
      bVar9 = PCGMetadataElementCommon::
              ApplyOnAccessorRange<FString,_PCGMetadataElementCommon::ApplyOnAccessor<FString,_FPCGSubdivisionBaseElement::GetTokenizedGrammarForPoints_::__l5::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((IPCGAttributeAccessorKeys *)local_138._8_8_,
                         (IPCGAttributeAccessor *)local_138._0_8_,(<lambda_1> *)&local_f8.ObjectPtr,
                         StrictType,0x100,-1);
      uVar8 = local_138._0_8_;
      if (bVar9) {
        if ((IPCGAttributeAccessorKeys *)local_138._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)*(longlong *)local_138._8_8_)(local_138._8_8_,1);
        }
        if ((IPCGAttributeAccessor *)local_138._0_8_ != (IPCGAttributeAccessor *)0x0) {
          (**(code **)*(longlong *)local_138._0_8_)(local_138._0_8_,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_b8.ExtraNames.AllocatorInstance.Data,
                   local_b8.ExtraNames.ArrayNum);
        if (local_b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.ExtraNames.AllocatorInstance.Data);
        }
        goto LAB_1499fe055;
      }
      pFVar12 = FPCGAttributePropertySelector::ToString(&local_b8,&local_68,false);
      FText::FromString(&local_78,pFVar12);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      PCGLog::Metadata::LogFailToGetAttributeError<FString>
                (&local_78,(IPCGAttributeAccessor *)uVar8,param_1);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
    }
    if ((IPCGAttributeAccessorKeys *)local_138._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)*(longlong *)local_138._8_8_)(local_138._8_8_,1);
    }
    if ((IPCGAttributeAccessor *)local_138._0_8_ != (IPCGAttributeAccessor *)0x0) {
      (**(code **)*(longlong *)local_138._0_8_)(local_138._0_8_,1);
    }
    DestructItems<FString,int>
              ((FString *)local_b8.ExtraNames.AllocatorInstance.Data,local_b8.ExtraNames.ArrayNum);
    if (local_b8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.ExtraNames.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// MatchAndSetAttributes @ 149a01970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGSubdivisionBaseElement::MatchAndSetAttributes
          (FPCGSubdivisionBaseElement *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_2,UPCGParamData *param_3,
          UPCGSubdivisionBaseSettings *param_4,FPCGMetadataDomainID *param_5)

{
  longlong *plVar1;
  FPCGMetadataAttributeBase *this_00;
  code *pcVar2;
  double dVar3;
  double dVar4;
  FPCGMetadataDomainID FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FPCGMetadataAttribute<FName> *pFVar12;
  long64 lVar13;
  FPCGMetadataAttribute<FString> *this_01;
  FPCGTaggedData *pFVar14;
  longlong lVar15;
  UPCGMetadata *this_02;
  FPCGMetadataDomain *this_03;
  UClass *pUVar16;
  FName *pFVar17;
  ulonglong uVar18;
  ulong64 uVar19;
  int iVar20;
  long64 *plVar21;
  ulonglong uVar22;
  FName FVar23;
  FName FVar24;
  ForAnyElementType FVar25;
  ForElementType<FSetElementId> FVar26;
  longlong lVar27;
  bool bVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStackY_6d8 [32];
  undefined1 local_688;
  undefined1 local_687 [7];
  ForAnyElementType local_680;
  undefined8 local_678;
  ForAnyElementType local_670;
  int local_668;
  int local_664;
  TArray<FName,TSizedDefaultAllocator<32>_> local_660;
  FPCGMetadataDomainID *local_650;
  UPCGSubdivisionBaseSettings *local_648;
  FName local_640;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_638;
  FName local_630;
  longlong local_628;
  longlong local_620;
  FName local_618;
  undefined8 uStack_610;
  FName local_608;
  FPCGMetadataAttributeBase *local_5f8;
  FPCGMetadataAttributeBase *local_5f0;
  FPCGMetadataAttribute<FName> *local_5e8;
  uint local_5e0;
  FName local_5d8;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_5d0;
  longlong *local_5c0;
  FName local_5b8;
  FPCGMetadataDomainID FStack_5b0;
  FName local_598;
  FName local_590;
  FName local_588;
  FName local_580;
  FName local_578;
  undefined8 local_570;
  longlong local_568;
  int local_560;
  int local_55c;
  int local_558;
  long64 local_550;
  undefined1 local_548 [8];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_540;
  FString local_538;
  FString local_528;
  FSoftObjectPath local_518;
  FSoftClassPath local_4f8;
  FName *local_4d8;
  longlong *local_4d0;
  FName *local_4c8;
  longlong *local_4c0;
  TVector2<double>_u_0 local_4b8;
  FPCGAttributeIdentifier local_4a8;
  FPCGAttributeIdentifier local_488;
  FName local_468;
  FPCGMetadataDomainID FStack_460;
  FPCGAttributeIdentifier local_448;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  TVector<double>_u_0 local_408;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  TRotator<double> local_3c8;
  FName local_3a8 [2];
  TVector4<double>_u_0 local_398;
  TQuat<double> local_378;
  TTransform<double> local_358;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  FPCGTaggedData local_248;
  FPCGTaggedData local_1d0;
  FPCGTaggedData local_158;
  TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
  local_d8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  local_648 = param_4;
  local_650 = param_5;
  local_638 = param_2;
  local_540 = param_1;
  if (((param_3 == (UPCGParamData *)0x0) || (param_3->_padding_ == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InModuleInfoParamData && InModuleInfoParamData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                         ,0x142,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  FVar23 = (FName)param_3->_padding_;
  bVar6 = false;
  FStack_5b0 = PCGMetadataDomainID::Default;
  FVar5 = FStack_5b0;
  local_5b8 = PCGSubdivisionBase::Constants::SymbolAttributeName;
  FStack_5b0._0_8_ = PCGMetadataDomainID::Default._0_8_;
  local_4a8.Name = PCGSubdivisionBase::Constants::SymbolAttributeName;
  local_4a8.MetadataDomain.Flag = FStack_5b0.Flag;
  local_4a8.MetadataDomain._1_3_ = FStack_5b0._1_3_;
  local_4a8.MetadataDomain.CustomFlag = FStack_5b0.CustomFlag;
  local_4a8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  FStack_5b0 = FVar5;
  local_578 = FVar23;
  pFVar12 = (FPCGMetadataAttribute<FName> *)
            UPCGMetadata::GetConstAttribute((UPCGMetadata *)FVar23,&local_4a8);
  if ((pFVar12 == (FPCGMetadataAttribute<FName> *)0x0) || ((short)pFVar12->_padding_ != 0xc)) {
    local_5b8 = PCGSubdivisionBase::Constants::SymbolAttributeName;
    FStack_5b0 = PCGMetadataDomainID::Default;
    FVar5 = FStack_5b0;
    FStack_5b0._0_8_ = PCGMetadataDomainID::Default._0_8_;
    local_488.Name = PCGSubdivisionBase::Constants::SymbolAttributeName;
    local_488.MetadataDomain.Flag = FStack_5b0.Flag;
    local_488.MetadataDomain._1_3_ = FStack_5b0._1_3_;
    local_488.MetadataDomain.CustomFlag = FStack_5b0.CustomFlag;
    local_488.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
    FStack_5b0 = FVar5;
    this_01 = (FPCGMetadataAttribute<FString> *)
              UPCGMetadata::GetConstAttribute((UPCGMetadata *)FVar23,&local_488);
    if ((this_01 == (FPCGMetadataAttribute<FString> *)0x0) || ((short)this_01->_padding_ != 9))
    goto LAB_149a02bfa;
    local_620 = UPCGMetadata::GetItemKeyCountForParent((UPCGMetadata *)FVar23);
    lVar13 = UPCGMetadata::GetItemCountForChild((UPCGMetadata *)FVar23);
    if (local_620 < lVar13) {
      do {
        iVar9 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this_01,local_620);
        FPCGMetadataAttribute<FString>::GetValue(this_01,&local_538,iVar9);
        if (local_538.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = local_538.Data.ArrayNum + -1;
        }
        pFVar17 = ::FName::FName(local_3a8,iVar9,(wchar_t *)local_538.Data.AllocatorInstance.Data,
                                 FNAME_Add);
        local_590 = *pFVar17;
        if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_538.Data.AllocatorInstance.Data);
        }
        FVar24 = local_590;
        local_630 = local_590;
        uVar8 = ::GetTypeHash(local_590.ComparisonIndex.Value);
        if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
          FVar26 = (ForElementType<FSetElementId>)&local_d8.Hash;
          if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar26 = local_d8.Hash.SecondaryData;
          }
          for (iVar9 = *(int *)((longlong)FVar26 +
                               (ulonglong)(local_d8.HashSize - 1U & uVar8 + local_630.Number) * 4);
              iVar9 != -1; iVar9 = *(int *)(local_d8.Elements._0_8_ + 0x10 + (longlong)iVar9 * 0x18)
              ) {
            if (*(FName *)(local_d8.Elements._0_8_ + (longlong)iVar9 * 0x18) == FVar24)
            goto LAB_149a01d28;
          }
        }
        local_4c8 = &local_590;
        local_4c0 = &local_620;
        TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,__int64_&>_>
                  (&local_d8,(TPairInitializer<FName_const_&,__int64_&> *)(local_548 + 4),
                   (bool *)&local_4c8);
LAB_149a01d28:
        local_620 = local_620 + 1;
        lVar13 = UPCGMetadata::GetItemCountForChild((UPCGMetadata *)FVar23);
      } while (local_620 < lVar13);
    }
  }
  else {
    local_628 = UPCGMetadata::GetItemKeyCountForParent((UPCGMetadata *)FVar23);
    lVar13 = UPCGMetadata::GetItemCountForChild((UPCGMetadata *)FVar23);
    if (local_628 < lVar13) {
      do {
        FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)pFVar12,local_628);
        FPCGMetadataAttribute<FName>::GetValue(pFVar12,(int)&local_598);
        FVar24 = local_598;
        local_630 = local_598;
        uVar8 = ::GetTypeHash(local_598.ComparisonIndex.Value);
        if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
          FVar26 = (ForElementType<FSetElementId>)&local_d8.Hash;
          if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar26 = local_d8.Hash.SecondaryData;
          }
          for (iVar9 = *(int *)((longlong)FVar26 +
                               (ulonglong)(local_d8.HashSize - 1U & uVar8 + local_630.Number) * 4);
              iVar9 != -1; iVar9 = *(int *)(local_d8.Elements._0_8_ + 0x10 + (longlong)iVar9 * 0x18)
              ) {
            if (*(FName *)(local_d8.Elements._0_8_ + (longlong)iVar9 * 0x18) == FVar24)
            goto LAB_149a01b98;
          }
        }
        local_4d8 = &local_598;
        local_4d0 = &local_628;
        TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,__int64_&>_>
                  (&local_d8,(TPairInitializer<FName_const_&,__int64_&> *)local_548,
                   (bool *)&local_4d8);
LAB_149a01b98:
        local_628 = local_628 + 1;
        lVar13 = UPCGMetadata::GetItemCountForChild((UPCGMetadata *)FVar23);
      } while (local_628 < lVar13);
    }
  }
  local_660.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_660.ArrayNum = 0;
  local_660.ArrayMax = 0;
  local_5d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d0.ArrayNum = 0;
  local_5d0.ArrayMax = 0;
  UPCGMetadata::GetAttributes((UPCGMetadata *)param_3->_padding_,&local_660,&local_5d0);
  if ((local_660.ArrayNum != local_5d0.ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeNames.Num() == AttributeTypes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                         ,0x169,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  dVar4 = _UNK_15061cbc8;
  dVar3 = ___xmm_3ff00000000000000000000000000000;
  local_5e0 = param_2->ArrayNum;
  uVar18 = (ulonglong)(int)local_5e0;
  FVar23 = (FName)(param_2->AllocatorInstance).Data;
  FVar24 = (FName)(uVar18 * 0x78 + (longlong)FVar23);
  local_640 = FVar24;
  while( true ) {
    local_630 = FVar23;
    if (param_2->ArrayNum != (int)uVar18) {
      local_688 = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_688);
    }
    if (FVar23 == FVar24) break;
    FPCGTaggedData::FPCGTaggedData(&local_1d0,(FPCGTaggedData *)FVar23);
    FPCGTaggedData::FPCGTaggedData(&local_248,&local_1d0);
    FPCGTaggedData::FPCGTaggedData(&local_158,&local_248);
    pFVar14 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
              FindByPredicate<_FPCGSubdivisionBaseElement::MatchAndSetAttributes_::__l40::<lambda_1>_>
                        (local_540,(<lambda_1> *)&local_158);
    local_248.Tags.HashSize = 0;
    if (local_248.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_248.Tags.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_248.Tags.Elements);
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_248.Data);
    local_1d0.Tags.HashSize = 0;
    if (local_1d0.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d0.Tags.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1d0.Tags.Elements);
    FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_1d0.Data);
    if (pFVar14 == (FPCGTaggedData *)0x0) {
      plVar1 = *(longlong **)local_630;
      local_5c0 = plVar1;
      if (((plVar1 == (longlong *)0x0) ||
          (lVar15 = (**(code **)(*plVar1 + 0x328))(plVar1), lVar15 == 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutData && OutData->MutableMetadata()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                             ,0x174,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      this_02 = (UPCGMetadata *)(**(code **)(*plVar1 + 0x328))(plVar1);
      if ((this_02 == (UPCGMetadata *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutputMetadata",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSubdivisionBase.cpp"
                             ,0x177,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return (bool)uVar7;
      }
      this_03 = UPCGMetadata::GetMetadataDomain(this_02,param_5);
      if (this_03 != (FPCGMetadataDomain *)0x0) {
        bVar6 = this_03->bSupportMultiEntries;
        pFVar12 = (FPCGMetadataAttribute<FName> *)
                  FPCGMetadataDomain::GetConstAttribute(this_03,param_4->SymbolAttributeName);
        param_5 = local_650;
        param_4 = local_648;
        local_5e8 = pFVar12;
        if ((pFVar12 != (FPCGMetadataAttribute<FName> *)0x0) && ((short)pFVar12->_padding_ == 0xc))
        {
          pUVar16 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
          iVar9 = (int)pUVar16->_padding_;
          if ((*(int *)(local_5c0[2] + 0x38) < iVar9) ||
             (((longlong *)
               *(undefined1 **)(*(longlong *)(local_5c0[2] + 0x30) + (longlong)iVar9 * 8) !=
               &pUVar16->_padding_ || (local_5c0 == (longlong *)0x0)))) {
            pFVar17 = (FName *)TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                               ::FindChecked((TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                                              *)&local_d8,pFVar12->DefaultValue);
            uVar22 = 0;
            FVar23 = *pFVar17;
            uVar18 = uVar22;
            FVar24 = local_640;
            param_5 = local_650;
            param_4 = local_648;
            param_2 = local_638;
            if (0 < local_660.ArrayNum) {
              do {
                uVar10 = (uint)uVar22;
                uVar8 = 0;
                if ((int)uVar10 < local_660.ArrayNum) {
                  uVar8 = ~uVar10 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar2 = (code *)swi(3);
                  uVar7 = (*pcVar2)();
                  return (bool)uVar7;
                }
                if (*(FName *)(local_660.AllocatorInstance.Data + uVar18 * 8) !=
                    PCGSubdivisionBase::Constants::SymbolAttributeName) {
                  uVar8 = 0;
                  if ((int)uVar10 < local_660.ArrayNum) {
                    uVar8 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar2 = (code *)swi(3);
                    uVar7 = (*pcVar2)();
                    return (bool)uVar7;
                  }
                  bVar6 = FPCGMetadataDomain::HasAttribute
                                    (this_03,*(FName *)(local_660.AllocatorInstance.Data +
                                                       uVar18 * 8));
                  if (!bVar6) {
                    uVar8 = 0;
                    if ((int)uVar10 < local_660.ArrayNum) {
                      uVar8 = ~uVar10 >> 0x1f;
                    }
                    if ((uVar8 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar2 = (code *)swi(3);
                      uVar7 = (*pcVar2)();
                      return (bool)uVar7;
                    }
                    FVar25.Data = local_660.AllocatorInstance.Data;
                    local_5b8 = local_578;
                    uVar8 = 0;
                    if ((int)uVar10 < local_5d0.ArrayNum) {
                      uVar8 = ~uVar10 >> 0x1f;
                    }
                    FStack_5b0.DebugName = FVar23;
                    FStack_5b0._0_8_ = this_03;
                    if ((uVar8 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar2 = (code *)swi(3);
                      uVar7 = (*pcVar2)();
                      return (bool)uVar7;
                    }
                    FVar5 = FStack_5b0;
                    local_618 = local_5b8;
                    uStack_610._0_1_ = FStack_5b0.Flag;
                    uStack_610._1_3_ = FStack_5b0._1_3_;
                    uStack_610._4_4_ = FStack_5b0.CustomFlag;
                    local_608 = FStack_5b0.DebugName;
                    FStack_5b0 = FVar5;
                    switch(local_5d0.AllocatorInstance.Data[uVar18]) {
                    case (FScriptContainerElement)0x0:
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<float>(&local_618,0.0,*(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0x1:
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<double>(&local_618,0.0,*(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0x2:
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<int>(&local_618,0,*(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0x3:
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<__int64>(&local_618,0,*(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0x4:
                      local_2f8 = 0;
                      uStack_2f0 = 0;
                      local_4b8._s_0.X = 0.0;
                      local_4b8._s_0.Y = 0.0;
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<UE::Math::TVector2<double>_>
                                (&local_618,(TVector2<double> *)&local_4b8._s_0,
                                 *(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0x5:
                      local_408._s_0.X = 0.0;
                      local_408._s_0.Y = 0.0;
                      local_428 = 0;
                      uStack_420 = 0;
                      local_418 = 0;
                      local_408._s_0.Z = 0.0;
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<UE::Math::TVector<double>_>
                                (&local_618,(TVector<double> *)&local_408._s_0,
                                 *(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0x6:
                      local_2d8 = dVar3;
                      dStack_2d0 = dVar4;
                      local_2e8 = 0;
                      uStack_2e0 = 0;
                      local_398._s_0.X = 0.0;
                      local_398._s_0.Y = 0.0;
                      local_398._s_0.Z = dVar3;
                      local_398._s_0.W = dVar4;
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<UE::Math::TVector4<double>_>
                                (&local_618,(TVector4<double> *)&local_398._s_0,
                                 *(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0x7:
                      local_2c8 = 0;
                      uStack_2c0 = 0;
                      local_2b8 = 0;
                      uStack_2b0 = 0;
                      local_378.X = 0.0;
                      local_378.Y = 0.0;
                      local_378.Z = 0.0;
                      local_378.W = 0.0;
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<UE::Math::TQuat<double>_>
                                (&local_618,&local_378,*(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0x8:
                      uVar31 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                      uVar32 = (undefined4)
                               ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
                      local_358.Rotation.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[2];
                      local_358.Rotation.ZW.m128d_f64[1] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[3];
                      local_358.Translation.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                      local_358.Translation.XY.m128d_f64[1] =
                           (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                      local_358.Translation.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                      local_358.Translation.ZW.m128d_f64[1] =
                           (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                      local_358.Scale3D.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[0];
                      local_358.Scale3D.XY.m128d_f64[1] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[1];
                      uVar29 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                      uVar30 = (undefined4)
                               ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >>
                               0x20);
                      local_2a8._8_4_ = uVar31;
                      local_2a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
                      local_2a8._12_4_ = uVar32;
                      local_258._8_4_ = uVar29;
                      local_258._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
                      local_258._12_4_ = uVar30;
                      local_358.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar29;
                      local_358.Scale3D.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[2];
                      local_358.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar30;
                      local_358.Rotation.XY.m128d_f64[1]._0_4_ = uVar31;
                      local_358.Rotation.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[0];
                      local_358.Rotation.XY.m128d_f64[1]._4_4_ = uVar32;
                      local_298 = local_358.Rotation.ZW.m128d_f64[0];
                      dStack_290 = local_358.Rotation.ZW.m128d_f64[1];
                      local_288 = local_358.Translation.XY.m128d_f64[0];
                      dStack_280 = local_358.Translation.XY.m128d_f64[1];
                      local_278 = local_358.Translation.ZW.m128d_f64[0];
                      dStack_270 = local_358.Translation.ZW.m128d_f64[1];
                      local_268 = local_358.Scale3D.XY.m128d_f64[0];
                      dStack_260 = local_358.Scale3D.XY.m128d_f64[1];
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<UE::Math::TTransform<double>_>
                                (&local_618,&local_358,*(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0x9:
                      local_528.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_528.Data.ArrayNum = 0;
                      local_528.Data.ArrayMax = 0;
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<FString>(&local_618,&local_528,*(FName *)(FVar25.Data + uVar18 * 8)
                                         );
                      break;
                    case (FScriptContainerElement)0xa:
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<bool>(&local_618,false,*(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0xb:
                      local_3c8.Pitch = 0.0;
                      local_3c8.Yaw = 0.0;
                      local_3e8 = 0;
                      uStack_3e0 = 0;
                      local_3d8 = 0;
                      local_3c8.Roll = 0.0;
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<UE::Math::TRotator<double>_>
                                (&local_618,&local_3c8,*(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0xc:
                      local_570 = 0;
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<FName>(&local_618,(FName)0x0,*(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0xd:
                      local_518.AssetPath.PackageName.ComparisonIndex.Value = 0;
                      local_518.AssetPath.PackageName.Number = 0;
                      local_518.AssetPath.AssetName.ComparisonIndex.Value = 0;
                      local_518.AssetPath.AssetName.Number = 0;
                      local_518.SubPathString.Data.AllocatorInstance.Data =
                           (FScriptContainerElement *)0x0;
                      local_518.SubPathString.Data.ArrayNum = 0;
                      local_518.SubPathString.Data.ArrayMax = 0;
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<FSoftObjectPath>
                                (&local_618,&local_518,*(FName *)(FVar25.Data + uVar18 * 8));
                      break;
                    case (FScriptContainerElement)0xe:
                      local_4f8._0_8_ = 0;
                      local_4f8._8_8_ = 0;
                      local_4f8._16_8_ = 0;
                      local_4f8._24_8_ = 0;
                      `FPCGSubdivisionBaseElement::MatchAndSetAttributes'::__l103::<lambda_2>::
                      operator()<FSoftClassPath>
                                (&local_618,&local_4f8,*(FName *)(FVar25.Data + uVar18 * 8));
                    }
                  }
                }
                uVar22 = (ulonglong)(uVar10 + 1);
                uVar18 = uVar18 + 1;
                FVar24 = local_640;
                param_5 = local_650;
                param_4 = local_648;
                param_2 = local_638;
              } while ((int)(uVar10 + 1) < local_660.ArrayNum);
            }
          }
          else {
            uVar19 = local_660._8_8_ & 0xffffffff;
            local_680.Data = (FScriptContainerElement *)0x0;
            local_678 = 0;
            local_670.Data = (FScriptContainerElement *)0x0;
            local_668 = 0;
            local_664 = 0;
            if (local_660.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(uVar19);
            }
            bVar28 = false;
            if (0 < local_660.ArrayNum) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_660.ArrayNum,&local_680,0,(int *)((longlong)&local_678 + 4));
              uVar19 = local_660._8_8_ & 0xffffffff;
              bVar28 = local_660.ArrayNum < 0;
            }
            if (bVar28) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(uVar19);
            }
            if (local_664 < (int)uVar19) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,(int)uVar19,&local_670,local_668,&local_664);
              uVar19 = local_660._8_8_ & 0xffffffff;
            }
            FVar23 = local_578;
            iVar9 = (int)uVar19;
            pFVar17 = (FName *)(local_660.AllocatorInstance.Data + (longlong)iVar9 * 8);
            FVar25.Data = local_660.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar19 != iVar9) {
                local_687[0] = 0;
                `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_687);
                uVar19 = local_660._8_8_ & 0xffffffff;
              }
              plVar1 = local_5c0;
              pFVar12 = local_5e8;
              if ((FName *)FVar25.Data == pFVar17) break;
              FVar24 = *(FName *)FVar25.Data;
              if (FVar24 != PCGSubdivisionBase::Constants::SymbolAttributeName) {
                bVar28 = FPCGMetadataDomain::HasAttribute(this_03,FVar24);
                if (bVar28) {
                  FPCGMetadataDomain::DeleteAttribute(this_03,FVar24);
                }
                FStack_460 = PCGMetadataDomainID::Default;
                FVar5 = FStack_460;
                FStack_460._0_8_ = PCGMetadataDomainID::Default._0_8_;
                local_448.MetadataDomain.Flag = FStack_460.Flag;
                local_448.MetadataDomain._1_3_ = FStack_460._1_3_;
                local_448.MetadataDomain.CustomFlag = FStack_460.CustomFlag;
                local_448.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
                local_468 = FVar24;
                FStack_460 = FVar5;
                local_448.Name = FVar24;
                local_5f8 = UPCGMetadata::GetConstAttribute((UPCGMetadata *)FVar23,&local_448);
                if (((local_680.Data <= (FScriptContainerElement *)&local_5f8) &&
                    ((FScriptContainerElement *)&local_5f8 <
                     local_680.Data + (longlong)(int)local_678._4_4_ * 8)) &&
                   (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar28)) {
                  pcVar2 = (code *)swi(3);
                  uVar7 = (*pcVar2)();
                  return (bool)uVar7;
                }
                uVar8 = (uint)local_678;
                if ((uint)local_678 == local_678._4_4_) {
                  uVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_680,(int *)((longlong)&local_678 + 4));
                }
                iVar20 = uVar8 + 1;
                local_678 = CONCAT44(local_678._4_4_,iVar20);
                *(FPCGMetadataAttributeBase **)(local_680.Data + (longlong)(int)uVar8 * 8) =
                     local_5f8;
                uVar10 = 0;
                if ((int)uVar8 < iVar20) {
                  uVar10 = ~uVar8 >> 0x1f;
                }
                if (uVar10 == 0) {
                  bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar28) {
                    pcVar2 = (code *)swi(3);
                    uVar7 = (*pcVar2)();
                    return (bool)uVar7;
                  }
                  iVar20 = (uint)local_678;
                }
                local_5f0 = FPCGMetadataDomain::CopyAttribute
                                      (this_03,*(FPCGMetadataAttributeBase **)
                                                (local_680.Data + (longlong)(iVar20 + -1) * 8),
                                       FVar24,false,false,bVar6);
                if (((local_670.Data <= (FScriptContainerElement *)&local_5f0) &&
                    ((FScriptContainerElement *)&local_5f0 <
                     local_670.Data + (longlong)local_664 * 8)) &&
                   (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar28)) {
                  pcVar2 = (code *)swi(3);
                  uVar7 = (*pcVar2)();
                  return (bool)uVar7;
                }
                if (local_668 == local_664) {
                  local_668 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x808,&local_670,&local_664);
                }
                *(FPCGMetadataAttributeBase **)(local_670.Data + (longlong)local_668 * 8) =
                     local_5f0;
                uVar19 = local_660._8_8_ & 0xffffffff;
                local_668 = local_668 + 1;
              }
              FVar25.Data = FVar25.Data + 8;
            }
            if (bVar6 == false) {
              FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)local_5e8,0);
              FPCGMetadataAttribute<FName>::GetValue(pFVar12,(int)&local_580);
              FVar23 = local_580;
              local_5d8 = local_580;
              uVar8 = ::GetTypeHash(local_580.ComparisonIndex.Value);
              if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
                FVar26 = (ForElementType<FSetElementId>)&local_d8.Hash;
                if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar26 = local_d8.Hash.SecondaryData;
                }
                for (iVar9 = *(int *)((longlong)FVar26 +
                                     (ulonglong)(local_d8.HashSize - 1U & uVar8 + local_5d8.Number)
                                     * 4); iVar9 != -1;
                    iVar9 = *(int *)(local_d8.Elements._0_8_ + 0x10 + (longlong)iVar9 * 0x18)) {
                  if (*(FName *)(local_d8.Elements._0_8_ + (longlong)iVar9 * 0x18) == FVar23) {
                    plVar21 = TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                              ::FindChecked((TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                                             *)&local_d8,local_580);
                    if (*plVar21 != -1) {
                      lVar13 = FPCGMetadataDomain::GetItemCountForChild(this_03);
                      if (lVar13 == 0) {
                        FPCGMetadataDomain::AddEntry(this_03,-1);
                      }
                      uVar22 = 0;
                      uVar18 = uVar22;
                      if (0 < (int)(uint)local_678) {
                        do {
                          uVar10 = (uint)uVar22;
                          uVar8 = 0;
                          if ((int)uVar10 < local_668) {
                            uVar8 = ~uVar10 >> 0x1f;
                          }
                          iVar9 = (uint)local_678;
                          if (uVar8 == 0) {
                            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              );
                            if (bVar6) {
                              pcVar2 = (code *)swi(3);
                              uVar7 = (*pcVar2)();
                              return (bool)uVar7;
                            }
                            iVar9 = (uint)local_678;
                          }
                          plVar1 = *(longlong **)(local_670.Data + uVar18);
                          pcVar2 = *(code **)(*plVar1 + 0x58);
                          uVar8 = 0;
                          if ((int)uVar10 < iVar9) {
                            uVar8 = ~uVar10 >> 0x1f;
                          }
                          if ((uVar8 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar2 = (code *)swi(3);
                            uVar7 = (*pcVar2)();
                            return (bool)uVar7;
                          }
                          (*pcVar2)(plVar1,0,*(undefined8 *)(local_680.Data + uVar18));
                          uVar22 = (ulonglong)(uVar10 + 1);
                          uVar18 = uVar18 + 8;
                        } while ((int)(uVar10 + 1) < (int)(uint)local_678);
                      }
                    }
                    break;
                  }
                }
              }
            }
            else {
              (**(code **)(*local_5c0 + 0x4f8))(local_5c0,&local_568,1);
              uVar8 = 0;
              iVar9 = (**(code **)(*plVar1 + 0x488))(plVar1);
              if (0 < iVar9) {
                do {
                  uVar10 = 0;
                  if ((int)uVar8 < local_558) {
                    uVar10 = ~uVar8 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < NumElements)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                         ,0x8b,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar6)) {
                    pcVar2 = (code *)swi(3);
                    uVar7 = (*pcVar2)();
                    return (bool)uVar7;
                  }
                  if (uVar8 == (int)uVar8 % local_55c) {
                    plVar21 = (long64 *)
                              ((longlong)local_560 * (longlong)((int)uVar8 % local_55c) + local_568)
                    ;
                  }
                  else {
                    plVar21 = &local_550;
                  }
                  FPCGMetadataAttributeBase::GetValueKey
                            ((FPCGMetadataAttributeBase *)pFVar12,*plVar21);
                  FPCGMetadataAttribute<FName>::GetValue(pFVar12,(int)&local_588);
                  FVar23 = local_588;
                  local_5d8 = local_588;
                  uVar10 = ::GetTypeHash(local_588.ComparisonIndex.Value);
                  if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
                    FVar26 = (ForElementType<FSetElementId>)&local_d8.Hash;
                    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar26 = local_d8.Hash.SecondaryData;
                    }
                    for (iVar9 = *(int *)((longlong)FVar26 +
                                         (ulonglong)
                                         (local_d8.HashSize - 1U & uVar10 + local_5d8.Number) * 4);
                        iVar9 != -1;
                        iVar9 = *(int *)(local_d8.Elements._0_8_ + 0x10 + (longlong)iVar9 * 0x18)) {
                      if (*(FName *)(local_d8.Elements._0_8_ + (longlong)iVar9 * 0x18) == FVar23) {
                        plVar21 = TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                                  ::FindChecked((TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                                                 *)&local_d8,local_588);
                        lVar15 = *plVar21;
                        pFVar12 = local_5e8;
                        if (lVar15 != -1) {
                          uVar10 = 0;
                          if (0 < (int)(uint)local_678) {
                            lVar27 = 0;
                            do {
                              uVar11 = 0;
                              if ((int)uVar10 < (int)(uint)local_678) {
                                uVar11 = ~uVar10 >> 0x1f;
                              }
                              if ((uVar11 == 0) &&
                                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                pcVar2 = (code *)swi(3);
                                uVar7 = (*pcVar2)();
                                return (bool)uVar7;
                              }
                              iVar9 = FPCGMetadataAttributeBase::GetValueKey
                                                (*(FPCGMetadataAttributeBase **)
                                                  (local_680.Data + lVar27),lVar15);
                              uVar11 = 0;
                              if ((int)uVar10 < local_668) {
                                uVar11 = ~uVar10 >> 0x1f;
                              }
                              if ((uVar11 == 0) &&
                                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                                pcVar2 = (code *)swi(3);
                                uVar7 = (*pcVar2)();
                                return (bool)uVar7;
                              }
                              this_00 = *(FPCGMetadataAttributeBase **)(local_670.Data + lVar27);
                              uVar11 = 0;
                              if ((int)uVar8 < local_558) {
                                uVar11 = ~uVar8 >> 0x1f;
                              }
                              if ((uVar11 == 0) &&
                                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("(Index >= 0) & (Index < NumElements)",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                                  ,0x8b,
                                                  L"Array index out of bounds: %lld from an array of size %lld"
                                                  ), bVar6)) {
                                pcVar2 = (code *)swi(3);
                                uVar7 = (*pcVar2)();
                                return (bool)uVar7;
                              }
                              if (uVar8 == (int)uVar8 % local_55c) {
                                plVar21 = (long64 *)
                                          ((longlong)local_560 * (longlong)((int)uVar8 % local_55c)
                                          + local_568);
                              }
                              else {
                                plVar21 = &local_550;
                              }
                              FPCGMetadataAttributeBase::SetValueFromValueKey
                                        (this_00,*plVar21,iVar9,false);
                              uVar10 = uVar10 + 1;
                              lVar27 = lVar27 + 8;
                              pFVar12 = local_5e8;
                            } while ((int)uVar10 < (int)(uint)local_678);
                          }
                        }
                        break;
                      }
                    }
                  }
                  uVar8 = uVar8 + 1;
                  iVar9 = (**(code **)(*local_5c0 + 0x488))();
                } while ((int)uVar8 < iVar9);
              }
            }
            if (local_670.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_670.Data);
            }
            FVar24 = local_640;
            param_5 = local_650;
            param_4 = local_648;
            param_2 = local_638;
            if (local_680.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_680.Data);
              FVar24 = local_640;
              param_5 = local_650;
              param_4 = local_648;
              param_2 = local_638;
            }
          }
        }
      }
    }
    uVar18 = (ulonglong)local_5e0;
    FVar23 = (FName)((longlong)local_630 + 0x78);
  }
  bVar6 = true;
  if (local_5d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.AllocatorInstance.Data);
  }
  if ((FName *)local_660.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_660.AllocatorInstance.Data);
  }
LAB_149a02bfa:
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  return bVar6;
}

// ShouldComputeFullOutputDataCrc @ 149a0fd70

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
FPCGSubdivisionBaseElement::ShouldComputeFullOutputDataCrc
          (FPCGSubdivisionBaseElement *this,FPCGContext *param_1)

{
  return true;
}

