// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 3

// StaticStruct @ 14cfad230

UScriptStruct * __cdecl FLiveLinkCameraFrameData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraFrameData,(UObject *)pUVar1,
                         L"LiveLinkCameraFrameData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.OuterSingleton;
}

// FLiveLinkCameraFrameData @ 14cfb5340

FLiveLinkCameraFrameData * __thiscall
FLiveLinkCameraFrameData::FLiveLinkCameraFrameData(FLiveLinkCameraFrameData *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)this);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  this->_padding_ = (longlong)(double)fVar1;
  this->_padding_ = (longlong)(double)fVar2;
  this->_padding_ = (longlong)(double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  this->_padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
  this->_padding_ = (longlong)(double)fVar1;
  this->_padding_ = (longlong)(double)fVar2;
  this->_padding_ = (longlong)(double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
  this->_padding_ = (longlong)(double)fVar1;
  this->_padding_ = (longlong)(double)fVar2;
  this->_padding_ = (longlong)(double)fVar3;
  this->FieldOfView = 90.0;
  this->AspectRatio = 1.777778;
  this->FocalLength = 50.0;
  this->Aperture = 2.8;
  this->FocusDistance = 100000.0;
  this->ProjectionMode = Perspective;
  this->FilmBackWidth = -1.0;
  this->FilmBackHeight = -1.0;
  return this;
}

// operator= @ 14cfb6bd0

FLiveLinkCameraFrameData * __thiscall
FLiveLinkCameraFrameData::operator=
          (FLiveLinkCameraFrameData *this,FLiveLinkCameraFrameData *param_1)

{
  longlong lVar1;
  
  FLiveLinkBaseFrameData::operator=
            ((FLiveLinkBaseFrameData *)this,(FLiveLinkBaseFrameData *)param_1);
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->FieldOfView = param_1->FieldOfView;
  this->AspectRatio = param_1->AspectRatio;
  this->FocalLength = param_1->FocalLength;
  this->Aperture = param_1->Aperture;
  this->FocusDistance = param_1->FocusDistance;
  this->ProjectionMode = param_1->ProjectionMode;
  this->FilmBackWidth = param_1->FilmBackWidth;
  this->FilmBackHeight = param_1->FilmBackHeight;
  return this;
}

