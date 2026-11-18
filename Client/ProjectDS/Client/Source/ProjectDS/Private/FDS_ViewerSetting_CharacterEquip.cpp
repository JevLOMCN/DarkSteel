// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b5d3630

UScriptStruct * __cdecl FDS_ViewerSetting_CharacterEquip::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewerSetting_CharacterEquip.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewerSetting_CharacterEquip.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewerSetting_CharacterEquip,
                         (UObject *)pUVar1,L"DS_ViewerSetting_CharacterEquip");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewerSetting_CharacterEquip.OuterSingleton;
}

// FDS_ViewerSetting_CharacterEquip @ 14b5d8ce0

FDS_ViewerSetting_CharacterEquip * __thiscall
FDS_ViewerSetting_CharacterEquip::FDS_ViewerSetting_CharacterEquip
          (FDS_ViewerSetting_CharacterEquip *this)

{
  __m128d _Var1;
  
  (this->ViewportOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *&(this->ZoomOutCamInfo_Default).CamTrans.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ZoomOutCamInfo_Default).CamTrans.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ZoomOutCamInfo_Default).CamTrans.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ZoomOutCamInfo_Default).CamTrans.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ZoomOutCamInfo_Default).CamTrans.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  (this->ZoomOutCamInfo_Default).CamFOV = 0.0;
  *&(this->ZoomOutCamInfo_Default).CamTrans.Scale3D.ZW.m128d_f64 = _Var1.m128d_f64;
  *(undefined8 *)&this->ZoomOutCamInfo_Character = 0;
  *(undefined8 *)&(this->ZoomOutCamInfo_Character).field_0x8 = 0;
  *(undefined8 *)&(this->ZoomOutCamInfo_Character).field_0x20 = 0;
  *(undefined4 *)&(this->ZoomOutCamInfo_Character).field_0x28 = 0;
  *(undefined4 *)&(this->ZoomOutCamInfo_Character).field_0x2c = 0x80;
  *(undefined4 *)&(this->ZoomOutCamInfo_Character).field_0x34 = 0;
  *(undefined4 *)&(this->ZoomOutCamInfo_Character).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ZoomOutCamInfo_Character).field_0x40 = 0;
  *(undefined4 *)&(this->ZoomOutCamInfo_Character).field_0x48 = 0;
  *&(this->ZoomInCamInfo_Default).CamTrans.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ZoomInCamInfo_Default).CamTrans.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ZoomInCamInfo_Default).CamTrans.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ZoomInCamInfo_Default).CamTrans.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ZoomInCamInfo_Default).CamTrans.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  (this->ZoomInCamInfo_Default).CamFOV = 0.0;
  *&(this->ZoomInCamInfo_Default).CamTrans.Scale3D.ZW.m128d_f64 = _Var1.m128d_f64;
  *(undefined8 *)&this->ZoomInCamInfo_Character = 0;
  *(undefined8 *)&(this->ZoomInCamInfo_Character).field_0x8 = 0;
  *(undefined8 *)&(this->ZoomInCamInfo_Character).field_0x20 = 0;
  *(undefined4 *)&(this->ZoomInCamInfo_Character).field_0x28 = 0;
  *(undefined4 *)&(this->ZoomInCamInfo_Character).field_0x2c = 0x80;
  *(undefined4 *)&(this->ZoomInCamInfo_Character).field_0x34 = 0;
  *(undefined4 *)&(this->ZoomInCamInfo_Character).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ZoomInCamInfo_Character).field_0x40 = 0;
  *(undefined4 *)&(this->ZoomInCamInfo_Character).field_0x48 = 0;
  return this;
}

// ~FDS_ViewerSetting_CharacterEquip @ 14b5da090

void __thiscall
FDS_ViewerSetting_CharacterEquip::~FDS_ViewerSetting_CharacterEquip
          (FDS_ViewerSetting_CharacterEquip *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ZoomInCamInfo_Character).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ZoomInCamInfo_Character).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_ViewerSetting_CamInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ViewerSetting_CamInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_ViewerSetting_CamInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ZoomInCamInfo_Character);
  *(undefined4 *)&(this->ZoomOutCamInfo_Character).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ZoomOutCamInfo_Character).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_ViewerSetting_CamInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ViewerSetting_CamInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_ViewerSetting_CamInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ZoomOutCamInfo_Character);
  return;
}

