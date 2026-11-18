// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCommonParser
// Functions: 31

// `dynamic_initializer_for_'ModuleRegistrantInterchangeCommonParser'' @ 141424fa0

void __cdecl _dynamic_initializer_for__ModuleRegistrantInterchangeCommonParser__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "InterchangeCommonParser";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"InterchangeCommonParser",0x17);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FInterchangeCommonParserModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h__Script_InterchangeCommonParser_3859698778'' @ 141424ff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h__Script_InterchangeCommonParser_3859698778__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/InterchangeCommonParser",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h__Script_InterchangeCommonParser_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h__Script_InterchangeCommonParser_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_InterchangeCommonParser'' @ 141425040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_InterchangeCommonParser__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7690f0e5;
  local_res8[0].DeclarationsHash = 0x9ff78f63;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_InterchangeCommonParser,L"/Script/InterchangeCommonParser"
             ,&Z_Registration_Info_UPackage__Script_InterchangeCommonParser,local_res8);
  return;
}

// Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode @ 14e66aec0

UEnum * __cdecl Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode(void)

{
  if (Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.InnerSingleton,
               &Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.InnerSingleton;
}

// Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode @ 14e66af00

UEnum * __cdecl Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode(void)

{
  if (Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.InnerSingleton,
               &Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.InnerSingleton;
}

// Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode @ 14e66af40

UEnum * __cdecl Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode(void)

{
  if (Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.InnerSingleton,
               &Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode_Statics
                ::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FInterchangeCurveKey @ 14e66af80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeCurveKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeCurveKey.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeCurveKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeCurveKey.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FInterchangeCurveKey.InnerSingleton;
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

// EInterchangeCurveInterpMode_StaticEnum @ 14e66b000

UEnum * __cdecl EInterchangeCurveInterpMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCommonParser();
    Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode,
                       (UObject *)pUVar1,L"EInterchangeCurveInterpMode");
  }
  return Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.OuterSingleton;
}

// EInterchangeCurveTangentMode_StaticEnum @ 14e66b040

UEnum * __cdecl EInterchangeCurveTangentMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCommonParser();
    Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode,
                       (UObject *)pUVar1,L"EInterchangeCurveTangentMode");
  }
  return Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.OuterSingleton;
}

// EInterchangeCurveTangentWeightMode_StaticEnum @ 14e66b080

UEnum * __cdecl EInterchangeCurveTangentWeightMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCommonParser();
    Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode,
                       (UObject *)pUVar1,L"EInterchangeCurveTangentWeightMode");
  }
  return Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.OuterSingleton;
}

// NewStructOps @ 14e66b0c0

void * __cdecl Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeCurveKey,&UE::CoreUObject::Private::Construct<FInterchangeCurveKey>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeCurveKey>,&UE::CoreUObject::Private::Destruct<FInterchangeCurveKey>,&UE::CoreUObject::Private::Copy<FInterchangeCurveKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14e66b100

void * __cdecl Z_Construct_UScriptStruct_FInterchangeCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeCurve,&UE::CoreUObject::Private::Construct<FInterchangeCurve>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeCurve>,&UE::CoreUObject::Private::Destruct<FInterchangeCurve>,&UE::CoreUObject::Private::Copy<FInterchangeCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_InterchangeCommonParser @ 14e66b140

UPackage * __cdecl Z_Construct_UPackage__Script_InterchangeCommonParser(void)

{
  if (Z_Registration_Info_UPackage__Script_InterchangeCommonParser.OuterSingleton == (UPackage *)0x0
     ) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_InterchangeCommonParser.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_InterchangeCommonParser.OuterSingleton;
}

// NewStructOps @ 14e66b180

void * __cdecl Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FInterchangeStepCurve,&UE::CoreUObject::Private::Construct<FInterchangeStepCurve>,&UE::CoreUObject::Private::ConstructForTests<FInterchangeStepCurve>,&UE::CoreUObject::Private::Destruct<FInterchangeStepCurve>,&UE::CoreUObject::Private::Copy<FInterchangeStepCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14e66b1d0

void * __thiscall
FInterchangeCommonParserModule::_scalar_deleting_destructor_
          (FInterchangeCommonParserModule *this,uint param_1)

{
  *this = (FInterchangeCommonParserModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator<<<FInterchangeCurveKey,TSizedDefaultAllocator<32>_> @ 14e66b560

FArchive * __cdecl
operator<<<FInterchangeCurveKey,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FInterchangeCurveKey,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FInterchangeCurveKey *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x1c);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x92493)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              FInterchangeCurveKey::Serialize
                        ((FInterchangeCurveKey *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x1c),param_1);
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FInterchangeCurveKey,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x41c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FInterchangeCurveKey *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x1c);
              DefaultConstructItems<FInterchangeCurveKey,int>(this,1);
              FInterchangeCurveKey::Serialize(this,param_1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14e66b570

FArchive * __cdecl
operator<<<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *param_2)

{
  TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::Serialize(param_2,param_1);
  return param_1;
}

// operator<<<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e66b5a0

FArchive * __cdecl
operator<<<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *param_2)

{
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::Serialize(param_2,param_1);
  return param_1;
}

// operator<<<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e66b5d0

FArchive * __cdecl
operator<<<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,TOptional<TArray<float,TSizedDefaultAllocator<32>_>_> *param_2)

{
  TOptional<TArray<float,TSizedDefaultAllocator<32>_>_>::Serialize(param_2,param_1);
  return param_1;
}

// operator<<<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e66b600

FArchive * __cdecl
operator<<<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,TOptional<TArray<FString,TSizedDefaultAllocator<32>_>_> *param_2)

{
  TOptional<TArray<FString,TSizedDefaultAllocator<32>_>_>::Serialize(param_2,param_1);
  return param_1;
}

// operator<<<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e66b630

FArchive * __cdecl
operator<<<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,TOptional<TArray<bool,TSizedDefaultAllocator<32>_>_> *param_2)

{
  TOptional<TArray<bool,TSizedDefaultAllocator<32>_>_>::Serialize(param_2,param_1);
  return param_1;
}

// DefaultConstructItems<FInterchangeCurveKey,int> @ 14e66b660

void __cdecl DefaultConstructItems<FInterchangeCurveKey,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 2);
    do {
      *(undefined2 *)(puVar1 + -2) = 0x303;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      puVar1 = puVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FInterchangeStepCurve,int> @ 14e66b6a0

void __cdecl DefaultConstructItems<FInterchangeStepCurve,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined4 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x10) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined4 *)(lVar1 + 0x2c) = 0;
      *(undefined4 *)(lVar1 + 0x30) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined4 *)(lVar1 + 0x4c) = 0;
      *(undefined4 *)(lVar1 + 0x50) = 0xffffffff;
      lVar1 = lVar1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// StaticEnum<enum_EInterchangeCurveInterpMode> @ 14e66d8d0

UEnum * __cdecl StaticEnum<enum_EInterchangeCurveInterpMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCommonParser();
    Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode,
                       (UObject *)pUVar1,L"EInterchangeCurveInterpMode");
  }
  return Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.OuterSingleton;
}

// StaticEnum<enum_EInterchangeCurveTangentMode> @ 14e66d910

UEnum * __cdecl StaticEnum<enum_EInterchangeCurveTangentMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCommonParser();
    Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode,
                       (UObject *)pUVar1,L"EInterchangeCurveTangentMode");
  }
  return Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.OuterSingleton;
}

// StaticEnum<enum_EInterchangeCurveTangentWeightMode> @ 14e66d950

UEnum * __cdecl StaticEnum<enum_EInterchangeCurveTangentWeightMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCommonParser();
    Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode,
                       (UObject *)pUVar1,L"EInterchangeCurveTangentWeightMode");
  }
  return Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.OuterSingleton;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeCommonAnimationPayload @ 14e66ed50

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeCommonAnimationPayload(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterchangeCommonParser_init @ 14e66ed60

void __cdecl EmptyLinkFunctionForGeneratedCodeInterchangeCommonParser_init(void)

{
  return;
}

// Z_Construct_UScriptStruct_FInterchangeCurve @ 14e6715e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInterchangeCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInterchangeStepCurve @ 14e671660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterchangeStepCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeStepCurve.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInterchangeStepCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInterchangeStepCurve.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FInterchangeStepCurve.InnerSingleton;
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

// IMPLEMENT_MODULE_InterchangeCommonParser @ 14e6716e0

void __cdecl IMPLEMENT_MODULE_InterchangeCommonParser(void)

{
  return;
}

