// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 164

// StaticClass @ 149d77c40

UClass * __cdecl UPCGMetadataAccessorHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataAccessorHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataAccessorHelpers",
               &Z_Registration_Info_UClass_UPCGMetadataAccessorHelpers.InnerSingleton,
               StaticRegisterNativesUPCGMetadataAccessorHelpers,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataAccessorHelpers>,
               InternalVTableHelperCtorCaller<UPCGMetadataAccessorHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataAccessorHelpers.InnerSingleton;
}

// GetAttribute<int> @ 149deb540

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<int>(long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<int> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FName local_res18 [2];
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return 0;
  }
  local_28.MetadataDomain = PCGMetadataDomainID::Default;
  local_28.Name = param_3;
  this = (FPCGMetadataAttribute<int> *)UPCGMetadata::GetConstAttribute(param_2,&local_28);
  if (this == (FPCGMetadataAttribute<int> *)0x0) {
    pFVar2 = FText::FromName(&local_68,local_res18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_78,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar2 = FText::Format<FText>(&local_88,pFVar3,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      return 0;
    }
  }
  else {
    if ((short)this->_padding_ == 2) {
      iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      iVar1 = FPCGMetadataAttribute<int>::GetValue(this,iVar1);
      return iVar1;
    }
    pFVar4 = PCG::Private::GetTypeName((FString *)&local_68,2);
    pFVar2 = FText::FromString(&local_58,pFVar4);
    pFVar4 = PCG::Private::GetTypeName(&local_78,(ushort)this->_padding_);
    pFVar5 = FText::FromString(&local_48,pFVar4);
    pFVar6 = FText::FromName(&local_38,local_res18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                        Default);
    pFVar2 = FText::Format<FText,FText,FText>(&local_88,pFVar3,pFVar6,pFVar5,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
    }
  }
  return 0;
}

// GetAttribute<float> @ 149deb740

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

float __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<float>(long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<float> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  float fVar7;
  FName local_res18 [2];
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return 0.0;
  }
  local_28.MetadataDomain = PCGMetadataDomainID::Default;
  local_28.Name = param_3;
  this = (FPCGMetadataAttribute<float> *)UPCGMetadata::GetConstAttribute(param_2,&local_28);
  if (this == (FPCGMetadataAttribute<float> *)0x0) {
    pFVar2 = FText::FromName(&local_68,local_res18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_78,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar2 = FText::Format<FText>(&local_88,pFVar3,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((short)this->_padding_ == 0) {
      iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      fVar7 = FPCGMetadataAttribute<float>::GetValue(this,iVar1);
      return fVar7;
    }
    pFVar4 = PCG::Private::GetTypeName((FString *)&local_68,0);
    pFVar2 = FText::FromString(&local_58,pFVar4);
    pFVar4 = PCG::Private::GetTypeName(&local_78,(ushort)this->_padding_);
    pFVar5 = FText::FromString(&local_48,pFVar4);
    pFVar6 = FText::FromName(&local_38,local_res18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                        Default);
    pFVar2 = FText::Format<FText,FText,FText>(&local_88,pFVar3,pFVar6,pFVar5,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
    }
  }
  return 0.0;
}

// GetAttribute<double> @ 149deb930

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

double __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<double>
          (long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  double dVar1;
  int iVar2;
  FPCGMetadataAttribute<double> *this;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FName local_res18 [2];
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return 0.0;
  }
  local_28.MetadataDomain = PCGMetadataDomainID::Default;
  local_28.Name = param_3;
  this = (FPCGMetadataAttribute<double> *)UPCGMetadata::GetConstAttribute(param_2,&local_28);
  if (this == (FPCGMetadataAttribute<double> *)0x0) {
    pFVar3 = FText::FromName(&local_68,local_res18);
    pFVar4 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_78,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar3 = FText::Format<FText>(&local_88,pFVar4,pFVar3);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((short)this->_padding_ == 1) {
      iVar2 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      dVar1 = FPCGMetadataAttribute<double>::GetValue(this,iVar2);
      return dVar1;
    }
    pFVar5 = PCG::Private::GetTypeName((FString *)&local_68,1);
    pFVar3 = FText::FromString(&local_58,pFVar5);
    pFVar5 = PCG::Private::GetTypeName(&local_78,(ushort)this->_padding_);
    pFVar6 = FText::FromString(&local_48,pFVar5);
    pFVar7 = FText::FromName(&local_38,local_res18);
    pFVar4 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                        Default);
    pFVar3 = FText::Format<FText,FText,FText>(&local_88,pFVar4,pFVar7,pFVar6,pFVar3);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
    }
  }
  return 0.0;
}

// GetAttribute<UE::Math::TQuat<double>_> @ 149debb20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TQuat<double> * __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<UE::Math::TQuat<double>_>
          (TQuat<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FName local_res20;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res20 = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
  }
  else {
    local_28.MetadataDomain = PCGMetadataDomainID::Default;
    local_28.Name = param_3;
    this = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
           UPCGMetadata::GetConstAttribute(param_2,&local_28);
    if (this == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
      pFVar2 = FText::FromName(&local_68,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_78,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar2 = FText::Format<FText>(&local_88,pFVar3,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if (*(short *)&this->field_0x70 == 7) {
        iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
        FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue(this,__return_storage_ptr__,iVar1)
        ;
        return __return_storage_ptr__;
      }
      pFVar4 = PCG::Private::GetTypeName((FString *)&local_68,7);
      pFVar2 = FText::FromString(&local_58,pFVar4);
      pFVar4 = PCG::Private::GetTypeName(&local_78,*(ushort *)&this->field_0x70);
      pFVar5 = FText::FromString(&local_48,pFVar4);
      pFVar6 = FText::FromName(&local_38,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar2 = FText::Format<FText,FText,FText>(&local_88,pFVar3,pFVar6,pFVar5,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
  }
  return __return_storage_ptr__;
}

// GetAttribute<UE::Math::TRotator<double>_> @ 149debd30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TRotator<double> * __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<UE::Math::TRotator<double>_>
          (TRotator<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FName local_res20;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res20 = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    __return_storage_ptr__->Pitch = 0.0;
    __return_storage_ptr__->Yaw = 0.0;
    __return_storage_ptr__->Roll = 0.0;
  }
  else {
    local_28.MetadataDomain = PCGMetadataDomainID::Default;
    local_28.Name = param_3;
    this = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)
           UPCGMetadata::GetConstAttribute(param_2,&local_28);
    if (this == (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
      pFVar2 = FText::FromName(&local_68,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_78,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar2 = FText::Format<FText>(&local_88,pFVar3,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 0xb) {
        iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
        FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
                  (this,__return_storage_ptr__,iVar1);
        return __return_storage_ptr__;
      }
      pFVar4 = PCG::Private::GetTypeName((FString *)&local_68,0xb);
      pFVar2 = FText::FromString(&local_58,pFVar4);
      pFVar4 = PCG::Private::GetTypeName(&local_78,(ushort)this->_padding_);
      pFVar5 = FText::FromString(&local_48,pFVar4);
      pFVar6 = FText::FromName(&local_38,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar2 = FText::Format<FText,FText,FText>(&local_88,pFVar3,pFVar6,pFVar5,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    __return_storage_ptr__->Pitch = 0.0;
    __return_storage_ptr__->Yaw = 0.0;
    __return_storage_ptr__->Roll = 0.0;
  }
  return __return_storage_ptr__;
}

// GetAttribute<UE::Math::TTransform<double>_> @ 149debf40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TTransform<double> * __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<UE::Math::TTransform<double>_>
          (TTransform<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this;
  FText *pFVar16;
  FTextFormat *pFVar17;
  FString *pFVar18;
  FText *pFVar19;
  FText *pFVar20;
  FName local_res20;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res20 = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
    auVar4._8_4_ = SUB84((double)fVar2,0);
    auVar4._0_8_ = (double)fVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
    auVar6._8_4_ = SUB84((double)fVar2,0);
    auVar6._0_8_ = (double)fVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar2,0);
    auVar8._0_8_ = (double)fVar1;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
  }
  else {
    local_28.MetadataDomain = PCGMetadataDomainID::Default;
    local_28.Name = param_3;
    this = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
           UPCGMetadata::GetConstAttribute(param_2,&local_28);
    if (this == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
      pFVar16 = FText::FromName(&local_68,&local_res20);
      pFVar17 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_78,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar16 = FText::Format<FText>(&local_88,pFVar17,pFVar16);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar16);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if (*(short *)&this->field_0x70 == 8) {
        iVar15 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
        FPCGMetadataAttribute<UE::Math::TTransform<double>_>::GetValue
                  (this,__return_storage_ptr__,iVar15);
        return __return_storage_ptr__;
      }
      pFVar18 = PCG::Private::GetTypeName((FString *)&local_68,8);
      pFVar16 = FText::FromString(&local_58,pFVar18);
      pFVar18 = PCG::Private::GetTypeName(&local_78,*(ushort *)&this->field_0x70);
      pFVar19 = FText::FromString(&local_48,pFVar18);
      pFVar20 = FText::FromName(&local_38,&local_res20);
      pFVar17 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                           Default);
      pFVar16 = FText::Format<FText,FText,FText>(&local_88,pFVar17,pFVar20,pFVar19,pFVar16);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar16);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar9;
    auVar10._8_4_ = SUB84((double)fVar2,0);
    auVar10._0_8_ = (double)fVar1;
    auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar10;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar11;
    auVar12._8_4_ = SUB84((double)fVar2,0);
    auVar12._0_8_ = (double)fVar1;
    auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar12;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar13;
    auVar14._8_4_ = SUB84((double)fVar2,0);
    auVar14._0_8_ = (double)fVar1;
    auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar14;
  }
  return __return_storage_ptr__;
}

// GetAttribute<UE::Math::TVector2<double>_> @ 149dec1c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TVector2<double> * __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<UE::Math::TVector2<double>_>
          (TVector2<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FName local_res20;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res20 = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  }
  else {
    local_28.MetadataDomain = PCGMetadataDomainID::Default;
    local_28.Name = param_3;
    this = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
           UPCGMetadata::GetConstAttribute(param_2,&local_28);
    if (this == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
      pFVar2 = FText::FromName(&local_68,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_78,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar2 = FText::Format<FText>(&local_88,pFVar3,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 4) {
        iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
        FPCGMetadataAttribute<UE::Math::TVector2<double>_>::GetValue
                  (this,__return_storage_ptr__,iVar1);
        return __return_storage_ptr__;
      }
      pFVar4 = PCG::Private::GetTypeName((FString *)&local_68,4);
      pFVar2 = FText::FromString(&local_58,pFVar4);
      pFVar4 = PCG::Private::GetTypeName(&local_78,(ushort)this->_padding_);
      pFVar5 = FText::FromString(&local_48,pFVar4);
      pFVar6 = FText::FromName(&local_38,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar2 = FText::Format<FText,FText,FText>(&local_88,pFVar3,pFVar6,pFVar5,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  }
  return __return_storage_ptr__;
}

// GetAttribute<UE::Math::TVector4<double>_> @ 149dec3c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TVector4<double> * __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<UE::Math::TVector4<double>_>
          (TVector4<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FName local_res20;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res20 = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  }
  else {
    local_28.MetadataDomain = PCGMetadataDomainID::Default;
    local_28.Name = param_3;
    this = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)
           UPCGMetadata::GetConstAttribute(param_2,&local_28);
    if (this == (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
      pFVar2 = FText::FromName(&local_68,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_78,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar2 = FText::Format<FText>(&local_88,pFVar3,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if (*(short *)&this->field_0x70 == 6) {
        iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
        FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
                  (this,__return_storage_ptr__,iVar1);
        return __return_storage_ptr__;
      }
      pFVar4 = PCG::Private::GetTypeName((FString *)&local_68,6);
      pFVar2 = FText::FromString(&local_58,pFVar4);
      pFVar4 = PCG::Private::GetTypeName(&local_78,*(ushort *)&this->field_0x70);
      pFVar5 = FText::FromString(&local_48,pFVar4);
      pFVar6 = FText::FromName(&local_38,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar2 = FText::Format<FText,FText,FText>(&local_88,pFVar3,pFVar6,pFVar5,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  }
  return __return_storage_ptr__;
}

// GetAttribute<UE::Math::TVector<double>_> @ 149dec5f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TVector<double> * __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<UE::Math::TVector<double>_>
          (TVector<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FName local_res20;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res20 = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    local_28.MetadataDomain = PCGMetadataDomainID::Default;
    local_28.Name = param_3;
    this = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
           UPCGMetadata::GetConstAttribute(param_2,&local_28);
    if (this == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
      pFVar2 = FText::FromName(&local_68,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_78,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar2 = FText::Format<FText>(&local_88,pFVar3,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 5) {
        iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
        FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                  (this,__return_storage_ptr__,iVar1);
        return __return_storage_ptr__;
      }
      pFVar4 = PCG::Private::GetTypeName((FString *)&local_68,5);
      pFVar2 = FText::FromString(&local_58,pFVar4);
      pFVar4 = PCG::Private::GetTypeName(&local_78,(ushort)this->_padding_);
      pFVar5 = FText::FromString(&local_48,pFVar4);
      pFVar6 = FText::FromName(&local_38,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar2 = FText::Format<FText,FText,FText>(&local_88,pFVar3,pFVar6,pFVar5,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  return __return_storage_ptr__;
}

// GetAttribute<FSoftClassPath> @ 149dec800

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FSoftClassPath * __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<FSoftClassPath>
          (FSoftClassPath *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,FName param_3
          )

{
  int iVar1;
  FPCGMetadataAttribute<FSoftClassPath> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FName local_res20;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res20 = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  }
  else {
    local_28.MetadataDomain = PCGMetadataDomainID::Default;
    local_28.Name = param_3;
    this = (FPCGMetadataAttribute<FSoftClassPath> *)
           UPCGMetadata::GetConstAttribute(param_2,&local_28);
    if (this == (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
      pFVar2 = FText::FromName(&local_68,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_78,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar2 = FText::Format<FText>(&local_88,pFVar3,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 0xe) {
        iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
        FPCGMetadataAttribute<FSoftClassPath>::GetValue(this,__return_storage_ptr__,iVar1);
        return __return_storage_ptr__;
      }
      pFVar4 = PCG::Private::GetTypeName((FString *)&local_68,0xe);
      pFVar2 = FText::FromString(&local_58,pFVar4);
      pFVar4 = PCG::Private::GetTypeName(&local_78,(ushort)this->_padding_);
      pFVar5 = FText::FromString(&local_48,pFVar4);
      pFVar6 = FText::FromName(&local_38,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar2 = FText::Format<FText,FText,FText>(&local_88,pFVar3,pFVar6,pFVar5,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  }
  return __return_storage_ptr__;
}

// GetAttribute<FSoftObjectPath> @ 149deca20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FSoftObjectPath * __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<FSoftObjectPath>
          (FSoftObjectPath *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<FSoftObjectPath> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FName local_res20;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res20 = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
    (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  }
  else {
    local_28.MetadataDomain = PCGMetadataDomainID::Default;
    local_28.Name = param_3;
    this = (FPCGMetadataAttribute<FSoftObjectPath> *)
           UPCGMetadata::GetConstAttribute(param_2,&local_28);
    if (this == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
      pFVar2 = FText::FromName(&local_68,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_78,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar2 = FText::Format<FText>(&local_88,pFVar3,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 0xd) {
        iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
        FPCGMetadataAttribute<FSoftObjectPath>::GetValue(this,__return_storage_ptr__,iVar1);
        return __return_storage_ptr__;
      }
      pFVar4 = PCG::Private::GetTypeName((FString *)&local_68,0xd);
      pFVar2 = FText::FromString(&local_58,pFVar4);
      pFVar4 = PCG::Private::GetTypeName(&local_78,(ushort)this->_padding_);
      pFVar5 = FText::FromString(&local_48,pFVar4);
      pFVar6 = FText::FromName(&local_38,&local_res20);
      pFVar3 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar2 = FText::Format<FText,FText,FText>(&local_88,pFVar3,pFVar6,pFVar5,pFVar2);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
    (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
    (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
    (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// GetAttribute<FName> @ 149decc40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<FName>(long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  FPCGMetadataAttribute<FName> *this;
  FText *pFVar1;
  FTextFormat *pFVar2;
  FString *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FName local_res20;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  if (param_3 == (FName)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_28.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<FName> *)
           UPCGMetadata::GetConstAttribute((UPCGMetadata *)param_3,&local_28);
    if (this == (FPCGMetadataAttribute<FName> *)0x0) {
      pFVar1 = FText::FromName(&local_68,&local_res20);
      pFVar2 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_78,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar1 = FText::Format<FText>(&local_88,pFVar2,pFVar1);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 0xc) {
        FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,(long64)param_2);
        FPCGMetadataAttribute<FName>::GetValue(this,(int)param_1);
        return (FName)param_1;
      }
      pFVar3 = PCG::Private::GetTypeName((FString *)&local_68,0xc);
      pFVar1 = FText::FromString(&local_58,pFVar3);
      pFVar3 = PCG::Private::GetTypeName(&local_78,(ushort)this->_padding_);
      pFVar4 = FText::FromString(&local_48,pFVar3);
      pFVar5 = FText::FromName(&local_38,&local_res20);
      pFVar2 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar1 = FText::Format<FText,FText,FText>(&local_88,pFVar2,pFVar5,pFVar4,pFVar1);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar1);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    *(undefined8 *)param_1 = 0;
  }
  return (FName)param_1;
}

// GetAttribute<FString> @ 149dece40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<FString>
          (FString *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  short sVar1;
  int iVar2;
  FPCGMetadataAttribute<FSoftObjectPath> *this;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FName local_res20;
  FSoftObjectPath local_98;
  FText local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res20 = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_98._8_16_ = PCGMetadataDomainID::Default;
  local_98.AssetPath.PackageName = param_3;
  this = (FPCGMetadataAttribute<FSoftObjectPath> *)
         UPCGMetadata::GetConstAttribute(param_2,(FPCGAttributeIdentifier *)&local_98);
  if (this == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
    pFVar3 = FText::FromName(&local_58,&local_res20);
    pFVar4 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_68,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar3 = FText::Format<FText>(&local_78,pFVar4,pFVar3);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
LAB_149ded055:
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    sVar1 = (short)this->_padding_;
    if (sVar1 == 9) {
      iVar2 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      FPCGMetadataAttribute<FString>::GetValue
                ((FPCGMetadataAttribute<FString> *)this,__return_storage_ptr__,iVar2);
      return __return_storage_ptr__;
    }
    if (sVar1 == 0xd) {
      iVar2 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      FPCGMetadataAttribute<FSoftObjectPath>::GetValue(this,&local_98,iVar2);
    }
    else {
      if (sVar1 != 0xe) {
        pFVar5 = PCG::Private::GetTypeName((FString *)&local_58,9);
        pFVar3 = FText::FromString(&local_48,pFVar5);
        pFVar5 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
        pFVar6 = FText::FromString(&local_38,pFVar5);
        pFVar7 = FText::FromName(&local_28,&local_res20);
        pFVar4 = FTextFormat::FTextFormat
                           ((FTextFormat *)&local_98,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                            Default);
        pFVar3 = FText::Format<FText,FText,FText>(&local_78,pFVar4,pFVar7,pFVar6,pFVar3);
        UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_58.TextData.Reference);
        }
        goto LAB_149ded055;
      }
      iVar2 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      FPCGMetadataAttribute<FSoftClassPath>::GetValue
                ((FPCGMetadataAttribute<FSoftClassPath> *)this,(FSoftClassPath *)&local_98,iVar2);
    }
    FSoftObjectPath::ToString(&local_98,__return_storage_ptr__);
    if ((FName)local_98.SubPathString.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_98.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetAttribute<__int64> @ 149ded080

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

long64 __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<__int64>
          (long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<__int64> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  long64 lVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FName local_res18 [2];
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return 0;
  }
  local_28.MetadataDomain = PCGMetadataDomainID::Default;
  local_28.Name = param_3;
  this = (FPCGMetadataAttribute<__int64> *)UPCGMetadata::GetConstAttribute(param_2,&local_28);
  if (this == (FPCGMetadataAttribute<__int64> *)0x0) {
    pFVar2 = FText::FromName(&local_68,local_res18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_78,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar2 = FText::Format<FText>(&local_88,pFVar3,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      return 0;
    }
  }
  else {
    if ((short)this->_padding_ == 3) {
      iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      lVar4 = FPCGMetadataAttribute<__int64>::GetValue(this,iVar1);
      return lVar4;
    }
    pFVar5 = PCG::Private::GetTypeName((FString *)&local_68,3);
    pFVar2 = FText::FromString(&local_58,pFVar5);
    pFVar5 = PCG::Private::GetTypeName(&local_78,(ushort)this->_padding_);
    pFVar6 = FText::FromString(&local_48,pFVar5);
    pFVar7 = FText::FromName(&local_38,local_res18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                        Default);
    pFVar2 = FText::Format<FText,FText,FText>(&local_88,pFVar3,pFVar7,pFVar6,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
    }
  }
  return 0;
}

// GetAttribute<bool> @ 149ded280

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UPCGMetadataAccessorHelpers::GetAttribute<bool>(long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  bool bVar1;
  int iVar2;
  FPCGMetadataAttribute<bool> *this;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FName local_res18 [2];
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return false;
  }
  local_28.MetadataDomain = PCGMetadataDomainID::Default;
  local_28.Name = param_3;
  this = (FPCGMetadataAttribute<bool> *)UPCGMetadata::GetConstAttribute(param_2,&local_28);
  if (this == (FPCGMetadataAttribute<bool> *)0x0) {
    pFVar3 = FText::FromName(&local_68,local_res18);
    pFVar4 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_78,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar3 = FText::Format<FText>(&local_88,pFVar4,pFVar3);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      return false;
    }
  }
  else {
    if ((short)this->_padding_ == 10) {
      iVar2 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      bVar1 = FPCGMetadataAttribute<bool>::GetValue(this,iVar2);
      return bVar1;
    }
    pFVar5 = PCG::Private::GetTypeName((FString *)&local_68,10);
    pFVar3 = FText::FromString(&local_58,pFVar5);
    pFVar5 = PCG::Private::GetTypeName(&local_78,(ushort)this->_padding_);
    pFVar6 = FText::FromString(&local_48,pFVar5);
    pFVar7 = FText::FromName(&local_38,local_res18);
    pFVar4 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                        Default);
    pFVar3 = FText::Format<FText,FText,FText>(&local_88,pFVar4,pFVar7,pFVar6,pFVar3);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
    }
  }
  return false;
}

// SetAttribute<int> @ 149e2aad0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<int>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,int *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<int> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<int> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<int> *)0x0) {
          if ((short)this->_padding_ == 2) {
            FPCGMetadataAttribute<int>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,2);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<float> @ 149e2adc0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<float>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,float *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<float> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<float> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<float> *)0x0) {
          if ((short)this->_padding_ == 0) {
            FPCGMetadataAttribute<float>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,0);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<double> @ 149e2b0b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<double>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,double *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<double> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<double> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<double> *)0x0) {
          if ((short)this->_padding_ == 1) {
            FPCGMetadataAttribute<double>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,1);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<UE::Math::TQuat<double>_> @ 149e2b3a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<UE::Math::TQuat<double>_>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TQuat<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
          if (*(short *)&this->field_0x70 == 7) {
            FPCGMetadataAttribute<UE::Math::TQuat<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,7);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,*(ushort *)&this->field_0x70);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<UE::Math::TRotator<double>_> @ 149e2b690

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<UE::Math::TRotator<double>_>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TRotator<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
          if ((short)this->_padding_ == 0xb) {
            FPCGMetadataAttribute<UE::Math::TRotator<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,0xb);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<UE::Math::TTransform<double>_> @ 149e2b980

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<UE::Math::TTransform<double>_>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TTransform<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
          if (*(short *)&this->field_0x70 == 8) {
            FPCGMetadataAttribute<UE::Math::TTransform<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,8);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,*(ushort *)&this->field_0x70);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<UE::Math::TVector2<double>_> @ 149e2bc70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<UE::Math::TVector2<double>_>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TVector2<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
          if ((short)this->_padding_ == 4) {
            FPCGMetadataAttribute<UE::Math::TVector2<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,4);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<UE::Math::TVector4<double>_> @ 149e2bf60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<UE::Math::TVector4<double>_>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TVector4<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
          if (*(short *)&this->field_0x70 == 6) {
            FPCGMetadataAttribute<UE::Math::TVector4<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,6);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,*(ushort *)&this->field_0x70);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<UE::Math::TVector<double>_> @ 149e2c250

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<UE::Math::TVector<double>_>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TVector<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
          if ((short)this->_padding_ == 5) {
            FPCGMetadataAttribute<UE::Math::TVector<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,5);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<FSoftClassPath> @ 149e2c540

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<FSoftClassPath>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,FSoftClassPath *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<FSoftClassPath> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<FSoftClassPath> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
          if ((short)this->_padding_ == 0xe) {
            FPCGMetadataAttribute<FSoftClassPath>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,0xe);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<FSoftObjectPath> @ 149e2c830

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<FSoftObjectPath>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,FSoftObjectPath *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<FSoftObjectPath> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<FSoftObjectPath> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
          if ((short)this->_padding_ == 0xd) {
            FPCGMetadataAttribute<FSoftObjectPath>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,0xd);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<FName> @ 149e2cb20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<FName>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,FName *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<FName> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<FName> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<FName> *)0x0) {
          if ((short)this->_padding_ == 0xc) {
            FPCGMetadataAttribute<FName>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,0xc);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<FString> @ 149e2ce10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<FString>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,FString *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<FString> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<FString> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<FString> *)0x0) {
          if ((short)this->_padding_ == 9) {
            FPCGMetadataAttribute<FString>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,9);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<__int64> @ 149e2d100

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<__int64>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,long64 *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<__int64> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<__int64> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<__int64> *)0x0) {
          if ((short)this->_padding_ == 3) {
            FPCGMetadataAttribute<__int64>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,3);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetAttribute<bool> @ 149e2d3f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetAttribute<bool>
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,bool *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<bool> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res18 [2];
  FText local_a8;
  FText local_98;
  FName local_88;
  FPCGMetadataDomainID FStack_80;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      local_88 = local_res18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&local_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<bool> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,local_88);
        if (this != (FPCGMetadataAttribute<bool> *)0x0) {
          if ((short)this->_padding_ == 10) {
            FPCGMetadataAttribute<bool>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&local_98,10);
          pFVar5 = FText::FromString(&local_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&local_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&local_28,pFVar6);
          pFVar8 = FText::FromName(&local_58,local_res18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&local_48,local_res18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      local_a8.TextData.Reference = local_98.TextData.Reference;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// UPCGMetadataAccessorHelpers @ 149e36410

UPCGMetadataAccessorHelpers * __thiscall
UPCGMetadataAccessorHelpers::UPCGMetadataAccessorHelpers
          (UPCGMetadataAccessorHelpers *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGMetadataAccessorHelpers__6B_;
  return this;
}

// UPCGMetadataAccessorHelpers @ 149e36440

UPCGMetadataAccessorHelpers * __thiscall
UPCGMetadataAccessorHelpers::UPCGMetadataAccessorHelpers
          (UPCGMetadataAccessorHelpers *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGMetadataAccessorHelpers__6B_;
  return this;
}

// ~UPCGMetadataAccessorHelpers @ 149e37790

void __thiscall
UPCGMetadataAccessorHelpers::~UPCGMetadataAccessorHelpers(UPCGMetadataAccessorHelpers *this)

{
  *(undefined ***)this = &___7UPCGMetadataAccessorHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CopyPoint @ 149e4f1f0

void __cdecl
UPCGMetadataAccessorHelpers::CopyPoint
          (FPCGPoint *param_1,FPCGPoint *param_2,bool param_3,UPCGMetadata *param_4,
          UPCGMetadata *param_5)

{
  UPCGMetadata *pUVar1;
  double dVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  long64 lVar6;
  
  dVar2 = (param_1->Transform).Rotation.XY.m128d_f64[1];
  (param_2->Transform).Rotation.XY.m128d_f64[0] = (param_1->Transform).Rotation.XY.m128d_f64[0];
  (param_2->Transform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Rotation.ZW.m128d_f64[1];
  (param_2->Transform).Rotation.ZW.m128d_f64[0] = (param_1->Transform).Rotation.ZW.m128d_f64[0];
  (param_2->Transform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Translation.XY.m128d_f64[1];
  (param_2->Transform).Translation.XY.m128d_f64[0] =
       (param_1->Transform).Translation.XY.m128d_f64[0];
  (param_2->Transform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Translation.ZW.m128d_f64[1];
  (param_2->Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Transform).Translation.ZW.m128d_f64[0];
  (param_2->Transform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
  (param_2->Transform).Scale3D.XY.m128d_f64[0] = (param_1->Transform).Scale3D.XY.m128d_f64[0];
  (param_2->Transform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
  (param_2->Transform).Scale3D.ZW.m128d_f64[0] = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
  (param_2->Transform).Scale3D.ZW.m128d_f64[1] = dVar2;
  uVar4 = *(undefined4 *)&param_1->field_0x64;
  dVar2 = (param_1->BoundsMin).field0_0x0._s_0.X;
  param_2->Density = param_1->Density;
  *(undefined4 *)&param_2->field_0x64 = uVar4;
  (param_2->BoundsMin).field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->BoundsMin).field0_0x0._s_0.Z;
  (param_2->BoundsMin).field0_0x0._s_0.Y = (param_1->BoundsMin).field0_0x0._s_0.Y;
  (param_2->BoundsMin).field0_0x0._s_0.Z = dVar2;
  dVar2 = (param_1->BoundsMax).field0_0x0._s_0.Y;
  (param_2->BoundsMax).field0_0x0._s_0.X = (param_1->BoundsMax).field0_0x0._s_0.X;
  (param_2->BoundsMax).field0_0x0._s_0.Y = dVar2;
  lVar3 = param_1->_padding_;
  (param_2->BoundsMax).field0_0x0._s_0.Z = (param_1->BoundsMax).field0_0x0._s_0.Z;
  param_2->_padding_ = lVar3;
  dVar2 = (param_1->Color).field0_0x0._s_0.Y;
  (param_2->Color).field0_0x0._s_0.X = (param_1->Color).field0_0x0._s_0.X;
  (param_2->Color).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Color).field0_0x0._s_0.W;
  (param_2->Color).field0_0x0._s_0.Z = (param_1->Color).field0_0x0._s_0.Z;
  (param_2->Color).field0_0x0._s_0.W = dVar2;
  iVar5 = param_1->Seed;
  lVar6 = param_1->MetadataEntry;
  param_2->Steepness = param_1->Steepness;
  param_2->Seed = iVar5;
  param_2->MetadataEntry = lVar6;
  if ((param_3) && (param_5 != (UPCGMetadata *)0x0)) {
    if (param_4 != (UPCGMetadata *)0x0) {
      for (pUVar1 = (param_5->Parent).field0_0x0.DebugPtr; pUVar1 != (UPCGMetadata *)0x0;
          pUVar1 = (pUVar1->Parent).field0_0x0.DebugPtr) {
        if (pUVar1 == param_4) goto LAB_149e4f2f4;
      }
      if (param_4 != (UPCGMetadata *)0x0) {
        lVar6 = UPCGMetadata::AddEntry(param_5,-1);
        param_2->MetadataEntry = lVar6;
        UPCGMetadata::SetAttributes(param_5,param_1->MetadataEntry,param_4,&param_2->MetadataEntry);
        return;
      }
    }
LAB_149e4f2f4:
    lVar6 = UPCGMetadata::AddEntry(param_5,param_1->MetadataEntry);
    param_2->MetadataEntry = lVar6;
  }
  else {
    param_2->MetadataEntry = -1;
  }
  return;
}

// GetBoolAttribute @ 149e58650

bool __cdecl
UPCGMetadataAccessorHelpers::GetBoolAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3)

{
  bool bVar1;
  
  bVar1 = GetAttribute<bool>(param_1->MetadataEntry,param_2,param_3);
  return bVar1;
}

// GetBoolAttributeByMetadataKey @ 149e58670

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UPCGMetadataAccessorHelpers::GetBoolAttributeByMetadataKey
          (long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  bool bVar1;
  int iVar2;
  FPCGMetadataAttribute<bool> *this;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FName aFStackX_18 [2];
  FText FStack_88;
  FString FStack_78;
  FText FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FPCGAttributeIdentifier FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return false;
  }
  FStack_28.MetadataDomain = PCGMetadataDomainID::Default;
  FStack_28.Name = param_3;
  this = (FPCGMetadataAttribute<bool> *)UPCGMetadata::GetConstAttribute(param_2,&FStack_28);
  if (this == (FPCGMetadataAttribute<bool> *)0x0) {
    pFVar3 = FText::FromName(&FStack_68,aFStackX_18);
    pFVar4 = FTextFormat::FTextFormat
                       ((FTextFormat *)&FStack_78,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar3 = FText::Format<FText>(&FStack_88,pFVar4,pFVar3);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
    if (FStack_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
      return false;
    }
  }
  else {
    if ((short)this->_padding_ == 10) {
      iVar2 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      bVar1 = FPCGMetadataAttribute<bool>::GetValue(this,iVar2);
      return bVar1;
    }
    pFVar5 = PCG::Private::GetTypeName((FString *)&FStack_68,10);
    pFVar3 = FText::FromString(&FStack_58,pFVar5);
    pFVar5 = PCG::Private::GetTypeName(&FStack_78,(ushort)this->_padding_);
    pFVar6 = FText::FromString(&FStack_48,pFVar5);
    pFVar7 = FText::FromName(&FStack_38,aFStackX_18);
    pFVar4 = FTextFormat::FTextFormat
                       ((FTextFormat *)&FStack_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                        Default);
    pFVar3 = FText::Format<FText,FText,FText>(&FStack_88,pFVar4,pFVar7,pFVar6,pFVar3);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
    if (FStack_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
    }
    if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    if (FStack_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(FStack_68.TextData.Reference);
    }
  }
  return false;
}

// GetDoubleAttribute @ 149e58ee0

double __cdecl
UPCGMetadataAccessorHelpers::GetDoubleAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3)

{
  double dVar1;
  
  dVar1 = GetAttribute<double>(param_1->MetadataEntry,param_2,param_3);
  return dVar1;
}

// GetDoubleAttributeByMetadataKey @ 149e58f00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

double __cdecl
UPCGMetadataAccessorHelpers::GetDoubleAttributeByMetadataKey
          (long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  double dVar1;
  int iVar2;
  FPCGMetadataAttribute<double> *this;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FName aFStackX_18 [2];
  FText FStack_88;
  FString FStack_78;
  FText FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FPCGAttributeIdentifier FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return 0.0;
  }
  FStack_28.MetadataDomain = PCGMetadataDomainID::Default;
  FStack_28.Name = param_3;
  this = (FPCGMetadataAttribute<double> *)UPCGMetadata::GetConstAttribute(param_2,&FStack_28);
  if (this == (FPCGMetadataAttribute<double> *)0x0) {
    pFVar3 = FText::FromName(&FStack_68,aFStackX_18);
    pFVar4 = FTextFormat::FTextFormat
                       ((FTextFormat *)&FStack_78,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar3 = FText::Format<FText>(&FStack_88,pFVar4,pFVar3);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
    if (FStack_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((short)this->_padding_ == 1) {
      iVar2 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      dVar1 = FPCGMetadataAttribute<double>::GetValue(this,iVar2);
      return dVar1;
    }
    pFVar5 = PCG::Private::GetTypeName((FString *)&FStack_68,1);
    pFVar3 = FText::FromString(&FStack_58,pFVar5);
    pFVar5 = PCG::Private::GetTypeName(&FStack_78,(ushort)this->_padding_);
    pFVar6 = FText::FromString(&FStack_48,pFVar5);
    pFVar7 = FText::FromName(&FStack_38,aFStackX_18);
    pFVar4 = FTextFormat::FTextFormat
                       ((FTextFormat *)&FStack_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                        Default);
    pFVar3 = FText::Format<FText,FText,FText>(&FStack_88,pFVar4,pFVar7,pFVar6,pFVar3);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
    if (FStack_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
    }
    if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    if (FStack_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(FStack_68.TextData.Reference);
    }
  }
  return 0.0;
}

// GetFloatAttribute @ 149e58f30

float __cdecl
UPCGMetadataAccessorHelpers::GetFloatAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3)

{
  float fVar1;
  
  fVar1 = GetAttribute<float>(param_1->MetadataEntry,param_2,param_3);
  return fVar1;
}

// GetFloatAttributeByMetadataKey @ 149e58f50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

float __cdecl
UPCGMetadataAccessorHelpers::GetFloatAttributeByMetadataKey
          (long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<float> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  float fVar7;
  FName aFStackX_18 [2];
  FText FStack_88;
  FString FStack_78;
  FText FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FPCGAttributeIdentifier FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return 0.0;
  }
  FStack_28.MetadataDomain = PCGMetadataDomainID::Default;
  FStack_28.Name = param_3;
  this = (FPCGMetadataAttribute<float> *)UPCGMetadata::GetConstAttribute(param_2,&FStack_28);
  if (this == (FPCGMetadataAttribute<float> *)0x0) {
    pFVar2 = FText::FromName(&FStack_68,aFStackX_18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&FStack_78,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar2 = FText::Format<FText>(&FStack_88,pFVar3,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (FStack_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((short)this->_padding_ == 0) {
      iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      fVar7 = FPCGMetadataAttribute<float>::GetValue(this,iVar1);
      return fVar7;
    }
    pFVar4 = PCG::Private::GetTypeName((FString *)&FStack_68,0);
    pFVar2 = FText::FromString(&FStack_58,pFVar4);
    pFVar4 = PCG::Private::GetTypeName(&FStack_78,(ushort)this->_padding_);
    pFVar5 = FText::FromString(&FStack_48,pFVar4);
    pFVar6 = FText::FromName(&FStack_38,aFStackX_18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&FStack_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                        Default);
    pFVar2 = FText::Format<FText,FText,FText>(&FStack_88,pFVar3,pFVar6,pFVar5,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (FStack_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
    }
    if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    if (FStack_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(FStack_68.TextData.Reference);
    }
  }
  return 0.0;
}

// GetInteger32Attribute @ 149e5a430

int __cdecl
UPCGMetadataAccessorHelpers::GetInteger32Attribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3)

{
  int iVar1;
  
  iVar1 = GetAttribute<int>(param_1->MetadataEntry,param_2,param_3);
  return iVar1;
}

// GetInteger32AttributeByMetadataKey @ 149e5a450

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __cdecl
UPCGMetadataAccessorHelpers::GetInteger32AttributeByMetadataKey
          (long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<int> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FName aFStackX_18 [2];
  FText FStack_88;
  FString FStack_78;
  FText FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FPCGAttributeIdentifier FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return 0;
  }
  FStack_28.MetadataDomain = PCGMetadataDomainID::Default;
  FStack_28.Name = param_3;
  this = (FPCGMetadataAttribute<int> *)UPCGMetadata::GetConstAttribute(param_2,&FStack_28);
  if (this == (FPCGMetadataAttribute<int> *)0x0) {
    pFVar2 = FText::FromName(&FStack_68,aFStackX_18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&FStack_78,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar2 = FText::Format<FText>(&FStack_88,pFVar3,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (FStack_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
      return 0;
    }
  }
  else {
    if ((short)this->_padding_ == 2) {
      iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      iVar1 = FPCGMetadataAttribute<int>::GetValue(this,iVar1);
      return iVar1;
    }
    pFVar4 = PCG::Private::GetTypeName((FString *)&FStack_68,2);
    pFVar2 = FText::FromString(&FStack_58,pFVar4);
    pFVar4 = PCG::Private::GetTypeName(&FStack_78,(ushort)this->_padding_);
    pFVar5 = FText::FromString(&FStack_48,pFVar4);
    pFVar6 = FText::FromName(&FStack_38,aFStackX_18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&FStack_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                        Default);
    pFVar2 = FText::Format<FText,FText,FText>(&FStack_88,pFVar3,pFVar6,pFVar5,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (FStack_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
    }
    if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    if (FStack_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(FStack_68.TextData.Reference);
    }
  }
  return 0;
}

// GetInteger64Attribute @ 149e5a460

long64 __cdecl
UPCGMetadataAccessorHelpers::GetInteger64Attribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3)

{
  long64 lVar1;
  
  lVar1 = GetAttribute<__int64>(param_1->MetadataEntry,param_2,param_3);
  return lVar1;
}

// GetInteger64AttributeByMetadataKey @ 149e5a480

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

long64 __cdecl
UPCGMetadataAccessorHelpers::GetInteger64AttributeByMetadataKey
          (long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  int iVar1;
  FPCGMetadataAttribute<__int64> *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  long64 lVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FName aFStackX_18 [2];
  FText FStack_88;
  FString FStack_78;
  FText FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FPCGAttributeIdentifier FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return 0;
  }
  FStack_28.MetadataDomain = PCGMetadataDomainID::Default;
  FStack_28.Name = param_3;
  this = (FPCGMetadataAttribute<__int64> *)UPCGMetadata::GetConstAttribute(param_2,&FStack_28);
  if (this == (FPCGMetadataAttribute<__int64> *)0x0) {
    pFVar2 = FText::FromName(&FStack_68,aFStackX_18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&FStack_78,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar2 = FText::Format<FText>(&FStack_88,pFVar3,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (FStack_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
      return 0;
    }
  }
  else {
    if ((short)this->_padding_ == 3) {
      iVar1 = FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,param_1);
      lVar4 = FPCGMetadataAttribute<__int64>::GetValue(this,iVar1);
      return lVar4;
    }
    pFVar5 = PCG::Private::GetTypeName((FString *)&FStack_68,3);
    pFVar2 = FText::FromString(&FStack_58,pFVar5);
    pFVar5 = PCG::Private::GetTypeName(&FStack_78,(ushort)this->_padding_);
    pFVar6 = FText::FromString(&FStack_48,pFVar5);
    pFVar7 = FText::FromName(&FStack_38,aFStackX_18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&FStack_28,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                        Default);
    pFVar2 = FText::Format<FText,FText,FText>(&FStack_88,pFVar3,pFVar7,pFVar6,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (FStack_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_88.TextData.Reference + 0x10))();
    }
    if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
    }
    if (FStack_68.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(FStack_68.TextData.Reference);
    }
  }
  return 0;
}

// GetNameAttribute @ 149e5c2c0

FName __cdecl
UPCGMetadataAccessorHelpers::GetNameAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3)

{
  GetAttribute<FName>((long64)param_1,*(UPCGMetadata **)&(param_2->MetadataDomains).field_0x38,
                      param_3);
  return (FName)param_1;
}

// GetPrivateStaticClass @ 149e5da10

UClass * __cdecl UPCGMetadataAccessorHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMetadataAccessorHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMetadataAccessorHelpers",
               &Z_Registration_Info_UClass_UPCGMetadataAccessorHelpers.InnerSingleton,
               StaticRegisterNativesUPCGMetadataAccessorHelpers,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMetadataAccessorHelpers>,
               InternalVTableHelperCtorCaller<UPCGMetadataAccessorHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMetadataAccessorHelpers.InnerSingleton;
}

// GetQuatAttribute @ 149e5df10

TQuat<double> * __cdecl
UPCGMetadataAccessorHelpers::GetQuatAttribute
          (TQuat<double> *__return_storage_ptr__,FPCGPoint *param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<UE::Math::TQuat<double>_>
            (__return_storage_ptr__,param_1->MetadataEntry,param_2,param_3);
  return __return_storage_ptr__;
}

// GetQuatAttributeByMetadataKey @ 149e5df40

TQuat<double> * __cdecl
UPCGMetadataAccessorHelpers::GetQuatAttributeByMetadataKey
          (TQuat<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  GetAttribute<UE::Math::TQuat<double>_>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetRotatorAttribute @ 149e6acb0

TRotator<double> * __cdecl
UPCGMetadataAccessorHelpers::GetRotatorAttribute
          (TRotator<double> *__return_storage_ptr__,FPCGPoint *param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<UE::Math::TRotator<double>_>
            (__return_storage_ptr__,param_1->MetadataEntry,param_2,param_3);
  return __return_storage_ptr__;
}

// GetRotatorAttributeByMetadataKey @ 149e6ace0

TRotator<double> * __cdecl
UPCGMetadataAccessorHelpers::GetRotatorAttributeByMetadataKey
          (TRotator<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<UE::Math::TRotator<double>_>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetSoftClassPathAttribute @ 149e6ad10

FSoftClassPath * __cdecl
UPCGMetadataAccessorHelpers::GetSoftClassPathAttribute
          (FSoftClassPath *__return_storage_ptr__,FPCGPoint *param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<FSoftClassPath>(__return_storage_ptr__,param_1->MetadataEntry,param_2,param_3);
  return __return_storage_ptr__;
}

// GetSoftClassPathAttributeByMetadataKey @ 149e6ad40

FSoftClassPath * __cdecl
UPCGMetadataAccessorHelpers::GetSoftClassPathAttributeByMetadataKey
          (FSoftClassPath *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,FName param_3
          )

{
  GetAttribute<FSoftClassPath>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetSoftObjectPathAttribute @ 149e6ad60

FSoftObjectPath * __cdecl
UPCGMetadataAccessorHelpers::GetSoftObjectPathAttribute
          (FSoftObjectPath *__return_storage_ptr__,FPCGPoint *param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<FSoftObjectPath>(__return_storage_ptr__,param_1->MetadataEntry,param_2,param_3);
  return __return_storage_ptr__;
}

// GetSoftObjectPathAttributeByMetadataKey @ 149e6ad90

FSoftObjectPath * __cdecl
UPCGMetadataAccessorHelpers::GetSoftObjectPathAttributeByMetadataKey
          (FSoftObjectPath *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<FSoftObjectPath>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetStringAttribute @ 149e6adb0

FString * __cdecl
UPCGMetadataAccessorHelpers::GetStringAttribute
          (FString *__return_storage_ptr__,FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3)

{
  GetAttribute<FString>(__return_storage_ptr__,param_1->MetadataEntry,param_2,param_3);
  return __return_storage_ptr__;
}

// GetStringAttributeByMetadataKey @ 149e6ade0

FString * __cdecl
UPCGMetadataAccessorHelpers::GetStringAttributeByMetadataKey
          (FString *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  GetAttribute<FString>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetTransformAttribute @ 149e6af30

TTransform<double> * __cdecl
UPCGMetadataAccessorHelpers::GetTransformAttribute
          (TTransform<double> *__return_storage_ptr__,FPCGPoint *param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<UE::Math::TTransform<double>_>
            (__return_storage_ptr__,param_1->MetadataEntry,param_2,param_3);
  return __return_storage_ptr__;
}

// GetTransformAttributeByMetadataKey @ 149e6af60

TTransform<double> * __cdecl
UPCGMetadataAccessorHelpers::GetTransformAttributeByMetadataKey
          (TTransform<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<UE::Math::TTransform<double>_>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetVector2Attribute @ 149e72c50

TVector2<double> * __cdecl
UPCGMetadataAccessorHelpers::GetVector2Attribute
          (TVector2<double> *__return_storage_ptr__,FPCGPoint *param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<UE::Math::TVector2<double>_>
            (__return_storage_ptr__,param_1->MetadataEntry,param_2,param_3);
  return __return_storage_ptr__;
}

// GetVector2AttributeByMetadataKey @ 149e72c80

TVector2<double> * __cdecl
UPCGMetadataAccessorHelpers::GetVector2AttributeByMetadataKey
          (TVector2<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<UE::Math::TVector2<double>_>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetVector4Attribute @ 149e72ca0

TVector4<double> * __cdecl
UPCGMetadataAccessorHelpers::GetVector4Attribute
          (TVector4<double> *__return_storage_ptr__,FPCGPoint *param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<UE::Math::TVector4<double>_>
            (__return_storage_ptr__,param_1->MetadataEntry,param_2,param_3);
  return __return_storage_ptr__;
}

// GetVector4AttributeByMetadataKey @ 149e72cd0

TVector4<double> * __cdecl
UPCGMetadataAccessorHelpers::GetVector4AttributeByMetadataKey
          (TVector4<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<UE::Math::TVector4<double>_>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetVectorAttribute @ 149e72cf0

TVector<double> * __cdecl
UPCGMetadataAccessorHelpers::GetVectorAttribute
          (TVector<double> *__return_storage_ptr__,FPCGPoint *param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<UE::Math::TVector<double>_>
            (__return_storage_ptr__,param_1->MetadataEntry,param_2,param_3);
  return __return_storage_ptr__;
}

// GetVectorAttributeByMetadataKey @ 149e72d20

TVector<double> * __cdecl
UPCGMetadataAccessorHelpers::GetVectorAttributeByMetadataKey
          (TVector<double> *__return_storage_ptr__,long64 param_1,UPCGMetadata *param_2,
          FName param_3)

{
  GetAttribute<UE::Math::TVector<double>_>(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// HasAttributeSet @ 149e72ec0

bool __cdecl
UPCGMetadataAccessorHelpers::HasAttributeSet(FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3)

{
  bool bVar1;
  
  bVar1 = HasAttributeSetByMetadataKey(param_1->MetadataEntry,param_2,param_3);
  return bVar1;
}

// HasAttributeSetByMetadataKey @ 149e72ee0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UPCGMetadataAccessorHelpers::HasAttributeSetByMetadataKey
          (long64 param_1,UPCGMetadata *param_2,FName param_3)

{
  int iVar1;
  FPCGMetadataAttributeBase *this;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FName local_res18 [2];
  FText local_48;
  FText local_38;
  FPCGAttributeIdentifier local_28;
  
  local_res18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return false;
  }
  if (param_1 != -1) {
    local_28.MetadataDomain = PCGMetadataDomainID::Default;
    local_28.Name = param_3;
    this = UPCGMetadata::GetConstAttribute(param_2,&local_28);
    if (this != (FPCGMetadataAttributeBase *)0x0) {
      iVar1 = FPCGMetadataAttributeBase::GetValueKey(this,param_1);
      return iVar1 != -1;
    }
    pFVar2 = FText::FromName(&local_38,local_res18);
    pFVar3 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_28,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar2 = FText::Format<FText>(&local_48,pFVar3,pFVar2);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar2);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  return false;
}

// InitializeMetadata @ 149e77600

void __cdecl
UPCGMetadataAccessorHelpers::InitializeMetadata(FPCGPoint *param_1,UPCGMetadata *param_2)

{
  long64 lVar1;
  
  if (param_2 != (UPCGMetadata *)0x0) {
    lVar1 = UPCGMetadata::AddEntry(param_2,-1);
    param_1->MetadataEntry = lVar1;
    return;
  }
  param_1->MetadataEntry = -1;
  return;
}

// InitializeMetadata @ 149e77650

void __cdecl
UPCGMetadataAccessorHelpers::InitializeMetadata
          (FPCGPoint *param_1,UPCGMetadata *param_2,FPCGPoint *param_3,UPCGMetadata *param_4)

{
  UPCGMetadata *pUVar1;
  long64 lVar2;
  
  if (param_2 == (UPCGMetadata *)0x0) {
    param_1->MetadataEntry = -1;
  }
  else {
    if (param_4 != (UPCGMetadata *)0x0) {
      for (pUVar1 = (param_2->Parent).field0_0x0.DebugPtr; pUVar1 != (UPCGMetadata *)0x0;
          pUVar1 = (pUVar1->Parent).field0_0x0.DebugPtr) {
        if (pUVar1 == param_4) goto LAB_149e776c7;
      }
      if (param_4 != (UPCGMetadata *)0x0) {
        lVar2 = UPCGMetadata::AddEntry(param_2,-1);
        param_1->MetadataEntry = lVar2;
        UPCGMetadata::SetAttributes(param_2,param_3->MetadataEntry,param_4,&param_1->MetadataEntry);
        return;
      }
    }
LAB_149e776c7:
    lVar2 = UPCGMetadata::AddEntry(param_2,param_3->MetadataEntry);
    param_1->MetadataEntry = lVar2;
  }
  return;
}

// InitializeMetadataWithParent @ 149e77710

void __cdecl
UPCGMetadataAccessorHelpers::InitializeMetadataWithParent
          (FPCGPoint *param_1,UPCGMetadata *param_2,FPCGPoint *param_3,UPCGMetadata *param_4)

{
  UPCGMetadata *pUVar1;
  long64 lVar2;
  
  if (param_2 == (UPCGMetadata *)0x0) {
    param_1->MetadataEntry = -1;
    return;
  }
  if (param_4 != (UPCGMetadata *)0x0) {
    for (pUVar1 = (param_2->Parent).field0_0x0.DebugPtr; pUVar1 != (UPCGMetadata *)0x0;
        pUVar1 = (pUVar1->Parent).field0_0x0.DebugPtr) {
      if (pUVar1 == param_4) goto LAB_149e77743;
    }
    if (param_4 == (UPCGMetadata *)0x0) {
LAB_149e77743:
      lVar2 = param_3->MetadataEntry;
      goto LAB_149e77753;
    }
  }
  lVar2 = -1;
LAB_149e77753:
  lVar2 = UPCGMetadata::AddEntry(param_2,lVar2);
  param_1->MetadataEntry = lVar2;
  return;
}

// SetAttributeFromPropertyByMetadataKey @ 149e8def0

bool __cdecl
UPCGMetadataAccessorHelpers::SetAttributeFromPropertyByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,UObject *param_4,FName param_5)

{
  FName FVar1;
  undefined7 uVar2;
  bool bVar3;
  FProperty *pFVar4;
  FPCGMetadataDomain *pFStack_40;
  FName local_38;
  long64 *plStack_30;
  undefined1 local_28 [24];
  long64 *plStack_10;
  
  if ((param_4 != (UObject *)0x0) &&
     (pFVar4 = FindFProperty<FProperty>(*(UStruct **)&param_4->field_0x10,param_5,Default),
     pFVar4 != (FProperty *)0x0)) {
    pFStack_40 = (FPCGMetadataDomain *)PCGMetadataDomainID::Default._0_8_;
    local_38 = PCGMetadataDomainID::Default.DebugName;
    pFStack_40 = UPCGMetadata::FindOrCreateMetadataDomain
                           (param_2,(FPCGMetadataDomainID *)&pFStack_40);
    if (pFStack_40 != (FPCGMetadataDomain *)0x0) {
      uVar2 = local_38._1_7_;
      local_38.ComparisonIndex.Value._0_1_ = 1;
      FVar1 = local_38;
      local_38.Number = SUB74(uVar2,3);
      local_28._16_4_ = local_38.ComparisonIndex.Value;
      local_28._20_4_ = local_38.Number;
      local_38 = FVar1;
      plStack_30 = param_1;
      local_28._0_8_ = param_3;
      local_28._8_8_ = pFStack_40;
      plStack_10 = param_1;
      bVar3 = PCGPropertyHelpers::
              GetPropertyValueWithCallback<UObject,_PCGMetadata::SetAttributeFromPropertyHelper<UObject>_::__l2::<lambda_1>_>
                        (param_4,pFVar4,(<lambda_1> *)local_28);
      return bVar3;
    }
  }
  return false;
}

// SetBoolAttribute @ 149e8f320

void __cdecl
UPCGMetadataAccessorHelpers::SetBoolAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,bool param_4)

{
  bool local_res20 [8];
  
  local_res20[0] = param_4;
  SetAttribute<bool>(&param_1->MetadataEntry,param_2,param_3,local_res20);
  return;
}

// SetBoolAttributeByMetadataKey @ 149e8f350

void __cdecl
UPCGMetadataAccessorHelpers::SetBoolAttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,bool param_4)

{
  bool local_res20 [8];
  
  local_res20[0] = param_4;
  SetAttribute<bool>(param_1,param_2,param_3,local_res20);
  return;
}

// SetDoubleAttribute @ 149e8f460

void __cdecl
UPCGMetadataAccessorHelpers::SetDoubleAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,double param_4)

{
  double local_res20;
  
  local_res20 = param_4;
  SetAttribute<double>(&param_1->MetadataEntry,param_2,param_3,&local_res20);
  return;
}

// SetDoubleAttributeByMetadataKey @ 149e8f490

void __cdecl
UPCGMetadataAccessorHelpers::SetDoubleAttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,double param_4)

{
  double local_res20;
  
  local_res20 = param_4;
  SetAttribute<double>(param_1,param_2,param_3,&local_res20);
  return;
}

// SetFloatAttribute @ 149e8f550

void __cdecl
UPCGMetadataAccessorHelpers::SetFloatAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,float param_4)

{
  float local_res20 [2];
  
  local_res20[0] = param_4;
  SetAttribute<float>(&param_1->MetadataEntry,param_2,param_3,local_res20);
  return;
}

// SetFloatAttributeByMetadataKey @ 149e8f580

void __cdecl
UPCGMetadataAccessorHelpers::SetFloatAttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,float param_4)

{
  float local_res20 [2];
  
  local_res20[0] = param_4;
  SetAttribute<float>(param_1,param_2,param_3,local_res20);
  return;
}

// SetInteger32Attribute @ 149e8f5a0

void __cdecl
UPCGMetadataAccessorHelpers::SetInteger32Attribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,int param_4)

{
  int local_res20 [2];
  
  local_res20[0] = param_4;
  SetAttribute<int>(&param_1->MetadataEntry,param_2,param_3,local_res20);
  return;
}

// SetInteger32AttributeByMetadataKey @ 149e8f5d0

void __cdecl
UPCGMetadataAccessorHelpers::SetInteger32AttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,int param_4)

{
  int local_res20 [2];
  
  local_res20[0] = param_4;
  SetAttribute<int>(param_1,param_2,param_3,local_res20);
  return;
}

// SetInteger64Attribute @ 149e8f5f0

void __cdecl
UPCGMetadataAccessorHelpers::SetInteger64Attribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,long64 param_4)

{
  long64 local_res20;
  
  local_res20 = param_4;
  SetAttribute<__int64>(&param_1->MetadataEntry,param_2,param_3,&local_res20);
  return;
}

// SetInteger64AttributeByMetadataKey @ 149e8f620

void __cdecl
UPCGMetadataAccessorHelpers::SetInteger64AttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,long64 param_4)

{
  long64 local_res20;
  
  local_res20 = param_4;
  SetAttribute<__int64>(param_1,param_2,param_3,&local_res20);
  return;
}

// SetNameAttribute @ 149e8f880

void __cdecl
UPCGMetadataAccessorHelpers::SetNameAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,FName *param_4)

{
  SetAttribute<FName>(&param_1->MetadataEntry,param_2,param_3,param_4);
  return;
}

// SetQuatAttribute @ 149e90040

void __cdecl
UPCGMetadataAccessorHelpers::SetQuatAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,TQuat<double> *param_4)

{
  SetAttribute<UE::Math::TQuat<double>_>(&param_1->MetadataEntry,param_2,param_3,param_4);
  return;
}

// SetQuatAttributeByMetadataKey @ 149e90060

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetQuatAttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TQuat<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName aFStackX_18 [2];
  FText FStack_a8;
  FText FStack_98;
  FName FStack_88;
  FPCGMetadataDomainID FStack_80;
  FString FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FText FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&FStack_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(FStack_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      FStack_88 = aFStackX_18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&FStack_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (FStack_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(FStack_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,FStack_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
          if (*(short *)&this->field_0x70 == 7) {
            FPCGMetadataAttribute<UE::Math::TQuat<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&FStack_98,7);
          pFVar5 = FText::FromString(&FStack_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&FStack_68,*(ushort *)&this->field_0x70);
          pFVar7 = FText::FromString(&FStack_28,pFVar6);
          pFVar8 = FText::FromName(&FStack_58,aFStackX_18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&FStack_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&FStack_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
          }
          if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
          }
          if (FStack_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(FStack_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&FStack_48,aFStackX_18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&FStack_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&FStack_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      FStack_a8.TextData.Reference = FStack_98.TextData.Reference;
    }
    if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetRotatorAttribute @ 149ec0af0

void __cdecl
UPCGMetadataAccessorHelpers::SetRotatorAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,TRotator<double> *param_4)

{
  SetAttribute<UE::Math::TRotator<double>_>(&param_1->MetadataEntry,param_2,param_3,param_4);
  return;
}

// SetRotatorAttributeByMetadataKey @ 149ec0b10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetRotatorAttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TRotator<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName aFStackX_18 [2];
  FText FStack_a8;
  FText FStack_98;
  FName FStack_88;
  FPCGMetadataDomainID FStack_80;
  FString FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FText FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&FStack_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(FStack_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      FStack_88 = aFStackX_18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&FStack_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (FStack_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(FStack_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,FStack_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
          if ((short)this->_padding_ == 0xb) {
            FPCGMetadataAttribute<UE::Math::TRotator<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&FStack_98,0xb);
          pFVar5 = FText::FromString(&FStack_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&FStack_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&FStack_28,pFVar6);
          pFVar8 = FText::FromName(&FStack_58,aFStackX_18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&FStack_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&FStack_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
          }
          if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
          }
          if (FStack_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(FStack_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&FStack_48,aFStackX_18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&FStack_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&FStack_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      FStack_a8.TextData.Reference = FStack_98.TextData.Reference;
    }
    if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetSoftClassPathAttribute @ 149ec0b20

void __cdecl
UPCGMetadataAccessorHelpers::SetSoftClassPathAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,FSoftClassPath *param_4)

{
  SetAttribute<FSoftClassPath>(&param_1->MetadataEntry,param_2,param_3,param_4);
  return;
}

// SetSoftClassPathAttributeByMetadataKey @ 149ec0b40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetSoftClassPathAttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,FSoftClassPath *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<FSoftClassPath> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName aFStackX_18 [2];
  FText FStack_a8;
  FText FStack_98;
  FName FStack_88;
  FPCGMetadataDomainID FStack_80;
  FString FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FText FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&FStack_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(FStack_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      FStack_88 = aFStackX_18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&FStack_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (FStack_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(FStack_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<FSoftClassPath> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,FStack_88);
        if (this != (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
          if ((short)this->_padding_ == 0xe) {
            FPCGMetadataAttribute<FSoftClassPath>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&FStack_98,0xe);
          pFVar5 = FText::FromString(&FStack_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&FStack_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&FStack_28,pFVar6);
          pFVar8 = FText::FromName(&FStack_58,aFStackX_18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&FStack_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&FStack_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
          }
          if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
          }
          if (FStack_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(FStack_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&FStack_48,aFStackX_18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&FStack_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&FStack_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      FStack_a8.TextData.Reference = FStack_98.TextData.Reference;
    }
    if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetSoftObjectPathAttribute @ 149ec0b50

void __cdecl
UPCGMetadataAccessorHelpers::SetSoftObjectPathAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,FSoftObjectPath *param_4)

{
  SetAttribute<FSoftObjectPath>(&param_1->MetadataEntry,param_2,param_3,param_4);
  return;
}

// SetSoftObjectPathAttributeByMetadataKey @ 149ec0b70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetSoftObjectPathAttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,FSoftObjectPath *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<FSoftObjectPath> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName aFStackX_18 [2];
  FText FStack_a8;
  FText FStack_98;
  FName FStack_88;
  FPCGMetadataDomainID FStack_80;
  FString FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FText FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&FStack_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(FStack_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      FStack_88 = aFStackX_18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&FStack_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (FStack_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(FStack_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<FSoftObjectPath> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,FStack_88);
        if (this != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
          if ((short)this->_padding_ == 0xd) {
            FPCGMetadataAttribute<FSoftObjectPath>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&FStack_98,0xd);
          pFVar5 = FText::FromString(&FStack_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&FStack_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&FStack_28,pFVar6);
          pFVar8 = FText::FromName(&FStack_58,aFStackX_18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&FStack_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&FStack_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
          }
          if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
          }
          if (FStack_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(FStack_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&FStack_48,aFStackX_18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&FStack_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&FStack_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      FStack_a8.TextData.Reference = FStack_98.TextData.Reference;
    }
    if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetStringAttribute @ 149ec0b80

void __cdecl
UPCGMetadataAccessorHelpers::SetStringAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,FString *param_4)

{
  SetAttribute<FString>(&param_1->MetadataEntry,param_2,param_3,param_4);
  return;
}

// SetStringAttributeByMetadataKey @ 149ec0ba0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetStringAttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,FString *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<FString> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName aFStackX_18 [2];
  FText FStack_a8;
  FText FStack_98;
  FName FStack_88;
  FPCGMetadataDomainID FStack_80;
  FString FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FText FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&FStack_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(FStack_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      FStack_88 = aFStackX_18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&FStack_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (FStack_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(FStack_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<FString> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,FStack_88);
        if (this != (FPCGMetadataAttribute<FString> *)0x0) {
          if ((short)this->_padding_ == 9) {
            FPCGMetadataAttribute<FString>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&FStack_98,9);
          pFVar5 = FText::FromString(&FStack_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&FStack_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&FStack_28,pFVar6);
          pFVar8 = FText::FromName(&FStack_58,aFStackX_18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&FStack_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&FStack_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
          }
          if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
          }
          if (FStack_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(FStack_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&FStack_48,aFStackX_18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&FStack_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&FStack_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      FStack_a8.TextData.Reference = FStack_98.TextData.Reference;
    }
    if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetTransformAttribute @ 149ec0bb0

void __cdecl
UPCGMetadataAccessorHelpers::SetTransformAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,TTransform<double> *param_4)

{
  SetAttribute<UE::Math::TTransform<double>_>(&param_1->MetadataEntry,param_2,param_3,param_4);
  return;
}

// SetTransformAttributeByMetadataKey @ 149ec0bd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetTransformAttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TTransform<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName aFStackX_18 [2];
  FText FStack_a8;
  FText FStack_98;
  FName FStack_88;
  FPCGMetadataDomainID FStack_80;
  FString FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FText FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&FStack_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(FStack_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      FStack_88 = aFStackX_18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&FStack_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (FStack_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(FStack_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,FStack_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
          if (*(short *)&this->field_0x70 == 8) {
            FPCGMetadataAttribute<UE::Math::TTransform<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&FStack_98,8);
          pFVar5 = FText::FromString(&FStack_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&FStack_68,*(ushort *)&this->field_0x70);
          pFVar7 = FText::FromString(&FStack_28,pFVar6);
          pFVar8 = FText::FromName(&FStack_58,aFStackX_18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&FStack_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&FStack_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
          }
          if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
          }
          if (FStack_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(FStack_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&FStack_48,aFStackX_18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&FStack_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&FStack_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      FStack_a8.TextData.Reference = FStack_98.TextData.Reference;
    }
    if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetVector2Attribute @ 149ec1300

void __cdecl
UPCGMetadataAccessorHelpers::SetVector2Attribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,TVector2<double> *param_4)

{
  SetAttribute<UE::Math::TVector2<double>_>(&param_1->MetadataEntry,param_2,param_3,param_4);
  return;
}

// SetVector2AttributeByMetadataKey @ 149ec1320

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetVector2AttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TVector2<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName aFStackX_18 [2];
  FText FStack_a8;
  FText FStack_98;
  FName FStack_88;
  FPCGMetadataDomainID FStack_80;
  FString FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FText FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&FStack_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(FStack_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      FStack_88 = aFStackX_18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&FStack_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (FStack_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(FStack_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,FStack_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
          if ((short)this->_padding_ == 4) {
            FPCGMetadataAttribute<UE::Math::TVector2<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&FStack_98,4);
          pFVar5 = FText::FromString(&FStack_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&FStack_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&FStack_28,pFVar6);
          pFVar8 = FText::FromName(&FStack_58,aFStackX_18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&FStack_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&FStack_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
          }
          if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
          }
          if (FStack_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(FStack_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&FStack_48,aFStackX_18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&FStack_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&FStack_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      FStack_a8.TextData.Reference = FStack_98.TextData.Reference;
    }
    if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetVector4Attribute @ 149ec1330

void __cdecl
UPCGMetadataAccessorHelpers::SetVector4Attribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,TVector4<double> *param_4)

{
  SetAttribute<UE::Math::TVector4<double>_>(&param_1->MetadataEntry,param_2,param_3,param_4);
  return;
}

// SetVector4AttributeByMetadataKey @ 149ec1350

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetVector4AttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TVector4<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName aFStackX_18 [2];
  FText FStack_a8;
  FText FStack_98;
  FName FStack_88;
  FPCGMetadataDomainID FStack_80;
  FString FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FText FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&FStack_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(FStack_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      FStack_88 = aFStackX_18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&FStack_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (FStack_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(FStack_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,FStack_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
          if (*(short *)&this->field_0x70 == 6) {
            FPCGMetadataAttribute<UE::Math::TVector4<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&FStack_98,6);
          pFVar5 = FText::FromString(&FStack_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&FStack_68,*(ushort *)&this->field_0x70);
          pFVar7 = FText::FromString(&FStack_28,pFVar6);
          pFVar8 = FText::FromName(&FStack_58,aFStackX_18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&FStack_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&FStack_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
          }
          if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
          }
          if (FStack_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(FStack_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&FStack_48,aFStackX_18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&FStack_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&FStack_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      FStack_a8.TextData.Reference = FStack_98.TextData.Reference;
    }
    if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetVectorAttribute @ 149ec1360

void __cdecl
UPCGMetadataAccessorHelpers::SetVectorAttribute
          (FPCGPoint *param_1,UPCGMetadata *param_2,FName param_3,TVector<double> *param_4)

{
  SetAttribute<UE::Math::TVector<double>_>(&param_1->MetadataEntry,param_2,param_3,param_4);
  return;
}

// SetVectorAttributeByMetadataKey @ 149ec1380

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::SetVectorAttributeByMetadataKey
          (long64 *param_1,UPCGMetadata *param_2,FName param_3,TVector<double> *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  FPCGMetadataDomain *pFVar3;
  long64 lVar4;
  FText *pFVar5;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName aFStackX_18 [2];
  FText FStack_a8;
  FText FStack_98;
  FName FStack_88;
  FPCGMetadataDomainID FStack_80;
  FString FStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FText FStack_28;
  
  aFStackX_18[0] = param_3;
  if (param_2 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&PCGMetadataDomainID::Default),
       pFVar3 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&FStack_a8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(FStack_a8.TextData.Reference);
        }
      }
    }
    else {
      lVar1 = *param_1;
      if (lVar1 == -1) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,-1);
        *param_1 = lVar4;
      }
      else if (lVar1 < pFVar3->ItemKeyOffset) {
        lVar4 = FPCGMetadataDomain::AddEntry(pFVar3,lVar1);
        *param_1 = lVar4;
      }
    }
    if (*param_1 == -1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&FStack_a8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
    }
    else {
      auVar2._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar2[0] = PCGMetadataDomainID::Default.Flag;
      FStack_80._0_8_ = auVar2._0_8_;
      FStack_88 = aFStackX_18[0];
      FStack_80.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar3 = UPCGMetadata::FindOrCreateMetadataDomain(param_2,&FStack_80),
         pFVar3 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_80.DebugName,(FString *)&FStack_98);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (FStack_98.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(FStack_98.TextData.Reference);
          }
        }
      }
      else {
        this = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
               FPCGMetadataDomain::GetMutableAttribute(pFVar3,FStack_88);
        if (this != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
          if ((short)this->_padding_ == 5) {
            FPCGMetadataAttribute<UE::Math::TVector<double>_>::SetValue(this,*param_1,param_4);
            return;
          }
          pFVar6 = PCG::Private::GetTypeName((FString *)&FStack_98,5);
          pFVar5 = FText::FromString(&FStack_38,pFVar6);
          pFVar6 = PCG::Private::GetTypeName(&FStack_68,(ushort)this->_padding_);
          pFVar7 = FText::FromString(&FStack_28,pFVar6);
          pFVar8 = FText::FromName(&FStack_58,aFStackX_18);
          pFVar9 = FTextFormat::FTextFormat
                             ((FTextFormat *)&FStack_48,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar5 = FText::Format<FText,FText,FText>(&FStack_a8,pFVar9,pFVar8,pFVar7,pFVar5);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
          if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
          }
          if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
          }
          if (FStack_98.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(FStack_98.TextData.Reference);
          return;
        }
      }
      pFVar5 = FText::FromName(&FStack_48,aFStackX_18);
      pFVar9 = FTextFormat::FTextFormat
                         ((FTextFormat *)&FStack_58,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&FStack_98,pFVar9,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      FStack_a8.TextData.Reference = FStack_98.TextData.Reference;
    }
    if (FStack_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_a8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// StaticRegisterNativesUPCGMetadataAccessorHelpers @ 149ec1e50

void __cdecl UPCGMetadataAccessorHelpers::StaticRegisterNativesUPCGMetadataAccessorHelpers(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x3f;
  local_18.DataPtr = Z_Construct_UClass_UPCGMetadataAccessorHelpers_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCopyPoint @ 149ec7040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execCopyPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UPCGMetadata *pUVar3;
  UPCGMetadata *this;
  UPCGMetadata *pUVar4;
  double dVar5;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar6;
  FPCGMetadataDomain *pFVar7;
  FPCGMetadataDomain *pFVar8;
  double *pdVar9;
  double *pdVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_238 [32];
  int local_218 [2];
  UPCGMetadata *local_210;
  UPCGMetadata *local_208 [2];
  FString local_1f8;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  pFVar8 = (FPCGMetadataDomain *)0x0;
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
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
                             0x20) ^ uVar13,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_180 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar13,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar12);
  local_168 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
  dStack_160 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_148 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_140 = _UNK_150689688;
  local_138 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_130 = _UNK_150689688;
  local_170 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar13,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
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
  local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_b8 = 0x3f800000;
  local_58 = 0x3f000000;
  pdVar9 = &local_1e8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar9 = (double *)param_2->MostRecentPropertyAddress;
  }
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
  local_b0 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar13,
                      UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar12);
  local_a8 = CONCAT44(uStack_8c ^ uVar13,uStack_90 ^ uVar12);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
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
  local_218[0] = 0;
  pdVar10 = &local_118;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar10 = (double *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_218,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_218);
  }
  bVar11 = local_218[0] == 0;
  local_208[0] = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_208,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_208);
  }
  local_210 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  pUVar4 = local_208[0];
  this = local_210;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar5 = pdVar9[1];
  *pdVar10 = *pdVar9;
  pdVar10[1] = dVar5;
  dVar5 = pdVar9[3];
  pdVar10[2] = pdVar9[2];
  pdVar10[3] = dVar5;
  dVar5 = pdVar9[5];
  pdVar10[4] = pdVar9[4];
  pdVar10[5] = dVar5;
  dVar5 = pdVar9[7];
  pdVar10[6] = pdVar9[6];
  pdVar10[7] = dVar5;
  dVar5 = pdVar9[9];
  pdVar10[8] = pdVar9[8];
  pdVar10[9] = dVar5;
  dVar5 = pdVar9[0xb];
  pdVar10[10] = pdVar9[10];
  pdVar10[0xb] = dVar5;
  dVar5 = pdVar9[0xd];
  pdVar10[0xc] = pdVar9[0xc];
  pdVar10[0xd] = dVar5;
  dVar5 = pdVar9[0xf];
  pdVar10[0xe] = pdVar9[0xe];
  pdVar10[0xf] = dVar5;
  dVar5 = pdVar9[0x11];
  pdVar10[0x10] = pdVar9[0x10];
  pdVar10[0x11] = dVar5;
  dVar5 = pdVar9[0x13];
  pdVar10[0x12] = pdVar9[0x12];
  pdVar10[0x13] = dVar5;
  dVar5 = pdVar9[0x15];
  pdVar10[0x14] = pdVar9[0x14];
  pdVar10[0x15] = dVar5;
  dVar5 = pdVar9[0x17];
  pdVar10[0x16] = pdVar9[0x16];
  pdVar10[0x17] = dVar5;
  dVar5 = pdVar9[0x19];
  pdVar10[0x18] = pdVar9[0x18];
  pdVar10[0x19] = dVar5;
  if ((bVar11) || (local_210 == (UPCGMetadata *)0x0)) {
    pdVar10[0x19] = -NAN;
  }
  else {
    if (local_208[0] != (UPCGMetadata *)0x0) {
      for (pUVar3 = (local_210->Parent).field0_0x0.DebugPtr; pUVar3 != (UPCGMetadata *)0x0;
          pUVar3 = (pUVar3->Parent).field0_0x0.DebugPtr) {
        if (pUVar3 == local_208[0]) goto LAB_149ec7512;
      }
      if (local_208[0] != (UPCGMetadata *)0x0) {
        dVar5 = (double)UPCGMetadata::AddEntry(local_210,-1);
        pdVar10[0x19] = dVar5;
        dVar5 = pdVar9[0x19];
        pTVar6 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                         *)&pUVar4->MetadataDomains,&PCGMetadataDomainID::Default);
        pFVar7 = (FPCGMetadataDomain *)&pTVar6->field_0x10;
        if (pTVar6 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
          pFVar7 = pFVar8;
        }
        if (pFVar7 != (FPCGMetadataDomain *)0x0) {
          pFVar8 = (FPCGMetadataDomain *)pFVar7->_padding_;
        }
        if ((PCGMetadataDomainID::Default.Flag != Invalid) &&
           (pFVar7 = UPCGMetadata::FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
           pFVar7 != (FPCGMetadataDomain *)0x0)) {
          FPCGMetadataDomain::SetAttributes(pFVar7,(long64)dVar5,pFVar8,(long64 *)(pdVar10 + 0x19));
          return;
        }
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_1f8);
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe4130,
                   (FLogCategoryBase *)&LogPCG);
        if (local_1f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        return;
      }
    }
LAB_149ec7512:
    dVar5 = (double)UPCGMetadata::AddEntry(local_210,(long64)pdVar9[0x19]);
    pdVar10[0x19] = dVar5;
  }
  return;
}

// execGetBoolAttribute @ 149ec93e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetBoolAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  FPCGMetadataAttribute<bool> *this;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_1c8 [32];
  FName local_198;
  UPCGMetadata *local_190;
  FName local_188 [2];
  FPCGAttributeIdentifier local_178;
  FText local_158;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar11);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar11);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar11);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_190 = (UPCGMetadata *)0x0;
  pdVar10 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar10 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar2 = pdVar10[0x19];
  local_188[0] = local_198;
  if (local_190 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_178.Name = local_198;
    local_178.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<bool> *)UPCGMetadata::GetConstAttribute(local_190,&local_178);
    if (this == (FPCGMetadataAttribute<bool> *)0x0) {
      pFVar5 = FText::FromName(&local_138,local_188);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_148,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_158,pFVar6,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 10) {
        iVar4 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar2);
        bVar3 = FPCGMetadataAttribute<bool>::GetValue(this,iVar4);
        *(bool *)param_3 = bVar3;
        return;
      }
      pFVar7 = PCG::Private::GetTypeName((FString *)&local_138,10);
      pFVar5 = FText::FromString(&local_128,pFVar7);
      pFVar7 = PCG::Private::GetTypeName(&local_148,(ushort)this->_padding_);
      pFVar8 = FText::FromString(&local_118,pFVar7);
      pFVar9 = FText::FromName(&local_108,local_188);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_178,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar5 = FText::Format<FText,FText,FText>(&local_158,pFVar6,pFVar9,pFVar8,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_138.TextData.Reference);
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetBoolAttributeByMetadataKey @ 149ec9780

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetBoolAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  FPCGMetadataAttribute<bool> *this_00;
  FText *pFVar6;
  FTextFormat *pFVar7;
  int *piVar8;
  long64 lVar9;
  FString *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FName local_b8 [2];
  FPCGAttributeIdentifier local_a8;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar3 = local_res20;
  local_b8[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_a8.Name = local_res10;
    local_a8.MetadataDomain = PCGMetadataDomainID::Default;
    this_00 = (FPCGMetadataAttribute<bool> *)UPCGMetadata::GetConstAttribute(local_res18,&local_a8);
    if (this_00 == (FPCGMetadataAttribute<bool> *)0x0) {
      pFVar6 = FText::FromName(&local_68,local_b8);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_78,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_88,pFVar7,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this_00->_padding_ == 10) {
        if (lVar3 == -1) {
          bVar4 = FPCGMetadataAttribute<bool>::GetValue(this_00,-1);
          *(bool *)param_3 = bVar4;
          return;
        }
        AcquireSRWLockShared((PSRWLOCK)&this_00->_padding_);
        piVar8 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                 ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                         *)&this_00->_padding_,lVar3);
        if (piVar8 != (int *)0x0) {
          iVar5 = *piVar8;
          ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
          bVar4 = FPCGMetadataAttribute<bool>::GetValue(this_00,iVar5);
          *(bool *)param_3 = bVar4;
          return;
        }
        ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
        this = (FPCGMetadataAttributeBase *)this_00->_padding_;
        iVar5 = -1;
        if (this != (FPCGMetadataAttributeBase *)0x0) {
          lVar9 = FPCGMetadataDomain::GetParentKey((FPCGMetadataDomain *)this_00->_padding_,lVar3);
          iVar5 = FPCGMetadataAttributeBase::GetValueKey(this,lVar9);
        }
        bVar4 = FPCGMetadataAttribute<bool>::GetValue(this_00,iVar5);
        *(bool *)param_3 = bVar4;
        return;
      }
      pFVar10 = PCG::Private::GetTypeName((FString *)&local_68,10);
      pFVar6 = FText::FromString(&local_58,pFVar10);
      pFVar10 = PCG::Private::GetTypeName(&local_78,(ushort)this_00->_padding_);
      pFVar11 = FText::FromString(&local_48,pFVar10);
      pFVar12 = FText::FromName(&local_38,local_b8);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_a8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar6 = FText::Format<FText,FText,FText>(&local_88,pFVar7,pFVar12,pFVar11,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetDoubleAttribute @ 149ec9b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetDoubleAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FPCGMetadataAttribute<double> *this;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  double *pdVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStackY_1c8 [32];
  FName local_198;
  UPCGMetadata *local_190;
  FName local_188 [2];
  FPCGAttributeIdentifier local_178;
  FText local_158;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar10 = (uint)__xmm_80000000000000008000000000000000;
  uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar11,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar10);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar11,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar10);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar11,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar10);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_190 = (UPCGMetadata *)0x0;
  pdVar8 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar8 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar9 = pdVar8[0x19];
  local_188[0] = local_198;
  if (local_190 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_178.Name = local_198;
    local_178.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<double> *)UPCGMetadata::GetConstAttribute(local_190,&local_178);
    if (this == (FPCGMetadataAttribute<double> *)0x0) {
      pFVar3 = FText::FromName(&local_138,local_188);
      pFVar4 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_148,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar3 = FText::Format<FText>(&local_158,pFVar4,pFVar3);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 1) {
        iVar2 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar9);
        dVar9 = FPCGMetadataAttribute<double>::GetValue(this,iVar2);
        goto LAB_149ec9eb1;
      }
      pFVar5 = PCG::Private::GetTypeName((FString *)&local_138,1);
      pFVar3 = FText::FromString(&local_128,pFVar5);
      pFVar5 = PCG::Private::GetTypeName(&local_148,(ushort)this->_padding_);
      pFVar6 = FText::FromString(&local_118,pFVar5);
      pFVar7 = FText::FromName(&local_108,local_188);
      pFVar4 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_178,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar3 = FText::Format<FText,FText,FText>(&local_158,pFVar4,pFVar7,pFVar6,pFVar3);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar3);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_138.TextData.Reference);
      }
    }
  }
  dVar9 = 0.0;
LAB_149ec9eb1:
  *(double *)param_3 = dVar9;
  return;
}

// execGetDoubleAttributeByMetadataKey @ 149ec9ef0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetDoubleAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  double dVar3;
  longlong lVar4;
  int iVar5;
  FPCGMetadataAttribute<double> *this_00;
  FText *pFVar6;
  FTextFormat *pFVar7;
  int *piVar8;
  long64 lVar9;
  FString *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FName local_b8 [2];
  FPCGAttributeIdentifier local_a8;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar4 = local_res20;
  local_b8[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_a8.Name = local_res10;
    local_a8.MetadataDomain = PCGMetadataDomainID::Default;
    this_00 = (FPCGMetadataAttribute<double> *)
              UPCGMetadata::GetConstAttribute(local_res18,&local_a8);
    if (this_00 == (FPCGMetadataAttribute<double> *)0x0) {
      pFVar6 = FText::FromName(&local_68,local_b8);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_78,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_88,pFVar7,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this_00->_padding_ == 1) {
        if (lVar4 == -1) {
          dVar3 = FPCGMetadataAttribute<double>::GetValue(this_00,-1);
          uVar13 = SUB84(dVar3,0);
          uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&this_00->_padding_);
          piVar8 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                   ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                           *)&this_00->_padding_,lVar4);
          if (piVar8 == (int *)0x0) {
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
            this = (FPCGMetadataAttributeBase *)this_00->_padding_;
            iVar5 = -1;
            if (this != (FPCGMetadataAttributeBase *)0x0) {
              lVar9 = FPCGMetadataDomain::GetParentKey
                                ((FPCGMetadataDomain *)this_00->_padding_,lVar4);
              iVar5 = FPCGMetadataAttributeBase::GetValueKey(this,lVar9);
            }
            dVar3 = FPCGMetadataAttribute<double>::GetValue(this_00,iVar5);
            uVar13 = SUB84(dVar3,0);
            uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
          }
          else {
            iVar5 = *piVar8;
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
            dVar3 = FPCGMetadataAttribute<double>::GetValue(this_00,iVar5);
            uVar13 = SUB84(dVar3,0);
            uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
          }
        }
        goto LAB_149eca1ad;
      }
      pFVar10 = PCG::Private::GetTypeName((FString *)&local_68,1);
      pFVar6 = FText::FromString(&local_58,pFVar10);
      pFVar10 = PCG::Private::GetTypeName(&local_78,(ushort)this_00->_padding_);
      pFVar11 = FText::FromString(&local_48,pFVar10);
      pFVar12 = FText::FromName(&local_38,local_b8);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_a8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar6 = FText::Format<FText,FText,FText>(&local_88,pFVar7,pFVar12,pFVar11,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
  }
  uVar13 = 0;
  uVar14 = 0;
LAB_149eca1ad:
  *(ulonglong *)param_3 = CONCAT44(uVar14,uVar13);
  return;
}

// execGetFloatAttribute @ 149eca390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetFloatAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  int iVar3;
  FPCGMetadataAttribute<float> *this;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  double *pdVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_1c8 [32];
  FName local_198;
  UPCGMetadata *local_190;
  FName local_188 [2];
  FPCGAttributeIdentifier local_178;
  FText local_158;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar11);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar11);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar11);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_190 = (UPCGMetadata *)0x0;
  pdVar9 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar9 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar2 = pdVar9[0x19];
  local_188[0] = local_198;
  if (local_190 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_178.Name = local_198;
    local_178.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<float> *)UPCGMetadata::GetConstAttribute(local_190,&local_178);
    if (this == (FPCGMetadataAttribute<float> *)0x0) {
      pFVar4 = FText::FromName(&local_138,local_188);
      pFVar5 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_148,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar4 = FText::Format<FText>(&local_158,pFVar5,pFVar4);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar4);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 0) {
        iVar3 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar2);
        fVar10 = FPCGMetadataAttribute<float>::GetValue(this,iVar3);
        goto LAB_149eca6ee;
      }
      pFVar6 = PCG::Private::GetTypeName((FString *)&local_138,0);
      pFVar4 = FText::FromString(&local_128,pFVar6);
      pFVar6 = PCG::Private::GetTypeName(&local_148,(ushort)this->_padding_);
      pFVar7 = FText::FromString(&local_118,pFVar6);
      pFVar8 = FText::FromName(&local_108,local_188);
      pFVar5 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_178,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar4 = FText::Format<FText,FText,FText>(&local_158,pFVar5,pFVar8,pFVar7,pFVar4);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar4);
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_138.TextData.Reference);
      }
    }
  }
  fVar10 = 0.0;
LAB_149eca6ee:
  *(float *)param_3 = fVar10;
  return;
}

// execGetFloatAttributeByMetadataKey @ 149eca720

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetFloatAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  longlong lVar3;
  int iVar4;
  FPCGMetadataAttribute<float> *this_00;
  FText *pFVar5;
  FTextFormat *pFVar6;
  int *piVar7;
  long64 lVar8;
  FString *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  float fVar12;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FName local_b8 [2];
  FPCGAttributeIdentifier local_a8;
  FText local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar3 = local_res20;
  local_b8[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_a8.Name = local_res10;
    local_a8.MetadataDomain = PCGMetadataDomainID::Default;
    this_00 = (FPCGMetadataAttribute<float> *)UPCGMetadata::GetConstAttribute(local_res18,&local_a8)
    ;
    if (this_00 == (FPCGMetadataAttribute<float> *)0x0) {
      pFVar5 = FText::FromName(&local_68,local_b8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_78,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_88,pFVar6,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this_00->_padding_ == 0) {
        if (lVar3 == -1) {
          fVar12 = FPCGMetadataAttribute<float>::GetValue(this_00,-1);
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&this_00->_padding_);
          piVar7 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                   ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                           *)&this_00->_padding_,lVar3);
          if (piVar7 == (int *)0x0) {
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
            this = (FPCGMetadataAttributeBase *)this_00->_padding_;
            iVar4 = -1;
            if (this != (FPCGMetadataAttributeBase *)0x0) {
              lVar8 = FPCGMetadataDomain::GetParentKey
                                ((FPCGMetadataDomain *)this_00->_padding_,lVar3);
              iVar4 = FPCGMetadataAttributeBase::GetValueKey(this,lVar8);
            }
            fVar12 = FPCGMetadataAttribute<float>::GetValue(this_00,iVar4);
          }
          else {
            iVar4 = *piVar7;
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
            fVar12 = FPCGMetadataAttribute<float>::GetValue(this_00,iVar4);
          }
        }
        goto LAB_149eca9da;
      }
      pFVar9 = PCG::Private::GetTypeName((FString *)&local_68,0);
      pFVar5 = FText::FromString(&local_58,pFVar9);
      pFVar9 = PCG::Private::GetTypeName(&local_78,(ushort)this_00->_padding_);
      pFVar10 = FText::FromString(&local_48,pFVar9);
      pFVar11 = FText::FromName(&local_38,local_b8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_a8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar5 = FText::Format<FText,FText,FText>(&local_88,pFVar6,pFVar11,pFVar10,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
  }
  fVar12 = 0.0;
LAB_149eca9da:
  *(float *)param_3 = fVar12;
  return;
}

// execGetInteger32Attribute @ 149ecaa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetInteger32Attribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  int iVar3;
  FPCGMetadataAttribute<int> *this;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  double *pdVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStackY_1d8 [32];
  FName local_1a8;
  UPCGMetadata *local_1a0;
  FName local_198 [2];
  FPCGAttributeIdentifier local_188;
  FText local_168;
  FString local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_a8 = 0x3f800000;
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar10 = (uint)__xmm_80000000000000008000000000000000;
  uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar11,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar10);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar11,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar10);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar11,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar10);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_1a0 = (UPCGMetadata *)0x0;
  pdVar9 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar9 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar2 = pdVar9[0x19];
  local_198[0] = local_1a8;
  if (local_1a0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_188.Name = local_1a8;
    local_188.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<int> *)UPCGMetadata::GetConstAttribute(local_1a0,&local_188);
    if (this == (FPCGMetadataAttribute<int> *)0x0) {
      pFVar4 = FText::FromName(&local_148,local_198);
      pFVar5 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_158,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar4 = FText::Format<FText>(&local_168,pFVar5,pFVar4);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar4);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 2) {
        iVar3 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar2);
        iVar3 = FPCGMetadataAttribute<int>::GetValue(this,iVar3);
        *(int *)param_3 = iVar3;
        return;
      }
      pFVar6 = PCG::Private::GetTypeName((FString *)&local_148,2);
      pFVar4 = FText::FromString(&local_138,pFVar6);
      pFVar6 = PCG::Private::GetTypeName(&local_158,(ushort)this->_padding_);
      pFVar7 = FText::FromString(&local_128,pFVar6);
      pFVar8 = FText::FromName(&local_118,local_198);
      pFVar5 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_188,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar4 = FText::Format<FText,FText,FText>(&local_168,pFVar5,pFVar8,pFVar7,pFVar4);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar4);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_148.TextData.Reference);
      }
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetInteger32AttributeByMetadataKey @ 149ecada0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetInteger32AttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  longlong lVar3;
  int iVar4;
  FPCGMetadataAttribute<int> *this_00;
  FText *pFVar5;
  FTextFormat *pFVar6;
  int *piVar7;
  long64 lVar8;
  FString *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FName local_c8 [2];
  FPCGAttributeIdentifier local_b8;
  FText local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8[0] = local_res10;
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_b8.Name = local_res10;
    local_b8.MetadataDomain = PCGMetadataDomainID::Default;
    this_00 = (FPCGMetadataAttribute<int> *)UPCGMetadata::GetConstAttribute(local_res18,&local_b8);
    if (this_00 == (FPCGMetadataAttribute<int> *)0x0) {
      pFVar5 = FText::FromName(&local_78,local_c8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_88,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar6,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this_00->_padding_ == 2) {
        if (lVar3 == -1) {
          iVar4 = FPCGMetadataAttribute<int>::GetValue(this_00,-1);
          *(int *)param_3 = iVar4;
          return;
        }
        AcquireSRWLockShared((PSRWLOCK)&this_00->_padding_);
        piVar7 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                 ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                         *)&this_00->_padding_,lVar3);
        if (piVar7 != (int *)0x0) {
          iVar4 = *piVar7;
          ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
          iVar4 = FPCGMetadataAttribute<int>::GetValue(this_00,iVar4);
          *(int *)param_3 = iVar4;
          return;
        }
        ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
        this = (FPCGMetadataAttributeBase *)this_00->_padding_;
        iVar4 = -1;
        if (this != (FPCGMetadataAttributeBase *)0x0) {
          lVar8 = FPCGMetadataDomain::GetParentKey((FPCGMetadataDomain *)this_00->_padding_,lVar3);
          iVar4 = FPCGMetadataAttributeBase::GetValueKey(this,lVar8);
        }
        iVar4 = FPCGMetadataAttribute<int>::GetValue(this_00,iVar4);
        *(int *)param_3 = iVar4;
        return;
      }
      pFVar9 = PCG::Private::GetTypeName((FString *)&local_78,2);
      pFVar5 = FText::FromString(&local_68,pFVar9);
      pFVar9 = PCG::Private::GetTypeName(&local_88,(ushort)this_00->_padding_);
      pFVar10 = FText::FromString(&local_58,pFVar9);
      pFVar11 = FText::FromName(&local_48,local_c8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_b8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar5 = FText::Format<FText,FText,FText>(&local_98,pFVar6,pFVar11,pFVar10,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_78.TextData.Reference);
      }
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetInteger64Attribute @ 149ecb080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetInteger64Attribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  int iVar3;
  FPCGMetadataAttribute<__int64> *this;
  FText *pFVar4;
  FTextFormat *pFVar5;
  long64 lVar6;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_1d8 [32];
  FName local_1a8;
  UPCGMetadata *local_1a0;
  FName local_198 [2];
  FPCGAttributeIdentifier local_188;
  FText local_168;
  FString local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_a8 = 0x3f800000;
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar11);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar11);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar11);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_1a0 = (UPCGMetadata *)0x0;
  pdVar10 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar10 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar2 = pdVar10[0x19];
  local_198[0] = local_1a8;
  if (local_1a0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_188.Name = local_1a8;
    local_188.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<__int64> *)UPCGMetadata::GetConstAttribute(local_1a0,&local_188);
    if (this == (FPCGMetadataAttribute<__int64> *)0x0) {
      pFVar4 = FText::FromName(&local_148,local_198);
      pFVar5 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_158,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar4 = FText::Format<FText>(&local_168,pFVar5,pFVar4);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar4);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 3) {
        iVar3 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar2);
        lVar6 = FPCGMetadataAttribute<__int64>::GetValue(this,iVar3);
        *(long64 *)param_3 = lVar6;
        return;
      }
      pFVar7 = PCG::Private::GetTypeName((FString *)&local_148,3);
      pFVar4 = FText::FromString(&local_138,pFVar7);
      pFVar7 = PCG::Private::GetTypeName(&local_158,(ushort)this->_padding_);
      pFVar8 = FText::FromString(&local_128,pFVar7);
      pFVar9 = FText::FromName(&local_118,local_198);
      pFVar5 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_188,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar4 = FText::Format<FText,FText,FText>(&local_168,pFVar5,pFVar9,pFVar8,pFVar4);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar4);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_148.TextData.Reference);
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetInteger64AttributeByMetadataKey @ 149ecb420

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetInteger64AttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  longlong lVar3;
  int iVar4;
  FPCGMetadataAttribute<__int64> *this_00;
  FText *pFVar5;
  FTextFormat *pFVar6;
  long64 lVar7;
  int *piVar8;
  FString *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FName local_c8 [2];
  FPCGAttributeIdentifier local_b8;
  FText local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8[0] = local_res10;
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_b8.Name = local_res10;
    local_b8.MetadataDomain = PCGMetadataDomainID::Default;
    this_00 = (FPCGMetadataAttribute<__int64> *)
              UPCGMetadata::GetConstAttribute(local_res18,&local_b8);
    if (this_00 == (FPCGMetadataAttribute<__int64> *)0x0) {
      pFVar5 = FText::FromName(&local_78,local_c8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_88,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar6,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this_00->_padding_ == 3) {
        if (lVar3 == -1) {
          lVar7 = FPCGMetadataAttribute<__int64>::GetValue(this_00,-1);
          *(long64 *)param_3 = lVar7;
          return;
        }
        AcquireSRWLockShared((PSRWLOCK)&this_00->_padding_);
        piVar8 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                 ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                         *)&this_00->_padding_,lVar3);
        if (piVar8 != (int *)0x0) {
          iVar4 = *piVar8;
          ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
          lVar7 = FPCGMetadataAttribute<__int64>::GetValue(this_00,iVar4);
          *(long64 *)param_3 = lVar7;
          return;
        }
        ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
        this = (FPCGMetadataAttributeBase *)this_00->_padding_;
        iVar4 = -1;
        if (this != (FPCGMetadataAttributeBase *)0x0) {
          lVar7 = FPCGMetadataDomain::GetParentKey((FPCGMetadataDomain *)this_00->_padding_,lVar3);
          iVar4 = FPCGMetadataAttributeBase::GetValueKey(this,lVar7);
        }
        lVar7 = FPCGMetadataAttribute<__int64>::GetValue(this_00,iVar4);
        *(long64 *)param_3 = lVar7;
        return;
      }
      pFVar9 = PCG::Private::GetTypeName((FString *)&local_78,3);
      pFVar5 = FText::FromString(&local_68,pFVar9);
      pFVar9 = PCG::Private::GetTypeName(&local_88,(ushort)this_00->_padding_);
      pFVar10 = FText::FromString(&local_58,pFVar9);
      pFVar11 = FText::FromName(&local_48,local_c8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_b8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar5 = FText::Format<FText,FText,FText>(&local_98,pFVar6,pFVar11,pFVar10,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_78.TextData.Reference);
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetNameAttribute @ 149ecb830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetNameAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double dVar3;
  FPCGMetadataAttribute<FName> *this;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FString *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  double *pdVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStackY_1d8 [32];
  undefined8 local_1a8;
  FName local_1a0;
  UPCGMetadata *local_198;
  FName local_190;
  FPCGAttributeIdentifier local_188;
  FText local_168;
  FString local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_a8 = 0x3f800000;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar10 = (uint)__xmm_80000000000000008000000000000000;
  uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar11,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar10);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar11,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar10);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar11,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar10);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_198 = (UPCGMetadata *)0x0;
  pdVar9 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar9 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar3 = pdVar9[0x19];
  local_190 = local_1a0;
  if (local_198 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_188.Name = local_1a0;
    local_188.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<FName> *)UPCGMetadata::GetConstAttribute(local_198,&local_188);
    if (this == (FPCGMetadataAttribute<FName> *)0x0) {
      pFVar4 = FText::FromName(&local_148,&local_190);
      pFVar5 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_158,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar4 = FText::Format<FText>(&local_168,pFVar5,pFVar4);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar4);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 0xc) {
        FPCGMetadataAttributeBase::GetValueKey((FPCGMetadataAttributeBase *)this,(long64)dVar3);
        FPCGMetadataAttribute<FName>::GetValue(this,(int)&local_1a8);
        goto LAB_149ecbb8f;
      }
      pFVar6 = PCG::Private::GetTypeName((FString *)&local_148,0xc);
      pFVar4 = FText::FromString(&local_138,pFVar6);
      pFVar6 = PCG::Private::GetTypeName(&local_158,(ushort)this->_padding_);
      pFVar7 = FText::FromString(&local_128,pFVar6);
      pFVar8 = FText::FromName(&local_118,&local_190);
      pFVar5 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_188,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar4 = FText::Format<FText,FText,FText>(&local_168,pFVar5,pFVar8,pFVar7,pFVar4);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar4);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_148.TextData.Reference);
      }
    }
  }
  local_1a8 = 0;
LAB_149ecbb8f:
  *(undefined8 *)param_3 = local_1a8;
  return;
}

// execGetQuatAttribute @ 149ecbdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetQuatAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double dVar3;
  int iVar4;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_1f8 [32];
  FName local_1c8;
  UPCGMetadata *local_1c0;
  FName local_1b8 [2];
  FPCGAttributeIdentifier local_1a8;
  FText local_188;
  FString local_178;
  FText local_168;
  TQuat<double> local_158;
  FText local_138;
  FText local_128;
  FText local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_a8 = 0x3f800000;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar11);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar11);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar11);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_1c0 = (UPCGMetadata *)0x0;
  pdVar10 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar10 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar3 = pdVar10[0x19];
  local_1b8[0] = local_1c8;
  if (local_1c0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_1a8.Name = local_1c8;
    local_1a8.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
           UPCGMetadata::GetConstAttribute(local_1c0,&local_1a8);
    if (this == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
      pFVar5 = FText::FromName(&local_168,local_1b8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_178,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_188,pFVar6,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
    }
    else {
      if (*(short *)&this->field_0x70 == 7) {
        iVar4 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar3);
        FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue(this,&local_158,iVar4);
        goto LAB_149ecc15a;
      }
      pFVar7 = PCG::Private::GetTypeName((FString *)&local_168,7);
      pFVar5 = FText::FromString(&local_138,pFVar7);
      pFVar7 = PCG::Private::GetTypeName(&local_178,*(ushort *)&this->field_0x70);
      pFVar8 = FText::FromString(&local_128,pFVar7);
      pFVar9 = FText::FromName(&local_118,local_1b8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_1a8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar5 = FText::Format<FText,FText,FText>(&local_188,pFVar6,pFVar9,pFVar8,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_168.TextData.Reference);
      }
    }
  }
  local_158.Z._0_4_ = 0;
  local_158.Z._4_4_ = 0;
  local_158.W._0_4_ = 0;
  local_158.W._4_4_ = 0;
  local_158.X = 0.0;
  local_158.Y = 0.0;
LAB_149ecc15a:
  *(double *)param_3 = local_158.X;
  *(double *)((longlong)param_3 + 8) = local_158.Y;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_158.Z._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_158.Z._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_158.W._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_158.W._4_4_;
  return;
}

// execGetQuatAttributeByMetadataKey @ 149ecc1a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetQuatAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  longlong lVar3;
  int iVar4;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_00;
  FText *pFVar5;
  FTextFormat *pFVar6;
  int *piVar7;
  long64 lVar8;
  FString *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FName local_d8 [2];
  FPCGAttributeIdentifier local_c8;
  FText local_a8;
  FString local_98;
  FText local_88;
  TQuat<double> local_78;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar3 = local_res20;
  local_d8[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_c8.Name = local_res10;
    local_c8.MetadataDomain = PCGMetadataDomainID::Default;
    this_00 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
              UPCGMetadata::GetConstAttribute(local_res18,&local_c8);
    if (this_00 == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
      pFVar5 = FText::FromName(&local_88,local_d8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_98,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_a8,pFVar6,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
    }
    else {
      if (*(short *)&this_00->field_0x70 == 7) {
        if (lVar3 == -1) {
          iVar4 = -1;
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&this_00->field_0x58);
          piVar7 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                   ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                           *)&this_00->field_0x8,lVar3);
          if (piVar7 == (int *)0x0) {
            ReleaseSRWLockShared((PSRWLOCK)&this_00->field_0x58);
            this = *(FPCGMetadataAttributeBase **)&this_00->field_0x68;
            iVar4 = -1;
            if (this != (FPCGMetadataAttributeBase *)0x0) {
              lVar8 = FPCGMetadataDomain::GetParentKey
                                (*(FPCGMetadataDomain **)&this_00->field_0x60,lVar3);
              iVar4 = FPCGMetadataAttributeBase::GetValueKey(this,lVar8);
            }
          }
          else {
            iVar4 = *piVar7;
            ReleaseSRWLockShared((PSRWLOCK)&this_00->field_0x58);
          }
        }
        FPCGMetadataAttribute<UE::Math::TQuat<double>_>::GetValue(this_00,&local_78,iVar4);
        goto LAB_149ecc44e;
      }
      pFVar9 = PCG::Private::GetTypeName((FString *)&local_88,7);
      pFVar5 = FText::FromString(&local_58,pFVar9);
      pFVar9 = PCG::Private::GetTypeName(&local_98,*(ushort *)&this_00->field_0x70);
      pFVar10 = FText::FromString(&local_48,pFVar9);
      pFVar11 = FText::FromName(&local_38,local_d8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_c8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar6,pFVar11,pFVar10,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_88.TextData.Reference);
      }
    }
  }
  local_78.Z._0_4_ = 0;
  local_78.Z._4_4_ = 0;
  local_78.W._0_4_ = 0;
  local_78.W._4_4_ = 0;
  local_78.X._0_4_ = 0;
  local_78.X._4_4_ = 0;
  local_78.Y._0_4_ = 0;
  local_78.Y._4_4_ = 0;
LAB_149ecc44e:
  *(undefined4 *)param_3 = local_78.X._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_78.X._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_78.Y._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_78.Y._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_78.Z._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_78.Z._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_78.W._0_4_;
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_78.W._4_4_;
  return;
}

// execGetRotatorAttribute @ 149ecc480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetRotatorAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataDomainID FVar3;
  int iVar4;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  double *pdVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  UPCGMetadata *local_1b0;
  FName local_1a8;
  undefined1 local_1a0 [16];
  FName FStack_190;
  FText local_188;
  FString local_178;
  FText local_168;
  undefined1 local_158 [16];
  FName local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_a8 = 0x3f800000;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar12);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_1b0 = (UPCGMetadata *)0x0;
  pdVar10 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar10 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar11 = pdVar10[0x19];
  local_1a8 = local_1b8;
  if (local_1b0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_1a0._0_4_ = local_1b8.ComparisonIndex.Value;
    local_1a0._4_4_ = local_1b8.Number;
    stack0xfffffffffffffe68 = PCGMetadataDomainID::Default;
    FVar3 = stack0xfffffffffffffe68;
    local_1a0._8_8_ = PCGMetadataDomainID::Default._0_8_;
    local_158._0_4_ = local_1b8.ComparisonIndex.Value;
    local_158._4_4_ = local_1b8.Number;
    local_158._8_8_ = local_1a0._8_8_;
    local_148 = PCGMetadataDomainID::Default.DebugName;
    unique0x10000593 = FVar3;
    this = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)
           UPCGMetadata::GetConstAttribute(local_1b0,(FPCGAttributeIdentifier *)local_158);
    if (this == (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
      pFVar5 = FText::FromName(&local_168,&local_1a8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_178,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_188,pFVar6,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 0xb) {
        iVar4 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar11);
        FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
                  (this,(TRotator<double> *)local_1a0,iVar4);
        dVar11 = (double)local_1a0._8_8_;
        goto LAB_149ecc7e8;
      }
      pFVar7 = PCG::Private::GetTypeName((FString *)&local_168,0xb);
      pFVar5 = FText::FromString(&local_138,pFVar7);
      pFVar7 = PCG::Private::GetTypeName(&local_178,(ushort)this->_padding_);
      pFVar8 = FText::FromString(&local_128,pFVar7);
      pFVar9 = FText::FromName(&local_118,&local_1a8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)local_158,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar5 = FText::Format<FText,FText,FText>(&local_188,pFVar6,pFVar9,pFVar8,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_168.TextData.Reference);
      }
    }
  }
  local_1a0._0_4_ = 0;
  local_1a0._4_4_ = 0;
  FStack_190.ComparisonIndex.Value = 0;
  FStack_190.Number = 0;
  dVar11 = 0.0;
LAB_149ecc7e8:
  *(undefined8 *)param_3 = local_1a0._0_8_;
  *(double *)((longlong)param_3 + 8) = dVar11;
  *(FName *)((longlong)param_3 + 0x10) = FStack_190;
  return;
}

// execGetRotatorAttributeByMetadataKey @ 149ecc830

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetRotatorAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  longlong lVar3;
  FPCGMetadataDomainID FVar4;
  int iVar5;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this_00;
  FText *pFVar6;
  FTextFormat *pFVar7;
  int *piVar8;
  long64 lVar9;
  FString *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  undefined4 uVar13;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FName local_c8;
  undefined1 local_c0 [12];
  int iStack_b4;
  FName FStack_b0;
  FText local_a8;
  FString local_98;
  FText local_88;
  undefined1 local_78 [16];
  FName local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar3 = local_res20;
  local_c8 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_c0._0_4_ = local_res10.ComparisonIndex.Value;
    local_c0._4_4_ = local_res10.Number;
    stack0xffffffffffffff48 = PCGMetadataDomainID::Default;
    FVar4 = stack0xffffffffffffff48;
    stack0xffffffffffffff48 = PCGMetadataDomainID::Default._0_8_;
    local_78._0_4_ = local_res10.ComparisonIndex.Value;
    local_78._4_4_ = local_res10.Number;
    local_78._8_8_ = stack0xffffffffffffff48;
    local_68 = PCGMetadataDomainID::Default.DebugName;
    unique0x10000571 = FVar4;
    this_00 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)
              UPCGMetadata::GetConstAttribute(local_res18,(FPCGAttributeIdentifier *)local_78);
    if (this_00 == (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
      pFVar6 = FText::FromName(&local_88,&local_c8);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_98,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_a8,pFVar7,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this_00->_padding_ == 0xb) {
        if (lVar3 == -1) {
          iVar5 = -1;
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&this_00->_padding_);
          piVar8 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                   ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                           *)&this_00->_padding_,lVar3);
          if (piVar8 == (int *)0x0) {
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
            this = (FPCGMetadataAttributeBase *)this_00->_padding_;
            iVar5 = -1;
            if (this != (FPCGMetadataAttributeBase *)0x0) {
              lVar9 = FPCGMetadataDomain::GetParentKey
                                ((FPCGMetadataDomain *)this_00->_padding_,lVar3);
              iVar5 = FPCGMetadataAttributeBase::GetValueKey(this,lVar9);
            }
          }
          else {
            iVar5 = *piVar8;
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
          }
        }
        FPCGMetadataAttribute<UE::Math::TRotator<double>_>::GetValue
                  (this_00,(TRotator<double> *)local_c0,iVar5);
        uVar13 = local_c0._8_4_;
        iVar5 = iStack_b4;
        goto LAB_149eccadd;
      }
      pFVar10 = PCG::Private::GetTypeName((FString *)&local_88,0xb);
      pFVar6 = FText::FromString(&local_58,pFVar10);
      pFVar10 = PCG::Private::GetTypeName(&local_98,(ushort)this_00->_padding_);
      pFVar11 = FText::FromString(&local_48,pFVar10);
      pFVar12 = FText::FromName(&local_38,&local_c8);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)local_78,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar6 = FText::Format<FText,FText,FText>(&local_a8,pFVar7,pFVar12,pFVar11,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_88.TextData.Reference);
      }
    }
  }
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  FStack_b0.ComparisonIndex.Value = 0;
  FStack_b0.Number = 0;
  uVar13 = 0;
  iVar5 = 0;
LAB_149eccadd:
  *(undefined4 *)param_3 = local_c0._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_c0._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = uVar13;
  *(int *)((longlong)param_3 + 0xc) = iVar5;
  *(FName *)((longlong)param_3 + 0x10) = FStack_b0;
  return;
}

// execGetSoftClassPathAttribute @ 149eccbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetSoftClassPathAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  double dVar4;
  int iVar5;
  FPCGMetadataAttribute<FSoftClassPath> *this;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8 [16];
  void *local_1b8;
  undefined8 local_1b0;
  FName local_1a8;
  UPCGMetadata *local_1a0;
  FName local_198 [2];
  FPCGAttributeIdentifier local_188;
  FText local_168;
  FString local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  local_a8 = 0x3f800000;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar12);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_1a0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar4 = pdVar11[0x19];
  local_198[0] = local_1a8;
  if (local_1a0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_188.Name = local_1a8;
    local_188.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<FSoftClassPath> *)
           UPCGMetadata::GetConstAttribute(local_1a0,&local_188);
    if (this == (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
      pFVar6 = FText::FromName(&local_148,local_198);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_158,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_168,pFVar7,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 0xe) {
        iVar5 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar4);
        FPCGMetadataAttribute<FSoftClassPath>::GetValue(this,(FSoftClassPath *)local_1c8,iVar5);
        goto LAB_149eccf67;
      }
      pFVar8 = PCG::Private::GetTypeName((FString *)&local_148,0xe);
      pFVar6 = FText::FromString(&local_138,pFVar8);
      pFVar8 = PCG::Private::GetTypeName(&local_158,(ushort)this->_padding_);
      pFVar9 = FText::FromString(&local_128,pFVar8);
      pFVar10 = FText::FromName(&local_118,local_198);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_188,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar6 = FText::Format<FText,FText,FText>(&local_168,pFVar7,pFVar10,pFVar9,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_148.TextData.Reference);
      }
    }
  }
  local_1b0 = 0;
  local_1b8 = (void *)0x0;
  local_1c8._8_8_ = 0;
  local_1c8._0_8_ = 0;
LAB_149eccf67:
  ppvVar1 = (void **)((longlong)param_3 + 0x10);
  *(undefined8 *)param_3 = local_1c8._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_1c8._8_8_;
  if (ppvVar1 != &local_1b8) {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free(*ppvVar1);
    }
    *ppvVar1 = local_1b8;
    *(undefined4 *)((longlong)param_3 + 0x18) = (undefined4)local_1b0;
    local_1b8 = (void *)0x0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = local_1b0._4_4_;
    local_1b0 = 0;
  }
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  return;
}

// execGetSoftClassPathAttributeByMetadataKey @ 149eccff0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetSoftClassPathAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  void **ppvVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FPCGMetadataAttributeBase *this;
  longlong lVar4;
  int iVar5;
  FPCGMetadataAttribute<FSoftClassPath> *this_00;
  FText *pFVar6;
  FTextFormat *pFVar7;
  int *piVar8;
  long64 lVar9;
  FString *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  undefined1 local_e8 [16];
  void *local_d8;
  undefined8 local_d0;
  FName local_c8 [2];
  FPCGAttributeIdentifier local_b8;
  FText local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8[0] = local_res10;
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_b8.Name = local_res10;
    local_b8.MetadataDomain = PCGMetadataDomainID::Default;
    this_00 = (FPCGMetadataAttribute<FSoftClassPath> *)
              UPCGMetadata::GetConstAttribute(local_res18,&local_b8);
    if (this_00 == (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
      pFVar6 = FText::FromName(&local_78,local_c8);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_88,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_98,pFVar7,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this_00->_padding_ == 0xe) {
        if (lVar4 == -1) {
          iVar5 = -1;
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&this_00->_padding_);
          piVar8 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                   ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                           *)&this_00->_padding_,lVar4);
          if (piVar8 == (int *)0x0) {
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
            this = (FPCGMetadataAttributeBase *)this_00->_padding_;
            iVar5 = -1;
            if (this != (FPCGMetadataAttributeBase *)0x0) {
              lVar9 = FPCGMetadataDomain::GetParentKey
                                ((FPCGMetadataDomain *)this_00->_padding_,lVar4);
              iVar5 = FPCGMetadataAttributeBase::GetValueKey(this,lVar9);
            }
          }
          else {
            iVar5 = *piVar8;
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
          }
        }
        FPCGMetadataAttribute<FSoftClassPath>::GetValue(this_00,(FSoftClassPath *)local_e8,iVar5);
        goto LAB_149ecd2ac;
      }
      pFVar10 = PCG::Private::GetTypeName((FString *)&local_78,0xe);
      pFVar6 = FText::FromString(&local_68,pFVar10);
      pFVar10 = PCG::Private::GetTypeName(&local_88,(ushort)this_00->_padding_);
      pFVar11 = FText::FromString(&local_58,pFVar10);
      pFVar12 = FText::FromName(&local_48,local_c8);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_b8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar6 = FText::Format<FText,FText,FText>(&local_98,pFVar7,pFVar12,pFVar11,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_78.TextData.Reference);
      }
    }
  }
  local_d0 = 0;
  local_d8 = (void *)0x0;
  local_e8._8_8_ = 0;
  local_e8._0_8_ = 0;
LAB_149ecd2ac:
  ppvVar1 = (void **)((longlong)param_3 + 0x10);
  *(undefined8 *)param_3 = local_e8._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_e8._8_8_;
  if (ppvVar1 != &local_d8) {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free(*ppvVar1);
    }
    *ppvVar1 = local_d8;
    *(undefined4 *)((longlong)param_3 + 0x18) = (undefined4)local_d0;
    local_d8 = (void *)0x0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = local_d0._4_4_;
    local_d0 = 0;
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  return;
}

// execGetSoftObjectPathAttribute @ 149ecd320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetSoftObjectPathAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  double dVar4;
  int iVar5;
  FPCGMetadataAttribute<FSoftObjectPath> *this;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_1f8 [32];
  FSoftObjectPath local_1c8;
  FName local_1a8;
  UPCGMetadata *local_1a0;
  FName local_198 [2];
  FPCGAttributeIdentifier local_188;
  FText local_168;
  FString local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  local_a8 = 0x3f800000;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar12);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_1a0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar4 = pdVar11[0x19];
  local_198[0] = local_1a8;
  if (local_1a0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_188.Name = local_1a8;
    local_188.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<FSoftObjectPath> *)
           UPCGMetadata::GetConstAttribute(local_1a0,&local_188);
    if (this == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
      pFVar6 = FText::FromName(&local_148,local_198);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_158,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_168,pFVar7,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 0xd) {
        iVar5 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar4);
        FPCGMetadataAttribute<FSoftObjectPath>::GetValue(this,&local_1c8,iVar5);
        goto LAB_149ecd697;
      }
      pFVar8 = PCG::Private::GetTypeName((FString *)&local_148,0xd);
      pFVar6 = FText::FromString(&local_138,pFVar8);
      pFVar8 = PCG::Private::GetTypeName(&local_158,(ushort)this->_padding_);
      pFVar9 = FText::FromString(&local_128,pFVar8);
      pFVar10 = FText::FromName(&local_118,local_198);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_188,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar6 = FText::Format<FText,FText,FText>(&local_168,pFVar7,pFVar10,pFVar9,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_148.TextData.Reference);
      }
    }
  }
  local_1c8.SubPathString.Data.ArrayNum = 0;
  local_1c8.SubPathString.Data.ArrayMax = 0;
  local_1c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_1c8.AssetPath.AssetName.Number = 0;
  local_1c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_1c8.AssetPath.PackageName.Number = 0;
LAB_149ecd697:
  puVar1 = (undefined8 *)((longlong)param_3 + 0x10);
  *(FName *)param_3 = local_1c8.AssetPath.PackageName;
  *(FName *)((longlong)param_3 + 8) = local_1c8.AssetPath.AssetName;
  if ((FUtf8String *)puVar1 != &local_1c8.SubPathString) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_1c8.SubPathString.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x18) = local_1c8.SubPathString.Data.ArrayNum;
    local_1c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0x1c) = local_1c8.SubPathString.Data.ArrayMax;
    local_1c8.SubPathString.Data.ArrayNum = 0;
    local_1c8.SubPathString.Data.ArrayMax = 0;
  }
  if (local_1c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSoftObjectPathAttributeByMetadataKey @ 149ecd720

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetSoftObjectPathAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FPCGMetadataAttributeBase *this;
  longlong lVar4;
  int iVar5;
  FPCGMetadataAttribute<FSoftObjectPath> *this_00;
  FText *pFVar6;
  FTextFormat *pFVar7;
  int *piVar8;
  long64 lVar9;
  FString *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FSoftObjectPath local_e8;
  FName local_c8 [2];
  FPCGAttributeIdentifier local_b8;
  FText local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8[0] = local_res10;
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_b8.Name = local_res10;
    local_b8.MetadataDomain = PCGMetadataDomainID::Default;
    this_00 = (FPCGMetadataAttribute<FSoftObjectPath> *)
              UPCGMetadata::GetConstAttribute(local_res18,&local_b8);
    if (this_00 == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
      pFVar6 = FText::FromName(&local_78,local_c8);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_88,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_98,pFVar7,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this_00->_padding_ == 0xd) {
        if (lVar4 == -1) {
          iVar5 = -1;
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&this_00->_padding_);
          piVar8 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                   ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                           *)&this_00->_padding_,lVar4);
          if (piVar8 == (int *)0x0) {
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
            this = (FPCGMetadataAttributeBase *)this_00->_padding_;
            iVar5 = -1;
            if (this != (FPCGMetadataAttributeBase *)0x0) {
              lVar9 = FPCGMetadataDomain::GetParentKey
                                ((FPCGMetadataDomain *)this_00->_padding_,lVar4);
              iVar5 = FPCGMetadataAttributeBase::GetValueKey(this,lVar9);
            }
          }
          else {
            iVar5 = *piVar8;
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
          }
        }
        FPCGMetadataAttribute<FSoftObjectPath>::GetValue(this_00,&local_e8,iVar5);
        goto LAB_149ecd9dc;
      }
      pFVar10 = PCG::Private::GetTypeName((FString *)&local_78,0xd);
      pFVar6 = FText::FromString(&local_68,pFVar10);
      pFVar10 = PCG::Private::GetTypeName(&local_88,(ushort)this_00->_padding_);
      pFVar11 = FText::FromString(&local_58,pFVar10);
      pFVar12 = FText::FromName(&local_48,local_c8);
      pFVar7 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_b8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar6 = FText::Format<FText,FText,FText>(&local_98,pFVar7,pFVar12,pFVar11,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_78.TextData.Reference);
      }
    }
  }
  local_e8.SubPathString.Data.ArrayNum = 0;
  local_e8.SubPathString.Data.ArrayMax = 0;
  local_e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_e8.AssetPath.AssetName.Number = 0;
  local_e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_e8.AssetPath.PackageName.Number = 0;
LAB_149ecd9dc:
  puVar1 = (undefined8 *)((longlong)param_3 + 0x10);
  *(FName *)param_3 = local_e8.AssetPath.PackageName;
  *(FName *)((longlong)param_3 + 8) = local_e8.AssetPath.AssetName;
  if ((FUtf8String *)puVar1 != &local_e8.SubPathString) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = local_e8.SubPathString.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 0x18) = local_e8.SubPathString.Data.ArrayNum;
    local_e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0x1c) = local_e8.SubPathString.Data.ArrayMax;
    local_e8.SubPathString.Data.ArrayNum = 0;
    local_e8.SubPathString.Data.ArrayMax = 0;
  }
  if (local_e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetStringAttribute @ 149ecda50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetStringAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  short sVar2;
  FProperty *pFVar3;
  double dVar4;
  int iVar5;
  FPCGMetadataAttribute<FSoftObjectPath> *this;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_1e8 [32];
  FString local_1b8;
  FName local_1a8;
  UPCGMetadata *local_1a0;
  FSoftObjectPath local_198;
  FName local_178;
  FText local_170;
  FString local_160;
  FText local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_a8 = 0x3f800000;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar12);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_1a0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar4 = pdVar11[0x19];
  local_178 = local_1a8;
  if (local_1a0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_198.AssetPath.PackageName = local_1a8;
    local_198._8_16_ = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<FSoftObjectPath> *)
           UPCGMetadata::GetConstAttribute(local_1a0,(FPCGAttributeIdentifier *)&local_198);
    if (this != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
      sVar2 = (short)this->_padding_;
      if (sVar2 == 9) {
        iVar5 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar4);
        FPCGMetadataAttribute<FString>::GetValue
                  ((FPCGMetadataAttribute<FString> *)this,&local_1b8,iVar5);
        goto LAB_149ecde25;
      }
      if (sVar2 == 0xd) {
        iVar5 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar4);
        FPCGMetadataAttribute<FSoftObjectPath>::GetValue(this,&local_198,iVar5);
      }
      else {
        if (sVar2 != 0xe) {
          pFVar8 = PCG::Private::GetTypeName((FString *)&local_150,9);
          pFVar6 = FText::FromString(&local_140,pFVar8);
          pFVar8 = PCG::Private::GetTypeName(&local_160,(ushort)this->_padding_);
          pFVar9 = FText::FromString(&local_130,pFVar8);
          pFVar10 = FText::FromName(&local_120,&local_178);
          pFVar7 = FTextFormat::FTextFormat
                             ((FTextFormat *)&local_198,
                              &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar6 = FText::Format<FText,FText,FText>(&local_170,pFVar7,pFVar10,pFVar9,pFVar6);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
          if (local_170.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
          }
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
          if (local_150.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_150.TextData.Reference);
          }
          goto LAB_149ecde1b;
        }
        iVar5 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar4);
        FPCGMetadataAttribute<FSoftClassPath>::GetValue
                  ((FPCGMetadataAttribute<FSoftClassPath> *)this,(FSoftClassPath *)&local_198,iVar5)
        ;
      }
      FSoftObjectPath::ToString(&local_198,&local_1b8);
      if ((FName)local_198.SubPathString.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_198.SubPathString.Data.AllocatorInstance.Data);
      }
      goto LAB_149ecde25;
    }
    pFVar6 = FText::FromName(&local_150,&local_178);
    pFVar7 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_160,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar6 = FText::Format<FText>(&local_170,pFVar7,pFVar6);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    if (local_170.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
    }
  }
LAB_149ecde1b:
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_149ecde25:
  if (param_3 != &local_1b8) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_1b8.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_1b8.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_1b8.Data.ArrayMax;
    local_1b8.Data.ArrayNum = 0;
    local_1b8.Data.ArrayMax = 0;
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetStringAttributeByMetadataKey @ 149ecdea0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetStringAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  short sVar2;
  FProperty *pFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  longlong lVar5;
  int iVar6;
  FPCGMetadataAttribute<FSoftObjectPath> *this;
  FText *pFVar7;
  FTextFormat *pFVar8;
  int *piVar9;
  long64 lVar10;
  FString *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FString local_d8;
  FSoftObjectPath local_c8;
  FName local_a8;
  FText local_a0;
  FString local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar5 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8 = local_res10;
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    goto LAB_149ece2d4;
  }
  local_c8.AssetPath.PackageName = local_res10;
  local_c8._8_16_ = PCGMetadataDomainID::Default;
  this = (FPCGMetadataAttribute<FSoftObjectPath> *)
         UPCGMetadata::GetConstAttribute(local_res18,(FPCGAttributeIdentifier *)&local_c8);
  if (this == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
    pFVar7 = FText::FromName(&local_80,&local_a8);
    pFVar8 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_90,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar7 = FText::Format<FText>(&local_a0,pFVar8,pFVar7);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    if (local_a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    }
LAB_149ece2c4:
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
  }
  else {
    sVar2 = (short)this->_padding_;
    if (sVar2 == 9) {
      if (lVar5 == -1) {
        FPCGMetadataAttribute<FString>::GetValue
                  ((FPCGMetadataAttribute<FString> *)this,&local_d8,-1);
      }
      else {
        AcquireSRWLockShared((PSRWLOCK)&this->_padding_);
        piVar9 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                 ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                         *)&this->_padding_,lVar5);
        if (piVar9 == (int *)0x0) {
          ReleaseSRWLockShared((PSRWLOCK)&this->_padding_);
          pFVar4 = (FPCGMetadataAttributeBase *)this->_padding_;
          iVar6 = -1;
          if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
            lVar10 = FPCGMetadataDomain::GetParentKey((FPCGMetadataDomain *)this->_padding_,lVar5);
            iVar6 = FPCGMetadataAttributeBase::GetValueKey(pFVar4,lVar10);
          }
          FPCGMetadataAttribute<FString>::GetValue
                    ((FPCGMetadataAttribute<FString> *)this,&local_d8,iVar6);
        }
        else {
          iVar6 = *piVar9;
          ReleaseSRWLockShared((PSRWLOCK)&this->_padding_);
          FPCGMetadataAttribute<FString>::GetValue
                    ((FPCGMetadataAttribute<FString> *)this,&local_d8,iVar6);
        }
      }
      goto LAB_149ece2d4;
    }
    if (sVar2 == 0xd) {
      if (lVar5 == -1) {
        FPCGMetadataAttribute<FSoftObjectPath>::GetValue(this,&local_c8,-1);
      }
      else {
        AcquireSRWLockShared((PSRWLOCK)&this->_padding_);
        piVar9 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                 ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                         *)&this->_padding_,lVar5);
        if (piVar9 == (int *)0x0) {
          ReleaseSRWLockShared((PSRWLOCK)&this->_padding_);
          pFVar4 = (FPCGMetadataAttributeBase *)this->_padding_;
          iVar6 = -1;
          if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
            lVar10 = FPCGMetadataDomain::GetParentKey((FPCGMetadataDomain *)this->_padding_,lVar5);
            iVar6 = FPCGMetadataAttributeBase::GetValueKey(pFVar4,lVar10);
          }
          FPCGMetadataAttribute<FSoftObjectPath>::GetValue(this,&local_c8,iVar6);
        }
        else {
          iVar6 = *piVar9;
          ReleaseSRWLockShared((PSRWLOCK)&this->_padding_);
          FPCGMetadataAttribute<FSoftObjectPath>::GetValue(this,&local_c8,iVar6);
        }
      }
    }
    else {
      if (sVar2 != 0xe) {
        pFVar11 = PCG::Private::GetTypeName((FString *)&local_80,9);
        pFVar7 = FText::FromString(&local_70,pFVar11);
        pFVar11 = PCG::Private::GetTypeName(&local_90,(ushort)this->_padding_);
        pFVar12 = FText::FromString(&local_60,pFVar11);
        pFVar13 = FText::FromName(&local_50,&local_a8);
        pFVar8 = FTextFormat::FTextFormat
                           ((FTextFormat *)&local_c8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                            Default);
        pFVar7 = FText::Format<FText,FText,FText>(&local_a0,pFVar8,pFVar13,pFVar12,pFVar7);
        UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
        if (local_a0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_80.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_80.TextData.Reference);
        }
        goto LAB_149ece2c4;
      }
      if (lVar5 == -1) {
        iVar6 = -1;
      }
      else {
        AcquireSRWLockShared((PSRWLOCK)&this->_padding_);
        piVar9 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                 ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                         *)&this->_padding_,lVar5);
        if (piVar9 == (int *)0x0) {
          ReleaseSRWLockShared((PSRWLOCK)&this->_padding_);
          pFVar4 = (FPCGMetadataAttributeBase *)this->_padding_;
          iVar6 = -1;
          if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
            lVar10 = FPCGMetadataDomain::GetParentKey((FPCGMetadataDomain *)this->_padding_,lVar5);
            iVar6 = FPCGMetadataAttributeBase::GetValueKey(pFVar4,lVar10);
          }
        }
        else {
          iVar6 = *piVar9;
          ReleaseSRWLockShared((PSRWLOCK)&this->_padding_);
        }
      }
      FPCGMetadataAttribute<FSoftClassPath>::GetValue
                ((FPCGMetadataAttribute<FSoftClassPath> *)this,(FSoftClassPath *)&local_c8,iVar6);
    }
    FSoftObjectPath::ToString(&local_c8,&local_d8);
    if ((FName)local_c8.SubPathString.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_c8.SubPathString.Data.AllocatorInstance.Data);
    }
  }
LAB_149ece2d4:
  if (param_3 != &local_d8) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_d8.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_d8.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetTransformAttribute @ 149ece350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetTransformAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FString *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  double *pdVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_228 [32];
  FName local_1f8;
  UPCGMetadata *local_1f0;
  FName local_1e8 [2];
  FPCGAttributeIdentifier local_1d8;
  FText local_1b8;
  FString local_1a8;
  FText local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_158 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_150 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_f8 = 0x3f800000;
  local_98 = 0x3f000000;
  local_90 = 0xffffffffffffffff;
  local_148 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_140 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_138._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_118._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_128 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_120 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_108 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_100 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_e8 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar16,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar15);
  local_f0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar16,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar15);
  local_d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_d0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_b8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_b0 = _UNK_150689688;
  local_a8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_a0 = _UNK_150689688;
  local_e0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar16,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar15);
  local_c8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_1f0 = (UPCGMetadata *)0x0;
  pdVar14 = &local_158;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar14 = (double *)param_2->MostRecentPropertyAddress;
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
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar2 = pdVar14[0x19];
  local_1e8[0] = local_1f8;
  if (local_1f0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_1d8.Name = local_1f8;
    local_1d8.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
           UPCGMetadata::GetConstAttribute(local_1f0,&local_1d8);
    if (this == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
      pFVar9 = FText::FromName(&local_198,local_1e8);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_1a8,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar9 = FText::Format<FText>(&local_1b8,pFVar10,pFVar9);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar9);
      if (local_1b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
      }
    }
    else {
      if (*(short *)&this->field_0x70 == 8) {
        iVar8 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar2);
        FPCGMetadataAttribute<UE::Math::TTransform<double>_>::GetValue(this,&local_88,iVar8);
        goto LAB_149ece710;
      }
      pFVar11 = PCG::Private::GetTypeName((FString *)&local_198,8);
      pFVar9 = FText::FromString(&local_188,pFVar11);
      pFVar11 = PCG::Private::GetTypeName(&local_1a8,*(ushort *)&this->field_0x70);
      pFVar12 = FText::FromString(&local_178,pFVar11);
      pFVar13 = FText::FromName(&local_168,local_1e8);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_1d8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                           Default);
      pFVar9 = FText::Format<FText,FText,FText>(&local_1b8,pFVar10,pFVar13,pFVar12,pFVar9);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar9);
      if (local_1b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if (local_198.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_198.TextData.Reference);
      }
    }
  }
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
LAB_149ece710:
  auVar4._8_4_ = SUB84(local_88.Rotation.XY.m128d_f64[1],0);
  auVar4._0_8_ = local_88.Rotation.XY.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)local_88.Rotation.XY.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar4;
  auVar5._8_4_ = SUB84(local_88.Rotation.ZW.m128d_f64[1],0);
  auVar5._0_8_ = local_88.Rotation.ZW.m128d_f64[0];
  auVar5._12_4_ = (int)((ulonglong)local_88.Rotation.ZW.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x10) = auVar5;
  auVar6._8_4_ = SUB84(local_88.Translation.XY.m128d_f64[1],0);
  auVar6._0_8_ = local_88.Translation.XY.m128d_f64[0];
  auVar6._12_4_ = (int)((ulonglong)local_88.Translation.XY.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x20) = auVar6;
  auVar7._8_4_ = SUB84(local_88.Translation.ZW.m128d_f64[1],0);
  auVar7._0_8_ = local_88.Translation.ZW.m128d_f64[0];
  auVar7._12_4_ = (int)((ulonglong)local_88.Translation.ZW.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x30) = auVar7;
  auVar3._8_4_ = SUB84(local_88.Scale3D.XY.m128d_f64[1],0);
  auVar3._0_8_ = local_88.Scale3D.XY.m128d_f64[0];
  auVar3._12_4_ = (int)((ulonglong)local_88.Scale3D.XY.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x40) = auVar3;
  *(double *)((longlong)param_3 + 0x50) = local_88.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_88.Scale3D.ZW.m128d_f64[1];
  return;
}

// execGetTransformAttributeByMetadataKey @ 149ece760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetTransformAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  int iVar10;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this_00;
  FText *pFVar11;
  FTextFormat *pFVar12;
  int *piVar13;
  long64 lVar14;
  FString *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  undefined1 auStackY_168 [32];
  FName local_138;
  UPCGMetadata *local_130;
  longlong local_128;
  FName local_120;
  FPCGAttributeIdentifier local_118;
  FText local_f8;
  FString local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_128 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_130 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  lVar9 = local_128;
  local_120 = local_138;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_130 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_118.Name = local_138;
    local_118.MetadataDomain = PCGMetadataDomainID::Default;
    this_00 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
              UPCGMetadata::GetConstAttribute(local_130,&local_118);
    if (this_00 == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
      pFVar11 = FText::FromName(&local_d8,&local_120);
      pFVar12 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_e8,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar11 = FText::Format<FText>(&local_f8,pFVar12,pFVar11);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar11);
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
    }
    else {
      if (*(short *)&this_00->field_0x70 == 8) {
        if (lVar9 == -1) {
          iVar10 = -1;
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&this_00->field_0x58);
          piVar13 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                    ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                            *)&this_00->field_0x8,lVar9);
          if (piVar13 == (int *)0x0) {
            ReleaseSRWLockShared((PSRWLOCK)&this_00->field_0x58);
            this = *(FPCGMetadataAttributeBase **)&this_00->field_0x68;
            iVar10 = -1;
            if (this != (FPCGMetadataAttributeBase *)0x0) {
              lVar14 = FPCGMetadataDomain::GetParentKey
                                 (*(FPCGMetadataDomain **)&this_00->field_0x60,lVar9);
              iVar10 = FPCGMetadataAttributeBase::GetValueKey(this,lVar14);
            }
          }
          else {
            iVar10 = *piVar13;
            ReleaseSRWLockShared((PSRWLOCK)&this_00->field_0x58);
          }
        }
        FPCGMetadataAttribute<UE::Math::TTransform<double>_>::GetValue(this_00,&local_98,iVar10);
        goto LAB_149ecea74;
      }
      pFVar15 = PCG::Private::GetTypeName((FString *)&local_d8,8);
      pFVar11 = FText::FromString(&local_c8,pFVar15);
      pFVar15 = PCG::Private::GetTypeName(&local_e8,*(ushort *)&this_00->field_0x70);
      pFVar16 = FText::FromString(&local_b8,pFVar15);
      pFVar17 = FText::FromName(&local_a8,&local_120);
      pFVar12 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_118,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                           Default);
      pFVar11 = FText::Format<FText,FText,FText>(&local_f8,pFVar12,pFVar17,pFVar16,pFVar11);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar11);
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_d8.TextData.Reference);
      }
    }
  }
  local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_98.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_98.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
LAB_149ecea74:
  auVar5._8_4_ = SUB84(local_98.Rotation.XY.m128d_f64[1],0);
  auVar5._0_8_ = local_98.Rotation.XY.m128d_f64[0];
  auVar5._12_4_ = (int)((ulonglong)local_98.Rotation.XY.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar5;
  auVar6._8_4_ = SUB84(local_98.Rotation.ZW.m128d_f64[1],0);
  auVar6._0_8_ = local_98.Rotation.ZW.m128d_f64[0];
  auVar6._12_4_ = (int)((ulonglong)local_98.Rotation.ZW.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x10) = auVar6;
  auVar7._8_4_ = SUB84(local_98.Translation.XY.m128d_f64[1],0);
  auVar7._0_8_ = local_98.Translation.XY.m128d_f64[0];
  auVar7._12_4_ = (int)((ulonglong)local_98.Translation.XY.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x20) = auVar7;
  auVar8._8_4_ = SUB84(local_98.Translation.ZW.m128d_f64[1],0);
  auVar8._0_8_ = local_98.Translation.ZW.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)local_98.Translation.ZW.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x30) = auVar8;
  auVar4._8_4_ = SUB84(local_98.Scale3D.XY.m128d_f64[1],0);
  auVar4._0_8_ = local_98.Scale3D.XY.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)local_98.Scale3D.XY.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x40) = auVar4;
  auVar3._8_4_ = SUB84(local_98.Scale3D.ZW.m128d_f64[1],0);
  auVar3._0_8_ = local_98.Scale3D.ZW.m128d_f64[0];
  auVar3._12_4_ = (int)((ulonglong)local_98.Scale3D.ZW.m128d_f64[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x50) = auVar3;
  return;
}

// execGetVector2Attribute @ 149eceac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetVector2Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double dVar3;
  int iVar4;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  UPCGMetadata *local_1b0;
  FName local_1a8 [2];
  FPCGAttributeIdentifier local_198;
  FText local_178;
  FString local_168;
  FText local_158;
  TVector2<double>_u_0 local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_a8 = 0x3f800000;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar11);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar11);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar11);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_1b0 = (UPCGMetadata *)0x0;
  pdVar10 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar10 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar3 = pdVar10[0x19];
  local_1a8[0] = local_1b8;
  if (local_1b0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_198.Name = local_1b8;
    local_198.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
           UPCGMetadata::GetConstAttribute(local_1b0,&local_198);
    if (this == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
      pFVar5 = FText::FromName(&local_158,local_1a8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_168,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_178,pFVar6,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 4) {
        iVar4 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar3);
        FPCGMetadataAttribute<UE::Math::TVector2<double>_>::GetValue
                  (this,(TVector2<double> *)&local_148._s_0,iVar4);
        goto LAB_149ecee20;
      }
      pFVar7 = PCG::Private::GetTypeName((FString *)&local_158,4);
      pFVar5 = FText::FromString(&local_138,pFVar7);
      pFVar7 = PCG::Private::GetTypeName(&local_168,(ushort)this->_padding_);
      pFVar8 = FText::FromString(&local_128,pFVar7);
      pFVar9 = FText::FromName(&local_118,local_1a8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_198,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar5 = FText::Format<FText,FText,FText>(&local_178,pFVar6,pFVar9,pFVar8,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_178.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_158.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_158.TextData.Reference);
      }
    }
  }
  local_148._s_0.X = 0.0;
  local_148._s_0.Y = 0.0;
LAB_149ecee20:
  *(undefined8 *)param_3 = local_148._s_0.X;
  *(undefined8 *)((longlong)param_3 + 8) = local_148._s_0.Y;
  return;
}

// execGetVector2AttributeByMetadataKey @ 149ecee60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetVector2AttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  longlong lVar3;
  int iVar4;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this_00;
  FText *pFVar5;
  FTextFormat *pFVar6;
  int *piVar7;
  long64 lVar8;
  FString *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FName local_c8 [2];
  FPCGAttributeIdentifier local_b8;
  FText local_98;
  FString local_88;
  FText local_78;
  TVector2<double>_u_0 local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar3 = local_res20;
  local_c8[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_b8.Name = local_res10;
    local_b8.MetadataDomain = PCGMetadataDomainID::Default;
    this_00 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
              UPCGMetadata::GetConstAttribute(local_res18,&local_b8);
    if (this_00 == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
      pFVar5 = FText::FromName(&local_78,local_c8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_88,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_98,pFVar6,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this_00->_padding_ == 4) {
        if (lVar3 == -1) {
          iVar4 = -1;
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&this_00->_padding_);
          piVar7 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                   ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                           *)&this_00->_padding_,lVar3);
          if (piVar7 == (int *)0x0) {
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
            this = (FPCGMetadataAttributeBase *)this_00->_padding_;
            iVar4 = -1;
            if (this != (FPCGMetadataAttributeBase *)0x0) {
              lVar8 = FPCGMetadataDomain::GetParentKey
                                ((FPCGMetadataDomain *)this_00->_padding_,lVar3);
              iVar4 = FPCGMetadataAttributeBase::GetValueKey(this,lVar8);
            }
          }
          else {
            iVar4 = *piVar7;
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
          }
        }
        FPCGMetadataAttribute<UE::Math::TVector2<double>_>::GetValue
                  (this_00,(TVector2<double> *)&local_68._s_0,iVar4);
        goto LAB_149ecf107;
      }
      pFVar9 = PCG::Private::GetTypeName((FString *)&local_78,4);
      pFVar5 = FText::FromString(&local_58,pFVar9);
      pFVar9 = PCG::Private::GetTypeName(&local_88,(ushort)this_00->_padding_);
      pFVar10 = FText::FromString(&local_48,pFVar9);
      pFVar11 = FText::FromName(&local_38,local_c8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_b8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar5 = FText::Format<FText,FText,FText>(&local_98,pFVar6,pFVar11,pFVar10,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_78.TextData.Reference);
      }
    }
  }
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  local_68._8_4_ = 0;
  local_68._12_4_ = 0;
LAB_149ecf107:
  *(undefined4 *)param_3 = local_68._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_68._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_68._8_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_68._12_4_;
  return;
}

// execGetVector4Attribute @ 149ecf130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetVector4Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double dVar3;
  int iVar4;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *this;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_1f8 [32];
  FName local_1c8;
  UPCGMetadata *local_1c0;
  FName local_1b8 [2];
  FPCGAttributeIdentifier local_1a8;
  FText local_188;
  FString local_178;
  FText local_168;
  TVector4<double>_u_0 local_158;
  FText local_138;
  FText local_128;
  FText local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_a8 = 0x3f800000;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_e0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_c8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_c0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar11);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar11);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar11);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_1c0 = (UPCGMetadata *)0x0;
  pdVar10 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar10 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar3 = pdVar10[0x19];
  local_1b8[0] = local_1c8;
  if (local_1c0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_1a8.Name = local_1c8;
    local_1a8.MetadataDomain = PCGMetadataDomainID::Default;
    this = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)
           UPCGMetadata::GetConstAttribute(local_1c0,&local_1a8);
    if (this == (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
      pFVar5 = FText::FromName(&local_168,local_1b8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_178,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_188,pFVar6,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
    }
    else {
      if (*(short *)&this->field_0x70 == 6) {
        iVar4 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar3);
        FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
                  (this,(TVector4<double> *)&local_158._s_0,iVar4);
        goto LAB_149ecf49f;
      }
      pFVar7 = PCG::Private::GetTypeName((FString *)&local_168,6);
      pFVar5 = FText::FromString(&local_138,pFVar7);
      pFVar7 = PCG::Private::GetTypeName(&local_178,*(ushort *)&this->field_0x70);
      pFVar8 = FText::FromString(&local_128,pFVar7);
      pFVar9 = FText::FromName(&local_118,local_1b8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_1a8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar5 = FText::Format<FText,FText,FText>(&local_188,pFVar6,pFVar9,pFVar8,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_168.TextData.Reference);
      }
    }
  }
  local_158._s_0.X = 0.0;
  local_158._s_0.Y = 0.0;
  local_158._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_158._s_0.W = _UNK_15061cbc8;
LAB_149ecf49f:
  *(undefined8 *)param_3 = local_158._s_0.X;
  *(undefined8 *)((longlong)param_3 + 8) = local_158._s_0.Y;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_158._s_0.Z;
  *(undefined8 *)((longlong)param_3 + 0x18) = local_158._s_0.W;
  return;
}

// execGetVector4AttributeByMetadataKey @ 149ecf4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetVector4AttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  longlong lVar3;
  int iVar4;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *this_00;
  FText *pFVar5;
  FTextFormat *pFVar6;
  int *piVar7;
  long64 lVar8;
  FString *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FName local_d8 [2];
  FPCGAttributeIdentifier local_c8;
  FText local_a8;
  FString local_98;
  FText local_88;
  TVector4<double>_u_0 local_78;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar3 = local_res20;
  local_d8[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_c8.Name = local_res10;
    local_c8.MetadataDomain = PCGMetadataDomainID::Default;
    this_00 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)
              UPCGMetadata::GetConstAttribute(local_res18,&local_c8);
    if (this_00 == (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
      pFVar5 = FText::FromName(&local_88,local_d8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_98,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar5 = FText::Format<FText>(&local_a8,pFVar6,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
    }
    else {
      if (*(short *)&this_00->field_0x70 == 6) {
        if (lVar3 == -1) {
          iVar4 = -1;
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&this_00->field_0x58);
          piVar7 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                   ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                           *)&this_00->field_0x8,lVar3);
          if (piVar7 == (int *)0x0) {
            ReleaseSRWLockShared((PSRWLOCK)&this_00->field_0x58);
            this = *(FPCGMetadataAttributeBase **)&this_00->field_0x68;
            iVar4 = -1;
            if (this != (FPCGMetadataAttributeBase *)0x0) {
              lVar8 = FPCGMetadataDomain::GetParentKey
                                (*(FPCGMetadataDomain **)&this_00->field_0x60,lVar3);
              iVar4 = FPCGMetadataAttributeBase::GetValueKey(this,lVar8);
            }
          }
          else {
            iVar4 = *piVar7;
            ReleaseSRWLockShared((PSRWLOCK)&this_00->field_0x58);
          }
        }
        FPCGMetadataAttribute<UE::Math::TVector4<double>_>::GetValue
                  (this_00,(TVector4<double> *)&local_78._s_0,iVar4);
        goto LAB_149ecf793;
      }
      pFVar9 = PCG::Private::GetTypeName((FString *)&local_88,6);
      pFVar5 = FText::FromString(&local_58,pFVar9);
      pFVar9 = PCG::Private::GetTypeName(&local_98,*(ushort *)&this_00->field_0x70);
      pFVar10 = FText::FromString(&local_48,pFVar9);
      pFVar11 = FText::FromName(&local_38,local_d8);
      pFVar6 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_c8,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar5 = FText::Format<FText,FText,FText>(&local_a8,pFVar6,pFVar11,pFVar10,pFVar5);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar5);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_88.TextData.Reference);
      }
    }
  }
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_78._8_4_ = 0;
  local_78._12_4_ = 0;
  local_78._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_78._s_0.W = _UNK_15061cbc8;
LAB_149ecf793:
  *(undefined4 *)param_3 = local_78._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_78._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_78._8_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_78._12_4_;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_78._s_0.Z;
  *(undefined8 *)((longlong)param_3 + 0x18) = local_78._s_0.W;
  return;
}

// execGetVectorAttribute @ 149ecf7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetVectorAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double dVar3;
  FPCGMetadataDomainID FVar4;
  undefined1 auVar5 [16];
  int iVar6;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  double *pdVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  UPCGMetadata *local_1b0;
  FName local_1a8;
  TVector<double>_u_0 local_1a0;
  FText local_188;
  FString local_178;
  FText local_168;
  undefined1 local_158 [16];
  FName local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_a8 = 0x3f800000;
  local_108 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_100 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_48 = 0x3f000000;
  local_40 = 0xffffffffffffffff;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_98 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar14);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar14);
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_60 = _UNK_150689688;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar15,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar14);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_1b0 = (UPCGMetadata *)0x0;
  pdVar12 = &local_108;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar12 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = PCGMetadataDomainID::Default;
  dVar3 = pdVar12[0x19];
  local_1a8 = local_1b8;
  if (local_1b0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_1a0._s_0.X = (double)local_1b8;
    local_1a0._8_1_ = PCGMetadataDomainID::Default.Flag;
    local_1a0._9_3_ = PCGMetadataDomainID::Default._1_3_;
    local_1a0._12_4_ = PCGMetadataDomainID::Default.CustomFlag;
    local_1a0._16_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
    local_1a0._20_4_ = PCGMetadataDomainID::Default.DebugName.Number;
    auVar5 = local_1a0._8_16_;
    local_1a0._s_0.Y = FVar4._0_8_;
    local_158._0_4_ = local_1b8.ComparisonIndex.Value;
    local_158._4_4_ = local_1b8.Number;
    local_158._8_8_ = local_1a0._s_0.Y;
    local_148 = FVar4.DebugName;
    PCGMetadataDomainID::Default = FVar4;
    local_1a0._8_16_ = auVar5;
    this = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
           UPCGMetadata::GetConstAttribute(local_1b0,(FPCGAttributeIdentifier *)local_158);
    if (this == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
      pFVar7 = FText::FromName(&local_168,&local_1a8);
      pFVar8 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_178,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_188,pFVar8,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this->_padding_ == 5) {
        iVar6 = FPCGMetadataAttributeBase::GetValueKey
                          ((FPCGMetadataAttributeBase *)this,(long64)dVar3);
        FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                  (this,(TVector<double> *)&local_1a0._s_0,iVar6);
        uVar13 = local_1a0._s_0.Y;
        goto LAB_149ecfb28;
      }
      pFVar9 = PCG::Private::GetTypeName((FString *)&local_168,5);
      pFVar7 = FText::FromString(&local_138,pFVar9);
      pFVar9 = PCG::Private::GetTypeName(&local_178,(ushort)this->_padding_);
      pFVar10 = FText::FromString(&local_128,pFVar9);
      pFVar11 = FText::FromName(&local_118,&local_1a8);
      pFVar8 = FTextFormat::FTextFormat
                         ((FTextFormat *)local_158,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar7 = FText::Format<FText,FText,FText>(&local_188,pFVar8,pFVar11,pFVar10,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_168.TextData.Reference);
      }
    }
  }
  local_1a0._0_4_ = 0;
  local_1a0._4_4_ = 0;
  local_1a0._s_0.Z = (double)0;
  uVar13 = 0.0;
LAB_149ecfb28:
  *(undefined8 *)param_3 = local_1a0._s_0.X;
  *(undefined8 *)((longlong)param_3 + 8) = uVar13;
  *(double *)((longlong)param_3 + 0x10) = local_1a0._s_0.Z;
  return;
}

// execGetVectorAttributeByMetadataKey @ 149ecfb70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execGetVectorAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  FPCGMetadataDomainID FVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_00;
  FText *pFVar7;
  FTextFormat *pFVar8;
  int *piVar9;
  long64 lVar10;
  FString *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FName local_c8;
  TVector<double>_u_0 local_c0;
  FText local_a8;
  FString local_98;
  FText local_88;
  undefined1 local_78 [16];
  FName local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar4 = local_res20;
  local_c8 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = PCGMetadataDomainID::Default;
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    local_c0._s_0.X = (double)local_res10;
    local_c0._8_1_ = PCGMetadataDomainID::Default.Flag;
    local_c0._9_3_ = PCGMetadataDomainID::Default._1_3_;
    local_c0._12_4_ = PCGMetadataDomainID::Default.CustomFlag;
    local_c0._16_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
    local_c0._20_4_ = PCGMetadataDomainID::Default.DebugName.Number;
    auVar5 = local_c0._8_16_;
    local_c0._s_0.Y = FVar3._0_8_;
    local_78._0_4_ = local_res10.ComparisonIndex.Value;
    local_78._4_4_ = local_res10.Number;
    local_78._8_8_ = local_c0._s_0.Y;
    local_68 = FVar3.DebugName;
    PCGMetadataDomainID::Default = FVar3;
    local_c0._8_16_ = auVar5;
    this_00 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
              UPCGMetadata::GetConstAttribute(local_res18,(FPCGAttributeIdentifier *)local_78);
    if (this_00 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
      pFVar7 = FText::FromName(&local_88,&local_c8);
      pFVar8 = FTextFormat::FTextFormat
                         ((FTextFormat *)&local_98,
                          &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_a8,pFVar8,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
    }
    else {
      if ((short)this_00->_padding_ == 5) {
        if (lVar4 == -1) {
          iVar6 = -1;
        }
        else {
          AcquireSRWLockShared((PSRWLOCK)&this_00->_padding_);
          piVar9 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                   ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                           *)&this_00->_padding_,lVar4);
          if (piVar9 == (int *)0x0) {
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
            this = (FPCGMetadataAttributeBase *)this_00->_padding_;
            iVar6 = -1;
            if (this != (FPCGMetadataAttributeBase *)0x0) {
              lVar10 = FPCGMetadataDomain::GetParentKey
                                 ((FPCGMetadataDomain *)this_00->_padding_,lVar4);
              iVar6 = FPCGMetadataAttributeBase::GetValueKey(this,lVar10);
            }
          }
          else {
            iVar6 = *piVar9;
            ReleaseSRWLockShared((PSRWLOCK)&this_00->_padding_);
          }
        }
        FPCGMetadataAttribute<UE::Math::TVector<double>_>::GetValue
                  (this_00,(TVector<double> *)&local_c0._s_0,iVar6);
        uVar14 = local_c0._8_4_;
        uVar15 = local_c0._12_4_;
        goto LAB_149ecfe1d;
      }
      pFVar11 = PCG::Private::GetTypeName((FString *)&local_88,5);
      pFVar7 = FText::FromString(&local_58,pFVar11);
      pFVar11 = PCG::Private::GetTypeName(&local_98,(ushort)this_00->_padding_);
      pFVar12 = FText::FromString(&local_48,pFVar11);
      pFVar13 = FText::FromName(&local_38,&local_c8);
      pFVar8 = FTextFormat::FTextFormat
                         ((FTextFormat *)local_78,&PCGMetadataAccessorHelpers::InvalidTypeFormat,
                          Default);
      pFVar7 = FText::Format<FText,FText,FText>(&local_a8,pFVar8,pFVar13,pFVar12,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_88.TextData.Reference);
      }
    }
  }
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_c0._s_0.Z = (double)0;
  uVar14 = 0;
  uVar15 = 0;
LAB_149ecfe1d:
  *(undefined4 *)param_3 = local_c0._0_4_;
  *(undefined4 *)((longlong)param_3 + 4) = local_c0._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar15;
  *(double *)((longlong)param_3 + 0x10) = local_c0._s_0.Z;
  return;
}

// execHasAttributeSet @ 149ecfe50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execHasAttributeSet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  int iVar3;
  FPCGMetadataAttributeBase *this;
  FText *pFVar4;
  FTextFormat *pFVar5;
  double *pdVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_178 [32];
  FName local_158;
  UPCGMetadata *local_150;
  FPCGAttributeIdentifier local_148;
  FName local_128;
  FText local_120;
  FText local_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar7 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar8,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar7);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar8,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar7);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar8,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar7);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_150 = (UPCGMetadata *)0x0;
  pdVar6 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar6 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar2 = pdVar6[0x19];
  local_128 = local_158;
  if (local_150 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else if (dVar2 != -NAN) {
    local_148.Name = local_158;
    local_148.MetadataDomain = PCGMetadataDomainID::Default;
    this = UPCGMetadata::GetConstAttribute(local_150,&local_148);
    if (this != (FPCGMetadataAttributeBase *)0x0) {
      iVar3 = FPCGMetadataAttributeBase::GetValueKey(this,(long64)dVar2);
      *(bool *)param_3 = iVar3 != -1;
      return;
    }
    pFVar4 = FText::FromName(&local_110,&local_128);
    pFVar5 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_148,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar4 = FText::Format<FText>(&local_120,pFVar5,pFVar4);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar4);
    if (local_120.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execHasAttributeSetByMetadataKey @ 149ed0120

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execHasAttributeSetByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPCGMetadataAttributeBase *this;
  longlong lVar3;
  int iVar4;
  FPCGMetadataAttributeBase *pFVar5;
  int *piVar6;
  long64 lVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FName local_res10;
  UPCGMetadata *local_res18;
  longlong local_res20;
  FName local_78;
  FText local_70;
  FText local_60;
  FPCGAttributeIdentifier local_48;
  
  local_res20 = 0;
  FInt64Property::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UPCGMetadata *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar3 = local_res20;
  local_78 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else if (local_res20 != -1) {
    local_48.Name = local_res10;
    local_48.MetadataDomain = PCGMetadataDomainID::Default;
    pFVar5 = UPCGMetadata::GetConstAttribute(local_res18,&local_48);
    if (pFVar5 != (FPCGMetadataAttributeBase *)0x0) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar5->EntryMapLock);
      piVar6 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
               ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                       *)&pFVar5->EntryToValueKeyMap,lVar3);
      if (piVar6 != (int *)0x0) {
        iVar4 = *piVar6;
        ReleaseSRWLockShared((PSRWLOCK)&pFVar5->EntryMapLock);
        *(bool *)param_3 = iVar4 != -1;
        return;
      }
      ReleaseSRWLockShared((PSRWLOCK)&pFVar5->EntryMapLock);
      this = pFVar5->Parent;
      iVar4 = -1;
      if (this != (FPCGMetadataAttributeBase *)0x0) {
        lVar7 = FPCGMetadataDomain::GetParentKey(pFVar5->Metadata,lVar3);
        iVar4 = FPCGMetadataAttributeBase::GetValueKey(this,lVar7);
      }
      *(bool *)param_3 = iVar4 != -1;
      return;
    }
    pFVar8 = FText::FromName(&local_60,&local_78);
    pFVar9 = FTextFormat::FTextFormat
                       ((FTextFormat *)&local_48,
                        &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar8 = FText::Format<FText>(&local_70,pFVar9,pFVar8);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar8);
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execInitializeMetadata @ 149ed0840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execInitializeMetadata(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UPCGMetadata *pUVar3;
  UPCGMetadata *pUVar4;
  UPCGMetadata *this;
  double dVar5;
  TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *pTVar6;
  FPCGMetadataDomain *pFVar7;
  FPCGMetadataDomain *pFVar8;
  double *pdVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_238 [32];
  UPCGMetadata *local_218;
  UPCGMetadata *local_210 [2];
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  pFVar8 = (FPCGMetadataDomain *)0x0;
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
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
                             0x20) ^ uVar12,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar11);
  local_180 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar12,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar11);
  local_168 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                       UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
  dStack_160 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_148 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_140 = _UNK_150689688;
  local_138 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_130 = _UNK_150689688;
  local_170 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar12,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar11);
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
  local_210[0] = (UPCGMetadata *)0x0;
  pdVar10 = &local_1e8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar10 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_210,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_210);
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
  local_b0 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_ ^ uVar12,
                      UE::Math::TVector<double>::OneVector.field0_0x0._0_4_ ^ uVar11);
  local_a8 = CONCAT44(uStack_8c ^ uVar12,uStack_90 ^ uVar11);
  local_a0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar12,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar11);
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
  local_218 = (UPCGMetadata *)0x0;
  pdVar9 = &local_118;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar9 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  this = local_210[0];
  pUVar4 = local_218;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_210[0] == (UPCGMetadata *)0x0) {
    pdVar10[0x19] = -NAN;
  }
  else {
    if (local_218 != (UPCGMetadata *)0x0) {
      for (pUVar3 = (local_210[0]->Parent).field0_0x0.DebugPtr; pUVar3 != (UPCGMetadata *)0x0;
          pUVar3 = (pUVar3->Parent).field0_0x0.DebugPtr) {
        if (pUVar3 == local_218) goto LAB_149ed0c32;
      }
      if (local_218 != (UPCGMetadata *)0x0) {
        dVar5 = (double)UPCGMetadata::AddEntry(local_210[0],-1);
        pdVar10[0x19] = dVar5;
        dVar5 = pdVar9[0x19];
        pTVar6 = TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>,0>,FDefaultSetAllocator>
                         *)&pUVar4->MetadataDomains,&PCGMetadataDomainID::Default);
        pFVar7 = (FPCGMetadataDomain *)&pTVar6->field_0x10;
        if (pTVar6 == (TTuple<FPCGMetadataDomainID,TSharedPtr<FPCGMetadataDomain,1>_> *)0x0) {
          pFVar7 = pFVar8;
        }
        if (pFVar7 != (FPCGMetadataDomain *)0x0) {
          pFVar8 = (FPCGMetadataDomain *)pFVar7->_padding_;
        }
        if ((PCGMetadataDomainID::Default.Flag != Invalid) &&
           (pFVar7 = UPCGMetadata::FindOrCreateMetadataDomain(this,&PCGMetadataDomainID::Default),
           pFVar7 != (FPCGMetadataDomain *)0x0)) {
          FPCGMetadataDomain::SetAttributes(pFVar7,(long64)dVar5,pFVar8,(long64 *)(pdVar10 + 0x19));
          return;
        }
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,&local_200);
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_find__151fe4130,
                   (FLogCategoryBase *)&LogPCG);
        if (local_200.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
        return;
      }
    }
LAB_149ed0c32:
    dVar5 = (double)UPCGMetadata::AddEntry(local_210[0],(long64)pdVar9[0x19]);
    pdVar10[0x19] = dVar5;
  }
  return;
}

// execSetAttributeFromPropertyByMetadataKey @ 149ed3190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGMetadataAccessorHelpers::execSetAttributeFromPropertyByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FField *pFVar3;
  UStruct *pUVar4;
  FName FVar5;
  FPCGMetadataDomainID FVar6;
  FName FVar7;
  UPCGMetadata *this;
  bool bVar8;
  uchar *puVar9;
  FName local_res10;
  UStruct *local_res18;
  FName local_res20;
  undefined1 local_148 [8];
  FPCGMetadataDomainID FStack_140;
  TVector4<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  undefined8 local_e8;
  FName local_e0;
  UPCGMetadata *local_d8 [2];
  UStruct *local_c8;
  FPCGMetadataDomain *pFStack_c0;
  double local_b8;
  uchar *puStack_b0;
  TTransform<double> local_a8;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_d8[0] = (UPCGMetadata *)0x0;
  puVar9 = (uchar *)&local_e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_res18 = (UStruct *)0x0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
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
  this = local_d8[0];
  FVar7 = local_e0;
  FVar6 = FStack_140;
  FVar5 = local_res20;
  pUVar4 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_e0 != (FName)0x0) &&
     (local_148 = *(undefined1 (*) [8])((longlong)local_e0 + 0x10), local_res20 != (FName)0x0)) {
    FStack_140._0_8_ = (FField *)0x0;
    if (local_148 != (undefined1  [8])0x0) {
      FStack_140._0_8_ = ((UStruct *)local_148)->ChildProperties;
    }
    FStack_140.DebugName.ComparisonIndex.Value = 0xffffffff;
    FStack_140.DebugName.Number._0_2_ = 0x101;
    FStack_140.DebugName.Number._3_1_ = FVar6.DebugName.Number._3_1_;
    FStack_140.DebugName.Number._2_1_ = 0;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)local_148);
    pFVar3 = (FField *)FStack_140._0_8_;
    while (pFVar3 != (FField *)0x0) {
      bVar8 = IsThisNotNull(pFVar3,"FField::GetFName");
      if (bVar8) {
        local_res10 = pFVar3->NamePrivate;
      }
      else {
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
      }
      if (local_res10 == FVar5) {
        if (pFVar3 != (FField *)0x0) {
          local_148 = (undefined1  [8])pUVar4;
          FStack_140 = PCGMetadataDomainID::Default;
          local_128._s_0.Y = (double)UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_140);
          if ((FPCGMetadataDomain *)local_128._s_0.Y != (FPCGMetadataDomain *)0x0) {
            local_128._s_0.X = (double)pUVar4;
            local_128._16_1_ = 1;
            local_c8 = pUVar4;
            local_b8 = local_128._s_0.Z;
            local_128._s_0.W = (double)puVar9;
            pFStack_c0 = (FPCGMetadataDomain *)local_128._s_0.Y;
            puStack_b0 = puVar9;
            PCGAttributeAccessorHelpers::
            DispatchPropertyTypes<_PCGAttributeAccessorHelpers::CreatePropertyAccessor_::__l2::<lambda_1>_>
                      ((FProperty *)&local_res10,(<lambda_1> *)pFVar3);
            if (local_res10 != (FName)0x0) {
              local_148 = (undefined1  [8])&local_res10;
              local_108._s_0.Z = (double)FVar7;
              local_108._s_0.Y = (double)&local_c8;
              FStack_140.DebugName = FVar7;
              FStack_140._0_8_ = local_108._s_0.Y;
              local_108._s_0.X = (double)local_148;
              switch(*(undefined2 *)((longlong)local_res10 + 10)) {
              case 0:
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<float>(local_148,0.0);
                break;
              case 1:
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<double>(local_148,0.0);
                break;
              case 2:
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<int>(local_148,0);
                break;
              case 3:
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<__int64>(local_148,0);
                break;
              case 4:
                local_108._s_0.X = 0.0;
                local_108._s_0.Y = 0.0;
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<UE::Math::TVector2<double>_>
                                  (local_148,(TVector2<double> *)&local_108._s_0);
                break;
              case 5:
                local_108._s_0.X = 0.0;
                local_108._s_0.Y = 0.0;
                local_128._s_0.Z = 0.0;
                local_108._s_0.Z = 0.0;
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>
                                  (local_148,(TVector<double> *)&local_108._s_0);
                break;
              case 6:
                local_128._s_0.Z = ___xmm_3ff00000000000000000000000000000;
                local_128._s_0.W = (double)_UNK_15061cbc8;
                local_128._s_0.X = 0.0;
                local_128._s_0.Y = 0.0;
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>
                                  (local_148,(TVector4<double> *)&local_128._s_0);
                break;
              case 7:
                local_128._s_0.X = 0.0;
                local_128._s_0.Y = 0.0;
                local_128._s_0.Z = 0.0;
                local_128._s_0.W = 0.0;
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<UE::Math::TQuat<double>_>
                                  (local_148,(TQuat<double> *)&local_128._s_0);
                break;
              case 8:
                local_a8.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_a8.Translation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                local_a8.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_a8.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_a8.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_a8.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_a8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_a8.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_a8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_a8.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                local_a8.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<UE::Math::TTransform<double>_>
                                  (local_148,&local_a8);
                break;
              case 9:
                local_108._s_0.X = 0.0;
                local_108._s_0.Y = 0.0;
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<FString>
                                  (local_148,(FString *)&local_108._s_0);
                break;
              case 10:
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<bool>(local_148,false);
                break;
              case 0xb:
                local_108._s_0.X = 0.0;
                local_108._s_0.Y = 0.0;
                local_128._s_0.Z = 0.0;
                local_108._s_0.Z = 0.0;
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<UE::Math::TRotator<double>_>
                                  (local_148,(TRotator<double> *)&local_108._s_0);
                break;
              case 0xc:
                local_108._s_0.X = 0.0;
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<FName>(local_148,(FName)0x0);
                break;
              case 0xd:
                local_128._s_0.X = 0.0;
                local_128._s_0.Y = 0.0;
                local_128._s_0.Z = 0.0;
                local_128._s_0.W = 0.0;
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<FSoftObjectPath>
                                  (local_148,(FSoftObjectPath *)&local_128._s_0);
                break;
              case 0xe:
                local_128._s_0.X = 0.0;
                local_128._s_0.Y = 0.0;
                local_128._s_0.Z = 0.0;
                local_128._s_0.W = 0.0;
                bVar8 = `PCGPropertyHelpers::
                        GetPropertyValueWithCallback<UObject,`PCGMetadata::SetAttributeFromPropertyHelper<UObject>'::__l2::<lambda_1>_>'
                        ::__l2::<lambda_1>::operator()<FSoftClassPath>
                                  (local_148,(FSoftClassPath *)&local_128._s_0);
                break;
              default:
                bVar8 = false;
              }
              if (local_res10 != (FName)0x0) {
                (*(code *)**(undefined8 **)local_res10)(local_res10,1);
                *(bool *)param_3 = bVar8;
                return;
              }
              goto LAB_149ed36d5;
            }
          }
          bVar8 = false;
LAB_149ed36d5:
          *(bool *)param_3 = bVar8;
          return;
        }
        break;
      }
      FStack_140._0_8_ = pFVar3->Next;
      TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)local_148);
      pFVar3 = (FField *)FStack_140._0_8_;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetBoolAttribute @ 149ed3ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetBoolAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<bool> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_1e8 [32];
  bool local_1b8 [8];
  int local_1b0 [2];
  FName local_1a8;
  UPCGMetadata *local_1a0;
  FName local_198;
  FText local_190;
  FText local_180;
  FName local_168;
  FPCGMetadataDomainID FStack_160;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar12);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1a0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1b0[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1b0);
  }
  this = local_1a0;
  local_1b8[0] = local_1b0[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_198 = local_1a8;
  if (local_1a0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1a0,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_190);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_190.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_190.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar11[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar11[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar11[0x19] = dVar5;
      }
    }
    if (pdVar11[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_190,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_160._0_8_ = auVar3._0_8_;
      local_168 = local_198;
      FStack_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_160),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_160.DebugName,(FString *)&local_180);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_180.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_180.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<bool> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_168);
        if (this_00 != (FPCGMetadataAttribute<bool> *)0x0) {
          if ((short)this_00->_padding_ == 10) {
            FPCGMetadataAttribute<bool>::SetValue(this_00,(long64)pdVar11[0x19],local_1b8);
            return;
          }
          pFVar7 = PCG::Private::GetTypeName((FString *)&local_180,10);
          pFVar6 = FText::FromString(&local_118,pFVar7);
          pFVar7 = PCG::Private::GetTypeName(&local_148,(ushort)this_00->_padding_);
          pFVar8 = FText::FromString(&local_108,pFVar7);
          pFVar9 = FText::FromName(&local_138,&local_198);
          pFVar10 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_128,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar6 = FText::Format<FText,FText,FText>(&local_190,pFVar10,pFVar9,pFVar8,pFVar6);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
          if (local_190.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (local_180.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_180.TextData.Reference);
          return;
        }
      }
      pFVar6 = FText::FromName(&local_128,&local_198);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_138,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_180,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_190.TextData.Reference = local_180.TextData.Reference;
    }
    if (local_190.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetBoolAttributeByMetadataKey @ 149ed3fd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetBoolAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<bool> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong *plVar12;
  bool local_res10 [16];
  int local_res20 [2];
  FName local_d8;
  longlong local_d0;
  UPCGMetadata *local_c8;
  FName local_c0;
  FText local_b8;
  FText local_a8;
  FName local_98;
  FPCGMetadataDomainID FStack_90;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_d0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_c8 = (UPCGMetadata *)0x0;
  plVar12 = &local_d0;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar12 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  this = local_c8;
  local_res10[0] = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c0 = local_d8;
  if (local_c8 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_c8,&PCGMetadataDomainID::Default),
       pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_b8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_b8.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar12;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar12 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar12 = lVar6;
      }
    }
    if (*plVar12 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_b8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_90._0_8_ = auVar4._0_8_;
      local_98 = local_c0;
      FStack_90.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_90),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_90.DebugName,(FString *)&local_a8);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_a8.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<bool> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_98);
        if (this_00 != (FPCGMetadataAttribute<bool> *)0x0) {
          if ((short)this_00->_padding_ == 10) {
            FPCGMetadataAttribute<bool>::SetValue(this_00,*plVar12,local_res10);
            return;
          }
          pFVar8 = PCG::Private::GetTypeName((FString *)&local_a8,10);
          pFVar7 = FText::FromString(&local_48,pFVar8);
          pFVar8 = PCG::Private::GetTypeName(&local_78,(ushort)this_00->_padding_);
          pFVar9 = FText::FromString(&local_38,pFVar8);
          pFVar10 = FText::FromName(&local_68,&local_c0);
          pFVar11 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_58,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar7 = FText::Format<FText,FText,FText>(&local_b8,pFVar11,pFVar10,pFVar9,pFVar7);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_a8.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_a8.TextData.Reference);
          return;
        }
      }
      pFVar7 = FText::FromName(&local_58,&local_c0);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_68,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_a8,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_b8.TextData.Reference = local_a8.TextData.Reference;
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetDoubleAttribute @ 149ed4530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetDoubleAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<double> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  double local_1b0;
  UPCGMetadata *local_1a8;
  FName local_1a0;
  FText local_198;
  FText local_188;
  FName local_178;
  FPCGMetadataDomainID FStack_170;
  double local_158;
  FString local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar12);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1a8 = (UPCGMetadata *)0x0;
  pdVar11 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_1b0 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  this = local_1a8;
  local_158 = local_1b0;
  local_1a0 = local_1b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1a8 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1a8,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_198);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_198.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_198.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar11[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar11[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar11[0x19] = dVar5;
      }
    }
    if (pdVar11[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_198,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_170._0_8_ = auVar3._0_8_;
      local_178 = local_1a0;
      FStack_170.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_170),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_170.DebugName,(FString *)&local_188);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_188.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_188.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<double> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_178);
        if (this_00 != (FPCGMetadataAttribute<double> *)0x0) {
          if ((short)this_00->_padding_ == 1) {
            FPCGMetadataAttribute<double>::SetValue(this_00,(long64)pdVar11[0x19],&local_158);
            return;
          }
          pFVar7 = PCG::Private::GetTypeName((FString *)&local_188,1);
          pFVar6 = FText::FromString(&local_120,pFVar7);
          pFVar7 = PCG::Private::GetTypeName(&local_150,(ushort)this_00->_padding_);
          pFVar8 = FText::FromString(&local_110,pFVar7);
          pFVar9 = FText::FromName(&local_140,&local_1a0);
          pFVar10 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_130,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar6 = FText::Format<FText,FText,FText>(&local_198,pFVar10,pFVar9,pFVar8,pFVar6);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
          if (local_198.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
          }
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          if (local_188.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_188.TextData.Reference);
          return;
        }
      }
      pFVar6 = FText::FromName(&local_130,&local_1a0);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_140,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_188,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_198.TextData.Reference = local_188.TextData.Reference;
    }
    if (local_198.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetDoubleAttributeByMetadataKey @ 149ed4a50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetDoubleAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<double> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong *plVar12;
  FName local_res10 [2];
  double local_res20;
  longlong local_e8;
  UPCGMetadata *local_e0;
  FName local_d8;
  FText local_d0;
  FText local_c0;
  FName local_a8;
  FPCGMetadataDomainID FStack_a0;
  double local_88;
  FString local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FText local_40;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_e0 = (UPCGMetadata *)0x0;
  plVar12 = &local_e8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar12 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
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
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  this = local_e0;
  local_88 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = local_res10[0];
  if (local_e0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_e0,&PCGMetadataDomainID::Default),
       pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_d0);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_d0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_d0.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar12;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar12 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar12 = lVar6;
      }
    }
    if (*plVar12 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_d0,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_a0._0_8_ = auVar4._0_8_;
      local_a8 = local_d8;
      FStack_a0.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_a0),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_a0.DebugName,(FString *)&local_c0);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_c0.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_c0.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<double> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_a8);
        if (this_00 != (FPCGMetadataAttribute<double> *)0x0) {
          if ((short)this_00->_padding_ == 1) {
            FPCGMetadataAttribute<double>::SetValue(this_00,*plVar12,&local_88);
            return;
          }
          pFVar8 = PCG::Private::GetTypeName((FString *)&local_c0,1);
          pFVar7 = FText::FromString(&local_50,pFVar8);
          pFVar8 = PCG::Private::GetTypeName(&local_80,(ushort)this_00->_padding_);
          pFVar9 = FText::FromString(&local_40,pFVar8);
          pFVar10 = FText::FromName(&local_70,&local_d8);
          pFVar11 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_60,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar7 = FText::Format<FText,FText,FText>(&local_d0,pFVar11,pFVar10,pFVar9,pFVar7);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
          if (local_d0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_c0.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_c0.TextData.Reference);
          return;
        }
      }
      pFVar7 = FText::FromName(&local_60,&local_d8);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_70,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_c0,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_d0.TextData.Reference = local_c0.TextData.Reference;
    }
    if (local_d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetFloatAttribute @ 149ed4fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetFloatAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<float> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_1e8 [32];
  float local_1b8 [2];
  FName local_1b0;
  float local_1a8 [2];
  UPCGMetadata *local_1a0;
  FName local_198;
  FText local_190;
  FText local_180;
  FName local_168;
  FPCGMetadataDomainID FStack_160;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar12);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1a0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1b8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1b8);
  }
  this = local_1a0;
  local_1a8[0] = local_1b8[0];
  local_198 = local_1b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1a0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1a0,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_190);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_190.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_190.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar11[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar11[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar11[0x19] = dVar5;
      }
    }
    if (pdVar11[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_190,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_160._0_8_ = auVar3._0_8_;
      local_168 = local_198;
      FStack_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_160),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_160.DebugName,(FString *)&local_180);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_180.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_180.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<float> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_168);
        if (this_00 != (FPCGMetadataAttribute<float> *)0x0) {
          if ((short)this_00->_padding_ == 0) {
            FPCGMetadataAttribute<float>::SetValue(this_00,(long64)pdVar11[0x19],local_1a8);
            return;
          }
          pFVar7 = PCG::Private::GetTypeName((FString *)&local_180,0);
          pFVar6 = FText::FromString(&local_118,pFVar7);
          pFVar7 = PCG::Private::GetTypeName(&local_148,(ushort)this_00->_padding_);
          pFVar8 = FText::FromString(&local_108,pFVar7);
          pFVar9 = FText::FromName(&local_138,&local_198);
          pFVar10 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_128,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar6 = FText::Format<FText,FText,FText>(&local_190,pFVar10,pFVar9,pFVar8,pFVar6);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
          if (local_190.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (local_180.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_180.TextData.Reference);
          return;
        }
      }
      pFVar6 = FText::FromName(&local_128,&local_198);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_138,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_180,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_190.TextData.Reference = local_180.TextData.Reference;
    }
    if (local_190.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetFloatAttributeByMetadataKey @ 149ed54e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetFloatAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<float> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong *plVar12;
  float local_res10 [4];
  float local_res20 [2];
  FName local_d8;
  longlong local_d0;
  UPCGMetadata *local_c8;
  FName local_c0;
  FText local_b8;
  FText local_a8;
  FName local_98;
  FPCGMetadataDomainID FStack_90;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_d0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_c8 = (UPCGMetadata *)0x0;
  plVar12 = &local_d0;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar12 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_c8;
  local_res20[0] = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c0 = local_d8;
  if (local_c8 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_c8,&PCGMetadataDomainID::Default),
       pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_b8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_b8.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar12;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar12 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar12 = lVar6;
      }
    }
    if (*plVar12 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_b8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_90._0_8_ = auVar4._0_8_;
      local_98 = local_c0;
      FStack_90.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_90),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_90.DebugName,(FString *)&local_a8);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_a8.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<float> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_98);
        if (this_00 != (FPCGMetadataAttribute<float> *)0x0) {
          if ((short)this_00->_padding_ == 0) {
            FPCGMetadataAttribute<float>::SetValue(this_00,*plVar12,local_res20);
            return;
          }
          pFVar8 = PCG::Private::GetTypeName((FString *)&local_a8,0);
          pFVar7 = FText::FromString(&local_48,pFVar8);
          pFVar8 = PCG::Private::GetTypeName(&local_78,(ushort)this_00->_padding_);
          pFVar9 = FText::FromString(&local_38,pFVar8);
          pFVar10 = FText::FromName(&local_68,&local_c0);
          pFVar11 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_58,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar7 = FText::Format<FText,FText,FText>(&local_b8,pFVar11,pFVar10,pFVar9,pFVar7);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_a8.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_a8.TextData.Reference);
          return;
        }
      }
      pFVar7 = FText::FromName(&local_58,&local_c0);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_68,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_a8,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_b8.TextData.Reference = local_a8.TextData.Reference;
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetInteger32Attribute @ 149ed58d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetInteger32Attribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<int> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_1e8 [32];
  int local_1b8 [2];
  FName local_1b0;
  int local_1a8 [2];
  UPCGMetadata *local_1a0;
  FName local_198;
  FText local_190;
  FText local_180;
  FName local_168;
  FPCGMetadataDomainID FStack_160;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar12);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1a0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1b8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1b8);
  }
  this = local_1a0;
  local_1a8[0] = local_1b8[0];
  local_198 = local_1b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1a0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1a0,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_190);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_190.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_190.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar11[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar11[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar11[0x19] = dVar5;
      }
    }
    if (pdVar11[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_190,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_160._0_8_ = auVar3._0_8_;
      local_168 = local_198;
      FStack_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_160),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_160.DebugName,(FString *)&local_180);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_180.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_180.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<int> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_168);
        if (this_00 != (FPCGMetadataAttribute<int> *)0x0) {
          if ((short)this_00->_padding_ == 2) {
            FPCGMetadataAttribute<int>::SetValue(this_00,(long64)pdVar11[0x19],local_1a8);
            return;
          }
          pFVar7 = PCG::Private::GetTypeName((FString *)&local_180,2);
          pFVar6 = FText::FromString(&local_118,pFVar7);
          pFVar7 = PCG::Private::GetTypeName(&local_148,(ushort)this_00->_padding_);
          pFVar8 = FText::FromString(&local_108,pFVar7);
          pFVar9 = FText::FromName(&local_138,&local_198);
          pFVar10 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_128,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar6 = FText::Format<FText,FText,FText>(&local_190,pFVar10,pFVar9,pFVar8,pFVar6);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
          if (local_190.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (local_180.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_180.TextData.Reference);
          return;
        }
      }
      pFVar6 = FText::FromName(&local_128,&local_198);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_138,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_180,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_190.TextData.Reference = local_180.TextData.Reference;
    }
    if (local_190.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetInteger32AttributeByMetadataKey @ 149ed5de0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetInteger32AttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<int> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong *plVar12;
  int local_res10 [4];
  int local_res20 [2];
  FName local_d8;
  longlong local_d0;
  UPCGMetadata *local_c8;
  FName local_c0;
  FText local_b8;
  FText local_a8;
  FName local_98;
  FPCGMetadataDomainID FStack_90;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_d0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_c8 = (UPCGMetadata *)0x0;
  plVar12 = &local_d0;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar12 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20[0] = local_res10[0];
  local_c0 = local_d8;
  if (local_c8 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_c8,&PCGMetadataDomainID::Default),
       pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_b8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_b8.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar12;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar12 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar12 = lVar6;
      }
    }
    if (*plVar12 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_b8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_90._0_8_ = auVar4._0_8_;
      local_98 = local_c0;
      FStack_90.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_90),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_90.DebugName,(FString *)&local_a8);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_a8.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<int> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_98);
        if (this_00 != (FPCGMetadataAttribute<int> *)0x0) {
          if ((short)this_00->_padding_ == 2) {
            FPCGMetadataAttribute<int>::SetValue(this_00,*plVar12,local_res20);
            return;
          }
          pFVar8 = PCG::Private::GetTypeName((FString *)&local_a8,2);
          pFVar7 = FText::FromString(&local_48,pFVar8);
          pFVar8 = PCG::Private::GetTypeName(&local_78,(ushort)this_00->_padding_);
          pFVar9 = FText::FromString(&local_38,pFVar8);
          pFVar10 = FText::FromName(&local_68,&local_c0);
          pFVar11 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_58,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar7 = FText::Format<FText,FText,FText>(&local_b8,pFVar11,pFVar10,pFVar9,pFVar7);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_a8.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_a8.TextData.Reference);
          return;
        }
      }
      pFVar7 = FText::FromName(&local_58,&local_c0);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_68,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_a8,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_b8.TextData.Reference = local_a8.TextData.Reference;
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetInteger64Attribute @ 149ed61c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetInteger64Attribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<__int64> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  long64 local_1b0;
  UPCGMetadata *local_1a8;
  FName local_1a0;
  FText local_198;
  FText local_188;
  FName local_178;
  FPCGMetadataDomainID FStack_170;
  long64 local_158;
  FString local_150;
  FText local_140;
  FText local_130;
  FText local_120;
  FText local_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar12);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1a8 = (UPCGMetadata *)0x0;
  pdVar11 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_1b0 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  this = local_1a8;
  local_158 = local_1b0;
  local_1a0 = local_1b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1a8 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1a8,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_198);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_198.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_198.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar11[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar11[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar11[0x19] = dVar5;
      }
    }
    if (pdVar11[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_198,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_170._0_8_ = auVar3._0_8_;
      local_178 = local_1a0;
      FStack_170.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_170),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_170.DebugName,(FString *)&local_188);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_188.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_188.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<__int64> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_178);
        if (this_00 != (FPCGMetadataAttribute<__int64> *)0x0) {
          if ((short)this_00->_padding_ == 3) {
            FPCGMetadataAttribute<__int64>::SetValue(this_00,(long64)pdVar11[0x19],&local_158);
            return;
          }
          pFVar7 = PCG::Private::GetTypeName((FString *)&local_188,3);
          pFVar6 = FText::FromString(&local_120,pFVar7);
          pFVar7 = PCG::Private::GetTypeName(&local_150,(ushort)this_00->_padding_);
          pFVar8 = FText::FromString(&local_110,pFVar7);
          pFVar9 = FText::FromName(&local_140,&local_1a0);
          pFVar10 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_130,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar6 = FText::Format<FText,FText,FText>(&local_198,pFVar10,pFVar9,pFVar8,pFVar6);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
          if (local_198.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
          }
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          if (local_188.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_188.TextData.Reference);
          return;
        }
      }
      pFVar6 = FText::FromName(&local_130,&local_1a0);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_140,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_188,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_198.TextData.Reference = local_188.TextData.Reference;
    }
    if (local_198.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetInteger64AttributeByMetadataKey @ 149ed66e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetInteger64AttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<__int64> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong *plVar12;
  FName local_res10 [2];
  long64 local_res20;
  longlong local_e8;
  UPCGMetadata *local_e0;
  FName local_d8;
  FText local_d0;
  FText local_c0;
  FName local_a8;
  FPCGMetadataDomainID FStack_a0;
  long64 local_88;
  FString local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FText local_40;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_e0 = (UPCGMetadata *)0x0;
  plVar12 = &local_e8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar12 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
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
  local_res20 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  this = local_e0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = local_res20;
  local_d8 = local_res10[0];
  if (local_e0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_e0,&PCGMetadataDomainID::Default),
       pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_d0);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_d0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_d0.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar12;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar12 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar12 = lVar6;
      }
    }
    if (*plVar12 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_d0,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_a0._0_8_ = auVar4._0_8_;
      local_a8 = local_d8;
      FStack_a0.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_a0),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_a0.DebugName,(FString *)&local_c0);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_c0.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_c0.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<__int64> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_a8);
        if (this_00 != (FPCGMetadataAttribute<__int64> *)0x0) {
          if ((short)this_00->_padding_ == 3) {
            FPCGMetadataAttribute<__int64>::SetValue(this_00,*plVar12,&local_88);
            return;
          }
          pFVar8 = PCG::Private::GetTypeName((FString *)&local_c0,3);
          pFVar7 = FText::FromString(&local_50,pFVar8);
          pFVar8 = PCG::Private::GetTypeName(&local_80,(ushort)this_00->_padding_);
          pFVar9 = FText::FromString(&local_40,pFVar8);
          pFVar10 = FText::FromName(&local_70,&local_d8);
          pFVar11 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_60,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar7 = FText::Format<FText,FText,FText>(&local_d0,pFVar11,pFVar10,pFVar9,pFVar7);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
          if (local_d0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_c0.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_c0.TextData.Reference);
          return;
        }
      }
      pFVar7 = FText::FromName(&local_60,&local_d8);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_70,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_c0,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_d0.TextData.Reference = local_c0.TextData.Reference;
    }
    if (local_d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetNameAttribute @ 149ed6ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetNameAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<FName> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FName *pFVar11;
  double *pdVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_1d8 [32];
  FName local_1a8;
  FName local_1a0;
  UPCGMetadata *local_198;
  FName local_190;
  FText local_188;
  FText local_178;
  FName local_168;
  FPCGMetadataDomainID FStack_160;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar13);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar13);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar13);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_198 = (UPCGMetadata *)0x0;
  pdVar12 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar12 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  this = local_198;
  pFVar11 = &local_1a8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar11 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_190 = local_1a0;
  if (local_198 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_198,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_188);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_188.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_188.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar12[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar12[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar12[0x19] = dVar5;
      }
    }
    if (pdVar12[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_188,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_160._0_8_ = auVar3._0_8_;
      local_168 = local_190;
      FStack_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_160),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_160.DebugName,(FString *)&local_178);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_178.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_178.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<FName> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_168);
        if (this_00 != (FPCGMetadataAttribute<FName> *)0x0) {
          if ((short)this_00->_padding_ == 0xc) {
            FPCGMetadataAttribute<FName>::SetValue(this_00,(long64)pdVar12[0x19],pFVar11);
            return;
          }
          pFVar7 = PCG::Private::GetTypeName((FString *)&local_178,0xc);
          pFVar6 = FText::FromString(&local_118,pFVar7);
          pFVar7 = PCG::Private::GetTypeName(&local_148,(ushort)this_00->_padding_);
          pFVar8 = FText::FromString(&local_108,pFVar7);
          pFVar9 = FText::FromName(&local_138,&local_190);
          pFVar10 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_128,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar6 = FText::Format<FText,FText,FText>(&local_188,pFVar10,pFVar9,pFVar8,pFVar6);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
          if (local_188.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (local_178.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_178.TextData.Reference);
          return;
        }
      }
      pFVar6 = FText::FromName(&local_128,&local_190);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_138,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_178,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_188.TextData.Reference = local_178.TextData.Reference;
    }
    if (local_188.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetQuatAttribute @ 149ed7700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetQuatAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  double *pdVar11;
  TQuat<double> *pTVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_1f8 [32];
  FName local_1c8;
  UPCGMetadata *local_1c0;
  FName local_1b8;
  FText local_1b0;
  FText local_1a0;
  FName local_188;
  FPCGMetadataDomainID FStack_180;
  FString local_168;
  FText local_158;
  FText local_148;
  TQuat<double> local_138;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar13);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar13);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar13);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1c0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  this = local_1c0;
  pTVar12 = &local_138;
  if ((TQuat<double> *)param_2->MostRecentPropertyAddress != (TQuat<double> *)0x0) {
    pTVar12 = (TQuat<double> *)param_2->MostRecentPropertyAddress;
  }
  local_1b8 = local_1c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1c0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1c0,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_1b0);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_1b0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_1b0.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar11[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar11[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar11[0x19] = dVar5;
      }
    }
    if (pdVar11[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_1b0,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_180._0_8_ = auVar3._0_8_;
      local_188 = local_1b8;
      FStack_180.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_180),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_180.DebugName,(FString *)&local_1a0);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_1a0.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_1a0.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_188);
        if (this_00 != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
          if (*(short *)&this_00->field_0x70 == 7) {
            FPCGMetadataAttribute<UE::Math::TQuat<double>_>::SetValue
                      (this_00,(long64)pdVar11[0x19],pTVar12);
            return;
          }
          pFVar7 = PCG::Private::GetTypeName((FString *)&local_1a0,7);
          pFVar6 = FText::FromString(&local_118,pFVar7);
          pFVar7 = PCG::Private::GetTypeName(&local_168,*(ushort *)&this_00->field_0x70);
          pFVar8 = FText::FromString(&local_108,pFVar7);
          pFVar9 = FText::FromName(&local_158,&local_1b8);
          pFVar10 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_148,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar6 = FText::Format<FText,FText,FText>(&local_1b0,pFVar10,pFVar9,pFVar8,pFVar6);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
          if (local_1b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
          }
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if (local_1a0.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_1a0.TextData.Reference);
          return;
        }
      }
      pFVar6 = FText::FromName(&local_148,&local_1b8);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_158,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_1a0,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_1b0.TextData.Reference = local_1a0.TextData.Reference;
    }
    if (local_1b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetQuatAttributeByMetadataKey @ 149ed7c20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetQuatAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TQuat<double> *pTVar12;
  longlong *plVar13;
  FName local_res10 [2];
  UPCGMetadata *local_res20;
  longlong local_e8;
  FName local_e0;
  FText local_d8;
  FText local_c8;
  FName local_b8;
  FPCGMetadataDomainID FStack_b0;
  FString local_98;
  FText local_88;
  FText local_78;
  TQuat<double> local_68;
  FText local_48;
  FText local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res20 = (UPCGMetadata *)0x0;
  plVar13 = &local_e8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar13 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  this = local_res20;
  pTVar12 = &local_68;
  if ((TQuat<double> *)param_2->MostRecentPropertyAddress != (TQuat<double> *)0x0) {
    pTVar12 = (TQuat<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0 = local_res10[0];
  if (local_res20 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_res20,&PCGMetadataDomainID::Default)
       , pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_d8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_d8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_d8.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar13;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar13 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar13 = lVar6;
      }
    }
    if (*plVar13 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_d8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_b0._0_8_ = auVar4._0_8_;
      local_b8 = local_e0;
      FStack_b0.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_b0),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_b0.DebugName,(FString *)&local_c8);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_c8.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_b8);
        if (this_00 != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
          if (*(short *)&this_00->field_0x70 == 7) {
            FPCGMetadataAttribute<UE::Math::TQuat<double>_>::SetValue(this_00,*plVar13,pTVar12);
            return;
          }
          pFVar8 = PCG::Private::GetTypeName((FString *)&local_c8,7);
          pFVar7 = FText::FromString(&local_48,pFVar8);
          pFVar8 = PCG::Private::GetTypeName(&local_98,*(ushort *)&this_00->field_0x70);
          pFVar9 = FText::FromString(&local_38,pFVar8);
          pFVar10 = FText::FromName(&local_88,&local_e0);
          pFVar11 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_78,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar7 = FText::Format<FText,FText,FText>(&local_d8,pFVar11,pFVar10,pFVar9,pFVar7);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
          if (local_d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_c8.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_c8.TextData.Reference);
          return;
        }
      }
      pFVar7 = FText::FromName(&local_78,&local_e0);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_88,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_c8,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_d8.TextData.Reference = local_c8.TextData.Reference;
    }
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetRotatorAttribute @ 149ed8010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetRotatorAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  double *pdVar11;
  TRotator<double> *pTVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_1f8 [32];
  FName local_1c8;
  UPCGMetadata *local_1c0;
  FName local_1b8;
  FText local_1b0;
  FText local_1a0;
  FName local_188;
  FPCGMetadataDomainID FStack_180;
  FString local_168;
  FText local_158;
  FText local_148;
  TRotator<double> local_138;
  FText local_120;
  FText local_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar13);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar13);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar13);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1c0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  this = local_1c0;
  pTVar12 = &local_138;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    pTVar12 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  local_1b8 = local_1c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1c0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1c0,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_1b0);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_1b0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_1b0.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar11[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar11[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar11[0x19] = dVar5;
      }
    }
    if (pdVar11[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_1b0,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_180._0_8_ = auVar3._0_8_;
      local_188 = local_1b8;
      FStack_180.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_180),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_180.DebugName,(FString *)&local_1a0);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_1a0.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_1a0.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_188);
        if (this_00 != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
          if ((short)this_00->_padding_ == 0xb) {
            FPCGMetadataAttribute<UE::Math::TRotator<double>_>::SetValue
                      (this_00,(long64)pdVar11[0x19],pTVar12);
            return;
          }
          pFVar7 = PCG::Private::GetTypeName((FString *)&local_1a0,0xb);
          pFVar6 = FText::FromString(&local_120,pFVar7);
          pFVar7 = PCG::Private::GetTypeName(&local_168,(ushort)this_00->_padding_);
          pFVar8 = FText::FromString(&local_110,pFVar7);
          pFVar9 = FText::FromName(&local_158,&local_1b8);
          pFVar10 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_148,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar6 = FText::Format<FText,FText,FText>(&local_1b0,pFVar10,pFVar9,pFVar8,pFVar6);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
          if (local_1b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
          }
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if (local_1a0.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_1a0.TextData.Reference);
          return;
        }
      }
      pFVar6 = FText::FromName(&local_148,&local_1b8);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_158,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_1a0,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_1b0.TextData.Reference = local_1a0.TextData.Reference;
    }
    if (local_1b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetRotatorAttributeByMetadataKey @ 149ed8530

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetRotatorAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TRotator<double> *pTVar12;
  longlong *plVar13;
  FName local_res10 [2];
  UPCGMetadata *local_res20;
  longlong local_e8;
  FName local_e0;
  FText local_d8;
  FText local_c8;
  FName local_b8;
  FPCGMetadataDomainID FStack_b0;
  FString local_98;
  FText local_88;
  FText local_78;
  TRotator<double> local_68;
  FText local_50;
  FText local_40;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res20 = (UPCGMetadata *)0x0;
  plVar13 = &local_e8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar13 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  this = local_res20;
  pTVar12 = &local_68;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    pTVar12 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0 = local_res10[0];
  if (local_res20 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_res20,&PCGMetadataDomainID::Default)
       , pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_d8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_d8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_d8.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar13;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar13 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar13 = lVar6;
      }
    }
    if (*plVar13 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_d8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_b0._0_8_ = auVar4._0_8_;
      local_b8 = local_e0;
      FStack_b0.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_b0),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_b0.DebugName,(FString *)&local_c8);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_c8.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_b8);
        if (this_00 != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
          if ((short)this_00->_padding_ == 0xb) {
            FPCGMetadataAttribute<UE::Math::TRotator<double>_>::SetValue(this_00,*plVar13,pTVar12);
            return;
          }
          pFVar8 = PCG::Private::GetTypeName((FString *)&local_c8,0xb);
          pFVar7 = FText::FromString(&local_50,pFVar8);
          pFVar8 = PCG::Private::GetTypeName(&local_98,(ushort)this_00->_padding_);
          pFVar9 = FText::FromString(&local_40,pFVar8);
          pFVar10 = FText::FromName(&local_88,&local_e0);
          pFVar11 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_78,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar7 = FText::Format<FText,FText,FText>(&local_d8,pFVar11,pFVar10,pFVar9,pFVar7);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
          if (local_d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_c8.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_c8.TextData.Reference);
          return;
        }
      }
      pFVar7 = FText::FromName(&local_78,&local_e0);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_88,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_c8,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_d8.TextData.Reference = local_c8.TextData.Reference;
    }
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetSoftClassPathAttribute @ 149ed8920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetSoftClassPathAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<FSoftClassPath> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FSoftClassPath *pFVar11;
  double *pdVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_1f8 [32];
  FName local_1c8;
  UPCGMetadata *local_1c0;
  FName local_1b8;
  FText local_1b0;
  FText local_1a0;
  undefined1 local_190 [16];
  void *local_180;
  undefined8 local_178;
  FName local_168;
  FPCGMetadataDomainID FStack_160;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar13);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar13);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar13);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1c0 = (UPCGMetadata *)0x0;
  pdVar12 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar12 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_190._0_8_ = 0;
  local_190._8_8_ = 0;
  local_180 = (void *)0x0;
  local_178 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_190,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_190);
  }
  this = local_1c0;
  pFVar11 = (FSoftClassPath *)local_190;
  if ((FSoftClassPath *)param_2->MostRecentPropertyAddress != (FSoftClassPath *)0x0) {
    pFVar11 = (FSoftClassPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1b8 = local_1c8;
  if (local_1c0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1c0,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_1b0);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_1b0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_1b0.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar12[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar12[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar12[0x19] = dVar5;
      }
    }
    if (pdVar12[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_1b0,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_160._0_8_ = auVar3._0_8_;
      local_168 = local_1b8;
      FStack_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_160),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_160.DebugName,(FString *)&local_1a0);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_1a0.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_1a0.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<FSoftClassPath> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_168);
        if (this_00 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
          if ((short)this_00->_padding_ == 0xe) {
            FPCGMetadataAttribute<FSoftClassPath>::SetValue(this_00,(long64)pdVar12[0x19],pFVar11);
          }
          else {
            pFVar7 = PCG::Private::GetTypeName((FString *)&local_1a0,0xe);
            pFVar6 = FText::FromString(&local_118,pFVar7);
            pFVar7 = PCG::Private::GetTypeName(&local_148,(ushort)this_00->_padding_);
            pFVar8 = FText::FromString(&local_108,pFVar7);
            pFVar9 = FText::FromName(&local_138,&local_1b8);
            pFVar10 = FTextFormat::FTextFormat
                                ((FTextFormat *)&local_128,
                                 &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
            pFVar6 = FText::Format<FText,FText,FText>(&local_1b0,pFVar10,pFVar9,pFVar8,pFVar6);
            UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
            if (local_1b0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
            }
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            if (local_1a0.TextData.Reference != (ITextData *)0x0) {
              FMemory::Free(local_1a0.TextData.Reference);
            }
          }
          goto LAB_149ed8e19;
        }
      }
      pFVar6 = FText::FromName(&local_128,&local_1b8);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_138,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_1a0,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_1b0.TextData.Reference = local_1a0.TextData.Reference;
    }
    if (local_1b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
    }
  }
LAB_149ed8e19:
  if (local_180 != (void *)0x0) {
    FMemory::Free(local_180);
  }
  return;
}

// execSetSoftClassPathAttributeByMetadataKey @ 149ed8e60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetSoftClassPathAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<FSoftClassPath> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  FSoftClassPath *pFVar12;
  longlong *plVar13;
  FName local_res10 [2];
  UPCGMetadata *local_res20;
  longlong local_e8;
  FName local_e0;
  FText local_d8;
  FText local_c8;
  undefined1 local_b8 [16];
  void *local_a8;
  undefined8 local_a0;
  FName local_98;
  FPCGMetadataDomainID FStack_90;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res20 = (UPCGMetadata *)0x0;
  plVar13 = &local_e8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar13 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  this = local_res20;
  pFVar12 = (FSoftClassPath *)local_b8;
  if ((FSoftClassPath *)param_2->MostRecentPropertyAddress != (FSoftClassPath *)0x0) {
    pFVar12 = (FSoftClassPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0 = local_res10[0];
  if (local_res20 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_res20,&PCGMetadataDomainID::Default)
       , pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_d8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_d8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_d8.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar13;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar13 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar13 = lVar6;
      }
    }
    if (*plVar13 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_d8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_90._0_8_ = auVar4._0_8_;
      local_98 = local_e0;
      FStack_90.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_90),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_90.DebugName,(FString *)&local_c8);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_c8.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<FSoftClassPath> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_98);
        if (this_00 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
          if ((short)this_00->_padding_ == 0xe) {
            FPCGMetadataAttribute<FSoftClassPath>::SetValue(this_00,*plVar13,pFVar12);
          }
          else {
            pFVar8 = PCG::Private::GetTypeName((FString *)&local_c8,0xe);
            pFVar7 = FText::FromString(&local_48,pFVar8);
            pFVar8 = PCG::Private::GetTypeName(&local_78,(ushort)this_00->_padding_);
            pFVar9 = FText::FromString(&local_38,pFVar8);
            pFVar10 = FText::FromName(&local_68,&local_e0);
            pFVar11 = FTextFormat::FTextFormat
                                ((FTextFormat *)&local_58,
                                 &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
            pFVar7 = FText::Format<FText,FText,FText>(&local_d8,pFVar11,pFVar10,pFVar9,pFVar7);
            UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
            if (local_d8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_c8.TextData.Reference != (ITextData *)0x0) {
              FMemory::Free(local_c8.TextData.Reference);
            }
          }
          goto LAB_149ed9243;
        }
      }
      pFVar7 = FText::FromName(&local_58,&local_e0);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_68,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_c8,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_d8.TextData.Reference = local_c8.TextData.Reference;
    }
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
  }
LAB_149ed9243:
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execSetSoftObjectPathAttribute @ 149ed9270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetSoftObjectPathAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<FSoftObjectPath> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FSoftObjectPath *pFVar11;
  double *pdVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_1f8 [32];
  FName local_1c8;
  UPCGMetadata *local_1c0;
  FName local_1b8;
  FText local_1b0;
  FText local_1a0;
  FSoftObjectPath local_190;
  FName local_168;
  FPCGMetadataDomainID FStack_160;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar13);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar13);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar13);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1c0 = (UPCGMetadata *)0x0;
  pdVar12 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar12 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_190.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_190.AssetPath.PackageName.Number = 0;
  local_190.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_190.AssetPath.AssetName.Number = 0;
  local_190.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190.SubPathString.Data.ArrayNum = 0;
  local_190.SubPathString.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  this = local_1c0;
  pFVar11 = &local_190;
  if ((FSoftObjectPath *)param_2->MostRecentPropertyAddress != (FSoftObjectPath *)0x0) {
    pFVar11 = (FSoftObjectPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1b8 = local_1c8;
  if (local_1c0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1c0,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_1b0);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_1b0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_1b0.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar12[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar12[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar12[0x19] = dVar5;
      }
    }
    if (pdVar12[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_1b0,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_160._0_8_ = auVar3._0_8_;
      local_168 = local_1b8;
      FStack_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_160),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_160.DebugName,(FString *)&local_1a0);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_1a0.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_1a0.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<FSoftObjectPath> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_168);
        if (this_00 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
          if ((short)this_00->_padding_ == 0xd) {
            FPCGMetadataAttribute<FSoftObjectPath>::SetValue(this_00,(long64)pdVar12[0x19],pFVar11);
          }
          else {
            pFVar7 = PCG::Private::GetTypeName((FString *)&local_1a0,0xd);
            pFVar6 = FText::FromString(&local_118,pFVar7);
            pFVar7 = PCG::Private::GetTypeName(&local_148,(ushort)this_00->_padding_);
            pFVar8 = FText::FromString(&local_108,pFVar7);
            pFVar9 = FText::FromName(&local_138,&local_1b8);
            pFVar10 = FTextFormat::FTextFormat
                                ((FTextFormat *)&local_128,
                                 &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
            pFVar6 = FText::Format<FText,FText,FText>(&local_1b0,pFVar10,pFVar9,pFVar8,pFVar6);
            UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
            if (local_1b0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
            }
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            if (local_1a0.TextData.Reference != (ITextData *)0x0) {
              FMemory::Free(local_1a0.TextData.Reference);
            }
          }
          goto LAB_149ed9769;
        }
      }
      pFVar6 = FText::FromName(&local_128,&local_1b8);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_138,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_1a0,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_1b0.TextData.Reference = local_1a0.TextData.Reference;
    }
    if (local_1b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
    }
  }
LAB_149ed9769:
  if (local_190.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetSoftObjectPathAttributeByMetadataKey @ 149ed97b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetSoftObjectPathAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<FSoftObjectPath> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  FSoftObjectPath *pFVar12;
  longlong *plVar13;
  FName local_res10 [2];
  UPCGMetadata *local_res20;
  longlong local_e8;
  FName local_e0;
  FText local_d8;
  FText local_c8;
  FSoftObjectPath local_b8;
  FName local_98;
  FPCGMetadataDomainID FStack_90;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res20 = (UPCGMetadata *)0x0;
  plVar13 = &local_e8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar13 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  local_b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_b8.AssetPath.PackageName.Number = 0;
  local_b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_b8.AssetPath.AssetName.Number = 0;
  local_b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.SubPathString.Data.ArrayNum = 0;
  local_b8.SubPathString.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  this = local_res20;
  pFVar12 = &local_b8;
  if ((FSoftObjectPath *)param_2->MostRecentPropertyAddress != (FSoftObjectPath *)0x0) {
    pFVar12 = (FSoftObjectPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0 = local_res10[0];
  if (local_res20 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_res20,&PCGMetadataDomainID::Default)
       , pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_d8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_d8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_d8.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar13;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar13 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar13 = lVar6;
      }
    }
    if (*plVar13 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_d8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_90._0_8_ = auVar4._0_8_;
      local_98 = local_e0;
      FStack_90.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_90),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_90.DebugName,(FString *)&local_c8);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_c8.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<FSoftObjectPath> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_98);
        if (this_00 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
          if ((short)this_00->_padding_ == 0xd) {
            FPCGMetadataAttribute<FSoftObjectPath>::SetValue(this_00,*plVar13,pFVar12);
          }
          else {
            pFVar8 = PCG::Private::GetTypeName((FString *)&local_c8,0xd);
            pFVar7 = FText::FromString(&local_48,pFVar8);
            pFVar8 = PCG::Private::GetTypeName(&local_78,(ushort)this_00->_padding_);
            pFVar9 = FText::FromString(&local_38,pFVar8);
            pFVar10 = FText::FromName(&local_68,&local_e0);
            pFVar11 = FTextFormat::FTextFormat
                                ((FTextFormat *)&local_58,
                                 &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
            pFVar7 = FText::Format<FText,FText,FText>(&local_d8,pFVar11,pFVar10,pFVar9,pFVar7);
            UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
            if (local_d8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_c8.TextData.Reference != (ITextData *)0x0) {
              FMemory::Free(local_c8.TextData.Reference);
            }
          }
          goto LAB_149ed9b93;
        }
      }
      pFVar7 = FText::FromName(&local_58,&local_e0);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_68,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_c8,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_d8.TextData.Reference = local_c8.TextData.Reference;
    }
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
  }
LAB_149ed9b93:
  if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetStringAttribute @ 149ed9bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetStringAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<FString> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  UPCGMetadata *local_1b0;
  FName local_1a8;
  FString local_1a0;
  FText local_190;
  FText local_180;
  FName local_168;
  FPCGMetadataDomainID FStack_160;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar12);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar13,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1b0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.Data.ArrayNum = 0;
  local_1a0.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  this = local_1b0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1a8 = local_1b8;
  if (local_1b0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1b0,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_190);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_190.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_190.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar11[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar11[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar11[0x19] = dVar5;
      }
    }
    if (pdVar11[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_190,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_160._0_8_ = auVar3._0_8_;
      local_168 = local_1a8;
      FStack_160.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_160),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_160.DebugName,(FString *)&local_180);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_180.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_180.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<FString> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_168);
        if (this_00 != (FPCGMetadataAttribute<FString> *)0x0) {
          if ((short)this_00->_padding_ == 9) {
            FPCGMetadataAttribute<FString>::SetValue(this_00,(long64)pdVar11[0x19],&local_1a0);
          }
          else {
            pFVar7 = PCG::Private::GetTypeName((FString *)&local_180,9);
            pFVar6 = FText::FromString(&local_118,pFVar7);
            pFVar7 = PCG::Private::GetTypeName(&local_148,(ushort)this_00->_padding_);
            pFVar8 = FText::FromString(&local_108,pFVar7);
            pFVar9 = FText::FromName(&local_138,&local_1a8);
            pFVar10 = FTextFormat::FTextFormat
                                ((FTextFormat *)&local_128,
                                 &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
            pFVar6 = FText::Format<FText,FText,FText>(&local_190,pFVar10,pFVar9,pFVar8,pFVar6);
            UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
            if (local_190.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
            }
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            if (local_180.TextData.Reference != (ITextData *)0x0) {
              FMemory::Free(local_180.TextData.Reference);
            }
          }
          goto LAB_149eda09c;
        }
      }
      pFVar6 = FText::FromName(&local_128,&local_1a8);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_138,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_180,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_190.TextData.Reference = local_180.TextData.Reference;
    }
    if (local_190.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
    }
  }
LAB_149eda09c:
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetStringAttributeByMetadataKey @ 149eda0e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetStringAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<FString> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong *plVar12;
  FName local_res10 [2];
  UPCGMetadata *local_res20;
  longlong local_d8;
  FName local_d0;
  FString local_c8;
  FText local_b8;
  FText local_a8;
  FName local_98;
  FPCGMetadataDomainID FStack_90;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_d8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res20 = (UPCGMetadata *)0x0;
  plVar12 = &local_d8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar12 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  this = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d0 = local_res10[0];
  if (local_res20 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_res20,&PCGMetadataDomainID::Default)
       , pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_b8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_b8.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar12;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar12 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar12 = lVar6;
      }
    }
    if (*plVar12 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_b8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_90._0_8_ = auVar4._0_8_;
      local_98 = local_d0;
      FStack_90.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_90),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_90.DebugName,(FString *)&local_a8);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_a8.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<FString> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_98);
        if (this_00 != (FPCGMetadataAttribute<FString> *)0x0) {
          if ((short)this_00->_padding_ == 9) {
            FPCGMetadataAttribute<FString>::SetValue(this_00,*plVar12,&local_c8);
          }
          else {
            pFVar8 = PCG::Private::GetTypeName((FString *)&local_a8,9);
            pFVar7 = FText::FromString(&local_48,pFVar8);
            pFVar8 = PCG::Private::GetTypeName(&local_78,(ushort)this_00->_padding_);
            pFVar9 = FText::FromString(&local_38,pFVar8);
            pFVar10 = FText::FromName(&local_68,&local_d0);
            pFVar11 = FTextFormat::FTextFormat
                                ((FTextFormat *)&local_58,
                                 &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
            pFVar7 = FText::Format<FText,FText,FText>(&local_b8,pFVar11,pFVar10,pFVar9,pFVar7);
            UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
            if (local_b8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_a8.TextData.Reference != (ITextData *)0x0) {
              FMemory::Free(local_a8.TextData.Reference);
            }
          }
          goto LAB_149eda4a2;
        }
      }
      pFVar7 = FText::FromName(&local_58,&local_d0);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_68,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_a8,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_b8.TextData.Reference = local_a8.TextData.Reference;
    }
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
LAB_149eda4a2:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetTransformAttribute @ 149eda4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetTransformAttribute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar14;
  double dVar15;
  FText *pFVar16;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this_00;
  FString *pFVar17;
  FText *pFVar18;
  FText *pFVar19;
  FTextFormat *pFVar20;
  double *pdVar21;
  TTransform<double> *pTVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStackY_238 [32];
  FName local_208;
  UPCGMetadata *local_200;
  FName local_1f8;
  FText local_1f0;
  FText local_1e0;
  FName local_1c8;
  FPCGMetadataDomainID FStack_1c0;
  FString local_1a8;
  FText local_198;
  FText local_188;
  FText local_178;
  FText local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_158 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_150 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_f8 = 0x3f800000;
  local_98 = 0x3f000000;
  local_90 = 0xffffffffffffffff;
  local_148 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_140 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_138._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_138._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_138._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_118._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_118._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_128 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_120 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar23 = (uint)__xmm_80000000000000008000000000000000;
  uVar24 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_108 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_100 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_e8 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar24,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar23);
  local_f0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar24,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar23);
  local_d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_d0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_b8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_b0 = _UNK_150689688;
  local_a8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_a0 = _UNK_150689688;
  local_e0 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar24,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar23);
  local_c8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_200 = (UPCGMetadata *)0x0;
  pdVar21 = &local_158;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar21 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_200,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_200);
  }
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.Rotation.ZW.m128d_f64[0] = (double)fVar7;
  local_88.Rotation.ZW.m128d_f64[1] = (double)fVar10;
  local_88.Translation.ZW.m128d_f64[0] = (double)fVar8;
  local_88.Translation.ZW.m128d_f64[1] = (double)fVar11;
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar5,0);
  local_88.Translation.XY.m128d_f64[0] = (double)fVar3;
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)fVar9;
  local_88.Scale3D.ZW.m128d_f64[1] = (double)fVar12;
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar6,0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)fVar4;
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  this = local_200;
  pTVar22 = &local_88;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar22 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  local_1f8 = local_208;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_200 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar14 = UPCGMetadata::FindOrCreateMetadataDomain(local_200,&PCGMetadataDomainID::Default),
       pFVar14 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_1f0);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_1f0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_1f0.TextData.Reference);
        }
      }
    }
    else {
      dVar15 = pdVar21[0x19];
      if (dVar15 == -NAN) {
        dVar15 = (double)FPCGMetadataDomain::AddEntry(pFVar14,-1);
        pdVar21[0x19] = dVar15;
      }
      else if ((longlong)dVar15 < pFVar14->ItemKeyOffset) {
        dVar15 = (double)FPCGMetadataDomain::AddEntry(pFVar14,(long64)dVar15);
        pdVar21[0x19] = dVar15;
      }
    }
    if (pdVar21[0x19] == -NAN) {
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_1f0,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                           L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar16);
    }
    else {
      auVar13._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar13[0] = PCGMetadataDomainID::Default.Flag;
      FStack_1c0._0_8_ = auVar13._0_8_;
      local_1c8 = local_1f8;
      FStack_1c0.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar14 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_1c0),
         pFVar14 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_1c0.DebugName,(FString *)&local_1e0);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_1e0.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_1e0.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar14,local_1c8);
        if (this_00 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
          if (*(short *)&this_00->field_0x70 == 8) {
            FPCGMetadataAttribute<UE::Math::TTransform<double>_>::SetValue
                      (this_00,(long64)pdVar21[0x19],pTVar22);
            return;
          }
          pFVar17 = PCG::Private::GetTypeName((FString *)&local_1e0,8);
          pFVar16 = FText::FromString(&local_178,pFVar17);
          pFVar17 = PCG::Private::GetTypeName(&local_1a8,*(ushort *)&this_00->field_0x70);
          pFVar18 = FText::FromString(&local_168,pFVar17);
          pFVar19 = FText::FromName(&local_198,&local_1f8);
          pFVar20 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_188,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar16 = FText::Format<FText,FText,FText>(&local_1f0,pFVar20,pFVar19,pFVar18,pFVar16);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar16);
          if (local_1f0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
          }
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
          if (local_1e0.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_1e0.TextData.Reference);
          return;
        }
      }
      pFVar16 = FText::FromName(&local_188,&local_1f8);
      pFVar20 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_198,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar16 = FText::Format<FText>(&local_1e0,pFVar20,pFVar16);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar16);
      local_1f0.TextData.Reference = local_1e0.TextData.Reference;
    }
    if (local_1f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetTransformAttributeByMetadataKey @ 149edaa50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetTransformAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar17;
  long64 lVar18;
  FText *pFVar19;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this_00;
  FString *pFVar20;
  FText *pFVar21;
  FText *pFVar22;
  FTextFormat *pFVar23;
  TTransform<double> *pTVar24;
  longlong *plVar25;
  undefined1 auStackY_168 [32];
  FName local_138;
  longlong local_130;
  UPCGMetadata *local_128;
  FName local_120;
  FText local_118;
  FText local_108;
  FName local_f8;
  FPCGMetadataDomainID FStack_f0;
  FString local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FText local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_130 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_128 = (UPCGMetadata *)0x0;
  plVar25 = &local_130;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar25 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar14 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar15 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar7,0);
  local_88.Rotation.XY.m128d_f64[0] = (double)fVar4;
  local_88.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_88.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar13,0);
  local_88.Rotation.ZW.m128d_f64[0] = (double)fVar10;
  local_88.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar8,0);
  local_88.Translation.XY.m128d_f64[0] = (double)fVar5;
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  local_88.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar14,0);
  local_88.Translation.ZW.m128d_f64[0] = (double)fVar11;
  local_88.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar9,0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)fVar6;
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar15,0);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)fVar12;
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  this = local_128;
  pTVar24 = &local_88;
  if ((TTransform<double> *)param_2->MostRecentPropertyAddress != (TTransform<double> *)0x0) {
    pTVar24 = (TTransform<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_120 = local_138;
  if (local_128 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar17 = UPCGMetadata::FindOrCreateMetadataDomain(local_128,&PCGMetadataDomainID::Default),
       pFVar17 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_118);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_118.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar25;
      if (lVar3 == -1) {
        lVar18 = FPCGMetadataDomain::AddEntry(pFVar17,-1);
        *plVar25 = lVar18;
      }
      else if (lVar3 < pFVar17->ItemKeyOffset) {
        lVar18 = FPCGMetadataDomain::AddEntry(pFVar17,lVar3);
        *plVar25 = lVar18;
      }
    }
    if (*plVar25 == -1) {
      pFVar19 = FText::AsLocalizable_Advanced_LocText
                          (&local_118,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                           L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar19);
    }
    else {
      auVar16._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar16[0] = PCGMetadataDomainID::Default.Flag;
      FStack_f0._0_8_ = auVar16._0_8_;
      local_f8 = local_120;
      FStack_f0.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar17 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_f0),
         pFVar17 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_f0.DebugName,(FString *)&local_108);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_108.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_108.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar17,local_f8);
        if (this_00 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
          if (*(short *)&this_00->field_0x70 == 8) {
            FPCGMetadataAttribute<UE::Math::TTransform<double>_>::SetValue(this_00,*plVar25,pTVar24)
            ;
            return;
          }
          pFVar20 = PCG::Private::GetTypeName((FString *)&local_108,8);
          pFVar19 = FText::FromString(&local_a8,pFVar20);
          pFVar20 = PCG::Private::GetTypeName(&local_d8,*(ushort *)&this_00->field_0x70);
          pFVar21 = FText::FromString(&local_98,pFVar20);
          pFVar22 = FText::FromName(&local_c8,&local_120);
          pFVar23 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_b8,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar19 = FText::Format<FText,FText,FText>(&local_118,pFVar23,pFVar22,pFVar21,pFVar19);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar19);
          if (local_118.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (local_108.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_108.TextData.Reference);
          return;
        }
      }
      pFVar19 = FText::FromName(&local_b8,&local_120);
      pFVar23 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_c8,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar19 = FText::Format<FText>(&local_108,pFVar23,pFVar19);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar19);
      local_118.TextData.Reference = local_108.TextData.Reference;
    }
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetVector2Attribute @ 149edaed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetVector2Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  double *pdVar11;
  TVector2<double> *pTVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_1e8 [32];
  FName local_1b8;
  UPCGMetadata *local_1b0;
  FName local_1a8;
  FText local_1a0;
  FText local_190;
  FName local_178;
  FPCGMetadataDomainID FStack_170;
  TVector2<double> local_158;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar13);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar13);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar13);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1b0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  local_1b8.ComparisonIndex.Value = 0;
  local_1b8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  this = local_1b0;
  pTVar12 = &local_158;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar12 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  local_1a8 = local_1b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1b0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1b0,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_1a0);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_1a0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_1a0.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar11[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar11[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar11[0x19] = dVar5;
      }
    }
    if (pdVar11[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_1a0,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_170._0_8_ = auVar3._0_8_;
      local_178 = local_1a8;
      FStack_170.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_170),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_170.DebugName,(FString *)&local_190);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_190.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_190.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_178);
        if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
          if ((short)this_00->_padding_ == 4) {
            FPCGMetadataAttribute<UE::Math::TVector2<double>_>::SetValue
                      (this_00,(long64)pdVar11[0x19],pTVar12);
            return;
          }
          pFVar7 = PCG::Private::GetTypeName((FString *)&local_190,4);
          pFVar6 = FText::FromString(&local_118,pFVar7);
          pFVar7 = PCG::Private::GetTypeName(&local_148,(ushort)this_00->_padding_);
          pFVar8 = FText::FromString(&local_108,pFVar7);
          pFVar9 = FText::FromName(&local_138,&local_1a8);
          pFVar10 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_128,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar6 = FText::Format<FText,FText,FText>(&local_1a0,pFVar10,pFVar9,pFVar8,pFVar6);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
          if (local_1a0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (local_190.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_190.TextData.Reference);
          return;
        }
      }
      pFVar6 = FText::FromName(&local_128,&local_1a8);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_138,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_190,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_1a0.TextData.Reference = local_190.TextData.Reference;
    }
    if (local_1a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetVector2AttributeByMetadataKey @ 149edb3f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetVector2AttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TVector2<double> *pTVar12;
  longlong *plVar13;
  FName local_res10 [2];
  UPCGMetadata *local_res20;
  longlong local_d8;
  FName local_d0;
  FText local_c8;
  FText local_b8;
  FName local_a8;
  FPCGMetadataDomainID FStack_a0;
  TVector2<double> local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_d8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res20 = (UPCGMetadata *)0x0;
  plVar13 = &local_d8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar13 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  this = local_res20;
  pTVar12 = &local_88;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar12 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d0 = local_res10[0];
  if (local_res20 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_res20,&PCGMetadataDomainID::Default)
       , pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_c8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_c8.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar13;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar13 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar13 = lVar6;
      }
    }
    if (*plVar13 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_c8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_a0._0_8_ = auVar4._0_8_;
      local_a8 = local_d0;
      FStack_a0.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_a0),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_a0.DebugName,(FString *)&local_b8);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_b8.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_a8);
        if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
          if ((short)this_00->_padding_ == 4) {
            FPCGMetadataAttribute<UE::Math::TVector2<double>_>::SetValue(this_00,*plVar13,pTVar12);
            return;
          }
          pFVar8 = PCG::Private::GetTypeName((FString *)&local_b8,4);
          pFVar7 = FText::FromString(&local_48,pFVar8);
          pFVar8 = PCG::Private::GetTypeName(&local_78,(ushort)this_00->_padding_);
          pFVar9 = FText::FromString(&local_38,pFVar8);
          pFVar10 = FText::FromName(&local_68,&local_d0);
          pFVar11 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_58,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar7 = FText::Format<FText,FText,FText>(&local_c8,pFVar11,pFVar10,pFVar9,pFVar7);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_b8.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_b8.TextData.Reference);
          return;
        }
      }
      pFVar7 = FText::FromName(&local_58,&local_d0);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_68,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_b8,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_c8.TextData.Reference = local_b8.TextData.Reference;
    }
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetVector4Attribute @ 149edb7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetVector4Attribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [12];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  double *pdVar11;
  TVector4<double>_u_0 *pTVar12;
  undefined1 auVar13 [16];
  undefined8 uVar15;
  undefined1 auVar14 [16];
  uint uVar16;
  uint uVar17;
  undefined1 auStackY_1f8 [32];
  FName local_1c8;
  UPCGMetadata *local_1c0;
  FName local_1b8;
  FText local_1b0;
  FText local_1a0;
  FName local_188;
  FPCGMetadataDomainID FStack_180;
  TVector4<double>_u_0 local_168;
  FString local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar16 = (uint)__xmm_80000000000000008000000000000000;
  uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar17,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar16);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar17,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar16);
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar17,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar16);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1c0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  auVar13 = ___xmm_3ff00000000000000000000000000000;
  local_168._s_0.X = 0.0;
  local_168._s_0.Y = 0.0;
  local_168._16_16_ = ___xmm_3ff00000000000000000000000000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  this = local_1c0;
  pTVar12 = &local_168;
  if ((TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector4<double>_u_0 *)0x0) {
    pTVar12 = (TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  local_1b8 = local_1c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1c0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return;
  }
  if (PCGMetadataDomainID::Default.Flag != Invalid) {
    pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1c0,&PCGMetadataDomainID::Default);
    uVar15 = auVar13._8_8_;
    if (pFVar4 != (FPCGMetadataDomain *)0x0) {
      dVar5 = pdVar11[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        uVar15 = auVar13._8_8_;
        pdVar11[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        uVar15 = auVar13._8_8_;
        pdVar11[0x19] = dVar5;
      }
      goto LAB_149edbad6;
    }
  }
  uVar15 = auVar13._8_8_;
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_1b0);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    uVar15 = auVar13._8_8_;
    if (local_1b0.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_1b0.TextData.Reference);
      uVar15 = auVar13._8_8_;
    }
  }
LAB_149edbad6:
  if (pdVar11[0x19] == -NAN) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_1b0,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                        L"[PCG] Metadata key has no entry, therefore can\'t set values");
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
  }
  else {
    auVar13._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
    auVar13[0] = PCGMetadataDomainID::Default.Flag;
    FStack_180._0_8_ = auVar13._0_8_;
    auVar3._4_8_ = uVar15;
    auVar3._0_4_ = PCGMetadataDomainID::Default.CustomFlag;
    auVar14._0_8_ = auVar3._0_8_ << 0x20;
    auVar14._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
    auVar14._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
    local_188 = local_1b8;
    FStack_180.DebugName = auVar14._8_8_;
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_180),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&FStack_180.DebugName,(FString *)&local_1a0);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_1a0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_1a0.TextData.Reference);
        }
      }
    }
    else {
      this_00 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)
                FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_188);
      if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
        if (*(short *)&this_00->field_0x70 == 6) {
          FPCGMetadataAttribute<UE::Math::TVector4<double>_>::SetValue
                    (this_00,(long64)pdVar11[0x19],(TVector4<double> *)&pTVar12->_s_0);
          return;
        }
        pFVar7 = PCG::Private::GetTypeName((FString *)&local_1a0,6);
        pFVar6 = FText::FromString(&local_118,pFVar7);
        pFVar7 = PCG::Private::GetTypeName(&local_148,*(ushort *)&this_00->field_0x70);
        pFVar8 = FText::FromString(&local_108,pFVar7);
        pFVar9 = FText::FromName(&local_138,&local_1b8);
        pFVar10 = FTextFormat::FTextFormat
                            ((FTextFormat *)&local_128,
                             &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
        pFVar6 = FText::Format<FText,FText,FText>(&local_1b0,pFVar10,pFVar9,pFVar8,pFVar6);
        UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
        if (local_1b0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if (local_1a0.TextData.Reference == (ITextData *)0x0) {
          return;
        }
        FMemory::Free(local_1a0.TextData.Reference);
        return;
      }
    }
    pFVar6 = FText::FromName(&local_128,&local_1b8);
    pFVar10 = FTextFormat::FTextFormat
                        ((FTextFormat *)&local_138,
                         &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar6 = FText::Format<FText>(&local_1a0,pFVar10,pFVar6);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    local_1b0.TextData.Reference = local_1a0.TextData.Reference;
  }
  if (local_1b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
  }
  return;
}

// execSetVector4AttributeByMetadataKey @ 149edbd10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetVector4AttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [12];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TVector4<double>_u_0 *pTVar12;
  longlong *plVar13;
  undefined1 auVar14 [16];
  undefined8 uVar16;
  undefined1 auVar15 [16];
  FName local_res10 [2];
  UPCGMetadata *local_res20;
  longlong local_e8;
  FName local_e0;
  FText local_d8;
  FText local_c8;
  FName local_b8;
  FPCGMetadataDomainID FStack_b0;
  TVector4<double>_u_0 local_98;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res20 = (UPCGMetadata *)0x0;
  plVar13 = &local_e8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar13 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  auVar14 = ___xmm_3ff00000000000000000000000000000;
  local_98._s_0.X = 0.0;
  local_98._s_0.Y = 0.0;
  local_98._16_16_ = ___xmm_3ff00000000000000000000000000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  this = local_res20;
  pTVar12 = &local_98;
  if ((TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector4<double>_u_0 *)0x0) {
    pTVar12 = (TVector4<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0 = local_res10[0];
  if (local_res20 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
    return;
  }
  if (PCGMetadataDomainID::Default.Flag != Invalid) {
    pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_res20,&PCGMetadataDomainID::Default);
    uVar16 = auVar14._8_8_;
    if (pFVar5 != (FPCGMetadataDomain *)0x0) {
      lVar3 = *plVar13;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        uVar16 = auVar14._8_8_;
        *plVar13 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        uVar16 = auVar14._8_8_;
        *plVar13 = lVar6;
      }
      goto LAB_149edbf08;
    }
  }
  uVar16 = auVar14._8_8_;
  if (1 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_d8);
    UE::Logging::Private::BasicLog<2>
              (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    uVar16 = auVar14._8_8_;
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_d8.TextData.Reference);
      uVar16 = auVar14._8_8_;
    }
  }
LAB_149edbf08:
  if (*plVar13 == -1) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_d8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                        L"[PCG] Metadata key has no entry, therefore can\'t set values");
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
  }
  else {
    auVar14._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
    auVar14[0] = PCGMetadataDomainID::Default.Flag;
    FStack_b0._0_8_ = auVar14._0_8_;
    auVar4._4_8_ = uVar16;
    auVar4._0_4_ = PCGMetadataDomainID::Default.CustomFlag;
    auVar15._0_8_ = auVar4._0_8_ << 0x20;
    auVar15._8_4_ = PCGMetadataDomainID::Default.DebugName.ComparisonIndex.Value;
    auVar15._12_4_ = PCGMetadataDomainID::Default.DebugName.Number;
    local_b8 = local_e0;
    FStack_b0.DebugName = auVar15._8_8_;
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_b0),
       pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&FStack_b0.DebugName,(FString *)&local_c8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_c8.TextData.Reference);
        }
      }
    }
    else {
      this_00 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)
                FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_b8);
      if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
        if (*(short *)&this_00->field_0x70 == 6) {
          FPCGMetadataAttribute<UE::Math::TVector4<double>_>::SetValue
                    (this_00,*plVar13,(TVector4<double> *)&pTVar12->_s_0);
          return;
        }
        pFVar8 = PCG::Private::GetTypeName((FString *)&local_c8,6);
        pFVar7 = FText::FromString(&local_48,pFVar8);
        pFVar8 = PCG::Private::GetTypeName(&local_78,*(ushort *)&this_00->field_0x70);
        pFVar9 = FText::FromString(&local_38,pFVar8);
        pFVar10 = FText::FromName(&local_68,&local_e0);
        pFVar11 = FTextFormat::FTextFormat
                            ((FTextFormat *)&local_58,&PCGMetadataAccessorHelpers::InvalidTypeFormat
                             ,Default);
        pFVar7 = FText::Format<FText,FText,FText>(&local_d8,pFVar11,pFVar10,pFVar9,pFVar7);
        UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
        if (local_d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_c8.TextData.Reference == (ITextData *)0x0) {
          return;
        }
        FMemory::Free(local_c8.TextData.Reference);
        return;
      }
    }
    pFVar7 = FText::FromName(&local_58,&local_e0);
    pFVar11 = FTextFormat::FTextFormat
                        ((FTextFormat *)&local_68,
                         &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
    pFVar7 = FText::Format<FText>(&local_c8,pFVar11,pFVar7);
    UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    local_d8.TextData.Reference = local_c8.TextData.Reference;
  }
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  return;
}

// execSetVectorAttribute @ 149edc120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetVectorAttribute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar4;
  double dVar5;
  FText *pFVar6;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_00;
  FString *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  double *pdVar11;
  TVector<double> *pTVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_1f8 [32];
  FName local_1c8;
  UPCGMetadata *local_1c0;
  FName local_1b8;
  FText local_1b0;
  FText local_1a0;
  FName local_188;
  FPCGMetadataDomainID FStack_180;
  FString local_168;
  FText local_158;
  FText local_148;
  TVector<double> local_138;
  FText local_120;
  FText local_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98 = 0x3f800000;
  local_38 = 0x3f000000;
  local_30 = 0xffffffffffffffff;
  local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_88 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar13);
  local_90 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar13);
  local_78 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  local_48 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_40 = _UNK_150689688;
  local_80 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                            0x20) ^ uVar14,
                      SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar13);
  local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_1c0 = (UPCGMetadata *)0x0;
  pdVar11 = &local_f8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar11 = (double *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  this = local_1c0;
  pTVar12 = &local_138;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar12 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  local_1b8 = local_1c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_1c0 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(local_1c0,&PCGMetadataDomainID::Default),
       pFVar4 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_1b0);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_1b0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_1b0.TextData.Reference);
        }
      }
    }
    else {
      dVar5 = pdVar11[0x19];
      if (dVar5 == -NAN) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,-1);
        pdVar11[0x19] = dVar5;
      }
      else if ((longlong)dVar5 < pFVar4->ItemKeyOffset) {
        dVar5 = (double)FPCGMetadataDomain::AddEntry(pFVar4,(long64)dVar5);
        pdVar11[0x19] = dVar5;
      }
    }
    if (pdVar11[0x19] == -NAN) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_1b0,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
    }
    else {
      auVar3._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar3[0] = PCGMetadataDomainID::Default.Flag;
      FStack_180._0_8_ = auVar3._0_8_;
      local_188 = local_1b8;
      FStack_180.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar4 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_180),
         pFVar4 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_180.DebugName,(FString *)&local_1a0);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_1a0.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_1a0.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar4,local_188);
        if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
          if ((short)this_00->_padding_ == 5) {
            FPCGMetadataAttribute<UE::Math::TVector<double>_>::SetValue
                      (this_00,(long64)pdVar11[0x19],pTVar12);
            return;
          }
          pFVar7 = PCG::Private::GetTypeName((FString *)&local_1a0,5);
          pFVar6 = FText::FromString(&local_120,pFVar7);
          pFVar7 = PCG::Private::GetTypeName(&local_168,(ushort)this_00->_padding_);
          pFVar8 = FText::FromString(&local_110,pFVar7);
          pFVar9 = FText::FromName(&local_158,&local_1b8);
          pFVar10 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_148,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar6 = FText::Format<FText,FText,FText>(&local_1b0,pFVar10,pFVar9,pFVar8,pFVar6);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
          if (local_1b0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
          }
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if (local_1a0.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_1a0.TextData.Reference);
          return;
        }
      }
      pFVar6 = FText::FromName(&local_148,&local_1b8);
      pFVar10 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_158,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar6 = FText::Format<FText>(&local_1a0,pFVar10,pFVar6);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar6);
      local_1b0.TextData.Reference = local_1a0.TextData.Reference;
    }
    if (local_1b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
    }
  }
  return;
}

// execSetVectorAttributeByMetadataKey @ 149edc640

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGMetadataAccessorHelpers::execSetVectorAttributeByMetadataKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UPCGMetadata *this;
  FPCGMetadataDomain *pFVar5;
  long64 lVar6;
  FText *pFVar7;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_00;
  FString *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  TVector<double> *pTVar12;
  longlong *plVar13;
  FName local_res10 [2];
  UPCGMetadata *local_res20;
  longlong local_e8;
  FName local_e0;
  FText local_d8;
  FText local_c8;
  FName local_b8;
  FPCGMetadataDomainID FStack_b0;
  FString local_98;
  FText local_88;
  FText local_78;
  TVector<double> local_68;
  FText local_50;
  FText local_40;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res20 = (UPCGMetadata *)0x0;
  plVar13 = &local_e8;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar13 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  this = local_res20;
  pTVar12 = &local_68;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar12 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e0 = local_res10[0];
  if (local_res20 == (UPCGMetadata *)0x0) {
    UPCGBlueprintHelpers::ThrowBlueprintException(&PCGMetadataAccessorHelpers::NoMetadata);
  }
  else {
    if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
       (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(local_res20,&PCGMetadataDomainID::Default)
       , pFVar5 == (FPCGMetadataDomain *)0x0)) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&PCGMetadataDomainID::Default.DebugName,(FString *)&local_d8);
        UE::Logging::Private::BasicLog<2>
                  (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64>(FPCGMetadataDomainID_const&___ptr64,bool_(__cdecl_FPCGMetadataDomain::*)(__int64&___ptr64,__int64,FPCGMetadataDomain_const*___ptr64,__int64,FPCGMetadataDomain_const*___ptr64)___ptr64,__int64&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64,__int64&___ptr64,FPCGMetadataDomain_const*___ptr64&&___ptr64)___ptr64'
                    ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_d8.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_d8.TextData.Reference);
        }
      }
    }
    else {
      lVar3 = *plVar13;
      if (lVar3 == -1) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,-1);
        *plVar13 = lVar6;
      }
      else if (lVar3 < pFVar5->ItemKeyOffset) {
        lVar6 = FPCGMetadataDomain::AddEntry(pFVar5,lVar3);
        *plVar13 = lVar6;
      }
    }
    if (*plVar13 == -1) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_d8,L"PCGMetadataAccessorHelpers",L"NoMetadataEntry",
                          L"[PCG] Metadata key has no entry, therefore can\'t set values");
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
    }
    else {
      auVar4._1_15_ = (undefined1  [15])PCGMetadataDomainID::Default._1_15_;
      auVar4[0] = PCGMetadataDomainID::Default.Flag;
      FStack_b0._0_8_ = auVar4._0_8_;
      local_b8 = local_e0;
      FStack_b0.DebugName = PCGMetadataDomainID::Default.DebugName;
      if ((PCGMetadataDomainID::Default.Flag == Invalid) ||
         (pFVar5 = UPCGMetadata::FindOrCreateMetadataDomain(this,&FStack_b0),
         pFVar5 == (FPCGMetadataDomain *)0x0)) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(&FStack_b0.DebugName,(FString *)&local_c8);
          UE::Logging::Private::BasicLog<2>
                    (&`private:_UNKNOWN___cdecl_UPCGMetadata::WithMetadataDomain<class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64>(FPCGMetadataDomainID_const&___ptr64,class_FPCGMetadataAttributeBase*___ptr64_(__cdecl_FPCGMetadataDomain::*)(FName)___ptr64,FName&___ptr64)___ptr64'
                      ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_c8.TextData.Reference);
          }
        }
      }
      else {
        this_00 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                  FPCGMetadataDomain::GetMutableAttribute(pFVar5,local_b8);
        if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
          if ((short)this_00->_padding_ == 5) {
            FPCGMetadataAttribute<UE::Math::TVector<double>_>::SetValue(this_00,*plVar13,pTVar12);
            return;
          }
          pFVar8 = PCG::Private::GetTypeName((FString *)&local_c8,5);
          pFVar7 = FText::FromString(&local_50,pFVar8);
          pFVar8 = PCG::Private::GetTypeName(&local_98,(ushort)this_00->_padding_);
          pFVar9 = FText::FromString(&local_40,pFVar8);
          pFVar10 = FText::FromName(&local_88,&local_e0);
          pFVar11 = FTextFormat::FTextFormat
                              ((FTextFormat *)&local_78,
                               &PCGMetadataAccessorHelpers::InvalidTypeFormat,Default);
          pFVar7 = FText::Format<FText,FText,FText>(&local_d8,pFVar11,pFVar10,pFVar9,pFVar7);
          UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
          if (local_d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
          }
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (local_c8.TextData.Reference == (ITextData *)0x0) {
            return;
          }
          FMemory::Free(local_c8.TextData.Reference);
          return;
        }
      }
      pFVar7 = FText::FromName(&local_78,&local_e0);
      pFVar11 = FTextFormat::FTextFormat
                          ((FTextFormat *)&local_88,
                           &PCGMetadataAccessorHelpers::InvalidAttributeNameFormat,Default);
      pFVar7 = FText::Format<FText>(&local_c8,pFVar11,pFVar7);
      UPCGBlueprintHelpers::ThrowBlueprintException(pFVar7);
      local_d8.TextData.Reference = local_c8.TextData.Reference;
    }
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
  }
  return;
}

