// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147993490

UClass * __cdecl UStereoLayerShapeEquirect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerShapeEquirect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerShapeEquirect",
               &Z_Registration_Info_UClass_UStereoLayerShapeEquirect.InnerSingleton,
               StaticRegisterNativesUStereoLayerShapeEquirect,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStereoLayerShapeEquirect>,
               InternalVTableHelperCtorCaller<UStereoLayerShapeEquirect>,local_res8,
               UStereoLayerShape::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerShapeEquirect.InnerSingleton;
}

// UStereoLayerShapeEquirect @ 1479a7e10

UStereoLayerShapeEquirect * __thiscall
UStereoLayerShapeEquirect::UStereoLayerShapeEquirect
          (UStereoLayerShapeEquirect *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UStereoLayerShapeEquirect__6B_;
  return this;
}

// ~UStereoLayerShapeEquirect @ 1479a9b50

void __thiscall
UStereoLayerShapeEquirect::~UStereoLayerShapeEquirect(UStereoLayerShapeEquirect *this)

{
  this->_padding_ = (longlong)&___7UStereoLayerShape__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyShape @ 1479b3500

void __thiscall
UStereoLayerShapeEquirect::ApplyShape(UStereoLayerShapeEquirect *this,FLayerDesc *param_1)

{
  FShapeWrapper *pFVar1;
  float fVar2;
  IStereoLayerShape IVar3;
  IStereoLayerShape IVar4;
  IStereoLayerShape *pIVar5;
  IStereoLayerShape IVar6;
  IStereoLayerShape IVar7;
  IStereoLayerShape IVar8;
  IStereoLayerShape IVar9;
  IStereoLayerShape IVar10;
  IStereoLayerShape IVar11;
  IStereoLayerShape IVar12;
  IStereoLayerShape IVar13;
  IStereoLayerShape IVar14;
  IStereoLayerShape IVar15;
  IStereoLayerShape IVar16;
  IStereoLayerShape IVar17;
  IStereoLayerShape IVar18;
  IStereoLayerShape IVar19;
  IStereoLayerShape IVar20;
  IStereoLayerShape IVar21;
  IStereoLayerShape *pIVar22;
  longlong local_68 [12];
  
  pIVar22 = ::operator_new(0xa0);
  if (pIVar22 == (IStereoLayerShape *)0x0) {
    pIVar22 = (IStereoLayerShape *)0x0;
  }
  else {
    IVar6 = (IStereoLayerShape)(this->RightUVRect).Min.field0_0x0._s_0.X;
    IVar7 = (IStereoLayerShape)(this->RightUVRect).Min.field0_0x0._s_0.Y;
    IVar8 = (IStereoLayerShape)(this->LeftUVRect).Min.field0_0x0._s_0.X;
    IVar9 = (IStereoLayerShape)(this->LeftUVRect).Min.field0_0x0._s_0.Y;
    IVar10 = (IStereoLayerShape)(this->RightUVRect).Max.field0_0x0._s_0.X;
    IVar11 = (IStereoLayerShape)(this->RightUVRect).Max.field0_0x0._s_0.Y;
    IVar12 = (IStereoLayerShape)(this->LeftUVRect).Max.field0_0x0._s_0.X;
    IVar13 = (IStereoLayerShape)(this->LeftUVRect).Max.field0_0x0._s_0.Y;
    IVar3 = *(IStereoLayerShape *)&(this->RightUVRect).bIsValid;
    IVar4 = *(IStereoLayerShape *)&(this->LeftUVRect).bIsValid;
    fVar2 = this->Radius;
    IVar14 = (IStereoLayerShape)(this->LeftScale).field0_0x0._s_0.X;
    IVar15 = (IStereoLayerShape)(this->LeftScale).field0_0x0._s_0.Y;
    IVar16 = (IStereoLayerShape)(this->RightScale).field0_0x0._s_0.X;
    IVar17 = (IStereoLayerShape)(this->RightScale).field0_0x0._s_0.Y;
    IVar18 = (IStereoLayerShape)(this->LeftBias).field0_0x0._s_0.X;
    IVar19 = (IStereoLayerShape)(this->LeftBias).field0_0x0._s_0.Y;
    IVar20 = (IStereoLayerShape)(this->RightBias).field0_0x0._s_0.X;
    IVar21 = (IStereoLayerShape)(this->RightBias).field0_0x0._s_0.Y;
    *pIVar22 = (IStereoLayerShape)&___7FEquirectLayer__6B_;
    pIVar22[1] = IVar8;
    pIVar22[2] = IVar9;
    pIVar22[6] = IVar6;
    pIVar22[7] = IVar7;
    pIVar22[0x11] = IVar20;
    pIVar22[0x12] = IVar21;
    *(float *)(pIVar22 + 0x13) = fVar2;
    pIVar22[3] = IVar12;
    pIVar22[4] = IVar13;
    pIVar22[8] = IVar10;
    pIVar22[9] = IVar11;
    pIVar22[0xb] = IVar14;
    pIVar22[0xc] = IVar15;
    pIVar22[0xd] = IVar16;
    pIVar22[0xe] = IVar17;
    pIVar22[0xf] = IVar18;
    pIVar22[0x10] = IVar19;
    pIVar22[5] = IVar4;
    pIVar22[10] = IVar3;
  }
  pFVar1 = &param_1->Shape;
  if (pFVar1 == (FShapeWrapper *)local_68) {
    if (pIVar22 != (IStereoLayerShape *)0x0) {
      (**(code **)((longlong)*pIVar22 + 0x10))(pIVar22,1);
    }
  }
  else {
    pIVar5 = (pFVar1->Wrapped).Ptr;
    (pFVar1->Wrapped).Ptr = pIVar22;
    if (pIVar5 != (IStereoLayerShape *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479b3628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,1);
      return;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1479ce560

UClass * __cdecl UStereoLayerShapeEquirect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerShapeEquirect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerShapeEquirect",
               &Z_Registration_Info_UClass_UStereoLayerShapeEquirect.InnerSingleton,
               StaticRegisterNativesUStereoLayerShapeEquirect,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStereoLayerShapeEquirect>,
               InternalVTableHelperCtorCaller<UStereoLayerShapeEquirect>,local_res8,
               UStereoLayerShape::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerShapeEquirect.InnerSingleton;
}

// SetEquirectProps @ 1479e81f0

void __thiscall
UStereoLayerShapeEquirect::SetEquirectProps(UStereoLayerShapeEquirect *this,FEquirectProps *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined7 uVar6;
  
  if ((((((((this->LeftUVRect).Min.field0_0x0._s_0.X == (param_1->LeftUVRect).Min.field0_0x0._s_0.X)
          && ((this->LeftUVRect).Min.field0_0x0._s_0.Y ==
              (param_1->LeftUVRect).Min.field0_0x0._s_0.Y)) &&
         ((this->LeftUVRect).Max.field0_0x0._s_0.X == (param_1->LeftUVRect).Max.field0_0x0._s_0.X))
        && (((this->LeftUVRect).Max.field0_0x0._s_0.Y == (param_1->LeftUVRect).Max.field0_0x0._s_0.Y
            && ((this->RightUVRect).Min.field0_0x0._s_0.X ==
                (param_1->RightUVRect).Min.field0_0x0._s_0.X)))) &&
       (((this->RightUVRect).Min.field0_0x0._s_0.Y == (param_1->RightUVRect).Min.field0_0x0._s_0.Y
        && (((this->RightUVRect).Max.field0_0x0._s_0.X ==
             (param_1->RightUVRect).Max.field0_0x0._s_0.X &&
            ((this->RightUVRect).Max.field0_0x0._s_0.Y ==
             (param_1->RightUVRect).Max.field0_0x0._s_0.Y)))))) &&
      ((this->LeftScale).field0_0x0._s_0.X == (param_1->LeftScale).field0_0x0._s_0.X)) &&
     (((((this->LeftScale).field0_0x0._s_0.Y == (param_1->LeftScale).field0_0x0._s_0.Y &&
        ((this->RightScale).field0_0x0._s_0.X == (param_1->RightScale).field0_0x0._s_0.X)) &&
       ((this->RightScale).field0_0x0._s_0.Y == (param_1->RightScale).field0_0x0._s_0.Y)) &&
      ((((this->LeftBias).field0_0x0._s_0.X == (param_1->LeftBias).field0_0x0._s_0.X &&
        ((this->LeftBias).field0_0x0._s_0.Y == (param_1->LeftBias).field0_0x0._s_0.Y)) &&
       (((this->RightBias).field0_0x0._s_0.X == (param_1->RightBias).field0_0x0._s_0.X &&
        (((this->RightBias).field0_0x0._s_0.Y == (param_1->RightBias).field0_0x0._s_0.Y &&
         (this->Radius == param_1->Radius)))))))))) {
    return;
  }
  dVar2 = (param_1->LeftUVRect).Min.field0_0x0._s_0.Y;
  dVar3 = (param_1->LeftUVRect).Max.field0_0x0._s_0.X;
  dVar4 = (param_1->LeftUVRect).Max.field0_0x0._s_0.Y;
  (this->LeftUVRect).Min.field0_0x0._s_0.X = (param_1->LeftUVRect).Min.field0_0x0._s_0.X;
  (this->LeftUVRect).Min.field0_0x0._s_0.Y = dVar2;
  bVar5 = (param_1->LeftUVRect).bIsValid;
  uVar6 = *(undefined7 *)&(param_1->LeftUVRect).field_0x21;
  (this->LeftUVRect).Max.field0_0x0._s_0.X = dVar3;
  (this->LeftUVRect).Max.field0_0x0._s_0.Y = dVar4;
  dVar2 = (param_1->RightUVRect).Max.field0_0x0._s_0.X;
  dVar3 = (param_1->RightUVRect).Max.field0_0x0._s_0.Y;
  (this->LeftUVRect).bIsValid = bVar5;
  *(undefined7 *)&(this->LeftUVRect).field_0x21 = uVar6;
  dVar4 = (param_1->RightUVRect).Min.field0_0x0._s_0.Y;
  (this->RightUVRect).Min.field0_0x0._s_0.X = (param_1->RightUVRect).Min.field0_0x0._s_0.X;
  (this->RightUVRect).Min.field0_0x0._s_0.Y = dVar4;
  bVar5 = (param_1->RightUVRect).bIsValid;
  uVar6 = *(undefined7 *)&(param_1->RightUVRect).field_0x21;
  fVar1 = param_1->Radius;
  (this->RightUVRect).Max.field0_0x0._s_0.X = dVar2;
  (this->RightUVRect).Max.field0_0x0._s_0.Y = dVar3;
  this->Radius = fVar1;
  (this->RightUVRect).bIsValid = bVar5;
  *(undefined7 *)&(this->RightUVRect).field_0x21 = uVar6;
  dVar2 = (param_1->LeftScale).field0_0x0._s_0.Y;
  (this->LeftScale).field0_0x0._s_0.X = (param_1->LeftScale).field0_0x0._s_0.X;
  (this->LeftScale).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->RightScale).field0_0x0._s_0.Y;
  (this->RightScale).field0_0x0._s_0.X = (param_1->RightScale).field0_0x0._s_0.X;
  (this->RightScale).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->LeftBias).field0_0x0._s_0.Y;
  (this->LeftBias).field0_0x0._s_0.X = (param_1->LeftBias).field0_0x0._s_0.X;
  (this->LeftBias).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->RightBias).field0_0x0._s_0.Y;
  (this->RightBias).field0_0x0._s_0.X = (param_1->RightBias).field0_0x0._s_0.X;
  (this->RightBias).field0_0x0._s_0.Y = dVar2;
  UStereoLayerShape::MarkStereoLayerDirty((UStereoLayerShape *)this);
  return;
}

// StaticRegisterNativesUStereoLayerShapeEquirect @ 1479ee0d0

void __cdecl UStereoLayerShapeEquirect::StaticRegisterNativesUStereoLayerShapeEquirect(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UStereoLayerShapeEquirect_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetEquirectProps @ 147a051b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UStereoLayerShapeEquirect::execSetEquirectProps(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  TVector2<double>_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uStack_120 = 0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  local_108 = __real_3ff0000000000000;
  local_118 = ___xmm_3ff00000000000000000000000000000;
  uStack_110 = _UNK_15061cbc8;
  local_d8 = 0;
  uStack_d0 = 0;
  local_138 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_130 = _UNK_150689688;
  local_128 = 1;
  uStack_100 = 1;
  local_f8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_f0 = _UNK_150689688;
  local_e8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_e0 = _UNK_150689688;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_a8._s_0.X = local_148;
  local_a8._s_0.Y = dStack_140;
  local_88 = CONCAT71(uStack_127,local_128);
  local_98 = local_138;
  uStack_90 = uStack_130;
  uStack_80 = uStack_120;
  uStack_60 = CONCAT71(uStack_ff,uStack_100);
  local_78 = local_118;
  uStack_70 = uStack_110;
  local_68 = local_108;
  local_58 = local_f8;
  uStack_50 = uStack_f0;
  local_48 = local_e8;
  uStack_40 = uStack_e0;
  local_38 = local_d8;
  uStack_30 = uStack_d0;
  local_18 = CONCAT44(uStack_b4,local_b8);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_c8;
  uStack_20 = uStack_c0;
  SetEquirectProps((UStereoLayerShapeEquirect *)param_1,(FEquirectProps *)&local_a8._s_0);
  return;
}

