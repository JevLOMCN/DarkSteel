// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NISBlueprint
// Functions: 24

// StaticClass @ 14de521e0

UClass * __cdecl UNISLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNISLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NISBlueprint",L"NISLibrary",
               &Z_Registration_Info_UClass_UNISLibrary.InnerSingleton,
               StaticRegisterNativesUNISLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNISLibrary>,InternalVTableHelperCtorCaller<UNISLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNISLibrary.InnerSingleton;
}

// UNISLibrary @ 14de527c0

UNISLibrary * __thiscall UNISLibrary::UNISLibrary(UNISLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNISLibrary__6B_;
  return this;
}

// UNISLibrary @ 14de527f0

UNISLibrary * __thiscall UNISLibrary::UNISLibrary(UNISLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNISLibrary__6B_;
  return this;
}

// ~UNISLibrary @ 14de52820

void __thiscall UNISLibrary::~UNISLibrary(UNISLibrary *this)

{
  *(undefined ***)this = &___7UNISLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetDefaultNISMode @ 14de528c0

UNISMode __cdecl UNISLibrary::GetDefaultNISMode(void)

{
  Type TVar1;
  
  TVar1 = GetNISMinRequiredFeatureLevel();
  return (int)TVar1 <= (int)GMaxRHIFeatureLevel;
}

// GetNISRecommendedScreenPercentage @ 14de528e0

float __cdecl UNISLibrary::GetNISRecommendedScreenPercentage(UNISMode param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  switch(param_1) {
  case Off:
    goto switchD_14de528fd_caseD_0;
  case UltraQuality:
    return __real_429a0000;
  case Quality:
    return __real_42855581;
  case Balanced:
    return __real_426c0000;
  case Performance:
    return __real_42480000;
  case Custom:
    return SavedCustomScreenPercentage;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NIS\\Source\\NISBlueprint\\Private\\NISLibrary.cpp"
                       ,0x6a,
                       L"dear NIS plugin NVIDIA developer, please update this code to handle the new enum values"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
switchD_14de528fd_caseD_0:
    return __real_3f800000;
  }
}

// GetNISScreenPercentageRange @ 14de529a0

void __cdecl UNISLibrary::GetNISScreenPercentageRange(float *param_1,float *param_2)

{
  Type TVar1;
  float fVar2;
  
  TVar1 = GetNISMinRequiredFeatureLevel();
  fVar2 = __real_43480000;
  if ((int)TVar1 <= (int)GMaxRHIFeatureLevel) {
    fVar2 = __real_42c80000;
  }
  *param_1 = 50.0;
  *param_2 = fVar2;
  return;
}

// GetPrivateStaticClass @ 14de529f0

UClass * __cdecl UNISLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNISLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NISBlueprint",L"NISLibrary",
               &Z_Registration_Info_UClass_UNISLibrary.InnerSingleton,
               StaticRegisterNativesUNISLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNISLibrary>,InternalVTableHelperCtorCaller<UNISLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNISLibrary.InnerSingleton;
}

// GetSupportedNISModes @ 14de52ab0

TArray<UNISMode,TSizedDefaultAllocator<32>_> * __cdecl
UNISLibrary::GetSupportedNISModes
          (TArray<UNISMode,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UEnum *this;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  TArray<UNISMode,TSizedDefaultAllocator<32>_> *pTVar7;
  TTuple<FName,__int64> *pTVar8;
  long64 lVar9;
  int iVar10;
  FScriptContainerElement local_38 [8];
  TTuple<FName,__int64> local_30;
  
  iVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (Z_Registration_Info_UEnum_UNISMode.OuterSingleton == (UEnum *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_NISBlueprint();
    Z_Registration_Info_UEnum_UNISMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISMode,(UObject *)pUVar6,L"UNISMode");
  }
  this = Z_Registration_Info_UEnum_UNISMode.OuterSingleton;
  iVar5 = ((Z_Registration_Info_UEnum_UNISMode.OuterSingleton)->Names).NumValues;
  if (0 < iVar5) {
    do {
      if (((iVar10 < 0) || (iVar5 <= iVar10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Names.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xb2d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<UNISMode,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      pTVar8 = UEnum::FNameData::operator[](&this->Names,&local_30,iVar10);
      lVar1 = *(longlong *)&pTVar8->field_0x8;
      lVar9 = UEnum::GetMaxEnumValue(this);
      if (lVar1 != lVar9) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_38[0] = SUB81(lVar1,0);
        if (((pFVar2 <= local_38) && (local_38 < pFVar2 + __return_storage_ptr__->ArrayMax)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<UNISMode,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        (__return_storage_ptr__->AllocatorInstance).Data[iVar5] = local_38[0];
      }
      iVar5 = (this->Names).NumValues;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar5);
  }
  return __return_storage_ptr__;
}

// IsNISModeSupported @ 14de52c70

bool __cdecl UNISLibrary::IsNISModeSupported(UNISMode param_1)

{
  return true;
}

// IsNISSupported @ 14de52c80

bool __cdecl UNISLibrary::IsNISSupported(void)

{
  Type TVar1;
  
  TVar1 = GetNISMinRequiredFeatureLevel();
  return (int)TVar1 <= (int)GMaxRHIFeatureLevel;
}

// SetNISCustomScreenPercentage @ 14de52ca0

void __cdecl UNISLibrary::SetNISCustomScreenPercentage(float param_1)

{
  SavedCustomScreenPercentage = param_1;
  if (bIsCustomMode) {
    SetNISMode(Custom);
    return;
  }
  return;
}

// SetNISMode @ 14de52cc0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UNISLibrary::SetNISMode(UNISMode param_1)

{
  code *pcVar1;
  UEnum *this;
  FName FVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  int iVar6;
  UPackage *pUVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong lVar10;
  FText *this_00;
  IConsoleManager *pIVar11;
  atomic<unsigned_char> *paVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  FString local_78;
  FText local_68;
  FSetContext local_58;
  
  uVar13 = (ulonglong)param_1;
  if (Z_Registration_Info_UEnum_UNISMode.OuterSingleton == (UEnum *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_NISBlueprint();
    Z_Registration_Info_UEnum_UNISMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISMode,(UObject *)pUVar7,L"UNISMode");
  }
  this = Z_Registration_Info_UEnum_UNISMode.OuterSingleton;
  bVar5 = UEnum::IsValidEnumValue(Z_Registration_Info_UEnum_UNISMode.OuterSingleton,uVar13);
  if ((!bVar5) || (uVar8 = UEnum::GetMaxEnumValue(this), uVar8 == uVar13)) {
    FVar2 = SetNISModeInvalidEnumValueError;
    if (Z_Registration_Info_UEnum_UNISMode.OuterSingleton == (UEnum *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_NISBlueprint();
      Z_Registration_Info_UEnum_UNISMode.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISMode,(UObject *)pUVar7,L"UNISMode");
    }
    this_00 = UEnum::GetDisplayNameTextByValue
                        (Z_Registration_Info_UEnum_UNISMode.OuterSingleton,&local_68,uVar13);
    FText::ToString(this_00);
    ::FString::PrintfImpl
              (&local_78,
               L"SetNISMode should not be called with an invalid NISMode enum value (%d) \"%s\"");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar14.Data = local_78.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar14.Data,Error,FVar2);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    return;
  }
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar16 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar11 = IConsoleManager::Get();
    CVarNISEnable =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"r.NIS.Enable",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar16 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar11 = IConsoleManager::Get();
    CVarNISUpscalingEnable =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"r.NIS.Upscaling",1);
    _Init_thread_footer(&::_TSS1);
  }
  bIsCustomMode = param_1 == Custom;
  if ((CVarNISEnable == (IConsoleVariable *)0x0) ||
     (iVar6 = (**(code **)(*(longlong *)CVarNISEnable + 200))(), iVar6 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (CVarNISUpscalingEnable == (IConsoleVariable *)0x0) {
    pcVar9 = "CVarNISUpscalingEnable";
LAB_14de52dc0:
    iVar6 = 0x8b;
    paVar12 = &bGEnsureHasExecuted<_2623679106037841781>;
  }
  else {
    if (CVarNISEnable == (IConsoleVariable *)0x0) {
      pcVar9 = "CVarNISEnable";
      goto LAB_14de52dc0;
    }
    if ((bVar5) && (param_1 != Off)) {
      uVar15 = 1;
    }
    else {
      uVar15 = 0;
    }
    local_58.Tag.ComparisonIndex.Value = 0;
    local_58.Tag.Number = 0;
    local_58.Flags = ECVF_SetByCommandline;
    local_58.PriorityMode = Set;
    local_58.TagMode = Set;
    local_58.MaxPriority = ECVF_SetByConsole;
    local_58.MinPriority = 0x1000000;
    IConsoleVariable::Set(CVarNISUpscalingEnable,uVar15,&local_58);
    if ((char)uVar15 == '\0') {
      return;
    }
    if ((*(int *)(lVar16 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      pIVar11 = IConsoleManager::Get();
      CVarTemporalAAUpscaler =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"r.TemporalAA.Upscaler",1);
      _Init_thread_footer(&::_TSS2);
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (CVarTemporalAAUpscaler,uVar15 ^ 1,(FName)0x0,ECVF_SetByConsole,0x1000000);
    if ((*(int *)(lVar16 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      pIVar11 = IConsoleManager::Get();
      CVarTemporalAAUpsampling =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"r.TemporalAA.Upsampling",1);
      _Init_thread_footer(&::_TSS3);
    }
    IConsoleVariable::SetWithCurrentPriority<int>
              (CVarTemporalAAUpsampling,uVar15 ^ 1,(FName)0x0,ECVF_SetByConsole,0x1000000);
    if ((*(int *)(lVar16 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
      pIVar11 = IConsoleManager::Get();
      CVarScreenPercentage =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"r.ScreenPercentage",1);
      _Init_thread_footer(&::_TSS4);
    }
    if (CVarScreenPercentage != (IConsoleVariable *)0x0) {
      fVar17 = GetNISRecommendedScreenPercentage(param_1);
      IConsoleVariable::SetWithCurrentPriority<float>
                (CVarScreenPercentage,fVar17,(FName)0x0,ECVF_SetByConsole,0x1000000);
      pTVar3 = CVarNISUpscalingAutomaticMipMapLODBias.Ref;
      bVar5 = IsInParallelGameThread();
      if (bVar5) {
LAB_14de52f77:
        lVar10 = 0;
      }
      else {
        bVar5 = IsInGameThread();
        lVar10 = 4;
        if (bVar5) goto LAB_14de52f77;
      }
      if (*(int *)((longlong)pTVar3->ShadowedValue + lVar10) == 0) {
        return;
      }
      if ((*(int *)(lVar16 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
        pIVar11 = IConsoleManager::Get();
        CVarMipMapLodBias =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar11 + 0xc0))(pIVar11,L"r.MipMapLODBias",1);
        _Init_thread_footer(&::_TSS5);
      }
      if (CVarMipMapLodBias != (IConsoleVariable *)0x0) {
        fVar17 = logf(fVar17 * __real_3c23d70a);
        pTVar4 = CVarNISUpscalingAutomaticMipMapLODBiasOffset.Ref;
        fVar17 = fVar17 * __real_3fb8aa3b;
        bVar5 = IsInParallelGameThread();
        if ((bVar5) || (bVar5 = IsInGameThread(), lVar16 = 4, bVar5)) {
          lVar16 = 0;
        }
        IConsoleVariable::SetWithCurrentPriority<float>
                  (CVarMipMapLodBias,fVar17 + *(float *)((longlong)pTVar4->ShadowedValue + lVar16),
                   (FName)0x0,ECVF_SetByConsole,0x1000000);
        return;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2623679106037841758>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NIS\\Source\\NISBlueprint\\Private\\NISLibrary.cpp"
                         ,0xa2,"CVarMipMapLodBias");
      if (!bVar5) {
        return;
      }
      goto code_r0x00014de52fcd;
    }
    pcVar9 = "CVarScreenPercentage";
    iVar6 = 0x9a;
    paVar12 = &bGEnsureHasExecuted<_2623679106037841766>;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar12,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NIS\\Source\\NISBlueprint\\Private\\NISLibrary.cpp"
                     ,iVar6,pcVar9);
  if (!bVar5) {
    return;
  }
code_r0x00014de52fcd:
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// SetNISSharpness @ 14de532e0

void __cdecl UNISLibrary::SetNISSharpness(float param_1)

{
  longlong lVar1;
  IConsoleVariable *pIVar2;
  undefined8 uVar3;
  IConsoleManager *pIVar4;
  ForAnyElementType FVar5;
  undefined1 local_58 [16];
  FString local_48;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar4 = IConsoleManager::Get();
      CVarNISharpness =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.NIS.Sharpness",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (CVarNISharpness != (IConsoleVariable *)0x0) {
    ::FString::PrintfImpl(&local_48,L"%2.2f");
    pIVar2 = CVarNISharpness;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    lVar1 = *(longlong *)CVarNISharpness;
    local_38 = 0xd000000;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0xf000000;
    local_20 = 0x1000000;
    uVar3 = (**(code **)(lVar1 + 0xa8))(CVarNISharpness,local_58,&local_38);
    (**(code **)(lVar1 + 0xb0))(pIVar2,FVar5.Data,uVar3);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUNISLibrary @ 14de53450

void __cdecl UNISLibrary::StaticRegisterNativesUNISLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UNISLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDefaultNISMode @ 14de53590

void __cdecl UNISLibrary::execGetDefaultNISMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  Type TVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar1 = GetNISMinRequiredFeatureLevel();
  *(bool *)param_3 = (int)TVar1 <= (int)GMaxRHIFeatureLevel;
  return;
}

// execGetNISRecommendedScreenPercentage @ 14de535d0

void __cdecl
UNISLibrary::execGetNISRecommendedScreenPercentage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  UNISMode local_res10 [24];
  
  local_res10[0] = Off;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetNISRecommendedScreenPercentage(local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execGetNISScreenPercentageRange @ 14de53660

void __cdecl
UNISLibrary::execGetNISScreenPercentageRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  Type TVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined4 uVar5;
  uchar local_res10 [16];
  uchar local_res20 [8];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar4 = local_res10;
  if (puVar3 != (uchar *)0x0) {
    puVar4 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar3 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar2 = GetNISMinRequiredFeatureLevel();
  uVar5 = __real_43480000;
  if ((int)TVar2 <= (int)GMaxRHIFeatureLevel) {
    uVar5 = __real_42c80000;
  }
  puVar4[0] = '\0';
  puVar4[1] = '\0';
  puVar4[2] = 'H';
  puVar4[3] = 'B';
  *(undefined4 *)puVar3 = uVar5;
  return;
}

// execGetSupportedNISModes @ 14de53770

void __cdecl UNISLibrary::execGetSupportedNISModes(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  UEnum *this;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  TTuple<FName,__int64> *pTVar6;
  long64 lVar7;
  int iVar8;
  FScriptContainerElement local_48 [8];
  ForAnyElementType local_40;
  undefined8 local_38;
  TTuple<FName,__int64> local_30;
  
  iVar8 = 0;
  local_38 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_40.Data = (FScriptContainerElement *)0x0;
  if (Z_Registration_Info_UEnum_UNISMode.OuterSingleton == (UEnum *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_NISBlueprint();
    Z_Registration_Info_UEnum_UNISMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NISBlueprint_UNISMode,(UObject *)pUVar5,L"UNISMode");
  }
  this = Z_Registration_Info_UEnum_UNISMode.OuterSingleton;
  iVar4 = ((Z_Registration_Info_UEnum_UNISMode.OuterSingleton)->Names).NumValues;
  if (0 < iVar4) {
    do {
      if (((iVar8 < 0) || (iVar4 <= iVar8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Names.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xb2d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar6 = UEnum::FNameData::operator[](&this->Names,&local_30,iVar8);
      lVar1 = *(longlong *)&pTVar6->field_0x8;
      lVar7 = UEnum::GetMaxEnumValue(this);
      if (lVar1 != lVar7) {
        local_48[0] = SUB81(lVar1,0);
        if (((local_40.Data <= local_48) && (local_48 < local_40.Data + local_38._4_4_)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar4 = (int)local_38;
        if ((int)local_38 == local_38._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&local_40,(int *)((longlong)&local_38 + 4));
        }
        local_38 = CONCAT44(local_38._4_4_,iVar4 + 1);
        local_40.Data[iVar4] = local_48[0];
      }
      iVar4 = (this->Names).NumValues;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar4);
  }
  if (param_3 != &local_40) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_40.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_38;
    local_40.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_38._4_4_;
    local_38 = 0;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// execIsNISModeSupported @ 14de53990

void __cdecl UNISLibrary::execIsNISModeSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 1;
  return;
}

// execIsNISSupported @ 14de53a10

void __cdecl UNISLibrary::execIsNISSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  Type TVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar1 = GetNISMinRequiredFeatureLevel();
  *(bool *)param_3 = (int)TVar1 <= (int)GMaxRHIFeatureLevel;
  return;
}

// execSetNISCustomScreenPercentage @ 14de53a50

void __cdecl
UNISLibrary::execSetNISCustomScreenPercentage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SavedCustomScreenPercentage = local_res10[0];
  if (bIsCustomMode != false) {
    SetNISMode(Custom);
  }
  return;
}

// execSetNISMode @ 14de53ae0

void __cdecl UNISLibrary::execSetNISMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNISMode local_res10 [24];
  
  local_res10[0] = Off;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetNISMode(local_res10[0]);
  return;
}

// execSetNISSharpness @ 14de53b60

void __cdecl UNISLibrary::execSetNISSharpness(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  IConsoleVariable *pIVar3;
  undefined8 uVar4;
  IConsoleManager *pIVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  undefined4 local_res10 [2];
  undefined1 local_58 [16];
  FString local_48;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar6 = (ulonglong)_tls_index;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar6 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar5 = IConsoleManager::Get();
      CVarNISharpness =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.NIS.Sharpness",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (CVarNISharpness != (IConsoleVariable *)0x0) {
    ::FString::PrintfImpl(&local_48,L"%2.2f");
    pIVar3 = CVarNISharpness;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar7.Data = local_48.Data.AllocatorInstance.Data;
    }
    local_38 = 0xd000000;
    lVar2 = *(longlong *)CVarNISharpness;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0xf000000;
    local_20 = 0x1000000;
    uVar4 = (**(code **)(lVar2 + 0xa8))(CVarNISharpness,local_58,&local_38);
    (**(code **)(lVar2 + 0xb0))(pIVar3,FVar7.Data,uVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

