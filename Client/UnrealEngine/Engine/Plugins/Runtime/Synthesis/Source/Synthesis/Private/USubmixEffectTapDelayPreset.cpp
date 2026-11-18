// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 30

// StaticClass @ 14f0a85b0

UClass * __cdecl USubmixEffectTapDelayPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectTapDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectTapDelayPreset,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectTapDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectTapDelayPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton;
}

// USubmixEffectTapDelayPreset @ 14f0bb9b0

USubmixEffectTapDelayPreset * __thiscall
USubmixEffectTapDelayPreset::USubmixEffectTapDelayPreset
          (USubmixEffectTapDelayPreset *this,FVTableHelper *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectTapDelayPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).MaximumDelayLength = 10000.0;
  (this->SettingsCopy).Taps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SettingsCopy).Taps.ArrayNum = 0;
  (this->SettingsCopy).Taps.ArrayMax = 0;
  (this->Settings).Taps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).Taps.ArrayNum = 0;
  (this->Settings).Taps.ArrayMax = 0;
  (this->DynamicSettings).Taps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicSettings).Taps.ArrayNum = 0;
  (this->DynamicSettings).Taps.ArrayMax = 0;
  (this->SettingsCopy).InterpolationTime = 400.0;
  (this->Settings).MaximumDelayLength = 10000.0;
  (this->Settings).InterpolationTime = 400.0;
  (this->DynamicSettings).MaximumDelayLength = 10000.0;
  (this->DynamicSettings).InterpolationTime = 400.0;
  return this;
}

// USubmixEffectTapDelayPreset @ 14f0bba50

USubmixEffectTapDelayPreset * __thiscall
USubmixEffectTapDelayPreset::USubmixEffectTapDelayPreset
          (USubmixEffectTapDelayPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectTapDelayPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).MaximumDelayLength = 10000.0;
  (this->SettingsCopy).Taps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SettingsCopy).Taps.ArrayNum = 0;
  (this->SettingsCopy).Taps.ArrayMax = 0;
  (this->Settings).Taps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).Taps.ArrayNum = 0;
  (this->Settings).Taps.ArrayMax = 0;
  (this->DynamicSettings).Taps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicSettings).Taps.ArrayNum = 0;
  (this->DynamicSettings).Taps.ArrayMax = 0;
  (this->SettingsCopy).InterpolationTime = 400.0;
  (this->Settings).MaximumDelayLength = 10000.0;
  (this->Settings).InterpolationTime = 400.0;
  (this->DynamicSettings).MaximumDelayLength = 10000.0;
  (this->DynamicSettings).InterpolationTime = 400.0;
  return this;
}

// ~USubmixEffectTapDelayPreset @ 14f0c0830

void __thiscall
USubmixEffectTapDelayPreset::~USubmixEffectTapDelayPreset(USubmixEffectTapDelayPreset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USubmixEffectTapDelayPreset__6B_;
  pFVar1 = (this->DynamicSettings).Taps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).Taps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SettingsCopy).Taps.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  return;
}

// operator() @ 14f0c3930

void __thiscall
`USubmixEffectTapDelayPreset::SetTap'::__l9::<lambda_1>::operator()
          (void *this,FSubmixEffectTapDelay *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (param_1->TargetTaps).ArrayNum;
  pFVar4 = (param_1->TargetTaps).AllocatorInstance.Data;
  iVar3 = *(int *)this;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((param_1->TargetTaps).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTapDelayInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(int *)(pFVar4 + 0x14) == iVar3) {
      *pFVar4 = *(FScriptContainerElement *)((longlong)this + 4);
      fVar5 = param_1->MaxDelayLineLength;
      if (*(float *)((longlong)this + 8) <= param_1->MaxDelayLineLength) {
        fVar5 = *(float *)((longlong)this + 8);
      }
      if (fVar5 <= __real_3dcccccd) {
        fVar5 = __real_3dcccccd;
      }
      *(float *)(pFVar4 + 4) = fVar5;
      fVar5 = __real_41200000;
      *(undefined4 *)(pFVar4 + 0x10) = *(undefined4 *)((longlong)this + 0x14);
      *(undefined4 *)(pFVar4 + 0xc) = *(undefined4 *)((longlong)this + 0x10);
      fVar5 = powf(fVar5,*(float *)((longlong)this + 0xc) * __real_3d4ccccd);
      *(float *)(pFVar4 + 8) = fVar5;
      param_1->bSettingsModified = true;
      return;
    }
    pFVar4 = pFVar4 + 0x18;
  }
  return;
}

// AddTap @ 14f0c99b0

void __thiscall USubmixEffectTapDelayPreset::AddTap(USubmixEffectTapDelayPreset *this,int *param_1)

{
  int *piVar1;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  code *local_38 [2];
  undefined **local_28;
  int local_20;
  undefined8 local_10;
  
  pTVar2 = &(this->DynamicSettings).Taps;
  local_58 = CONCAT31(local_58._1_3_,1);
  uStack_54 = 0x447a0000;
  uStack_50 = 0xc0400000;
  iStack_44 = TapDelayUtils::IdCount;
  iVar7 = TapDelayUtils::IdCount + 1;
  *param_1 = TapDelayUtils::IdCount;
  TapDelayUtils::IdCount = iVar7;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  uStack_4c = 0;
  uStack_48 = 0;
  if ((pFVar3 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 <
      pFVar3 + (longlong)(this->DynamicSettings).Taps.ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->DynamicSettings).Taps.ArrayNum;
  piVar1 = &(this->DynamicSettings).Taps.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&pTVar2->AllocatorInstance,piVar1);
  }
  local_10 = 0;
  (this->DynamicSettings).Taps.ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar7 * 0x18;
  *(ulonglong *)pFVar3 = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_4c,uStack_50);
  *(ulonglong *)(pFVar4 + (longlong)iVar7 * 0x18 + 0x10) = CONCAT44(iStack_44,uStack_48);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectTapDelayPreset::AddTap'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_20 = *param_1;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectTapDelayPreset::AddTap'::__l2::<lambda_1>,void,FSubmixEffectTapDelay_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSubmixEffectTapDelay_&)> *)local_38
            );
  return;
}

// CanFilter @ 14f0cbc80

bool __thiscall USubmixEffectTapDelayPreset::CanFilter(USubmixEffectTapDelayPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d1250

FSoundEffectBase * __thiscall
USubmixEffectTapDelayPreset::CreateNewEffect(USubmixEffectTapDelayPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x160);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    *(undefined4 *)&this_00[1]._padding_ = 0xffffffff;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSubmixEffectTapDelay__6B_;
    *(undefined4 *)this_00[1].SettingsCritSect.CriticalSection.Opaque1 = 0;
    *(undefined4 *)((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque1 + 4) = 0xffffffff;
    *(undefined1 *)this_00[1].SettingsCritSect.CriticalSection.Opaque2 = 0;
    *(undefined4 *)this_00[1].SettingsCritSect.CriticalSection.Opaque3 = 0x461c4000;
    *(undefined4 *)((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque3 + 4) = 0x43c80000;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[1] = (void *)0x0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[2] = (void *)0x0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&this_00[1].CurrentAudioThreadSettingsData,4000);
    *(undefined4 *)&this_00[1].CommandQueue.Head = 0;
    *(undefined4 *)((longlong)&this_00[1].CommandQueue.Head + 4) = 0x461c4000;
    this_00[2]._padding_ = 0;
    this_00[2]._padding_ = 0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0x0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    *(undefined4 *)this_00[2].SettingsCritSect.CriticalSection.Opaque3 = 0;
    Audio::FDelay::FDelay((FDelay *)(this_00[2].SettingsCritSect.CriticalSection.Opaque3 + 1));
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d2a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USubmixEffectTapDelayPreset::CreateNewPreset
          (USubmixEffectTapDelayPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

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

// GetAssetActionName @ 14f0d8bc0

FText * __thiscall
USubmixEffectTapDelayPreset::GetAssetActionName
          (USubmixEffectTapDelayPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SubmixEffectTapDelay");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f0dd440

UClass * __cdecl USubmixEffectTapDelayPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectTapDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectTapDelayPreset,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectTapDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectTapDelayPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0def40

UClass * __thiscall
USubmixEffectTapDelayPreset::GetSupportedClass(USubmixEffectTapDelayPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectTapDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectTapDelayPreset,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectTapDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectTapDelayPreset>,aFStackX_8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectTapDelayPreset.InnerSingleton;
}

// GetTap @ 14f0def50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USubmixEffectTapDelayPreset::GetTap
          (USubmixEffectTapDelayPreset *this,int param_1,FTapDelayInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar3 = (this->DynamicSettings).Taps.ArrayNum;
  pFVar5 = (this->DynamicSettings).Taps.AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar3 * 0x18;
  while( true ) {
    if ((this->DynamicSettings).Taps.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FTapDelayInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    if (*(int *)(pFVar5 + 0x14) == param_1) {
      uVar2 = *(undefined8 *)pFVar5;
      uVar4 = *(undefined8 *)(pFVar5 + 8);
      param_2->TapLineMode = (char)uVar2;
      *(int3 *)&param_2->field_0x1 = (int3)((ulonglong)uVar2 >> 8);
      param_2->DelayLength = (float)(int)((ulonglong)uVar2 >> 0x20);
      param_2->Gain = (float)(int)uVar4;
      param_2->OutputChannel = (int)((ulonglong)uVar4 >> 0x20);
      uVar2 = *(undefined8 *)(pFVar5 + 0x10);
      param_2->PanInDegrees = (float)(int)uVar2;
      param_2->TapId = (int)((ulonglong)uVar2 >> 0x20);
      return;
    }
    pFVar5 = pFVar5 + 0x18;
  }
  if ((byte)LogTapDelay._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTapDelay);
  return;
}

// GetTapIds @ 14f0df010

void __thiscall
USubmixEffectTapDelayPreset::GetTapIds
          (USubmixEffectTapDelayPreset *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->DynamicSettings).Taps.AllocatorInstance.Data;
  iVar2 = (this->DynamicSettings).Taps.ArrayNum;
  pFVar9 = pFVar8 + 0x14;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->DynamicSettings).Taps.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTapDelayInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pFVar4 = (param_1->AllocatorInstance).Data;
    if ((pFVar4 <= pFVar9) && (pFVar9 < pFVar4 + (longlong)param_1->ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar7;
    }
    param_1->ArrayNum = iVar7 + 1;
    pFVar8 = pFVar8 + 0x18;
    uVar3 = *(undefined4 *)pFVar9;
    pFVar9 = pFVar9 + 0x18;
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = uVar3;
  }
  return;
}

// HasAssetActions @ 14f0df650

bool __thiscall USubmixEffectTapDelayPreset::HasAssetActions(USubmixEffectTapDelayPreset *this)

{
  return true;
}

// Init @ 14f0e6430

void __thiscall USubmixEffectTapDelayPreset::Init(USubmixEffectTapDelayPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SettingsCopy).MaximumDelayLength = (this->Settings).MaximumDelayLength;
    (this->SettingsCopy).InterpolationTime = (this->Settings).InterpolationTime;
    TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_>::operator=
              (&(this->SettingsCopy).Taps,&(this->Settings).Taps);
                    /* WARNING: Could not recover jumptable at 0x00014f0e6487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnInit @ 14f0ea980

void __thiscall USubmixEffectTapDelayPreset::OnInit(USubmixEffectTapDelayPreset *this)

{
  (this->DynamicSettings).MaximumDelayLength = (this->Settings).MaximumDelayLength;
  (this->DynamicSettings).InterpolationTime = (this->Settings).InterpolationTime;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DynamicSettings).Taps,&(this->Settings).Taps);
  return;
}

// RemoveTap @ 14f0f7a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USubmixEffectTapDelayPreset::RemoveTap(USubmixEffectTapDelayPreset *this,int param_1)

{
  int *piVar1;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  code *local_48 [2];
  undefined **local_38;
  int local_30;
  undefined8 local_20;
  
  iVar11 = (this->DynamicSettings).Taps.ArrayNum;
  uVar8 = 0;
  if (0 < iVar11) {
    pTVar2 = &(this->DynamicSettings).Taps;
    lVar10 = 0;
    do {
      uVar9 = ~uVar8 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar8 < iVar11) {
        uVar7 = uVar9;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)((pTVar2->AllocatorInstance).Data + lVar10 + 0x14) == param_1) {
        uVar7 = 0;
        if ((int)uVar8 < (this->DynamicSettings).Taps.ArrayNum) {
          uVar7 = uVar9;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar3 = (this->DynamicSettings).Taps.ArrayNum;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        iVar11 = iVar3 + ~uVar8;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar8 * 0x18,pFVar4 + (longlong)(iVar3 - iVar11) * 0x18,
                  (longlong)iVar11 * 0x18);
        }
        piVar1 = &(this->DynamicSettings).Taps.ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,&pTVar2->AllocatorInstance,(this->DynamicSettings).Taps.ArrayNum,
                   &(this->DynamicSettings).Taps.ArrayMax);
        local_20 = 0;
        local_38 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`USubmixEffectTapDelayPreset::RemoveTap'::`7'::<lambda_1>,0,0>
                    ::_vftable_;
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`USubmixEffectTapDelayPreset::RemoveTap'::__l7::<lambda_1>,void,FSubmixEffectTapDelay_&>
                      ::Call;
        local_30 = param_1;
        USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>
                  ((USoundEffectPreset *)this,
                   (TFunction<void___cdecl(FSubmixEffectTapDelay_&)> *)local_48);
        return;
      }
      iVar11 = (this->DynamicSettings).Taps.ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((int)uVar8 < iVar11);
  }
  if (2 < (byte)LogTapDelay._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTapDelay);
  }
  return;
}

// SetInterpolationTime @ 14f0fcf10

void __thiscall
USubmixEffectTapDelayPreset::SetInterpolationTime(USubmixEffectTapDelayPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  (this->DynamicSettings).InterpolationTime = param_1;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetInterpolationTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectTapDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,void,FSubmixEffectTapDelay_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSubmixEffectTapDelay_&)> *)local_38
            );
  return;
}

// SetSettings @ 14f101c60

void __thiscall
USubmixEffectTapDelayPreset::SetSettings
          (USubmixEffectTapDelayPreset *this,FSubmixEffectTapDelaySettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  (this->DynamicSettings).MaximumDelayLength = param_1->MaximumDelayLength;
  (this->DynamicSettings).InterpolationTime = param_1->InterpolationTime;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DynamicSettings).Taps,&param_1->Taps);
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SettingsCopy).MaximumDelayLength = param_1->MaximumDelayLength;
    (this->SettingsCopy).InterpolationTime = param_1->InterpolationTime;
    TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_>::operator=
              (&(this->SettingsCopy).Taps,&param_1->Taps);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f101ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetTap @ 14f102b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USubmixEffectTapDelayPreset::SetTap
          (USubmixEffectTapDelayPreset *this,int param_1,FTapDelayInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  code *local_48 [5];
  undefined8 *local_20;
  
  iVar4 = (this->DynamicSettings).Taps.ArrayNum;
  pFVar9 = (this->DynamicSettings).Taps.AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->DynamicSettings).Taps.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FTapDelayInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar1) break;
    if (*(int *)(pFVar9 + 0x14) == param_1) {
      uVar5 = *(undefined8 *)&param_2->Gain;
      local_48[0] = (code *)0x0;
      *(undefined8 *)pFVar9 = *(undefined8 *)param_2;
      *(undefined8 *)(pFVar9 + 8) = uVar5;
      *(undefined8 *)(pFVar9 + 0x10) = *(undefined8 *)&param_2->PanInDegrees;
      *(int *)(pFVar9 + 0x14) = param_1;
      uVar5._0_1_ = param_2->TapLineMode;
      uVar5._1_3_ = *(undefined3 *)&param_2->field_0x1;
      uVar5._4_4_ = param_2->DelayLength;
      uVar6 = param_2->Gain;
      uVar7 = param_2->OutputChannel;
      uVar2 = param_2->PanInDegrees;
      uVar3 = param_2->TapId;
      uStack_64 = (undefined4)uVar5;
      local_20 = FMemory::Malloc(0x28,8);
      uVar5 = CONCAT44(uVar6,uVar5._4_4_);
      uVar8 = CONCAT44(uVar2,uVar7);
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetTap'::`9'::<lambda_1>,0,1>
                   ::_vftable_;
      local_20[1] = CONCAT44(uStack_64,param_1);
      local_20[2] = uVar5;
      local_20[3] = uVar8;
      *(undefined4 *)(local_20 + 4) = uVar3;
      if (local_20 + 1 != (undefined8 *)0x0) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`USubmixEffectTapDelayPreset::SetTap'::__l9::<lambda_1>,void,FSubmixEffectTapDelay_&>
                      ::Call;
      }
      USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>
                ((USoundEffectPreset *)this,
                 (TFunction<void___cdecl(FSubmixEffectTapDelay_&)> *)local_48);
      return;
    }
    pFVar9 = pFVar9 + 0x18;
  }
  if ((byte)LogTapDelay._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTapDelay);
  return;
}

// StaticRegisterNativesUSubmixEffectTapDelayPreset @ 14f103c00

void __cdecl USubmixEffectTapDelayPreset::StaticRegisterNativesUSubmixEffectTapDelayPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddTap @ 14f10b9e0

void __cdecl USubmixEffectTapDelayPreset::execAddTap(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  FProperty *pFVar3;
  ForAnyElementType FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  int local_res8 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  code *local_38 [2];
  undefined **local_28;
  int local_20;
  undefined8 local_10;
  
  local_res8[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58 = CONCAT31(local_58._1_3_,1);
  uStack_54 = 0x447a0000;
  piVar8 = local_res8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar8 = (int *)param_2->MostRecentPropertyAddress;
  }
  uStack_50 = 0xc0400000;
  uStack_4c = 0;
  uStack_48 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iStack_44 = TapDelayUtils::IdCount;
  pUVar1 = param_1 + 5;
  iVar7 = TapDelayUtils::IdCount + 1;
  *piVar8 = TapDelayUtils::IdCount;
  TapDelayUtils::IdCount = iVar7;
  if ((*(FScriptContainerElement **)pUVar1 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 <
      *(FScriptContainerElement **)pUVar1 + (longlong)*(int *)&param_1[5].field_0xc * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = *(int *)&param_1[5].field_0x8;
  if (iVar7 == *(int *)&param_1[5].field_0xc) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,(ForAnyElementType *)pUVar1,(int *)&param_1[5].field_0xc);
  }
  local_10 = 0;
  *(int *)&param_1[5].field_0x8 = iVar7 + 1;
  FVar4.Data = *(FScriptContainerElement **)pUVar1;
  pFVar2 = FVar4.Data + (longlong)iVar7 * 0x18;
  *(ulonglong *)pFVar2 = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_4c,uStack_50);
  *(ulonglong *)(FVar4.Data + (longlong)iVar7 * 0x18 + 0x10) = CONCAT44(iStack_44,uStack_48);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectTapDelayPreset::AddTap'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_20 = *piVar8;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectTapDelayPreset::AddTap'::__l2::<lambda_1>,void,FSubmixEffectTapDelay_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSubmixEffectTapDelay_&)> *)local_38);
  return;
}

// execGetMaxDelayInMilliseconds @ 14f10c560

void __cdecl
USubmixEffectTapDelayPreset::execGetMaxDelayInMilliseconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[4].field_0x20;
  return;
}

// execGetTap @ 14f10c670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USubmixEffectTapDelayPreset::execGetTap(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  uchar *puVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  uchar local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  int local_34;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_34 = TapDelayUtils::IdCount;
  TapDelayUtils::IdCount = TapDelayUtils::IdCount + 1;
  local_48[0] = '\x01';
  local_44 = 0x447a0000;
  local_40 = 0xc0400000;
  local_3c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  iVar5 = local_res10[0];
  puVar7 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[5].field_0x8;
  puVar6 = *(undefined8 **)(param_1 + 5);
  puVar1 = puVar6 + (longlong)iVar2 * 3;
  while( true ) {
    if (*(int *)&param_1[5].field_0x8 != iVar2) {
      `TCheckedPointerIterator<FTapDelayInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar6 == puVar1) break;
    if (*(int *)((longlong)puVar6 + 0x14) == iVar5) {
      uVar4 = puVar6[1];
      *(undefined8 *)puVar7 = *puVar6;
      *(undefined8 *)(puVar7 + 8) = uVar4;
      *(undefined8 *)(puVar7 + 0x10) = puVar6[2];
      return;
    }
    puVar6 = puVar6 + 3;
  }
  if ((byte)LogTapDelay._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTapDelay);
  return;
}

// execGetTapIds @ 14f10c7f0

void __cdecl
USubmixEffectTapDelayPreset::execGetTapIds(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  FProperty *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  undefined8 local_30;
  
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar8 = &local_38;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar8 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = *(longlong *)(param_1 + 5);
  iVar2 = *(int *)&param_1[5].field_0x8;
  pFVar10 = (FScriptContainerElement *)(lVar9 + 0x14);
  lVar1 = lVar9 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (*(int *)&param_1[5].field_0x8 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTapDelayInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (lVar9 == lVar1) break;
    if ((pFVar8->Data <= pFVar10) &&
       (pFVar10 < pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = *(int *)&pFVar8[1].Data;
    if (iVar7 == *(int *)((longlong)&pFVar8[1].Data + 4)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar8,(int *)((longlong)&pFVar8[1].Data + 4));
      *(int *)&pFVar8[1].Data = iVar7;
    }
    *(int *)&pFVar8[1].Data = iVar7 + 1;
    lVar9 = lVar9 + 0x18;
    uVar3 = *(undefined4 *)pFVar10;
    pFVar10 = pFVar10 + 0x18;
    *(undefined4 *)(pFVar8->Data + (longlong)iVar7 * 4) = uVar3;
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execRemoveTap @ 14f10d530

void __cdecl
USubmixEffectTapDelayPreset::execRemoveTap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
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
  RemoveTap((USubmixEffectTapDelayPreset *)param_1,local_res10[0]);
  return;
}

// execSetInterpolationTime @ 14f111fb0

void __cdecl
USubmixEffectTapDelayPreset::execSetInterpolationTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  undefined4 local_20;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_20 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetInterpolationTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectTapDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,void,FSubmixEffectTapDelay_&>
                ::Call;
  *(undefined4 *)&param_1[4].field_0x24 = local_res8[0];
  USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSubmixEffectTapDelay_&)> *)local_38);
  return;
}

// execSetSettings @ 14f116d00

void __cdecl
USubmixEffectTapDelayPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar *puVar5;
  uchar local_28 [8];
  void *local_20;
  undefined8 local_18;
  
  local_28[0] = '\0';
  local_28[1] = '@';
  local_28[2] = '\x1c';
  local_28[3] = 'F';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = 200;
  local_28[7] = 'C';
  local_20 = (void *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar5 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  param_1[4].field_0x20 = puVar5[0];
  param_1[4].field_0x21 = uVar2;
  param_1[4].field_0x22 = uVar3;
  param_1[4].field_0x23 = uVar4;
  uVar2 = puVar5[5];
  uVar3 = puVar5[6];
  uVar4 = puVar5[7];
  param_1[4].field_0x24 = puVar5[4];
  param_1[4].field_0x25 = uVar2;
  param_1[4].field_0x26 = uVar3;
  param_1[4].field_0x27 = uVar4;
  TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *)(param_1 + 5),
             (TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *)(puVar5 + 8));
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    param_1[3].field_0x18 = puVar5[0];
    param_1[3].field_0x19 = uVar2;
    param_1[3].field_0x1a = uVar3;
    param_1[3].field_0x1b = uVar4;
    uVar2 = puVar5[5];
    uVar3 = puVar5[6];
    uVar4 = puVar5[7];
    param_1[3].field_0x1c = puVar5[4];
    param_1[3].field_0x1d = uVar2;
    param_1[3].field_0x1e = uVar3;
    param_1[3].field_0x1f = uVar4;
    TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *)&param_1[3].field_0x20,
               (TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *)(puVar5 + 8));
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execSetTap @ 14f117f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USubmixEffectTapDelayPreset::execSetTap(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  uchar *puVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  uchar local_a8 [4];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  code *local_68 [5];
  undefined8 *local_40;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_94 = TapDelayUtils::IdCount;
  TapDelayUtils::IdCount = TapDelayUtils::IdCount + 1;
  local_a8[0] = '\x01';
  local_a4 = 0x447a0000;
  local_a0 = 0xc0400000;
  local_9c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  iVar5 = local_res10[0];
  puVar7 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[5].field_0x8;
  puVar6 = *(undefined8 **)(param_1 + 5);
  puVar1 = puVar6 + (longlong)iVar2 * 3;
  while( true ) {
    if (*(int *)&param_1[5].field_0x8 != iVar2) {
      `TCheckedPointerIterator<FTapDelayInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar6 == puVar1) break;
    if (*(int *)((longlong)puVar6 + 0x14) == iVar5) {
      uVar4 = *(undefined8 *)(puVar7 + 8);
      local_90 = iVar5;
      local_68[0] = (code *)0x0;
      *puVar6 = *(undefined8 *)puVar7;
      puVar6[1] = uVar4;
      puVar6[2] = *(undefined8 *)(puVar7 + 0x10);
      *(int *)((longlong)puVar6 + 0x14) = iVar5;
      uStack_8c = (undefined4)*(undefined8 *)puVar7;
      uStack_88 = (undefined4)((ulonglong)*(undefined8 *)puVar7 >> 0x20);
      uStack_84 = (undefined4)*(undefined8 *)(puVar7 + 8);
      uStack_80 = (undefined4)((ulonglong)*(undefined8 *)(puVar7 + 8) >> 0x20);
      uStack_7c = (undefined4)*(undefined8 *)(puVar7 + 0x10);
      uStack_78 = (undefined4)((ulonglong)*(undefined8 *)(puVar7 + 0x10) >> 0x20);
      local_40 = FMemory::Malloc(0x28,8);
      *local_40 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetTap'::`9'::<lambda_1>,0,1>
                   ::_vftable_;
      local_40[1] = CONCAT44(uStack_8c,local_90);
      local_40[2] = CONCAT44(uStack_84,uStack_88);
      local_40[3] = CONCAT44(uStack_7c,uStack_80);
      *(undefined4 *)(local_40 + 4) = uStack_78;
      if (local_40 + 1 != (undefined8 *)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`USubmixEffectTapDelayPreset::SetTap'::__l9::<lambda_1>,void,FSubmixEffectTapDelay_&>
                      ::Call;
      }
      USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>
                ((USoundEffectPreset *)param_1,
                 (TFunction<void___cdecl(FSubmixEffectTapDelay_&)> *)local_68);
      return;
    }
    puVar6 = puVar6 + 3;
  }
  if ((byte)LogTapDelay._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTapDelay);
  return;
}

