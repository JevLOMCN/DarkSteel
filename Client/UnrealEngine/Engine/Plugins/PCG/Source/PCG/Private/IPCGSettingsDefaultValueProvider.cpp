// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 19

// operator()<int> @ 1499054c0

bool __thiscall
`IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>::
operator()<int>(void *this,int param_1)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<int> *pFVar1;
  int local_res8 [8];
  FPCGMetadataDomainID FStack_20;
  
  pFVar1 = (FPCGMetadataAttribute<int> *)0x0;
  local_res8[0] = 0;
  FStack_20 = PCGMetadataDomainID::Default;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain(*(UPCGMetadata **)this,&FStack_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<int>(this_00,(FName)0x0,local_res8,true,false);
  }
  return pFVar1 != (FPCGMetadataAttribute<int> *)0x0;
}

// operator()<float> @ 149907290

bool __thiscall
`IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>::
operator()<float>(void *this,float param_1)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<float> *pFVar1;
  float local_res8 [8];
  FPCGMetadataDomainID FStack_20;
  
  pFVar1 = (FPCGMetadataAttribute<float> *)0x0;
  local_res8[0] = 0.0;
  FStack_20 = PCGMetadataDomainID::Default;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain(*(UPCGMetadata **)this,&FStack_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<float>(this_00,(FName)0x0,local_res8,true,false);
  }
  return pFVar1 != (FPCGMetadataAttribute<float> *)0x0;
}

// operator()<double> @ 149909000

bool __thiscall
`IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>::
operator()<double>(void *this,double param_1)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<double> *pFVar1;
  double local_res8 [4];
  FPCGMetadataDomainID FStack_20;
  
  pFVar1 = (FPCGMetadataAttribute<double> *)0x0;
  local_res8[0] = 0.0;
  FStack_20 = PCGMetadataDomainID::Default;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain(*(UPCGMetadata **)this,&FStack_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<double>(this_00,(FName)0x0,local_res8,true,false);
  }
  return pFVar1 != (FPCGMetadataAttribute<double> *)0x0;
}

// operator()<UE::Math::TTransform<double>_> @ 14990dde0

bool __thiscall
`IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar1;
  FPCGMetadataDomainID FStack_80;
  TTransform<double> local_68;
  
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
  local_68.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_68.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_68.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_68.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_68.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_68.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  FStack_80 = PCGMetadataDomainID::Default;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain(*(UPCGMetadata **)this,&FStack_80);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<UE::Math::TTransform<double>_>
                       (this_00,(FName)0x0,&local_68,true,false);
  }
  return pFVar1 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
}

// operator()<FSoftClassPath> @ 149914af0

bool __thiscall
`IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>::
operator()<FSoftClassPath>(void *this,FSoftClassPath *param_1)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FSoftClassPath> *pFVar1;
  FPCGMetadataAttribute<FSoftClassPath> *pFVar2;
  FPCGMetadataDomainID FStack_40;
  undefined1 local_28 [16];
  FPCGMetadataAttribute<FSoftClassPath> *local_18;
  undefined8 local_10;
  
  pFVar1 = (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_18 = (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
  local_10 = 0;
  FStack_40 = PCGMetadataDomainID::Default;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain(*(UPCGMetadata **)this,&FStack_40);
  pFVar2 = pFVar1;
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<FSoftClassPath>
                       (this_00,(FName)0x0,(FSoftClassPath *)local_28,true,false);
    pFVar2 = local_18;
  }
  if (pFVar2 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(void **)&param_1->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x10);
  }
  return pFVar1 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
}

// operator()<FSoftObjectPath> @ 1499165b0

bool __thiscall
`IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>::
operator()<FSoftObjectPath>(void *this,FSoftObjectPath *param_1)

{
  FScriptContainerElement *pFVar1;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar2;
  ForAnyElementType FVar3;
  FPCGMetadataDomainID FStack_40;
  FSoftObjectPath local_28;
  
  pFVar2 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FStack_40 = PCGMetadataDomainID::Default;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain(*(UPCGMetadata **)this,&FStack_40);
  FVar3.Data = (FScriptContainerElement *)pFVar2;
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar2 = FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>
                       (this_00,(FName)0x0,&local_28,true,false);
    FVar3.Data = local_28.SubPathString.Data.AllocatorInstance.Data;
  }
  if ((FPCGMetadataAttribute<FSoftObjectPath> *)FVar3.Data !=
      (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pFVar2 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
}

// operator()<FName> @ 149918690

bool __thiscall
`IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>::
operator()<FName>(void *this,FName param_1)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FName> *pFVar1;
  FName local_res8 [4];
  FPCGMetadataDomainID FStack_20;
  
  pFVar1 = (FPCGMetadataAttribute<FName> *)0x0;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  FStack_20 = PCGMetadataDomainID::Default;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain(*(UPCGMetadata **)this,&FStack_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<FName>(this_00,(FName)0x0,local_res8,true,false);
  }
  return pFVar1 != (FPCGMetadataAttribute<FName> *)0x0;
}

// operator()<FString> @ 14991a350

bool __thiscall
`IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>::
operator()<FString>(void *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FString> *pFVar2;
  ForAnyElementType FVar3;
  FString local_38;
  FName local_28;
  FPCGMetadataDomainID FStack_20;
  
  pFVar2 = (FPCGMetadataAttribute<FString> *)0x0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  FStack_20 = PCGMetadataDomainID::Default;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain(*(UPCGMetadata **)this,&FStack_20);
  FVar3.Data = (FScriptContainerElement *)pFVar2;
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar2 = FPCGMetadataDomain::CreateAttribute<FString>(this_00,local_28,&local_38,true,false);
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  if ((FPCGMetadataAttribute<FString> *)FVar3.Data != (FPCGMetadataAttribute<FString> *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pFVar2 != (FPCGMetadataAttribute<FString> *)0x0;
}

// operator()<__int64> @ 14991c0f0

bool __thiscall
`IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>::
operator()<__int64>(void *this,long64 param_1)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<__int64> *pFVar1;
  long64 local_res8 [4];
  FPCGMetadataDomainID FStack_20;
  
  pFVar1 = (FPCGMetadataAttribute<__int64> *)0x0;
  local_res8[0] = 0;
  FStack_20 = PCGMetadataDomainID::Default;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain(*(UPCGMetadata **)this,&FStack_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<__int64>(this_00,(FName)0x0,local_res8,true,false);
  }
  return pFVar1 != (FPCGMetadataAttribute<__int64> *)0x0;
}

// operator()<bool> @ 14991dfa0

bool __thiscall
`IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>::
operator()<bool>(void *this,bool param_1)

{
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<bool> *pFVar1;
  bool local_res8 [32];
  FPCGMetadataDomainID FStack_20;
  
  pFVar1 = (FPCGMetadataAttribute<bool> *)0x0;
  local_res8[0] = false;
  FStack_20 = PCGMetadataDomainID::Default;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain(*(UPCGMetadata **)this,&FStack_20);
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    pFVar1 = FPCGMetadataDomain::CreateAttribute<bool>(this_00,(FName)0x0,local_res8,true,false);
  }
  return pFVar1 != (FPCGMetadataAttribute<bool> *)0x0;
}

// ~IPCGSettingsDefaultValueProvider @ 1499c61c0

void __thiscall
IPCGSettingsDefaultValueProvider::~IPCGSettingsDefaultValueProvider
          (IPCGSettingsDefaultValueProvider *this)

{
  *this = (IPCGSettingsDefaultValueProvider)&___7IPCGSettingsDefaultValueProvider__6B_;
  return;
}

// CreateInitialDefaultValueAttribute @ 1499dc910

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute
          (IPCGSettingsDefaultValueProvider *this,FName param_1,UPCGMetadata *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar3;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar4;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar5;
  FPCGMetadataDomain *pFVar6;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar7;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar8;
  UPCGMetadata *local_res8;
  FSoftObjectPath local_a8;
  undefined1 local_88 [32];
  TTransform<double> local_68;
  
  uVar1 = (**(code **)((longlong)*this + 0x28))();
  if (param_2 == (UPCGMetadata *)0x0) {
    return false;
  }
  local_res8 = param_2;
  switch(uVar1) {
  case 0:
    bVar2 = `IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>
            ::operator()<float>(&local_res8,0.0);
    break;
  case 1:
    bVar2 = `IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>
            ::operator()<double>(&local_res8,0.0);
    break;
  case 2:
    bVar2 = `IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>
            ::operator()<int>(&local_res8,0);
    break;
  case 3:
    bVar2 = `IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>
            ::operator()<__int64>(&local_res8,0);
    break;
  case 4:
    pFVar8 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
    local_88._0_16_ = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    local_a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_a8.AssetPath.PackageName.Number = 0;
    local_a8._8_16_ = PCGMetadataDomainID::Default;
    pFVar6 = UPCGMetadata::FindOrCreateMetadataDomain
                       (param_2,(FPCGMetadataDomainID *)&local_a8.AssetPath.AssetName);
    if (pFVar6 != (FPCGMetadataDomain *)0x0) {
      pFVar8 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>
                         (pFVar6,local_a8.AssetPath.PackageName,(TVector2<double> *)local_88,true,
                          false);
    }
LAB_1499dc9f5:
    bVar2 = pFVar8 != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
    break;
  case 5:
    pFVar8 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
    local_88._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_88._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_88._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_a8.AssetPath.PackageName.Number = 0;
    local_a8._8_16_ = PCGMetadataDomainID::Default;
    pFVar6 = UPCGMetadata::FindOrCreateMetadataDomain
                       (param_2,(FPCGMetadataDomainID *)&local_a8.AssetPath.AssetName);
    if (pFVar6 == (FPCGMetadataDomain *)0x0) goto LAB_1499dc9f5;
    pFVar3 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
                       (pFVar6,local_a8.AssetPath.PackageName,(TVector<double> *)local_88,true,false
                       );
    bVar2 = pFVar3 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
    break;
  case 6:
    local_88._16_8_ = 0.0;
    local_88._24_8_ = 0.0;
    pFVar8 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
    local_88._0_16_ = ZEXT816(0);
    local_a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_a8.AssetPath.PackageName.Number = 0;
    local_a8._8_16_ = PCGMetadataDomainID::Default;
    pFVar6 = UPCGMetadata::FindOrCreateMetadataDomain
                       (param_2,(FPCGMetadataDomainID *)&local_a8.AssetPath.AssetName);
    if (pFVar6 == (FPCGMetadataDomain *)0x0) goto LAB_1499dc9f5;
    pFVar4 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector4<double>_>
                       (pFVar6,local_a8.AssetPath.PackageName,(TVector4<double> *)local_88,true,
                        false);
    bVar2 = pFVar4 != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
    break;
  case 7:
    pFVar8 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
    local_88._16_8_ = UE::Math::TQuat<double>::Identity.Z;
    local_88._24_8_ = UE::Math::TQuat<double>::Identity.W;
    local_88._8_8_ = UE::Math::TQuat<double>::Identity.Y;
    local_88._0_8_ = UE::Math::TQuat<double>::Identity.X;
    local_a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_a8.AssetPath.PackageName.Number = 0;
    local_a8._8_16_ = PCGMetadataDomainID::Default;
    pFVar6 = UPCGMetadata::FindOrCreateMetadataDomain
                       (param_2,(FPCGMetadataDomainID *)&local_a8.AssetPath.AssetName);
    if (pFVar6 == (FPCGMetadataDomain *)0x0) goto LAB_1499dc9f5;
    pFVar5 = FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>
                       (pFVar6,local_a8.AssetPath.PackageName,(TQuat<double> *)local_88,true,false);
    bVar2 = pFVar5 != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
    break;
  case 8:
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_68.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_68.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_68.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_68.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_68.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar2 = `IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>
            ::operator()<UE::Math::TTransform<double>_>(&local_res8,&local_68);
    break;
  case 9:
    local_88._0_16_ = ZEXT816(0);
    bVar2 = `IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>
            ::operator()<FString>(&local_res8,(FString *)local_88);
    break;
  case 10:
    bVar2 = `IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>
            ::operator()<bool>(&local_res8,false);
    break;
  case 0xb:
    pFVar8 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
    local_88._8_8_ = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_88._0_8_ = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_88._16_8_ = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_a8.AssetPath.PackageName.Number = 0;
    local_a8._8_16_ = PCGMetadataDomainID::Default;
    pFVar6 = UPCGMetadata::FindOrCreateMetadataDomain
                       (param_2,(FPCGMetadataDomainID *)&local_a8.AssetPath.AssetName);
    if (pFVar6 == (FPCGMetadataDomain *)0x0) goto LAB_1499dc9f5;
    pFVar7 = FPCGMetadataDomain::CreateAttribute<UE::Math::TRotator<double>_>
                       (pFVar6,local_a8.AssetPath.PackageName,(TRotator<double> *)local_88,true,
                        false);
    bVar2 = pFVar7 != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
    break;
  case 0xc:
    bVar2 = `IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>
            ::operator()<FName>(&local_res8,(FName)0x0);
    break;
  case 0xd:
    local_a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_a8.AssetPath.PackageName.Number = 0;
    local_a8._8_16_ = ZEXT816(0);
    local_a8.SubPathString.Data.ArrayNum = 0;
    local_a8.SubPathString.Data.ArrayMax = 0;
    bVar2 = `IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>
            ::operator()<FSoftObjectPath>(&local_res8,&local_a8);
    break;
  case 0xe:
    local_a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_a8.AssetPath.PackageName.Number = 0;
    local_a8._8_16_ = ZEXT816(0);
    local_a8.SubPathString.Data.ArrayNum = 0;
    local_a8.SubPathString.Data.ArrayMax = 0;
    bVar2 = `IPCGSettingsDefaultValueProvider::CreateInitialDefaultValueAttribute'::__l2::<lambda_1>
            ::operator()<FSoftClassPath>(&local_res8,(FSoftClassPath *)&local_a8);
    break;
  default:
    goto switchD_1499dc959_default;
  }
  if (bVar2 != false) {
    return true;
  }
switchD_1499dc959_default:
  return false;
}

// DefaultValuesAreEnabled @ 1499df560

bool __thiscall
IPCGSettingsDefaultValueProvider::DefaultValuesAreEnabled(IPCGSettingsDefaultValueProvider *this)

{
  return false;
}

// GetPinDefaultValueType @ 1499fa660

EPCGMetadataTypes __thiscall
IPCGSettingsDefaultValueProvider::GetPinDefaultValueType
          (IPCGSettingsDefaultValueProvider *this,FName param_1)

{
  return Unknown;
}

// GetPinInitialDefaultValueType @ 1499fa710

EPCGMetadataTypes __thiscall
IPCGSettingsDefaultValueProvider::GetPinInitialDefaultValueType
          (IPCGSettingsDefaultValueProvider *this,FName param_1)

{
  return Unknown;
}

// IsPinDefaultValueActivated @ 149a00900

bool __thiscall
IPCGSettingsDefaultValueProvider::IsPinDefaultValueActivated
          (IPCGSettingsDefaultValueProvider *this,FName param_1)

{
  return false;
}

// IsPinDefaultValueEnabled @ 149a00990

bool __thiscall
IPCGSettingsDefaultValueProvider::IsPinDefaultValueEnabled
          (IPCGSettingsDefaultValueProvider *this,FName param_1)

{
  return false;
}

// IsPinDefaultValueMetadataTypeValid @ 149a00a70

bool __thiscall
IPCGSettingsDefaultValueProvider::IsPinDefaultValueMetadataTypeValid
          (IPCGSettingsDefaultValueProvider *this,FName param_1,EPCGMetadataTypes param_2)

{
  return false;
}

// _getUObject @ 149a14320

UObject * __thiscall
IPCGSettingsDefaultValueProvider::_getUObject(IPCGSettingsDefaultValueProvider *this)

{
  return (UObject *)0x0;
}

