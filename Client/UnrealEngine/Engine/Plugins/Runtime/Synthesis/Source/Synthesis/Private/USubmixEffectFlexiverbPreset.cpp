// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 15

// StaticClass @ 14f0a94d0

UClass * __cdecl USubmixEffectFlexiverbPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectFlexiverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectFlexiverbPreset,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectFlexiverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectFlexiverbPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton;
}

// USubmixEffectFlexiverbPreset @ 14f0bb450

USubmixEffectFlexiverbPreset * __thiscall
USubmixEffectFlexiverbPreset::USubmixEffectFlexiverbPreset
          (USubmixEffectFlexiverbPreset *this,FVTableHelper *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectFlexiverbPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).PreDelay = 10.0;
  (this->SettingsCopy).DecayTime = 7.0;
  (this->SettingsCopy).RoomDampening = 220.0;
  (this->SettingsCopy).Complexity = 2;
  (this->Settings).PreDelay = 10.0;
  (this->Settings).DecayTime = 7.0;
  (this->Settings).RoomDampening = 220.0;
  (this->Settings).Complexity = 2;
  return this;
}

// USubmixEffectFlexiverbPreset @ 14f0bb4e0

USubmixEffectFlexiverbPreset * __thiscall
USubmixEffectFlexiverbPreset::USubmixEffectFlexiverbPreset
          (USubmixEffectFlexiverbPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectFlexiverbPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).PreDelay = 10.0;
  (this->SettingsCopy).DecayTime = 7.0;
  (this->SettingsCopy).RoomDampening = 220.0;
  (this->SettingsCopy).Complexity = 2;
  (this->Settings).PreDelay = 10.0;
  (this->Settings).DecayTime = 7.0;
  (this->Settings).RoomDampening = 220.0;
  (this->Settings).Complexity = 2;
  return this;
}

// ~USubmixEffectFlexiverbPreset @ 14f0c0740

void __thiscall
USubmixEffectFlexiverbPreset::~USubmixEffectFlexiverbPreset(USubmixEffectFlexiverbPreset *this)

{
  this->_padding_ = (longlong)&___7USubmixEffectFlexiverbPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  return;
}

// CanFilter @ 14f0cbc40

bool __thiscall USubmixEffectFlexiverbPreset::CanFilter(USubmixEffectFlexiverbPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d1000

FSoundEffectBase * __thiscall
USubmixEffectFlexiverbPreset::CreateNewEffect(USubmixEffectFlexiverbPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x180);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    *(undefined4 *)&this_00[1]._padding_ = 0xffffffff;
    this_00->_padding_ = (longlong)&___7FSubmixEffectFlexiverb__6B_;
    this_00[1]._padding_ = 0;
    *(undefined4 *)this_00[1].SettingsCritSect.CriticalSection.Opaque1 = 0;
    *(undefined4 *)((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque1 + 4) = 0xffffffff;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[1] = 0x40800000;
    *(undefined4 *)this_00[1].SettingsCritSect.CriticalSection.Opaque3 = 0x40c00000;
    *(undefined4 *)((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque3 + 4) = 0x40c00000;
    *(undefined4 *)(this_00[1].SettingsCritSect.CriticalSection.Opaque3 + 1) = 0x435c0000;
    Audio::FDelay::FDelay((FDelay *)(this_00[1].SettingsCritSect.CriticalSection.Opaque3 + 2));
    this_00[2].SettingsCritSect.CriticalSection.Opaque3[0] = (void *)0x0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque3[2] = (void *)0x0;
    this_00[2].CurrentAudioThreadSettingsData.ArrayNum = 0;
    this_00[2].CurrentAudioThreadSettingsData.ArrayMax = 0;
    this_00[2].bChanged = (FThreadSafeBool)0x0;
    this_00[2].Preset.WeakPtr.ObjectIndex = 0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque3[1] = (void *)0x0;
    this_00[2].CurrentAudioThreadSettingsData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined1 *)&this_00[2].Preset.WeakPtr.ObjectSerialNumber = 0;
    this_00[2].ParentPresetUniqueId = 0x40800000;
    this_00[2].bIsRunning = (FThreadSafeBool)0x40c00000;
    this_00[2].bIsActive = (FThreadSafeBool)0x40c00000;
    *(undefined4 *)&this_00[2].CommandQueue.Head = 0x435c0000;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this_00[2].CommandQueue.Tail,4000);
    *(undefined1 *)this_00[3].SettingsCritSect.CriticalSection.Opaque3 = 0;
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d2640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USubmixEffectFlexiverbPreset::CreateNewPreset
          (USubmixEffectFlexiverbPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

{
  UClass *pUVar1;
  UClass *pUVar2;
  USoundEffectPreset *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar1 = (UClass *)(**(code **)(this->_padding_ + 0x2c0))();
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar2 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar2,pUVar1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  local_a8._16_8_ = param_2;
  local_a8._24_4_ = param_3;
  pUVar3 = (USoundEffectPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(pUVar3->_padding_ + 0x2e0))(pUVar3);
  return pUVar3;
}

// GetAssetActionName @ 14f0d8b00

FText * __thiscall
USubmixEffectFlexiverbPreset::GetAssetActionName
          (USubmixEffectFlexiverbPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SubmixEffectFlexiverb");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f0dd140

UClass * __cdecl USubmixEffectFlexiverbPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectFlexiverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectFlexiverbPreset,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectFlexiverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectFlexiverbPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0def00

UClass * __thiscall
USubmixEffectFlexiverbPreset::GetSupportedClass(USubmixEffectFlexiverbPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectFlexiverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectFlexiverbPreset,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectFlexiverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectFlexiverbPreset>,aFStackX_8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectFlexiverbPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df610

bool __thiscall USubmixEffectFlexiverbPreset::HasAssetActions(USubmixEffectFlexiverbPreset *this)

{
  return true;
}

// Init @ 14f0e62c0

void __thiscall USubmixEffectFlexiverbPreset::Init(USubmixEffectFlexiverbPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  int iVar3;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = (this->Settings).DecayTime;
    fVar2 = (this->Settings).RoomDampening;
    iVar3 = (this->Settings).Complexity;
    (this->SettingsCopy).PreDelay = (this->Settings).PreDelay;
    (this->SettingsCopy).DecayTime = fVar1;
    (this->SettingsCopy).RoomDampening = fVar2;
    (this->SettingsCopy).Complexity = iVar3;
                    /* WARNING: Could not recover jumptable at 0x00014f0e62fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 14f101a80

void __thiscall
USubmixEffectFlexiverbPreset::SetSettings
          (USubmixEffectFlexiverbPreset *this,FSubmixEffectFlexiverbSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  int iVar3;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = param_1->DecayTime;
    fVar2 = param_1->RoomDampening;
    iVar3 = param_1->Complexity;
    (this->SettingsCopy).PreDelay = param_1->PreDelay;
    (this->SettingsCopy).DecayTime = fVar1;
    (this->SettingsCopy).RoomDampening = fVar2;
    (this->SettingsCopy).Complexity = iVar3;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f101acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSubmixEffectFlexiverbPreset @ 14f103b00

void __cdecl USubmixEffectFlexiverbPreset::StaticRegisterNativesUSubmixEffectFlexiverbPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USubmixEffectFlexiverbPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 14f1168d0

void __cdecl
USubmixEffectFlexiverbPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  uchar local_18 [16];
  
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = ' ';
  local_18[3] = 'A';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = 0xe0;
  local_18[7] = '@';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '\\';
  local_18[0xb] = 'C';
  local_18[0xc] = '\x02';
  local_18[0xd] = '\0';
  local_18[0xe] = '\0';
  local_18[0xf] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = puVar17[1];
    uVar3 = puVar17[2];
    uVar4 = puVar17[3];
    uVar5 = puVar17[4];
    uVar6 = puVar17[5];
    uVar7 = puVar17[6];
    uVar8 = puVar17[7];
    uVar9 = puVar17[8];
    uVar10 = puVar17[9];
    uVar11 = puVar17[10];
    uVar12 = puVar17[0xb];
    uVar13 = puVar17[0xc];
    uVar14 = puVar17[0xd];
    uVar15 = puVar17[0xe];
    uVar16 = puVar17[0xf];
    param_1[3].field_0x18 = puVar17[0];
    param_1[3].field_0x19 = uVar2;
    param_1[3].field_0x1a = uVar3;
    param_1[3].field_0x1b = uVar4;
    param_1[3].field_0x1c = uVar5;
    param_1[3].field_0x1d = uVar6;
    param_1[3].field_0x1e = uVar7;
    param_1[3].field_0x1f = uVar8;
    param_1[3].field_0x20 = uVar9;
    param_1[3].field_0x21 = uVar10;
    param_1[3].field_0x22 = uVar11;
    param_1[3].field_0x23 = uVar12;
    param_1[3].field_0x24 = uVar13;
    param_1[3].field_0x25 = uVar14;
    param_1[3].field_0x26 = uVar15;
    param_1[3].field_0x27 = uVar16;
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

