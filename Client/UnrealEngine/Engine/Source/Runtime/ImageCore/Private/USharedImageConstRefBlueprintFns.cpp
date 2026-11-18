// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 18

// StaticClass @ 142343c30

UClass * __cdecl USharedImageConstRefBlueprintFns::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USharedImageConstRefBlueprintFns.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImageCore",L"SharedImageConstRefBlueprintFns",
               &Z_Registration_Info_UClass_USharedImageConstRefBlueprintFns.InnerSingleton,
               StaticRegisterNativesUSharedImageConstRefBlueprintFns,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USharedImageConstRefBlueprintFns>,
               InternalVTableHelperCtorCaller<USharedImageConstRefBlueprintFns>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USharedImageConstRefBlueprintFns.InnerSingleton;
}

// USharedImageConstRefBlueprintFns @ 142351990

USharedImageConstRefBlueprintFns * __thiscall
USharedImageConstRefBlueprintFns::USharedImageConstRefBlueprintFns
          (USharedImageConstRefBlueprintFns *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USharedImageConstRefBlueprintFns__6B_;
  return this;
}

// USharedImageConstRefBlueprintFns @ 1423519c0

USharedImageConstRefBlueprintFns * __thiscall
USharedImageConstRefBlueprintFns::USharedImageConstRefBlueprintFns
          (USharedImageConstRefBlueprintFns *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USharedImageConstRefBlueprintFns__6B_;
  return this;
}

// ~USharedImageConstRefBlueprintFns @ 1423519f0

void __thiscall
USharedImageConstRefBlueprintFns::~USharedImageConstRefBlueprintFns
          (USharedImageConstRefBlueprintFns *this)

{
  *(undefined ***)this = &___7USharedImageConstRefBlueprintFns__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetHeight @ 14235c8e0

int __cdecl USharedImageConstRefBlueprintFns::GetHeight(FSharedImageConstRefBlueprint *param_1)

{
  FSharedImage *pFVar1;
  
  pFVar1 = (param_1->Reference).Reference;
  if (((((pFVar1 != (FSharedImage *)0x0) && (-1 < *(int *)&pFVar1->field_0x10)) &&
       (-1 < *(int *)&pFVar1->field_0x14)) &&
      ((-1 < *(int *)&pFVar1->field_0x18 && (pFVar1->field_0x1c != 0xff)))) &&
     ((pFVar1->field_0x1d != '\x03' &&
      (((byte)pFVar1->field_0x1c < 2 || (pFVar1->field_0x1d == '\0')))))) {
    return *(int *)&pFVar1->field_0x14;
  }
  return -1;
}

// GetPixelLinearColor @ 14235d6f0

FLinearColor * __cdecl
USharedImageConstRefBlueprintFns::GetPixelLinearColor
          (FLinearColor *__return_storage_ptr__,FSharedImageConstRefBlueprint *param_1,int param_2,
          int param_3,bool *param_4,FLinearColor *param_5)

{
  byte bVar1;
  char cVar2;
  EGammaSpace EVar3;
  Type TVar4;
  int iVar5;
  int iVar6;
  FSharedImage *pFVar7;
  undefined8 uVar8;
  void *pvVar9;
  FImage *this;
  
  pFVar7 = (param_1->Reference).Reference;
  this = (FImage *)&pFVar7->field_0x10;
  if (pFVar7 == (FSharedImage *)0x0) {
    this = (FImage *)0x0;
  }
  *param_4 = false;
  if (((((this != (FImage *)0x0) && (iVar5 = (int)this->_padding_, -1 < iVar5)) &&
       (iVar6 = *(int *)((longlong)&this->_padding_ + 4), -1 < iVar6)) &&
      (((-1 < (int)this->_padding_ &&
        (bVar1 = *(byte *)((longlong)&this->_padding_ + 4), bVar1 != 0xff)) &&
       ((cVar2 = *(char *)((longlong)&this->_padding_ + 5), cVar2 != '\x03' &&
        ((bVar1 < 2 || (cVar2 == '\0')))))))) &&
     ((-1 < param_2 && ((((-1 < param_3 && (param_2 < iVar5)) && (param_3 < iVar6)) && (bVar1 < 9)))
      ))) {
    *param_4 = true;
    EVar3 = *(EGammaSpace *)((longlong)&this->_padding_ + 5);
    TVar4 = *(Type *)((longlong)&this->_padding_ + 4);
    pvVar9 = FImage::GetPixelPointer(this,param_2,param_3,0);
    ERawImageFormat::GetOnePixelLinear(__return_storage_ptr__,pvVar9,TVar4,EVar3);
    return __return_storage_ptr__;
  }
  uVar8 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_5->field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar8;
  return __return_storage_ptr__;
}

// GetPixelValue @ 14235d890

TVector4<float> * __cdecl
USharedImageConstRefBlueprintFns::GetPixelValue
          (TVector4<float> *__return_storage_ptr__,FSharedImageConstRefBlueprint *param_1,
          int param_2,int param_3,bool *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FSharedImage *pFVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  byte *pbVar11;
  uint *puVar12;
  undefined4 *puVar13;
  ulonglong *puVar14;
  FLinearColor *pFVar15;
  ushort *puVar16;
  float *pfVar17;
  FImage *this;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  FLinearColor local_48 [4];
  
  pFVar7 = (param_1->Reference).Reference;
  this = (FImage *)&pFVar7->field_0x10;
  if (pFVar7 == (FSharedImage *)0x0) {
    this = (FImage *)0x0;
  }
  *param_4 = false;
  if (((((this != (FImage *)0x0) && (iVar4 = (int)this->_padding_, -1 < iVar4)) &&
       (iVar5 = *(int *)((longlong)&this->_padding_ + 4), -1 < iVar5)) &&
      ((((-1 < (int)this->_padding_ &&
         (bVar2 = *(byte *)((longlong)&this->_padding_ + 4), bVar2 != 0xff)) &&
        ((cVar3 = *(char *)((longlong)&this->_padding_ + 5), cVar3 != '\x03' &&
         ((bVar2 < 2 || (cVar3 == '\0')))))) && (-1 < param_2)))) &&
     (((-1 < param_3 && (param_2 < iVar4)) && (param_3 < iVar5)))) {
    switch(bVar2) {
    case 0:
      *param_4 = true;
      pbVar11 = FImage::GetPixelPointer(this,param_2,param_3,0);
      (__return_storage_ptr__->field0_0x0)._s_0.W = 255.0;
      fVar21 = (float)*pbVar11;
      (__return_storage_ptr__->field0_0x0)._s_0.X = fVar21;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar21;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar21;
      return __return_storage_ptr__;
    case 1:
      *param_4 = true;
      puVar12 = FImage::GetPixelPointer(this,param_2,param_3,0);
      uVar6 = *puVar12;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(uVar6 >> 0x10 & 0xff);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(uVar6 >> 8 & 0xff);
      (__return_storage_ptr__->field0_0x0)._s_0.W = (float)(uVar6 >> 0x18);
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(uVar6 & 0xff);
      return __return_storage_ptr__;
    case 2:
      *param_4 = true;
      puVar13 = FImage::GetPixelPointer(this,param_2,param_3,0);
      param_4._0_4_ = *puVar13;
      pFVar15 = FColor::FromRGBE((FColor *)&param_4,local_48);
      break;
    case 3:
      *param_4 = true;
      puVar14 = FImage::GetPixelPointer(this,param_2,param_3,0);
      uVar1 = *puVar14;
      auVar8._8_4_ = 0;
      auVar8._0_8_ = uVar1;
      auVar8._12_2_ = (short)(uVar1 >> 0x30);
      auVar9._8_2_ = (short)(uVar1 >> 0x20);
      auVar9._0_8_ = uVar1;
      auVar9._10_4_ = auVar8._10_4_;
      auVar10._6_8_ = 0;
      auVar10._0_6_ = auVar9._8_6_;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(ushort)uVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           (float)(int)CONCAT82(SUB148(auVar10 << 0x40,6),(short)(uVar1 >> 0x10));
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)auVar9._8_4_;
      (__return_storage_ptr__->field0_0x0)._s_0.W = (float)(auVar8._10_4_ >> 0x10);
      return __return_storage_ptr__;
    case 4:
      *param_4 = true;
      puVar16 = FImage::GetPixelPointer(this,param_2,param_3,0);
      fVar21 = FGenericPlatformMath::LoadHalf(puVar16 + 3);
      fVar18 = FGenericPlatformMath::LoadHalf(puVar16 + 2);
      fVar19 = FGenericPlatformMath::LoadHalf(puVar16 + 1);
      fVar20 = FGenericPlatformMath::LoadHalf(puVar16);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar19;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar18;
      (__return_storage_ptr__->field0_0x0)._s_0.W = fVar21;
      (__return_storage_ptr__->field0_0x0)._s_0.X = fVar20;
      return __return_storage_ptr__;
    case 5:
      *param_4 = true;
      pFVar15 = FImage::GetPixelPointer(this,param_2,param_3,0);
      break;
    case 6:
      *param_4 = true;
      puVar16 = FImage::GetPixelPointer(this,param_2,param_3,0);
      (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
      fVar21 = (float)*puVar16;
      (__return_storage_ptr__->field0_0x0)._s_0.X = fVar21;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar21;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar21;
      return __return_storage_ptr__;
    case 7:
      *param_4 = true;
      puVar16 = FImage::GetPixelPointer(this,param_2,param_3,0);
      fVar21 = FGenericPlatformMath::LoadHalf(puVar16);
      (__return_storage_ptr__->field0_0x0)._s_0.X = fVar21;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0;
      (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
      return __return_storage_ptr__;
    case 8:
      *param_4 = true;
      pfVar17 = FImage::GetPixelPointer(this,param_2,param_3,0);
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = 0;
      (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
      (__return_storage_ptr__->field0_0x0)._s_0.X = *pfVar17;
      return __return_storage_ptr__;
    default:
      goto switchD_14235d951_default;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pFVar15->field0_0x0)._s_0.R;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (pFVar15->field0_0x0)._s_0.G;
    fVar21 = (pFVar15->field0_0x0)._s_0.B;
    (__return_storage_ptr__->field0_0x0)._s_0.W = (pFVar15->field0_0x0)._s_0.A;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar21;
    return __return_storage_ptr__;
  }
switchD_14235d951_default:
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14235dc30

UClass * __cdecl USharedImageConstRefBlueprintFns::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USharedImageConstRefBlueprintFns.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImageCore",L"SharedImageConstRefBlueprintFns",
               &Z_Registration_Info_UClass_USharedImageConstRefBlueprintFns.InnerSingleton,
               StaticRegisterNativesUSharedImageConstRefBlueprintFns,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USharedImageConstRefBlueprintFns>,
               InternalVTableHelperCtorCaller<USharedImageConstRefBlueprintFns>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USharedImageConstRefBlueprintFns.InnerSingleton;
}

// GetSize @ 14235de00

TVector2<float> __cdecl
USharedImageConstRefBlueprintFns::GetSize(FSharedImageConstRefBlueprint *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *in_RDX;
  
  lVar2 = *in_RDX;
  if (((((lVar2 != 0) && (-1 < *(int *)(lVar2 + 0x10))) && (-1 < *(int *)(lVar2 + 0x14))) &&
      ((-1 < *(int *)(lVar2 + 0x18) && (*(byte *)(lVar2 + 0x1c) != 0xff)))) &&
     ((*(char *)(lVar2 + 0x1d) != '\x03' &&
      ((*(byte *)(lVar2 + 0x1c) < 2 || (*(char *)(lVar2 + 0x1d) == '\0')))))) {
    iVar1 = *(int *)(lVar2 + 0x14);
    *(float *)&(param_1->Reference).Reference = (float)*(int *)(lVar2 + 0x10);
    *(float *)((longlong)&(param_1->Reference).Reference + 4) = (float)iVar1;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  *(undefined4 *)&(param_1->Reference).Reference = 0xbf800000;
  *(undefined4 *)((longlong)&(param_1->Reference).Reference + 4) = 0xbf800000;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// GetWidth @ 14235e010

int __cdecl USharedImageConstRefBlueprintFns::GetWidth(FSharedImageConstRefBlueprint *param_1)

{
  FSharedImage *pFVar1;
  int iVar2;
  
  pFVar1 = (param_1->Reference).Reference;
  if (((((pFVar1 == (FSharedImage *)0x0) || (iVar2 = *(int *)&pFVar1->field_0x10, iVar2 < 0)) ||
       (*(int *)&pFVar1->field_0x14 < 0)) ||
      ((*(int *)&pFVar1->field_0x18 < 0 || (pFVar1->field_0x1c == 0xff)))) ||
     ((pFVar1->field_0x1d == '\x03' ||
      ((1 < (byte)pFVar1->field_0x1c && (pFVar1->field_0x1d != '\0')))))) {
    iVar2 = -1;
  }
  return iVar2;
}

// IsValid @ 14235f620

bool __cdecl USharedImageConstRefBlueprintFns::IsValid(FSharedImageConstRefBlueprint *param_1)

{
  FSharedImage *pFVar1;
  
  pFVar1 = (param_1->Reference).Reference;
  if (((((pFVar1 != (FSharedImage *)0x0) && (-1 < *(int *)&pFVar1->field_0x10)) &&
       (-1 < *(int *)&pFVar1->field_0x14)) &&
      ((-1 < *(int *)&pFVar1->field_0x18 && (pFVar1->field_0x1c != 0xff)))) &&
     ((pFVar1->field_0x1d != '\x03' &&
      (((byte)pFVar1->field_0x1c < 2 || (pFVar1->field_0x1d == '\0')))))) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUSharedImageConstRefBlueprintFns @ 1423621c0

void __cdecl
USharedImageConstRefBlueprintFns::StaticRegisterNativesUSharedImageConstRefBlueprintFns(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_USharedImageConstRefBlueprintFns_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetHeight @ 1423630f0

void __cdecl
USharedImageConstRefBlueprintFns::execGetHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 **ppuVar6;
  undefined8 *local_18 [2];
  
  local_18[0] = (undefined8 *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  ppuVar6 = local_18;
  if ((undefined8 **)param_2->MostRecentPropertyAddress != (undefined8 **)0x0) {
    ppuVar6 = (undefined8 **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar4 = *ppuVar6;
  uVar5 = 0xffffffff;
  if (((((puVar4 != (undefined8 *)0x0) && (-1 < *(int *)(puVar4 + 2))) &&
       (-1 < *(int *)((longlong)puVar4 + 0x14))) &&
      ((-1 < *(int *)(puVar4 + 3) && (*(byte *)((longlong)puVar4 + 0x1c) != 0xff)))) &&
     ((*(char *)((longlong)puVar4 + 0x1d) != '\x03' &&
      ((*(byte *)((longlong)puVar4 + 0x1c) < 2 || (*(char *)((longlong)puVar4 + 0x1d) == '\0'))))))
  {
    uVar5 = *(undefined4 *)((longlong)puVar4 + 0x14);
  }
  *(undefined4 *)param_3 = uVar5;
  if (local_18[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_18[0] + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*local_18[0])();
    }
  }
  return;
}

// execGetPixelLinearColor @ 1423631f0

void __cdecl
USharedImageConstRefBlueprintFns::execGetPixelLinearColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  EGammaSpace EVar6;
  Type TVar7;
  int iVar8;
  int iVar9;
  FProperty *pFVar10;
  undefined8 *puVar11;
  int iVar12;
  void *pvVar13;
  FImage *this;
  uchar *puVar14;
  undefined8 **ppuVar15;
  uchar local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 *local_68 [2];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  FLinearColor_u_0 local_48;
  
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  local_68[0] = (undefined8 *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar10 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar10->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar10);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res20[0] = 0;
  ppuVar15 = local_68;
  if ((undefined8 **)param_2->MostRecentPropertyAddress != (undefined8 **)0x0) {
    ppuVar15 = (undefined8 **)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar10 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar10->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar10);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar10 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar10->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar10);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar10 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar10->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar10);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar14 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar14 = param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar10 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar10->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar10);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  iVar12 = local_res20[0];
  iVar3 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar11 = *ppuVar15;
  *puVar14 = '\0';
  this = (FImage *)(puVar11 + 2);
  if (puVar11 == (undefined8 *)0x0) {
    this = (FImage *)0x0;
  }
  if ((((((this == (FImage *)0x0) || (iVar8 = (int)this->_padding_, iVar8 < 0)) ||
        (iVar9 = *(int *)((longlong)&this->_padding_ + 4), iVar9 < 0)) ||
       ((((int)this->_padding_ < 0 ||
         (bVar4 = *(byte *)((longlong)&this->_padding_ + 4), bVar4 == 0xff)) ||
        ((cVar5 = *(char *)((longlong)&this->_padding_ + 5), cVar5 == '\x03' ||
         ((1 < bVar4 && (cVar5 != '\0')))))))) || (iVar12 < 0)) ||
     ((((iVar3 < 0 || (iVar8 <= iVar12)) || (iVar9 <= iVar3)) || (8 < bVar4)))) {
    local_48._s_0.R = local_58;
    local_48._s_0.G = fStack_54;
    local_48._s_0.B = fStack_50;
    local_48._s_0.A = fStack_4c;
  }
  else {
    *puVar14 = '\x01';
    EVar6 = *(EGammaSpace *)((longlong)&this->_padding_ + 5);
    TVar7 = *(Type *)((longlong)&this->_padding_ + 4);
    pvVar13 = FImage::GetPixelPointer(this,iVar12,iVar3,0);
    ERawImageFormat::GetOnePixelLinear((FLinearColor *)&local_48._s_0,pvVar13,TVar7,EVar6);
  }
  *(float *)param_3 = local_48._s_0.R;
  *(float *)((longlong)param_3 + 4) = local_48._s_0.G;
  *(float *)((longlong)param_3 + 8) = local_48._s_0.B;
  *(float *)((longlong)param_3 + 0xc) = local_48._s_0.A;
  if (local_68[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68[0] + 1);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*local_68[0])(local_68[0],1);
    }
  }
  return;
}

// execGetPixelValue @ 142363470

void __cdecl
USharedImageConstRefBlueprintFns::execGetPixelValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  int iVar3;
  FProperty *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TVector4<float> *pTVar8;
  bool *pbVar9;
  FSharedImageConstRefBlueprint *pFVar10;
  bool local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  FSharedImageConstRefBlueprint local_48 [2];
  TVector4<float> local_38;
  
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  local_48[0].Reference.Reference = (TRefCountPtr<FSharedImage_const_>)(FSharedImage *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res20[0] = 0;
  pFVar10 = local_48;
  if ((FSharedImageConstRefBlueprint *)param_2->MostRecentPropertyAddress !=
      (FSharedImageConstRefBlueprint *)0x0) {
    pFVar10 = (FSharedImageConstRefBlueprint *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar9 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar9 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar8 = GetPixelValue(&local_38,pFVar10,local_res20[0],local_res18[0],pbVar9);
  fVar5 = (pTVar8->field0_0x0)._s_0.Y;
  fVar6 = (pTVar8->field0_0x0)._s_0.Z;
  fVar7 = (pTVar8->field0_0x0)._s_0.W;
  *(float *)param_3 = (pTVar8->field0_0x0)._s_0.X;
  *(float *)((longlong)param_3 + 4) = fVar5;
  *(float *)((longlong)param_3 + 8) = fVar6;
  *(float *)((longlong)param_3 + 0xc) = fVar7;
  if (local_48[0].Reference.Reference != (FSharedImage *)0x0) {
    piVar1 = (int *)((longlong)local_48[0].Reference.Reference + 8);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
      (*(code *)**(undefined8 **)local_48[0].Reference.Reference)(local_48[0].Reference.Reference,1)
      ;
    }
  }
  return;
}

// execGetSize @ 142363630

void __cdecl
USharedImageConstRefBlueprintFns::execGetSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  float local_res10;
  float fStackX_14;
  undefined8 *local_18 [2];
  
  local_18[0] = (undefined8 *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  ppuVar5 = local_18;
  if ((undefined8 **)param_2->MostRecentPropertyAddress != (undefined8 **)0x0) {
    ppuVar5 = (undefined8 **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar4 = *ppuVar5;
  if (((((puVar4 == (undefined8 *)0x0) || (*(int *)(puVar4 + 2) < 0)) ||
       (*(int *)((longlong)puVar4 + 0x14) < 0)) ||
      ((*(int *)(puVar4 + 3) < 0 || (*(byte *)((longlong)puVar4 + 0x1c) == 0xff)))) ||
     ((*(char *)((longlong)puVar4 + 0x1d) == '\x03' ||
      ((1 < *(byte *)((longlong)puVar4 + 0x1c) && (*(char *)((longlong)puVar4 + 0x1d) != '\0'))))))
  {
    local_res10 = -1.0;
    fStackX_14 = -1.0;
  }
  else {
    local_res10 = (float)*(int *)(puVar4 + 2);
    fStackX_14 = (float)*(int *)((longlong)puVar4 + 0x14);
  }
  *(ulonglong *)param_3 = CONCAT44(fStackX_14,local_res10);
  if (local_18[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_18[0] + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*local_18[0])(local_18[0],1);
    }
  }
  return;
}

// execGetWidth @ 142363760

void __cdecl
USharedImageConstRefBlueprintFns::execGetWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 **ppuVar5;
  undefined8 *local_18 [2];
  
  local_18[0] = (undefined8 *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  ppuVar5 = local_18;
  if ((undefined8 **)param_2->MostRecentPropertyAddress != (undefined8 **)0x0) {
    ppuVar5 = (undefined8 **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = *ppuVar5;
  if (((((puVar3 == (undefined8 *)0x0) || (iVar4 = *(int *)(puVar3 + 2), iVar4 < 0)) ||
       (*(int *)((longlong)puVar3 + 0x14) < 0)) ||
      ((*(int *)(puVar3 + 3) < 0 || (*(byte *)((longlong)puVar3 + 0x1c) == 0xff)))) ||
     ((*(char *)((longlong)puVar3 + 0x1d) == '\x03' ||
      ((1 < *(byte *)((longlong)puVar3 + 0x1c) && (*(char *)((longlong)puVar3 + 0x1d) != '\0'))))))
  {
    iVar4 = -1;
  }
  *(int *)param_3 = iVar4;
  if (local_18[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_18[0] + 1);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*local_18[0])();
    }
  }
  return;
}

// execIsValid @ 142363860

void __cdecl
USharedImageConstRefBlueprintFns::execIsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 **ppuVar6;
  undefined8 *local_18 [2];
  
  local_18[0] = (undefined8 *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  ppuVar6 = local_18;
  if ((undefined8 **)param_2->MostRecentPropertyAddress != (undefined8 **)0x0) {
    ppuVar6 = (undefined8 **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar4 = *ppuVar6;
  if (((((puVar4 == (undefined8 *)0x0) || (*(int *)(puVar4 + 2) < 0)) ||
       (*(int *)((longlong)puVar4 + 0x14) < 0)) ||
      ((*(int *)(puVar4 + 3) < 0 || (*(byte *)((longlong)puVar4 + 0x1c) == 0xff)))) ||
     ((*(char *)((longlong)puVar4 + 0x1d) == '\x03' ||
      ((1 < *(byte *)((longlong)puVar4 + 0x1c) && (*(char *)((longlong)puVar4 + 0x1d) != '\0'))))))
  {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(undefined1 *)param_3 = uVar5;
  if (local_18[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_18[0] + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*local_18[0])(local_18[0],1);
    }
  }
  return;
}

