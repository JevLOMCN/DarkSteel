// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 9

// StaticClass @ 1443ecf70

UClass * __cdecl UDataflowSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowCore",L"DataflowSettings",
               &Z_Registration_Info_UClass_UDataflowSettings.InnerSingleton,
               StaticRegisterNativesUDataflowSettings,0x138,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<UDataflowSettings>,
               InternalVTableHelperCtorCaller<UDataflowSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSettings.InnerSingleton;
}

// UDataflowSettings @ 144432630

UDataflowSettings * __thiscall
UDataflowSettings::UDataflowSettings(UDataflowSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UDataflowSettings__6B_;
  *(undefined8 *)&(this->NodeColorsMap).field_0x8 = 0;
  *(undefined8 *)&this->NodeColorsMap = 0;
  *(undefined8 *)&(this->NodeColorsMap).field_0x20 = 0;
  *(undefined4 *)&(this->NodeColorsMap).field_0x28 = 0;
  *(undefined4 *)&(this->NodeColorsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeColorsMap).field_0x34 = 0;
  *(undefined4 *)&(this->NodeColorsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NodeColorsMap).field_0x40 = 0;
  *(undefined4 *)&(this->NodeColorsMap).field_0x48 = 0;
  *(undefined8 *)&(this->PinSettingsMap).field_0x8 = 0;
  *(undefined8 *)&this->PinSettingsMap = 0;
  *(undefined8 *)&(this->PinSettingsMap).field_0x20 = 0;
  *(undefined4 *)&(this->PinSettingsMap).field_0x28 = 0;
  *(undefined4 *)&(this->PinSettingsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PinSettingsMap).field_0x34 = 0;
  *(undefined4 *)&(this->PinSettingsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PinSettingsMap).field_0x40 = 0;
  *(undefined4 *)&(this->PinSettingsMap).field_0x48 = 0;
  (this->TransformLevelColors).LevelColors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformLevelColors).LevelColors.ArrayNum = 0;
  (this->TransformLevelColors).LevelColors.ArrayMax = 0;
  *(undefined8 *)&this->OnDataflowSettingsChangedDelegate = 0;
  *(undefined8 *)&(this->OnDataflowSettingsChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataflowSettingsChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnDataflowSettingsChangedPinSettingsDelegate = 0;
  *(undefined8 *)&(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x10 = 0;
  (this->TransformLevelColors).BlankColor.field0_0x0._s_0.R = 255.0;
  (this->TransformLevelColors).BlankColor.field0_0x0._s_0.G = 255.0;
  (this->TransformLevelColors).BlankColor.field0_0x0._s_0.B = 255.0;
  (this->TransformLevelColors).BlankColor.field0_0x0._s_0.A = 255.0;
  *(undefined8 *)&(this->OnDataflowSettingsChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x18 = 2;
  return this;
}

// UDataflowSettings @ 144432740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDataflowSettings * __thiscall
UDataflowSettings::UDataflowSettings(UDataflowSettings *this,FObjectInitializer *param_1)

{
  int *piVar1;
  int *piVar2;
  FTransformLevelColors *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  UDataflowSettings *pUVar11;
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  pFVar3 = &this->TransformLevelColors;
  this->_padding_ = (longlong)&___7UDataflowSettings__6B_;
  piVar1 = &(this->TransformLevelColors).LevelColors.ArrayNum;
  *(undefined8 *)&(this->NodeColorsMap).field_0x8 = 0;
  piVar2 = &(this->TransformLevelColors).LevelColors.ArrayMax;
  *(undefined8 *)&this->NodeColorsMap = 0;
  *(undefined8 *)&(this->NodeColorsMap).field_0x20 = 0;
  *(undefined4 *)&(this->NodeColorsMap).field_0x28 = 0;
  *(undefined4 *)&(this->NodeColorsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeColorsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeColorsMap).field_0x34 = 0;
  *(undefined8 *)&(this->NodeColorsMap).field_0x40 = 0;
  *(undefined4 *)&(this->NodeColorsMap).field_0x48 = 0;
  *(undefined8 *)&(this->PinSettingsMap).field_0x8 = 0;
  *(undefined8 *)&this->PinSettingsMap = 0;
  *(undefined8 *)&(this->PinSettingsMap).field_0x20 = 0;
  *(undefined4 *)&(this->PinSettingsMap).field_0x28 = 0;
  *(undefined4 *)&(this->PinSettingsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PinSettingsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PinSettingsMap).field_0x34 = 0;
  *(undefined8 *)&(this->PinSettingsMap).field_0x40 = 0;
  *(undefined4 *)&(this->PinSettingsMap).field_0x48 = 0;
  (pFVar3->LevelColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->TransformLevelColors).BlankColor.field0_0x0._s_0.R = 255.0;
  (this->TransformLevelColors).BlankColor.field0_0x0._s_0.G = 255.0;
  (this->TransformLevelColors).BlankColor.field0_0x0._s_0.B = 255.0;
  (this->TransformLevelColors).BlankColor.field0_0x0._s_0.A = 255.0;
  *(undefined8 *)&this->OnDataflowSettingsChangedDelegate = 0;
  *(undefined8 *)&(this->OnDataflowSettingsChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataflowSettingsChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnDataflowSettingsChangedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnDataflowSettingsChangedPinSettingsDelegate = 0;
  *(undefined8 *)&(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x18 = 2;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,10,(ForAnyElementType *)pFVar3,piVar1,piVar2);
  fVar8 = FLinearColor::sRGBToLinearTable[0xff];
  fVar7 = FLinearColor::sRGBToLinearTable[0];
  if (*piVar1 < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UDataflowSettings *)(*pcVar5)();
      return pUVar11;
    }
  }
  pFVar4 = (pFVar3->LevelColors).AllocatorInstance.Data;
  *(float *)pFVar4 = fVar7;
  *(float *)(pFVar4 + 4) = fVar8;
  *(float *)(pFVar4 + 8) = fVar8;
  *(float *)(pFVar4 + 0xc) = 1.0;
  fVar9 = FLinearColor::sRGBToLinearTable[0xf3];
  fVar8 = FLinearColor::sRGBToLinearTable[0x9c];
  fVar7 = FLinearColor::sRGBToLinearTable[0x12];
  if (*piVar1 < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UDataflowSettings *)(*pcVar5)();
      return pUVar11;
    }
  }
  pFVar4 = (pFVar3->LevelColors).AllocatorInstance.Data;
  *(float *)(pFVar4 + 0x10) = fVar9;
  *(float *)(pFVar4 + 0x14) = fVar8;
  *(float *)(pFVar4 + 0x18) = fVar7;
  *(undefined4 *)(pFVar4 + 0x1c) = 0x3f800000;
  fVar9 = FLinearColor::sRGBToLinearTable[0xcc];
  fVar8 = FLinearColor::sRGBToLinearTable[0x71];
  fVar7 = FLinearColor::sRGBToLinearTable[0x2e];
  if (*piVar1 < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UDataflowSettings *)(*pcVar5)();
      return pUVar11;
    }
  }
  pFVar4 = (pFVar3->LevelColors).AllocatorInstance.Data;
  *(float *)(pFVar4 + 0x20) = fVar7;
  *(float *)(pFVar4 + 0x24) = fVar9;
  *(float *)(pFVar4 + 0x28) = fVar8;
  *(undefined4 *)(pFVar4 + 0x2c) = 0x3f800000;
  fVar8 = FLinearColor::sRGBToLinearTable[0xff];
  fVar7 = FLinearColor::sRGBToLinearTable[0];
  if (*piVar1 < 4) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UDataflowSettings *)(*pcVar5)();
      return pUVar11;
    }
  }
  pFVar4 = (pFVar3->LevelColors).AllocatorInstance.Data;
  *(float *)(pFVar4 + 0x30) = fVar8;
  *(float *)(pFVar4 + 0x34) = fVar8;
  *(float *)(pFVar4 + 0x38) = fVar7;
  *(undefined4 *)(pFVar4 + 0x3c) = 0x3f800000;
  fVar9 = FLinearColor::sRGBToLinearTable[0xe4];
  fVar8 = FLinearColor::sRGBToLinearTable[0xa9];
  fVar7 = FLinearColor::sRGBToLinearTable[7];
  if (*piVar1 < 5) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UDataflowSettings *)(*pcVar5)();
      return pUVar11;
    }
  }
  pFVar4 = (pFVar3->LevelColors).AllocatorInstance.Data;
  *(float *)(pFVar4 + 0x40) = fVar8;
  *(float *)(pFVar4 + 0x44) = fVar7;
  *(float *)(pFVar4 + 0x48) = fVar9;
  *(undefined4 *)(pFVar4 + 0x4c) = 0x3f800000;
  fVar8 = FLinearColor::sRGBToLinearTable[0xff];
  fVar7 = FLinearColor::sRGBToLinearTable[0];
  if (*piVar1 < 6) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UDataflowSettings *)(*pcVar5)();
      return pUVar11;
    }
  }
  pFVar4 = (pFVar3->LevelColors).AllocatorInstance.Data;
  *(float *)(pFVar4 + 0x50) = fVar8;
  *(float *)(pFVar4 + 0x54) = fVar7;
  *(float *)(pFVar4 + 0x58) = fVar8;
  *(undefined4 *)(pFVar4 + 0x5c) = 0x3f800000;
  fVar9 = FLinearColor::sRGBToLinearTable[0xbc];
  fVar8 = FLinearColor::sRGBToLinearTable[0x9c];
  fVar7 = FLinearColor::sRGBToLinearTable[0x1a];
  if (*piVar1 < 7) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UDataflowSettings *)(*pcVar5)();
      return pUVar11;
    }
  }
  pFVar4 = (pFVar3->LevelColors).AllocatorInstance.Data;
  *(float *)(pFVar4 + 0x60) = fVar7;
  *(float *)(pFVar4 + 100) = fVar9;
  *(float *)(pFVar4 + 0x68) = fVar8;
  *(undefined4 *)(pFVar4 + 0x6c) = 0x3f800000;
  fVar9 = FLinearColor::sRGBToLinearTable[199];
  fVar8 = FLinearColor::sRGBToLinearTable[0xc3];
  fVar7 = FLinearColor::sRGBToLinearTable[0xbd];
  if (*piVar1 < 8) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UDataflowSettings *)(*pcVar5)();
      return pUVar11;
    }
  }
  pFVar4 = (pFVar3->LevelColors).AllocatorInstance.Data;
  *(float *)(pFVar4 + 0x70) = fVar7;
  *(float *)(pFVar4 + 0x74) = fVar8;
  *(float *)(pFVar4 + 0x78) = fVar9;
  *(undefined4 *)(pFVar4 + 0x7c) = 0x3f800000;
  fVar8 = FLinearColor::sRGBToLinearTable[0xff];
  fVar7 = FLinearColor::sRGBToLinearTable[0];
  if (*piVar1 < 9) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UDataflowSettings *)(*pcVar5)();
      return pUVar11;
    }
  }
  pFVar4 = (pFVar3->LevelColors).AllocatorInstance.Data;
  *(float *)(pFVar4 + 0x80) = fVar7;
  *(float *)(pFVar4 + 0x84) = fVar7;
  *(float *)(pFVar4 + 0x88) = fVar8;
  *(undefined4 *)(pFVar4 + 0x8c) = 0x3f800000;
  fVar8 = FLinearColor::sRGBToLinearTable[0xff];
  fVar7 = FLinearColor::sRGBToLinearTable[0];
  if (*piVar1 < 10) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pUVar11 = (UDataflowSettings *)(*pcVar5)();
      return pUVar11;
    }
  }
  pFVar4 = (pFVar3->LevelColors).AllocatorInstance.Data;
  *(float *)(pFVar4 + 0x90) = fVar7;
  *(float *)(pFVar4 + 0x94) = fVar8;
  *(float *)(pFVar4 + 0x98) = fVar7;
  *(undefined4 *)(pFVar4 + 0x9c) = 0x3f800000;
  uVar6 = _UNK_1508be4d8;
  *(undefined8 *)&(this->TransformLevelColors).BlankColor.field0_0x0 =
       ___xmm_437f0000437f0000437f0000437f0000;
  *(undefined8 *)((longlong)&(this->TransformLevelColors).BlankColor.field0_0x0 + 8) = uVar6;
  return this;
}

// ~UDataflowSettings @ 144433e30

void __thiscall UDataflowSettings::~UDataflowSettings(UDataflowSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDataflowSettings__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x8,
             *(int *)&(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnDataflowSettingsChangedPinSettingsDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataflowSettingsChangedPinSettingsDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDataflowSettingsChangedDelegate).field_0x8,
             *(int *)&(this->OnDataflowSettingsChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnDataflowSettingsChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataflowSettingsChangedDelegate);
  pFVar2 = (this->TransformLevelColors).LevelColors.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PinSettingsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PinSettingsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PinSettingsMap);
  *(undefined4 *)&(this->NodeColorsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NodeColorsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeColorsMap);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetCategoryName @ 14444a8d0

FName __thiscall UDataflowSettings::GetCategoryName(UDataflowSettings *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Plugins");
  return in_RDX;
}

// GetPrivateStaticClass @ 14444d690

UClass * __cdecl UDataflowSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowCore",L"DataflowSettings",
               &Z_Registration_Info_UClass_UDataflowSettings.InnerSingleton,
               StaticRegisterNativesUDataflowSettings,0x138,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Editor",
               InternalConstructor<UDataflowSettings>,
               InternalVTableHelperCtorCaller<UDataflowSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowSettings.InnerSingleton;
}

// RegisterColors @ 144454750

FNodeColors * __thiscall
UDataflowSettings::RegisterColors
          (UDataflowSettings *this,FNodeColors *__return_storage_ptr__,FName *param_1,
          FNodeColors *param_2)

{
  TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
  *this_00;
  FName FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<FName,FNodeColors> *pTVar9;
  FNodeColors *pFVar10;
  undefined1 *puVar11;
  
  FVar1 = *param_1;
  this_00 = &this->NodeColorsMap;
  uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->NodeColorsMap).field_0x8 != *(int *)&(this->NodeColorsMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->NodeColorsMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->NodeColorsMap).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->NodeColorsMap).field_0x48 - 1U & FVar1.Number + uVar7) * 4);
    if (iVar8 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x30) == FVar1)
        goto LAB_1444547e6;
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x28 + (longlong)iVar8 * 0x30);
      } while (iVar8 != -1);
    }
  }
  TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
  ::Emplace<FName_const_&,FNodeColors_const_&>
            ((TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
              *)this_00,param_1,param_2);
LAB_1444547e6:
  pTVar9 = TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
                   *)this_00,*param_1);
  if (pTVar9 == (TTuple<FName,FNodeColors> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FNodeColors *)(*pcVar2)();
      return pFVar10;
    }
  }
  uVar3 = *(undefined8 *)&pTVar9->field_0x10;
  uVar4 = *(undefined8 *)&pTVar9->field_0x18;
  uVar5 = *(undefined8 *)&pTVar9->field_0x20;
  *(undefined8 *)&(__return_storage_ptr__->NodeTitleColor).field0_0x0 =
       *(undefined8 *)&pTVar9->field_0x8;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->NodeTitleColor).field0_0x0 + 8) = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->NodeBodyTintColor).field0_0x0 = uVar4;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->NodeBodyTintColor).field0_0x0 + 8) = uVar5;
  return __return_storage_ptr__;
}

// RegisterPinSettings @ 14445a960

FPinSettings * __thiscall
UDataflowSettings::RegisterPinSettings
          (UDataflowSettings *this,FPinSettings *__return_storage_ptr__,FName *param_1,
          FPinSettings *param_2)

{
  TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
  *this_00;
  float fVar1;
  FName FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TTuple<FName,FPinSettings> *pTVar8;
  FPinSettings *pFVar9;
  undefined1 *puVar10;
  
  FVar2 = *param_1;
  this_00 = &this->PinSettingsMap;
  uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->PinSettingsMap).field_0x8 != *(int *)&(this->PinSettingsMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->PinSettingsMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->PinSettingsMap).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->PinSettingsMap).field_0x48 - 1U & FVar2.Number + uVar6) * 4);
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x24) == FVar2)
        goto LAB_14445a9f3;
        iVar7 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x1c + (longlong)iVar7 * 0x24);
      } while (iVar7 != -1);
    }
  }
  TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
  ::Emplace<FName_const_&,FPinSettings_const_&>
            ((TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
              *)this_00,param_1,param_2);
LAB_14445a9f3:
  pTVar8 = TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
                   *)this_00,*param_1);
  if (pTVar8 == (TTuple<FName,FPinSettings> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FPinSettings *)(*pcVar3)();
      return pFVar9;
    }
  }
  fVar1 = *(float *)&pTVar8->field_0x18;
  uVar4 = *(undefined8 *)&pTVar8->field_0x10;
  *(undefined8 *)&(__return_storage_ptr__->PinColor).field0_0x0 = *(undefined8 *)&pTVar8->field_0x8;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->PinColor).field0_0x0 + 8) = uVar4;
  __return_storage_ptr__->WireThickness = fVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUDataflowSettings @ 144465500

void __cdecl UDataflowSettings::StaticRegisterNativesUDataflowSettings(void)

{
  return;
}

