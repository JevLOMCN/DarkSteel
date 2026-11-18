// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 7

// FHairStrandsInterpolationResource @ 14e03cd30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsInterpolationResource * __thiscall
FHairStrandsInterpolationResource::FHairStrandsInterpolationResource
          (FHairStrandsInterpolationResource *this,FHairStrandsInterpolationBulkData *param_1,
          FHairResourceName *param_2,FName *param_3)

{
  code *pcVar1;
  bool bVar2;
  FHairStrandsInterpolationResource *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  this->_padding_ = (longlong)&___7FHairStrandsInterpolationResource__6B_;
  (this->CurveInterpolationBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CurveInterpolationBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  *(undefined8 *)&(this->CurveInterpolationBuffer).Format = 0;
  (this->CurveInterpolationBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CurveInterpolationBuffer).Format = PF_Unknown;
  (this->PointInterpolationBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PointInterpolationBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  *(undefined8 *)&(this->PointInterpolationBuffer).Format = 0;
  (this->PointInterpolationBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PointInterpolationBuffer).Format = PF_Unknown;
  this->BulkData = param_1;
  *(undefined4 *)&this->_padding_ = 0;
  if (((param_1->Header).Flags & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!!(BulkData.Header.Flags & FHairStrandsInterpolationBulkData::DataFlags_HasData)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                       ,0x77d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FHairStrandsInterpolationResource *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// GetFriendlyName @ 14e0502b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FHairStrandsInterpolationResource::GetFriendlyName
          (FHairStrandsInterpolationResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairStrandsInterpolationResource");
  return __return_storage_ptr__;
}

// InternalAllocate @ 14e055d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsInterpolationResource::InternalAllocate
          (FHairStrandsInterpolationResource *this,FRDGBuilder *param_1)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  FHairTranscoding local_68;
  FHairTranscoding local_38;
  
  bVar3 = FHairStreamingRequest::IsCompleted((FHairStreamingRequest *)&this->_padding_);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StreamingRequest.IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                       ,0x798,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (FName *)((longlong)&this->_padding_ + 4);
  local_68._0_8_ = (ulonglong)(uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X << 0x20;
  local_68.PositionOffset.field0_0x0._4_8_ =
       CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y);
  local_68.PositionScale.field0_0x0._s_0.X = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_68.PositionScale.field0_0x0._s_0.Y = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  local_68.PositionScale.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_68.UncompressedTotalSizeInBytes = 0;
  local_68.UncompressedOffsetInBytes = 0;
  InternalCreateByteAddressBufferRDG_FromHairBulkData
            (param_1,&(this->BulkData->Data).CurveInterpolation,&this->CurveInterpolationBuffer,
             L"Hair.StrandsInterpolation_CurveInterpolationBuffer",pFVar1,Static,&local_68);
  local_38._0_8_ = (ulonglong)(uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X << 0x20;
  local_38.PositionOffset.field0_0x0._4_8_ =
       CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y);
  local_38.PositionScale.field0_0x0._s_0.X = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  local_38.PositionScale.field0_0x0._s_0.Y = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  local_38.PositionScale.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_38.UncompressedTotalSizeInBytes = 0;
  local_38.UncompressedOffsetInBytes = 0;
  InternalCreateByteAddressBufferRDG_FromHairBulkData
            (param_1,&(this->BulkData->Data).PointInterpolation,&this->PointInterpolationBuffer,
             L"Hair.StrandsInterpolation_PointInterpolationBuffer",pFVar1,Static,&local_38);
  return;
}

// InternalGetBulkData @ 14e058070

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsBulkCommon * __thiscall
FHairStrandsInterpolationResource::InternalGetBulkData(FHairStrandsInterpolationResource *this)

{
  return (FHairStrandsBulkCommon *)this->BulkData;
}

// InternalGetOrRequestData @ 14e058150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FHairStrandsInterpolationResource::InternalGetOrRequestData
          (FHairStrandsInterpolationResource *this,uint param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = FHairStreamingRequest::IsNone((FHairStreamingRequest *)&this->_padding_);
  if (bVar1) {
    bVar1 = FHairStrandsInterpolationBulkData::IsCookedBulkDataLoadedForCPUAccess(this->BulkData);
    if (bVar1) {
      *(uint *)&this->_padding_ = param_1;
      *(uint *)((longlong)&this->_padding_ + 4) = param_2;
      return true;
    }
    FHairStreamingRequest::Request
              ((FHairStreamingRequest *)&this->_padding_,param_1,param_2,
               (FHairStrandsBulkCommon *)this->BulkData,false,false,false,
               (FName *)((longlong)&this->_padding_ + 4),(bool *)0x0);
  }
  bVar1 = FHairStreamingRequest::IsCompleted((FHairStreamingRequest *)&this->_padding_);
  return bVar1;
}

// InternalRelease @ 14e058720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairStrandsInterpolationResource::InternalRelease(FHairStrandsInterpolationResource *this)

{
  FRDGExternalBuffer::Release(&this->CurveInterpolationBuffer);
  FRDGExternalBuffer::Release(&this->PointInterpolationBuffer);
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// InternalResetLoadedSize @ 14e058cf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairStrandsInterpolationResource::InternalResetLoadedSize(FHairStrandsInterpolationResource *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e058cfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->BulkData->_padding_ + 0x28))();
  return;
}

