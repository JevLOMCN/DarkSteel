// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147993400

UScriptStruct * __cdecl FEquirectProps::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEquirectProps.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FEquirectProps.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEquirectProps,(UObject *)pUVar1,L"EquirectProps"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FEquirectProps.OuterSingleton;
}

// operator== @ 1479aae30

bool __thiscall FEquirectProps::operator==(FEquirectProps *this,FEquirectProps *param_1)

{
  if ((((((((param_1->LeftUVRect).Min.field0_0x0._s_0.X == (this->LeftUVRect).Min.field0_0x0._s_0.X)
          && ((param_1->LeftUVRect).Min.field0_0x0._s_0.Y ==
              (this->LeftUVRect).Min.field0_0x0._s_0.Y)) &&
         ((param_1->LeftUVRect).Max.field0_0x0._s_0.X == (this->LeftUVRect).Max.field0_0x0._s_0.X))
        && (((param_1->LeftUVRect).Max.field0_0x0._s_0.Y == (this->LeftUVRect).Max.field0_0x0._s_0.Y
            && ((param_1->RightUVRect).Min.field0_0x0._s_0.X ==
                (this->RightUVRect).Min.field0_0x0._s_0.X)))) &&
       (((param_1->RightUVRect).Min.field0_0x0._s_0.Y == (this->RightUVRect).Min.field0_0x0._s_0.Y
        && (((param_1->RightUVRect).Max.field0_0x0._s_0.X ==
             (this->RightUVRect).Max.field0_0x0._s_0.X &&
            ((param_1->RightUVRect).Max.field0_0x0._s_0.Y ==
             (this->RightUVRect).Max.field0_0x0._s_0.Y)))))) &&
      ((param_1->LeftScale).field0_0x0._s_0.X == (this->LeftScale).field0_0x0._s_0.X)) &&
     (((((param_1->LeftScale).field0_0x0._s_0.Y == (this->LeftScale).field0_0x0._s_0.Y &&
        ((param_1->RightScale).field0_0x0._s_0.X == (this->RightScale).field0_0x0._s_0.X)) &&
       ((param_1->RightScale).field0_0x0._s_0.Y == (this->RightScale).field0_0x0._s_0.Y)) &&
      ((((param_1->LeftBias).field0_0x0._s_0.X == (this->LeftBias).field0_0x0._s_0.X &&
        ((param_1->LeftBias).field0_0x0._s_0.Y == (this->LeftBias).field0_0x0._s_0.Y)) &&
       (((param_1->RightBias).field0_0x0._s_0.X == (this->RightBias).field0_0x0._s_0.X &&
        (((param_1->RightBias).field0_0x0._s_0.Y == (this->RightBias).field0_0x0._s_0.Y &&
         (param_1->Radius == this->Radius)))))))))) {
    return true;
  }
  return false;
}

// operator== @ 1479aaf40

bool __thiscall FEquirectProps::operator==(FEquirectProps *this,UStereoLayerShapeEquirect *param_1)

{
  if ((((((((param_1->LeftUVRect).Min.field0_0x0._s_0.X == (this->LeftUVRect).Min.field0_0x0._s_0.X)
          && ((param_1->LeftUVRect).Min.field0_0x0._s_0.Y ==
              (this->LeftUVRect).Min.field0_0x0._s_0.Y)) &&
         ((param_1->LeftUVRect).Max.field0_0x0._s_0.X == (this->LeftUVRect).Max.field0_0x0._s_0.X))
        && (((param_1->LeftUVRect).Max.field0_0x0._s_0.Y == (this->LeftUVRect).Max.field0_0x0._s_0.Y
            && ((param_1->RightUVRect).Min.field0_0x0._s_0.X ==
                (this->RightUVRect).Min.field0_0x0._s_0.X)))) &&
       (((param_1->RightUVRect).Min.field0_0x0._s_0.Y == (this->RightUVRect).Min.field0_0x0._s_0.Y
        && (((param_1->RightUVRect).Max.field0_0x0._s_0.X ==
             (this->RightUVRect).Max.field0_0x0._s_0.X &&
            ((param_1->RightUVRect).Max.field0_0x0._s_0.Y ==
             (this->RightUVRect).Max.field0_0x0._s_0.Y)))))) &&
      ((param_1->LeftScale).field0_0x0._s_0.X == (this->LeftScale).field0_0x0._s_0.X)) &&
     (((((param_1->LeftScale).field0_0x0._s_0.Y == (this->LeftScale).field0_0x0._s_0.Y &&
        ((param_1->RightScale).field0_0x0._s_0.X == (this->RightScale).field0_0x0._s_0.X)) &&
       ((param_1->RightScale).field0_0x0._s_0.Y == (this->RightScale).field0_0x0._s_0.Y)) &&
      ((((param_1->LeftBias).field0_0x0._s_0.X == (this->LeftBias).field0_0x0._s_0.X &&
        ((param_1->LeftBias).field0_0x0._s_0.Y == (this->LeftBias).field0_0x0._s_0.Y)) &&
       (((param_1->RightBias).field0_0x0._s_0.X == (this->RightBias).field0_0x0._s_0.X &&
        (((param_1->RightBias).field0_0x0._s_0.Y == (this->RightBias).field0_0x0._s_0.Y &&
         (param_1->Radius == this->Radius)))))))))) {
    return true;
  }
  return false;
}

