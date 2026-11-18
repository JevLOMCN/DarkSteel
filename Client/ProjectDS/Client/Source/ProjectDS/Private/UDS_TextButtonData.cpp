// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b5b9f60

UClass * __cdecl UDS_TextButtonData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TextButtonData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TextButtonData",
               &Z_Registration_Info_UClass_UDS_TextButtonData.InnerSingleton,
               StaticRegisterNativesUDS_TextButtonData,0xad0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TextButtonData>,
               InternalVTableHelperCtorCaller<UDS_TextButtonData>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TextButtonData.InnerSingleton;
}

// UDS_TextButtonData @ 14b5bd320

UDS_TextButtonData * __thiscall
UDS_TextButtonData::UDS_TextButtonData(UDS_TextButtonData *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TextButtonData__6B_;
  FSlateBrush::FSlateBrush(&this->Img_Icon_Normal);
  FSlateBrush::FSlateBrush(&this->Img_Icon_Over);
  FSlateBrush::FSlateBrush(&this->Img_Icon_Press);
  FSlateBrush::FSlateBrush(&this->Img_Icon_Select);
  FSlateBrush::FSlateBrush(&this->Img_Icon_Disable);
  FSlateBrush::FSlateBrush(&this->Img_Glow_Normal);
  FSlateBrush::FSlateBrush(&this->Img_Glow_Over);
  FSlateBrush::FSlateBrush(&this->Img_Glow_Press);
  FSlateBrush::FSlateBrush(&this->Img_Glow_Select);
  FSlateBrush::FSlateBrush(&this->Img_Glow_Disable);
  FSlateBrush::FSlateBrush(&this->Img_BG_Normal);
  FSlateBrush::FSlateBrush(&this->Img_BG_Over);
  FSlateBrush::FSlateBrush(&this->Img_BG_Press);
  FSlateBrush::FSlateBrush(&this->Img_BG_Select);
  FSlateBrush::FSlateBrush(&this->Img_BG_Disable);
  return this;
}

// UDS_TextButtonData @ 14b5bd400

UDS_TextButtonData * __thiscall
UDS_TextButtonData::UDS_TextButtonData(UDS_TextButtonData *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TextButtonData__6B_;
  FSlateBrush::FSlateBrush(&this->Img_Icon_Normal);
  FSlateBrush::FSlateBrush(&this->Img_Icon_Over);
  FSlateBrush::FSlateBrush(&this->Img_Icon_Press);
  FSlateBrush::FSlateBrush(&this->Img_Icon_Select);
  FSlateBrush::FSlateBrush(&this->Img_Icon_Disable);
  FSlateBrush::FSlateBrush(&this->Img_Glow_Normal);
  FSlateBrush::FSlateBrush(&this->Img_Glow_Over);
  FSlateBrush::FSlateBrush(&this->Img_Glow_Press);
  FSlateBrush::FSlateBrush(&this->Img_Glow_Select);
  FSlateBrush::FSlateBrush(&this->Img_Glow_Disable);
  FSlateBrush::FSlateBrush(&this->Img_BG_Normal);
  FSlateBrush::FSlateBrush(&this->Img_BG_Over);
  FSlateBrush::FSlateBrush(&this->Img_BG_Press);
  FSlateBrush::FSlateBrush(&this->Img_BG_Select);
  FSlateBrush::FSlateBrush(&this->Img_BG_Disable);
  return this;
}

// ~UDS_TextButtonData @ 14b5be050

void __thiscall UDS_TextButtonData::~UDS_TextButtonData(UDS_TextButtonData *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7UDS_TextButtonData__6B_;
  (this->Img_BG_Disable)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Img_BG_Disable).ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  pTVar1 = (this->Img_BG_Select).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_BG_Select)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_BG_Press).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_BG_Press)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_BG_Over).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_BG_Over)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_BG_Normal).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_BG_Normal)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_Glow_Disable).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_Glow_Disable)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_Glow_Select).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_Glow_Select)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_Glow_Press).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_Glow_Press)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_Glow_Over).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_Glow_Over)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_Glow_Normal).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_Glow_Normal)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_Icon_Disable).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_Icon_Disable)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_Icon_Select).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_Icon_Select)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_Icon_Press).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_Icon_Press)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_Icon_Over).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_Icon_Over)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar1 = (this->Img_Icon_Normal).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Img_Icon_Normal)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bfa20

UClass * __cdecl UDS_TextButtonData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TextButtonData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TextButtonData",
               &Z_Registration_Info_UClass_UDS_TextButtonData.InnerSingleton,
               StaticRegisterNativesUDS_TextButtonData,0xad0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_TextButtonData>,
               InternalVTableHelperCtorCaller<UDS_TextButtonData>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TextButtonData.InnerSingleton;
}

// StaticRegisterNativesUDS_TextButtonData @ 14b5c00b0

void __cdecl UDS_TextButtonData::StaticRegisterNativesUDS_TextButtonData(void)

{
  return;
}

