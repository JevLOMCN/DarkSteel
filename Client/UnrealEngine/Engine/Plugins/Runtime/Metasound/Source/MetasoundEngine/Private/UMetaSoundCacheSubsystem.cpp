// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 16

// StaticClass @ 14b300060

UClass * __cdecl UMetaSoundCacheSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundCacheSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundCacheSubsystem",
               &Z_Registration_Info_UClass_UMetaSoundCacheSubsystem.InnerSingleton,
               StaticRegisterNativesUMetaSoundCacheSubsystem,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetaSoundCacheSubsystem>,
               InternalVTableHelperCtorCaller<UMetaSoundCacheSubsystem>,local_res8,
               UAudioEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundCacheSubsystem.InnerSingleton;
}

// UMetaSoundCacheSubsystem @ 14b34c400

UMetaSoundCacheSubsystem * __thiscall
UMetaSoundCacheSubsystem::UMetaSoundCacheSubsystem
          (UMetaSoundCacheSubsystem *this,FVTableHelper *param_1)

{
  UAudioEngineSubsystem::UAudioEngineSubsystem((UAudioEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMetaSoundCacheSubsystem__6B_;
  (this->BuildParams).AudioComponentId = 0;
  (this->BuildParams).SampleRate = 0.0;
  (this->BuildParams).AudioMixerNumOutputFrames = 0;
  (this->BuildParams).NumChannels = 0;
  (this->BuildParams).NumFramesPerCallback = 0;
  (this->BuildParams).InstanceID = 0;
  (this->BuildParams).bIsPreviewSound = false;
  (this->BuildParams).GraphName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildParams).GraphName.Data.ArrayNum = 0;
  (this->BuildParams).GraphName.Data.ArrayMax = 0;
  (this->BuildParams).StartTime = 0.0;
  return this;
}

// UMetaSoundCacheSubsystem @ 14b34c450

UMetaSoundCacheSubsystem * __thiscall
UMetaSoundCacheSubsystem::UMetaSoundCacheSubsystem(UMetaSoundCacheSubsystem *this)

{
  UAudioEngineSubsystem::UAudioEngineSubsystem((UAudioEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7UMetaSoundCacheSubsystem__6B_;
  (this->BuildParams).AudioComponentId = 0;
  (this->BuildParams).SampleRate = 0.0;
  (this->BuildParams).AudioMixerNumOutputFrames = 0;
  (this->BuildParams).NumChannels = 0;
  (this->BuildParams).NumFramesPerCallback = 0;
  (this->BuildParams).InstanceID = 0;
  (this->BuildParams).bIsPreviewSound = false;
  (this->BuildParams).GraphName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildParams).GraphName.Data.ArrayNum = 0;
  (this->BuildParams).GraphName.Data.ArrayMax = 0;
  (this->BuildParams).StartTime = 0.0;
  return this;
}

// ~UMetaSoundCacheSubsystem @ 14b3524f0

void __thiscall UMetaSoundCacheSubsystem::~UMetaSoundCacheSubsystem(UMetaSoundCacheSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMetaSoundCacheSubsystem__6B_;
  pFVar1 = (this->BuildParams).GraphName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAudioEngineSubsystem::~UAudioEngineSubsystem((UAudioEngineSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 14b3bf2a0

UClass * __cdecl UMetaSoundCacheSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundCacheSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundCacheSubsystem",
               &Z_Registration_Info_UClass_UMetaSoundCacheSubsystem.InnerSingleton,
               StaticRegisterNativesUMetaSoundCacheSubsystem,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetaSoundCacheSubsystem>,
               InternalVTableHelperCtorCaller<UMetaSoundCacheSubsystem>,local_res8,
               UAudioEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundCacheSubsystem.InnerSingleton;
}

// Initialize @ 14b3c7950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMetaSoundCacheSubsystem::Initialize
          (UMetaSoundCacheSubsystem *this,FSubsystemCollectionBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMixerDevice *pFVar4;
  FAudioDeviceHandle *this_00;
  FAudioDeviceHandle local_28;
  
  pFVar4 = UAudioEngineSubsystem::GetMixerDevice((UAudioEngineSubsystem *)this);
  if (pFVar4 == (FMixerDevice *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6585383796298743741>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOperatorCacheSubsystem.cpp"
                       ,0x43,"MixerDevice");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = UAudioEngineSubsystem::GetAudioDeviceHandle((UAudioEngineSubsystem *)this,&local_28);
    uVar3 = FAudioDeviceHandle::GetDeviceID(this_00);
    (this->BuildParams).AudioDeviceID = uVar3;
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
    (this->BuildParams).SampleRate = (float)*(int *)&pFVar4->field_0x84;
    (this->BuildParams).AudioMixerNumOutputFrames = *(int *)&pFVar4->field_0x8c;
    (this->BuildParams).NumChannels = (pFVar4->PlatformInfo).NumChannels;
    (this->BuildParams).NumFramesPerCallback = 0;
    (this->BuildParams).InstanceID = 0;
  }
  return;
}

// PrecacheMetaSound @ 14b3cdaa0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundCacheSubsystem::PrecacheMetaSound
          (UMetaSoundCacheSubsystem *this,UMetaSoundSource *param_1,int param_2)

{
  PrecacheMetaSoundInternal(this,param_1,param_2,false);
  return;
}

// PrecacheMetaSoundInternal @ 14b3cdab0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMetaSoundCacheSubsystem::PrecacheMetaSoundInternal
          (UMetaSoundCacheSubsystem *this,UMetaSoundSource *param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FName *pFVar4;
  IModuleInterface *pIVar5;
  FString *pFVar6;
  UMetaSoundSource *pUVar7;
  longlong lVar8;
  IMetaSoundAssetManager *pIVar9;
  FGraphClassRegistryKey *pFVar10;
  FOperatorBuildData *this_00;
  FOperatorBuildData *pFVar11;
  undefined1 local_188 [16];
  FGuid local_178;
  FOperatorPool *local_168;
  TReferenceControllerBase<1> *local_160;
  FOperatorBuildData *local_158;
  code *local_150;
  undefined1 *local_148;
  FName local_140;
  FString local_138;
  FString local_128;
  FGuid local_118;
  FGraphClassRegistryKey local_108;
  TOptional<Metasound::FGeneratorInitParams> local_c8;
  
  if (Metasound::OperatorCachePrivate::bOperatorPrecacheEnabled) {
    pFVar4 = ::FName::FName(&local_140,"MetasoundGenerator");
    pIVar5 = FModuleManager::GetModulePtr_Internal(*pFVar4);
    if (pIVar5 == (IModuleInterface *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6585383796298743706>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOperatorCacheSubsystem.cpp"
                         ,0x66,"Module");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
      if (local_168 == (FOperatorPool *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6585383796298743700>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOperatorCacheSubsystem.cpp"
                           ,0x6c,"OperatorPool");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else if (param_1 == (UMetaSoundSource *)0x0) {
        if (1 < (byte)LogMetaSound._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
      }
      else if (param_2 < 1) {
        if (1 < (byte)LogMetaSound._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        }
      }
      else {
        (**(code **)(*(longlong *)param_1 + 0x360))(param_1);
        pFVar6 = FMetasoundAssetBase::GetOwningAssetName
                           ((FMetasoundAssetBase *)&param_1->field_0x468,&local_138);
        ::FString::operator=(&(this->BuildParams).GraphName,pFVar6);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        Metasound::OperatorCachePrivate::CreateInitParams(&local_c8,param_1,&this->BuildParams);
        if (local_c8.bIsSet != false) {
          local_148 = local_188;
          local_150 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UMetaSoundCacheSubsystem::PrecacheMetaSoundInternal'::__l2::<lambda_1>,void,UMetaSoundSource_const_&>
                      ::Call;
          pUVar7 = UMetaSoundSource::FindFirstNoninflatableSource
                             (param_1,&local_c8.TypedValue.Environment,
                              (TFunctionRef<void___cdecl(UMetaSoundSource_const_&)> *)&local_150);
          pFVar11 = (FOperatorBuildData *)0x0;
          local_178.A = 0;
          local_178.B = 0;
          local_178.C = 0;
          local_178.D = 0;
          lVar8 = (**(code **)(*(longlong *)&param_1->field_0x4b8 + 0x18))();
          pIVar9 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
          cVar3 = (**(code **)((longlong)*pIVar9 + 0x90))(pIVar9,lVar8 + 0x88);
          if (cVar3 == '\0') {
            if (2 < (byte)LogMetaSound._0_1_) {
              UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)param_1,&local_128,(UObject *)0x0);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            pFVar10 = FMetasoundAssetBase::GetGraphRegistryKey
                                ((FMetasoundAssetBase *)&pUVar7->field_0x468);
            if ((local_c8.bIsSet == false) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            this_00 = ::operator_new(0xf0);
            if (this_00 != (FOperatorBuildData *)0x0) {
              local_108.NodeKey.Type = (pFVar10->NodeKey).Type;
              local_108.NodeKey._1_3_ = *(undefined3 *)&(pFVar10->NodeKey).field_0x1;
              local_108.NodeKey.ClassName.Namespace.ComparisonIndex.Value =
                   (pFVar10->NodeKey).ClassName.Namespace.ComparisonIndex.Value;
              local_108.NodeKey.ClassName._4_8_ =
                   *(undefined8 *)&(pFVar10->NodeKey).ClassName.Namespace.Number;
              local_118.A = local_178.A;
              local_118.B = local_178.B;
              local_118.C = local_178.C;
              local_118.D = local_178.D;
              local_108.NodeKey.ClassName._12_8_ =
                   *(undefined8 *)&(pFVar10->NodeKey).ClassName.Name.Number;
              local_108.NodeKey._24_8_ = *(undefined8 *)&(pFVar10->NodeKey).ClassName.Variant.Number
              ;
              local_108._32_8_ = *(undefined8 *)&(pFVar10->NodeKey).Version.Minor;
              local_108.AssetPath._4_8_ = *(undefined8 *)&(pFVar10->AssetPath).PackageName.Number;
              local_108._48_8_ = *(undefined8 *)&(pFVar10->AssetPath).AssetName.Number;
              pFVar11 = Metasound::FOperatorBuildData::FOperatorBuildData
                                  (this_00,&local_c8.TypedValue,&local_108,&local_118,param_2,
                                   param_3);
            }
            if ((local_168 == (FOperatorPool *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_158 = pFVar11;
            Metasound::FOperatorPool::BuildAndAddOperator
                      (local_168,(FOperatorBuildData *)&local_158);
          }
          if (local_c8.bIsSet != false) {
            Metasound::FGeneratorInitParams::~FGeneratorInitParams(&local_c8.TypedValue);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160)
      ;
    }
  }
  else if (4 < (byte)LogMetaSound._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
  }
  return;
}

// RemoveCachedOperatorsForMetaSound @ 14b3d4ae0

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMetaSoundCacheSubsystem::RemoveCachedOperatorsForMetaSound
          (UMetaSoundCacheSubsystem *this,UMetaSoundSource *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FName *pFVar4;
  IModuleInterface *pIVar5;
  longlong lVar6;
  IMetaSoundAssetManager *pIVar7;
  FName local_res10 [3];
  FGuid local_38;
  FOperatorPool *local_28;
  TReferenceControllerBase<1> *local_20;
  FString local_18;
  
  if (param_1 == (UMetaSoundSource *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      return;
    }
  }
  else {
    pFVar4 = ::FName::FName(local_res10,"MetasoundGenerator");
    pIVar5 = FModuleManager::GetModulePtr_Internal(*pFVar4);
    if (pIVar5 == (IModuleInterface *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6585383796298743624>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOperatorCacheSubsystem.cpp"
                         ,0xb8,"Module");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5,&local_28);
      if (local_28 != (FOperatorPool *)0x0) {
        local_38.A = 0;
        local_38.B = 0;
        local_38.C = 0;
        local_38.D = 0;
        lVar6 = (**(code **)(*(longlong *)&param_1->field_0x4b8 + 0x18))();
        pIVar7 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
        cVar3 = (**(code **)((longlong)*pIVar7 + 0x90))(pIVar7,lVar6 + 0x88);
        if (cVar3 != '\0') {
          if ((local_28 == (FOperatorPool *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          Metasound::FOperatorPool::RemoveOperatorsWithAssetClassID(local_28,&local_38);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_20);
          return;
        }
        if (2 < (byte)LogMetaSound._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
  }
  return;
}

// ShouldCreateSubsystem @ 14b3e0360

bool __thiscall
UMetaSoundCacheSubsystem::ShouldCreateSubsystem(UMetaSoundCacheSubsystem *this,UObject *param_1)

{
  return true;
}

// StaticRegisterNativesUMetaSoundCacheSubsystem @ 14b3e1470

void __cdecl UMetaSoundCacheSubsystem::StaticRegisterNativesUMetaSoundCacheSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UMetaSoundCacheSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TouchOrPrecacheMetaSound @ 14b3e1f80

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __thiscall
UMetaSoundCacheSubsystem::TouchOrPrecacheMetaSound
          (UMetaSoundCacheSubsystem *this,UMetaSoundSource *param_1,int param_2)

{
  PrecacheMetaSoundInternal(this,param_1,param_2,true);
  return;
}

// Update @ 14b3e5df0

void __thiscall UMetaSoundCacheSubsystem::Update(UMetaSoundCacheSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  FName local_res10;
  FName local_res18 [2];
  FOperatorPool *local_28;
  TReferenceControllerBase<1> *local_20;
  FString local_18;
  
  pFVar3 = ::FName::FName(local_res18,"MetasoundGenerator");
  local_res10 = *pFVar3;
  this_00 = FModuleManager::Get();
  bVar2 = FModuleManager::IsModuleLoaded(this_00,local_res10);
  if (!bVar2) {
    ::FName::ToString(&local_res10,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar4 = FModuleManager::GetModule(this_00,local_res10);
  (**(code **)((longlong)*pIVar4 + 0x40))(pIVar4,&local_28);
  if (local_28 != (FOperatorPool *)0x0) {
    if ((local_28 == (FOperatorPool *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Metasound::FOperatorPool::UpdateHitRateTracker(local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// execPrecacheMetaSound @ 14b3f4970

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
UMetaSoundCacheSubsystem::execPrecacheMetaSound(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UMetaSoundSource *local_res20;
  
  local_res20 = (UMetaSoundSource *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PrecacheMetaSoundInternal((UMetaSoundCacheSubsystem *)param_1,local_res20,local_res10[0],false);
  return;
}

// execRemoveCachedOperatorsForMetaSound @ 14b3f4e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMetaSoundCacheSubsystem::execRemoveCachedOperatorsForMetaSound
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObjectBaseUtility *this;
  bool bVar3;
  char cVar4;
  FName *pFVar5;
  IModuleInterface *pIVar6;
  longlong lVar7;
  IMetaSoundAssetManager *pIVar8;
  UObjectBaseUtility *local_res10;
  FName local_res20;
  FGuid local_38;
  FOperatorPool *local_28;
  TReferenceControllerBase<1> *local_20;
  FString local_18;
  
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObjectBaseUtility *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      return;
    }
  }
  else {
    pFVar5 = ::FName::FName(&local_res20,"MetasoundGenerator");
    pIVar6 = FModuleManager::GetModulePtr_Internal(*pFVar5);
    if (pIVar6 == (IModuleInterface *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6585383796298743624>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundOperatorCacheSubsystem.cpp"
                         ,0xb8,"Module");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,&local_28);
      if (local_28 != (FOperatorPool *)0x0) {
        local_38.A = 0;
        local_38.B = 0;
        local_38.C = 0;
        local_38.D = 0;
        lVar7 = (**(code **)(*(longlong *)&this[0x1e].field_0x8 + 0x18))();
        pIVar8 = Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
        cVar4 = (**(code **)((longlong)*pIVar8 + 0x90))(pIVar8,lVar7 + 0x88);
        if (cVar4 == '\0') {
          if (2 < (byte)LogMetaSound._0_1_) {
            UObjectBaseUtility::GetPathName(this,&local_18,(UObject *)0x0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          if ((local_28 == (FOperatorPool *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          Metasound::FOperatorPool::RemoveOperatorsWithAssetClassID(local_28,&local_38);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
  }
  return;
}

// execTouchOrPrecacheMetaSound @ 14b3f6460

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

void __cdecl
UMetaSoundCacheSubsystem::execTouchOrPrecacheMetaSound
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UMetaSoundSource *local_res20;
  
  local_res20 = (UMetaSoundSource *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PrecacheMetaSoundInternal((UMetaSoundCacheSubsystem *)param_1,local_res20,local_res10[0],true);
  return;
}

