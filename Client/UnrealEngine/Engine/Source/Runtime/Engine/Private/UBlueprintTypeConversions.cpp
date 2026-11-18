// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// StaticClass @ 147e426b0

UClass * __cdecl UBlueprintTypeConversions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintTypeConversions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintTypeConversions",
               &Z_Registration_Info_UClass_UBlueprintTypeConversions.InnerSingleton,
               StaticRegisterNativesUBlueprintTypeConversions,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintTypeConversions>,
               InternalVTableHelperCtorCaller<UBlueprintTypeConversions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintTypeConversions.InnerSingleton;
}

// UBlueprintTypeConversions @ 147e55390

UBlueprintTypeConversions * __thiscall
UBlueprintTypeConversions::UBlueprintTypeConversions
          (UBlueprintTypeConversions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintTypeConversions__6B_;
  return this;
}

// UBlueprintTypeConversions @ 147e553c0

UBlueprintTypeConversions * __thiscall
UBlueprintTypeConversions::UBlueprintTypeConversions
          (UBlueprintTypeConversions *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBlueprintTypeConversions__6B_;
  return this;
}

// ~UBlueprintTypeConversions @ 147e57700

void __thiscall
UBlueprintTypeConversions::~UBlueprintTypeConversions(UBlueprintTypeConversions *this)

{
  *(undefined ***)this = &___7UBlueprintTypeConversions__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147e69840

UClass * __cdecl UBlueprintTypeConversions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintTypeConversions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintTypeConversions",
               &Z_Registration_Info_UClass_UBlueprintTypeConversions.InnerSingleton,
               StaticRegisterNativesUBlueprintTypeConversions,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintTypeConversions>,
               InternalVTableHelperCtorCaller<UBlueprintTypeConversions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintTypeConversions.InnerSingleton;
}

// StaticRegisterNativesUBlueprintTypeConversions @ 147e82200

void __cdecl UBlueprintTypeConversions::StaticRegisterNativesUBlueprintTypeConversions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x15;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintTypeConversions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConvertArrayType @ 147e88150

void __cdecl
UBlueprintTypeConversions::execConvertArrayType(UObject *param_1,FFrame *param_2,void *param_3)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FScriptArrayHelper_u_8 FVar5;
  ulonglong *puVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  _func___cdecl_void_void_ptr_void_ptr *p_Var10;
  ulonglong uVar11;
  uchar *puVar12;
  longlong lVar13;
  FProperty *pFVar14;
  ulonglong uVar15;
  void *pvVar16;
  FProperty *pFVar17;
  FScriptArrayHelper local_38;
  
  pFVar17 = param_2->MostRecentProperty;
  if ((pFVar17 == (FProperty *)0x0) || ((*(uint *)(pFVar17->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    pFVar17 = (FProperty *)0x0;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FVar5 = (FScriptArrayHelper_u_8)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar14 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar14->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar14);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar14 = param_2->MostRecentProperty;
  puVar6 = (ulonglong *)param_2->MostRecentPropertyAddress;
  if ((pFVar14 == (FProperty *)0x0) || ((*(uint *)(pFVar14->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    pFVar14 = (FProperty *)0x0;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar8 = pFVar14[1]._padding_;
  (**(code **)(*(longlong *)pFVar14[1]._padding_ + 0x168))();
  lVar13 = pFVar14[1]._padding_;
  iVar2 = *(int *)(lVar13 + 0x34);
  if ((iVar2 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((lVar13 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EVar1 = (EArrayPropertyFlags)pFVar17[1]._padding_;
  local_38.ElementAlignment = (**(code **)(*(longlong *)pFVar17[1]._padding_ + 0x168))();
  local_38.InnerProperty = (FProperty *)pFVar17[1]._padding_;
  local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
  local_38.field1_0x8 = FVar5;
  local_38.ArrayFlags = EVar1;
  if ((local_38.ElementSize < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_38.InnerProperty == (FProperty *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = (uint)puVar6[1];
  uVar15 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((longlong)(int)uVar3);
  }
  iVar4 = (local_38.field1_0x8.FreezableArray)->ArrayNum;
  if (iVar4 < (int)uVar3) {
    FScriptArrayHelper::AddValues(&local_38,uVar3 - iVar4);
  }
  else if ((int)uVar3 < iVar4) {
    FScriptArrayHelper::RemoveValues(&local_38,uVar3,iVar4 - uVar3);
  }
  p_Var10 = UE::Kismet::BlueprintTypeConversions::Internal::FindConversionFunction
                      ((FProperty *)pFVar14[1]._padding_,(FProperty *)pFVar17[1]._padding_);
  if ((p_Var10 == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConversionFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                         ,0x10b,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (0 < (int)uVar3) {
    lVar13 = 0;
    do {
      if ((int)puVar6[1] == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        uVar11 = *puVar6;
        if (((lVar8 & 1) != 0) && ((uVar11 & 1) != 0)) {
          uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar6;
        }
        pvVar16 = (void *)(iVar2 * lVar13 + uVar11);
      }
      if ((local_38.field1_0x8.FreezableArray)->ArrayNum == 0) {
        puVar12 = (uchar *)0x0;
      }
      else {
        puVar12 = (uchar *)(local_38.field1_0x8.FreezableArray)->_padding_;
        if (((local_38.ArrayFlags & UsesMemoryImageAllocator) != None) &&
           (((ulonglong)puVar12 & 1) != 0)) {
          puVar12 = &(local_38.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar12 >> 0x18);
        }
        puVar12 = puVar12 + local_38.ElementSize * lVar13;
      }
      (*p_Var10)(pvVar16,puVar12);
      lVar13 = lVar13 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}

// execConvertFBox2dToFBox2f @ 147e88480

void __cdecl
UBlueprintTypeConversions::execConvertFBox2dToFBox2f(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  FProperty *pFVar5;
  double *pdVar6;
  code *pcVar7;
  bool bVar8;
  float local_18;
  
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar6 = (double *)param_2->MostRecentPropertyAddress;
  if (pdVar6 == (double *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pfVar4 == (float *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  dVar1 = pdVar6[1];
  dVar2 = pdVar6[2];
  dVar3 = pdVar6[3];
  local_18 = (float)CONCAT31(local_18._1_3_,*(undefined1 *)(pdVar6 + 4));
  *pfVar4 = (float)*pdVar6;
  pfVar4[1] = (float)dVar1;
  pfVar4[2] = (float)dVar2;
  pfVar4[3] = (float)dVar3;
  pfVar4[4] = local_18;
  return;
}

// execConvertFBox2fToFBox2d @ 147e885a0

void __cdecl
UBlueprintTypeConversions::execConvertFBox2fToFBox2d(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 (*pauVar4) [16];
  FProperty *pFVar5;
  float *pfVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  undefined7 uStack_17;
  
  pauVar4 = (undefined1 (*) [16])param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pfVar6 = (float *)param_2->MostRecentPropertyAddress;
  if (pfVar6 == (float *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("From",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                        ,0x36,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pauVar4 == (undefined1 (*) [16])0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("To",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                        ,0x38,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar1 = pfVar6[2];
  fVar2 = pfVar6[3];
  uVar3 = *(undefined1 *)(pfVar6 + 4);
  auVar8._8_4_ = SUB84((double)pfVar6[1],0);
  auVar8._0_8_ = (double)*pfVar6;
  auVar8._12_4_ = (int)((ulonglong)(double)pfVar6[1] >> 0x20);
  *pauVar4 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar2,0);
  auVar9._0_8_ = (double)fVar1;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  pauVar4[1] = auVar9;
  *(ulonglong *)pauVar4[2] = CONCAT71(uStack_17,uVar3);
  return;
}

// execConvertFMatrix44dToFMatrix44f @ 147e886b0

void __cdecl
UBlueprintTypeConversions::execConvertFMatrix44dToFMatrix44f
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  FProperty *pFVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  
  pfVar1 = (float *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  if (pdVar3 == (double *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("From",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                        ,0x36,L"");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pfVar1 == (float *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("To",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                        ,0x38,L"");
    if (bVar20) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar5 = pdVar3[6];
  dVar6 = pdVar3[7];
  dVar7 = pdVar3[4];
  dVar8 = pdVar3[5];
  dVar9 = pdVar3[10];
  dVar10 = pdVar3[0xb];
  dVar11 = pdVar3[8];
  dVar12 = pdVar3[9];
  dVar13 = pdVar3[0xe];
  dVar14 = pdVar3[0xf];
  dVar15 = pdVar3[0xc];
  dVar16 = pdVar3[0xd];
  dVar17 = pdVar3[2];
  dVar18 = pdVar3[3];
  dVar19 = pdVar3[1];
  *pfVar1 = (float)*pdVar3;
  pfVar1[1] = (float)dVar19;
  pfVar1[2] = (float)dVar17;
  pfVar1[3] = (float)dVar18;
  pfVar1[4] = (float)dVar7;
  pfVar1[5] = (float)dVar8;
  pfVar1[6] = (float)dVar5;
  pfVar1[7] = (float)dVar6;
  pfVar1[8] = (float)dVar11;
  pfVar1[9] = (float)dVar12;
  pfVar1[10] = (float)dVar9;
  pfVar1[0xb] = (float)dVar10;
  pfVar1[0xc] = (float)dVar15;
  pfVar1[0xd] = (float)dVar16;
  pfVar1[0xe] = (float)dVar13;
  pfVar1[0xf] = (float)dVar14;
  return;
}

// execConvertFMatrix44fToFMatrix44d @ 147e887f0

void __cdecl
UBlueprintTypeConversions::execConvertFMatrix44fToFMatrix44d
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 (*pauVar1) [16];
  FProperty *pFVar2;
  float *pfVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  bool bVar22;
  
  pauVar1 = (undefined1 (*) [16])param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  if (pfVar3 == (float *)0x0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("From",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                        ,0x36,L"");
    if (bVar22) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pauVar1 == (undefined1 (*) [16])0x0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("To",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                        ,0x38,L"");
    if (bVar22) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar8 = pfVar3[2];
  fVar9 = pfVar3[3];
  fVar10 = pfVar3[4];
  fVar11 = pfVar3[5];
  fVar12 = pfVar3[6];
  fVar13 = pfVar3[7];
  fVar14 = pfVar3[8];
  fVar15 = pfVar3[9];
  fVar16 = pfVar3[10];
  fVar17 = pfVar3[0xb];
  fVar18 = pfVar3[0xc];
  fVar19 = pfVar3[0xd];
  fVar20 = pfVar3[0xe];
  fVar21 = pfVar3[0xf];
  auVar7._8_4_ = SUB84((double)pfVar3[1],0);
  auVar7._0_8_ = (double)*pfVar3;
  auVar7._12_4_ = (int)((ulonglong)(double)pfVar3[1] >> 0x20);
  *pauVar1 = auVar7;
  auVar6._8_4_ = SUB84((double)fVar9,0);
  auVar6._0_8_ = (double)fVar8;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  pauVar1[1] = auVar6;
  auVar5._8_4_ = SUB84((double)fVar11,0);
  auVar5._0_8_ = (double)fVar10;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  pauVar1[2] = auVar5;
  *(double *)pauVar1[3] = (double)fVar12;
  *(double *)(pauVar1[3] + 8) = (double)fVar13;
  *(double *)pauVar1[4] = (double)fVar14;
  *(double *)(pauVar1[4] + 8) = (double)fVar15;
  *(double *)pauVar1[5] = (double)fVar16;
  *(double *)(pauVar1[5] + 8) = (double)fVar17;
  *(double *)pauVar1[6] = (double)fVar18;
  *(double *)(pauVar1[6] + 8) = (double)fVar19;
  *(double *)pauVar1[7] = (double)fVar20;
  *(double *)(pauVar1[7] + 8) = (double)fVar21;
  return;
}

// execConvertFPlane4dToFPlane4f @ 147e88940

void __cdecl
UBlueprintTypeConversions::execConvertFPlane4dToFPlane4f
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  FProperty *pFVar5;
  double *pdVar6;
  code *pcVar7;
  bool bVar8;
  
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar6 = (double *)param_2->MostRecentPropertyAddress;
  if (pdVar6 == (double *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pfVar4 == (float *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  dVar1 = pdVar6[1];
  dVar2 = pdVar6[2];
  dVar3 = pdVar6[3];
  *pfVar4 = (float)*pdVar6;
  pfVar4[1] = (float)dVar1;
  pfVar4[2] = (float)dVar2;
  pfVar4[3] = (float)dVar3;
  return;
}

// execConvertFPlane4fToFPlane4d @ 147e88a50

void __cdecl
UBlueprintTypeConversions::execConvertFPlane4fToFPlane4d
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  undefined8 uVar2;
  double *pdVar3;
  FProperty *pFVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  
  pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  if (pfVar5 == (float *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pdVar3 == (double *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar2 = *(undefined8 *)(pfVar5 + 1);
  fVar1 = pfVar5[3];
  *pdVar3 = (double)*pfVar5;
  pdVar3[1] = (double)(float)uVar2;
  pdVar3[2] = (double)(float)((ulonglong)uVar2 >> 0x20);
  pdVar3[3] = (double)fVar1;
  return;
}

// execConvertFQuat4dToFQuat4f @ 147e88b50

void __cdecl
UBlueprintTypeConversions::execConvertFQuat4dToFQuat4f
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  FProperty *pFVar5;
  double *pdVar6;
  code *pcVar7;
  bool bVar8;
  
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar6 = (double *)param_2->MostRecentPropertyAddress;
  if (pdVar6 == (double *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pfVar4 == (float *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  dVar1 = pdVar6[1];
  dVar2 = pdVar6[2];
  dVar3 = pdVar6[3];
  *pfVar4 = (float)*pdVar6;
  pfVar4[1] = (float)dVar1;
  pfVar4[2] = (float)dVar2;
  pfVar4[3] = (float)dVar3;
  return;
}

// execConvertFQuat4fToFQuat4d @ 147e88c60

void __cdecl
UBlueprintTypeConversions::execConvertFQuat4fToFQuat4d
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  undefined8 uVar2;
  double *pdVar3;
  FProperty *pFVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  
  pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  if (pfVar5 == (float *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pdVar3 == (double *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar2 = *(undefined8 *)(pfVar5 + 1);
  fVar1 = pfVar5[3];
  *pdVar3 = (double)*pfVar5;
  pdVar3[1] = (double)(float)uVar2;
  pdVar3[2] = (double)(float)((ulonglong)uVar2 >> 0x20);
  pdVar3[3] = (double)fVar1;
  return;
}

// execConvertFRotator3dToFRotator3f @ 147e88d60

void __cdecl
UBlueprintTypeConversions::execConvertFRotator3dToFRotator3f
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  FProperty *pFVar4;
  double *pdVar5;
  code *pcVar6;
  bool bVar7;
  
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  if (pdVar5 == (double *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pfVar3 == (float *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  dVar1 = pdVar5[1];
  dVar2 = pdVar5[2];
  *pfVar3 = (float)*pdVar5;
  pfVar3[1] = (float)dVar1;
  pfVar3[2] = (float)dVar2;
  return;
}

// execConvertFRotator3fToFRotator3d @ 147e88e60

void __cdecl
UBlueprintTypeConversions::execConvertFRotator3fToFRotator3d
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  double *pdVar2;
  FProperty *pFVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  
  pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  if (pfVar4 == (float *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pdVar2 == (double *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = *(undefined8 *)(pfVar4 + 1);
  *pdVar2 = (double)*pfVar4;
  pdVar2[1] = (double)(float)uVar1;
  pdVar2[2] = (double)(float)((ulonglong)uVar1 >> 0x20);
  return;
}

// execConvertFTransform3dToFTransform3f @ 147e88f50

void __cdecl
UBlueprintTypeConversions::execConvertFTransform3dToFTransform3f
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  FProperty *pFVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  
  pfVar1 = (float *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  if (pdVar3 == (double *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("From",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                        ,0x36,L"");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pfVar1 == (float *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("To",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                        ,0x38,L"");
    if (bVar16) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar5 = pdVar3[2];
  dVar6 = pdVar3[3];
  dVar7 = pdVar3[1];
  dVar8 = pdVar3[6];
  dVar9 = pdVar3[7];
  dVar10 = pdVar3[4];
  dVar11 = pdVar3[5];
  dVar12 = pdVar3[10];
  dVar13 = pdVar3[0xb];
  dVar14 = pdVar3[8];
  dVar15 = pdVar3[9];
  *pfVar1 = (float)*pdVar3;
  pfVar1[1] = (float)dVar7;
  pfVar1[2] = (float)dVar5;
  pfVar1[3] = (float)dVar6;
  pfVar1[4] = (float)dVar10;
  pfVar1[5] = (float)dVar11;
  pfVar1[6] = (float)dVar8;
  pfVar1[7] = (float)dVar9;
  pfVar1[8] = (float)dVar14;
  pfVar1[9] = (float)dVar15;
  pfVar1[10] = (float)dVar12;
  pfVar1[0xb] = (float)dVar13;
  return;
}

// execConvertFTransform3fToFTransform3d @ 147e89060

void __cdecl
UBlueprintTypeConversions::execConvertFTransform3fToFTransform3d
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
  float *pfVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  
  pdVar1 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  if (pfVar3 == (float *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("From",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                        ,0x36,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pdVar1 == (double *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("To",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                        ,0x38,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar7 = pfVar3[1];
  fVar8 = pfVar3[2];
  fVar9 = pfVar3[3];
  fVar10 = pfVar3[8];
  fVar11 = pfVar3[9];
  fVar12 = pfVar3[10];
  fVar13 = pfVar3[0xb];
  fVar14 = pfVar3[4];
  fVar15 = pfVar3[5];
  fVar16 = pfVar3[6];
  fVar17 = pfVar3[7];
  *pdVar1 = (double)*pfVar3;
  pdVar1[1] = (double)fVar7;
  pdVar1[2] = (double)fVar8;
  pdVar1[3] = (double)fVar9;
  auVar5._8_4_ = SUB84((double)fVar15,0);
  auVar5._0_8_ = (double)fVar14;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
  *(undefined1 (*) [16])(pdVar1 + 4) = auVar5;
  pdVar1[6] = (double)fVar16;
  pdVar1[7] = (double)fVar17;
  auVar6._8_4_ = SUB84((double)fVar11,0);
  auVar6._0_8_ = (double)fVar10;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  *(undefined1 (*) [16])(pdVar1 + 8) = auVar6;
  pdVar1[10] = (double)fVar12;
  pdVar1[0xb] = (double)fVar13;
  return;
}

// execConvertFVector2dToFVector2f @ 147e89170

void __cdecl
UBlueprintTypeConversions::execConvertFVector2dToFVector2f
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar *puVar1;
  FProperty *pFVar2;
  double *pdVar3;
  code *pcVar4;
  bool bVar5;
  
  puVar1 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  if (pdVar3 == (double *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (puVar1 == (uchar *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(ulonglong *)puVar1 = CONCAT44((float)pdVar3[1],(float)*pdVar3);
  return;
}

// execConvertFVector2fToFVector2d @ 147e89270

void __cdecl
UBlueprintTypeConversions::execConvertFVector2fToFVector2d
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  double *pdVar2;
  FProperty *pFVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  
  pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  if (pfVar4 == (float *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pdVar2 == (double *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar1 = pfVar4[1];
  *pdVar2 = (double)*pfVar4;
  pdVar2[1] = (double)fVar1;
  return;
}

// execConvertFVector3dToFVector3f @ 147e89360

void __cdecl
UBlueprintTypeConversions::execConvertFVector3dToFVector3f
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  FProperty *pFVar4;
  double *pdVar5;
  code *pcVar6;
  bool bVar7;
  
  pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  if (pdVar5 == (double *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pfVar3 == (float *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  dVar1 = pdVar5[1];
  dVar2 = pdVar5[2];
  *pfVar3 = (float)*pdVar5;
  pfVar3[1] = (float)dVar1;
  pfVar3[2] = (float)dVar2;
  return;
}

// execConvertFVector3fToFVector3d @ 147e89460

void __cdecl
UBlueprintTypeConversions::execConvertFVector3fToFVector3d
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  double *pdVar2;
  FProperty *pFVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  
  pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  if (pfVar4 == (float *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pdVar2 == (double *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar1 = *(undefined8 *)(pfVar4 + 1);
  *pdVar2 = (double)*pfVar4;
  pdVar2[1] = (double)(float)uVar1;
  pdVar2[2] = (double)(float)((ulonglong)uVar1 >> 0x20);
  return;
}

// execConvertFVector4dToFVector4f @ 147e89550

void __cdecl
UBlueprintTypeConversions::execConvertFVector4dToFVector4f
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  FProperty *pFVar5;
  double *pdVar6;
  code *pcVar7;
  bool bVar8;
  
  pfVar4 = (float *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pdVar6 = (double *)param_2->MostRecentPropertyAddress;
  if (pdVar6 == (double *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pfVar4 == (float *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  dVar1 = pdVar6[1];
  dVar2 = pdVar6[2];
  dVar3 = pdVar6[3];
  *pfVar4 = (float)*pdVar6;
  pfVar4[1] = (float)dVar1;
  pfVar4[2] = (float)dVar2;
  pfVar4[3] = (float)dVar3;
  return;
}

// execConvertFVector4fToFVector4d @ 147e89670

void __cdecl
UBlueprintTypeConversions::execConvertFVector4fToFVector4d
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  undefined8 uVar2;
  double *pdVar3;
  FProperty *pFVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  
  pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  if (pfVar5 == (float *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("From",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x36,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pdVar3 == (double *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("To",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                       ,0x38,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar2 = *(undefined8 *)(pfVar5 + 1);
  fVar1 = pfVar5[3];
  *pdVar3 = (double)*pfVar5;
  pdVar3[1] = (double)(float)uVar2;
  pdVar3[2] = (double)(float)((ulonglong)uVar2 >> 0x20);
  pdVar3[3] = (double)fVar1;
  return;
}

// execConvertMapType @ 147e89770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UBlueprintTypeConversions::execConvertMapType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptSparseArrayLayout *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  ulonglong *puVar5;
  FScriptMapHelper_u_16 FVar6;
  bool bVar7;
  _func___cdecl_void_void_ptr_void_ptr *p_Var8;
  _func___cdecl_void_void_ptr_void_ptr *p_Var9;
  uchar *puVar10;
  ulonglong uVar11;
  void *_Dst;
  int iVar12;
  void *_Src;
  FMapProperty *pFVar13;
  uchar *puVar14;
  int iVar15;
  FMapProperty *pFVar16;
  undefined1 auStack_118 [32];
  FMapProperty *local_f8;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8 [2];
  <lambda_1> local_c0;
  undefined1 local_b0 [32];
  ulonglong *local_90;
  int local_88;
  int local_74;
  byte local_70;
  FScriptMapHelper local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar13 = (FMapProperty *)param_2->MostRecentProperty;
  if ((pFVar13 == (FMapProperty *)0x0) ||
     ((*(ulonglong *)(pFVar13->_padding_ + 0x18) & 0x400000000000) == 0)) {
    local_f8 = pFVar13;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    pFVar13 = (FMapProperty *)0x0;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar14 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FMapProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar16 = (FMapProperty *)param_2->MostRecentProperty;
  puVar10 = param_2->MostRecentPropertyAddress;
  if ((pFVar16 == (FMapProperty *)0x0) ||
     ((*(ulonglong *)(pFVar16->_padding_ + 0x18) & 0x400000000000) == 0)) {
    local_f8 = pFVar16;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    pFVar16 = (FMapProperty *)0x0;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FScriptMapHelper::FScriptMapHelper((FScriptMapHelper *)(local_b0 + 0x10),pFVar16,puVar10);
  FScriptMapHelper::FScriptMapHelper(&local_68,pFVar13,puVar14);
  if ((local_70 & 1) == 0) {
    iVar12 = *(int *)((longlong)local_90 + 0x34);
  }
  else {
    iVar12 = *(int *)((longlong)local_90 + 0x24);
  }
  iVar12 = (int)local_90[1] - iVar12;
  if ((local_68.MapFlags & UsesMemoryImageAllocator) == None) {
    iVar15 = *(int *)&((local_68.field2_0x10.FreezableMap)->Pairs).field_0x34;
  }
  else {
    iVar15 = ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
  }
  iVar15 = ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar15;
  if (iVar15 == 0) {
    if (iVar12 == 0) goto LAB_147e8990c;
  }
  else {
    FScriptMapHelper::DestructItems(&local_68,0,iVar15);
  }
  local_c0.__this = &local_68;
  local_c0.Slack = iVar12;
  FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
            (&local_68,&local_c0);
LAB_147e8990c:
  p_Var8 = UE::Kismet::BlueprintTypeConversions::Internal::FindConversionFunction
                     (pFVar16->KeyProp,pFVar13->KeyProp);
  p_Var9 = UE::Kismet::BlueprintTypeConversions::Internal::FindConversionFunction
                     (pFVar16->ValueProp,pFVar13->ValueProp);
  iVar12 = 0;
  uVar11 = local_90[1];
  if (0 < (int)uVar11) {
    do {
      local_e4 = iVar12;
      bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        ((FScriptMapHelper *)(local_b0 + 0x10),(<lambda_1> *)&local_e4);
      if (bVar7) break;
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar11);
  }
  local_e8 = iVar12;
  bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                    ((FScriptMapHelper *)(local_b0 + 0x10),(<lambda_1> *)&local_e8);
  if (bVar7) {
    do {
      pFVar1 = &local_68.MapLayout.SetLayout.SparseArrayLayout;
      if ((local_68.MapFlags & UsesMemoryImageAllocator) == None) {
        iVar15 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                 ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                     *)local_68.field2_0x10.HeapMap,pFVar1);
      }
      else {
        iVar15 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                 ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                     *)local_68.field2_0x10.HeapMap,pFVar1);
      }
      FScriptMapHelper::ConstructItem(&local_68,iVar15);
      puVar5 = local_90;
      if ((local_70 & 1) == 0) {
        local_dc = iVar12;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          ((FScriptMapHelper *)(local_b0 + 0x10),(<lambda_1> *)&local_dc);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1321,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Src = (void *)((longlong)(local_74 * iVar12) + *puVar5);
      }
      else {
        local_e0 = iVar12;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          ((FScriptMapHelper *)(local_b0 + 0x10),(<lambda_1> *)&local_e0);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1321,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = *puVar5;
        if ((uVar11 & 1) != 0) {
          uVar11 = (longlong)puVar5 + ((longlong)uVar11 >> 0x18);
        }
        _Src = (void *)(uVar11 + (longlong)(local_74 * iVar12));
      }
      FVar6 = local_68.field2_0x10;
      iVar2 = ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      if ((local_68.MapFlags & UsesMemoryImageAllocator) == None) {
        if (iVar2 == *(int *)&((local_68.field2_0x10.FreezableMap)->Pairs).field_0x34)
        goto LAB_147e89abd;
        local_d4 = iVar15;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_68,(<lambda_1> *)&local_d4);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(InternalIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x12dd,
                               L"Invalid internal index. Use IsValidIndex before calling this method."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst = (void *)((longlong)(local_68.MapLayout.SetLayout.SparseArrayLayout.Size * iVar15) +
                       ((FVar6.FreezableMap)->Pairs).Elements.Data._padding_);
      }
      else if (iVar2 == ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices) {
LAB_147e89abd:
        if ((iVar15 != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InternalIndex == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x12d9,
                               L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst = (void *)0x0;
      }
      else {
        local_d8 = iVar15;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_68,(<lambda_1> *)&local_d8);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(InternalIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x12dd,
                               L"Invalid internal index. Use IsValidIndex before calling this method."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = ((FVar6.FreezableMap)->Pairs).Elements.Data._padding_;
        if ((uVar11 & 1) != 0) {
          uVar11 = (longlong)
                   &((TScriptArray<TSizedDefaultAllocator<32>_> *)&(FVar6.HeapMap)->field_0x0)->
                    _padding_ + ((longlong)uVar11 >> 0x18);
        }
        _Dst = (void *)((longlong)(local_68.MapLayout.SetLayout.SparseArrayLayout.Size * iVar15) +
                       uVar11);
      }
      if (p_Var8 == (_func___cdecl_void_void_ptr_void_ptr *)0x0) {
        pFVar3 = pFVar16->KeyProp;
        if (_Dst != _Src) {
          if (((uint)(int)pFVar3->PropertyFlags >> 0x1e & 1) == 0) {
            (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,_Dst,_Src,1);
          }
          else {
            memcpy(_Dst,_Src,(longlong)pFVar3->ElementSize);
          }
        }
      }
      else {
        (*p_Var8)(_Src,_Dst);
      }
      puVar5 = local_90;
      if ((local_70 & 1) == 0) {
        local_cc = iVar12;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          ((FScriptMapHelper *)(local_b0 + 0x10),(<lambda_1> *)&local_cc);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x133f,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar14 = (uchar *)((longlong)(local_74 * iVar12) + (longlong)local_88 + *puVar5);
      }
      else {
        local_d0 = iVar12;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          ((FScriptMapHelper *)(local_b0 + 0x10),(<lambda_1> *)&local_d0);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x133f,
                               L"Invalid Iterator. Test Iterator before calling this method."),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = *puVar5;
        if ((uVar11 & 1) != 0) {
          uVar11 = (longlong)puVar5 + ((longlong)uVar11 >> 0x18);
        }
        puVar14 = (uchar *)(uVar11 + (longlong)local_88 + (longlong)(local_74 * iVar12));
      }
      local_b0._0_8_ = &local_68;
      local_b0._8_4_ = iVar15;
      puVar10 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                          (&local_68,(<lambda_1> *)local_b0);
      if (p_Var9 == (_func___cdecl_void_void_ptr_void_ptr *)0x0) {
        pFVar3 = pFVar16->ValueProp;
        if (puVar10 != puVar14) {
          if (((uint)(int)pFVar3->PropertyFlags >> 0x1e & 1) == 0) {
            (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,puVar10,puVar14,1);
          }
          else {
            memcpy(puVar10,puVar14,(longlong)pFVar3->ElementSize);
          }
        }
      }
      else {
        (*p_Var9)(puVar14,puVar10);
      }
      uVar11 = local_90[1];
      do {
        iVar12 = iVar12 + 1;
        if ((int)uVar11 <= iVar12) break;
        local_c8[0] = iVar12;
        bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          ((FScriptMapHelper *)(local_b0 + 0x10),(<lambda_1> *)local_c8);
      } while (!bVar7);
      local_e8 = iVar12;
      bVar7 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        ((FScriptMapHelper *)(local_b0 + 0x10),(<lambda_1> *)&local_e8);
    } while (bVar7);
  }
  FScriptMapHelper::Rehash(&local_68);
  return;
}

// execConvertSetType @ 147e89d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UBlueprintTypeConversions::execConvertSetType(UObject *param_1,FFrame *param_2,void *param_3)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar2;
  ForElementType<unsigned_int> FVar3;
  longlong lVar4;
  code *pcVar5;
  TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
  *pTVar6;
  FScriptSetHelper *pFVar7;
  bool bVar8;
  _func___cdecl_void_void_ptr_void_ptr *p_Var9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  FProperty *pFVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  int iVar16;
  FProperty *pFVar17;
  undefined1 auStack_c8 [32];
  FProperty *local_a8;
  TScriptContainerIterator<FScriptSetHelper> local_98;
  FScriptSetHelper local_88;
  FScriptSetHelper local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar17 = param_2->MostRecentProperty;
  if ((pFVar17 == (FProperty *)0x0) ||
     ((*(ulonglong *)(pFVar17->_padding_ + 0x18) & 0x800000000000) == 0)) {
    local_a8 = pFVar17;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    pFVar17 = (FProperty *)0x0;
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar1 = (TScriptSparseSet<FDefaultSetAllocator> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentProperty = (FProperty *)0x0;
  FSetProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar13 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar13->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar13);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar13 = param_2->MostRecentProperty;
  pTVar2 = (TScriptSparseSet<FDefaultSetAllocator> *)param_2->MostRecentPropertyAddress;
  if ((pFVar13 == (FProperty *)0x0) ||
     ((*(ulonglong *)(pFVar13->_padding_ + 0x18) & 0x800000000000) == 0)) {
    local_a8 = pFVar13;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    pFVar13 = (FProperty *)0x0;
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60.ElementProp = (FProperty *)pFVar13[1]._padding_;
  local_60.SetLayout._0_8_ = pFVar13[1]._padding_;
  local_60.SetLayout._8_8_ = pFVar13[1]._padding_;
  local_60.SetLayout.SparseArrayLayout.Size = (int)pFVar13[1]._padding_;
  local_60.Set = pTVar2;
  if ((local_60.ElementProp == (FProperty *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_88.ElementProp = (FProperty *)pFVar17[1]._padding_;
  local_88.SetLayout._0_8_ = pFVar17[1]._padding_;
  local_88.SetLayout._8_8_ = pFVar17[1]._padding_;
  local_88.SetLayout.SparseArrayLayout.Size = (int)pFVar17[1]._padding_;
  local_88.Set = pTVar1;
  if ((local_88.ElementProp == (FProperty *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar11 = ((local_60.Set)->Elements).Data.ArrayNum - ((local_60.Set)->Elements).NumFreeIndices;
  iVar16 = ((local_88.Set)->Elements).Data.ArrayNum - ((local_88.Set)->Elements).NumFreeIndices;
  if (iVar16 == 0) {
    if (iVar11 == 0) goto LAB_147e89f0c;
  }
  else {
    FScriptSetHelper::DestructItems(&local_88,0,iVar16);
  }
  TScriptSparseSet<FDefaultSetAllocator>::Empty(local_88.Set,iVar11,&local_88.SetLayout);
LAB_147e89f0c:
  p_Var9 = UE::Kismet::BlueprintTypeConversions::Internal::FindConversionFunction
                     ((FProperty *)pFVar13[1]._padding_,(FProperty *)pFVar17[1]._padding_);
  if ((p_Var9 == (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConversionFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Kismet\\BlueprintTypeConversions.cpp"
                         ,0x12a,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_98.Container = &local_60;
  local_98.InternalIndex = -1;
  local_98.LogicalIndex = -1;
  TScriptContainerIterator<FScriptSetHelper>::Advance(&local_98);
  while( true ) {
    pFVar7 = local_98.Container;
    uVar12 = local_98.InternalIndex;
    pTVar1 = (local_98.Container)->Set;
    if ((local_98.InternalIndex < 0) ||
       ((pTVar1->Elements).AllocationFlags.NumBits <= local_98.InternalIndex)) break;
    if (((pTVar1->Elements).AllocationFlags.NumBits <= local_98.InternalIndex) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x8c4,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar3 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar3;
    }
    uVar15 = uVar12;
    if ((int)uVar12 < 0) {
      uVar15 = uVar12 + 0x1f;
    }
    if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0
       ) break;
    iVar11 = local_98.InternalIndex;
    pTVar1 = pFVar7->Set;
    if (((int)uVar12 < 0) || ((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar12)) {
LAB_147e8a052:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Iterator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      if (((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar12) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar3;
      }
      uVar15 = uVar12 & 0x1f;
      if ((int)uVar12 < 0) {
        uVar12 = uVar12 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar12 >> 5) * 4) >> uVar15 & 1) == 0)
      goto LAB_147e8a052;
    }
    iVar11 = local_60.SetLayout.SparseArrayLayout.Size * iVar11;
    lVar4 = ((local_60.Set)->Elements).Data._padding_;
    uVar12 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
             ::AddUninitialized(&(local_88.Set)->Elements,&local_88.SetLayout.SparseArrayLayout);
    pTVar1 = local_88.Set;
    if (((int)uVar12 < 0) || (((local_88.Set)->Elements).AllocationFlags.NumBits <= (int)uVar12)) {
LAB_147e8a103:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(InternalIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1841,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pTVar6 = &(local_88.Set)->Elements;
      if ((((local_88.Set)->Elements).AllocationFlags.NumBits <= (int)uVar12) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)&pTVar6->AllocationFlags;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar3;
      }
      uVar15 = uVar12;
      if ((int)uVar12 < 0) {
        uVar15 = uVar12 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar12 & 0x1f) & 1) ==
          0) goto LAB_147e8a103;
    }
    pvVar10 = (void *)((longlong)(int)(local_88.SetLayout.SparseArrayLayout.Size * uVar12) +
                      ((local_88.Set)->Elements).Data._padding_);
    if (((uint)(int)(local_88.ElementProp)->PropertyFlags >> 9 & 1) == 0) {
      FProperty::InitializeValue_InContainer(local_88.ElementProp,pvVar10);
    }
    else {
      memset(pvVar10,0,(longlong)local_88.SetLayout.Size);
    }
    pTVar1 = local_88.Set;
    if (((local_88.Set)->Elements).Data.ArrayNum == ((local_88.Set)->Elements).NumFreeIndices) {
      if ((uVar12 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InternalIndex == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x169e,
                             L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar10 = (void *)0x0;
    }
    else {
      if (((int)uVar12 < 0) || (((local_88.Set)->Elements).AllocationFlags.NumBits <= (int)uVar12))
      {
LAB_147e8a202:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(InternalIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x16a2,
                           L"Invalid internal index. Use IsValidIndex before calling this method.");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        pTVar6 = &(local_88.Set)->Elements;
        if ((((local_88.Set)->Elements).AllocationFlags.NumBits <= (int)uVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)&pTVar6->AllocationFlags;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar3;
        }
        uVar15 = uVar12;
        if ((int)uVar12 < 0) {
          uVar15 = uVar12 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar12 & 0x1f) & 1)
            == 0) goto LAB_147e8a202;
      }
      pvVar10 = (void *)((longlong)(int)(local_88.SetLayout.SparseArrayLayout.Size * uVar12) +
                        ((local_88.Set)->Elements).Data._padding_);
    }
    (*p_Var9)((void *)(iVar11 + lVar4),pvVar10);
    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_98);
  }
  FScriptSetHelper::Rehash(&local_88);
  return;
}

