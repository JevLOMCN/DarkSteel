// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 10

// StaticClass @ 14f0a1810

UClass * __cdecl USynthesisUtilitiesBlueprintFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthesisUtilitiesBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.
                InnerSingleton,StaticRegisterNativesUSynthesisUtilitiesBlueprintFunctionLibrary,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthesisUtilitiesBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<USynthesisUtilitiesBlueprintFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.InnerSingleton;
}

// USynthesisUtilitiesBlueprintFunctionLibrary @ 14f0bc4c0

USynthesisUtilitiesBlueprintFunctionLibrary * __thiscall
USynthesisUtilitiesBlueprintFunctionLibrary::USynthesisUtilitiesBlueprintFunctionLibrary
          (USynthesisUtilitiesBlueprintFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USynthesisUtilitiesBlueprintFunctionLibrary__6B_;
  return this;
}

// USynthesisUtilitiesBlueprintFunctionLibrary @ 14f0bc4f0

USynthesisUtilitiesBlueprintFunctionLibrary * __thiscall
USynthesisUtilitiesBlueprintFunctionLibrary::USynthesisUtilitiesBlueprintFunctionLibrary
          (USynthesisUtilitiesBlueprintFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USynthesisUtilitiesBlueprintFunctionLibrary__6B_;
  return this;
}

// ~USynthesisUtilitiesBlueprintFunctionLibrary @ 14f0c0c80

void __thiscall
USynthesisUtilitiesBlueprintFunctionLibrary::~USynthesisUtilitiesBlueprintFunctionLibrary
          (USynthesisUtilitiesBlueprintFunctionLibrary *this)

{
  *(undefined ***)this = &___7USynthesisUtilitiesBlueprintFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetLinearFrequency @ 14f0d9b20

float __cdecl
USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency
          (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  
  dVar6 = (double)param_1;
  dVar1 = (double)param_3;
  if ((double)param_4 < dVar6) {
    if (dVar6 < (double)param_5) {
      iVar2 = _isnan(dVar6);
      if (iVar2 != 0) {
        return param_2;
      }
      dVar6 = log((double)param_5);
      uVar3 = SUB84(dVar6,0);
      uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
      if (__real_47eff933c0000000 <= dVar6) {
        uVar3 = SUB84(__real_47eff933c0000000,0);
        uVar7 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
      }
      dVar6 = log((double)param_4);
      uVar4 = SUB84(dVar6,0);
      uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
      if (dVar6 <= __real_3e45798ee0000000) {
        uVar4 = SUB84(__real_3e45798ee0000000,0);
        uVar8 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      }
      fVar5 = logf(param_1);
      dVar6 = (double)CONCAT44(uVar7,uVar3) - (double)CONCAT44(uVar8,uVar4);
      uVar9 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar10 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar10,uVar9) &&
          (double)CONCAT44(uVar10,uVar9) != __real_3e45798ee2308c3a) {
        dVar6 = ((double)fVar5 - (double)CONCAT44(uVar8,uVar4)) / dVar6;
      }
      else {
        dVar6 = __real_3ff0000000000000;
        if ((double)fVar5 < (double)CONCAT44(uVar7,uVar3)) {
          dVar6 = 0.0;
        }
      }
      dVar1 = (dVar1 - (double)param_2) * dVar6 + (double)param_2;
    }
    param_2 = (float)dVar1;
  }
  return param_2;
}

// GetLogFrequency @ 14f0d9c50

float __cdecl
USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency
          (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  double _X;
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  dVar2 = (double)param_2;
  _X = (double)param_1;
  fVar5 = param_4;
  if (((dVar2 < _X) && (fVar5 = param_5, _X < (double)param_3)) &&
     (iVar3 = _isnan(_X), fVar5 = param_4, iVar3 == 0)) {
    dVar6 = log((double)param_5);
    uVar4 = SUB84(dVar6,0);
    uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (__real_47eff933c0000000 <= dVar6) {
      uVar4 = SUB84(__real_47eff933c0000000,0);
      uVar7 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
    }
    dVar6 = log((double)param_4);
    if (dVar6 <= __real_3e45798ee0000000) {
      dVar6 = __real_3e45798ee0000000;
    }
    dVar1 = (double)param_3 - dVar2;
    uVar8 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar9 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar9,uVar8) &&
        (double)CONCAT44(uVar9,uVar8) != __real_3e45798ee2308c3a) {
      dVar1 = (_X - dVar2) / dVar1;
    }
    else {
      dVar1 = 0.0;
    }
    fVar5 = expf((float)(((double)CONCAT44(uVar7,uVar4) - dVar6) * dVar1 + dVar6));
  }
  return fVar5;
}

// GetPrivateStaticClass @ 14f0dd8c0

UClass * __cdecl USynthesisUtilitiesBlueprintFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthesisUtilitiesBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.
                InnerSingleton,StaticRegisterNativesUSynthesisUtilitiesBlueprintFunctionLibrary,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthesisUtilitiesBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<USynthesisUtilitiesBlueprintFunctionLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthesisUtilitiesBlueprintFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUSynthesisUtilitiesBlueprintFunctionLibrary @ 14f103d80

void __cdecl
USynthesisUtilitiesBlueprintFunctionLibrary::
StaticRegisterNativesUSynthesisUtilitiesBlueprintFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_USynthesisUtilitiesBlueprintFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetLinearFrequency @ 14f10bff0

void __cdecl
USynthesisUtilitiesBlueprintFunctionLibrary::execGetLinearFrequency
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double dVar3;
  double dVar4;
  double _X;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  double _X_00;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_78;
  float local_74 [23];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_74[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_74,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_74);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  fVar9 = local_78;
  fVar8 = local_res10[0];
  _X = (double)local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _X_00 = (double)local_res10[0];
  dVar10 = (double)local_res20[0];
  dVar4 = (double)local_78;
  dVar3 = (double)local_74[0];
  if (_X < _X_00) {
    if (_X_00 < dVar10) {
      iVar5 = _isnan(_X_00);
      if (iVar5 != 0) goto LAB_14f10c25f;
      dVar10 = log(dVar10);
      uVar6 = SUB84(dVar10,0);
      uVar11 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (__real_47eff933c0000000 <= dVar10) {
        uVar6 = SUB84(__real_47eff933c0000000,0);
        uVar11 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
      }
      dVar10 = log(_X);
      uVar7 = SUB84(dVar10,0);
      uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (dVar10 <= __real_3e45798ee0000000) {
        uVar7 = SUB84(__real_3e45798ee0000000,0);
        uVar12 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      }
      fVar8 = logf(fVar8);
      dVar10 = (double)CONCAT44(uVar11,uVar6) - (double)CONCAT44(uVar12,uVar7);
      uVar13 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar14 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar14,uVar13) &&
          (double)CONCAT44(uVar14,uVar13) != __real_3e45798ee2308c3a) {
        dVar10 = ((double)fVar8 - (double)CONCAT44(uVar12,uVar7)) / dVar10;
      }
      else {
        dVar10 = __real_3ff0000000000000;
        if ((double)fVar8 < (double)CONCAT44(uVar11,uVar6)) {
          dVar10 = 0.0;
        }
      }
      dVar3 = (dVar3 - dVar4) * dVar10 + dVar4;
    }
    fVar9 = (float)dVar3;
  }
LAB_14f10c25f:
  *(float *)param_3 = fVar9;
  return;
}

// execGetLogFrequency @ 14f10c2a0

void __cdecl
USynthesisUtilitiesBlueprintFunctionLibrary::execGetLogFrequency
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double _X;
  double _X_00;
  double dVar3;
  double dVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_78;
  float local_74 [23];
  
  local_74[0] = 0.0;
  FFloatProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_74,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_74);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_78 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
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
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  fVar5 = local_res10[0];
  dVar4 = (double)local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _X = (double)local_74[0];
  _X_00 = (double)local_res10[0];
  dVar9 = (double)local_res18[0];
  dVar3 = (double)local_78;
  fVar8 = fVar5;
  if (((dVar4 < _X) && (fVar8 = local_res18[0], _X < dVar3)) &&
     (iVar6 = _isnan(_X), fVar8 = fVar5, iVar6 == 0)) {
    dVar9 = log(dVar9);
    uVar7 = SUB84(dVar9,0);
    uVar10 = (undefined4)((ulonglong)dVar9 >> 0x20);
    if (__real_47eff933c0000000 <= dVar9) {
      uVar7 = SUB84(__real_47eff933c0000000,0);
      uVar10 = (undefined4)((ulonglong)__real_47eff933c0000000 >> 0x20);
    }
    dVar9 = log(_X_00);
    if (dVar9 <= __real_3e45798ee0000000) {
      dVar9 = __real_3e45798ee0000000;
    }
    dVar3 = dVar3 - dVar4;
    uVar11 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar12 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar12,uVar11) &&
        (double)CONCAT44(uVar12,uVar11) != __real_3e45798ee2308c3a) {
      dVar3 = (_X - dVar4) / dVar3;
    }
    else {
      dVar3 = 0.0;
    }
    fVar8 = expf((float)(((double)CONCAT44(uVar10,uVar7) - dVar9) * dVar3 + dVar9));
  }
  *(float *)param_3 = fVar8;
  return;
}

