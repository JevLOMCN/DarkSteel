// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 31

// StaticClass @ 14972a130

UClass * __cdecl UPCGBlueprintElement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintElement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintElement",
               &Z_Registration_Info_UClass_UPCGBlueprintElement.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintElement,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBlueprintElement>,
               InternalVTableHelperCtorCaller<UPCGBlueprintElement>,local_res8,
               UPCGBlueprintBaseElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintElement.InnerSingleton;
}

// UPCGBlueprintElement @ 14973ab00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlueprintElement * __thiscall
UPCGBlueprintElement::UPCGBlueprintElement(UPCGBlueprintElement *this,FVTableHelper *param_1)

{
  UPCGBlueprintBaseElement::UPCGBlueprintBaseElement((UPCGBlueprintBaseElement *)this,param_1);
  *(undefined ***)this = &___7UPCGBlueprintElement__6B_;
  return this;
}

// UPCGBlueprintElement @ 14973ab30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlueprintElement * __thiscall
UPCGBlueprintElement::UPCGBlueprintElement(UPCGBlueprintElement *this,FObjectInitializer *param_1)

{
  UPCGBlueprintBaseElement::UPCGBlueprintBaseElement((UPCGBlueprintBaseElement *)this,param_1);
  *(undefined ***)this = &___7UPCGBlueprintElement__6B_;
  return this;
}

// ~UPCGBlueprintElement @ 14973d980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPCGBlueprintElement::~UPCGBlueprintElement(UPCGBlueprintElement *this)

{
  *(undefined ***)this = &___7UPCGBlueprintElement__6B_;
  UPCGBlueprintBaseElement::~UPCGBlueprintBaseElement((UPCGBlueprintBaseElement *)this);
  return;
}

// operator() @ 149740dc0

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

bool __thiscall
`UPCGBlueprintElement::IterationLoop'::__l2::<lambda_1>::operator()
          (void *this,int param_1,FPCGPoint *param_2)

{
  UObject *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FPCGContext *pFVar4;
  char cVar5;
  uint uVar6;
  UFunction *pUVar7;
  undefined1 auStack_3b8 [32];
  FPCGContext local_398;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  FPCGPoint local_128;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  uVar6 = param_1 & 0x800003ff;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffc00) + 1;
  }
  if (uVar6 == 0) {
    GInitRunaway();
  }
  this_00 = *(UObject **)this;
  uVar1 = *(undefined8 *)((longlong)this + 0x18);
  uVar2 = *(undefined8 *)((longlong)this + 0x10);
  uVar3 = *(undefined8 *)(*(longlong *)((longlong)this + 0x20) + 0x38);
  pFVar4 = *(FPCGContext **)((longlong)this + 8);
  FPCGContext::FPCGContext(&local_398);
  FPCGPoint::FPCGPoint(&local_128);
  local_50 = '\0';
  FPCGContext::operator=(&local_398,pFVar4);
  local_128.Transform.Rotation.XY.m128d_f64[0] = (param_2->Transform).Rotation.XY.m128d_f64[0];
  local_128.Transform.Rotation.XY.m128d_f64[1] = (param_2->Transform).Rotation.XY.m128d_f64[1];
  local_128.Transform.Rotation.ZW.m128d_f64[0] = (param_2->Transform).Rotation.ZW.m128d_f64[0];
  local_128.Transform.Rotation.ZW.m128d_f64[1] = (param_2->Transform).Rotation.ZW.m128d_f64[1];
  local_128.Transform.Translation.XY.m128d_f64[0] = (param_2->Transform).Translation.XY.m128d_f64[0]
  ;
  local_128.Transform.Translation.XY.m128d_f64[1] = (param_2->Transform).Translation.XY.m128d_f64[1]
  ;
  local_128.Transform.Translation.ZW.m128d_f64[0] = (param_2->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_128.Transform.Translation.ZW.m128d_f64[1] = (param_2->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_128.Transform.Scale3D.XY.m128d_f64[0] = (param_2->Transform).Scale3D.XY.m128d_f64[0];
  local_128.Transform.Scale3D.XY.m128d_f64[1] = (param_2->Transform).Scale3D.XY.m128d_f64[1];
  local_128.Transform.Scale3D.ZW.m128d_f64[0] = (param_2->Transform).Scale3D.ZW.m128d_f64[0];
  local_128.Transform.Scale3D.ZW.m128d_f64[1] = (param_2->Transform).Scale3D.ZW.m128d_f64[1];
  local_128.Density = param_2->Density;
  local_128._100_4_ = *(undefined4 *)&param_2->field_0x64;
  local_128.BoundsMin.field0_0x0._s_0.X = (param_2->BoundsMin).field0_0x0._s_0.X;
  local_128.BoundsMax.field0_0x0._s_0.X = (param_2->BoundsMax).field0_0x0._s_0.X;
  local_128.BoundsMax.field0_0x0._s_0.Y = (param_2->BoundsMax).field0_0x0._s_0.Y;
  local_128.BoundsMin.field0_0x0._s_0.Y = (param_2->BoundsMin).field0_0x0._s_0.Y;
  local_128.BoundsMin.field0_0x0._s_0.Z = (param_2->BoundsMin).field0_0x0._s_0.Z;
  local_128.BoundsMax.field0_0x0._s_0.Z = (param_2->BoundsMax).field0_0x0._s_0.Z;
  local_128._padding_ = param_2->_padding_;
  local_128.Color.field0_0x0._s_0.X = (param_2->Color).field0_0x0._s_0.X;
  local_128.Color.field0_0x0._s_0.Y = (param_2->Color).field0_0x0._s_0.Y;
  local_128.Color.field0_0x0._s_0.Z = (param_2->Color).field0_0x0._s_0.Z;
  local_128.Color.field0_0x0._s_0.W = (param_2->Color).field0_0x0._s_0.W;
  local_128.Steepness = param_2->Steepness;
  local_128.Seed = param_2->Seed;
  local_128.MetadataEntry = param_2->MetadataEntry;
  local_140 = (longlong)param_1;
  local_138 = uVar2;
  local_130 = uVar1;
  local_58 = uVar3;
  pUVar7 = UObject::FindFunctionChecked(this_00,NAME_UPCGBlueprintElement_IterationLoopBody);
  (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar7,&local_398);
  cVar5 = local_50;
  (param_2->Transform).Rotation.XY.m128d_f64[0] = local_128.Transform.Rotation.XY.m128d_f64[0];
  (param_2->Transform).Rotation.XY.m128d_f64[1] = local_128.Transform.Rotation.XY.m128d_f64[1];
  (param_2->Transform).Rotation.ZW.m128d_f64[0] = local_128.Transform.Rotation.ZW.m128d_f64[0];
  (param_2->Transform).Rotation.ZW.m128d_f64[1] = local_128.Transform.Rotation.ZW.m128d_f64[1];
  (param_2->Transform).Translation.XY.m128d_f64[0] = local_128.Transform.Translation.XY.m128d_f64[0]
  ;
  (param_2->Transform).Translation.XY.m128d_f64[1] = local_128.Transform.Translation.XY.m128d_f64[1]
  ;
  (param_2->Transform).Translation.ZW.m128d_f64[0] = local_128.Transform.Translation.ZW.m128d_f64[0]
  ;
  (param_2->Transform).Translation.ZW.m128d_f64[1] = local_128.Transform.Translation.ZW.m128d_f64[1]
  ;
  (param_2->Transform).Scale3D.XY.m128d_f64[0] = local_128.Transform.Scale3D.XY.m128d_f64[0];
  (param_2->Transform).Scale3D.XY.m128d_f64[1] = local_128.Transform.Scale3D.XY.m128d_f64[1];
  (param_2->Transform).Scale3D.ZW.m128d_f64[0] = local_128.Transform.Scale3D.ZW.m128d_f64[0];
  (param_2->Transform).Scale3D.ZW.m128d_f64[1] = local_128.Transform.Scale3D.ZW.m128d_f64[1];
  param_2->Density = local_128.Density;
  *(undefined4 *)&param_2->field_0x64 = local_128._100_4_;
  (param_2->BoundsMin).field0_0x0._s_0.X = local_128.BoundsMin.field0_0x0._s_0.X;
  (param_2->BoundsMin).field0_0x0._s_0.Y = local_128.BoundsMin.field0_0x0._s_0.Y;
  (param_2->BoundsMin).field0_0x0._s_0.Z = local_128.BoundsMin.field0_0x0._s_0.Z;
  (param_2->BoundsMax).field0_0x0._s_0.X = local_128.BoundsMax.field0_0x0._s_0.X;
  (param_2->BoundsMax).field0_0x0._s_0.Y = local_128.BoundsMax.field0_0x0._s_0.Y;
  (param_2->BoundsMax).field0_0x0._s_0.Z = local_128.BoundsMax.field0_0x0._s_0.Z;
  param_2->_padding_ = local_128._padding_;
  (param_2->Color).field0_0x0._s_0.X = local_128.Color.field0_0x0._s_0.X;
  (param_2->Color).field0_0x0._s_0.Y = local_128.Color.field0_0x0._s_0.Y;
  (param_2->Color).field0_0x0._s_0.Z = local_128.Color.field0_0x0._s_0.Z;
  (param_2->Color).field0_0x0._s_0.W = local_128.Color.field0_0x0._s_0.W;
  param_2->Steepness = local_128.Steepness;
  param_2->Seed = local_128.Seed;
  param_2->MetadataEntry = local_128.MetadataEntry;
  FPCGContext::~FPCGContext(&local_398);
  return cVar5 != '\0';
}

// operator() @ 149740ff0

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

bool __thiscall
`UPCGBlueprintElement::NestedLoop'::__l2::<lambda_1>::operator()
          (void *this,int param_1,FPCGPoint *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FPCGContext *pFVar5;
  code *pcVar6;
  UObject *pUVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  UFunction *pUVar13;
  uint uVar14;
  longlong lVar15;
  double *pdVar16;
  longlong lVar17;
  double *pdVar18;
  undefined1 auStack_588 [32];
  longlong local_568;
  longlong local_560;
  undefined8 local_558;
  UObject *local_550;
  FPCGContext local_548;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 local_2d8 [104];
  TVector<double>_u_0 TStack_270;
  TVector<double>_u_0 local_258;
  double dStack_240;
  TVector4<double>_u_0 local_238;
  double local_218;
  double dStack_210;
  undefined1 local_208 [104];
  TVector<double>_u_0 TStack_1a0;
  TVector<double>_u_0 local_188;
  double dStack_170;
  TVector4<double>_u_0 local_168;
  double local_148;
  double dStack_140;
  FPCGPoint local_138;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_588;
  uVar11 = param_1 & 0x800003ff;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xfffffc00) + 1;
  }
  if (uVar11 == 0) {
    GInitRunaway();
  }
  plVar2 = *(longlong **)((longlong)this + 0x30);
  iVar1 = (int)plVar2[1];
  uVar12 = param_1 / iVar1;
  uVar14 = param_1 % iVar1;
  lVar15 = (longlong)(int)uVar12;
  local_550 = *(UObject **)this;
  lVar17 = (longlong)(int)uVar14;
  local_558 = *(undefined8 *)(*(longlong *)((longlong)this + 0x20) + 0x38);
  uVar11 = 0;
  if ((int)uVar14 < iVar1) {
    uVar11 = ~uVar14 >> 0x1f;
  }
  if (uVar11 == 0) {
    local_568 = lVar17;
    local_560 = (longlong)iVar1;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  pdVar18 = (double *)(lVar17 * 0xd0 + *plVar2);
  plVar2 = *(longlong **)((longlong)this + 0x28);
  iVar1 = (int)plVar2[1];
  uVar11 = 0;
  if ((int)uVar12 < iVar1) {
    uVar11 = ~uVar12 >> 0x1f;
  }
  if (uVar11 == 0) {
    local_568 = lVar15;
    local_560 = (longlong)iVar1;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
  }
  uVar3 = *(undefined8 *)((longlong)this + 0x18);
  pdVar16 = (double *)(lVar15 * 0xd0 + *plVar2);
  uVar4 = *(undefined8 *)((longlong)this + 0x10);
  pFVar5 = *(FPCGContext **)((longlong)this + 8);
  FPCGContext::FPCGContext(&local_548);
  FPCGPoint::FPCGPoint((FPCGPoint *)local_2d8);
  FPCGPoint::FPCGPoint((FPCGPoint *)local_208);
  FPCGPoint::FPCGPoint(&local_138);
  local_50 = '\0';
  FPCGContext::operator=(&local_548,pFVar5);
  pUVar7 = local_550;
  local_2d8._0_8_ = *pdVar16;
  local_2d8._8_8_ = pdVar16[1];
  local_2d8._16_8_ = pdVar16[2];
  local_2d8._24_8_ = pdVar16[3];
  local_2d8._32_8_ = pdVar16[4];
  local_2d8._40_8_ = pdVar16[5];
  local_2d8._48_8_ = pdVar16[6];
  local_2d8._56_8_ = pdVar16[7];
  local_2d8._64_8_ = pdVar16[8];
  local_2d8._72_8_ = pdVar16[9];
  local_2d8._80_8_ = pdVar16[10];
  local_2d8._88_8_ = pdVar16[0xb];
  local_2d8._96_8_ = pdVar16[0xc];
  TStack_270._s_0.X = pdVar16[0xd];
  local_258._s_0.X = pdVar16[0x10];
  local_258._s_0.Y = pdVar16[0x11];
  TStack_270._s_0.Y = pdVar16[0xe];
  TStack_270._s_0.Z = pdVar16[0xf];
  local_258._s_0.Z = pdVar16[0x12];
  dStack_240 = pdVar16[0x13];
  local_238._s_0.X = pdVar16[0x14];
  local_238._s_0.Y = pdVar16[0x15];
  local_238._s_0.Z = pdVar16[0x16];
  local_238._s_0.W = pdVar16[0x17];
  local_218 = pdVar16[0x18];
  dStack_210 = pdVar16[0x19];
  local_208._0_8_ = *pdVar18;
  local_208._8_8_ = pdVar18[1];
  local_208._16_8_ = pdVar18[2];
  local_208._24_8_ = pdVar18[3];
  local_208._32_8_ = pdVar18[4];
  local_208._40_8_ = pdVar18[5];
  local_208._48_8_ = pdVar18[6];
  local_208._56_8_ = pdVar18[7];
  local_208._64_8_ = pdVar18[8];
  local_208._72_8_ = pdVar18[9];
  local_208._80_8_ = pdVar18[10];
  local_208._88_8_ = pdVar18[0xb];
  local_208._96_8_ = pdVar18[0xc];
  TStack_1a0._s_0.X = pdVar18[0xd];
  TStack_1a0._s_0.Y = pdVar18[0xe];
  TStack_1a0._s_0.Z = pdVar18[0xf];
  local_188._s_0.X = pdVar18[0x10];
  local_188._s_0.Y = pdVar18[0x11];
  local_188._s_0.Z = pdVar18[0x12];
  dStack_170 = pdVar18[0x13];
  local_168._s_0.X = pdVar18[0x14];
  local_168._s_0.Y = pdVar18[0x15];
  local_168._s_0.Z = pdVar18[0x16];
  local_168._s_0.W = pdVar18[0x17];
  local_148 = pdVar18[0x18];
  dStack_140 = pdVar18[0x19];
  local_138.Transform.Rotation.ZW.m128d_f64[0] = (param_2->Transform).Rotation.ZW.m128d_f64[0];
  local_138.Transform.Rotation.ZW.m128d_f64[1] = (param_2->Transform).Rotation.ZW.m128d_f64[1];
  local_138.Transform.Rotation.XY.m128d_f64[0] = (param_2->Transform).Rotation.XY.m128d_f64[0];
  local_138.Transform.Rotation.XY.m128d_f64[1] = (param_2->Transform).Rotation.XY.m128d_f64[1];
  local_138.Transform.Translation.XY.m128d_f64[0] = (param_2->Transform).Translation.XY.m128d_f64[0]
  ;
  local_138.Transform.Translation.XY.m128d_f64[1] = (param_2->Transform).Translation.XY.m128d_f64[1]
  ;
  local_138.Transform.Translation.ZW.m128d_f64[0] = (param_2->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_138.Transform.Translation.ZW.m128d_f64[1] = (param_2->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_138.Transform.Scale3D.XY.m128d_f64[0] = (param_2->Transform).Scale3D.XY.m128d_f64[0];
  local_138.Transform.Scale3D.XY.m128d_f64[1] = (param_2->Transform).Scale3D.XY.m128d_f64[1];
  local_138.Transform.Scale3D.ZW.m128d_f64[0] = (param_2->Transform).Scale3D.ZW.m128d_f64[0];
  local_138.Transform.Scale3D.ZW.m128d_f64[1] = (param_2->Transform).Scale3D.ZW.m128d_f64[1];
  local_138.Density = param_2->Density;
  local_138._100_4_ = *(undefined4 *)&param_2->field_0x64;
  local_138.BoundsMin.field0_0x0._s_0.X = (param_2->BoundsMin).field0_0x0._s_0.X;
  local_138.BoundsMin.field0_0x0._s_0.Y = (param_2->BoundsMin).field0_0x0._s_0.Y;
  local_138.BoundsMin.field0_0x0._s_0.Z = (param_2->BoundsMin).field0_0x0._s_0.Z;
  local_138.BoundsMax.field0_0x0._s_0.X = (param_2->BoundsMax).field0_0x0._s_0.X;
  local_138.BoundsMax.field0_0x0._s_0.Y = (param_2->BoundsMax).field0_0x0._s_0.Y;
  local_138.BoundsMax.field0_0x0._s_0.Z = (param_2->BoundsMax).field0_0x0._s_0.Z;
  local_138._padding_ = param_2->_padding_;
  local_138.Color.field0_0x0._s_0.X = (param_2->Color).field0_0x0._s_0.X;
  local_138.Color.field0_0x0._s_0.Y = (param_2->Color).field0_0x0._s_0.Y;
  local_138.Color.field0_0x0._s_0.Z = (param_2->Color).field0_0x0._s_0.Z;
  local_138.Color.field0_0x0._s_0.W = (param_2->Color).field0_0x0._s_0.W;
  local_138.Steepness = param_2->Steepness;
  local_138.Seed = param_2->Seed;
  local_138.MetadataEntry = param_2->MetadataEntry;
  local_68 = local_558;
  local_2f0 = uVar4;
  local_2e8 = uVar3;
  local_60 = lVar15;
  local_58 = lVar17;
  pUVar13 = UObject::FindFunctionChecked(local_550,NAME_UPCGBlueprintElement_NestedLoopBody);
  (**(code **)(*(longlong *)pUVar7 + 0x260))(pUVar7,pUVar13,&local_548);
  cVar8 = local_50;
  (param_2->Transform).Rotation.XY.m128d_f64[0] = local_138.Transform.Rotation.XY.m128d_f64[0];
  (param_2->Transform).Rotation.XY.m128d_f64[1] = local_138.Transform.Rotation.XY.m128d_f64[1];
  (param_2->Transform).Rotation.ZW.m128d_f64[0] = local_138.Transform.Rotation.ZW.m128d_f64[0];
  (param_2->Transform).Rotation.ZW.m128d_f64[1] = local_138.Transform.Rotation.ZW.m128d_f64[1];
  (param_2->Transform).Translation.XY.m128d_f64[0] = local_138.Transform.Translation.XY.m128d_f64[0]
  ;
  (param_2->Transform).Translation.XY.m128d_f64[1] = local_138.Transform.Translation.XY.m128d_f64[1]
  ;
  (param_2->Transform).Translation.ZW.m128d_f64[0] = local_138.Transform.Translation.ZW.m128d_f64[0]
  ;
  (param_2->Transform).Translation.ZW.m128d_f64[1] = local_138.Transform.Translation.ZW.m128d_f64[1]
  ;
  (param_2->Transform).Scale3D.XY.m128d_f64[0] = local_138.Transform.Scale3D.XY.m128d_f64[0];
  (param_2->Transform).Scale3D.XY.m128d_f64[1] = local_138.Transform.Scale3D.XY.m128d_f64[1];
  (param_2->Transform).Scale3D.ZW.m128d_f64[0] = local_138.Transform.Scale3D.ZW.m128d_f64[0];
  (param_2->Transform).Scale3D.ZW.m128d_f64[1] = local_138.Transform.Scale3D.ZW.m128d_f64[1];
  param_2->Density = local_138.Density;
  *(undefined4 *)&param_2->field_0x64 = local_138._100_4_;
  (param_2->BoundsMin).field0_0x0._s_0.X = local_138.BoundsMin.field0_0x0._s_0.X;
  (param_2->BoundsMin).field0_0x0._s_0.Y = local_138.BoundsMin.field0_0x0._s_0.Y;
  (param_2->BoundsMin).field0_0x0._s_0.Z = local_138.BoundsMin.field0_0x0._s_0.Z;
  (param_2->BoundsMax).field0_0x0._s_0.X = local_138.BoundsMax.field0_0x0._s_0.X;
  (param_2->BoundsMax).field0_0x0._s_0.Y = local_138.BoundsMax.field0_0x0._s_0.Y;
  (param_2->BoundsMax).field0_0x0._s_0.Z = local_138.BoundsMax.field0_0x0._s_0.Z;
  param_2->_padding_ = local_138._padding_;
  (param_2->Color).field0_0x0._s_0.X = local_138.Color.field0_0x0._s_0.X;
  (param_2->Color).field0_0x0._s_0.Y = local_138.Color.field0_0x0._s_0.Y;
  (param_2->Color).field0_0x0._s_0.Z = local_138.Color.field0_0x0._s_0.Z;
  (param_2->Color).field0_0x0._s_0.W = local_138.Color.field0_0x0._s_0.W;
  param_2->Steepness = local_138.Steepness;
  param_2->Seed = local_138.Seed;
  param_2->MetadataEntry = local_138.MetadataEntry;
  FPCGContext::~FPCGContext(&local_548);
  return cVar8 != '\0';
}

// operator() @ 149741440

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

bool __thiscall
`UPCGBlueprintElement::PointLoop'::__l2::<lambda_1>::operator()
          (void *this,int param_1,FPCGPoint *param_2)

{
  int iVar1;
  longlong *plVar2;
  UObject *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  FPCGContext *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  UFunction *pUVar11;
  longlong lVar12;
  double *pdVar13;
  undefined1 auStack_498 [32];
  longlong local_478;
  longlong local_470;
  FPCGContext local_468;
  undefined8 local_210;
  undefined1 local_208 [104];
  TVector<double>_u_0 TStack_1a0;
  TVector<double>_u_0 local_188;
  double dStack_170;
  TVector4<double>_u_0 local_168;
  double local_148;
  double dStack_140;
  FPCGPoint local_138;
  undefined8 local_68;
  longlong local_60;
  char local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_498;
  lVar12 = (longlong)param_1;
  uVar10 = param_1 & 0x800003ff;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xfffffc00) + 1;
  }
  if (uVar10 == 0) {
    GInitRunaway();
  }
  plVar2 = *(longlong **)((longlong)this + 0x20);
  this_00 = *(UObject **)this;
  uVar3 = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 0x38);
  iVar1 = (int)plVar2[1];
  uVar10 = 0;
  if (param_1 < iVar1) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_478 = lVar12;
    local_470 = (longlong)iVar1;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
  pdVar13 = (double *)(lVar12 * 0xd0 + *plVar2);
  uVar4 = *(undefined8 *)((longlong)this + 0x10);
  pFVar5 = *(FPCGContext **)((longlong)this + 8);
  FPCGContext::FPCGContext(&local_468);
  FPCGPoint::FPCGPoint((FPCGPoint *)local_208);
  FPCGPoint::FPCGPoint(&local_138);
  local_58 = '\0';
  FPCGContext::operator=(&local_468,pFVar5);
  local_208._0_8_ = *pdVar13;
  local_208._8_8_ = pdVar13[1];
  local_208._16_8_ = pdVar13[2];
  local_208._24_8_ = pdVar13[3];
  local_208._32_8_ = pdVar13[4];
  local_208._40_8_ = pdVar13[5];
  local_208._48_8_ = pdVar13[6];
  local_208._56_8_ = pdVar13[7];
  local_208._64_8_ = pdVar13[8];
  local_208._72_8_ = pdVar13[9];
  local_208._80_8_ = pdVar13[10];
  local_208._88_8_ = pdVar13[0xb];
  local_208._96_8_ = pdVar13[0xc];
  TStack_1a0._s_0.X = pdVar13[0xd];
  local_188._s_0.X = pdVar13[0x10];
  local_188._s_0.Y = pdVar13[0x11];
  TStack_1a0._s_0.Y = pdVar13[0xe];
  TStack_1a0._s_0.Z = pdVar13[0xf];
  local_188._s_0.Z = pdVar13[0x12];
  dStack_170 = pdVar13[0x13];
  local_168._s_0.X = pdVar13[0x14];
  local_168._s_0.Y = pdVar13[0x15];
  local_168._s_0.Z = pdVar13[0x16];
  local_168._s_0.W = pdVar13[0x17];
  local_148 = pdVar13[0x18];
  dStack_140 = pdVar13[0x19];
  local_138.Transform.Rotation.XY.m128d_f64[0] = (param_2->Transform).Rotation.XY.m128d_f64[0];
  local_138.Transform.Rotation.XY.m128d_f64[1] = (param_2->Transform).Rotation.XY.m128d_f64[1];
  local_138.Transform.Rotation.ZW.m128d_f64[0] = (param_2->Transform).Rotation.ZW.m128d_f64[0];
  local_138.Transform.Rotation.ZW.m128d_f64[1] = (param_2->Transform).Rotation.ZW.m128d_f64[1];
  local_138.Transform.Translation.XY.m128d_f64[0] = (param_2->Transform).Translation.XY.m128d_f64[0]
  ;
  local_138.Transform.Translation.XY.m128d_f64[1] = (param_2->Transform).Translation.XY.m128d_f64[1]
  ;
  local_138.Transform.Translation.ZW.m128d_f64[0] = (param_2->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_138.Transform.Translation.ZW.m128d_f64[1] = (param_2->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_138.Transform.Scale3D.XY.m128d_f64[0] = (param_2->Transform).Scale3D.XY.m128d_f64[0];
  local_138.Transform.Scale3D.XY.m128d_f64[1] = (param_2->Transform).Scale3D.XY.m128d_f64[1];
  local_138.Transform.Scale3D.ZW.m128d_f64[0] = (param_2->Transform).Scale3D.ZW.m128d_f64[0];
  local_138.Transform.Scale3D.ZW.m128d_f64[1] = (param_2->Transform).Scale3D.ZW.m128d_f64[1];
  local_138.Density = param_2->Density;
  local_138._100_4_ = *(undefined4 *)&param_2->field_0x64;
  local_138.BoundsMin.field0_0x0._s_0.X = (param_2->BoundsMin).field0_0x0._s_0.X;
  local_138.BoundsMin.field0_0x0._s_0.Y = (param_2->BoundsMin).field0_0x0._s_0.Y;
  local_138.BoundsMin.field0_0x0._s_0.Z = (param_2->BoundsMin).field0_0x0._s_0.Z;
  local_138.BoundsMax.field0_0x0._s_0.X = (param_2->BoundsMax).field0_0x0._s_0.X;
  local_138.BoundsMax.field0_0x0._s_0.Y = (param_2->BoundsMax).field0_0x0._s_0.Y;
  local_138.BoundsMax.field0_0x0._s_0.Z = (param_2->BoundsMax).field0_0x0._s_0.Z;
  local_138._padding_ = param_2->_padding_;
  local_138.Color.field0_0x0._s_0.X = (param_2->Color).field0_0x0._s_0.X;
  local_138.Color.field0_0x0._s_0.Y = (param_2->Color).field0_0x0._s_0.Y;
  local_138.Color.field0_0x0._s_0.Z = (param_2->Color).field0_0x0._s_0.Z;
  local_138.Color.field0_0x0._s_0.W = (param_2->Color).field0_0x0._s_0.W;
  local_138.Steepness = param_2->Steepness;
  local_138.Seed = param_2->Seed;
  local_138.MetadataEntry = param_2->MetadataEntry;
  local_210 = uVar4;
  local_68 = uVar3;
  local_60 = lVar12;
  pUVar11 = UObject::FindFunctionChecked(this_00,NAME_UPCGBlueprintElement_PointLoopBody);
  (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar11,&local_468);
  cVar7 = local_58;
  (param_2->Transform).Rotation.XY.m128d_f64[0] = local_138.Transform.Rotation.XY.m128d_f64[0];
  (param_2->Transform).Rotation.XY.m128d_f64[1] = local_138.Transform.Rotation.XY.m128d_f64[1];
  (param_2->Transform).Rotation.ZW.m128d_f64[0] = local_138.Transform.Rotation.ZW.m128d_f64[0];
  (param_2->Transform).Rotation.ZW.m128d_f64[1] = local_138.Transform.Rotation.ZW.m128d_f64[1];
  (param_2->Transform).Translation.XY.m128d_f64[0] = local_138.Transform.Translation.XY.m128d_f64[0]
  ;
  (param_2->Transform).Translation.XY.m128d_f64[1] = local_138.Transform.Translation.XY.m128d_f64[1]
  ;
  (param_2->Transform).Translation.ZW.m128d_f64[0] = local_138.Transform.Translation.ZW.m128d_f64[0]
  ;
  (param_2->Transform).Translation.ZW.m128d_f64[1] = local_138.Transform.Translation.ZW.m128d_f64[1]
  ;
  (param_2->Transform).Scale3D.XY.m128d_f64[0] = local_138.Transform.Scale3D.XY.m128d_f64[0];
  (param_2->Transform).Scale3D.XY.m128d_f64[1] = local_138.Transform.Scale3D.XY.m128d_f64[1];
  (param_2->Transform).Scale3D.ZW.m128d_f64[0] = local_138.Transform.Scale3D.ZW.m128d_f64[0];
  (param_2->Transform).Scale3D.ZW.m128d_f64[1] = local_138.Transform.Scale3D.ZW.m128d_f64[1];
  param_2->Density = local_138.Density;
  *(undefined4 *)&param_2->field_0x64 = local_138._100_4_;
  (param_2->BoundsMin).field0_0x0._s_0.X = local_138.BoundsMin.field0_0x0._s_0.X;
  (param_2->BoundsMin).field0_0x0._s_0.Y = local_138.BoundsMin.field0_0x0._s_0.Y;
  (param_2->BoundsMin).field0_0x0._s_0.Z = local_138.BoundsMin.field0_0x0._s_0.Z;
  (param_2->BoundsMax).field0_0x0._s_0.X = local_138.BoundsMax.field0_0x0._s_0.X;
  (param_2->BoundsMax).field0_0x0._s_0.Y = local_138.BoundsMax.field0_0x0._s_0.Y;
  (param_2->BoundsMax).field0_0x0._s_0.Z = local_138.BoundsMax.field0_0x0._s_0.Z;
  param_2->_padding_ = local_138._padding_;
  (param_2->Color).field0_0x0._s_0.X = local_138.Color.field0_0x0._s_0.X;
  (param_2->Color).field0_0x0._s_0.Y = local_138.Color.field0_0x0._s_0.Y;
  (param_2->Color).field0_0x0._s_0.Z = local_138.Color.field0_0x0._s_0.Z;
  (param_2->Color).field0_0x0._s_0.W = local_138.Color.field0_0x0._s_0.W;
  param_2->Steepness = local_138.Steepness;
  param_2->Seed = local_138.Seed;
  param_2->MetadataEntry = local_138.MetadataEntry;
  FPCGContext::~FPCGContext(&local_468);
  return cVar7 != '\0';
}

// operator() @ 149741d10

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

TArray<FPCGPoint,TSizedDefaultAllocator<32>_> * __thiscall
`UPCGBlueprintElement::VariableLoop'::__l2::<lambda_1>::operator()
          (void *this,TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  longlong *plVar1;
  UObject *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  FPCGContext *pFVar4;
  code *pcVar5;
  void *_Src;
  bool bVar6;
  uint uVar7;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar8;
  UFunction *pUVar9;
  double *pdVar10;
  longlong lVar11;
  undefined1 auStackY_3d8 [32];
  FPCGContext local_398;
  undefined8 local_140;
  undefined1 local_138 [104];
  TVector<double>_u_0 TStack_d0;
  TVector<double>_u_0 local_b8;
  double dStack_a0;
  TVector4<double>_u_0 local_98;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  longlong local_60;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  uVar7 = param_1 & 0x800003ff;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffc00) + 1;
  }
  if (uVar7 == 0) {
    GInitRunaway();
  }
  plVar1 = *(longlong **)((longlong)this + 0x20);
  this_00 = *(UObject **)this;
  uVar2 = *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 0x38);
  uVar7 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pdVar10 = (double *)((longlong)param_1 * 0xd0 + *plVar1);
  uVar3 = *(undefined8 *)((longlong)this + 0x10);
  pFVar4 = *(FPCGContext **)((longlong)this + 8);
  FPCGContext::FPCGContext(&local_398);
  FPCGPoint::FPCGPoint((FPCGPoint *)local_138);
  local_58 = (void *)0x0;
  local_50 = 0;
  FPCGContext::operator=(&local_398,pFVar4);
  local_138._0_8_ = *pdVar10;
  local_138._8_8_ = pdVar10[1];
  local_138._16_8_ = pdVar10[2];
  local_138._24_8_ = pdVar10[3];
  local_138._32_8_ = pdVar10[4];
  local_138._40_8_ = pdVar10[5];
  local_138._48_8_ = pdVar10[6];
  local_138._56_8_ = pdVar10[7];
  local_138._64_8_ = pdVar10[8];
  local_138._72_8_ = pdVar10[9];
  local_138._80_8_ = pdVar10[10];
  local_138._88_8_ = pdVar10[0xb];
  local_138._96_8_ = pdVar10[0xc];
  TStack_d0._s_0.X = pdVar10[0xd];
  local_b8._s_0.X = pdVar10[0x10];
  local_b8._s_0.Y = pdVar10[0x11];
  TStack_d0._s_0.Y = pdVar10[0xe];
  TStack_d0._s_0.Z = pdVar10[0xf];
  local_b8._s_0.Z = pdVar10[0x12];
  dStack_a0 = pdVar10[0x13];
  local_98._s_0.X = pdVar10[0x14];
  local_98._s_0.Y = pdVar10[0x15];
  local_98._s_0.Z = pdVar10[0x16];
  local_98._s_0.W = pdVar10[0x17];
  local_78 = pdVar10[0x18];
  dStack_70 = pdVar10[0x19];
  local_140 = uVar3;
  local_68 = uVar2;
  local_60 = (longlong)param_1;
  pUVar9 = UObject::FindFunctionChecked(this_00,NAME_UPCGBlueprintElement_VariableLoopBody);
  (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar9,&local_398);
  _Src = local_58;
  lVar11 = (longlong)(int)local_50;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,(int)local_50,0,&__return_storage_ptr__->AllocatorInstance,(int)local_50,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,lVar11 * 0xd0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  FPCGContext::~FPCGContext(&local_398);
  return __return_storage_ptr__;
}

// ExecuteWithContext @ 149750620

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

void __thiscall
UPCGBlueprintElement::ExecuteWithContext
          (UPCGBlueprintElement *this,FPCGContext *param_1,FPCGDataCollection *param_2,
          FPCGDataCollection *param_3)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 auStack_328 [32];
  FPCGContext local_308;
  FPCGDataCollection local_b0;
  FPCGDataCollection FStack_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_328;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPCGBlueprintElement_ExecuteWithContext);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    FPCGContext::FPCGContext(&local_308);
    local_b0.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.TaggedData.ArrayNum = 0;
    local_b0.TaggedData.ArrayMax = 0;
    local_b0.bCancelExecutionOnEmpty = false;
    local_b0.bCancelExecution = false;
    local_b0.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.DataCrcs.ArrayNum = 0;
    local_b0.DataCrcs.ArrayMax = 0;
    local_b0.InactiveOutputPinBitmask = 0;
    FStack_80.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_80.TaggedData.ArrayNum = 0;
    FStack_80.TaggedData.ArrayMax = 0;
    FStack_80.bCancelExecutionOnEmpty = false;
    FStack_80.bCancelExecution = false;
    FStack_80.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_80.DataCrcs.ArrayNum = 0;
    FStack_80.DataCrcs.ArrayMax = 0;
    FStack_80.InactiveOutputPinBitmask = 0;
    FPCGContext::operator=(&local_308,param_1);
    FPCGDataCollection::operator=(&local_b0,param_2);
    FPCGDataCollection::operator=(&FStack_80,param_3);
    (**(code **)(*(longlong *)this + 0x260))(this,this_00,&local_308);
    FPCGContext::operator=(param_1,&local_308);
    FPCGDataCollection::operator=(param_3,&FStack_80);
    if (FStack_80.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)FStack_80.TaggedData.AllocatorInstance.Data,
               FStack_80.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)FStack_80.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(FStack_80.TaggedData.AllocatorInstance.Data);
    }
    if (local_b0.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_b0.TaggedData.AllocatorInstance.Data,
               local_b0.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_b0.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_b0.TaggedData.AllocatorInstance.Data);
    }
    FPCGContext::~FPCGContext(&local_308);
  }
  else {
    (**(code **)(*(longlong *)this + 0x2e0))(this,param_1,param_2,param_3);
  }
  return;
}

// ExecuteWithContext_Implementation @ 1497507e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGBlueprintElement::ExecuteWithContext_Implementation
          (UPCGBlueprintElement *this,FPCGContext *param_1,FPCGDataCollection *param_2,
          FPCGDataCollection *param_3)

{
  UPCGBlueprintBaseElement::Execute((UPCGBlueprintBaseElement *)this,param_2,param_3);
  return;
}

// GetContext @ 149754a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall UPCGBlueprintElement::GetContext(UPCGBlueprintElement *this)

{
  code *pcVar1;
  bool bVar2;
  FPCGContext *pFVar3;
  
  if (*(longlong *)&this->field_0x60 != 0) {
    return *(FPCGContext **)&this->field_0x60;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentContext",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Blueprint\\PCGBlueprintDeprecatedElement.cpp"
                     ,0xb3,
                     L"Execution context is not ready - do not call the GetContext method inside of non-execution methods"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPCGContext *)(*pcVar1)();
    return pFVar3;
  }
  return *(FPCGContext **)&this->field_0x60;
}

// GetPrivateStaticClass @ 14975a9c0

UClass * __cdecl UPCGBlueprintElement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBlueprintElement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBlueprintElement",
               &Z_Registration_Info_UClass_UPCGBlueprintElement.InnerSingleton,
               StaticRegisterNativesUPCGBlueprintElement,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBlueprintElement>,
               InternalVTableHelperCtorCaller<UPCGBlueprintElement>,local_res8,
               UPCGBlueprintBaseElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBlueprintElement.InnerSingleton;
}

// GetRandomStream @ 14975d530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRandomStream __thiscall
UPCGBlueprintElement::GetRandomStream(UPCGBlueprintElement *this,FPCGContext *param_1)

{
  int iVar1;
  FPCGContext *in_R8;
  
  iVar1 = FPCGContext::GetSeed(in_R8);
  *(int *)&param_1->_padding_ = iVar1;
  *(int *)((longlong)&param_1->_padding_ + 4) = iVar1;
  return (FRandomStream)param_1;
}

// GetSeed @ 14975fc90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall UPCGBlueprintElement::GetSeed(UPCGBlueprintElement *this,FPCGContext *param_1)

{
  int iVar1;
  
  iVar1 = FPCGContext::GetSeed(param_1);
  return iVar1;
}

// IterationLoop @ 14976c380

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

void __thiscall
UPCGBlueprintElement::IterationLoop
          (UPCGBlueprintElement *this,FPCGContext *param_1,long64 param_2,UPCGPointData **param_3,
          UPCGSpatialData *param_4,UPCGSpatialData *param_5,UPCGPointData *param_6)

{
  FText *pFVar1;
  FTextFormat *pFVar2;
  UPCGPointData *pUVar3;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar4;
  code **ppcVar5;
  bool bVar6;
  undefined1 auStackY_168 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  undefined4 local_118;
  UPCGSpatialData *local_110;
  long64 local_108;
  FTextFormat local_100;
  FText local_f0;
  FFormatArgumentValue local_e0;
  FString local_c0;
  FString local_b0;
  FText local_a0;
  FTextFormat local_90;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_110 = param_5;
  local_118 = 0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)this;
  local_108 = param_2;
  if (param_2 < 0) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         (&local_a0,L"PCGBlueprintElement",L"InvalidIterationCount",
                          L"Invalid number of iterations ({0})");
      pFVar2 = FTextFormat::FTextFormat(&local_90,pFVar1,Default);
      local_e0.Type = Int;
      local_e0.TextValue.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(ITextData *)0x0;
      local_e0.TextValue.field0_0x0.TypedValue.Flags = 0;
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.ArrayNum = 1;
      local_e0.field1_0x8.IntValue = param_2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_128.AllocatorInstance,1,&local_128.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_128.AllocatorInstance.Data,&local_e0,1);
      local_100.TextFormatData.Object = (pFVar2->TextFormatData).Object;
      local_100.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar2->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_100.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_100.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_100.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_f0,&local_100,&local_128);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
      if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
      if (local_e0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_e0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar2->TextFormatData).SharedReferenceCount.ReferenceController);
      FText::ToString(&local_f0);
      bVar6 = param_1 != (FPCGContext *)0x0;
      if (bVar6) {
        FPCGContext::GetTaskName(param_1,&local_b0);
        FPCGContext::GetExecutionSourceName(param_1,&local_c0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar6) && (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    if (param_6 == (UPCGPointData *)0x0) {
      if (param_4 != (UPCGSpatialData *)0x0) {
        param_5 = param_4;
      }
      pUVar3 = FPCGContext::NewObject_AnyThread<UPCGPointData>(param_1);
      *param_3 = pUVar3;
      if (param_5 != (UPCGSpatialData *)0x0) {
        UPCGSpatialData::InitializeFromData
                  ((UPCGSpatialData *)pUVar3,param_5,(UPCGMetadata *)0x0,true,true);
      }
    }
    else {
      *param_3 = param_6;
    }
    pTVar4 = UPCGPointData::GetMutablePoints(*param_3);
    bVar6 = (param_1->AsyncState).bIsCallingBlueprint;
    (param_1->AsyncState).bIsCallingBlueprint = true;
    pUVar3 = *param_3;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x30,8);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UPCGBlueprintElement::IterationLoop'::`2'::<lambda_1>,0,1>
                         ::_vftable_;
    local_50[1] = (code *)local_128.AllocatorInstance.Data;
    local_50[2] = (code *)param_1;
    local_50[3] = (code *)param_4;
    local_50[4] = (code *)local_110;
    local_50[5] = (code *)pUVar3;
    if (local_50 + 1 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UPCGBlueprintElement::IterationLoop'::__l2::<lambda_1>,bool,int,FPCGPoint_&>
                    ::Call;
    }
    FPCGAsync::AsyncPointProcessing
              (param_1,(int)local_108,pTVar4,(TFunction<bool___cdecl(int,FPCGPoint_&)> *)local_78);
    if (local_78[0] != (code *)0x0) {
      ppcVar5 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar5 = local_50;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
    (param_1->AsyncState).bIsCallingBlueprint = bVar6;
  }
  return;
}

// IterationLoopBody @ 14976c6e0

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

bool __thiscall
UPCGBlueprintElement::IterationLoopBody
          (UPCGBlueprintElement *this,FPCGContext *param_1,long64 param_2,UPCGSpatialData *param_3,
          UPCGSpatialData *param_4,FPCGPoint *param_5,UPCGMetadata *param_6)

{
  char cVar1;
  UFunction *pUVar2;
  undefined1 auStack_3b8 [32];
  FPCGContext local_398;
  long64 local_140;
  UPCGSpatialData *local_138;
  UPCGSpatialData *local_130;
  FPCGPoint local_128;
  UPCGMetadata *local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  FPCGContext::FPCGContext(&local_398);
  FPCGPoint::FPCGPoint(&local_128);
  local_50 = '\0';
  FPCGContext::operator=(&local_398,param_1);
  local_128.Transform.Rotation.XY.m128d_f64[0] = (param_5->Transform).Rotation.XY.m128d_f64[0];
  local_128.Transform.Rotation.XY.m128d_f64[1] = (param_5->Transform).Rotation.XY.m128d_f64[1];
  local_128.Transform.Rotation.ZW.m128d_f64[0] = (param_5->Transform).Rotation.ZW.m128d_f64[0];
  local_128.Transform.Rotation.ZW.m128d_f64[1] = (param_5->Transform).Rotation.ZW.m128d_f64[1];
  local_130 = param_4;
  local_128.Transform.Translation.XY.m128d_f64[0] = (param_5->Transform).Translation.XY.m128d_f64[0]
  ;
  local_128.Transform.Translation.XY.m128d_f64[1] = (param_5->Transform).Translation.XY.m128d_f64[1]
  ;
  local_128.Transform.Translation.ZW.m128d_f64[0] = (param_5->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_128.Transform.Translation.ZW.m128d_f64[1] = (param_5->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_128.Transform.Scale3D.XY.m128d_f64[0] = (param_5->Transform).Scale3D.XY.m128d_f64[0];
  local_128.Transform.Scale3D.XY.m128d_f64[1] = (param_5->Transform).Scale3D.XY.m128d_f64[1];
  local_128.Transform.Scale3D.ZW.m128d_f64[0] = (param_5->Transform).Scale3D.ZW.m128d_f64[0];
  local_128.Transform.Scale3D.ZW.m128d_f64[1] = (param_5->Transform).Scale3D.ZW.m128d_f64[1];
  local_128.Density = param_5->Density;
  local_128._100_4_ = *(undefined4 *)&param_5->field_0x64;
  local_128.BoundsMin.field0_0x0._s_0.X = (param_5->BoundsMin).field0_0x0._s_0.X;
  local_128.BoundsMax.field0_0x0._s_0.X = (param_5->BoundsMax).field0_0x0._s_0.X;
  local_128.BoundsMax.field0_0x0._s_0.Y = (param_5->BoundsMax).field0_0x0._s_0.Y;
  local_128.BoundsMin.field0_0x0._s_0.Y = (param_5->BoundsMin).field0_0x0._s_0.Y;
  local_128.BoundsMin.field0_0x0._s_0.Z = (param_5->BoundsMin).field0_0x0._s_0.Z;
  local_128.BoundsMax.field0_0x0._s_0.Z = (param_5->BoundsMax).field0_0x0._s_0.Z;
  local_128._padding_ = param_5->_padding_;
  local_128.Color.field0_0x0._s_0.X = (param_5->Color).field0_0x0._s_0.X;
  local_128.Color.field0_0x0._s_0.Y = (param_5->Color).field0_0x0._s_0.Y;
  local_128.Color.field0_0x0._s_0.Z = (param_5->Color).field0_0x0._s_0.Z;
  local_128.Color.field0_0x0._s_0.W = (param_5->Color).field0_0x0._s_0.W;
  local_128.Steepness = param_5->Steepness;
  local_128.Seed = param_5->Seed;
  local_128.MetadataEntry = param_5->MetadataEntry;
  local_58 = param_6;
  local_140 = param_2;
  local_138 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGBlueprintElement_IterationLoopBody)
  ;
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,&local_398);
  cVar1 = local_50;
  (param_5->Transform).Rotation.XY.m128d_f64[0] = local_128.Transform.Rotation.XY.m128d_f64[0];
  (param_5->Transform).Rotation.XY.m128d_f64[1] = local_128.Transform.Rotation.XY.m128d_f64[1];
  (param_5->Transform).Rotation.ZW.m128d_f64[0] = local_128.Transform.Rotation.ZW.m128d_f64[0];
  (param_5->Transform).Rotation.ZW.m128d_f64[1] = local_128.Transform.Rotation.ZW.m128d_f64[1];
  (param_5->Transform).Translation.XY.m128d_f64[0] = local_128.Transform.Translation.XY.m128d_f64[0]
  ;
  (param_5->Transform).Translation.XY.m128d_f64[1] = local_128.Transform.Translation.XY.m128d_f64[1]
  ;
  (param_5->Transform).Translation.ZW.m128d_f64[0] = local_128.Transform.Translation.ZW.m128d_f64[0]
  ;
  (param_5->Transform).Translation.ZW.m128d_f64[1] = local_128.Transform.Translation.ZW.m128d_f64[1]
  ;
  (param_5->Transform).Scale3D.XY.m128d_f64[0] = local_128.Transform.Scale3D.XY.m128d_f64[0];
  (param_5->Transform).Scale3D.XY.m128d_f64[1] = local_128.Transform.Scale3D.XY.m128d_f64[1];
  (param_5->Transform).Scale3D.ZW.m128d_f64[0] = local_128.Transform.Scale3D.ZW.m128d_f64[0];
  (param_5->Transform).Scale3D.ZW.m128d_f64[1] = local_128.Transform.Scale3D.ZW.m128d_f64[1];
  param_5->Density = local_128.Density;
  *(undefined4 *)&param_5->field_0x64 = local_128._100_4_;
  (param_5->BoundsMin).field0_0x0._s_0.X = local_128.BoundsMin.field0_0x0._s_0.X;
  (param_5->BoundsMin).field0_0x0._s_0.Y = local_128.BoundsMin.field0_0x0._s_0.Y;
  (param_5->BoundsMin).field0_0x0._s_0.Z = local_128.BoundsMin.field0_0x0._s_0.Z;
  (param_5->BoundsMax).field0_0x0._s_0.X = local_128.BoundsMax.field0_0x0._s_0.X;
  (param_5->BoundsMax).field0_0x0._s_0.Y = local_128.BoundsMax.field0_0x0._s_0.Y;
  (param_5->BoundsMax).field0_0x0._s_0.Z = local_128.BoundsMax.field0_0x0._s_0.Z;
  param_5->_padding_ = local_128._padding_;
  (param_5->Color).field0_0x0._s_0.X = local_128.Color.field0_0x0._s_0.X;
  (param_5->Color).field0_0x0._s_0.Y = local_128.Color.field0_0x0._s_0.Y;
  (param_5->Color).field0_0x0._s_0.Z = local_128.Color.field0_0x0._s_0.Z;
  (param_5->Color).field0_0x0._s_0.W = local_128.Color.field0_0x0._s_0.W;
  param_5->Steepness = local_128.Steepness;
  param_5->Seed = local_128.Seed;
  param_5->MetadataEntry = local_128.MetadataEntry;
  FPCGContext::~FPCGContext(&local_398);
  return cVar1 != '\0';
}

// NestedLoop @ 14976cbb0

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

void __thiscall
UPCGBlueprintElement::NestedLoop
          (UPCGBlueprintElement *this,FPCGContext *param_1,UPCGPointData *param_2,
          UPCGPointData *param_3,UPCGPointData **param_4,UPCGPointData *param_5)

{
  UPCGPointData *pUVar1;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  FText *this_00;
  code **ppcVar3;
  bool bVar4;
  undefined1 auStack_e8 [32];
  FString local_b0;
  FString local_a0;
  FText local_90;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
  if ((param_2 == (UPCGPointData *)0x0) || (param_3 == (UPCGPointData *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      this_00 = FText::AsLocalizable_Advanced_LocText
                          (&local_90,L"PCGBlueprintElement",L"InvalidInputDataNestedLoop",
                           L"Invalid input data in NestedLoop");
      FText::ToString(this_00);
      bVar4 = param_1 != (FPCGContext *)0x0;
      if (bVar4) {
        FPCGContext::GetTaskName(param_1,&local_a0);
        FPCGContext::GetExecutionSourceName(param_1,&local_b0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar4) &&
         ((UPCGBlueprintElement *)local_b0.Data.AllocatorInstance.Data !=
          (UPCGBlueprintElement *)0x0)) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if ((bVar4) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    if (param_5 == (UPCGPointData *)0x0) {
      pUVar1 = FPCGContext::NewObject_AnyThread<UPCGPointData>(param_1);
      *param_4 = pUVar1;
      UPCGSpatialData::InitializeFromData
                ((UPCGSpatialData *)pUVar1,(UPCGSpatialData *)param_2,(UPCGMetadata *)0x0,true,true)
      ;
      UPCGMetadata::AddAttributes
                ((UPCGMetadata *)(*param_4)->_padding_,(UPCGMetadata *)param_3->_padding_);
    }
    else {
      *param_4 = param_5;
    }
    pTVar2 = UPCGPointData::GetMutablePoints(*param_4);
    local_78[0] = (code *)0x0;
    bVar4 = (param_1->AsyncState).bIsCallingBlueprint;
    (param_1->AsyncState).bIsCallingBlueprint = true;
    pUVar1 = *param_4;
    local_50 = FMemory::Malloc(0x40,8);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UPCGBlueprintElement::NestedLoop'::`2'::<lambda_1>,0,1>
                         ::_vftable_;
    local_50[1] = (code *)local_b0.Data.AllocatorInstance.Data;
    local_50[2] = (code *)param_1;
    local_50[3] = (code *)param_2;
    local_50[4] = (code *)param_3;
    local_50[5] = (code *)pUVar1;
    local_50[6] = (code *)&param_2->Points;
    local_50[7] = (code *)&param_3->Points;
    if (local_50 + 1 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UPCGBlueprintElement::NestedLoop'::__l2::<lambda_1>,bool,int,FPCGPoint_&>
                    ::Call;
    }
    FPCGAsync::AsyncPointProcessing
              (param_1,(param_3->Points).ArrayNum * (param_2->Points).ArrayNum,pTVar2,
               (TFunction<bool___cdecl(int,FPCGPoint_&)> *)local_78);
    if (local_78[0] != (code *)0x0) {
      ppcVar3 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar3 = local_50;
      }
      (**(code **)(*ppcVar3 + 0x10))();
    }
    (param_1->AsyncState).bIsCallingBlueprint = bVar4;
  }
  return;
}

// NestedLoopBody @ 14976ce60

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

bool __thiscall
UPCGBlueprintElement::NestedLoopBody
          (UPCGBlueprintElement *this,FPCGContext *param_1,UPCGPointData *param_2,
          UPCGPointData *param_3,FPCGPoint *param_4,FPCGPoint *param_5,FPCGPoint *param_6,
          UPCGMetadata *param_7,long64 param_8,long64 param_9)

{
  char cVar1;
  UFunction *pUVar2;
  undefined1 auStack_578 [32];
  FPCGContext local_558;
  UPCGPointData *local_300;
  UPCGPointData *local_2f8;
  FPCGPoint local_2e8;
  FPCGPoint local_218;
  FPCGPoint local_148;
  UPCGMetadata *local_78;
  long64 local_70;
  long64 local_68;
  char local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_578;
  FPCGContext::FPCGContext(&local_558);
  FPCGPoint::FPCGPoint(&local_2e8);
  FPCGPoint::FPCGPoint(&local_218);
  FPCGPoint::FPCGPoint(&local_148);
  local_60 = '\0';
  FPCGContext::operator=(&local_558,param_1);
  local_2e8.Transform.Rotation.XY.m128d_f64[0] = (param_4->Transform).Rotation.XY.m128d_f64[0];
  local_2e8.Transform.Rotation.XY.m128d_f64[1] = (param_4->Transform).Rotation.XY.m128d_f64[1];
  local_2e8.Transform.Rotation.ZW.m128d_f64[0] = (param_4->Transform).Rotation.ZW.m128d_f64[0];
  local_2e8.Transform.Rotation.ZW.m128d_f64[1] = (param_4->Transform).Rotation.ZW.m128d_f64[1];
  local_2e8.Transform.Translation.XY.m128d_f64[0] = (param_4->Transform).Translation.XY.m128d_f64[0]
  ;
  local_2e8.Transform.Translation.XY.m128d_f64[1] = (param_4->Transform).Translation.XY.m128d_f64[1]
  ;
  local_2e8.Transform.Translation.ZW.m128d_f64[0] = (param_4->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_2e8.Transform.Translation.ZW.m128d_f64[1] = (param_4->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_2e8.Transform.Scale3D.XY.m128d_f64[0] = (param_4->Transform).Scale3D.XY.m128d_f64[0];
  local_2e8.Transform.Scale3D.XY.m128d_f64[1] = (param_4->Transform).Scale3D.XY.m128d_f64[1];
  local_2e8.Transform.Scale3D.ZW.m128d_f64[0] = (param_4->Transform).Scale3D.ZW.m128d_f64[0];
  local_2e8.Transform.Scale3D.ZW.m128d_f64[1] = (param_4->Transform).Scale3D.ZW.m128d_f64[1];
  local_2e8.Density = param_4->Density;
  local_2e8._100_4_ = *(undefined4 *)&param_4->field_0x64;
  local_2e8.BoundsMin.field0_0x0._s_0.X = (param_4->BoundsMin).field0_0x0._s_0.X;
  local_2e8.BoundsMin.field0_0x0._s_0.Y = (param_4->BoundsMin).field0_0x0._s_0.Y;
  local_2e8.BoundsMin.field0_0x0._s_0.Z = (param_4->BoundsMin).field0_0x0._s_0.Z;
  local_2e8.BoundsMax.field0_0x0._s_0.X = (param_4->BoundsMax).field0_0x0._s_0.X;
  local_2e8.BoundsMax.field0_0x0._s_0.Y = (param_4->BoundsMax).field0_0x0._s_0.Y;
  local_2e8.BoundsMax.field0_0x0._s_0.Z = (param_4->BoundsMax).field0_0x0._s_0.Z;
  local_2e8._padding_ = param_4->_padding_;
  local_2e8.Color.field0_0x0._s_0.X = (param_4->Color).field0_0x0._s_0.X;
  local_2e8.Color.field0_0x0._s_0.Y = (param_4->Color).field0_0x0._s_0.Y;
  local_2e8.Color.field0_0x0._s_0.Z = (param_4->Color).field0_0x0._s_0.Z;
  local_2e8.Color.field0_0x0._s_0.W = (param_4->Color).field0_0x0._s_0.W;
  local_2e8.Steepness = param_4->Steepness;
  local_2e8.Seed = param_4->Seed;
  local_2e8.MetadataEntry = param_4->MetadataEntry;
  local_218.Transform.Rotation.XY.m128d_f64[0] = (param_5->Transform).Rotation.XY.m128d_f64[0];
  local_218.Transform.Rotation.XY.m128d_f64[1] = (param_5->Transform).Rotation.XY.m128d_f64[1];
  local_218.Transform.Rotation.ZW.m128d_f64[0] = (param_5->Transform).Rotation.ZW.m128d_f64[0];
  local_218.Transform.Rotation.ZW.m128d_f64[1] = (param_5->Transform).Rotation.ZW.m128d_f64[1];
  local_218.Transform.Translation.XY.m128d_f64[0] = (param_5->Transform).Translation.XY.m128d_f64[0]
  ;
  local_218.Transform.Translation.XY.m128d_f64[1] = (param_5->Transform).Translation.XY.m128d_f64[1]
  ;
  local_218.Transform.Translation.ZW.m128d_f64[0] = (param_5->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_218.Transform.Translation.ZW.m128d_f64[1] = (param_5->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_218.Transform.Scale3D.XY.m128d_f64[0] = (param_5->Transform).Scale3D.XY.m128d_f64[0];
  local_218.Transform.Scale3D.XY.m128d_f64[1] = (param_5->Transform).Scale3D.XY.m128d_f64[1];
  local_218.Transform.Scale3D.ZW.m128d_f64[0] = (param_5->Transform).Scale3D.ZW.m128d_f64[0];
  local_218.Transform.Scale3D.ZW.m128d_f64[1] = (param_5->Transform).Scale3D.ZW.m128d_f64[1];
  local_218.Density = param_5->Density;
  local_218._100_4_ = *(undefined4 *)&param_5->field_0x64;
  local_218.BoundsMin.field0_0x0._s_0.X = (param_5->BoundsMin).field0_0x0._s_0.X;
  local_218.BoundsMin.field0_0x0._s_0.Y = (param_5->BoundsMin).field0_0x0._s_0.Y;
  local_218.BoundsMin.field0_0x0._s_0.Z = (param_5->BoundsMin).field0_0x0._s_0.Z;
  local_218.BoundsMax.field0_0x0._s_0.X = (param_5->BoundsMax).field0_0x0._s_0.X;
  local_218.BoundsMax.field0_0x0._s_0.Y = (param_5->BoundsMax).field0_0x0._s_0.Y;
  local_218.BoundsMax.field0_0x0._s_0.Z = (param_5->BoundsMax).field0_0x0._s_0.Z;
  local_218._padding_ = param_5->_padding_;
  local_218.Color.field0_0x0._s_0.X = (param_5->Color).field0_0x0._s_0.X;
  local_218.Color.field0_0x0._s_0.Y = (param_5->Color).field0_0x0._s_0.Y;
  local_218.Color.field0_0x0._s_0.Z = (param_5->Color).field0_0x0._s_0.Z;
  local_218.Color.field0_0x0._s_0.W = (param_5->Color).field0_0x0._s_0.W;
  local_218.Steepness = param_5->Steepness;
  local_218.Seed = param_5->Seed;
  local_218.MetadataEntry = param_5->MetadataEntry;
  local_148.Transform.Rotation.XY.m128d_f64[0] = (param_6->Transform).Rotation.XY.m128d_f64[0];
  local_148.Transform.Rotation.XY.m128d_f64[1] = (param_6->Transform).Rotation.XY.m128d_f64[1];
  local_148.Transform.Rotation.ZW.m128d_f64[0] = (param_6->Transform).Rotation.ZW.m128d_f64[0];
  local_148.Transform.Rotation.ZW.m128d_f64[1] = (param_6->Transform).Rotation.ZW.m128d_f64[1];
  local_148.Transform.Translation.XY.m128d_f64[0] = (param_6->Transform).Translation.XY.m128d_f64[0]
  ;
  local_148.Transform.Translation.XY.m128d_f64[1] = (param_6->Transform).Translation.XY.m128d_f64[1]
  ;
  local_148.Transform.Translation.ZW.m128d_f64[0] = (param_6->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_148.Transform.Translation.ZW.m128d_f64[1] = (param_6->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_148.Transform.Scale3D.XY.m128d_f64[0] = (param_6->Transform).Scale3D.XY.m128d_f64[0];
  local_148.Transform.Scale3D.XY.m128d_f64[1] = (param_6->Transform).Scale3D.XY.m128d_f64[1];
  local_148.Transform.Scale3D.ZW.m128d_f64[0] = (param_6->Transform).Scale3D.ZW.m128d_f64[0];
  local_148.Transform.Scale3D.ZW.m128d_f64[1] = (param_6->Transform).Scale3D.ZW.m128d_f64[1];
  local_148.Density = param_6->Density;
  local_148._100_4_ = *(undefined4 *)&param_6->field_0x64;
  local_148.BoundsMin.field0_0x0._s_0.X = (param_6->BoundsMin).field0_0x0._s_0.X;
  local_148.BoundsMin.field0_0x0._s_0.Y = (param_6->BoundsMin).field0_0x0._s_0.Y;
  local_148.BoundsMin.field0_0x0._s_0.Z = (param_6->BoundsMin).field0_0x0._s_0.Z;
  local_148.BoundsMax.field0_0x0._s_0.X = (param_6->BoundsMax).field0_0x0._s_0.X;
  local_148.BoundsMax.field0_0x0._s_0.Y = (param_6->BoundsMax).field0_0x0._s_0.Y;
  local_148.BoundsMax.field0_0x0._s_0.Z = (param_6->BoundsMax).field0_0x0._s_0.Z;
  local_148._padding_ = param_6->_padding_;
  local_148.Color.field0_0x0._s_0.X = (param_6->Color).field0_0x0._s_0.X;
  local_148.Color.field0_0x0._s_0.Y = (param_6->Color).field0_0x0._s_0.Y;
  local_148.Color.field0_0x0._s_0.Z = (param_6->Color).field0_0x0._s_0.Z;
  local_148.Color.field0_0x0._s_0.W = (param_6->Color).field0_0x0._s_0.W;
  local_148.Steepness = param_6->Steepness;
  local_148.Seed = param_6->Seed;
  local_148.MetadataEntry = param_6->MetadataEntry;
  local_70 = param_8;
  local_68 = param_9;
  local_78 = param_7;
  local_300 = param_2;
  local_2f8 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGBlueprintElement_NestedLoopBody);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,&local_558);
  cVar1 = local_60;
  (param_6->Transform).Rotation.XY.m128d_f64[0] = local_148.Transform.Rotation.XY.m128d_f64[0];
  (param_6->Transform).Rotation.XY.m128d_f64[1] = local_148.Transform.Rotation.XY.m128d_f64[1];
  (param_6->Transform).Rotation.ZW.m128d_f64[0] = local_148.Transform.Rotation.ZW.m128d_f64[0];
  (param_6->Transform).Rotation.ZW.m128d_f64[1] = local_148.Transform.Rotation.ZW.m128d_f64[1];
  (param_6->Transform).Translation.XY.m128d_f64[0] = local_148.Transform.Translation.XY.m128d_f64[0]
  ;
  (param_6->Transform).Translation.XY.m128d_f64[1] = local_148.Transform.Translation.XY.m128d_f64[1]
  ;
  (param_6->Transform).Translation.ZW.m128d_f64[0] = local_148.Transform.Translation.ZW.m128d_f64[0]
  ;
  (param_6->Transform).Translation.ZW.m128d_f64[1] = local_148.Transform.Translation.ZW.m128d_f64[1]
  ;
  (param_6->Transform).Scale3D.XY.m128d_f64[0] = local_148.Transform.Scale3D.XY.m128d_f64[0];
  (param_6->Transform).Scale3D.XY.m128d_f64[1] = local_148.Transform.Scale3D.XY.m128d_f64[1];
  (param_6->Transform).Scale3D.ZW.m128d_f64[0] = local_148.Transform.Scale3D.ZW.m128d_f64[0];
  (param_6->Transform).Scale3D.ZW.m128d_f64[1] = local_148.Transform.Scale3D.ZW.m128d_f64[1];
  param_6->Density = local_148.Density;
  *(undefined4 *)&param_6->field_0x64 = local_148._100_4_;
  (param_6->BoundsMin).field0_0x0._s_0.X = local_148.BoundsMin.field0_0x0._s_0.X;
  (param_6->BoundsMin).field0_0x0._s_0.Y = local_148.BoundsMin.field0_0x0._s_0.Y;
  (param_6->BoundsMin).field0_0x0._s_0.Z = local_148.BoundsMin.field0_0x0._s_0.Z;
  (param_6->BoundsMax).field0_0x0._s_0.X = local_148.BoundsMax.field0_0x0._s_0.X;
  (param_6->BoundsMax).field0_0x0._s_0.Y = local_148.BoundsMax.field0_0x0._s_0.Y;
  (param_6->BoundsMax).field0_0x0._s_0.Z = local_148.BoundsMax.field0_0x0._s_0.Z;
  param_6->_padding_ = local_148._padding_;
  (param_6->Color).field0_0x0._s_0.X = local_148.Color.field0_0x0._s_0.X;
  (param_6->Color).field0_0x0._s_0.Y = local_148.Color.field0_0x0._s_0.Y;
  (param_6->Color).field0_0x0._s_0.Z = local_148.Color.field0_0x0._s_0.Z;
  (param_6->Color).field0_0x0._s_0.W = local_148.Color.field0_0x0._s_0.W;
  param_6->Steepness = local_148.Steepness;
  param_6->Seed = local_148.Seed;
  param_6->MetadataEntry = local_148.MetadataEntry;
  FPCGContext::~FPCGContext(&local_558);
  return cVar1 != '\0';
}

// PointLoop @ 14976e340

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

void __thiscall
UPCGBlueprintElement::PointLoop
          (UPCGBlueprintElement *this,FPCGContext *param_1,UPCGPointData *param_2,
          UPCGPointData **param_3,UPCGPointData *param_4)

{
  FText *this_00;
  UPCGPointData *pUVar1;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  code **ppcVar3;
  bool bVar4;
  undefined1 auStack_e8 [32];
  FString local_b0;
  FString local_a0;
  FText local_90;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_2 == (UPCGPointData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      this_00 = FText::AsLocalizable_Advanced_LocText
                          (&local_90,L"PCGBlueprintElement",L"InvalidInputDataPointLoop",
                           L"Invalid input data in PointLoop");
      FText::ToString(this_00);
      bVar4 = param_1 != (FPCGContext *)0x0;
      if (bVar4) {
        FPCGContext::GetTaskName(param_1,&local_a0);
        FPCGContext::GetExecutionSourceName(param_1,&local_b0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar4) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if ((bVar4) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    if (param_4 == (UPCGPointData *)0x0) {
      pUVar1 = FPCGContext::NewObject_AnyThread<UPCGPointData>(param_1);
      *param_3 = pUVar1;
      UPCGSpatialData::InitializeFromData
                ((UPCGSpatialData *)pUVar1,(UPCGSpatialData *)param_2,(UPCGMetadata *)0x0,true,true)
      ;
    }
    else {
      *param_3 = param_4;
    }
    pTVar2 = UPCGPointData::GetMutablePoints(*param_3);
    bVar4 = (param_1->AsyncState).bIsCallingBlueprint;
    (param_1->AsyncState).bIsCallingBlueprint = true;
    pUVar1 = *param_3;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x30,8);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UPCGBlueprintElement::PointLoop'::`2'::<lambda_1>,0,1>
                         ::_vftable_;
    local_50[1] = (code *)this;
    local_50[2] = (code *)param_1;
    local_50[3] = (code *)param_2;
    local_50[4] = (code *)pUVar1;
    local_50[5] = (code *)&param_2->Points;
    if (local_50 + 1 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UPCGBlueprintElement::PointLoop'::__l2::<lambda_1>,bool,int,FPCGPoint_&>
                    ::Call;
    }
    FPCGAsync::AsyncPointProcessing
              (param_1,(param_2->Points).ArrayNum,pTVar2,
               (TFunction<bool___cdecl(int,FPCGPoint_&)> *)local_78);
    if (local_78[0] != (code *)0x0) {
      ppcVar3 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar3 = local_50;
      }
      (**(code **)(*ppcVar3 + 0x10))();
    }
    (param_1->AsyncState).bIsCallingBlueprint = bVar4;
  }
  return;
}

// PointLoopBody @ 14976e5a0

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

bool __thiscall
UPCGBlueprintElement::PointLoopBody
          (UPCGBlueprintElement *this,FPCGContext *param_1,UPCGPointData *param_2,FPCGPoint *param_3
          ,FPCGPoint *param_4,UPCGMetadata *param_5,long64 param_6)

{
  char cVar1;
  UFunction *pUVar2;
  undefined1 auStack_488 [32];
  FPCGContext local_468;
  UPCGPointData *local_210;
  FPCGPoint local_208;
  FPCGPoint local_138;
  UPCGMetadata *local_68;
  long64 local_60;
  char local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_488;
  FPCGContext::FPCGContext(&local_468);
  FPCGPoint::FPCGPoint(&local_208);
  FPCGPoint::FPCGPoint(&local_138);
  local_58 = '\0';
  FPCGContext::operator=(&local_468,param_1);
  local_208.Transform.Rotation.XY.m128d_f64[0] = (param_3->Transform).Rotation.XY.m128d_f64[0];
  local_208.Transform.Rotation.XY.m128d_f64[1] = (param_3->Transform).Rotation.XY.m128d_f64[1];
  local_208.Transform.Rotation.ZW.m128d_f64[0] = (param_3->Transform).Rotation.ZW.m128d_f64[0];
  local_208.Transform.Rotation.ZW.m128d_f64[1] = (param_3->Transform).Rotation.ZW.m128d_f64[1];
  local_208.Transform.Translation.XY.m128d_f64[0] = (param_3->Transform).Translation.XY.m128d_f64[0]
  ;
  local_208.Transform.Translation.XY.m128d_f64[1] = (param_3->Transform).Translation.XY.m128d_f64[1]
  ;
  local_208.Transform.Translation.ZW.m128d_f64[0] = (param_3->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_208.Transform.Translation.ZW.m128d_f64[1] = (param_3->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_208.Transform.Scale3D.XY.m128d_f64[0] = (param_3->Transform).Scale3D.XY.m128d_f64[0];
  local_208.Transform.Scale3D.XY.m128d_f64[1] = (param_3->Transform).Scale3D.XY.m128d_f64[1];
  local_208.Transform.Scale3D.ZW.m128d_f64[0] = (param_3->Transform).Scale3D.ZW.m128d_f64[0];
  local_208.Transform.Scale3D.ZW.m128d_f64[1] = (param_3->Transform).Scale3D.ZW.m128d_f64[1];
  local_208.Density = param_3->Density;
  local_208._100_4_ = *(undefined4 *)&param_3->field_0x64;
  local_208.BoundsMin.field0_0x0._s_0.X = (param_3->BoundsMin).field0_0x0._s_0.X;
  local_208.BoundsMax.field0_0x0._s_0.X = (param_3->BoundsMax).field0_0x0._s_0.X;
  local_208.BoundsMax.field0_0x0._s_0.Y = (param_3->BoundsMax).field0_0x0._s_0.Y;
  local_208.BoundsMin.field0_0x0._s_0.Y = (param_3->BoundsMin).field0_0x0._s_0.Y;
  local_208.BoundsMin.field0_0x0._s_0.Z = (param_3->BoundsMin).field0_0x0._s_0.Z;
  local_208.BoundsMax.field0_0x0._s_0.Z = (param_3->BoundsMax).field0_0x0._s_0.Z;
  local_208._padding_ = param_3->_padding_;
  local_208.Color.field0_0x0._s_0.X = (param_3->Color).field0_0x0._s_0.X;
  local_208.Color.field0_0x0._s_0.Y = (param_3->Color).field0_0x0._s_0.Y;
  local_208.Color.field0_0x0._s_0.Z = (param_3->Color).field0_0x0._s_0.Z;
  local_208.Color.field0_0x0._s_0.W = (param_3->Color).field0_0x0._s_0.W;
  local_208.Steepness = param_3->Steepness;
  local_208.Seed = param_3->Seed;
  local_208.MetadataEntry = param_3->MetadataEntry;
  local_138.Transform.Rotation.XY.m128d_f64[0] = (param_4->Transform).Rotation.XY.m128d_f64[0];
  local_138.Transform.Rotation.XY.m128d_f64[1] = (param_4->Transform).Rotation.XY.m128d_f64[1];
  local_138.Transform.Rotation.ZW.m128d_f64[0] = (param_4->Transform).Rotation.ZW.m128d_f64[0];
  local_138.Transform.Rotation.ZW.m128d_f64[1] = (param_4->Transform).Rotation.ZW.m128d_f64[1];
  local_138.Transform.Translation.XY.m128d_f64[0] = (param_4->Transform).Translation.XY.m128d_f64[0]
  ;
  local_138.Transform.Translation.XY.m128d_f64[1] = (param_4->Transform).Translation.XY.m128d_f64[1]
  ;
  local_138.Transform.Translation.ZW.m128d_f64[0] = (param_4->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_138.Transform.Translation.ZW.m128d_f64[1] = (param_4->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_138.Transform.Scale3D.XY.m128d_f64[0] = (param_4->Transform).Scale3D.XY.m128d_f64[0];
  local_138.Transform.Scale3D.XY.m128d_f64[1] = (param_4->Transform).Scale3D.XY.m128d_f64[1];
  local_138.Transform.Scale3D.ZW.m128d_f64[0] = (param_4->Transform).Scale3D.ZW.m128d_f64[0];
  local_138.Transform.Scale3D.ZW.m128d_f64[1] = (param_4->Transform).Scale3D.ZW.m128d_f64[1];
  local_138.Density = param_4->Density;
  local_138._100_4_ = *(undefined4 *)&param_4->field_0x64;
  local_138.BoundsMin.field0_0x0._s_0.X = (param_4->BoundsMin).field0_0x0._s_0.X;
  local_138.BoundsMin.field0_0x0._s_0.Y = (param_4->BoundsMin).field0_0x0._s_0.Y;
  local_138.BoundsMin.field0_0x0._s_0.Z = (param_4->BoundsMin).field0_0x0._s_0.Z;
  local_138.BoundsMax.field0_0x0._s_0.X = (param_4->BoundsMax).field0_0x0._s_0.X;
  local_138.BoundsMax.field0_0x0._s_0.Y = (param_4->BoundsMax).field0_0x0._s_0.Y;
  local_138.BoundsMax.field0_0x0._s_0.Z = (param_4->BoundsMax).field0_0x0._s_0.Z;
  local_138._padding_ = param_4->_padding_;
  local_138.Color.field0_0x0._s_0.X = (param_4->Color).field0_0x0._s_0.X;
  local_138.Color.field0_0x0._s_0.Y = (param_4->Color).field0_0x0._s_0.Y;
  local_138.Color.field0_0x0._s_0.Z = (param_4->Color).field0_0x0._s_0.Z;
  local_138.Color.field0_0x0._s_0.W = (param_4->Color).field0_0x0._s_0.W;
  local_138.Steepness = param_4->Steepness;
  local_138.Seed = param_4->Seed;
  local_138.MetadataEntry = param_4->MetadataEntry;
  local_68 = param_5;
  local_60 = param_6;
  local_210 = param_2;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGBlueprintElement_PointLoopBody);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar2,&local_468);
  cVar1 = local_58;
  (param_4->Transform).Rotation.XY.m128d_f64[0] = local_138.Transform.Rotation.XY.m128d_f64[0];
  (param_4->Transform).Rotation.XY.m128d_f64[1] = local_138.Transform.Rotation.XY.m128d_f64[1];
  (param_4->Transform).Rotation.ZW.m128d_f64[0] = local_138.Transform.Rotation.ZW.m128d_f64[0];
  (param_4->Transform).Rotation.ZW.m128d_f64[1] = local_138.Transform.Rotation.ZW.m128d_f64[1];
  (param_4->Transform).Translation.XY.m128d_f64[0] = local_138.Transform.Translation.XY.m128d_f64[0]
  ;
  (param_4->Transform).Translation.XY.m128d_f64[1] = local_138.Transform.Translation.XY.m128d_f64[1]
  ;
  (param_4->Transform).Translation.ZW.m128d_f64[0] = local_138.Transform.Translation.ZW.m128d_f64[0]
  ;
  (param_4->Transform).Translation.ZW.m128d_f64[1] = local_138.Transform.Translation.ZW.m128d_f64[1]
  ;
  (param_4->Transform).Scale3D.XY.m128d_f64[0] = local_138.Transform.Scale3D.XY.m128d_f64[0];
  (param_4->Transform).Scale3D.XY.m128d_f64[1] = local_138.Transform.Scale3D.XY.m128d_f64[1];
  (param_4->Transform).Scale3D.ZW.m128d_f64[0] = local_138.Transform.Scale3D.ZW.m128d_f64[0];
  (param_4->Transform).Scale3D.ZW.m128d_f64[1] = local_138.Transform.Scale3D.ZW.m128d_f64[1];
  param_4->Density = local_138.Density;
  *(undefined4 *)&param_4->field_0x64 = local_138._100_4_;
  (param_4->BoundsMin).field0_0x0._s_0.X = local_138.BoundsMin.field0_0x0._s_0.X;
  (param_4->BoundsMin).field0_0x0._s_0.Y = local_138.BoundsMin.field0_0x0._s_0.Y;
  (param_4->BoundsMin).field0_0x0._s_0.Z = local_138.BoundsMin.field0_0x0._s_0.Z;
  (param_4->BoundsMax).field0_0x0._s_0.X = local_138.BoundsMax.field0_0x0._s_0.X;
  (param_4->BoundsMax).field0_0x0._s_0.Y = local_138.BoundsMax.field0_0x0._s_0.Y;
  (param_4->BoundsMax).field0_0x0._s_0.Z = local_138.BoundsMax.field0_0x0._s_0.Z;
  param_4->_padding_ = local_138._padding_;
  (param_4->Color).field0_0x0._s_0.X = local_138.Color.field0_0x0._s_0.X;
  (param_4->Color).field0_0x0._s_0.Y = local_138.Color.field0_0x0._s_0.Y;
  (param_4->Color).field0_0x0._s_0.Z = local_138.Color.field0_0x0._s_0.Z;
  (param_4->Color).field0_0x0._s_0.W = local_138.Color.field0_0x0._s_0.W;
  param_4->Steepness = local_138.Steepness;
  param_4->Seed = local_138.Seed;
  param_4->MetadataEntry = local_138.MetadataEntry;
  FPCGContext::~FPCGContext(&local_468);
  return cVar1 != '\0';
}

// StaticRegisterNativesUPCGBlueprintElement @ 149778580

void __cdecl UPCGBlueprintElement::StaticRegisterNativesUPCGBlueprintElement(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UPCGBlueprintElement_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// VariableLoop @ 149778ea0

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

void __thiscall
UPCGBlueprintElement::VariableLoop
          (UPCGBlueprintElement *this,FPCGContext *param_1,UPCGPointData *param_2,
          UPCGPointData **param_3,UPCGPointData *param_4)

{
  FText *this_00;
  UPCGPointData *pUVar1;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  code **ppcVar3;
  bool bVar4;
  undefined1 auStack_e8 [32];
  FString local_b0;
  FString local_a0;
  FText local_90;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_2 == (UPCGPointData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      this_00 = FText::AsLocalizable_Advanced_LocText
                          (&local_90,L"PCGBlueprintElement",L"InvalidInputDataVariableLoop",
                           L"Invalid input data in VariableLoop");
      FText::ToString(this_00);
      bVar4 = param_1 != (FPCGContext *)0x0;
      if (bVar4) {
        FPCGContext::GetTaskName(param_1,&local_a0);
        FPCGContext::GetExecutionSourceName(param_1,&local_b0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((bVar4) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if ((bVar4) && (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    if (param_4 == (UPCGPointData *)0x0) {
      pUVar1 = FPCGContext::NewObject_AnyThread<UPCGPointData>(param_1);
      *param_3 = pUVar1;
      UPCGSpatialData::InitializeFromData
                ((UPCGSpatialData *)pUVar1,(UPCGSpatialData *)param_2,(UPCGMetadata *)0x0,true,true)
      ;
    }
    else {
      *param_3 = param_4;
    }
    pTVar2 = UPCGPointData::GetMutablePoints(*param_3);
    bVar4 = (param_1->AsyncState).bIsCallingBlueprint;
    (param_1->AsyncState).bIsCallingBlueprint = true;
    pUVar1 = *param_3;
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x30,8);
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UPCGBlueprintElement::VariableLoop'::`2'::<lambda_1>,0,1>
                         ::_vftable_;
    local_50[1] = (code *)this;
    local_50[2] = (code *)param_1;
    local_50[3] = (code *)param_2;
    local_50[4] = (code *)pUVar1;
    local_50[5] = (code *)&param_2->Points;
    if (local_50 + 1 != (code **)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UPCGBlueprintElement::VariableLoop'::__l2::<lambda_1>,TArray<FPCGPoint,TSizedDefaultAllocator<32>_>,int>
                    ::Call;
    }
    FPCGAsync::AsyncMultiPointProcessing
              (param_1,(param_2->Points).ArrayNum,pTVar2,
               (TFunction<TArray<FPCGPoint,TSizedDefaultAllocator<32>_>___cdecl(int)> *)local_78);
    if (local_78[0] != (code *)0x0) {
      ppcVar3 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar3 = local_50;
      }
      (**(code **)(*ppcVar3 + 0x10))();
    }
    (param_1->AsyncState).bIsCallingBlueprint = bVar4;
  }
  return;
}

// VariableLoopBody @ 149779100

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

TArray<FPCGPoint,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBlueprintElement::VariableLoopBody
          (UPCGBlueprintElement *this,
          TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FPCGContext *param_1
          ,UPCGPointData *param_2,FPCGPoint *param_3,UPCGMetadata *param_4,long64 param_5)

{
  void *_Src;
  UFunction *pUVar1;
  longlong lVar2;
  undefined1 auStackY_3d8 [32];
  FPCGContext local_398;
  UPCGPointData *local_140;
  FPCGPoint local_138;
  UPCGMetadata *local_68;
  long64 local_60;
  void *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  FPCGContext::FPCGContext(&local_398);
  FPCGPoint::FPCGPoint(&local_138);
  local_58 = (void *)0x0;
  local_50 = 0;
  FPCGContext::operator=(&local_398,param_1);
  local_138.Transform.Rotation.XY.m128d_f64[0] = (param_3->Transform).Rotation.XY.m128d_f64[0];
  local_138.Transform.Rotation.XY.m128d_f64[1] = (param_3->Transform).Rotation.XY.m128d_f64[1];
  local_138.Transform.Rotation.ZW.m128d_f64[0] = (param_3->Transform).Rotation.ZW.m128d_f64[0];
  local_138.Transform.Rotation.ZW.m128d_f64[1] = (param_3->Transform).Rotation.ZW.m128d_f64[1];
  local_138.Transform.Translation.XY.m128d_f64[0] = (param_3->Transform).Translation.XY.m128d_f64[0]
  ;
  local_138.Transform.Translation.XY.m128d_f64[1] = (param_3->Transform).Translation.XY.m128d_f64[1]
  ;
  local_138.Transform.Translation.ZW.m128d_f64[0] = (param_3->Transform).Translation.ZW.m128d_f64[0]
  ;
  local_138.Transform.Translation.ZW.m128d_f64[1] = (param_3->Transform).Translation.ZW.m128d_f64[1]
  ;
  local_138.Transform.Scale3D.XY.m128d_f64[0] = (param_3->Transform).Scale3D.XY.m128d_f64[0];
  local_138.Transform.Scale3D.XY.m128d_f64[1] = (param_3->Transform).Scale3D.XY.m128d_f64[1];
  local_138.Transform.Scale3D.ZW.m128d_f64[0] = (param_3->Transform).Scale3D.ZW.m128d_f64[0];
  local_138.Transform.Scale3D.ZW.m128d_f64[1] = (param_3->Transform).Scale3D.ZW.m128d_f64[1];
  local_138.Density = param_3->Density;
  local_138._100_4_ = *(undefined4 *)&param_3->field_0x64;
  local_138.BoundsMin.field0_0x0._s_0.X = (param_3->BoundsMin).field0_0x0._s_0.X;
  local_138.BoundsMax.field0_0x0._s_0.X = (param_3->BoundsMax).field0_0x0._s_0.X;
  local_138.BoundsMax.field0_0x0._s_0.Y = (param_3->BoundsMax).field0_0x0._s_0.Y;
  local_138.BoundsMin.field0_0x0._s_0.Y = (param_3->BoundsMin).field0_0x0._s_0.Y;
  local_138.BoundsMin.field0_0x0._s_0.Z = (param_3->BoundsMin).field0_0x0._s_0.Z;
  local_138.BoundsMax.field0_0x0._s_0.Z = (param_3->BoundsMax).field0_0x0._s_0.Z;
  local_138._padding_ = param_3->_padding_;
  local_138.Color.field0_0x0._s_0.X = (param_3->Color).field0_0x0._s_0.X;
  local_138.Color.field0_0x0._s_0.Y = (param_3->Color).field0_0x0._s_0.Y;
  local_138.Color.field0_0x0._s_0.Z = (param_3->Color).field0_0x0._s_0.Z;
  local_138.Color.field0_0x0._s_0.W = (param_3->Color).field0_0x0._s_0.W;
  local_138.Steepness = param_3->Steepness;
  local_138.Seed = param_3->Seed;
  local_138.MetadataEntry = param_3->MetadataEntry;
  local_60 = param_5;
  local_68 = param_4;
  local_140 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UPCGBlueprintElement_VariableLoopBody);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,&local_398);
  _Src = local_58;
  lVar2 = (longlong)(int)local_50;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (int)local_50;
  if ((int)local_50 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,(int)local_50,0,&__return_storage_ptr__->AllocatorInstance,(int)local_50,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,lVar2 * 0xd0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  FPCGContext::~FPCGContext(&local_398);
  return __return_storage_ptr__;
}

// execExecuteWithContext @ 14977bbe0

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

void __cdecl
UPCGBlueprintElement::execExecuteWithContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGTaggedData **ppFVar2;
  FPCGTaggedData **ppFVar3;
  FPCGContext *pFVar4;
  undefined1 auStack_318 [32];
  FPCGTaggedData *local_2f8;
  undefined8 local_2f0;
  undefined2 local_2e8;
  void *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  FPCGTaggedData *local_2c8;
  undefined8 local_2c0;
  undefined2 local_2b8;
  void *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  FPCGContext local_298;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_318;
  FPCGContext::FPCGContext(&local_298);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_298);
  }
  local_2c8 = (FPCGTaggedData *)0x0;
  local_2c0 = 0;
  pFVar4 = &local_298;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar4 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  local_2b8 = 0;
  local_2b0 = (void *)0x0;
  local_2a8 = 0;
  local_2a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c8);
  }
  local_2f8 = (FPCGTaggedData *)0x0;
  local_2f0 = 0;
  ppFVar2 = &local_2c8;
  if ((FPCGTaggedData **)param_2->MostRecentPropertyAddress != (FPCGTaggedData **)0x0) {
    ppFVar2 = (FPCGTaggedData **)param_2->MostRecentPropertyAddress;
  }
  local_2e8 = 0;
  local_2e0 = (void *)0x0;
  local_2d8 = 0;
  local_2d0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2f8);
  }
  ppFVar3 = &local_2f8;
  if ((FPCGTaggedData **)param_2->MostRecentPropertyAddress != (FPCGTaggedData **)0x0) {
    ppFVar3 = (FPCGTaggedData **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,pFVar4,ppFVar2,ppFVar3);
  if (local_2e0 != (void *)0x0) {
    FMemory::Free(local_2e0);
  }
  DestructItems<FPCGTaggedData,int>(local_2f8,(int)local_2f0);
  if (local_2f8 != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_2f8);
  }
  if (local_2b0 != (void *)0x0) {
    FMemory::Free(local_2b0);
  }
  DestructItems<FPCGTaggedData,int>(local_2c8,(int)local_2c0);
  if (local_2c8 != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_2c8);
  }
  FPCGContext::~FPCGContext(&local_298);
  return;
}

// execGetContext @ 14977bed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGBlueprintElement::execGetContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[2].field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Blueprint\\PCGBlueprintDeprecatedElement.cpp"
                       ,0xb3,
                       L"Execution context is not ready - do not call the GetContext method inside of non-execution methods"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPCGContext::operator=(param_3,*(FPCGContext **)&param_1[2].field_0x10);
  return;
}

// execGetRandomStream @ 14977c130

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

void __cdecl
UPCGBlueprintElement::execGetRandomStream(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGContext *this;
  undefined1 auStack_2a8 [32];
  int local_288;
  int iStack_284;
  FPCGContext local_278;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  FPCGContext::FPCGContext(&local_278);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_278,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_278);
  }
  this = &local_278;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    this = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_288 = FPCGContext::GetSeed(this);
  *(ulonglong *)param_3 = CONCAT44(local_288,local_288);
  iStack_284 = local_288;
  FPCGContext::~FPCGContext(&local_278);
  return;
}

// execGetSeed @ 14977c210

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

void __cdecl UPCGBlueprintElement::execGetSeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FPCGContext *this;
  undefined1 auStack_298 [32];
  FPCGContext local_278;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
  FPCGContext::FPCGContext(&local_278);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_278,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_278);
  }
  this = &local_278;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    this = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = FPCGContext::GetSeed(this);
  *(int *)param_3 = iVar2;
  FPCGContext::~FPCGContext(&local_278);
  return;
}

// execIterationLoop @ 14977c2f0

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

void __cdecl UPCGBlueprintElement::execIterationLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPCGPointData **ppUVar2;
  FPCGContext *pFVar3;
  undefined1 auStackY_2f8 [32];
  UPCGPointData *local_2b8;
  UPCGPointData *local_2b0;
  UPCGSpatialData *local_2a8;
  UPCGSpatialData *local_2a0;
  long64 local_298 [2];
  FPCGContext local_288;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  FPCGContext::FPCGContext(&local_288);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  local_298[0] = 0;
  pFVar3 = &local_288;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar3 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_298);
  }
  local_2b8 = (UPCGPointData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b8);
  }
  local_2a0 = (UPCGSpatialData *)0x0;
  ppUVar2 = &local_2b8;
  if ((UPCGPointData **)param_2->MostRecentPropertyAddress != (UPCGPointData **)0x0) {
    ppUVar2 = (UPCGPointData **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a0);
  }
  local_2a8 = (UPCGSpatialData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a8);
  }
  local_2b0 = (UPCGPointData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2b0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  IterationLoop((UPCGBlueprintElement *)param_1,pFVar3,local_298[0],ppUVar2,local_2a0,local_2a8,
                local_2b0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar2 != (UPCGPointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar2);
  }
  FPCGContext::~FPCGContext(&local_288);
  return;
}

// execNestedLoop @ 14977c570

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

void __cdecl UPCGBlueprintElement::execNestedLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGContext *pFVar2;
  UPCGPointData **ppUVar3;
  undefined1 auStackY_2d8 [32];
  UPCGPointData *local_2a8;
  UPCGPointData *local_2a0;
  UPCGPointData *local_298;
  UPCGPointData *local_290;
  FPCGContext local_288;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  FPCGContext::FPCGContext(&local_288);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  local_290 = (UPCGPointData *)0x0;
  pFVar2 = &local_288;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar2 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_290,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_290);
  }
  local_298 = (UPCGPointData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_298);
  }
  local_2a8 = (UPCGPointData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a8);
  }
  local_2a0 = (UPCGPointData *)0x0;
  ppUVar3 = &local_2a8;
  if ((UPCGPointData **)param_2->MostRecentPropertyAddress != (UPCGPointData **)0x0) {
    ppUVar3 = (UPCGPointData **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  NestedLoop((UPCGBlueprintElement *)param_1,pFVar2,local_290,local_298,ppUVar3,local_2a0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar3 != (UPCGPointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar3);
  }
  FPCGContext::~FPCGContext(&local_288);
  return;
}

// execPointLoop @ 14977c790

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

void __cdecl UPCGBlueprintElement::execPointLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGContext *pFVar2;
  UPCGPointData **ppUVar3;
  undefined1 auStackY_2d8 [32];
  UPCGPointData *local_2a8;
  UPCGPointData *local_2a0;
  UPCGPointData *local_298 [2];
  FPCGContext local_288;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  FPCGContext::FPCGContext(&local_288);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  local_298[0] = (UPCGPointData *)0x0;
  pFVar2 = &local_288;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar2 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_298);
  }
  local_2a8 = (UPCGPointData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a8);
  }
  local_2a0 = (UPCGPointData *)0x0;
  ppUVar3 = &local_2a8;
  if ((UPCGPointData **)param_2->MostRecentPropertyAddress != (UPCGPointData **)0x0) {
    ppUVar3 = (UPCGPointData **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PointLoop((UPCGBlueprintElement *)param_1,pFVar2,local_298[0],ppUVar3,local_2a0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar3 != (UPCGPointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar3);
  }
  FPCGContext::~FPCGContext(&local_288);
  return;
}

// execVariableLoop @ 14977cdb0

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

void __cdecl UPCGBlueprintElement::execVariableLoop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGContext *pFVar2;
  UPCGPointData **ppUVar3;
  undefined1 auStackY_2d8 [32];
  UPCGPointData *local_2a8;
  UPCGPointData *local_2a0;
  UPCGPointData *local_298 [2];
  FPCGContext local_288;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  FPCGContext::FPCGContext(&local_288);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  local_298[0] = (UPCGPointData *)0x0;
  pFVar2 = &local_288;
  if ((FPCGContext *)param_2->MostRecentPropertyAddress != (FPCGContext *)0x0) {
    pFVar2 = (FPCGContext *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_298,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_298);
  }
  local_2a8 = (UPCGPointData *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a8);
  }
  local_2a0 = (UPCGPointData *)0x0;
  ppUVar3 = &local_2a8;
  if ((UPCGPointData **)param_2->MostRecentPropertyAddress != (UPCGPointData **)0x0) {
    ppUVar3 = (UPCGPointData **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2a0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  VariableLoop((UPCGBlueprintElement *)param_1,pFVar2,local_298[0],ppUVar3,local_2a0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (*ppUVar3 != (UPCGPointData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar3);
  }
  FPCGContext::~FPCGContext(&local_288);
  return;
}

