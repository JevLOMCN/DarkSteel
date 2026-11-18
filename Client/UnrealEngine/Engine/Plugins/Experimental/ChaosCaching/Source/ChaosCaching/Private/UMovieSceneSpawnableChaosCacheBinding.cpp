// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 9

// StaticClass @ 14dadcaa0

UClass * __cdecl UMovieSceneSpawnableChaosCacheBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnableChaosCacheBinding.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"MovieSceneSpawnableChaosCacheBinding",
               &Z_Registration_Info_UClass_UMovieSceneSpawnableChaosCacheBinding.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnableChaosCacheBinding,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSpawnableChaosCacheBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnableChaosCacheBinding>,local_res8,
               UMovieSceneSpawnableActorBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnableChaosCacheBinding.InnerSingleton;
}

// UMovieSceneSpawnableChaosCacheBinding @ 14dae7f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieSceneSpawnableChaosCacheBinding * __thiscall
UMovieSceneSpawnableChaosCacheBinding::UMovieSceneSpawnableChaosCacheBinding
          (UMovieSceneSpawnableChaosCacheBinding *this,FVTableHelper *param_1)

{
  UMovieSceneSpawnableActorBinding::UMovieSceneSpawnableActorBinding
            ((UMovieSceneSpawnableActorBinding *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSpawnableChaosCacheBinding__6B_;
  return this;
}

// UMovieSceneSpawnableChaosCacheBinding @ 14dae7f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovieSceneSpawnableChaosCacheBinding * __thiscall
UMovieSceneSpawnableChaosCacheBinding::UMovieSceneSpawnableChaosCacheBinding
          (UMovieSceneSpawnableChaosCacheBinding *this,FObjectInitializer *param_1)

{
  UMovieSceneSpawnableActorBinding::UMovieSceneSpawnableActorBinding
            ((UMovieSceneSpawnableActorBinding *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSpawnableChaosCacheBinding__6B_;
  return this;
}

// ~UMovieSceneSpawnableChaosCacheBinding @ 14dae8ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneSpawnableChaosCacheBinding::~UMovieSceneSpawnableChaosCacheBinding
          (UMovieSceneSpawnableChaosCacheBinding *this)

{
  *(undefined ***)this = &___7UMovieSceneSpawnableChaosCacheBinding__6B_;
  UMovieSceneSpawnableActorBinding::~UMovieSceneSpawnableActorBinding
            ((UMovieSceneSpawnableActorBinding *)this);
  return;
}

// GetCustomBindingPriority @ 14daf7d60

int __thiscall
UMovieSceneSpawnableChaosCacheBinding::GetCustomBindingPriority
          (UMovieSceneSpawnableChaosCacheBinding *this)

{
  return UMovieSceneCustomBinding::BaseCustomPriority;
}

// GetPrivateStaticClass @ 14daf8820

UClass * __cdecl UMovieSceneSpawnableChaosCacheBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSpawnableChaosCacheBinding.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"MovieSceneSpawnableChaosCacheBinding",
               &Z_Registration_Info_UClass_UMovieSceneSpawnableChaosCacheBinding.InnerSingleton,
               StaticRegisterNativesUMovieSceneSpawnableChaosCacheBinding,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSpawnableChaosCacheBinding>,
               InternalVTableHelperCtorCaller<UMovieSceneSpawnableChaosCacheBinding>,local_res8,
               UMovieSceneSpawnableActorBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSpawnableChaosCacheBinding.InnerSingleton;
}

// SpawnObjectInternal @ 14db05090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
UMovieSceneSpawnableChaosCacheBinding::SpawnObjectInternal
          (UMovieSceneSpawnableChaosCacheBinding *this,UWorld *param_1,FName param_2,FGuid *param_3,
          int param_4,UMovieScene *param_5,FMovieSceneSequenceID *param_6,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_7)

{
  int iVar1;
  longlong lVar2;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FSoftObjectPath *this_00;
  FString local_78;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FSoftObjectPath local_38;
  
  pTVar3 = param_7;
  local_68.Object = param_7->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_7->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar4 = UMovieSceneSpawnableActorBindingBase::SpawnObjectInternal
                     ((UMovieSceneSpawnableActorBindingBase *)this,param_1,param_2,param_3,param_4,
                      param_5,param_6,&local_68);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = AChaosCacheManager::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      lVar2 = *(longlong *)&pUVar4[0x12].field_0x8;
      iVar1 = *(int *)&pUVar4[0x12].field_0x10;
      this_00 = (FSoftObjectPath *)(lVar2 + 0x58);
      while( true ) {
        if (*(int *)&pUVar4[0x12].field_0x10 != iVar1) {
          `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&param_7);
        }
        if (&this_00[-3].AssetPath.AssetName == (FName *)((longlong)iVar1 * 400 + lVar2)) break;
        FSoftObjectPath::ToString(this_00,&local_78);
        local_58 = local_78.Data.AllocatorInstance.Data;
        local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_38.AssetPath.PackageName.Number = 0;
        local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_38.AssetPath.AssetName.Number = 0;
        local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.SubPathString.Data.ArrayNum = 0;
        local_38.SubPathString.Data.ArrayMax = 0;
        if (local_78.Data.ArrayNum == 0) {
          iStack_50 = 0;
        }
        else {
          iStack_50 = local_78.Data.ArrayNum + -1;
        }
        local_48._12_4_ = uStack_4c;
        local_48.Size = iStack_50;
        local_48.DataPtr = (wchar_t *)local_78.Data.AllocatorInstance.Data;
        FSoftObjectPath::SetPath(&local_38,&local_48);
        this_00[-1].SubPathString.Data.ArrayNum = 0;
        this_00[-1].SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::operator=(this_00,&local_38);
        if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        this_00 = (FSoftObjectPath *)&this_00[0xc].SubPathString;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar3->SharedReferenceCount).ReferenceController);
  return pUVar4;
}

// StaticRegisterNativesUMovieSceneSpawnableChaosCacheBinding @ 14db053d0

void __cdecl
UMovieSceneSpawnableChaosCacheBinding::StaticRegisterNativesUMovieSceneSpawnableChaosCacheBinding
          (void)

{
  return;
}

// SupportsBindingCreationFromObject @ 14db053f0

bool __thiscall
UMovieSceneSpawnableChaosCacheBinding::SupportsBindingCreationFromObject
          (UMovieSceneSpawnableChaosCacheBinding *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar2 = AChaosCacheManager::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar2->_padding_)) {
    pUVar2 = UChaosCacheCollection::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
      return false;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_) {
      return false;
    }
  }
  return true;
}

