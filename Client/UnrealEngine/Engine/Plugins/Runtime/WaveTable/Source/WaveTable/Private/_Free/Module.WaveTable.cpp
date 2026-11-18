// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 65

// `dynamic_initializer_for_'LogWaveTable'' @ 1411eb9e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWaveTable__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogWaveTable,L"LogWaveTable",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWaveTable__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWaveTable'' @ 1411eba20

void __cdecl _dynamic_initializer_for__ModuleRegistrantWaveTable__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WaveTable";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WaveTable",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<WaveTable::FModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h__Script_WaveTable_1483505298'' @ 1411eba70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h__Script_WaveTable_1483505298__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WaveTable",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h__Script_WaveTable_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h__Script_WaveTable_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h__Script_WaveTable_3819793429'' @ 1411ebac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h__Script_WaveTable_3819793429__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WaveTable",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h__Script_WaveTable_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableSettings_h__Script_WaveTable_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h__Script_WaveTable_1141658260'' @ 1411ebb10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h__Script_WaveTable_1141658260__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WaveTable",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h__Script_WaveTable_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h__Script_WaveTable_1162008625'' @ 1411ebb50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h__Script_WaveTable_1162008625__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WaveTable",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h__Script_WaveTable_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h__Script_WaveTable_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_WaveTable'' @ 1411ebba0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_WaveTable__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x4ebb0542;
  local_res8[0].DeclarationsHash = 0x103f6a83;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_WaveTable,L"/Script/WaveTable",
             &Z_Registration_Info_UPackage__Script_WaveTable,local_res8);
  return;
}

// Z_Construct_UPackage__Script_WaveTable @ 14b2baaf0

UPackage * __cdecl Z_Construct_UPackage__Script_WaveTable(void)

{
  if (Z_Registration_Info_UPackage__Script_WaveTable.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_WaveTable.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_WaveTable.OuterSingleton;
}

// Z_Construct_UClass_UWaveTableBank @ 14b2bab70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWaveTableBank(void)

{
  if (Z_Registration_Info_UClass_UWaveTableBank.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWaveTableBank.OuterSingleton,
               &Z_Construct_UClass_UWaveTableBank_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWaveTableBank.OuterSingleton;
}

// Z_Construct_UEnum_WaveTable_EWaveTableResolution @ 14b2babb0

UEnum * __cdecl Z_Construct_UEnum_WaveTable_EWaveTableResolution(void)

{
  if (Z_Registration_Info_UEnum_EWaveTableResolution.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWaveTableResolution.InnerSingleton,
               &Z_Construct_UEnum_WaveTable_EWaveTableResolution_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWaveTableResolution.InnerSingleton;
}

// Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode @ 14b2babf0

UEnum * __cdecl Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode(void)

{
  if (Z_Registration_Info_UEnum_EWaveTableSamplingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWaveTableSamplingMode.InnerSingleton,
               &Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWaveTableSamplingMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWaveTableBankEntry @ 14b2bac30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWaveTableBankEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWaveTableBankEntry.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWaveTableBankEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWaveTableBankEntry.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FWaveTableBankEntry.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FWaveTableTransform @ 14b2bacb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWaveTableTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWaveTableTransform.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWaveTableTransform.InnerSingleton,
               &Z_Construct_UScriptStruct_FWaveTableTransform_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWaveTableTransform.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FWaveTableTransform.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14b2bad30

void * __cdecl Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWaveTableBankEntry,&UE::CoreUObject::Private::Construct<FWaveTableBankEntry>,&UE::CoreUObject::Private::ConstructForTests<FWaveTableBankEntry>,&UE::CoreUObject::Private::Destruct<FWaveTableBankEntry>,&UE::CoreUObject::Private::Copy<FWaveTableBankEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bBipolar_SetBit @ 14b2bad70

void __cdecl Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Z_Construct_UEnum_WaveTable_EWaveTableBitDepth @ 14b2bad80

UEnum * __cdecl Z_Construct_UEnum_WaveTable_EWaveTableBitDepth(void)

{
  if (Z_Registration_Info_UEnum_EWaveTableBitDepth.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWaveTableBitDepth.InnerSingleton,
               &Z_Construct_UEnum_WaveTable_EWaveTableBitDepth_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWaveTableBitDepth.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWaveTableData @ 14b2badc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWaveTableData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWaveTableData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWaveTableData.InnerSingleton,
               &Z_Construct_UScriptStruct_FWaveTableData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWaveTableData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWaveTableData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EWaveTableBitDepth_StaticEnum @ 14b2bae40

UEnum * __cdecl EWaveTableBitDepth_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWaveTableBitDepth.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UEnum_EWaveTableBitDepth.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableBitDepth,(UObject *)pUVar1,
                       L"EWaveTableBitDepth");
  }
  return Z_Registration_Info_UEnum_EWaveTableBitDepth.OuterSingleton;
}

// NewStructOps @ 14b2bae80

void * __cdecl Z_Construct_UScriptStruct_FWaveTableData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWaveTableData,&UE::CoreUObject::Private::Construct<FWaveTableData>,&UE::CoreUObject::Private::ConstructForTests<FWaveTableData>,&UE::CoreUObject::Private::Destruct<FWaveTableData>,&UE::CoreUObject::Private::Copy<FWaveTableData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14b2baee0

void * __thiscall WaveTable::FModule::_scalar_deleting_destructor_(FModule *this,uint param_1)

{
  *this = (FModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UEnum_WaveTable_EWaveTableCurve @ 14b2baf20

UEnum * __cdecl Z_Construct_UEnum_WaveTable_EWaveTableCurve(void)

{
  if (Z_Registration_Info_UEnum_EWaveTableCurve.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWaveTableCurve.InnerSingleton,
               &Z_Construct_UEnum_WaveTable_EWaveTableCurve_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWaveTableCurve.InnerSingleton;
}

// EWaveTableResolution_StaticEnum @ 14b2baf60

UEnum * __cdecl EWaveTableResolution_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableResolution,(UObject *)pUVar1,
                       L"EWaveTableResolution");
  }
  return Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton;
}

// EWaveTableSamplingMode_StaticEnum @ 14b2bafa0

UEnum * __cdecl EWaveTableSamplingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWaveTableSamplingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UEnum_EWaveTableSamplingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode,(UObject *)pUVar1,
                       L"EWaveTableSamplingMode");
  }
  return Z_Registration_Info_UEnum_EWaveTableSamplingMode.OuterSingleton;
}

// NewProp_bNormalize_SetBit @ 14b2bafe0

void __cdecl
Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bNormalize_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewProp_bRemoveOffset_SetBit @ 14b2baff0

void __cdecl
Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewProp_bRemoveOffset_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  return;
}

// NewStructOps @ 14b2bb000

void * __cdecl Z_Construct_UScriptStruct_FWaveTableSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWaveTableSettings,&UE::CoreUObject::Private::Construct<FWaveTableSettings>,&UE::CoreUObject::Private::ConstructForTests<FWaveTableSettings>,&UE::CoreUObject::Private::Destruct<FWaveTableSettings>,&UE::CoreUObject::Private::Copy<FWaveTableSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EWaveTableCurve_StaticEnum @ 14b2bb040

UEnum * __cdecl EWaveTableCurve_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableCurve,(UObject *)pUVar1,
                       L"EWaveTableCurve");
  }
  return Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton;
}

// NewStructOps @ 14b2bb080

void * __cdecl Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWaveTableTransform,&UE::CoreUObject::Private::Construct<FWaveTableTransform>,&UE::CoreUObject::Private::ConstructForTests<FWaveTableTransform>,&UE::CoreUObject::Private::Destruct<FWaveTableTransform>,&UE::CoreUObject::Private::Copy<FWaveTableTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// CubicIndexInterpolator<short> @ 14b2bb900

void __cdecl
WaveTable::UtilitiesPrivate::CubicIndexInterpolator<short>
          (TArrayView<short_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar7 = __real_40800000;
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  iVar1 = param_2->ArrayNum;
  uVar10 = 0;
  iVar2 = param_1->ArrayNum;
  psVar3 = param_1->DataPtr;
  if (0 < iVar1) {
    lVar11 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar10 < iVar1) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar17 = *(float *)((longlong)param_2->DataPtr + lVar11);
      iVar12 = (int)fVar17;
      fVar18 = (float)(int)psVar3[(iVar12 + 1) % iVar2];
      fVar14 = fVar18 - (float)(int)psVar3[((int)fVar17 + iVar2 + -1) % iVar2];
      fVar13 = fVar14 * fVar14 + fVar7;
      if (fVar13 <= fVar5) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = (fVar6 / SQRT(fVar13)) * fVar14;
      }
      fVar15 = fVar18 - (float)(int)psVar3[iVar12 % iVar2];
      fVar13 = fVar15 * fVar15 + fVar7;
      if (fVar13 <= fVar5) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (fVar6 / SQRT(fVar13)) * fVar15;
      }
      fVar17 = fVar17 - (float)iVar12;
      uVar10 = uVar10 + 1;
      fVar16 = fVar17 * fVar17;
      fVar13 = (fVar17 + fVar17) * fVar16;
      *(float *)((longlong)param_2->DataPtr + lVar11) =
           (((fVar16 * fVar17 - (fVar17 + fVar17) * fVar17) + fVar17) * fVar14 +
            ((fVar13 - fVar16 * __real_40400000) + fVar6) * (float)(int)psVar3[iVar12 % iVar2] +
           (fVar16 * fVar17 - fVar16) * fVar15 + (fVar16 * __real_40400000 - fVar13) * fVar18) *
           param_3;
      lVar11 = lVar11 + 4;
    } while ((int)uVar10 < iVar1);
  }
  return;
}

// CubicIndexInterpolator<float> @ 14b2bbbd0

void __cdecl
WaveTable::UtilitiesPrivate::CubicIndexInterpolator<float>
          (TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar8 = __real_40800000;
  fVar7 = __real_3f800000;
  fVar6 = __real_322bcc77;
  iVar2 = param_2->ArrayNum;
  uVar12 = 0;
  iVar3 = param_1->ArrayNum;
  pfVar4 = param_1->DataPtr;
  if (0 < iVar2) {
    lVar13 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < iVar2) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar18 = *(float *)((longlong)param_2->DataPtr + lVar13);
      iVar11 = (int)fVar18;
      fVar1 = pfVar4[(iVar11 + 1) % iVar3];
      fVar15 = fVar1 - pfVar4[((int)fVar18 + iVar3 + -1) % iVar3];
      fVar14 = fVar15 * fVar15 + fVar8;
      if (fVar14 <= fVar6) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (fVar7 / SQRT(fVar14)) * fVar15;
      }
      fVar16 = fVar1 - pfVar4[iVar11 % iVar3];
      fVar14 = fVar16 * fVar16 + fVar8;
      if (fVar14 <= fVar6) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = (fVar7 / SQRT(fVar14)) * fVar16;
      }
      fVar18 = fVar18 - (float)iVar11;
      uVar12 = uVar12 + 1;
      fVar17 = fVar18 * fVar18;
      fVar14 = (fVar18 + fVar18) * fVar17;
      *(float *)((longlong)param_2->DataPtr + lVar13) =
           (((fVar17 * fVar18 - (fVar18 + fVar18) * fVar18) + fVar18) * fVar15 +
            ((fVar14 - fVar17 * __real_40400000) + fVar7) * pfVar4[iVar11 % iVar3] +
           (fVar17 * __real_40400000 - fVar14) * fVar1 + (fVar17 * fVar18 - fVar17) * fVar16) *
           param_3;
      lVar13 = lVar13 + 4;
    } while ((int)uVar12 < iVar2);
  }
  return;
}

// DestructItems<FWaveTableBankEntry,int> @ 14b2bbe80

void __cdecl DestructItems<FWaveTableBankEntry,int>(FWaveTableBankEntry *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FWaveTableTransform::~FWaveTableTransform(&param_1->Transform);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FWaveTableData,int> @ 14b2bbec0

void __cdecl DestructItems<FWaveTableData,int>(FWaveTableData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Data;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTangentP0<short> @ 14b2bbf00

TVector2<float> __cdecl
WaveTable::UtilitiesPrivate::GetTangentP0<short>
          (short *param_1,float param_2,float param_3,int param_4)

{
  longlong in_RDX;
  float fVar1;
  float in_XMM3_Da;
  float fVar2;
  int in_stack_00000028;
  
  fVar2 = param_3 - (float)(int)*(short *)(in_RDX + (longlong)
                                                    (((int)in_XMM3_Da + -1 + in_stack_00000028) %
                                                    in_stack_00000028) * 2);
  fVar1 = fVar2 * fVar2 + __real_40800000;
  if (__real_322bcc77 < fVar1) {
    fVar1 = __real_3f800000 / SQRT(fVar1);
    *(float *)param_1 = fVar1 + fVar1;
    *(float *)(param_1 + 2) = fVar1 * fVar2;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// GetTangentP0<float> @ 14b2bbf90

TVector2<float> __cdecl
WaveTable::UtilitiesPrivate::GetTangentP0<float>
          (float *param_1,float param_2,float param_3,int param_4)

{
  longlong in_RDX;
  float fVar1;
  float in_XMM3_Da;
  float fVar2;
  int in_stack_00000028;
  
  fVar2 = param_3 - *(float *)(in_RDX + (longlong)
                                        (((int)in_XMM3_Da + -1 + in_stack_00000028) %
                                        in_stack_00000028) * 4);
  fVar1 = fVar2 * fVar2 + __real_40800000;
  if (__real_322bcc77 < fVar1) {
    fVar1 = __real_3f800000 / SQRT(fVar1);
    *param_1 = fVar1 + fVar1;
    param_1[1] = fVar1 * fVar2;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// GetTangentP1<short> @ 14b2bc010

TVector2<float> __cdecl
WaveTable::UtilitiesPrivate::GetTangentP1<short>
          (short *param_1,float param_2,float param_3,int param_4)

{
  longlong in_RDX;
  float fVar1;
  float in_XMM3_Da;
  float fVar2;
  int in_stack_00000028;
  
  fVar2 = (float)(int)*(short *)(in_RDX + (longlong)(((int)in_XMM3_Da + 1) % in_stack_00000028) * 2)
          - param_3;
  fVar1 = fVar2 * fVar2 + __real_40800000;
  if (__real_322bcc77 < fVar1) {
    fVar1 = __real_3f800000 / SQRT(fVar1);
    *(float *)param_1 = fVar1 + fVar1;
    *(float *)(param_1 + 2) = fVar1 * fVar2;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// GetTangentP1<float> @ 14b2bc090

TVector2<float> __cdecl
WaveTable::UtilitiesPrivate::GetTangentP1<float>
          (float *param_1,float param_2,float param_3,int param_4)

{
  longlong in_RDX;
  float fVar1;
  float in_XMM3_Da;
  float fVar2;
  int in_stack_00000028;
  
  fVar2 = *(float *)(in_RDX + (longlong)(((int)in_XMM3_Da + 1) % in_stack_00000028) * 4) - param_3;
  fVar1 = fVar2 * fVar2 + __real_40800000;
  if (__real_322bcc77 < fVar1) {
    fVar1 = __real_3f800000 / SQRT(fVar1);
    *param_1 = fVar1 + fVar1;
    param_1[1] = fVar1 * fVar2;
    return (TVector2<float>)(TVector2<float>_u_0)param_1;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// InternalConstructor<UWaveTableBank> @ 14b2bc110

void __cdecl InternalConstructor<UWaveTableBank>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)&this[1].field_0x8 = 0x801;
    *(undefined ***)this = &UWaveTableBank::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UWaveTableBank::_vftable__for__IAudioProxyDataFactory__;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0xc = 48000;
    this[1].field_0x10 = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UWaveTableBank> @ 14b2bc170

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWaveTableBank>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWaveTableBank::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)&pUVar1[1].field_0x8 = 0x801;
    *(undefined ***)pUVar1 = &UWaveTableBank::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UWaveTableBank::_vftable__for__IAudioProxyDataFactory__;
    *(undefined4 *)&pUVar1[1].field_0xc = 48000;
    pUVar1[1].field_0x10 = 1;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// LinearIndexInterpolator<short> @ 14b2bc250

void __cdecl
WaveTable::UtilitiesPrivate::LinearIndexInterpolator<short>
          (TArrayView<short_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  short *psVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  iVar9 = param_2->ArrayNum;
  uVar7 = 0;
  iVar2 = param_1->ArrayNum;
  psVar3 = param_1->DataPtr;
  if (0 < iVar9) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < iVar9) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = uVar7 + 1;
      fVar1 = *(float *)(lVar8 + (longlong)param_2->DataPtr);
      iVar10 = (int)fVar1;
      iVar9 = param_2->ArrayNum;
      fVar11 = (float)(int)psVar3[iVar10 % iVar2];
      *(float *)(lVar8 + (longlong)param_2->DataPtr) =
           (((float)(int)psVar3[(iVar10 + 1) % iVar2] - fVar11) * (fVar1 - (float)iVar10) + fVar11)
           * param_3;
      lVar8 = lVar8 + 4;
    } while ((int)uVar7 < iVar9);
  }
  return;
}

// LinearIndexInterpolator<float> @ 14b2bc370

void __cdecl
WaveTable::UtilitiesPrivate::LinearIndexInterpolator<float>
          (TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar8 = param_2->ArrayNum;
  uVar9 = 0;
  iVar3 = param_1->ArrayNum;
  pfVar4 = param_1->DataPtr;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = uVar9 + 1;
      fVar1 = *(float *)(lVar10 + (longlong)param_2->DataPtr);
      iVar8 = (int)fVar1;
      fVar2 = pfVar4[iVar8 % iVar3];
      *(float *)(lVar10 + (longlong)param_2->DataPtr) =
           ((pfVar4[(iVar8 + 1) % iVar3] - fVar2) * (fVar1 - (float)iVar8) + fVar2) * param_3;
      lVar10 = lVar10 + 4;
      iVar8 = param_2->ArrayNum;
    } while ((int)uVar9 < iVar8);
  }
  return;
}

// MaxValueIndexInterpolator<short> @ 14b2bc480

void __cdecl
WaveTable::UtilitiesPrivate::MaxValueIndexInterpolator<short>
          (TArrayView<short_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  float *pfVar15;
  int iVar16;
  ulonglong uVar17;
  
  lVar12 = (longlong)param_2->ArrayNum;
  psVar3 = param_1->DataPtr;
  iVar13 = 0;
  pfVar15 = param_2->DataPtr;
  if (0 < lVar12) {
    iVar2 = param_1->ArrayNum;
    do {
      sVar8 = 0;
      iVar9 = (int)((float)iVar2 * *pfVar15) % iVar2;
      iVar11 = iVar13;
      iVar5 = iVar9;
      if (iVar13 <= iVar9) {
        iVar11 = iVar9;
        iVar5 = iVar13;
      }
      lVar14 = (longlong)iVar5;
      if (iVar5 <= iVar11) {
        iVar16 = iVar5;
        if (3 < (iVar11 - iVar5) + 1) {
          psVar10 = psVar3 + lVar14 + 2;
          uVar7 = ((iVar11 - iVar5) - 3U >> 2) + 1;
          uVar17 = (ulonglong)uVar7;
          iVar16 = iVar5 + uVar7 * 4;
          lVar14 = lVar14 + (ulonglong)uVar7 * 4;
          do {
            sVar1 = psVar10[-2];
            sVar6 = -sVar1;
            if (-sVar1 < 0) {
              sVar6 = sVar1;
            }
            if (sVar8 < sVar6) {
              *pfVar15 = (float)(int)sVar1 * param_3;
              sVar8 = sVar6;
            }
            sVar1 = psVar10[-1];
            sVar6 = -sVar1;
            if (-sVar1 < 0) {
              sVar6 = sVar1;
            }
            if (sVar8 < sVar6) {
              *pfVar15 = (float)(int)sVar1 * param_3;
              sVar8 = sVar6;
            }
            sVar1 = *psVar10;
            sVar6 = -sVar1;
            if (-sVar1 < 0) {
              sVar6 = sVar1;
            }
            if (sVar8 < sVar6) {
              *pfVar15 = (float)(int)sVar1 * param_3;
              sVar8 = sVar6;
            }
            sVar1 = psVar10[1];
            sVar6 = -sVar1;
            if (-sVar1 < 0) {
              sVar6 = sVar1;
            }
            if (sVar8 < sVar6) {
              *pfVar15 = (float)(int)sVar1 * param_3;
              sVar8 = sVar6;
            }
            psVar10 = psVar10 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
          if (iVar11 < iVar16) goto LAB_14b2bc633;
        }
        psVar10 = psVar3 + lVar14;
        do {
          sVar1 = *psVar10;
          sVar6 = -sVar1;
          if (-sVar1 < 0) {
            sVar6 = sVar1;
          }
          if (sVar8 < sVar6) {
            *pfVar15 = (float)(int)sVar1 * param_3;
            sVar8 = sVar6;
          }
          psVar10 = psVar10 + 1;
          iVar16 = iVar16 + 1;
        } while (iVar16 <= iVar11);
      }
LAB_14b2bc633:
      bVar4 = iVar13 <= iVar9;
      iVar13 = iVar5;
      if (bVar4) {
        iVar13 = iVar11;
      }
      pfVar15 = pfVar15 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

// MaxValueIndexInterpolator<float> @ 14b2bc670

void __cdecl
WaveTable::UtilitiesPrivate::MaxValueIndexInterpolator<float>
          (TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3)

{
  int iVar1;
  float *pfVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  lVar12 = (longlong)param_2->ArrayNum;
  iVar10 = 0;
  pfVar2 = param_1->DataPtr;
  pfVar13 = param_2->DataPtr;
  if (0 < lVar12) {
    iVar1 = param_1->ArrayNum;
    do {
      fVar16 = 0.0;
      iVar8 = (int)((float)iVar1 * *pfVar13) % iVar1;
      iVar15 = iVar10;
      iVar4 = iVar8;
      if (iVar10 <= iVar8) {
        iVar15 = iVar8;
        iVar4 = iVar10;
      }
      lVar11 = (longlong)iVar4;
      if (iVar4 <= iVar15) {
        iVar9 = iVar4;
        if (3 < (iVar15 - iVar4) + 1) {
          pfVar7 = pfVar2 + lVar11 + 2;
          uVar6 = ((iVar15 - iVar4) - 3U >> 2) + 1;
          uVar14 = (ulonglong)uVar6;
          iVar9 = iVar4 + uVar6 * 4;
          lVar11 = lVar11 + (ulonglong)uVar6 * 4;
          do {
            fVar17 = (float)((uint)pfVar7[-2] & uVar5);
            if (fVar16 < fVar17) {
              *pfVar13 = pfVar7[-2] * param_3;
              fVar16 = fVar17;
            }
            fVar17 = (float)((uint)pfVar7[-1] & uVar5);
            if (fVar16 < fVar17) {
              *pfVar13 = pfVar7[-1] * param_3;
              fVar16 = fVar17;
            }
            fVar17 = (float)((uint)*pfVar7 & uVar5);
            if (fVar16 < fVar17) {
              *pfVar13 = *pfVar7 * param_3;
              fVar16 = fVar17;
            }
            fVar17 = (float)((uint)pfVar7[1] & uVar5);
            if (fVar16 < fVar17) {
              *pfVar13 = pfVar7[1] * param_3;
              fVar16 = fVar17;
            }
            pfVar7 = pfVar7 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
          if (iVar15 < iVar9) goto LAB_14b2bc7c8;
        }
        pfVar7 = pfVar2 + lVar11;
        do {
          fVar17 = (float)((uint)*pfVar7 & uVar5);
          if (fVar16 < fVar17) {
            *pfVar13 = *pfVar7 * param_3;
            fVar16 = fVar17;
          }
          pfVar7 = pfVar7 + 1;
          iVar9 = iVar9 + 1;
        } while (iVar9 <= iVar15);
      }
LAB_14b2bc7c8:
      bVar3 = iVar10 <= iVar8;
      iVar10 = iVar4;
      if (bVar3) {
        iVar10 = iVar15;
      }
      pfVar13 = pfVar13 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

// StaticEnum<enum_EWaveTableBitDepth> @ 14b2bc800

UEnum * __cdecl StaticEnum<enum_EWaveTableBitDepth>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWaveTableBitDepth.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UEnum_EWaveTableBitDepth.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableBitDepth,(UObject *)pUVar1,
                       L"EWaveTableBitDepth");
  }
  return Z_Registration_Info_UEnum_EWaveTableBitDepth.OuterSingleton;
}

// StaticEnum<enum_EWaveTableCurve> @ 14b2bc840

UEnum * __cdecl StaticEnum<enum_EWaveTableCurve>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableCurve,(UObject *)pUVar1,
                       L"EWaveTableCurve");
  }
  return Z_Registration_Info_UEnum_EWaveTableCurve.OuterSingleton;
}

// StaticEnum<enum_EWaveTableResolution> @ 14b2bc880

UEnum * __cdecl StaticEnum<enum_EWaveTableResolution>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableResolution,(UObject *)pUVar1,
                       L"EWaveTableResolution");
  }
  return Z_Registration_Info_UEnum_EWaveTableResolution.OuterSingleton;
}

// StaticEnum<enum_EWaveTableSamplingMode> @ 14b2bc8c0

UEnum * __cdecl StaticEnum<enum_EWaveTableSamplingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWaveTableSamplingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UEnum_EWaveTableSamplingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WaveTable_EWaveTableSamplingMode,(UObject *)pUVar1,
                       L"EWaveTableSamplingMode");
  }
  return Z_Registration_Info_UEnum_EWaveTableSamplingMode.OuterSingleton;
}

// StepIndexInterpolator<short> @ 14b2bc900

void __cdecl
WaveTable::UtilitiesPrivate::StepIndexInterpolator<short>
          (TArrayView<short_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  float *pfVar4;
  longlong lVar5;
  
  iVar1 = param_2->ArrayNum;
  iVar2 = param_1->ArrayNum;
  psVar3 = param_1->DataPtr;
  pfVar4 = param_2->DataPtr;
  if (0 < (longlong)iVar1) {
    lVar5 = 0;
    do {
      pfVar4[lVar5] = (float)(int)psVar3[(int)pfVar4[lVar5] % iVar2] * param_3;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  return;
}

// StepIndexInterpolator<float> @ 14b2bc960

void __cdecl
WaveTable::UtilitiesPrivate::StepIndexInterpolator<float>
          (TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  iVar1 = param_2->ArrayNum;
  iVar2 = param_1->ArrayNum;
  pfVar3 = param_1->DataPtr;
  pfVar4 = param_2->DataPtr;
  if (0 < (longlong)iVar1) {
    lVar5 = 0;
    do {
      pfVar4[lVar5] = param_3 * pfVar3[(int)pfVar4[lVar5] % iVar2];
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  return;
}

// Transform<TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_>,TArray<FWaveTableData,TSizedDefaultAllocator<32>_>_&,`FWaveTableBankAssetProxy::FWaveTableBankAssetProxy'::__l2::<lambda_1>_> @ 14b2bc9b0

/* WARNING: Removing unreachable block (ram,0x00014b2bcb63) */

void __cdecl
Algo::
Transform<TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_>,TArray<FWaveTableData,TSizedDefaultAllocator<32>_>_&,_FWaveTableBankAssetProxy::FWaveTableBankAssetProxy_::__l2::<lambda_1>_>
          (TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FWaveTableData,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  int iVar1;
  void *_Src;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FScriptContainerElement local_48 [8];
  ForAnyElementType local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar7 = pFVar8 + 0x98;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0xb8;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FWaveTableBankEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar9) {
      return;
    }
    iVar5 = *(int *)(pFVar7 + 8);
    local_48[0] = pFVar7[-8];
    _Src = *(void **)pFVar7;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = CONCAT44(local_38._4_4_,iVar5);
    if (iVar5 == 0) {
      local_38 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar5,0,&local_40,iVar5,(int *)((longlong)&local_38 + 4));
      memcpy(local_40.Data,_Src,(longlong)iVar5);
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_30 = *(undefined4 *)(pFVar7 + 0x10);
    if (((pFVar2 <= local_48) && (local_48 < pFVar2 + (longlong)param_2->ArrayMax * 0x20)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar2 = (param_2->AllocatorInstance).Data;
    lVar6 = (longlong)iVar5 * 0x20;
    pFVar2[lVar6] = local_48[0];
    *(undefined8 *)(pFVar2 + lVar6 + 8) = 0;
    *(FScriptContainerElement **)(pFVar2 + lVar6 + 8) = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar2 + lVar6 + 0x10) = (undefined4)local_38;
    *(undefined4 *)(pFVar2 + lVar6 + 0x14) = local_38._4_4_;
    local_38 = 0;
    *(undefined4 *)(pFVar2 + lVar6 + 0x18) = local_30;
    pFVar8 = pFVar8 + 0xb8;
    pFVar7 = pFVar7 + 0xb8;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Transform<TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_>,TArray<FWaveTableData,TSizedDefaultAllocator<32>_>_&,`FWaveTableBankAssetProxy::FWaveTableBankAssetProxy'::__l2::<lambda_1>_> @ 14b2bcbb0

/* WARNING: Removing unreachable block (ram,0x00014b2bcd63) */

void __cdecl
Algo::
Transform<TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_>,TArray<FWaveTableData,TSizedDefaultAllocator<32>_>_&,_FWaveTableBankAssetProxy::FWaveTableBankAssetProxy_::__l2::<lambda_1>_>
          (TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FWaveTableData,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  int iVar1;
  void *_Src;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FScriptContainerElement local_48 [8];
  ForAnyElementType local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar7 = pFVar8 + 0x98;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0xb8;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FWaveTableBankEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar9) {
      return;
    }
    iVar5 = *(int *)(pFVar7 + 8);
    local_48[0] = pFVar7[-8];
    _Src = *(void **)pFVar7;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = CONCAT44(local_38._4_4_,iVar5);
    if (iVar5 == 0) {
      local_38 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar5,0,&local_40,iVar5,(int *)((longlong)&local_38 + 4));
      memcpy(local_40.Data,_Src,(longlong)iVar5);
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_30 = *(undefined4 *)(pFVar7 + 0x10);
    if (((pFVar2 <= local_48) && (local_48 < pFVar2 + (longlong)param_2->ArrayMax * 0x20)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    pFVar2 = (param_2->AllocatorInstance).Data;
    lVar6 = (longlong)iVar5 * 0x20;
    pFVar2[lVar6] = local_48[0];
    *(undefined8 *)(pFVar2 + lVar6 + 8) = 0;
    *(FScriptContainerElement **)(pFVar2 + lVar6 + 8) = local_40.Data;
    local_40.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar2 + lVar6 + 0x10) = (undefined4)local_38;
    *(undefined4 *)(pFVar2 + lVar6 + 0x14) = local_38._4_4_;
    local_38 = 0;
    *(undefined4 *)(pFVar2 + lVar6 + 0x18) = local_30;
    pFVar8 = pFVar8 + 0xb8;
    pFVar7 = pFVar7 + 0xb8;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// `scalar_deleting_destructor' @ 14b2bdac0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWaveTableBankAssetProxy,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FWaveTableBankAssetProxy,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2bdb00

void * __thiscall
Audio::TProxyData<FWaveTableBankAssetProxy>::_scalar_deleting_destructor_
          (TProxyData<FWaveTableBankAssetProxy> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2bdb30

void * __thiscall
FWaveTableBankAssetProxy::_scalar_deleting_destructor_(FWaveTableBankAssetProxy *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<FWaveTableData,int>
            ((FWaveTableData *)(this->WaveTableData).AllocatorInstance.Data,
             (this->WaveTableData).ArrayNum);
  pFVar3 = (this->WaveTableData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b2bdbb0

/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

void * __thiscall UWaveTableBank::_scalar_deleting_destructor_(UWaveTableBank *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioProxyDataFactory__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ProxyData).SharedReferenceCount.ReferenceController);
  DestructItems<FWaveTableBankEntry,int>
            ((FWaveTableBankEntry *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum)
  ;
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeWaveTable @ 14b2bef10

void __cdecl EmptyLinkFunctionForGeneratedCodeWaveTable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWaveTableBank @ 14b2bef20

void __cdecl EmptyLinkFunctionForGeneratedCodeWaveTableBank(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWaveTableSettings @ 14b2bef30

void __cdecl EmptyLinkFunctionForGeneratedCodeWaveTableSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWaveTableTransform @ 14b2bef40

void __cdecl EmptyLinkFunctionForGeneratedCodeWaveTableTransform(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWaveTable_init @ 14b2bef50

void __cdecl EmptyLinkFunctionForGeneratedCodeWaveTable_init(void)

{
  return;
}

// GetWaveTableSize @ 14b2bfa10

/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

int __cdecl
WaveTable::GetWaveTableSize(EWaveTableResolution param_1,EWaveTableCurve param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSettings.cpp"
                     ,0x53,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// RatioToIndex @ 14b2c1680

int __cdecl WaveTable::RatioToIndex(float param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_2 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArrayNum > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Public\\WaveTableSettings.h"
                       ,0x15,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (param_1 < 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRatio >= 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Public\\WaveTableSettings.h"
                       ,0x16,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = (int)((float)param_2 * param_1);
  if (param_2 + -1 < (int)((float)param_2 * param_1)) {
    iVar3 = param_2 + -1;
  }
  return iVar3;
}

// Z_Construct_UClass_UWaveTableBank_NoRegister @ 14b2c2cf0

UClass * __cdecl Z_Construct_UClass_UWaveTableBank_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveTableBank.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WaveTable",L"WaveTableBank",
               &Z_Registration_Info_UClass_UWaveTableBank.InnerSingleton,
               UWaveTableBank::StaticRegisterNativesUWaveTableBank,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWaveTableBank>,
               InternalVTableHelperCtorCaller<UWaveTableBank>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveTableBank.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWaveTableSettings @ 14b2c2da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWaveTableSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWaveTableSettings.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWaveTableSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FWaveTableSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWaveTableSettings.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWaveTableSettings.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_WaveTable @ 14b2c2ff0

void __cdecl IMPLEMENT_MODULE_WaveTable(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogWaveTable'' @ 150431c60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWaveTable__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWaveTable);
  return;
}

