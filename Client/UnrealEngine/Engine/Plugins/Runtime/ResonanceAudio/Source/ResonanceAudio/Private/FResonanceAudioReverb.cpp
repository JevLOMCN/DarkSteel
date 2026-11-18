// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 23

// FResonanceAudioReverb @ 14f043e10

FResonanceAudioReverb * __thiscall
ResonanceAudio::FResonanceAudioReverb::FResonanceAudioReverb(FResonanceAudioReverb *this)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->ReverbSettings).bEnableRoomEffects = false;
  (this->ReverbSettings).bGetTransformFromAudioVolume = false;
  this->_padding_ = (longlong)&___7FResonanceAudioReverb_ResonanceAudio__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ReverbSettings).RoomPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ReverbSettings).RoomPosition.field0_0x0._s_0.Y = (double)uVar1;
  (this->ReverbSettings).RoomPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->ReverbSettings).RoomRotation.X = UE::Math::TQuat<double>::Identity.X;
  (this->ReverbSettings).RoomRotation.Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->ReverbSettings).RoomRotation.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->ReverbSettings).RoomRotation.W = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Y = (double)uVar1;
  (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ReverbSettings).LeftWallMaterial = TRANSPARENT;
  (this->ReverbSettings).RightWallMaterial = TRANSPARENT;
  (this->ReverbSettings).FloorMaterial = TRANSPARENT;
  (this->ReverbSettings).CeilingMaterial = TRANSPARENT;
  (this->ReverbSettings).FrontWallMaterial = TRANSPARENT;
  (this->ReverbSettings).BackWallMaterial = TRANSPARENT;
  (this->ReverbSettings).ReflectionScalar = 1.0;
  (this->ReverbSettings).ReverbGain = 1.0;
  (this->ReverbSettings).ReverbTimeModifier = 1.0;
  (this->ReverbSettings).ReverbBrightness = 0.0;
  (this->RoomProperties).position[0] = 0.0;
  (this->RoomProperties).position[1] = 0.0;
  *(undefined8 *)((this->RoomProperties).position + 2) = 0;
  (this->RoomProperties).rotation[1] = 0.0;
  (this->RoomProperties).rotation[2] = 0.0;
  (this->RoomProperties).dimensions[1] = 0.0;
  (this->RoomProperties).dimensions[2] = 0.0;
  (this->RoomProperties).material_names[0] = kTransparent;
  (this->RoomProperties).material_names[1] = kTransparent;
  (this->RoomProperties).material_names[2] = kTransparent;
  (this->RoomProperties).material_names[3] = kTransparent;
  (this->RoomProperties).material_names[4] = kTransparent;
  (this->RoomProperties).material_names[5] = kTransparent;
  (this->ReverbProperties).rt60_values[0] = 0.0;
  (this->ReverbProperties).rt60_values[1] = 0.0;
  (this->ReverbProperties).rt60_values[2] = 0.0;
  (this->ReverbProperties).rt60_values[3] = 0.0;
  (this->ReverbProperties).rt60_values[4] = 0.0;
  (this->ReverbProperties).rt60_values[5] = 0.0;
  (this->ReverbProperties).rt60_values[6] = 0.0;
  (this->ReverbProperties).rt60_values[7] = 0.0;
  *(undefined8 *)((this->ReverbProperties).rt60_values + 8) = 0;
  (this->ReflectionProperties).room_position[0] = 0.0;
  (this->ReflectionProperties).room_position[1] = 0.0;
  *(undefined8 *)((this->ReflectionProperties).room_position + 2) = 0;
  (this->ReflectionProperties).room_rotation[1] = 0.0;
  (this->ReflectionProperties).room_rotation[2] = 0.0;
  (this->ReflectionProperties).room_dimensions[1] = 0.0;
  (this->ReflectionProperties).room_dimensions[2] = 0.0;
  (this->ReflectionProperties).cutoff_frequency = 0.0;
  (this->ReflectionProperties).coefficients[0] = 0.0;
  (this->ReflectionProperties).coefficients[1] = 0.0;
  (this->ReflectionProperties).coefficients[2] = 0.0;
  (this->ReflectionProperties).coefficients[3] = 0.0;
  (this->ReflectionProperties).coefficients[4] = 0.0;
  *(undefined8 *)((this->ReflectionProperties).coefficients + 5) = 0;
  this->ResonanceAudioApi = (ResonanceAudioApi *)0x0;
  this->ResonanceAudioModule = (FResonanceAudioModule *)0x0;
  this->ReverbPluginPreset = (UResonanceAudioReverbPluginPreset *)0x0;
  (this->TemporaryStereoBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TemporaryStereoBuffer).ArrayNum = 0;
  (this->TemporaryStereoBuffer).ArrayMax = 0;
  (this->SubmixEffect).Object = (FSoundEffectSubmix *)0x0;
  (this->SubmixEffect).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->ReverbSubmixPtr = (USoundSubmix *)0x0;
  *(undefined8 *)((this->RoomProperties).rotation + 3) = 0x3f800000;
  (this->RoomProperties).reflection_scalar = 1.0;
  (this->RoomProperties).reverb_gain = 1.0;
  (this->RoomProperties).reverb_time = 1.0;
  (this->RoomProperties).reverb_brightness = 0.0;
  *(undefined8 *)((this->ReflectionProperties).room_rotation + 3) = 0x3f800000;
  return this;
}

// ~FResonanceAudioReverb @ 14f044ac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ResonanceAudio::FResonanceAudioReverb::~FResonanceAudioReverb(FResonanceAudioReverb *this)

{
  FScriptContainerElement *pFVar1;
  FUObjectItem *this_00;
  
  this->ReverbPluginPreset = (UResonanceAudioReverbPluginPreset *)0x0;
  this->_padding_ = (longlong)&___7FResonanceAudioReverb_ResonanceAudio__6B_;
  if (this->ReverbSubmixPtr != (USoundSubmix *)0x0) {
    USoundSubmixWithParentBase::SetParentSubmix
              ((USoundSubmixWithParentBase *)this->ReverbSubmixPtr,(USoundSubmixBase *)0x0,false);
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&this->ReverbSubmixPtr->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SubmixEffect).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->TemporaryStereoBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IAudioReverb__6B_;
  return;
}

// GetEffectSubmix @ 14f048a50

TSharedPtr<FSoundEffectSubmix,1> * __thiscall
ResonanceAudio::FResonanceAudioReverb::GetEffectSubmix
          (FResonanceAudioReverb *this,TSharedPtr<FSoundEffectSubmix,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((this->SubmixEffect).Object == (FSoundEffectSubmix *)0x0) {
    InitEffectSubmix(this);
  }
  __return_storage_ptr__->Object = (this->SubmixEffect).Object;
  pTVar1 = (this->SubmixEffect).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetGlobalReverbPluginPreset @ 14f048ab0

UResonanceAudioReverbPluginPreset * __thiscall
ResonanceAudio::FResonanceAudioReverb::GetGlobalReverbPluginPreset(FResonanceAudioReverb *this)

{
  return GlobalReverbPluginPreset;
}

// GetSubmix @ 14f049300

USoundSubmix * __thiscall
ResonanceAudio::FResonanceAudioReverb::GetSubmix(FResonanceAudioReverb *this)

{
  return this->ReverbSubmixPtr;
}

// InitEffectSubmix @ 14f049400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ResonanceAudio::FResonanceAudioReverb::InitEffectSubmix(FResonanceAudioReverb *this)

{
  TSharedPtr<FSoundEffectSubmix,1> *pTVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FString *pFVar7;
  size_t sVar8;
  UObject *pUVar9;
  UResonanceAudioReverbPluginPreset *pUVar10;
  FUObjectItem *this_00;
  FSoundEffectSubmix *pFVar11;
  longlong *plVar12;
  FSharedReferencer<1> FVar13;
  int iVar14;
  undefined1 auStackY_1a8 [32];
  FSoundEffectSubmix *local_168;
  FSharedReferencer<1> local_160;
  TSharedPtr<FSoundEffectBase,1> local_158;
  uint local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  UResonanceAudioReverbPluginPreset *local_130;
  wchar_t *local_128;
  undefined8 uStack_120;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FSoftObjectPath local_108;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar1 = &this->SubmixEffect;
  if ((pTVar1->Object != (FSoundEffectSubmix *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SubmixEffect.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioReverb.cpp"
                         ,0x8a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar14 = 0;
  if (GlobalReverbPluginPreset != (UResonanceAudioReverbPluginPreset *)0x0) goto LAB_14f04960f;
  pUVar6 = UResonanceAudioSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar9 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  local_108.AssetPath.PackageName.ComparisonIndex.Value = *(uint *)&pUVar9[2].field_0x0;
  local_108.AssetPath.PackageName.Number = *(uint *)&pUVar9[2].field_0x4;
  local_108.AssetPath.AssetName.ComparisonIndex.Value = *(uint *)&pUVar9[2].field_0x8;
  local_108.AssetPath.AssetName.Number = *(uint *)&pUVar9[2].field_0xc;
  FUtf8String::FUtf8String(&local_108.SubPathString,(FUtf8String *)&pUVar9[2].field_0x10);
  if (local_108.AssetPath.PackageName != (FName)0x0) {
    uStack_120._0_4_ = 0;
    uStack_120._4_4_ = 0;
    local_128 = (wchar_t *)0x0;
    pFVar7 = FSoftObjectPath::ToString(&local_108,&local_c8);
    if ((pFVar7->Data).ArrayNum == 0) {
      local_118 = (FScriptContainerElement *)0x15060d16c;
LAB_14f0494e2:
      sVar8 = wcslen((wchar_t *)local_118);
      iVar14 = (int)sVar8;
    }
    else {
      local_118 = (pFVar7->Data).AllocatorInstance.Data;
      if (local_118 != (FScriptContainerElement *)0x0) goto LAB_14f0494e2;
    }
    iStack_110 = iVar14;
    pUVar6 = UResonanceAudioReverbPluginPreset::StaticClass();
    local_d8._12_4_ = uStack_10c;
    local_d8.Size = iStack_110;
    local_e8.DataPtr = local_128;
    local_e8.Size = (int)uStack_120;
    local_e8._12_4_ = uStack_120._4_4_;
    local_d8.DataPtr = (wchar_t *)local_118;
    GlobalReverbPluginPreset =
         (UResonanceAudioReverbPluginPreset *)
         StaticLoadObject(pUVar6,(UObject *)0x0,&local_d8,&local_e8,0,(UPackageMap *)0x0,true,
                          (FLinkerInstancingContext *)0x0);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (GlobalReverbPluginPreset == (UResonanceAudioReverbPluginPreset *)0x0) {
    pUVar9 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar9,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = UResonanceAudioReverbPluginPreset::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._8_8_ = pUVar9;
    pUVar10 = (UResonanceAudioReverbPluginPreset *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar12 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    GlobalReverbPluginPreset = pUVar10;
    if (pUVar10 != (UResonanceAudioReverbPluginPreset *)0x0) goto LAB_14f0495aa;
  }
  else {
LAB_14f0495aa:
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&GlobalReverbPluginPreset->_padding_ + 4)
                        );
    FUObjectItem::SetRootFlags(this_00,RootSet);
  }
  if (local_108.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.SubPathString.Data.AllocatorInstance.Data);
  }
  if (GlobalReverbPluginPreset == (UResonanceAudioReverbPluginPreset *)0x0) {
    if (1 < (byte)LogResonanceAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
    }
    this->ReverbPluginPreset = (UResonanceAudioReverbPluginPreset *)0x0;
    return;
  }
LAB_14f04960f:
  pUVar10 = GlobalReverbPluginPreset;
  this->ReverbPluginPreset = GlobalReverbPluginPreset;
  uStack_144 = 0;
  local_148 = 0xffffffff;
  uStack_140 = 0;
  local_138 = 0;
  uStack_134 = 0xffffffff;
  pFVar11 = (FSoundEffectSubmix *)(**(code **)(pUVar10->_padding_ + 0x2d0))(pUVar10);
  local_130 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UResonanceAudioReverbPluginPreset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar11->field_0x4c,(FObjectPtr)&local_130);
  *(undefined4 *)&pFVar11->field_0x54 = uStack_134;
  lVar2 = *(longlong *)&pFVar11->field_0x0;
  (pFVar11->InitData_Internal).DeviceID = local_148;
  *(undefined4 *)&(pFVar11->InitData_Internal).field_0x4 = uStack_144;
  *(undefined4 *)&(pFVar11->InitData_Internal).PresetSettings = (undefined4)uStack_140;
  *(undefined4 *)((longlong)&(pFVar11->InitData_Internal).PresetSettings + 4) = uStack_140._4_4_;
  (pFVar11->InitData_Internal).SampleRate = (float)local_138;
  (pFVar11->InitData_Internal).ParentPresetUniqueId = uStack_134;
  (**(code **)(lVar2 + 0x48))(pFVar11,&local_148);
  local_168 = pFVar11;
  local_158.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_158.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_158.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (local_158.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSoundEffectSubmix__U__DefaultDeleter_VFSoundEffectSubmix___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    local_158.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar11;
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar13.ReferenceController = local_158.SharedReferenceCount.ReferenceController;
  local_160.ReferenceController = local_158.SharedReferenceCount.ReferenceController;
  local_158.Object = (FSoundEffectBase *)pFVar11;
  USoundEffectPreset::AddEffectInstance((USoundEffectPreset *)pUVar10,&local_158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  if (pTVar1 != (TSharedPtr<FSoundEffectSubmix,1> *)&local_168) {
    pTVar1->Object = pFVar11;
    local_168 = (FSoundEffectSubmix *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SubmixEffect).SharedReferenceCount,&local_160);
    FVar13.ReferenceController = local_160.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  pTVar3 = (this->SubmixEffect).SharedReferenceCount.ReferenceController;
  pFVar11 = pTVar1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar11 == (FSoundEffectSubmix *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(FResonanceAudioReverb **)&pFVar11->field_0x88 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (((this->SubmixEffect).Object == (FSoundEffectSubmix *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FSoundEffectBase::SetEnabled((FSoundEffectBase *)(this->SubmixEffect).Object,true);
  return;
}

// Initialize @ 14f049800

void __thiscall
ResonanceAudio::FResonanceAudioReverb::Initialize
          (FResonanceAudioReverb *this,FAudioPluginInitializationParams *param_1)

{
  FName *pFVar1;
  FResonanceAudioModule *pFVar2;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,"ResonanceAudio");
  pFVar2 = FModuleManager::GetModuleChecked<ResonanceAudio::FResonanceAudioModule>(*pFVar1);
  this->ResonanceAudioModule = pFVar2;
  return;
}

// LoadSubmix @ 14f049cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundSubmix * __thiscall
ResonanceAudio::FResonanceAudioReverb::LoadSubmix(FResonanceAudioReverb *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  USoundSubmix *pUVar9;
  UObject *pUVar10;
  FUObjectItem *this_00;
  FAudioDeviceManager *pFVar11;
  FAudioDevice *pFVar12;
  USoundSubmixBase *pUVar13;
  longlong *plVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TArray<TObjectPtr<USoundEffectSubmixPreset>,TSizedDefaultAllocator<32>_> *pTVar17;
  undefined1 auStack_158 [32];
  UResonanceAudioReverbPluginPreset **local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  UResonanceAudioReverbPluginPreset *local_100;
  FString local_f8;
  FString local_e8;
  FName local_d8;
  UObject *local_d0;
  FString local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (this->ReverbSubmixPtr != (USoundSubmix *)0x0) {
    return this->ReverbSubmixPtr;
  }
  pUVar8 = UResonanceAudioSettings::StaticClass();
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  pUVar10 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
  local_d0 = pUVar10;
  if ((pUVar10 == (UObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioReverb.cpp"
                         ,200,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pUVar9 = (USoundSubmix *)(*pcVar5)();
    return pUVar9;
  }
  if (IgnoreUserResonanceSubmixCVar != 0) goto LAB_14f049da7;
  pUVar9 = (USoundSubmix *)
           FSoftObjectPath::TryLoad
                     ((FSoftObjectPath *)(pUVar10 + 1),(FUObjectSerializeContext *)0x0);
  if (pUVar9 == (USoundSubmix *)0x0) {
LAB_14f049d97:
    pUVar9 = (USoundSubmix *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_USoundSubmix_NoRegister();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar8->_padding_)) goto LAB_14f049d97;
  }
  this->ReverbSubmixPtr = pUVar9;
LAB_14f049da7:
  if (this->ReverbSubmixPtr == (USoundSubmix *)0x0) {
    if (IgnoreUserResonanceSubmixCVar == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FString::FString(&DefaultSubmixName,L"Resonance Reverb Submix");
        atexit(`ResonanceAudio::FResonanceAudioReverb::LoadSubmix'::__l21::
               _dynamic_atexit_destructor_for__DefaultSubmixName__);
        _Init_thread_footer(&::_TSS0);
      }
      if (1 < (byte)LogResonanceAudio._0_1_) {
        if (*(FName *)&pUVar10[1].field_0x0 == (FName)0x0) {
          local_f8.Data.ArrayMax = 0;
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f8.Data.ArrayNum = 0;
        }
        else {
          FTopLevelAssetPath::ToString((FTopLevelAssetPath *)(pUVar10 + 1),&local_f8);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
    }
    pUVar10 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_USoundSubmix_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar8);
    local_b8._8_8_ = pUVar10;
    pUVar9 = (USoundSubmix *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar14 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    this->ReverbSubmixPtr = pUVar9;
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar9->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
    this->ReverbSubmixPtr->bMuteWhenBackgrounded = '\x01';
    pFVar11 = FAudioDeviceManager::Get();
    if ((pFVar11 != (FAudioDeviceManager *)0x0) &&
       (pFVar12 = FAudioDeviceHandle::GetAudioDevice(&pFVar11->MainAudioDeviceHandle),
       pFVar12 != (FAudioDevice *)0x0)) {
      pUVar13 = (USoundSubmixBase *)(**(code **)(pFVar12->_padding_ + 0x88))(pFVar12);
      if (4 < (byte)LogResonanceAudio._0_1_) {
        local_d8 = (FName)pUVar13->_padding_;
        ::FName::ToString(&local_d8,&local_c8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      USoundSubmixWithParentBase::SetParentSubmix
                ((USoundSubmixWithParentBase *)this->ReverbSubmixPtr,pUVar13,false);
    }
  }
  *(undefined1 *)&this->ReverbSubmixPtr->_padding_ = 0;
  if ((this->SubmixEffect).Object == (FSoundEffectSubmix *)0x0) {
    InitEffectSubmix(this);
  }
  if (this->ReverbPluginPreset != (UResonanceAudioReverbPluginPreset *)0x0) {
    pUVar9 = this->ReverbSubmixPtr;
    pFVar16 = (pUVar9->SubmixEffectChain).AllocatorInstance.Data;
    iVar7 = (pUVar9->SubmixEffectChain).ArrayNum;
    pFVar4 = pFVar16 + (longlong)iVar7 * 8;
    while( true ) {
      if ((pUVar9->SubmixEffectChain).ArrayNum != iVar7) {
        local_108[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<USoundEffectSubmixPreset>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_108);
      }
      if (pFVar16 == pFVar4) break;
      lVar15 = *(longlong *)pFVar16;
      if (lVar15 != 0) {
        pUVar8 = UResonanceAudioReverbPluginPreset::StaticClass();
        lVar15 = *(longlong *)(lVar15 + 0x10);
        iVar3 = (int)pUVar8->_padding_;
        if ((iVar3 <= *(int *)(lVar15 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar8->_padding_)) goto LAB_14f04a1b9;
      }
      pFVar16 = pFVar16 + 8;
    }
    if (IgnoreUserResonanceSubmixCVar == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        ::FString::FString(&DefaultPresetName,L"ResonanceReverbDefault_0");
        atexit(`ResonanceAudio::FResonanceAudioReverb::LoadSubmix'::__l82::
               _dynamic_atexit_destructor_for__DefaultPresetName__);
        _Init_thread_footer(&::_TSS2);
      }
      if (1 < (byte)LogResonanceAudio._0_1_) {
        if (*(longlong *)(local_d0 + 1) == 0) {
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.Data.ArrayNum = 0;
          local_e8.Data.ArrayMax = 0;
        }
        else {
          FTopLevelAssetPath::ToString((FTopLevelAssetPath *)(local_d0 + 1),&local_e8);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
    }
    pUVar9 = this->ReverbSubmixPtr;
    local_100 = this->ReverbPluginPreset;
    pTVar17 = &pUVar9->SubmixEffectChain;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_100 != (UResonanceAudioReverbPluginPreset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_100);
    }
    pFVar4 = (pTVar17->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_100) &&
       (lVar15 = (longlong)(pUVar9->SubmixEffectChain).ArrayMax,
       (FScriptContainerElement *)&local_100 < pFVar4 + lVar15 * 8)) {
      local_120 = (longlong)(pUVar9->SubmixEffectChain).ArrayNum;
      local_118 = 8;
      local_138 = &local_100;
      local_130 = pFVar4;
      local_128 = lVar15;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pUVar9 = (USoundSubmix *)(*pcVar5)();
        return pUVar9;
      }
    }
    iVar7 = (pUVar9->SubmixEffectChain).ArrayNum;
    piVar1 = &(pUVar9->SubmixEffectChain).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar17->AllocatorInstance,piVar1);
    }
    pFVar4 = (pTVar17->AllocatorInstance).Data;
    (pUVar9->SubmixEffectChain).ArrayNum = iVar7 + 1;
    *(UResonanceAudioReverbPluginPreset **)(pFVar4 + (longlong)iVar7 * 8) = local_100;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_100 != (UResonanceAudioReverbPluginPreset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_100);
    }
  }
LAB_14f04a1b9:
  return this->ReverbSubmixPtr;
}

// OnInitSource @ 14f04a390

void __thiscall
ResonanceAudio::FResonanceAudioReverb::OnInitSource
          (FResonanceAudioReverb *this,uint param_1,FName *param_2,uint param_3,
          UReverbPluginSourceSettingsBase *param_4)

{
  return;
}

// OnReleaseSource @ 14f04b250

void __thiscall
ResonanceAudio::FResonanceAudioReverb::OnReleaseSource(FResonanceAudioReverb *this,uint param_1)

{
  return;
}

// ProcessMixedAudio @ 14f04bb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ResonanceAudio::FResonanceAudioReverb::ProcessMixedAudio
          (FResonanceAudioReverb *this,FSoundEffectSubmixInputData *param_1,
          FSoundEffectSubmixOutputData *param_2)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  
  if ((this->ResonanceAudioModule != (FResonanceAudioModule *)0x0) &&
     (this->ResonanceAudioApi != (ResonanceAudioApi *)0x0)) {
    UpdateRoomEffects(this);
    iVar14 = param_2->NumChannels;
    if (iVar14 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00014f04bbb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*this->ResonanceAudioApi + 0x10))
                (this->ResonanceAudioApi,2,(longlong)param_1->NumFrames,
                 (param_2->AudioBuffer->AllocatorInstance).Data);
      return;
    }
    if (iVar14 < 3) {
      if (iVar14 == 1) {
        if (2 < (byte)LogResonanceAudio._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogResonanceAudio);
        }
        pTVar1 = &this->TemporaryStereoBuffer;
        (this->TemporaryStereoBuffer).ArrayNum = 0;
        if ((this->TemporaryStereoBuffer).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,0,&pTVar1->AllocatorInstance,0,&(this->TemporaryStereoBuffer).ArrayMax);
        }
        TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(pTVar1,param_1->NumFrames * 2);
        (**(code **)((longlong)*this->ResonanceAudioApi + 0x10))
                  (this->ResonanceAudioApi,2,(longlong)param_1->NumFrames,
                   (pTVar1->AllocatorInstance).Data);
        fVar7 = __real_3f000000;
        iVar14 = 0;
        pFVar13 = (param_2->AudioBuffer->AllocatorInstance).Data;
        if (0 < param_1->NumFrames) {
          uVar10 = 0;
          lVar12 = 0;
          do {
            uVar9 = 0;
            if ((int)(uVar10 + 1) < (this->TemporaryStereoBuffer).ArrayNum) {
              uVar9 = ~(uVar10 + 1) >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (pTVar1->AllocatorInstance).Data;
            uVar9 = 0;
            if ((int)uVar10 < (this->TemporaryStereoBuffer).ArrayNum) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar14 = iVar14 + 1;
            uVar10 = uVar10 + 2;
            pFVar2 = (pTVar1->AllocatorInstance).Data + lVar12;
            lVar11 = lVar12 + 4;
            lVar12 = lVar12 + 8;
            *(float *)pFVar13 = (*(float *)pFVar2 + *(float *)(pFVar4 + lVar11)) * fVar7;
            pFVar13 = pFVar13 + 4;
          } while (iVar14 < param_1->NumFrames);
        }
      }
    }
    else {
      pTVar1 = &this->TemporaryStereoBuffer;
      (this->TemporaryStereoBuffer).ArrayNum = 0;
      if ((this->TemporaryStereoBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&pTVar1->AllocatorInstance,0,&(this->TemporaryStereoBuffer).ArrayMax);
      }
      TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(pTVar1,param_1->NumFrames * 2);
      (**(code **)((longlong)*this->ResonanceAudioApi + 0x10))
                (this->ResonanceAudioApi,2,(longlong)param_1->NumFrames,
                 (pTVar1->AllocatorInstance).Data);
      iVar14 = 0;
      pFVar13 = (param_2->AudioBuffer->AllocatorInstance).Data;
      if (0 < param_1->NumFrames) {
        uVar10 = 0;
        lVar12 = 0;
        do {
          iVar3 = param_2->NumChannels;
          uVar9 = 0;
          if ((int)uVar10 < (this->TemporaryStereoBuffer).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar11 = (longlong)(iVar14 * iVar3);
          *(undefined4 *)(pFVar13 + lVar11 * 4) =
               *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar12);
          uVar9 = 0;
          if ((int)(uVar10 + 1) < (this->TemporaryStereoBuffer).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar14 = iVar14 + 1;
          uVar10 = uVar10 + 2;
          lVar6 = lVar12 + 4;
          lVar12 = lVar12 + 8;
          *(undefined4 *)(pFVar13 + lVar11 * 4 + 4) =
               *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar6);
        } while (iVar14 < param_1->NumFrames);
      }
    }
  }
  return;
}

// ProcessSourceAudio @ 14f04bee0

void __thiscall
ResonanceAudio::FResonanceAudioReverb::ProcessSourceAudio
          (FResonanceAudioReverb *this,FAudioPluginSourceInputData *param_1,
          FAudioPluginSourceOutputData *param_2)

{
  return;
}

// SetGlobalReverbPluginPreset @ 14f04c750

void __thiscall
ResonanceAudio::FResonanceAudioReverb::SetGlobalReverbPluginPreset
          (FResonanceAudioReverb *this,UResonanceAudioReverbPluginPreset *param_1)

{
  bool bVar1;
  
  bVar1 = GlobalReverbPluginPreset == this->ReverbPluginPreset;
  GlobalReverbPluginPreset = param_1;
  if (bVar1) {
    this->ReverbPluginPreset = param_1;
  }
  return;
}

// SetPreset @ 14f04c830

void __thiscall
ResonanceAudio::FResonanceAudioReverb::SetPreset
          (FResonanceAudioReverb *this,UResonanceAudioReverbPluginPreset *param_1)

{
  UResonanceAudioReverbPluginPreset *pUVar1;
  
  pUVar1 = GlobalReverbPluginPreset;
  if (param_1 != (UResonanceAudioReverbPluginPreset *)0x0) {
    pUVar1 = param_1;
  }
  this->ReverbPluginPreset = pUVar1;
  return;
}

// SetReflectionScalar @ 14f04c850

void __thiscall
ResonanceAudio::FResonanceAudioReverb::SetReflectionScalar(FResonanceAudioReverb *this)

{
  (this->RoomProperties).reflection_scalar = (this->ReverbPluginPreset->Settings).ReflectionScalar;
  return;
}

// SetReverbBrightness @ 14f04c8f0

void __thiscall
ResonanceAudio::FResonanceAudioReverb::SetReverbBrightness(FResonanceAudioReverb *this)

{
  (this->RoomProperties).reverb_brightness = (this->ReverbPluginPreset->Settings).ReverbBrightness;
  return;
}

// SetReverbGain @ 14f04c930

void __thiscall ResonanceAudio::FResonanceAudioReverb::SetReverbGain(FResonanceAudioReverb *this)

{
  (this->RoomProperties).reverb_gain = (this->ReverbPluginPreset->Settings).ReverbGain;
  return;
}

// SetReverbTimeModifier @ 14f04c970

void __thiscall
ResonanceAudio::FResonanceAudioReverb::SetReverbTimeModifier(FResonanceAudioReverb *this)

{
  (this->RoomProperties).reverb_time = (this->ReverbPluginPreset->Settings).ReverbTimeModifier;
  return;
}

// SetRoomDimensions @ 14f04c9b0

void __thiscall
ResonanceAudio::FResonanceAudioReverb::SetRoomDimensions(FResonanceAudioReverb *this)

{
  UResonanceAudioReverbPluginPreset *pUVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pUVar1 = this->ReverbPluginPreset;
  if ((((pUVar1->Settings).RoomDimensions.field0_0x0._s_0.X !=
        (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.X) ||
      ((pUVar1->Settings).RoomDimensions.field0_0x0._s_0.Y !=
       (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Y)) ||
     ((pUVar1->Settings).RoomDimensions.field0_0x0._s_0.Z !=
      (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Z)) {
    dVar6 = (pUVar1->Settings).RoomDimensions.field0_0x0._s_0.Y;
    (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.X =
         (pUVar1->Settings).RoomDimensions.field0_0x0._s_0.X;
    (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Y = dVar6;
    dVar6 = (pUVar1->Settings).RoomDimensions.field0_0x0._s_0.Z;
    (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Z = dVar6;
    dVar2 = (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Y * __real_3f847ae140000000;
    dVar6 = dVar6 * __real_3f847ae140000000;
    dVar5 = (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.X * __real_bf847ae140000000;
    (this->RoomProperties).dimensions[0] =
         (float)(double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & uVar4,SUB84(dVar2,0) & uVar3);
    (this->RoomProperties).dimensions[1] =
         (float)(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar4,SUB84(dVar6,0) & uVar3);
    (this->RoomProperties).dimensions[2] =
         (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar4,SUB84(dVar5,0) & uVar3);
  }
  return;
}

// SetRoomMaterials @ 14f04cac0

void __thiscall ResonanceAudio::FResonanceAudioReverb::SetRoomMaterials(FResonanceAudioReverb *this)

{
  ERaMaterialName EVar1;
  MaterialName MVar2;
  
  EVar1 = (this->ReverbPluginPreset->Settings).LeftWallMaterial;
  if ((this->ReverbSettings).LeftWallMaterial != EVar1) {
    (this->ReverbSettings).LeftWallMaterial = EVar1;
    MVar2 = ConvertToResonanceMaterialName(EVar1);
    (this->RoomProperties).material_names[0] = MVar2;
  }
  EVar1 = (this->ReverbPluginPreset->Settings).RightWallMaterial;
  if ((this->ReverbSettings).RightWallMaterial != EVar1) {
    (this->ReverbSettings).RightWallMaterial = EVar1;
    MVar2 = ConvertToResonanceMaterialName(EVar1);
    (this->RoomProperties).material_names[1] = MVar2;
  }
  EVar1 = (this->ReverbPluginPreset->Settings).FloorMaterial;
  if ((this->ReverbSettings).FloorMaterial != EVar1) {
    (this->ReverbSettings).FloorMaterial = EVar1;
    MVar2 = ConvertToResonanceMaterialName(EVar1);
    (this->RoomProperties).material_names[2] = MVar2;
  }
  EVar1 = (this->ReverbPluginPreset->Settings).CeilingMaterial;
  if ((this->ReverbSettings).CeilingMaterial != EVar1) {
    (this->ReverbSettings).CeilingMaterial = EVar1;
    MVar2 = ConvertToResonanceMaterialName(EVar1);
    (this->RoomProperties).material_names[3] = MVar2;
  }
  EVar1 = (this->ReverbPluginPreset->Settings).FrontWallMaterial;
  if ((this->ReverbSettings).FrontWallMaterial != EVar1) {
    (this->ReverbSettings).FrontWallMaterial = EVar1;
    MVar2 = ConvertToResonanceMaterialName(EVar1);
    (this->RoomProperties).material_names[4] = MVar2;
  }
  EVar1 = (this->ReverbPluginPreset->Settings).BackWallMaterial;
  if ((this->ReverbSettings).BackWallMaterial != EVar1) {
    (this->ReverbSettings).BackWallMaterial = EVar1;
    MVar2 = ConvertToResonanceMaterialName(EVar1);
    (this->RoomProperties).material_names[5] = MVar2;
  }
  return;
}

// SetRoomPosition @ 14f04cda0

void __thiscall ResonanceAudio::FResonanceAudioReverb::SetRoomPosition(FResonanceAudioReverb *this)

{
  UResonanceAudioReverbPluginPreset *pUVar1;
  double dVar2;
  double dVar3;
  
  pUVar1 = this->ReverbPluginPreset;
  if ((((pUVar1->Settings).RoomPosition.field0_0x0._s_0.X !=
        (this->ReverbSettings).RoomPosition.field0_0x0._s_0.X) ||
      ((pUVar1->Settings).RoomPosition.field0_0x0._s_0.Y !=
       (this->ReverbSettings).RoomPosition.field0_0x0._s_0.Y)) ||
     ((pUVar1->Settings).RoomPosition.field0_0x0._s_0.Z !=
      (this->ReverbSettings).RoomPosition.field0_0x0._s_0.Z)) {
    dVar3 = (pUVar1->Settings).RoomPosition.field0_0x0._s_0.Y;
    (this->ReverbSettings).RoomPosition.field0_0x0._s_0.X =
         (pUVar1->Settings).RoomPosition.field0_0x0._s_0.X;
    (this->ReverbSettings).RoomPosition.field0_0x0._s_0.Y = dVar3;
    dVar3 = (pUVar1->Settings).RoomPosition.field0_0x0._s_0.Z;
    (this->ReverbSettings).RoomPosition.field0_0x0._s_0.Z = dVar3;
    dVar3 = dVar3 * __real_3f847ae140000000;
    dVar2 = (this->ReverbSettings).RoomPosition.field0_0x0._s_0.X * __real_bf847ae140000000;
    (this->RoomProperties).position[0] =
         (float)((this->ReverbSettings).RoomPosition.field0_0x0._s_0.Y * __real_3f847ae140000000);
    (this->RoomProperties).position[1] = (float)dVar3;
    (this->RoomProperties).position[2] = (float)dVar2;
  }
  return;
}

// SetRoomRotation @ 14f04cea0

void __thiscall ResonanceAudio::FResonanceAudioReverb::SetRoomRotation(FResonanceAudioReverb *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UResonanceAudioReverbPluginPreset *pUVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 in_EAX;
  int iVar8;
  undefined4 in_EDX;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  
  pUVar5 = this->ReverbPluginPreset;
  lVar10 = -(ulonglong)((pUVar5->Settings).RoomRotation.W != (this->ReverbSettings).RoomRotation.W);
  lVar11 = -(ulonglong)((this->ReverbSettings).RoomRotation.Y != (pUVar5->Settings).RoomRotation.Y);
  auVar6._8_4_ = (int)lVar10;
  auVar6._0_8_ = -(ulonglong)
                  ((pUVar5->Settings).RoomRotation.Z != (this->ReverbSettings).RoomRotation.Z);
  auVar6._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
  uVar9 = movmskpd(in_EDX,auVar6);
  auVar7._8_4_ = (int)lVar11;
  auVar7._0_8_ = -(ulonglong)
                  ((this->ReverbSettings).RoomRotation.X != (pUVar5->Settings).RoomRotation.X);
  auVar7._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  iVar8 = movmskpd(in_EAX,auVar7);
  if ((uVar9 & 0x3fffffff) != 0 || iVar8 != 0) {
    dVar1 = (pUVar5->Settings).RoomRotation.Y;
    (this->ReverbSettings).RoomRotation.X = (pUVar5->Settings).RoomRotation.X;
    (this->ReverbSettings).RoomRotation.Y = dVar1;
    dVar1 = (pUVar5->Settings).RoomRotation.W;
    (this->ReverbSettings).RoomRotation.Z = (pUVar5->Settings).RoomRotation.Z;
    (this->ReverbSettings).RoomRotation.W = dVar1;
    dVar1 = (this->ReverbSettings).RoomRotation.Y;
    dVar2 = (this->ReverbSettings).RoomRotation.Z;
    dVar3 = (this->ReverbSettings).RoomRotation.X;
    dVar4 = (this->ReverbSettings).RoomRotation.W;
    uVar9 = SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    (this->RoomProperties).rotation[0] =
         (float)(double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
    (this->RoomProperties).rotation[1] = (float)(double)CONCAT44(uVar12,uVar9);
    (this->RoomProperties).rotation[2] = (float)dVar3;
    (this->RoomProperties).rotation[3] = (float)dVar4;
  }
  return;
}

// UpdateRoomEffects @ 14f04dc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ResonanceAudio::FResonanceAudioReverb::UpdateRoomEffects(FResonanceAudioReverb *this)

{
  double dVar1;
  ERaMaterialName EVar2;
  UResonanceAudioReverbPluginPreset *pUVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  int iVar10;
  MaterialName MVar11;
  ReflectionProperties *pRVar12;
  ReverbProperties *pRVar13;
  uint uVar14;
  ResonanceAudioApi *pRVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  undefined1 auStack_98 [32];
  ReflectionProperties local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pRVar15 = this->ResonanceAudioApi;
  if (pRVar15 != (ResonanceAudioApi *)0x0) {
    if (this->ReverbPluginPreset == (UResonanceAudioReverbPluginPreset *)0x0) {
      (**(code **)((longlong)*pRVar15 + 0xe0))();
    }
    else {
      uVar9 = (**(code **)((longlong)*pRVar15 + 0xe0))
                        (pRVar15,(this->ReverbPluginPreset->Settings).bEnableRoomEffects);
      dVar8 = __real_3f847ae140000000;
      pUVar3 = this->ReverbPluginPreset;
      if ((pUVar3->Settings).bEnableRoomEffects != false) {
        if ((((pUVar3->Settings).RoomPosition.field0_0x0._s_0.X !=
              (this->ReverbSettings).RoomPosition.field0_0x0._s_0.X) ||
            ((pUVar3->Settings).RoomPosition.field0_0x0._s_0.Y !=
             (this->ReverbSettings).RoomPosition.field0_0x0._s_0.Y)) ||
           ((pUVar3->Settings).RoomPosition.field0_0x0._s_0.Z !=
            (this->ReverbSettings).RoomPosition.field0_0x0._s_0.Z)) {
          dVar20 = (pUVar3->Settings).RoomPosition.field0_0x0._s_0.Y;
          (this->ReverbSettings).RoomPosition.field0_0x0._s_0.X =
               (pUVar3->Settings).RoomPosition.field0_0x0._s_0.X;
          (this->ReverbSettings).RoomPosition.field0_0x0._s_0.Y = dVar20;
          dVar20 = (pUVar3->Settings).RoomPosition.field0_0x0._s_0.Z;
          (this->ReverbSettings).RoomPosition.field0_0x0._s_0.Z = dVar20;
          dVar18 = (this->ReverbSettings).RoomPosition.field0_0x0._s_0.X * __real_bf847ae140000000;
          (this->RoomProperties).position[0] =
               (float)((this->ReverbSettings).RoomPosition.field0_0x0._s_0.Y * dVar8);
          (this->RoomProperties).position[1] = (float)(dVar20 * dVar8);
          (this->RoomProperties).position[2] = (float)dVar18;
        }
        lVar16 = -(ulonglong)
                  ((pUVar3->Settings).RoomRotation.W != (this->ReverbSettings).RoomRotation.W);
        auVar17._8_8_ =
             -(ulonglong)
              ((this->ReverbSettings).RoomRotation.Y != (pUVar3->Settings).RoomRotation.Y);
        auVar17._0_8_ =
             -(ulonglong)
              ((this->ReverbSettings).RoomRotation.X != (pUVar3->Settings).RoomRotation.X);
        auVar4._8_4_ = (int)lVar16;
        auVar4._0_8_ = -(ulonglong)
                        ((pUVar3->Settings).RoomRotation.Z != (this->ReverbSettings).RoomRotation.Z)
        ;
        auVar4._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
        uVar14 = movmskpd((int)pRVar15,auVar4);
        iVar10 = movmskpd(uVar9,auVar17);
        if ((uVar14 & 0x3fffffff) != 0 || iVar10 != 0) {
          dVar20 = (pUVar3->Settings).RoomRotation.Y;
          (this->ReverbSettings).RoomRotation.X = (pUVar3->Settings).RoomRotation.X;
          (this->ReverbSettings).RoomRotation.Y = dVar20;
          dVar20 = (pUVar3->Settings).RoomRotation.W;
          (this->ReverbSettings).RoomRotation.Z = (pUVar3->Settings).RoomRotation.Z;
          (this->ReverbSettings).RoomRotation.W = dVar20;
          dVar20 = (this->ReverbSettings).RoomRotation.Y;
          dVar18 = (this->ReverbSettings).RoomRotation.Z;
          dVar19 = (this->ReverbSettings).RoomRotation.X;
          dVar1 = (this->ReverbSettings).RoomRotation.W;
          uVar14 = SUB84(dVar18,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar21 = (uint)((ulonglong)dVar18 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          (this->RoomProperties).rotation[0] =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^
                                       __xmm_80000000000000008000000000000000._4_4_,
                                       SUB84(dVar20,0) ^
                                       (uint)__xmm_80000000000000008000000000000000);
          (this->RoomProperties).rotation[1] = (float)(double)CONCAT44(uVar21,uVar14);
          (this->RoomProperties).rotation[2] = (float)dVar19;
          (this->RoomProperties).rotation[3] = (float)dVar1;
        }
        uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        if ((((pUVar3->Settings).RoomDimensions.field0_0x0._s_0.X !=
              (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.X) ||
            ((pUVar3->Settings).RoomDimensions.field0_0x0._s_0.Y !=
             (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Y)) ||
           ((pUVar3->Settings).RoomDimensions.field0_0x0._s_0.Z !=
            (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Z)) {
          dVar20 = (pUVar3->Settings).RoomDimensions.field0_0x0._s_0.Y;
          (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.X =
               (pUVar3->Settings).RoomDimensions.field0_0x0._s_0.X;
          (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Y = dVar20;
          dVar20 = (pUVar3->Settings).RoomDimensions.field0_0x0._s_0.Z;
          (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Z = dVar20;
          dVar19 = (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.X * __real_bf847ae140000000
          ;
          dVar18 = (this->ReverbSettings).RoomDimensions.field0_0x0._s_0.Y * dVar8;
          dVar20 = dVar20 * dVar8;
          (this->RoomProperties).dimensions[0] =
               (float)(double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar21,
                                       SUB84(dVar18,0) & uVar14);
          (this->RoomProperties).dimensions[1] =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar21,
                                       SUB84(dVar20,0) & uVar14);
          (this->RoomProperties).dimensions[2] =
               (float)(double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar21,
                                       SUB84(dVar19,0) & uVar14);
        }
        EVar2 = (pUVar3->Settings).LeftWallMaterial;
        if ((this->ReverbSettings).LeftWallMaterial != EVar2) {
          (this->ReverbSettings).LeftWallMaterial = EVar2;
          MVar11 = ConvertToResonanceMaterialName(EVar2);
          (this->RoomProperties).material_names[0] = MVar11;
        }
        EVar2 = (this->ReverbPluginPreset->Settings).RightWallMaterial;
        if ((this->ReverbSettings).RightWallMaterial != EVar2) {
          (this->ReverbSettings).RightWallMaterial = EVar2;
          MVar11 = ConvertToResonanceMaterialName(EVar2);
          (this->RoomProperties).material_names[1] = MVar11;
        }
        EVar2 = (this->ReverbPluginPreset->Settings).FloorMaterial;
        if ((this->ReverbSettings).FloorMaterial != EVar2) {
          (this->ReverbSettings).FloorMaterial = EVar2;
          MVar11 = ConvertToResonanceMaterialName(EVar2);
          (this->RoomProperties).material_names[2] = MVar11;
        }
        EVar2 = (this->ReverbPluginPreset->Settings).CeilingMaterial;
        if ((this->ReverbSettings).CeilingMaterial != EVar2) {
          (this->ReverbSettings).CeilingMaterial = EVar2;
          MVar11 = ConvertToResonanceMaterialName(EVar2);
          (this->RoomProperties).material_names[3] = MVar11;
        }
        EVar2 = (this->ReverbPluginPreset->Settings).FrontWallMaterial;
        if ((this->ReverbSettings).FrontWallMaterial != EVar2) {
          (this->ReverbSettings).FrontWallMaterial = EVar2;
          MVar11 = ConvertToResonanceMaterialName(EVar2);
          (this->RoomProperties).material_names[4] = MVar11;
        }
        EVar2 = (this->ReverbPluginPreset->Settings).BackWallMaterial;
        if ((this->ReverbSettings).BackWallMaterial != EVar2) {
          (this->ReverbSettings).BackWallMaterial = EVar2;
          MVar11 = ConvertToResonanceMaterialName(EVar2);
          (this->RoomProperties).material_names[5] = MVar11;
        }
        pUVar3 = this->ReverbPluginPreset;
        (this->RoomProperties).reflection_scalar = (pUVar3->Settings).ReflectionScalar;
        (this->RoomProperties).reverb_gain = (pUVar3->Settings).ReverbGain;
        (this->RoomProperties).reverb_time = (pUVar3->Settings).ReverbTimeModifier;
        (this->RoomProperties).reverb_brightness = (pUVar3->Settings).ReverbBrightness;
        pRVar12 = vraudio::ComputeReflectionProperties(&local_78,&this->RoomProperties);
        uVar5 = *(undefined8 *)(pRVar12->room_position + 2);
        *(undefined8 *)(this->ReflectionProperties).room_position =
             *(undefined8 *)pRVar12->room_position;
        *(undefined8 *)((this->ReflectionProperties).room_position + 2) = uVar5;
        uVar5 = *(undefined8 *)(pRVar12->room_rotation + 3);
        *(undefined8 *)((this->ReflectionProperties).room_rotation + 1) =
             *(undefined8 *)(pRVar12->room_rotation + 1);
        *(undefined8 *)((this->ReflectionProperties).room_rotation + 3) = uVar5;
        fVar6 = pRVar12->cutoff_frequency;
        fVar7 = pRVar12->coefficients[0];
        *(undefined8 *)((this->ReflectionProperties).room_dimensions + 1) =
             *(undefined8 *)(pRVar12->room_dimensions + 1);
        (this->ReflectionProperties).cutoff_frequency = fVar6;
        (this->ReflectionProperties).coefficients[0] = fVar7;
        uVar5 = *(undefined8 *)(pRVar12->coefficients + 3);
        *(undefined8 *)((this->ReflectionProperties).coefficients + 1) =
             *(undefined8 *)(pRVar12->coefficients + 1);
        *(undefined8 *)((this->ReflectionProperties).coefficients + 3) = uVar5;
        *(undefined8 *)((this->ReflectionProperties).coefficients + 5) =
             *(undefined8 *)(pRVar12->coefficients + 5);
        pRVar13 = vraudio::ComputeReverbProperties
                            ((ReverbProperties *)&local_78,&this->RoomProperties);
        pRVar15 = this->ResonanceAudioApi;
        uVar5 = *(undefined8 *)(pRVar13->rt60_values + 2);
        *(undefined8 *)(this->ReverbProperties).rt60_values = *(undefined8 *)pRVar13->rt60_values;
        *(undefined8 *)((this->ReverbProperties).rt60_values + 2) = uVar5;
        uVar5 = *(undefined8 *)(pRVar13->rt60_values + 6);
        *(undefined8 *)((this->ReverbProperties).rt60_values + 4) =
             *(undefined8 *)(pRVar13->rt60_values + 4);
        *(undefined8 *)((this->ReverbProperties).rt60_values + 6) = uVar5;
        *(undefined8 *)((this->ReverbProperties).rt60_values + 8) =
             *(undefined8 *)(pRVar13->rt60_values + 8);
        (**(code **)((longlong)*pRVar15 + 0xe8))(pRVar15,&this->ReflectionProperties);
        (**(code **)((longlong)*this->ResonanceAudioApi + 0xf0))
                  (this->ResonanceAudioApi,&this->ReverbProperties);
      }
    }
  }
  return;
}

