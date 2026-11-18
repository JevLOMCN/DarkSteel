// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSSBlueprint
// Functions: 48

// StaticClass @ 14de2bc60

UClass * __cdecl UDLSSLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSSBlueprint",L"DLSSLibrary",
               &Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton,
               StaticRegisterNativesUDLSSLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDLSSLibrary>,InternalVTableHelperCtorCaller<UDLSSLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton;
}

// UDLSSLibrary @ 14de2cc40

UDLSSLibrary * __thiscall UDLSSLibrary::UDLSSLibrary(UDLSSLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDLSSLibrary__6B_;
  return this;
}

// UDLSSLibrary @ 14de2cc70

UDLSSLibrary * __thiscall UDLSSLibrary::UDLSSLibrary(UDLSSLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDLSSLibrary__6B_;
  return this;
}

// ~UDLSSLibrary @ 14de2cca0

void __thiscall UDLSSLibrary::~UDLSSLibrary(UDLSSLibrary *this)

{
  *(undefined ***)this = &___7UDLSSLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// EnableDLAA @ 14de2cee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDLSSLibrary::EnableDLAA(bool param_1)

{
  bool bVar1;
  
  bVar1 = TryInitDLSSLibrary();
  if (!bVar1) {
    if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
      return;
    }
    return;
  }
  if ((DLSSSRSupport == Supported) && (param_1)) {
    bDLAAEnabledDeprecated = true;
    EnableDLSS(true);
    return;
  }
  bDLAAEnabledDeprecated = false;
  SetDLSSMode((UObject *)0x0,CurrentDLSSModeDeprecated);
  return;
}

// EnableDLSS @ 14de2cf60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UDLSSLibrary::EnableDLSS(bool param_1)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  int *piVar3;
  FSetContext local_48;
  FSetContext local_2c;
  
  bVar1 = TryInitDLSSLibrary();
  if (bVar1) {
    if (DLSSSRSupport == Supported) {
      piVar3 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c);
      if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar2 = IConsoleManager::Get();
        CVarDLSSEnable =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.NGX.DLSS.Enable",1);
        _Init_thread_footer(&::_TSS0);
      }
      if (CVarDLSSEnable != (IConsoleVariable *)0x0) {
        local_48.Flags = ECVF_SetByCommandline;
        local_48.Tag.ComparisonIndex.Value = 0;
        local_48.Tag.Number = 0;
        local_48.PriorityMode = Set;
        local_48.TagMode = Set;
        local_48.MaxPriority = ECVF_SetByConsole;
        local_48.MinPriority = 0x1000000;
        IConsoleVariable::Set(CVarDLSSEnable,(uint)param_1,&local_48);
        if (param_1) {
          if ((*piVar3 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
            pIVar2 = IConsoleManager::Get();
            CVarTemporalAAUpscaler =
                 (IConsoleVariable *)
                 (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.TemporalAA.Upscaler",1);
            _Init_thread_footer(&::_TSS1);
          }
          local_2c.Tag.ComparisonIndex.Value = 0;
          local_2c.Tag.Number = 0;
          local_2c.Flags = ECVF_SetByCommandline;
          local_2c.PriorityMode = Set;
          local_2c.TagMode = Set;
          local_2c.MaxPriority = ECVF_SetByConsole;
          local_2c.MinPriority = 0x1000000;
          IConsoleVariable::Set(CVarTemporalAAUpscaler,1,&local_2c);
          EnableDLSSRR(bDenoisingRequested);
          return;
        }
        bVar1 = IsDLSSRREnabled();
        if (bVar1) {
          EnableDLSSRR(false);
          bDenoisingRequested = true;
          if (2 < (byte)LogDLSSBlueprint._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
          }
        }
      }
    }
  }
  else if (1 < (byte)LogDLSSBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    return;
  }
  return;
}

// EnableDLSSRR @ 14de2d190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UDLSSLibrary::EnableDLSSRR(bool param_1)

{
  bool bVar1;
  int iVar2;
  IConsoleManager *pIVar3;
  longlong *plVar4;
  IConsoleVariable *pIVar5;
  int *piVar6;
  FSetContext local_48;
  FSetContext local_2c;
  
  bVar1 = TryInitDLSSLibrary();
  if (bVar1) {
    if (DLSSRRSupport == Supported) {
      piVar6 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c);
      bDenoisingRequested = param_1;
      if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar3 = IConsoleManager::Get();
        CVarDLSSRREnable =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.NGX.DLSS.DenoiserMode",1);
        _Init_thread_footer(&::_TSS0);
      }
      iVar2 = (**(code **)(*(longlong *)CVarDLSSRREnable + 200))();
      if ((iVar2 != 0) != param_1) {
        if (param_1) {
          bVar1 = IsDLSSEnabled();
          if (!bVar1) {
            return;
          }
          local_48.Flags = ECVF_SetByCode;
          local_48.PriorityMode = Set;
          local_48.Tag.ComparisonIndex.Value = 0;
          local_48.Tag.Number = 0;
          local_48.TagMode = Set;
          local_48.MaxPriority = ECVF_SetByConsole;
          local_48.MinPriority = 0x1000000;
          IConsoleVariable::Set(CVarDLSSRREnable,1,&local_48);
          pIVar3 = IConsoleManager::Get();
          plVar4 = (longlong *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Shadow.Denoiser",1);
          PreviousShadowDenoiser = (**(code **)(*plVar4 + 200))(plVar4);
          pIVar3 = IConsoleManager::Get();
          pIVar5 = (IConsoleVariable *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Shadow.Denoiser",1);
          local_48.Flags = ECVF_SetByCode;
          local_48.PriorityMode = Set;
          local_48.Tag.ComparisonIndex.Value = 0;
          local_48.Tag.Number = 0;
          local_48.TagMode = Set;
          local_48.MaxPriority = ECVF_SetByConsole;
          local_48.MinPriority = 0x1000000;
          IConsoleVariable::Set(pIVar5,0,&local_48);
          pIVar3 = IConsoleManager::Get();
          plVar4 = (longlong *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))
                             (pIVar3,L"r.Lumen.Reflections.ScreenSpaceReconstruction",1);
          PreviousLumenSSR = (**(code **)(*plVar4 + 200))(plVar4);
          pIVar3 = IConsoleManager::Get();
          plVar4 = (longlong *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Lumen.Reflections.Temporal",1)
          ;
          PreviousLumenTemporal = (**(code **)(*plVar4 + 200))(plVar4);
          pIVar3 = IConsoleManager::Get();
          pIVar5 = (IConsoleVariable *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))
                             (pIVar3,L"r.Lumen.Reflections.ScreenSpaceReconstruction",1);
          local_48.Flags = ECVF_SetByCode;
          local_48.PriorityMode = Set;
          local_48.Tag.ComparisonIndex.Value = 0;
          local_48.Tag.Number = 0;
          local_48.TagMode = Set;
          local_48.MaxPriority = ECVF_SetByConsole;
          local_48.MinPriority = 0x1000000;
          IConsoleVariable::Set(pIVar5,0,&local_48);
          pIVar3 = IConsoleManager::Get();
          pIVar5 = (IConsoleVariable *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Lumen.Reflections.Temporal",1)
          ;
          local_48.Flags = ECVF_SetByCode;
          local_48.PriorityMode = Set;
          local_48.Tag.ComparisonIndex.Value = 0;
          local_48.Tag.Number = 0;
          local_48.TagMode = Set;
          local_48.MaxPriority = ECVF_SetByConsole;
          local_48.MinPriority = 0x1000000;
          IConsoleVariable::Set(pIVar5,0,&local_48);
          if ((*piVar6 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
            pIVar3 = IConsoleManager::Get();
            CVarTemporalAAUpscaler =
                 (IConsoleVariable *)
                 (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.TemporalAA.Upscaler",1);
            _Init_thread_footer(&::_TSS1);
          }
          local_2c.Flags = ECVF_SetByCommandline;
          local_2c.PriorityMode = Set;
          local_2c.Tag.ComparisonIndex.Value = 0;
          local_2c.Tag.Number = 0;
          local_2c.TagMode = Set;
          local_2c.MaxPriority = ECVF_SetByConsole;
          local_2c.MinPriority = 0x1000000;
          IConsoleVariable::Set(CVarTemporalAAUpscaler,1,&local_2c);
          pIVar3 = IConsoleManager::Get();
          plVar4 = (longlong *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))
                             (pIVar3,L"r.Lumen.Reflections.BilateralFilter",1);
          PreviousLumenBilateralFilter = (**(code **)(*plVar4 + 200))(plVar4);
          pIVar3 = IConsoleManager::Get();
          pIVar5 = (IConsoleVariable *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))
                             (pIVar3,L"r.Lumen.Reflections.BilateralFilter",1);
          iVar2 = 0;
        }
        else {
          local_2c.Flags = ECVF_SetByCode;
          local_2c.PriorityMode = Set;
          local_2c.Tag.ComparisonIndex.Value = 0;
          local_2c.Tag.Number = 0;
          local_2c.TagMode = Set;
          local_2c.MaxPriority = ECVF_SetByConsole;
          local_2c.MinPriority = 0x1000000;
          IConsoleVariable::Set(CVarDLSSRREnable,0,&local_2c);
          pIVar3 = IConsoleManager::Get();
          pIVar5 = (IConsoleVariable *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Shadow.Denoiser",1);
          local_2c.Flags = ECVF_SetByCode;
          local_2c.PriorityMode = Set;
          local_2c.Tag.ComparisonIndex.Value = 0;
          local_2c.Tag.Number = 0;
          local_2c.TagMode = Set;
          local_2c.MaxPriority = ECVF_SetByConsole;
          local_2c.MinPriority = 0x1000000;
          IConsoleVariable::Set(pIVar5,PreviousShadowDenoiser,&local_2c);
          pIVar3 = IConsoleManager::Get();
          pIVar5 = (IConsoleVariable *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))
                             (pIVar3,L"r.Lumen.Reflections.ScreenSpaceReconstruction",1);
          local_2c.Flags = ECVF_SetByCode;
          local_2c.PriorityMode = Set;
          local_2c.Tag.ComparisonIndex.Value = 0;
          local_2c.Tag.Number = 0;
          local_2c.TagMode = Set;
          local_2c.MaxPriority = ECVF_SetByConsole;
          local_2c.MinPriority = 0x1000000;
          IConsoleVariable::Set(pIVar5,PreviousLumenSSR,&local_2c);
          pIVar3 = IConsoleManager::Get();
          pIVar5 = (IConsoleVariable *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Lumen.Reflections.Temporal",1)
          ;
          local_2c.Flags = ECVF_SetByCode;
          local_2c.PriorityMode = Set;
          local_2c.Tag.ComparisonIndex.Value = 0;
          local_2c.Tag.Number = 0;
          local_2c.TagMode = Set;
          local_2c.MaxPriority = ECVF_SetByConsole;
          local_2c.MinPriority = 0x1000000;
          IConsoleVariable::Set(pIVar5,PreviousLumenTemporal,&local_2c);
          pIVar3 = IConsoleManager::Get();
          pIVar5 = (IConsoleVariable *)
                   (**(code **)((longlong)*pIVar3 + 0xc0))
                             (pIVar3,L"r.Lumen.Reflections.BilateralFilter",1);
          iVar2 = PreviousLumenBilateralFilter;
        }
        IConsoleVariable::SetWithCurrentPriority<int>
                  (pIVar5,iVar2,(FName)0x0,ECVF_SetByConsole,0x1000000);
      }
    }
  }
  else if (1 < (byte)LogDLSSBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    return;
  }
  return;
}

// GetDLSSMinimumDriverVersion @ 14de2d740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDLSSLibrary::GetDLSSMinimumDriverVersion(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = TryInitDLSSLibrary();
  if ((!bVar1) && (1 < (byte)LogDLSSBlueprint._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
  }
  *param_1 = MinDLSSSRDriverVersionMajor;
  *param_2 = MinDLSSSRDriverVersionMinor;
  return;
}

// GetDLSSMode @ 14de2d7a0

/* WARNING: Enum "Type": Some values do not have unique names */

UDLSSMode __cdecl UDLSSLibrary::GetDLSSMode(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  IConsoleManager *pIVar4;
  int *piVar5;
  bool bVar6;
  
  bVar2 = TryInitDLSSLibrary();
  if (!bVar2) {
    if ((byte)LogDLSSBlueprint._0_1_ < 2) {
      return Off;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    return Off;
  }
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar4 = IConsoleManager::Get();
    CVarTemporalAAUpscaler =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.TemporalAA.Upscaler",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((CVarTemporalAAUpscaler == (IConsoleVariable *)0x0) ||
     (iVar3 = (**(code **)(*(longlong *)CVarTemporalAAUpscaler + 200))(), iVar3 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  bVar6 = DLSSSRSupport == Supported;
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pIVar4 = IConsoleManager::Get();
    CVarDLSSEnable =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.NGX.DLSS.Enable",1);
    _Init_thread_footer(&::_TSS1);
  }
  if ((CVarDLSSEnable == (IConsoleVariable *)0x0) ||
     (iVar3 = (**(code **)(*(longlong *)CVarDLSSEnable + 200))(), iVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((bDLAAEnabledDeprecated == false) && (bVar2)) && (bVar6)) && (bVar1)) {
    return CurrentDLSSModeDeprecated;
  }
  return Off;
}

// GetDLSSModeInformation @ 14de2d950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

void __cdecl
UDLSSLibrary::GetDLSSModeInformation
          (UDLSSMode param_1,TVector2<double> *param_2,bool *param_3,float *param_4,bool *param_5,
          float *param_6,float *param_7,float *param_8)

{
  bool *pbVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  EDLSSQualityMode EVar6;
  float fVar7;
  
  pfVar4 = param_8;
  pfVar3 = param_7;
  pfVar2 = param_6;
  pbVar1 = param_5;
  *param_4 = 0.0;
  *param_5 = false;
  *param_6 = 50.0;
  *param_7 = 200.0;
  *param_8 = 0.0;
  bVar5 = TryInitDLSSLibrary();
  if (!bVar5) {
    if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    }
    *param_3 = false;
    return;
  }
  bVar5 = IsDLSSModeSupported(param_1);
  *param_3 = bVar5;
  if (param_1 == Off) {
    return;
  }
  if (bVar5) {
    if (param_1 != Auto) {
      EVar6 = ToEDLSSQualityMode(param_1);
      goto LAB_14de2daa3;
    }
  }
  else {
    if (param_1 != Auto) {
      return;
    }
    bVar5 = TryInitDLSSLibrary();
    if (!bVar5) {
      if ((byte)LogDLSSBlueprint._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
      return;
    }
    bVar5 = TryInitDLSSLibrary();
    if (!bVar5) {
      if ((byte)LogDLSSBlueprint._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
      return;
    }
    if (DLSSSRSupport != Supported) {
      return;
    }
  }
  FDLSSUpscaler::GetAutoQualityModeFromPixels(DLSSUpscaler,(int)&param_5);
  EVar6 = (EDLSSQualityMode)param_5;
  if (param_5._4_1_ == '\0') {
    return;
  }
LAB_14de2daa3:
  bVar5 = FDLSSUpscaler::IsFixedResolutionFraction(DLSSUpscaler,EVar6);
  *pbVar1 = bVar5;
  fVar7 = FDLSSUpscaler::GetOptimalResolutionFractionForQuality(DLSSUpscaler,EVar6);
  *param_4 = fVar7 * __real_42c80000;
  fVar7 = FDLSSUpscaler::GetMinResolutionFractionForQuality(DLSSUpscaler,EVar6);
  *pfVar2 = fVar7 * __real_42c80000;
  fVar7 = FDLSSUpscaler::GetMaxResolutionFractionForQuality(DLSSUpscaler,EVar6);
  *pfVar3 = fVar7 * __real_42c80000;
  *pfVar4 = 0.35;
  return;
}

// GetDLSSOnScreenMessages @ 14de2db50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UDLSSLibrary::GetDLSSOnScreenMessages
          (TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
           *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  FText *pFVar5;
  UPackage *pUVar6;
  FString *this;
  char cVar7;
  FText local_res10;
  TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_const_&> local_f8;
  FText *local_e8;
  FText local_e0;
  FTextFormat local_c8;
  uint *local_b8;
  FText *local_b0;
  FText local_a8;
  FTextFormat local_98;
  FText local_88;
  FTextFormat local_78;
  FString local_68;
  FText local_58;
  FTextFormat local_48;
  FText local_38;
  FText local_28;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSSBlueprint\\Private\\DLSSLibrary.cpp"
                         ,0x54,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = TryInitDLSSLibrary();
  if (bVar2) {
    pUVar4 = Z_Construct_UClass_UDLSSOverrideSettings_NoRegister();
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x1 == '\x02') {
      pUVar4 = Z_Construct_UClass_UDLSSSettings_NoRegister();
      if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar4);
      }
      cVar7 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0xf;
    }
    else {
      pUVar4 = Z_Construct_UClass_UDLSSOverrideSettings_NoRegister();
      if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar4);
      }
      cVar7 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x1 == '\0';
    }
    if (cVar7 != '\0') {
      if (DLSSErrorState.bIsDLSSModeUnsupported != false) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"FDLSSBlueprintModule",
                            L"DLSSOnScreenDebugSetModeUnsupportedDLSSMode",
                            L"DLSS Error: The DLSS mode \"{0}\" is not supported. This error can be avoided by calling SetDLSSMode({0}) only if IsDLSSModeSupported({0}) returns true."
                           );
        FTextFormat::FTextFormat(&local_c8,pFVar5,Default);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        if (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton == (UEnum *)0x0) {
          pUVar6 = Z_Construct_UPackage__Script_DLSSBlueprint();
          Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton =
               GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode,(UObject *)pUVar6,
                             L"UDLSSMode");
        }
        pFVar5 = UEnum::GetDisplayNameTextByValue
                           (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton,&local_38,
                            (ulonglong)DLSSErrorState.InvalidDLSSMode);
        local_78.TextFormatData.Object = local_c8.TextFormatData.Object;
        local_78.TextFormatData.SharedReferenceCount.ReferenceController =
             local_c8.TextFormatData.SharedReferenceCount.ReferenceController;
        if (local_c8.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format<FText>(&local_e0,&local_78,pFVar5);
        local_f8.Value = &local_res10;
        local_res10.TextData.Reference._0_1_ = 2;
        local_e8 = &local_e0;
        TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_const_&>_>
                  (param_1,(TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_const_&>
                            *)&stack0x00000020,(bool *)&local_f8.Value);
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.TextFormatData.SharedReferenceCount.ReferenceController);
      }
      this = FWindowsPlatformMisc::GetPrimaryGPUBrand(&local_68);
      iVar3 = ::FString::Find(this,L"NVIDIA",6,IgnoreCase,FromStart,-1);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((iVar3 == -1) || (DLSSSRSupport == Supported)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (DLSSSRSupport == NotSupportedIncompatibleAPICaptureToolActive) {
        pUVar4 = Z_Construct_UClass_UDLSSOverrideSettings_NoRegister();
        if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar4);
        }
        if (*(char *)((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr + 1) == '\0') {
          return;
        }
      }
      if (bVar2) {
        pFVar5 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"FDLSSBlueprintModule",L"DLSSOnScreenDebugDLSSNotSupported",
                            L"DLSS Information: DLSS is not supported due to {0}.Please see the various LogDLSS* categories in the Developer Tools -> Output Log for further detail."
                           );
        FTextFormat::FTextFormat(&local_98,pFVar5,Default);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        if (Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton == (UEnum *)0x0) {
          pUVar6 = Z_Construct_UPackage__Script_DLSSBlueprint();
          Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton =
               GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSSupport,(UObject *)pUVar6,
                             L"UDLSSSupport");
        }
        pFVar5 = UEnum::GetDisplayNameTextByValue
                           (Z_Registration_Info_UEnum_UDLSSSupport.OuterSingleton,&local_28,
                            (ulonglong)DLSSSRSupport);
        local_48.TextFormatData.Object = local_98.TextFormatData.Object;
        local_48.TextFormatData.SharedReferenceCount.ReferenceController =
             local_98.TextFormatData.SharedReferenceCount.ReferenceController;
        if (local_98.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_98.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_98.TextFormatData.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format<FText>(&local_a8,&local_48,pFVar5);
        local_b8 = &local_res10.Flags;
        local_res10.Flags._0_1_ = 1;
        local_b0 = &local_a8;
        TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_const_&>_>
                  (param_1,&local_f8,(bool *)&local_b8);
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.TextFormatData.SharedReferenceCount.ReferenceController);
      }
    }
  }
  return;
}

// GetDLSSRRMinimumDriverVersion @ 14de2ded0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDLSSLibrary::GetDLSSRRMinimumDriverVersion(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = TryInitDLSSLibrary();
  if ((!bVar1) && (1 < (byte)LogDLSSBlueprint._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
  }
  *param_1 = MinDLSSRRDriverVersionMajor;
  *param_2 = MinDLSSRRDriverVersionMinor;
  return;
}

// GetDLSSScreenPercentageRange @ 14de2df30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDLSSLibrary::GetDLSSScreenPercentageRange(float *param_1,float *param_2)

{
  float fVar1;
  bool bVar2;
  FStaticBasicLogRecord *pFVar3;
  
  bVar2 = TryInitDLSSLibrary();
  if (bVar2) {
    bVar2 = TryInitDLSSLibrary();
    if (bVar2) {
      bVar2 = TryInitDLSSLibrary();
      if (bVar2) {
        if (DLSSSRSupport == Supported) {
          *param_1 = FDLSSUpscaler::MinDynamicResolutionFraction * __real_42c80000;
          *param_2 = FDLSSUpscaler::MaxDynamicResolutionFraction * __real_42c80000;
          return;
        }
        goto LAB_14de2df65;
      }
      if ((byte)LogDLSSBlueprint._0_1_ < 2) goto LAB_14de2df65;
      pFVar3 = &::LOG_Static;
    }
    else {
      if ((byte)LogDLSSBlueprint._0_1_ < 2) goto LAB_14de2df65;
      pFVar3 = &::LOG_Static;
    }
  }
  else {
    if ((byte)LogDLSSBlueprint._0_1_ < 2) goto LAB_14de2df65;
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar3,(FLogCategoryBase *)&LogDLSSBlueprint);
LAB_14de2df65:
  fVar1 = __real_42c80000;
  *param_1 = 100.0;
  *param_2 = fVar1;
  return;
}

// GetDefaultDLSSMode @ 14de2e010

/* WARNING: Enum "Type": Some values do not have unique names */

UDLSSMode __cdecl UDLSSLibrary::GetDefaultDLSSMode(void)

{
  bool bVar1;
  
  bVar1 = TryInitDLSSLibrary();
  if (bVar1) {
    bVar1 = TryInitDLSSLibrary();
    if (bVar1) {
      bVar1 = TryInitDLSSLibrary();
      if (bVar1) {
        return DLSSSRSupport == Supported;
      }
      if (1 < (byte)LogDLSSBlueprint._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
      }
    }
    else if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
      return Off;
    }
  }
  else if (1 < (byte)LogDLSSBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    return Off;
  }
  return Off;
}

// GetPrivateStaticClass @ 14de2e0c0

UClass * __cdecl UDLSSLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DLSSBlueprint",L"DLSSLibrary",
               &Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton,
               StaticRegisterNativesUDLSSLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDLSSLibrary>,InternalVTableHelperCtorCaller<UDLSSLibrary>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDLSSLibrary.InnerSingleton;
}

// GetSupportedDLSSModes @ 14de2e180

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UDLSSMode,TSizedDefaultAllocator<32>_> * __cdecl
UDLSSLibrary::GetSupportedDLSSModes
          (TArray<UDLSSMode,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UEnum *this;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  TArray<UDLSSMode,TSizedDefaultAllocator<32>_> *pTVar7;
  TTuple<FName,__int64> *pTVar8;
  long64 lVar9;
  int iVar10;
  FScriptContainerElement local_38 [8];
  TTuple<FName,__int64> local_30;
  
  iVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar4 = TryInitDLSSLibrary();
  if (bVar4) {
    if (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton == (UEnum *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_DLSSBlueprint();
      Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode,(UObject *)pUVar6,L"UDLSSMode");
    }
    this = Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton;
    iVar5 = ((Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton)->Names).NumValues;
    if (0 < iVar5) {
      do {
        if (((iVar10 < 0) || (iVar5 <= iVar10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xb2d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<UDLSSMode,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        pTVar8 = UEnum::FNameData::operator[](&this->Names,&local_30,iVar10);
        lVar1 = *(longlong *)&pTVar8->field_0x8;
        lVar9 = UEnum::GetMaxEnumValue(this);
        if (lVar1 != lVar9) {
          local_38[0] = SUB81(lVar1,0);
          bVar4 = IsDLSSModeSupported((UDLSSMode)local_38[0]);
          if (bVar4) {
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar2 <= local_38) && (local_38 < pFVar2 + __return_storage_ptr__->ArrayMax)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar7 = (TArray<UDLSSMode,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
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
        }
        iVar5 = (this->Names).NumValues;
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar5);
    }
  }
  else if (1 < (byte)LogDLSSBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// IsDLAAEnabled @ 14de2e3b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDLSSLibrary::IsDLAAEnabled(void)

{
  bool bVar1;
  
  bVar1 = TryInitDLSSLibrary();
  if (bVar1) {
    if ((DLSSSRSupport == Supported) && (bDLAAEnabledDeprecated != false)) {
      return true;
    }
  }
  else if (1 < (byte)LogDLSSBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
  }
  return false;
}

// IsDLSSEnabled @ 14de2e400

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDLSSLibrary::IsDLSSEnabled(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  IConsoleManager *pIVar4;
  
  bVar2 = TryInitDLSSLibrary();
  if (!bVar2) {
    if ((byte)LogDLSSBlueprint._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    return false;
  }
  bVar2 = DLSSSRSupport == Supported;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar4 = IConsoleManager::Get();
    CVarDLSSEnable =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.NGX.DLSS.Enable",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((CVarDLSSEnable == (IConsoleVariable *)0x0) ||
     (iVar3 = (**(code **)(*(longlong *)CVarDLSSEnable + 200))(), iVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar2) && (bVar1)) {
    return true;
  }
  return false;
}

// IsDLSSModeSupported @ 14de2e4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

bool __cdecl UDLSSLibrary::IsDLSSModeSupported(UDLSSMode param_1)

{
  UEnum *this;
  FName FVar1;
  bool bVar2;
  EDLSSQualityMode EVar3;
  UPackage *pUVar4;
  ulonglong uVar5;
  FText *this_00;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FString local_28;
  FText local_18;
  
  uVar6 = (ulonglong)param_1;
  if (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_DLSSBlueprint();
    Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode,(UObject *)pUVar4,L"UDLSSMode");
  }
  this = Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton;
  bVar2 = UEnum::IsValidEnumValue(Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton,uVar6);
  if ((bVar2) && (uVar5 = UEnum::GetMaxEnumValue(this), uVar5 != uVar6)) {
    if (param_1 == Off) {
      return true;
    }
    bVar2 = TryInitDLSSLibrary();
    if (bVar2) {
      bVar2 = IsDLSSSupported();
      if (bVar2) {
        if (param_1 == Auto) {
          return true;
        }
        EVar3 = ToEDLSSQualityMode(param_1);
        bVar2 = FDLSSUpscaler::IsQualityModeSupported(DLSSUpscaler,EVar3);
        return bVar2;
      }
    }
    else if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
      return false;
    }
  }
  else {
    FVar1 = IsDLSSModeSupportedInvalidEnumValueError;
    if (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton == (UEnum *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_DLSSBlueprint();
      Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode,(UObject *)pUVar4,L"UDLSSMode");
    }
    this_00 = UEnum::GetDisplayNameTextByValue
                        (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton,&local_18,uVar6);
    FText::ToString(this_00);
    ::FString::PrintfImpl
              (&local_28,
               L"IsDLSSModeSupported should not be called with an invalid DLSSMode enum value (%d) \"%s\""
              );
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar7.Data,Error,FVar1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return false;
}

// IsDLSSRREnabled @ 14de2e6b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDLSSLibrary::IsDLSSRREnabled(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  IConsoleManager *pIVar4;
  
  bVar2 = TryInitDLSSLibrary();
  if (!bVar2) {
    if ((byte)LogDLSSBlueprint._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    return false;
  }
  bVar2 = DLSSSRSupport == Supported;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar4 = IConsoleManager::Get();
    CVarDLSSDenoiserMode =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.NGX.DLSS.DenoiserMode",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((CVarDLSSDenoiserMode == (IConsoleVariable *)0x0) ||
     (iVar3 = (**(code **)(*(longlong *)CVarDLSSDenoiserMode + 200))(), iVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar2) && (bVar1)) {
    return true;
  }
  return false;
}

// IsDLSSRRSupported @ 14de2e7a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDLSSLibrary::IsDLSSRRSupported(void)

{
  bool bVar1;
  UDLSSSupport UVar2;
  
  bVar1 = TryInitDLSSLibrary();
  if (!bVar1) {
    if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    }
    return false;
  }
  UVar2 = QueryDLSSRRSupport();
  return UVar2 == Supported;
}

// IsDLSSSupported @ 14de2e7f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDLSSLibrary::IsDLSSSupported(void)

{
  bool bVar1;
  
  bVar1 = TryInitDLSSLibrary();
  if (!bVar1) {
    if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    }
    return false;
  }
  bVar1 = TryInitDLSSLibrary();
  if (!bVar1) {
    if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    }
    return false;
  }
  return DLSSSRSupport == Supported;
}

// IsRayTracingAvailable @ 14de2e870

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl UDLSSLibrary::IsRayTracingAvailable(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (!GRHIGlobals.IsRHIInitialized) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GRHIGlobals.IsRHIInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderUtils.cpp"
                       ,0x6fd,L"IsRayTracingAllowed() may only be called once RHI is initialized.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return GRayTracingMode != Disabled;
}

// QueryDLSSRRSupport @ 14de2e890

/* WARNING: Enum "Type": Some values do not have unique names */

UDLSSSupport __cdecl UDLSSLibrary::QueryDLSSRRSupport(void)

{
  bool bVar1;
  FName *pFVar2;
  int *piVar3;
  FName local_res8 [4];
  
  bVar1 = TryInitDLSSLibrary();
  if (bVar1) {
    piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (*piVar3 < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        if (*piVar3 < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            pFVar2 = ::FName::FName(local_res8,L"DLSS");
            DLSSModule = (IDLSSModuleInterface *)FModuleManager::GetModulePtr_Internal(*pFVar2);
            _Init_thread_footer(&::_TSS0);
          }
        }
        if (DLSSModule == (IDLSSModuleInterface *)0x0) {
          bIsRRSupportedByRHI = false;
        }
        else {
          bIsRRSupportedByRHI = (bool)(**(code **)((longlong)*DLSSModule + 0x80))();
        }
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (bIsRRSupportedByRHI == false) {
      if (2 < (byte)LogDLSSBlueprint._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
        return NotSupported;
      }
    }
    else {
      bVar1 = IsRayTracingEnabled();
      if (bVar1) {
        return DLSSRRSupport;
      }
      if (2 < (byte)LogDLSSBlueprint._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
      }
    }
  }
  else if (1 < (byte)LogDLSSBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    return NotSupported;
  }
  return NotSupported;
}

// QueryDLSSSupport @ 14de2e9f0

/* WARNING: Enum "Type": Some values do not have unique names */

UDLSSSupport __cdecl UDLSSLibrary::QueryDLSSSupport(void)

{
  bool bVar1;
  
  bVar1 = TryInitDLSSLibrary();
  if (!bVar1) {
    if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    }
    return NotSupported;
  }
  return DLSSSRSupport;
}

// SetDLSSMode @ 14de2ea40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UDLSSLibrary::SetDLSSMode(UObject *param_1,UDLSSMode param_2)

{
  code *pcVar1;
  UEnum *this;
  FName FVar2;
  bool bVar3;
  EConsoleVariableFlags EVar4;
  UPackage *pUVar5;
  ulonglong uVar6;
  FText *this_00;
  IConsoleManager *pIVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  float fVar10;
  EDLSSQualityMode local_res18;
  FString local_38;
  FText local_28 [2];
  
  uVar8 = (ulonglong)param_2;
  bVar3 = TryInitDLSSLibrary();
  if (bVar3) {
    if (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton == (UEnum *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_DLSSBlueprint();
      Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode,(UObject *)pUVar5,L"UDLSSMode");
    }
    this = Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton;
    bVar3 = UEnum::IsValidEnumValue(Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton,uVar8);
    if ((bVar3) && (uVar6 = UEnum::GetMaxEnumValue(this), uVar6 != uVar8)) {
      bVar3 = false;
      CurrentDLSSModeDeprecated = param_2;
      if (((DLSSSRSupport == Supported) && (param_2 != Off)) && (param_2 != Auto)) {
        local_res18 = ToEDLSSQualityMode(param_2);
        bVar3 = true;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar7 = IConsoleManager::Get();
        CVarScreenPercentage =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.ScreenPercentage",1);
        _Init_thread_footer(&::_TSS0);
      }
      if ((bVar3) &&
         (bVar3 = FDLSSUpscaler::IsQualityModeSupported(DLSSUpscaler,local_res18), bVar3)) {
        fVar10 = FDLSSUpscaler::GetOptimalResolutionFractionForQuality(DLSSUpscaler,local_res18);
        fVar10 = fVar10 * __real_42c80000;
        if (CVarScreenPercentage != (IConsoleVariable *)0x0) {
          EVar4 = (**(code **)(*(longlong *)CVarScreenPercentage + 0x18))();
          IConsoleVariable::Set<float>
                    (CVarScreenPercentage,fVar10,EVar4 & ECVF_SetByMask,(FName)0x0);
        }
        EnableDLSS(true);
      }
      else {
        if (CVarScreenPercentage != (IConsoleVariable *)0x0) {
          EVar4 = (**(code **)(*(longlong *)CVarScreenPercentage + 0x18))();
          IConsoleVariable::Set<float>
                    (CVarScreenPercentage,__real_42c80000,EVar4 & ECVF_SetByMask,(FName)0x0);
        }
        if (bDLAAEnabledDeprecated == false) {
          EnableDLSS(false);
        }
      }
      if (param_2 != Off) {
        bVar3 = IsInGameThread();
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSSBlueprint\\Private\\DLSSLibrary.cpp"
                               ,0x2a9,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        bVar3 = IsDLSSModeSupported(param_2);
        DLSSErrorState.bIsDLSSModeUnsupported = !bVar3;
        DLSSErrorState.InvalidDLSSMode = param_2;
        return;
      }
    }
    else {
      FVar2 = SetDLSSModeInvalidEnumValueError;
      if (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton == (UEnum *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_DLSSBlueprint();
        Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_DLSSBlueprint_UDLSSMode,(UObject *)pUVar5,L"UDLSSMode")
        ;
      }
      this_00 = UEnum::GetDisplayNameTextByValue
                          (Z_Registration_Info_UEnum_UDLSSMode.OuterSingleton,local_28,uVar8);
      FText::ToString(this_00);
      ::FString::PrintfImpl
                (&local_38,
                 L"SetDLSSMode should not be called with an invalid DLSSMode enum value (%d) \"%s\""
                );
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar9.Data = local_38.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar9.Data,Error,FVar2);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28[0].TextData.Reference + 0x10))();
      }
    }
  }
  else if (1 < (byte)LogDLSSBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    return;
  }
  return;
}

// StaticRegisterNativesUDLSSLibrary @ 14de2ed60

void __cdecl UDLSSLibrary::StaticRegisterNativesUDLSSLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_UDLSSLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TryInitDLSSLibrary @ 14de2ef20

bool __cdecl UDLSSLibrary::TryInitDLSSLibrary(void)

{
  code *pcVar1;
  EDLSSSupport EVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  FDelegateHandle FVar6;
  FName *pFVar7;
  IModuleInterface *pIVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  FName local_res10 [3];
  
  if (bDLSSLibraryInitialized) {
    return true;
  }
  if (DLSSOnScreenMessagesDelegateHandle.ID == 0) {
    FVar6 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
            ::AddStatic<>(&FCoreDelegates::OnGetOnScreenMessages,
                          (_func___cdecl_void_TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_ptr
                           *)local_res8);
                    /* WARNING: Load size is inaccurate */
    DLSSOnScreenMessagesDelegateHandle.ID = *FVar6.ID;
  }
  pFVar7 = ::FName::FName(local_res10,L"DLSS");
  pIVar8 = FModuleManager::GetModulePtr_Internal(*pFVar7);
  if (pIVar8 == (IModuleInterface *)0x0) {
    return false;
  }
  DLSSUpscaler = (FDLSSUpscaler *)(**(code **)((longlong)*pIVar8 + 0x68))(pIVar8);
  EVar2 = (**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
  DLSSSRSupport = ToUDLSSSupport(EVar2);
  EVar2 = (**(code **)((longlong)*pIVar8 + 0x48))(pIVar8);
  DLSSRRSupport = ToUDLSSSupport(EVar2);
  (**(code **)((longlong)*pIVar8 + 0x50))
            (pIVar8,&MinDLSSSRDriverVersionMajor,&MinDLSSSRDriverVersionMinor);
  (**(code **)((longlong)*pIVar8 + 0x58))
            (pIVar8,&MinDLSSRRDriverVersionMajor,&MinDLSSRRDriverVersionMinor);
  lVar9 = (**(code **)((longlong)*pIVar8 + 0x68))(pIVar8);
  if (lVar9 == 0) {
    cVar3 = (**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
    if (cVar3 == '\0') {
      (**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(DLSSModule->GetDLSSUpscaler() != nullptr) || (DLSSModule->QueryDLSSSRSupport() != EDLSSSupport::Supported)"
                         ,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSSBlueprint\\Private\\DLSSLibrary.cpp"
                         ,0x326,
                         L"mismatch between not having a valid DLSSModule->GetDLSSUpscaler() while also reporting DLSS as being supported by DLSSModule->QueryDLSSSRSupport() %u "
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
  }
  bDLSSLibraryInitialized = true;
  return true;
}

// execEnableDLAA @ 14de2f130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDLSSLibrary::execEnableDLAA(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = TryInitDLSSLibrary();
  if (bVar2) {
    if ((DLSSSRSupport == Supported) && (bVar3)) {
      bDLAAEnabledDeprecated = true;
      EnableDLSS(true);
      return;
    }
    bDLAAEnabledDeprecated = false;
    SetDLSSMode((UObject *)0x0,CurrentDLSSModeDeprecated);
  }
  else if (1 < (byte)LogDLSSBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    return;
  }
  return;
}

// execEnableDLSS @ 14de2f230

void __cdecl UDLSSLibrary::execEnableDLSS(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnableDLSS(local_res10[0] != 0);
  return;
}

// execEnableDLSSRR @ 14de2f2b0

void __cdecl UDLSSLibrary::execEnableDLSSRR(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnableDLSSRR(local_res10[0] != 0);
  return;
}

// execGetDLSSMinimumDriverVersion @ 14de2f330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDLSSLibrary::execGetDLSSMinimumDriverVersion(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res10[0] = 0;
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
  piVar4 = (int *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  piVar3 = local_res10;
  if (piVar4 != (int *)0x0) {
    piVar3 = piVar4;
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
  piVar4 = local_res20;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar4 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = TryInitDLSSLibrary();
  if ((!bVar2) && (1 < (byte)LogDLSSBlueprint._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
  }
  *piVar3 = MinDLSSSRDriverVersionMajor;
  *piVar4 = MinDLSSSRDriverVersionMinor;
  return;
}

// execGetDLSSMode @ 14de2f440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDLSSLibrary::execGetDLSSMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  IConsoleManager *pIVar4;
  int *piVar5;
  bool bVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = TryInitDLSSLibrary();
  if (!bVar2) {
    if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar4 = IConsoleManager::Get();
      CVarTemporalAAUpscaler =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.TemporalAA.Upscaler",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (CVarTemporalAAUpscaler == (IConsoleVariable *)0x0) {
LAB_14de2f4e0:
    bVar2 = false;
  }
  else {
    iVar3 = (**(code **)(*(longlong *)CVarTemporalAAUpscaler + 200))();
    if (iVar3 == 0) goto LAB_14de2f4e0;
    bVar2 = true;
  }
  bVar6 = DLSSSRSupport == Supported;
  if (*piVar5 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pIVar4 = IConsoleManager::Get();
      CVarDLSSEnable =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.NGX.DLSS.Enable",1);
      _Init_thread_footer(&::_TSS1);
    }
  }
  if (CVarDLSSEnable != (IConsoleVariable *)0x0) {
    iVar3 = (**(code **)(*(longlong *)CVarDLSSEnable + 200))();
    if (iVar3 != 0) {
      bVar1 = true;
      goto LAB_14de2f520;
    }
  }
  bVar1 = false;
LAB_14de2f520:
  if ((((bDLAAEnabledDeprecated == false) && (bVar2)) && (bVar6)) && (bVar1)) {
    *(UDLSSMode *)param_3 = CurrentDLSSModeDeprecated;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetDLSSModeInformation @ 14de2f610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDLSSQualityMode": Some values do not have unique names */

void __cdecl
UDLSSLibrary::execGetDLSSModeInformation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  float fVar3;
  UDLSSMode UVar4;
  float *pfVar5;
  bool bVar6;
  EDLSSQualityMode EVar7;
  uchar *puVar8;
  float *pfVar9;
  uchar *puVar10;
  uchar *puVar11;
  float *pfVar12;
  float fVar13;
  uchar local_res10 [16];
  uchar local_res20 [8];
  UDLSSMode local_78 [4];
  float local_74;
  float local_70;
  float local_6c;
  uchar local_68 [8];
  undefined8 local_60;
  undefined8 local_58 [4];
  
  local_78[0] = Off;
  FEnumProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_74 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar11 = local_res10;
  if (puVar8 != (uchar *)0x0) {
    puVar11 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_74,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_74);
  }
  pfVar12 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_60 = &local_74;
  if (pfVar12 != (float *)0x0) {
    local_60 = pfVar12;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar8 = param_2->MostRecentPropertyAddress;
  local_70 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar10 = local_res20;
  if (puVar8 != (uchar *)0x0) {
    puVar10 = puVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  pfVar12 = (float *)param_2->MostRecentPropertyAddress;
  local_6c = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar9 = &local_70;
  if (pfVar12 != (float *)0x0) {
    pfVar9 = pfVar12;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6c,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6c);
  }
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  pfVar12 = &local_6c;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar12 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pfVar5 = local_60;
  UVar4 = local_78[0];
  puVar8 = local_68;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *local_60 = 0.0;
  *puVar10 = '\0';
  *pfVar9 = 50.0;
  *pfVar12 = 200.0;
  puVar8[0] = '\0';
  puVar8[1] = '\0';
  puVar8[2] = '\0';
  puVar8[3] = '\0';
  bVar6 = TryInitDLSSLibrary();
  if (!bVar6) {
    if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    }
    *puVar11 = '\0';
    return;
  }
  bVar6 = IsDLSSModeSupported(UVar4);
  *puVar11 = bVar6;
  if (UVar4 == Off) {
    return;
  }
  if (bVar6) {
    if (UVar4 != Auto) {
      EVar7 = ToEDLSSQualityMode(UVar4);
      goto LAB_14de2f97e;
    }
  }
  else {
    if (UVar4 != Auto) {
      return;
    }
    bVar6 = TryInitDLSSLibrary();
    if (!bVar6) {
      if ((byte)LogDLSSBlueprint._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
      return;
    }
    bVar6 = TryInitDLSSLibrary();
    if (!bVar6) {
      if ((byte)LogDLSSBlueprint._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
      return;
    }
    if (DLSSSRSupport != Supported) {
      return;
    }
  }
  FDLSSUpscaler::GetAutoQualityModeFromPixels(DLSSUpscaler,(int)&local_60);
  if (local_60._4_1_ == '\0') {
    return;
  }
  EVar7 = (EDLSSQualityMode)local_60;
LAB_14de2f97e:
  bVar6 = FDLSSUpscaler::IsFixedResolutionFraction(DLSSUpscaler,EVar7);
  *puVar10 = bVar6;
  fVar13 = FDLSSUpscaler::GetOptimalResolutionFractionForQuality(DLSSUpscaler,EVar7);
  fVar3 = __real_42c80000;
  *pfVar5 = fVar13 * __real_42c80000;
  fVar13 = FDLSSUpscaler::GetMinResolutionFractionForQuality(DLSSUpscaler,EVar7);
  *pfVar9 = fVar13 * fVar3;
  fVar13 = FDLSSUpscaler::GetMaxResolutionFractionForQuality(DLSSUpscaler,EVar7);
  *pfVar12 = fVar13 * fVar3;
  puVar8[0] = '3';
  puVar8[1] = '3';
  puVar8[2] = 0xb3;
  puVar8[3] = '>';
  return;
}

// execGetDLSSRRMinimumDriverVersion @ 14de2fa20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDLSSLibrary::execGetDLSSRRMinimumDriverVersion(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res10[0] = 0;
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
  piVar4 = (int *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  piVar3 = local_res10;
  if (piVar4 != (int *)0x0) {
    piVar3 = piVar4;
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
  piVar4 = local_res20;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar4 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = TryInitDLSSLibrary();
  if ((!bVar2) && (1 < (byte)LogDLSSBlueprint._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
  }
  *piVar3 = MinDLSSRRDriverVersionMajor;
  *piVar4 = MinDLSSRRDriverVersionMinor;
  return;
}

// execGetDLSSScreenPercentageRange @ 14de2fb30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDLSSLibrary::execGetDLSSScreenPercentageRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FStaticBasicLogRecord *pFVar3;
  float *pfVar4;
  float *pfVar5;
  float local_res10 [2];
  float local_res20 [2];
  
  local_res10[0] = 0.0;
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
  pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  local_res20[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar4 = local_res10;
  if (pfVar5 != (float *)0x0) {
    pfVar4 = pfVar5;
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
  pfVar5 = local_res20;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = TryInitDLSSLibrary();
  if (bVar2) {
    bVar2 = TryInitDLSSLibrary();
    if (bVar2) {
      bVar2 = TryInitDLSSLibrary();
      if (bVar2) {
        if (DLSSSRSupport == Supported) {
          *pfVar4 = FDLSSUpscaler::MinDynamicResolutionFraction * __real_42c80000;
          *pfVar5 = FDLSSUpscaler::MaxDynamicResolutionFraction * __real_42c80000;
          return;
        }
        goto LAB_14de2fc24;
      }
      if ((byte)LogDLSSBlueprint._0_1_ < 2) goto LAB_14de2fc24;
      pFVar3 = &::LOG_Static;
    }
    else {
      if ((byte)LogDLSSBlueprint._0_1_ < 2) goto LAB_14de2fc24;
      pFVar3 = &::LOG_Static;
    }
  }
  else {
    if ((byte)LogDLSSBlueprint._0_1_ < 2) goto LAB_14de2fc24;
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar3,(FLogCategoryBase *)&LogDLSSBlueprint);
LAB_14de2fc24:
  *pfVar4 = 100.0;
  *pfVar5 = __real_42c80000;
  return;
}

// execGetDefaultDLSSMode @ 14de2fcd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDLSSLibrary::execGetDefaultDLSSMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = TryInitDLSSLibrary();
  if (bVar1) {
    bVar1 = TryInitDLSSLibrary();
    if (bVar1) {
      bVar1 = TryInitDLSSLibrary();
      if (bVar1) {
        if (DLSSSRSupport == Supported) {
          *(undefined1 *)param_3 = 1;
          return;
        }
      }
      else if (1 < (byte)LogDLSSBlueprint._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
        *(undefined1 *)param_3 = 0;
        return;
      }
    }
    else if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  else if (1 < (byte)LogDLSSBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetSupportedDLSSModes @ 14de2fd90

void __cdecl UDLSSLibrary::execGetSupportedDLSSModes(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<UDLSSMode,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UDLSSMode,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetSupportedDLSSModes(&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execIsDLAAEnabled @ 14de2fe10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDLSSLibrary::execIsDLAAEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = TryInitDLSSLibrary();
  if (bVar1) {
    if ((DLSSSRSupport == Supported) && (bDLAAEnabledDeprecated != false)) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  else if (1 < (byte)LogDLSSBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsDLSSEnabled @ 14de2fe80

void __cdecl UDLSSLibrary::execIsDLSSEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsDLSSEnabled();
  *(bool *)param_3 = bVar1;
  return;
}

// execIsDLSSModeSupported @ 14de2feb0

void __cdecl UDLSSLibrary::execIsDLSSModeSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UDLSSMode local_res10 [24];
  
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
  bVar2 = IsDLSSModeSupported(local_res10[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsDLSSRREnabled @ 14de2ff30

void __cdecl UDLSSLibrary::execIsDLSSRREnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsDLSSRREnabled();
  *(bool *)param_3 = bVar1;
  return;
}

// execIsDLSSRRSupported @ 14de2ff60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDLSSLibrary::execIsDLSSRRSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UDLSSSupport UVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = TryInitDLSSLibrary();
  if (!bVar1) {
    if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  UVar2 = QueryDLSSRRSupport();
  *(bool *)param_3 = UVar2 == Supported;
  return;
}

// execIsDLSSSupported @ 14de2ffd0

void __cdecl UDLSSLibrary::execIsDLSSSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsDLSSSupported();
  *(bool *)param_3 = bVar1;
  return;
}

// execIsRayTracingAvailable @ 14de30000

void __cdecl UDLSSLibrary::execIsRayTracingAvailable(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsRayTracingAllowed();
  *(bool *)param_3 = bVar1;
  return;
}

// execQueryDLSSRRSupport @ 14de30030

void __cdecl UDLSSLibrary::execQueryDLSSRRSupport(UObject *param_1,FFrame *param_2,void *param_3)

{
  UDLSSSupport UVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UVar1 = QueryDLSSRRSupport();
  *(UDLSSSupport *)param_3 = UVar1;
  return;
}

// execQueryDLSSSupport @ 14de30060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDLSSLibrary::execQueryDLSSSupport(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = TryInitDLSSLibrary();
  if (!bVar1) {
    if (1 < (byte)LogDLSSBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDLSSBlueprint);
    }
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(UDLSSSupport *)param_3 = DLSSSRSupport;
  return;
}

// execSetDLSSMode @ 14de300c0

void __cdecl UDLSSLibrary::execSetDLSSMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDLSSMode local_res10 [16];
  UObject *local_res20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
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
  SetDLSSMode(local_res20,local_res10[0]);
  return;
}

