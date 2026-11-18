// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 1485e3bf0

UClass * __cdecl USkeletalMeshLODSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshLODSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshLODSettings",
               &Z_Registration_Info_UClass_USkeletalMeshLODSettings.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshLODSettings,0xb8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshLODSettings>,
               InternalVTableHelperCtorCaller<USkeletalMeshLODSettings>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshLODSettings.InnerSingleton;
}

// USkeletalMeshLODSettings @ 148623ea0

USkeletalMeshLODSettings * __thiscall
USkeletalMeshLODSettings::USkeletalMeshLODSettings
          (USkeletalMeshLODSettings *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7USkeletalMeshLODSettings__6B_;
  (this->MinQualityLevelLod)._padding_ = 0;
  (this->MinQualityLevelLod)._padding_ = 0;
  *(undefined8 *)&(this->MinQualityLevelLod).PerQuality = 0;
  *(undefined8 *)&(this->MinQualityLevelLod).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->MinQualityLevelLod).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->MinQualityLevelLod).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->MinQualityLevelLod).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->MinQualityLevelLod).PerQuality.field_0x34 = 0;
  *(undefined4 *)&(this->MinQualityLevelLod).PerQuality.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MinQualityLevelLod).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->MinQualityLevelLod).PerQuality.field_0x48 = 0;
  (this->MinQualityLevelLod).Default = 0;
  (this->MinLod).Default = 0;
  (this->DisableBelowMinLodStripping).Default = false;
  (this->bSupportLODStreaming).Default = false;
  this->MaxNumStreamedLODs = 0;
  this->MaxNumOptionalLODs = 0;
  (this->LODGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODGroups).ArrayNum = 0;
  (this->LODGroups).ArrayMax = 0;
  return this;
}

// USkeletalMeshLODSettings @ 148623f30

USkeletalMeshLODSettings * __thiscall
USkeletalMeshLODSettings::USkeletalMeshLODSettings
          (USkeletalMeshLODSettings *this,FObjectInitializer *param_1)

{
  FPerQualityLevelInt *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  pFVar1 = &this->MinQualityLevelLod;
  this->_padding_ = (longlong)&___7USkeletalMeshLODSettings__6B_;
  pFVar1->_padding_ = 0;
  (this->MinQualityLevelLod)._padding_ = 0;
  *(undefined8 *)&(this->MinQualityLevelLod).PerQuality = 0;
  *(undefined8 *)&(this->MinQualityLevelLod).PerQuality.field_0x8 = 0;
  *(undefined8 *)&(this->MinQualityLevelLod).PerQuality.field_0x20 = 0;
  *(undefined4 *)&(this->MinQualityLevelLod).PerQuality.field_0x28 = 0;
  *(undefined4 *)&(this->MinQualityLevelLod).PerQuality.field_0x2c = 0x80;
  *(undefined4 *)&(this->MinQualityLevelLod).PerQuality.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MinQualityLevelLod).PerQuality.field_0x34 = 0;
  *(undefined8 *)&(this->MinQualityLevelLod).PerQuality.field_0x40 = 0;
  *(undefined4 *)&(this->MinQualityLevelLod).PerQuality.field_0x48 = 0;
  (this->MinQualityLevelLod).Default = 0;
  (this->MinLod).Default = 0;
  (this->DisableBelowMinLodStripping).Default = false;
  (this->LODGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODGroups).ArrayNum = 0;
  (this->LODGroups).ArrayMax = 0;
  (this->bSupportLODStreaming).Default = false;
  this->MaxNumStreamedLODs = 0;
  this->MaxNumOptionalLODs = 0;
  pFVar2 = ::FString::FString(&local_18,GSkeletalMeshMinLodQualityLevelCVarName);
  if (pFVar1 != (FPerQualityLevelInt *)pFVar2) {
    if ((void *)pFVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar1->_padding_);
    }
    pFVar1->_padding_ = (longlong)(pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&(this->MinQualityLevelLod)._padding_ = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)&(this->MinQualityLevelLod)._padding_ + 4) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~USkeletalMeshLODSettings @ 1486258c0

void __thiscall USkeletalMeshLODSettings::~USkeletalMeshLODSettings(USkeletalMeshLODSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7USkeletalMeshLODSettings__6B_;
  DestructItems<FSkeletalMeshLODGroupSettings,int>
            ((FSkeletalMeshLODGroupSettings *)(this->LODGroups).AllocatorInstance.Data,
             (this->LODGroups).ArrayNum);
  pFVar1 = (this->LODGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->MinQualityLevelLod).PerQuality.field_0x48 = 0;
  pvVar2 = *(void **)&(this->MinQualityLevelLod).PerQuality.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MinQualityLevelLod).PerQuality);
  pvVar2 = (void *)(this->MinQualityLevelLod)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// GetNumberOfSettings @ 14864c580

int __thiscall USkeletalMeshLODSettings::GetNumberOfSettings(USkeletalMeshLODSettings *this)

{
  return (this->LODGroups).ArrayNum;
}

// GetPrivateStaticClass @ 14864cc20

UClass * __cdecl USkeletalMeshLODSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshLODSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshLODSettings",
               &Z_Registration_Info_UClass_USkeletalMeshLODSettings.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshLODSettings,0xb8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshLODSettings>,
               InternalVTableHelperCtorCaller<USkeletalMeshLODSettings>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshLODSettings.InnerSingleton;
}

// GetSettingsForLODLevel @ 14864db90

FSkeletalMeshLODGroupSettings * __thiscall
USkeletalMeshLODSettings::GetSettingsForLODLevel(USkeletalMeshLODSettings *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSkeletalMeshLODGroupSettings *pFVar3;
  undefined1 local_res10 [24];
  
  if ((this->LODGroups).ArrayNum <= param_1) {
    `USkeletalMeshLODSettings::GetSettingsForLODLevel'::__l2::<lambda_1>::operator()(local_res10);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        DefaultReturnValue.ReductionSettings.bRecalcNormals = '\x01';
        DefaultReturnValue.ReductionSettings.bRemapMorphTargets = '\0';
        DefaultReturnValue.ReductionSettings.bMergeCoincidentVertBones = '\x01';
        DefaultReturnValue.ReductionSettings.bEnforceBoneBoundaries = '\0';
        DefaultReturnValue.ReductionSettings.bImproveTrianglesForCloth = '\x01';
        DefaultReturnValue.ReductionSettings.bLockColorBounaries = '\0';
        DefaultReturnValue.ReductionSettings.bLockEdges = '\0';
        atexit(`USkeletalMeshLODSettings::GetSettingsForLODLevel'::__l2::
               _dynamic_atexit_destructor_for__DefaultReturnValue__);
        _Init_thread_footer(&::_TSS0);
        return &DefaultReturnValue;
      }
    }
    return &DefaultReturnValue;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSkeletalMeshLODGroupSettings *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FSkeletalMeshLODGroupSettings *)
         ((this->LODGroups).AllocatorInstance.Data + (longlong)param_1 * 0x90);
}

// Serialize @ 148663040

void __thiscall
USkeletalMeshLODSettings::Serialize(USkeletalMeshLODSettings *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if ((iVar4 < 7) && (uVar6 = 0, 0 < (this->LODGroups).ArrayNum)) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->LODGroups).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->LODGroups).AllocatorInstance.Data;
      pFVar1[lVar7 + 0x68] = (FScriptContainerElement)0x2;
      if (*(float *)(pFVar1 + lVar7 + 100) == 0.0) {
        *(undefined4 *)(pFVar1 + lVar7 + 100) = 0x3f800000;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x90;
    } while ((int)uVar6 < (this->LODGroups).ArrayNum);
  }
  return;
}

// Serialize @ 148663150

void __thiscall
USkeletalMeshLODSettings::Serialize(USkeletalMeshLODSettings *this,FStructuredArchiveRecord param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FArchiveState *this_00;
  uint uVar6;
  longlong lVar7;
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FEditorObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if ((iVar4 < 7) && (uVar6 = 0, 0 < (this->LODGroups).ArrayNum)) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->LODGroups).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->LODGroups).AllocatorInstance.Data;
      pFVar1[lVar7 + 0x68] = (FScriptContainerElement)0x2;
      if (*(float *)(pFVar1 + lVar7 + 100) == 0.0) {
        *(undefined4 *)(pFVar1 + lVar7 + 100) = 0x3f800000;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x90;
    } while ((int)uVar6 < (this->LODGroups).ArrayNum);
  }
  return;
}

// SetLODSettingsFromMesh @ 148665cf0

int __thiscall
USkeletalMeshLODSettings::SetLODSettingsFromMesh
          (USkeletalMeshLODSettings *this,USkeletalMesh *param_1)

{
  FSkeletalMeshLODGroupSettings *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined8 *puVar17;
  TArray<FSkeletalMeshLODGroupSettings,TSizedDefaultAllocator<32>_> *pTVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_78;
  int local_74;
  uint local_70;
  FScriptContainerElement *local_68;
  longlong local_60;
  TArray<FSkeletalMeshLODGroupSettings,TSizedDefaultAllocator<32>_> *local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if (param_1 == (USkeletalMesh *)0x0) {
    return 0;
  }
  piVar11 = (int *)(**(code **)(param_1->_padding_ + 0x3a8))(param_1);
  (this->MinLod).Default = *piVar11;
  ::FString::operator=((FString *)&this->MinQualityLevelLod,(FString *)&param_1->MinQualityLevelLOD)
  ;
  (this->MinQualityLevelLod).Default = (param_1->MinQualityLevelLOD).Default;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(this->MinQualityLevelLod).PerQuality,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(param_1->MinQualityLevelLOD).PerQuality);
  puVar12 = (undefined1 *)(**(code **)(param_1->_padding_ + 0x480))(param_1);
  (this->DisableBelowMinLodStripping).Default = (bool)*puVar12;
  uVar8 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
  pTVar18 = &this->LODGroups;
  local_70 = uVar8;
  local_58 = pTVar18;
  if (-1 < (int)uVar8) {
    piVar11 = &(this->LODGroups).ArrayMax;
    iVar9 = (this->LODGroups).ArrayNum;
    pFVar1 = (FSkeletalMeshLODGroupSettings *)(pTVar18->AllocatorInstance).Data;
    piVar16 = &(this->LODGroups).ArrayNum;
    if (*piVar11 < (int)uVar8) {
      DestructItems<FSkeletalMeshLODGroupSettings,int>(pFVar1,iVar9);
      *piVar16 = 0;
      if (*piVar11 != uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,8,uVar8,&pTVar18->AllocatorInstance,0,piVar11);
      }
    }
    else {
      DestructItems<FSkeletalMeshLODGroupSettings,int>(pFVar1,iVar9);
      *piVar16 = 0;
    }
    uVar20 = 0;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x90,8,uVar8,&pTVar18->AllocatorInstance,piVar16,piVar11);
    DefaultConstructItems<FSkeletalMeshLODGroupSettings,int>
              ((pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 0x90,uVar8);
    local_78 = 0;
    uVar14 = uVar20;
    uVar21 = uVar20;
    local_60 = (longlong)(int)uVar8;
    if (0 < (int)uVar8) {
      do {
        puVar13 = (undefined4 *)(**(code **)(param_1->_padding_ + 0x330))(param_1,uVar14);
        uVar8 = 0;
        if ((int)(uint)uVar14 < *piVar16) {
          uVar8 = ~(uint)uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          iVar9 = (*pcVar5)();
          return iVar9;
        }
        pFVar2 = (pTVar18->AllocatorInstance).Data;
        uVar3 = *(undefined8 *)(puVar13 + 0xe);
        *(undefined8 *)(pFVar2 + uVar21 + 0x50) = *(undefined8 *)(puVar13 + 0xc);
        *(undefined8 *)(pFVar2 + uVar21 + 0x50 + 8) = uVar3;
        uVar3 = *(undefined8 *)(puVar13 + 0x12);
        pFVar23 = pFVar2 + uVar21 + 0x2c;
        *(undefined8 *)(pFVar2 + uVar21 + 0x60) = *(undefined8 *)(puVar13 + 0x10);
        *(undefined8 *)(pFVar2 + uVar21 + 0x60 + 8) = uVar3;
        uVar3 = *(undefined8 *)(puVar13 + 0x16);
        *(undefined8 *)(pFVar2 + uVar21 + 0x70) = *(undefined8 *)(puVar13 + 0x14);
        *(undefined8 *)(pFVar2 + uVar21 + 0x70 + 8) = uVar3;
        *(undefined8 *)(pFVar2 + uVar21 + 0x80) = *(undefined8 *)(puVar13 + 0x18);
        *(undefined4 *)(pFVar2 + uVar21 + 0x88) = puVar13[0x1a];
        *(undefined4 *)(pFVar2 + uVar21) = *puVar13;
        *(undefined4 *)(pFVar2 + uVar21 + 4) = puVar13[1];
        *(undefined4 *)(pFVar2 + uVar21 + 0x28) = 0;
        local_68 = pFVar2;
        if (*(int *)pFVar23 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,(ForAnyElementType *)(pFVar2 + uVar21 + 0x20),0,(int *)pFVar23);
        }
        iVar9 = puVar13[0x22];
        puVar15 = *(undefined8 **)(puVar13 + 0x20);
        puVar17 = puVar15 + (longlong)iVar9 * 2;
        while( true ) {
          if (puVar13[0x22] != iVar9) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          pFVar6 = local_68;
          if (puVar15 == puVar17) break;
          if (((*(undefined8 **)(pFVar2 + uVar21 + 0x20) <= puVar15) &&
              (puVar15 < *(undefined8 **)(pFVar2 + uVar21 + 0x20) + *(int *)pFVar23)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            iVar9 = (*pcVar5)();
            return iVar9;
          }
          iVar10 = *(int *)(pFVar2 + uVar21 + 0x28);
          if (iVar10 == *(int *)pFVar23) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,(ForAnyElementType *)(pFVar2 + uVar21 + 0x20),(int *)pFVar23);
          }
          *(int *)(pFVar2 + uVar21 + 0x28) = iVar10 + 1;
          uVar3 = *puVar15;
          puVar15 = puVar15 + 2;
          *(undefined8 *)(*(longlong *)(pFVar2 + uVar21 + 0x20) + (longlong)iVar10 * 8) = uVar3;
        }
        *(undefined4 *)(local_68 + uVar21 + 0x38) = 0;
        if (*(int *)(local_68 + uVar21 + 0x3c) < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,(ForAnyElementType *)(local_68 + uVar21 + 0x30),0,
                     (int *)(local_68 + uVar21 + 0x3c));
        }
        piVar16 = *(int **)(puVar13 + 0x24);
        iVar9 = puVar13[0x26];
        piVar11 = piVar16 + iVar9;
        while( true ) {
          if (puVar13[0x26] != iVar9) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FSectionReference,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (piVar16 == piVar11) break;
          local_74 = *piVar16;
          if (local_74 != -1) {
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar6 + uVar21 + 0x30),&local_74
                      );
          }
          piVar16 = piVar16 + 1;
        }
        *(undefined4 *)(pFVar6 + uVar21 + 0x40) = puVar13[0x28];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)(puVar13 + 0x2a) != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)(puVar13 + 0x2a));
        }
        *(undefined8 *)(pFVar6 + uVar21 + 0x48) = *(undefined8 *)(puVar13 + 0x2a);
        pFVar6[uVar21 + 8] = (FScriptContainerElement)0x0;
        uVar14 = uVar20;
        pFVar23 = pFVar6;
        uVar22 = uVar20;
        if (0 < (int)puVar13[0x1e]) {
          do {
            uVar19 = (uint)uVar14;
            uStack_4c = 0;
            uStack_48 = 0;
            local_50 = local_50 & 0xffffff00;
            uVar8 = 0;
            if ((int)uVar19 < (int)puVar13[0x1e]) {
              uVar8 = ~uVar19 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              iVar9 = (*pcVar5)();
              return iVar9;
            }
            uStack_4c = (undefined4)*(undefined8 *)(uVar22 + *(longlong *)(puVar13 + 0x1c));
            uStack_48 = (undefined4)
                        ((ulonglong)*(undefined8 *)(uVar22 + *(longlong *)(puVar13 + 0x1c)) >> 0x20)
            ;
            if (((*(uint **)(pFVar6 + uVar21 + 0x10) <= &local_50) &&
                (&local_50 <
                 *(uint **)(pFVar6 + uVar21 + 0x10) + (longlong)*(int *)(pFVar6 + uVar21 + 0x1c) * 3
                )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar7)) {
              pcVar5 = (code *)swi(3);
              iVar9 = (*pcVar5)();
              return iVar9;
            }
            iVar9 = *(int *)(pFVar6 + uVar21 + 0x18);
            if (iVar9 == *(int *)(pFVar6 + uVar21 + 0x1c)) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,(ForAnyElementType *)(pFVar6 + uVar21 + 0x10),
                                 (int *)(pFVar6 + uVar21 + 0x1c));
            }
            *(int *)(pFVar6 + uVar21 + 0x18) = iVar9 + 1;
            lVar4 = *(longlong *)(pFVar6 + uVar21 + 0x10);
            *(ulonglong *)(lVar4 + (longlong)iVar9 * 0xc) = CONCAT44(uStack_4c,local_50);
            *(undefined4 *)(lVar4 + 8 + (longlong)iVar9 * 0xc) = uStack_48;
            uVar14 = (ulonglong)(uVar19 + 1);
            pFVar23 = local_68;
            uVar22 = uVar22 + 0x10;
          } while ((int)(uVar19 + 1) < (int)puVar13[0x1e]);
        }
        local_78 = local_78 + 1;
        pFVar23[uVar21 + 0x8c] = (FScriptContainerElement)(*(byte *)(puVar13 + 0x34) >> 4 & 1);
        local_60 = local_60 + -1;
        piVar16 = &local_58->ArrayNum;
        uVar14 = (ulonglong)local_78;
        pTVar18 = local_58;
        uVar21 = uVar21 + 0x90;
        uVar8 = local_70;
      } while (local_60 != 0);
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
}

// SetLODSettingsToMesh @ 1486662b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
USkeletalMeshLODSettings::SetLODSettingsToMesh
          (USkeletalMeshLODSettings *this,USkeletalMesh *param_1)

{
  bool bVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FPerQualityLevelInt local_78;
  
  if (param_1 == (USkeletalMesh *)0x0) {
    return 0;
  }
  iVar4 = (this->MinLod).Default;
  USkeletalMesh::WaitUntilAsyncPropertyReleased(param_1,MinLod,ReadWrite);
  (param_1->MinLod).Default = iVar4;
  iVar4 = 0;
  local_78._padding_._0_4_ = (int)(this->MinQualityLevelLod)._padding_;
  lVar5 = (longlong)(int)local_78._padding_;
  _Src = (void *)(this->MinQualityLevelLod)._padding_;
  local_78._padding_ = 0;
  if ((int)local_78._padding_ == 0) {
    local_78._padding_._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_78._padding_,0,(ForAnyElementType *)&local_78,(int)local_78._padding_,
               (int *)((longlong)&local_78._padding_ + 4));
    memcpy((void *)local_78._padding_,_Src,lVar5 * 2);
  }
  local_78.Default = (this->MinQualityLevelLod).Default;
  local_78.PerQuality._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_78.PerQuality._48_8_ = _UNK_150631d98;
  local_78.PerQuality._0_8_ = 0;
  local_78.PerQuality._8_8_ = 0;
  local_78.PerQuality._32_8_ = 0;
  local_78.PerQuality._64_8_ = 0;
  local_78.PerQuality._72_4_ = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &local_78.PerQuality,
             (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(this->MinQualityLevelLod).PerQuality);
  USkeletalMesh::SetQualityLevelMinLod(param_1,&local_78);
  bVar1 = (this->DisableBelowMinLodStripping).Default;
  USkeletalMesh::WaitUntilAsyncPropertyReleased(param_1,DisableBelowMinLodStripping,ReadWrite);
  (param_1->DisableBelowMinLodStripping).Default = bVar1;
  iVar3 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
  iVar2 = (this->LODGroups).ArrayNum;
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  if (0 < iVar3) {
    do {
      SetLODSettingsToMesh(this,param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return iVar3;
}

// SetLODSettingsToMesh @ 148666440

bool __thiscall
USkeletalMeshLODSettings::SetLODSettingsToMesh
          (USkeletalMeshLODSettings *this,USkeletalMesh *param_1,int param_2)

{
  ForAnyElementType *pFVar1;
  TArray<FSectionReference,TSizedDefaultAllocator<32>_> *this_00;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  FReferenceSkeleton *pFVar10;
  char cVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  FName *pFVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  uint local_d0;
  uint local_cc;
  longlong local_c8;
  FReferenceSkeleton *local_c0;
  FSectionReference local_b8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  FName local_90;
  FNameEntryId FStack_88;
  uint uStack_84;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *local_50;
  ForAnyElementType *local_48;
  
  cVar11 = (**(code **)(param_1->_padding_ + 0x440))(param_1,param_2);
  if (((cVar11 == '\0') || (param_2 < 0)) || ((this->LODGroups).ArrayNum <= param_2)) {
    return false;
  }
  puVar17 = (undefined4 *)(**(code **)(param_1->_padding_ + 0x330))(param_1);
  uVar28 = 0;
  if (param_2 < (this->LODGroups).ArrayNum) {
    uVar28 = (uint)~param_2 >> 0x1f;
  }
  local_50 = puVar17;
  if ((uVar28 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar5 = (code *)swi(3);
    uVar13 = (*pcVar5)();
    return (bool)uVar13;
  }
  pFVar3 = (this->LODGroups).AllocatorInstance.Data;
  lVar29 = (longlong)param_2 * 0x90;
  uVar9 = *(undefined8 *)(pFVar3 + lVar29 + 0x50 + 8);
  *(undefined8 *)(puVar17 + 0xc) = *(undefined8 *)(pFVar3 + lVar29 + 0x50);
  *(undefined8 *)(puVar17 + 0xe) = uVar9;
  uVar9 = *(undefined8 *)(pFVar3 + lVar29 + 0x60 + 8);
  *(undefined8 *)(puVar17 + 0x10) = *(undefined8 *)(pFVar3 + lVar29 + 0x60);
  *(undefined8 *)(puVar17 + 0x12) = uVar9;
  pFVar22 = pFVar3 + lVar29 + 0x70;
  uVar6 = *(undefined4 *)(pFVar22 + 4);
  uVar7 = *(undefined4 *)(pFVar22 + 8);
  uVar8 = *(undefined4 *)(pFVar22 + 0xc);
  puVar17[0x14] = *(undefined4 *)pFVar22;
  puVar17[0x15] = uVar6;
  puVar17[0x16] = uVar7;
  puVar17[0x17] = uVar8;
  *(undefined8 *)(puVar17 + 0x18) = *(undefined8 *)(pFVar3 + lVar29 + 0x80);
  puVar17[0x1a] = *(undefined4 *)(pFVar3 + lVar29 + 0x88);
  *puVar17 = *(undefined4 *)(pFVar3 + lVar29);
  puVar17[1] = *(undefined4 *)(pFVar3 + lVar29 + 4);
  puVar17[0x28] = *(undefined4 *)(pFVar3 + lVar29 + 0x40);
  *(byte *)(puVar17 + 0x34) =
       ((char)pFVar3[lVar29 + 0x8c] << 4 ^ *(byte *)(puVar17 + 0x34)) & 0x10 ^
       *(byte *)(puVar17 + 0x34);
  local_c8 = lVar29;
  if ((*(longlong *)(pFVar3 + lVar29 + 0x48) == 0) ||
     ((lVar18 = (**(code **)(param_1->_padding_ + 0x408))(param_1), lVar18 != 0 &&
      (*(longlong *)(*(longlong *)(pFVar3 + lVar29 + 0x48) + 0x38) != 0)))) {
    *(undefined8 *)(puVar17 + 0x2a) = 0;
  }
  else {
    TObjectPtr<UAnimSequence>::operator=
              ((TObjectPtr<UAnimSequence> *)(puVar17 + 0x2a),
               (TObjectPtr<UAnimSequence> *)(pFVar3 + lVar29 + 0x48));
  }
  local_48 = (ForAnyElementType *)(puVar17 + 0x1c);
  puVar17[0x1e] = 0;
  if ((int)puVar17[0x1f] < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,local_48,0,puVar17 + 0x1f);
  }
  local_c0 = (FReferenceSkeleton *)(**(code **)(param_1->_padding_ + 800))(param_1);
  pFVar1 = (ForAnyElementType *)(puVar17 + 0x20);
  piVar20 = puVar17 + 0x23;
  puVar17[0x22] = 0;
  if ((int)puVar17[0x23] < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,pFVar1,0,piVar20);
  }
  pFVar10 = local_c0;
  lVar18 = local_c8;
  pFVar26 = *(FName **)(pFVar3 + lVar29 + 0x20);
  iVar15 = *(int *)(pFVar3 + lVar29 + 0x28);
  pFVar2 = pFVar26 + iVar15;
  while( true ) {
    if (*(int *)(pFVar3 + lVar18 + 0x28) != iVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar26 == pFVar2) break;
    if (((*pFVar26 != (FName)0x0) &&
        (piVar19 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&pFVar10->FinalNameToIndexMap,*pFVar26), piVar19 != (int *)0x0)) &&
       (*piVar19 != -1)) {
      local_90 = *pFVar26;
      FStack_88.Value = 0x7fffffff;
      uStack_84 = 0xffffffff;
      if ((((FName *)pFVar1->Data <= &local_90) &&
          (&local_90 < (FName *)pFVar1->Data + (longlong)*piVar20 * 2)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar5 = (code *)swi(3);
        uVar13 = (*pcVar5)();
        return (bool)uVar13;
      }
      iVar14 = puVar17[0x22];
      if (iVar14 == *piVar20) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,pFVar1,piVar20);
      }
      FVar4.Number = uStack_84;
      FVar4.ComparisonIndex.Value = FStack_88.Value;
      puVar17[0x22] = iVar14 + 1;
      pFVar22 = pFVar1->Data;
      *(FName *)(pFVar22 + (longlong)iVar14 * 0x10) = local_90;
      ((FName *)(pFVar22 + (longlong)iVar14 * 0x10))[1] = FVar4;
    }
    pFVar26 = pFVar26 + 1;
  }
  this_00 = (TArray<FSectionReference,TSizedDefaultAllocator<32>_> *)(local_50 + 0x24);
  local_50[0x26] = 0;
  if ((int)local_50[0x27] < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this_00,0,local_50 + 0x27);
  }
  lVar29 = local_c8;
  piVar19 = *(int **)(pFVar3 + local_c8 + 0x30);
  iVar15 = *(int *)(pFVar3 + local_c8 + 0x38);
  piVar20 = piVar19 + iVar15;
  while( true ) {
    if (*(int *)(pFVar3 + lVar29 + 0x38) != iVar15) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    pFVar1 = local_48;
    lVar18 = local_c8;
    if (piVar19 == piVar20) break;
    if (*piVar19 != -1) {
      local_b8[0].SectionIndex = *piVar19;
      TArray<FSectionReference,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSectionReference>
                (this_00,local_b8);
    }
    piVar19 = piVar19 + 1;
  }
  if (pFVar3[lVar29 + 8] == (FScriptContainerElement)0x0) {
    uVar28 = 0;
    if (0 < *(int *)(pFVar3 + lVar29 + 0x18)) {
      lVar18 = 0;
      do {
        uVar23 = ~uVar28 >> 0x1f;
        uVar25 = 0;
        if ((int)uVar28 < *(int *)(pFVar3 + lVar29 + 0x18)) {
          uVar25 = uVar23;
        }
        if ((uVar25 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        pFVar10 = local_c0;
        FVar4 = *(FName *)(*(longlong *)(pFVar3 + lVar29 + 0x10) + 4 + lVar18);
        if (((FVar4 != (FName)0x0) &&
            (piVar20 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                               *)&local_c0->FinalNameToIndexMap,FVar4), piVar20 != (int *)0x0)) &&
           (iVar15 = *piVar20, iVar15 != -1)) {
          uVar25 = 0;
          if ((int)uVar28 < *(int *)(pFVar3 + lVar29 + 0x18)) {
            uVar25 = uVar23;
          }
          if ((uVar25 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            uVar13 = (*pcVar5)();
            return (bool)uVar13;
          }
          if (*(char *)(lVar18 + *(longlong *)(pFVar3 + lVar29 + 0x10)) == '\0') {
            uVar25 = 0;
            if ((int)uVar28 < *(int *)(pFVar3 + lVar29 + 0x18)) {
              uVar25 = uVar23;
            }
            if ((uVar25 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar13 = (*pcVar5)();
              return (bool)uVar13;
            }
            piVar20 = (int *)((longlong)&pFVar1[1].Data + 4);
            local_80 = *(undefined8 *)(*(longlong *)(pFVar3 + lVar29 + 0x10) + 4 + lVar18);
            uStack_78 = 0x7fffffff;
            uStack_74 = 0xffffffff;
            if (((pFVar1->Data <= (FScriptContainerElement *)&local_80) &&
                ((FScriptContainerElement *)&local_80 < pFVar1->Data + (longlong)*piVar20 * 0x10))
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar13 = (*pcVar5)();
              return (bool)uVar13;
            }
            iVar15 = *(int *)&pFVar1[1].Data;
            if (iVar15 == *piVar20) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,pFVar1,piVar20);
            }
            *(int *)&pFVar1[1].Data = iVar15 + 1;
            pFVar22 = pFVar1->Data;
            *(undefined8 *)(pFVar22 + (longlong)iVar15 * 0x10) = local_80;
            *(ulonglong *)(pFVar22 + (longlong)iVar15 * 0x10 + 8) = CONCAT44(uStack_74,uStack_78);
          }
          else {
            local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b0.ArrayNum = 0;
            local_b0.ArrayMax = 0;
            iVar15 = FReferenceSkeleton::GetDirectChildBones(pFVar10,iVar15,&local_b0);
            if (0 < iVar15) {
              uVar25 = 0;
              if (0 < local_b0.ArrayNum) {
                lVar24 = 0;
                do {
                  uVar23 = 0;
                  if ((int)uVar25 < local_b0.ArrayNum) {
                    uVar23 = ~uVar25 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    uVar13 = (*pcVar5)();
                    return (bool)uVar13;
                  }
                  uVar23 = *(uint *)(local_b0.AllocatorInstance.Data + lVar24);
                  uVar16 = 0;
                  if ((int)uVar23 < (pFVar10->FinalRefBoneInfo).ArrayNum) {
                    uVar16 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar16 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    uVar13 = (*pcVar5)();
                    return (bool)uVar13;
                  }
                  piVar20 = (int *)((longlong)&pFVar1[1].Data + 4);
                  local_70 = *(undefined8 *)
                              ((pFVar10->FinalRefBoneInfo).AllocatorInstance.Data +
                              (longlong)(int)uVar23 * 0xc);
                  uStack_68 = 0x7fffffff;
                  uStack_64 = 0xffffffff;
                  if (((pFVar1->Data <= (FScriptContainerElement *)&local_70) &&
                      ((FScriptContainerElement *)&local_70 <
                       pFVar1->Data + (longlong)*piVar20 * 0x10)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar12)) {
                    pcVar5 = (code *)swi(3);
                    uVar13 = (*pcVar5)();
                    return (bool)uVar13;
                  }
                  iVar15 = *(int *)&pFVar1[1].Data;
                  if (iVar15 == *piVar20) {
                    iVar15 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x410,pFVar1,piVar20);
                  }
                  uVar25 = uVar25 + 1;
                  *(int *)&pFVar1[1].Data = iVar15 + 1;
                  lVar24 = lVar24 + 4;
                  pFVar22 = pFVar1->Data;
                  *(undefined8 *)(pFVar22 + (longlong)iVar15 * 0x10) = local_70;
                  *(ulonglong *)(pFVar22 + (longlong)iVar15 * 0x10 + 8) =
                       CONCAT44(uStack_64,uStack_68);
                  lVar29 = local_c8;
                } while ((int)uVar25 < local_b0.ArrayNum);
              }
            }
            if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.AllocatorInstance.Data);
            }
          }
        }
        uVar28 = uVar28 + 1;
        lVar18 = lVar18 + 0xc;
      } while ((int)uVar28 < *(int *)(pFVar3 + lVar29 + 0x18));
    }
  }
  else if (pFVar3[lVar29 + 8] == (FScriptContainerElement)0x1) {
    uVar28 = 0;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    if (0 < *(int *)(pFVar3 + local_c8 + 0x18)) {
      lVar29 = 0;
      do {
        uVar25 = 0;
        if ((int)uVar28 < *(int *)(pFVar3 + lVar18 + 0x18)) {
          uVar25 = ~uVar28 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        pFVar10 = local_c0;
        FVar4 = *(FName *)(*(longlong *)(pFVar3 + lVar18 + 0x10) + 4 + lVar29);
        uVar25 = local_cc;
        if ((FVar4 != (FName)0x0) &&
           (puVar21 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                              ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                      *)&local_c0->FinalNameToIndexMap,FVar4), uVar25 = local_cc,
           puVar21 != (uint *)0x0)) {
          uVar23 = *puVar21;
          if (uVar23 != 0xffffffff) {
            uVar25 = 0;
            if ((int)uVar28 < *(int *)(pFVar3 + lVar18 + 0x18)) {
              uVar25 = ~uVar28 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar5 = (code *)swi(3);
              uVar13 = (*pcVar5)();
              return (bool)uVar13;
            }
            if (*(char *)(lVar29 + *(longlong *)(pFVar3 + lVar18 + 0x10)) == '\0') {
              do {
                local_d0 = uVar23;
                TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                          (&local_a0,(int *)&local_d0);
                lVar24 = (longlong)(int)local_d0;
                uVar25 = 0;
                if ((int)local_d0 < (pFVar10->FinalRefBoneInfo).ArrayNum) {
                  uVar25 = ~local_d0 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  uVar13 = (*pcVar5)();
                  return (bool)uVar13;
                }
                uVar23 = *(uint *)((pFVar10->FinalRefBoneInfo).AllocatorInstance.Data +
                                  lVar24 * 0xc + 8);
              } while (uVar23 != 0xffffffff);
              local_d0 = 0xffffffff;
              uVar25 = local_cc;
            }
            else {
              uVar25 = 0;
              if ((int)uVar23 < (pFVar10->FinalRefBoneInfo).ArrayNum) {
                uVar25 = ~uVar23 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar5 = (code *)swi(3);
                uVar13 = (*pcVar5)();
                return (bool)uVar13;
              }
              uVar23 = *(uint *)((pFVar10->FinalRefBoneInfo).AllocatorInstance.Data +
                                (longlong)(int)uVar23 * 0xc + 8);
              uVar25 = local_cc;
              while (local_cc = uVar23, local_cc != 0xffffffff) {
                TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                          (&local_a0,(int *)&local_cc);
                lVar24 = (longlong)(int)local_cc;
                uVar25 = 0;
                if ((int)local_cc < (pFVar10->FinalRefBoneInfo).ArrayNum) {
                  uVar25 = ~local_cc >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar5 = (code *)swi(3);
                  uVar13 = (*pcVar5)();
                  return (bool)uVar13;
                }
                uVar25 = *(uint *)((pFVar10->FinalRefBoneInfo).AllocatorInstance.Data +
                                  lVar24 * 0xc + 8);
                uVar23 = uVar25;
              }
            }
          }
        }
        local_cc = uVar25;
        uVar28 = uVar28 + 1;
        lVar29 = lVar29 + 0xc;
      } while ((int)uVar28 < *(int *)(pFVar3 + lVar18 + 0x18));
    }
    pFVar10 = local_c0;
    uVar28 = 0;
    iVar15 = (local_c0->FinalRefBoneInfo).ArrayNum;
    FVar27.Data = local_a0.AllocatorInstance.Data;
    if (0 < iVar15) {
      lVar29 = 0;
      do {
        pFVar22 = FVar27.Data;
        if (FVar27.Data != FVar27.Data + (longlong)local_a0.ArrayNum * 4) {
          do {
            if (*(uint *)pFVar22 == uVar28) goto LAB_148666fcf;
            pFVar22 = pFVar22 + 4;
          } while (pFVar22 != FVar27.Data + (longlong)local_a0.ArrayNum * 4);
          iVar15 = (pFVar10->FinalRefBoneInfo).ArrayNum;
        }
        uVar25 = 0;
        if ((int)uVar28 < iVar15) {
          uVar25 = ~uVar28 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        local_60 = *(undefined8 *)((pFVar10->FinalRefBoneInfo).AllocatorInstance.Data + lVar29);
        uStack_58 = 0x7fffffff;
        uStack_54 = 0xffffffff;
        if (((pFVar1->Data <= (FScriptContainerElement *)&local_60) &&
            ((FScriptContainerElement *)&local_60 <
             pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 0x10)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        iVar15 = *(int *)&pFVar1[1].Data;
        if (iVar15 == *(int *)((longlong)&pFVar1[1].Data + 4)) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
        }
        *(int *)&pFVar1[1].Data = iVar15 + 1;
        pFVar22 = pFVar1->Data;
        *(undefined8 *)(pFVar22 + (longlong)iVar15 * 0x10) = local_60;
        *(ulonglong *)(pFVar22 + (longlong)iVar15 * 0x10 + 8) = CONCAT44(uStack_54,uStack_58);
        FVar27.Data = local_a0.AllocatorInstance.Data;
LAB_148666fcf:
        iVar15 = (pFVar10->FinalRefBoneInfo).ArrayNum;
        uVar28 = uVar28 + 1;
        lVar29 = lVar29 + 0xc;
      } while ((int)uVar28 < iVar15);
    }
    if (FVar27.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar27.Data);
    }
  }
  return true;
}

// StaticRegisterNativesUSkeletalMeshLODSettings @ 148668b10

void __cdecl USkeletalMeshLODSettings::StaticRegisterNativesUSkeletalMeshLODSettings(void)

{
  return;
}

// operator() @ 15052e590

bool __thiscall
`USkeletalMeshLODSettings::GetSettingsForLODLevel'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2082334916879581146>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2082334916879581146>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

