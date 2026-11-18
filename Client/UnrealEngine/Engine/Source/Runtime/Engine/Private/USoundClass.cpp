// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 14867bf30

UClass * __cdecl USoundClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundClass.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundClass",
               &Z_Registration_Info_UClass_USoundClass.InnerSingleton,
               StaticRegisterNativesUSoundClass,0x200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundClass>,InternalVTableHelperCtorCaller<USoundClass>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundClass.InnerSingleton;
}

// USoundClass @ 148696b00

USoundClass * __thiscall USoundClass::USoundClass(USoundClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  FSoundClassProperties::FSoundClassProperties(&this->Properties);
  (this->ChildClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildClasses).ArrayNum = 0;
  (this->ChildClasses).ArrayMax = 0;
  (this->PassiveSoundMixModifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassiveSoundMixModifiers).ArrayNum = 0;
  (this->PassiveSoundMixModifiers).ArrayMax = 0;
  (this->ParentClass).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  return this;
}

// USoundClass @ 148696b70

USoundClass * __thiscall USoundClass::USoundClass(USoundClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  FSoundClassProperties::FSoundClassProperties(&this->Properties);
  (this->ChildClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildClasses).ArrayNum = 0;
  (this->ChildClasses).ArrayMax = 0;
  (this->PassiveSoundMixModifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PassiveSoundMixModifiers).ArrayNum = 0;
  (this->PassiveSoundMixModifiers).ArrayMax = 0;
  (this->ParentClass).field0_0x0.DebugPtr = (USoundClass *)0x0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  return this;
}

// ~USoundClass @ 14869b540

void __thiscall USoundClass::~USoundClass(USoundClass *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PassiveSoundMixModifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildClasses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSoundModulationDefaultSettings::~FSoundModulationDefaultSettings
            (&(this->Properties).ModulationSettings);
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddAssetUserData @ 1486a4b90

void __thiscall USoundClass::AddAssetUserData(USoundClass *this,UAssetUserData *param_1)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UAssetUserData>_u_0 TVar6;
  TArray<TObjectPtr<USoundClass>,TSizedDefaultAllocator<32>_> *this_00;
  UObject *local_res10;
  TObjectPtr<UAssetUserData>_u_0 local_res18;
  UAssetUserData *local_18 [2];
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res10 = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    TVar6.DebugPtr = (UAssetUserData *)(*pcVar2)(this,&local_res10);
    this_00 = &this->ChildClasses;
    if (TVar6.DebugPtr != (UAssetUserData *)0x0) {
      local_res18.DebugPtr = TVar6.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
      }
      TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>::Remove
                ((TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *)this_00,
                 (TObjectPtr<UAssetUserData> *)&local_res18.ObjectPtr);
    }
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar3 = (this_00->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->ChildClasses).ArrayMax * 8)
        ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (this->ChildClasses).ArrayNum;
    piVar1 = &(this->ChildClasses).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&this_00->AllocatorInstance,piVar1);
      (this->ChildClasses).ArrayNum = iVar5;
    }
    (this->ChildClasses).ArrayNum = iVar5 + 1;
    *(UAssetUserData **)((this_00->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UAssetUserData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// BeginDestroy @ 1486a68a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundClass::BeginDestroy(USoundClass *this)

{
  FAudioDeviceManager *pFVar1;
  
  UObject::BeginDestroy((UObject *)this);
  if ((GExitPurge == false) && (GEngine != (UEngine *)0x0)) {
    pFVar1 = UEngine::GetAudioDeviceManager(GEngine);
    if (pFVar1 != (FAudioDeviceManager *)0x0) {
      pFVar1 = UEngine::GetAudioDeviceManager(GEngine);
      FAudioDeviceManager::UnregisterSoundClass(pFVar1,this);
      return;
    }
  }
  return;
}

// GetAssetUserDataArray @ 1486baf50

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
USoundClass::GetAssetUserDataArray(USoundClass *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&this->ChildClasses;
}

// GetAssetUserDataOfClass @ 1486bb090

UAssetUserData * __thiscall
USoundClass::GetAssetUserDataOfClass(USoundClass *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->ChildClasses).ArrayNum) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (this->ChildClasses).ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)((this->ChildClasses).AllocatorInstance.Data + lVar9);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_1486bb13c;
LAB_1486bb16a:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_1486bb16a;
          UE::GC::MarkAsReachable(pUVar7);
LAB_1486bb13c:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_1486bb16a;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1486bb16a;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->ChildClasses).ArrayNum);
  }
  return (UAssetUserData *)0x0;
}

// GetDesc @ 1486bd5d0

FString * __thiscall USoundClass::GetDesc(USoundClass *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Children: %d");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1486c4150

UClass * __cdecl USoundClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundClass",
               &Z_Registration_Info_UClass_USoundClass.InnerSingleton,
               StaticRegisterNativesUSoundClass,0x200,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundClass>,InternalVTableHelperCtorCaller<USoundClass>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundClass.InnerSingleton;
}

// Interpolate @ 1486d0b20

void __thiscall
USoundClass::Interpolate
          (USoundClass *this,float param_1,FSoundClassProperties *param_2,
          FSoundClassProperties *param_3,FSoundClassProperties *param_4)

{
  float fVar1;
  
  if (__real_3f800000 <= param_1) {
    FSoundClassProperties::operator=(param_2,param_4);
    return;
  }
  if (param_1 <= 0.0) {
    FSoundClassProperties::operator=(param_2,param_3);
    return;
  }
  fVar1 = __real_3f800000 - param_1;
  param_2->Volume = fVar1 * param_3->Volume + param_1 * param_4->Volume;
  param_2->Pitch = fVar1 * param_3->Pitch + param_1 * param_4->Pitch;
  param_2->VoiceCenterChannelVolume =
       fVar1 * param_3->VoiceCenterChannelVolume + param_1 * param_4->VoiceCenterChannelVolume;
  param_2->RadioFilterVolume =
       fVar1 * param_3->RadioFilterVolume + param_1 * param_4->RadioFilterVolume;
  param_2->RadioFilterVolumeThreshold =
       fVar1 * param_3->RadioFilterVolumeThreshold + param_1 * param_4->RadioFilterVolumeThreshold;
  return;
}

// PostLoad @ 1486e0550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundClass::PostLoad(USoundClass *this)

{
  FAudioDeviceManager *this_00;
  
  UObject::PostLoad((UObject *)this);
  if (GEngine != (UEngine *)0x0) {
    this_00 = UEngine::GetAudioDeviceManager(GEngine);
    if (this_00 != (FAudioDeviceManager *)0x0) {
      FAudioDeviceManager::RegisterSoundClass(this_00,this);
      return;
    }
  }
  return;
}

// RemoveUserDataOfClass @ 1486e95a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
USoundClass::RemoveUserDataOfClass(USoundClass *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->ChildClasses).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->ChildClasses).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((this->ChildClasses).AllocatorInstance.Data + lVar9);
      if (lVar2 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_1486e964c;
LAB_1486e967a:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_1486e967a;
          UE::GC::MarkAsReachable(pUVar7);
LAB_1486e964c:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_1486e967a;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_1486e967a;
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar2 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<TObjectPtr<UAssetUserData>,TSizedDefaultAllocator<32>_> *)
                     &this->ChildClasses,uVar8,Default);
          return;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->ChildClasses).ArrayNum);
  }
  return;
}

// Serialize @ 1486eca10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USoundClass::Serialize(USoundClass *this,FArchive *param_1)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  UObject::Serialize((UObject *)this,param_1);
  if (*(int *)&param_1->field_0x40 < 0x107) {
    local_3c = 0x80;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_34 = 0;
    local_28 = (ForElementType<FSetElementId>)0x0;
    local_20 = 0;
    local_38 = 0xffffffff;
    TSetPrivateFriend::
    Serialize<TTuple<USoundClass_*,FSoundClassEditorData>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassEditorData,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<USoundClass_*,FSoundClassEditorData>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassEditorData,0>,FDefaultSetAllocator>
                        *)local_68);
    local_20 = 0;
    if (local_28 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_28);
    }
    iVar1 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
    }
    local_34 = 0;
    local_40 = 0;
    local_38 = 0xffffffff;
    if (0x80 < local_3c) {
      local_3c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  return;
}

// Serialize @ 1486ecb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USoundClass::Serialize(USoundClass *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchive *pFVar2;
  undefined1 auStackY_a8 [32];
  FSlotBase local_78 [2];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_78);
  UObject::Serialize((UObject *)this,pFVar2);
  if (*(int *)&pFVar2->field_0x40 < 0x107) {
    local_3c = 0x80;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_34 = 0;
    local_28 = (ForElementType<FSetElementId>)0x0;
    local_20 = 0;
    local_38 = 0xffffffff;
    TSetPrivateFriend::
    Serialize<TTuple<USoundClass_*,FSoundClassEditorData>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassEditorData,0>,FDefaultSetAllocator>
              (pFVar2,(TSet<TTuple<USoundClass_*,FSoundClassEditorData>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundClassEditorData,0>,FDefaultSetAllocator>
                       *)local_68);
    local_20 = 0;
    if (local_28 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_28);
    }
    iVar1 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
    }
    local_38 = 0xffffffff;
    local_34 = 0;
    local_40 = 0;
    if (0x80 < local_3c) {
      local_3c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  return;
}

// StaticRegisterNativesUSoundClass @ 1486f1810

void __cdecl USoundClass::StaticRegisterNativesUSoundClass(void)

{
  return;
}

// _getUObject @ 1486fa240

UObject * __thiscall USoundClass::_getUObject(USoundClass *this)

{
  return (UObject *)&this[-1].PassiveSoundMixModifiers;
}

