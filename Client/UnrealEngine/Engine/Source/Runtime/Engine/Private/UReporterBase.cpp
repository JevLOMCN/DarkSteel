// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147aa3640

UClass * __cdecl UReporterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReporterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReporterBase",
               &Z_Registration_Info_UClass_UReporterBase.InnerSingleton,
               StaticRegisterNativesUReporterBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UReporterBase>,
               InternalVTableHelperCtorCaller<UReporterBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReporterBase.InnerSingleton;
}

// UReporterBase @ 147abe0c0

UReporterBase * __thiscall UReporterBase::UReporterBase(UReporterBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UReporterBase__6B_;
  return this;
}

// UReporterBase @ 147abe0f0

UReporterBase * __thiscall
UReporterBase::UReporterBase(UReporterBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bVisible = false;
  this->_padding_ = (longlong)&___7UReporterBase__6B_;
  return this;
}

// ~UReporterBase @ 147abfd00

void __thiscall UReporterBase::~UReporterBase(UReporterBase *this)

{
  this->_padding_ = (longlong)&___7UReporterBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Draw @ 147ad2c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReporterBase::Draw(UReporterBase *this,UCanvas *param_1)

{
  return;
}

// DrawLine @ 147ad52a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UReporterBase::DrawLine
          (UReporterBase *this,UCanvas *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          FLinearColor *param_4,Type param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  double local_148;
  double dStack_140;
  undefined **local_138;
  TVector2<double>_u_0 local_130;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [128];
  
  local_c8 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = &___7FCanvasLineItem__6B_;
  local_f8 = 0;
  uStack_f0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_130 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_108 = (param_4->field0_0x0)._s_0.R;
  fStack_104 = (param_4->field0_0x0)._s_0.G;
  fStack_100 = (param_4->field0_0x0)._s_0.B;
  fStack_fc = (param_4->field0_0x0)._s_0.A;
  if (param_5 == Line) {
    puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b8))(this,local_98,param_3,param_1);
    puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b8))(this,local_a8,param_2,param_1);
    local_f8 = *puVar6;
    uStack_f0 = puVar6[1];
    uStack_e0 = *puVar5;
    local_d8 = puVar5[1];
    (*(code *)local_138[3])(&local_138,param_1->Canvas);
  }
  else if (param_5 == Dash) {
    dVar1 = (param_3->field0_0x0)._s_0.X;
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    dVar3 = dVar1 - (param_2->field0_0x0)._s_0.X;
    dVar4 = dVar2 - (param_2->field0_0x0)._s_0.Y;
    dVar7 = dVar4 * dVar4 + dVar3 * dVar3;
    if (dVar7 <= __real_3e45798ee0000000) {
      dVar3 = 0.0;
      dVar4 = 0.0;
    }
    else {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      dVar3 = dVar3 * dVar7;
      dVar4 = dVar4 * dVar7;
    }
    local_148 = (param_2->field0_0x0)._s_0.X;
    dStack_140 = (param_2->field0_0x0)._s_0.Y;
    if (0.0 < (dVar1 - local_148) * dVar3 + (dVar2 - dStack_140) * dVar4) {
      dVar1 = (double)(__real_40a00000 / (float)param_1->SizeX);
      dVar2 = dVar1 * dVar3;
      dVar1 = dVar1 * dVar4;
      do {
        local_b8 = dVar2 + local_148;
        local_b0 = dVar1 + dStack_140;
        puVar5 = (undefined8 *)
                 (**(code **)(this->_padding_ + 0x2b8))(this,local_a8,&local_b8,param_1);
        puVar6 = (undefined8 *)
                 (**(code **)(this->_padding_ + 0x2b8))(this,local_98,&local_148,param_1);
        local_f8 = *puVar6;
        uStack_f0 = puVar6[1];
        uStack_e0 = *puVar5;
        local_d8 = puVar5[1];
        (*(code *)local_138[3])(&local_138,param_1->Canvas);
        local_148 = local_148 + dVar2 + dVar2;
        dStack_140 = dStack_140 + dVar1 + dVar1;
      } while (0.0 < ((param_3->field0_0x0)._s_0.X - local_148) * dVar3 +
                     ((param_3->field0_0x0)._s_0.Y - dStack_140) * dVar4);
    }
  }
  return;
}

// DrawTriangle @ 147ad5a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UReporterBase::DrawTriangle
          (UReporterBase *this,UCanvas *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,FLinearColor *param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FLinearColor FVar7;
  TVector2<double> TVar8;
  FTexture *pFVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  double *pdVar13;
  longlong lVar14;
  undefined1 local_198 [24];
  longlong local_180;
  bool local_178;
  FBatchedElementParameters *local_170;
  FLinearColor_u_0 local_168;
  FTexture *local_158;
  FMaterialRenderProxy *local_150;
  FBatchedElementParameters *local_148;
  ForAnyElementType FStack_140;
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [240];
  
  pFVar9 = GWhiteTexture;
  puVar11 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b8))(this,local_128,param_4,param_1);
  puVar12 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b8))(this,local_118,param_3,param_1);
  pdVar13 = (double *)(**(code **)(this->_padding_ + 0x2b8))(this,local_108,param_2,param_1);
  TVar8 = UE::Math::TVector2<double>::ZeroVector;
  FVar7 = FLinearColor::White;
  local_198._8_8_ = *pdVar13;
  local_198._16_8_ = pdVar13[1];
  local_180 = 0;
  local_178 = false;
  local_170 = (FBatchedElementParameters *)0x0;
  local_150 = (FMaterialRenderProxy *)0x0;
  local_138._0_4_ = 0;
  local_138._4_4_ = 0;
  local_148 = (FBatchedElementParameters *)0x0;
  FStack_140.Data = (FScriptContainerElement *)0x0;
  local_168 = FLinearColor::White.field0_0x0;
  local_198._0_8_ = &___7FCanvasTriangleItem__6B_;
  local_158 = pFVar9;
  dVar1 = *pdVar13;
  dVar2 = pdVar13[1];
  uVar3 = *puVar12;
  uVar4 = puVar12[1];
  uVar5 = *puVar11;
  uVar6 = puVar11[1];
  iVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x890,&FStack_140,(int *)((longlong)&local_138 + 4));
  lVar14 = (longlong)iVar10;
  local_138._0_4_ = iVar10 + 1;
  *(double *)(FStack_140.Data + lVar14 * 0x90) = dVar1;
  *(double *)(FStack_140.Data + lVar14 * 0x90 + 8) = dVar2;
  ((TVector2<double>_u_0 *)(FStack_140.Data + lVar14 * 0x90 + 0x10))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar8.field0_0x0;
  ((FLinearColor_u_0 *)(FStack_140.Data + lVar14 * 0x90 + 0x20))->_s_0 =
       (FLinearColor_u_0_s_0)FVar7.field0_0x0;
  *(undefined8 *)(FStack_140.Data + lVar14 * 0x90 + 0x30) = uVar3;
  *(undefined8 *)(FStack_140.Data + lVar14 * 0x90 + 0x30 + 8) = uVar4;
  ((TVector2<double>_u_0 *)(FStack_140.Data + lVar14 * 0x90 + 0x40))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar8.field0_0x0;
  ((FLinearColor_u_0 *)(FStack_140.Data + lVar14 * 0x90 + 0x50))->_s_0 =
       (FLinearColor_u_0_s_0)FVar7.field0_0x0;
  *(undefined8 *)(FStack_140.Data + lVar14 * 0x90 + 0x60) = uVar5;
  *(undefined8 *)(FStack_140.Data + lVar14 * 0x90 + 0x60 + 8) = uVar6;
  ((TVector2<double>_u_0 *)(FStack_140.Data + lVar14 * 0x90 + 0x70))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar8.field0_0x0;
  ((FLinearColor_u_0 *)(FStack_140.Data + lVar14 * 0x90 + 0x80))->_s_0 =
       (FLinearColor_u_0_s_0)FVar7.field0_0x0;
  FCanvasTriangleItem::SetColor((FCanvasTriangleItem *)local_198,param_5);
  UCanvas::DrawItem(param_1,(FCanvasItem *)local_198);
  local_198._0_8_ = &___7FCanvasTriangleItem__6B_;
  if (FStack_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_140.Data);
  }
  return;
}

// GetPrivateStaticClass @ 147aebc20

UClass * __cdecl UReporterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReporterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReporterBase",
               &Z_Registration_Info_UClass_UReporterBase.InnerSingleton,
               StaticRegisterNativesUReporterBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UReporterBase>,
               InternalVTableHelperCtorCaller<UReporterBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReporterBase.InnerSingleton;
}

// StaticRegisterNativesUReporterBase @ 147b17340

void __cdecl UReporterBase::StaticRegisterNativesUReporterBase(void)

{
  return;
}

// ToScreenSpace @ 147b1cd60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector2<double> * __thiscall
UReporterBase::ToScreenSpace
          (UReporterBase *this,TVector2<double> *__return_storage_ptr__,TVector2<double> *param_1,
          UCanvas *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  fVar5 = __real_3f800000;
  if (param_2->Canvas->bStereoRendering == false) {
    fVar5 = param_2->Canvas->DPIScale;
  }
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  fVar5 = __real_3f800000 / fVar5;
  iVar1 = param_2->SizeX;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  iVar2 = param_2->SizeY;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)((float)iVar1 * fVar5) * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)((float)iVar2 * fVar5) * (__return_storage_ptr__->field0_0x0)._s_0.Y;
  return __return_storage_ptr__;
}

