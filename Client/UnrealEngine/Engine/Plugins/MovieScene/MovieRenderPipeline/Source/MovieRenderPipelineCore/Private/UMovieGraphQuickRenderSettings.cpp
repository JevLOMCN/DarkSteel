// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dc98000

UClass * __cdecl UMovieGraphQuickRenderSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphQuickRenderSettings",
               &Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.InnerSingleton,
               StaticRegisterNativesUMovieGraphQuickRenderSettings,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphQuickRenderSettings>,
               InternalVTableHelperCtorCaller<UMovieGraphQuickRenderSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.InnerSingleton;
}

// UMovieGraphQuickRenderSettings @ 14dcb0f70

UMovieGraphQuickRenderSettings * __thiscall
UMovieGraphQuickRenderSettings::UMovieGraphQuickRenderSettings
          (UMovieGraphQuickRenderSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphQuickRenderSettings__6B_;
  *(undefined8 *)&this->ModeSettings = 0;
  *(undefined8 *)&(this->ModeSettings).field_0x8 = 0;
  *(undefined8 *)&(this->ModeSettings).field_0x20 = 0;
  *(undefined4 *)&(this->ModeSettings).field_0x28 = 0;
  *(undefined4 *)&(this->ModeSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModeSettings).field_0x34 = 0;
  *(undefined4 *)&(this->ModeSettings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ModeSettings).field_0x40 = 0;
  *(undefined4 *)&(this->ModeSettings).field_0x48 = 0;
  return this;
}

// ~UMovieGraphQuickRenderSettings @ 14dcb3240

void __thiscall
UMovieGraphQuickRenderSettings::~UMovieGraphQuickRenderSettings
          (UMovieGraphQuickRenderSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphQuickRenderSettings__6B_;
  *(undefined4 *)&(this->ModeSettings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModeSettings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModeSettings);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14dcd2f60

UClass * __cdecl UMovieGraphQuickRenderSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphQuickRenderSettings",
               &Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.InnerSingleton,
               StaticRegisterNativesUMovieGraphQuickRenderSettings,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphQuickRenderSettings>,
               InternalVTableHelperCtorCaller<UMovieGraphQuickRenderSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphQuickRenderSettings.InnerSingleton;
}

// GetSavedQuickRenderModeSettings @ 14dcd37e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieGraphQuickRenderModeSettings * __cdecl
UMovieGraphQuickRenderSettings::GetSavedQuickRenderModeSettings(EMovieGraphQuickRenderMode param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  UObjectBase *pUVar7;
  UClass *pUVar8;
  UMovieGraphQuickRenderModeSettings *pUVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  longlong lVar13;
  FName FVar14;
  int iVar15;
  undefined1 auStackY_218 [32];
  EMovieGraphQuickRenderMode local_1e8 [8];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  UMovieGraphQuickRenderModeSettings *local_1c8;
  TPairInitializer<FName_const_&,TObjectPtr<UMovieGraphQuickRenderModeSettings>_&&> local_1c0;
  TPairInitializer<EMovieGraphQuickRenderMode_const_&,FName_const_&> *pTStack_1b0;
  longlong local_1a8;
  UMovieGraphQuickRenderModeSettings **local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  initializer_list<TPairInitializer<EMovieGraphQuickRenderMode_const_&,FName_const_&>_> local_178;
  undefined1 local_168 [128];
  undefined1 local_e8 [128];
  TPairInitializer<EMovieGraphQuickRenderMode_const_&,FName_const_&> local_68;
  EMovieGraphQuickRenderMode *local_58;
  FName *local_50;
  EMovieGraphQuickRenderMode *local_48;
  FName *local_40;
  EMovieGraphQuickRenderMode *local_38;
  FName *local_30;
  TPairInitializer<EMovieGraphQuickRenderMode_const_&,FName_const_&> local_28;
  
  local_28.Key = (EMovieGraphQuickRenderMode *)(__security_cookie.value ^ (ulonglong)auStackY_218);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_1e8[0] = CurrentSequence;
    local_68.Value = ::FName::FName(&local_198,L"Sequence");
    local_68.Key = local_1e8;
    local_1e8[1] = 2;
    local_50 = ::FName::FName(&local_190,L"CurrentViewport");
    local_58 = local_1e8 + 1;
    local_1e8[2] = 3;
    local_40 = ::FName::FName(&local_188,L"SelectedCameras");
    local_48 = local_1e8 + 2;
    local_1e8[3] = 1;
    local_30 = ::FName::FName(&local_180,L"Sequence");
    local_38 = local_1e8 + 3;
    local_1c0.Value = (TObjectPtr<UMovieGraphQuickRenderModeSettings> *)&local_68;
    pTStack_1b0 = &local_28;
    local_178._First =
         (TPairInitializer<EMovieGraphQuickRenderMode_const_&,FName_const_&> *)local_1c0.Value;
    local_178._Last = pTStack_1b0;
    TMap<enum_EMovieGraphQuickRenderMode,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EMovieGraphQuickRenderMode,FName,0>_>
    ::
    TMap<enum_EMovieGraphQuickRenderMode,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EMovieGraphQuickRenderMode,FName,0>_>
              (&ModeToInternalName,&local_178);
    atexit(`UMovieGraphQuickRenderSettings::GetSavedQuickRenderModeSettings'::__l2::
           _dynamic_atexit_destructor_for__ModeToInternalName__);
    _Init_thread_footer(&::_TSS0);
  }
  pwVar11 = L"";
  if (QuickRenderSettingsPackagePath.Data.ArrayNum != 0) {
    pwVar11 = (wchar_t *)QuickRenderSettingsPackagePath.Data.AllocatorInstance.Data;
  }
  lVar13 = 0;
  pUVar5 = LoadPackage((UPackage *)0x0,pwVar11,0,(FArchive *)0x0,(FLinkerInstancingContext *)0x0);
  if (pUVar5 != (UPackage *)0x0) {
    local_1e0 = 0;
    pUVar6 = StaticClass();
    pUVar7 = FindObjectWithOuter((UObjectBase *)pUVar5,pUVar6,(FName)0x0);
    if (pUVar7 != (UObjectBase *)0x0) {
      pUVar8 = StaticClass();
      pUVar6 = (pUVar7->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      iVar15 = (int)pUVar8->_padding_;
      if ((iVar15 <= (int)pUVar6->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar15 * 8) ==
          &pUVar8->_padding_)) goto LAB_14dcd3923;
    }
  }
  pwVar11 = L"";
  if (QuickRenderSettingsPackagePath.Data.ArrayNum != 0) {
    pwVar11 = (wchar_t *)QuickRenderSettingsPackagePath.Data.AllocatorInstance.Data;
  }
  pUVar5 = CreatePackage(pwVar11);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar5,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_e8,pUVar6);
  local_e8._8_8_ = pUVar5;
  pUVar7 = (UObjectBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
  if (local_e8._64_8_ != 0) {
    plVar10 = (longlong *)(local_e8 + 0x50);
    if ((longlong *)local_e8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_e8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
LAB_14dcd3923:
  if (ModeToInternalName._8_4_ != ModeToInternalName._52_4_) {
    lVar12 = 0x155379af8;
    if (ModeToInternalName._64_8_ != 0) {
      lVar12 = ModeToInternalName._64_8_;
    }
    for (iVar15 = *(int *)(lVar12 + ((ulonglong)(ModeToInternalName._72_4_ - 1) & (ulonglong)param_1
                                    ) * 4); iVar15 != -1;
        iVar15 = *(int *)(ModeToInternalName._0_8_ + 0xc + (longlong)iVar15 * 0x14)) {
      if (*(EMovieGraphQuickRenderMode *)(ModeToInternalName._0_8_ + (longlong)iVar15 * 0x14) ==
          param_1) {
        if ((iVar15 != -1) &&
           (lVar13 = ModeToInternalName._0_8_ + (longlong)iVar15 * 0x14, lVar13 != 0))
        goto LAB_14dcd39a7;
        break;
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pUVar9 = (UMovieGraphQuickRenderModeSettings *)(*pcVar2)();
    return pUVar9;
  }
LAB_14dcd39a7:
  lVar12 = *(longlong *)(lVar13 + 4);
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar12);
  if (pUVar7[1].ObjectFlags != pUVar7[2].InternalIndex) {
    FVar14 = pUVar7[2].NamePrivate.Name;
    if (FVar14 == (FName)0x0) {
      FVar14 = (FName)&pUVar7[2].ClassPrivate;
    }
    iVar15 = *(int *)((longlong)FVar14 +
                     (ulonglong)
                     (*(int *)&pUVar7[2].OuterPrivate.ObjectPtr.field0_0x0 - 1U &
                     uVar4 + (int)((ulonglong)lVar12 >> 0x20)) * 4);
    if (iVar15 != -1) {
      lVar1 = pUVar7[1]._padding_;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar15 * 0x18) == lVar12) {
          if ((((iVar15 != -1) && (lVar1 = lVar1 + (longlong)iVar15 * 0x18, lVar1 != 0)) &&
              (plVar10 = (longlong *)(lVar1 + 8), plVar10 != (longlong *)0x0)) &&
             ((*plVar10 != 0 && ((*(uint *)(*plVar10 + 8) >> 0x1e & 1) == 0)))) {
            return (UMovieGraphQuickRenderModeSettings *)*plVar10;
          }
          break;
        }
        iVar15 = *(int *)(lVar1 + 0x10 + (longlong)iVar15 * 0x18);
      } while (iVar15 != -1);
    }
  }
  local_1d8 = 0;
  local_1d0 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UMovieGraphQuickRenderModeSettings::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_168,pUVar6);
  local_168._48_8_ = (FObjectInstancingGraph *)0x0;
  local_168._56_8_ = (UPackage *)0x0;
  local_168._16_4_ = 0;
  local_168._20_4_ = 0;
  local_168._24_4_ = RF_Transactional;
  local_168._40_8_ = (UObject *)0x0;
  local_168[0x20] = false;
  local_168._8_8_ = pUVar7;
  pUVar9 = (UMovieGraphQuickRenderModeSettings *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_168);
  if (local_168._64_8_ != 0) {
    plVar10 = (longlong *)(local_168 + 0x50);
    if ((longlong *)local_168._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_168._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  local_1c8 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UMovieGraphQuickRenderModeSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  local_1a0 = &local_1c8;
  local_1a8 = lVar13 + 4;
  TSet<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UMovieGraphQuickRenderModeSettings>_&&>_>
            ((TSet<TTuple<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMovieGraphQuickRenderModeSettings>,0>,FDefaultSetAllocator>
              *)(pUVar7 + 1),&local_1c0,(bool *)&local_1a8);
  return pUVar9;
}

// StaticRegisterNativesUMovieGraphQuickRenderSettings @ 14dce6730

void __cdecl
UMovieGraphQuickRenderSettings::StaticRegisterNativesUMovieGraphQuickRenderSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphQuickRenderSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSavedQuickRenderModeSettings @ 14dcf1a00

void __cdecl
UMovieGraphQuickRenderSettings::execGetSavedQuickRenderModeSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphQuickRenderModeSettings *pUVar2;
  EMovieGraphQuickRenderMode local_res10 [24];
  
  local_res10[0] = CurrentSequence;
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
  pUVar2 = GetSavedQuickRenderModeSettings(local_res10[0]);
  *(UMovieGraphQuickRenderModeSettings **)param_3 = pUVar2;
  return;
}

