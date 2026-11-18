// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 7

// FChaosCacheObjectSpawner @ 14dae68f0

FChaosCacheObjectSpawner * __thiscall
FChaosCacheObjectSpawner::FChaosCacheObjectSpawner(FChaosCacheObjectSpawner *this)

{
  *this = (FChaosCacheObjectSpawner)&___7FChaosCacheObjectSpawner__6B_;
  return this;
}

// CreateObjectSpawner @ 14daee700

TSharedRef<IMovieSceneObjectSpawner,1> * __cdecl
FChaosCacheObjectSpawner::CreateObjectSpawner
          (TSharedRef<IMovieSceneObjectSpawner,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FChaosCacheObjectSpawner> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FChaosCacheObjectSpawner *)0x0) {
    *local_res8[0].Object = (FChaosCacheObjectSpawner)&___7FChaosCacheObjectSpawner__6B_;
  }
  TSharedRef<IMovieSceneObjectSpawner,1>::
  TSharedRef<IMovieSceneObjectSpawner,1><FChaosCacheObjectSpawner>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// DestroySpawnedObject @ 14daefa60

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
FChaosCacheObjectSpawner::DestroySpawnedObject(FChaosCacheObjectSpawner *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *this_00;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      this_00 = AActor::GetWorld((AActor *)param_1);
      if (this_00 == (UWorld *)0x0) {
        return;
      }
      UWorld::DestroyActor(this_00,(AActor *)param_1,false,false);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4080741611540054280>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceActorSpawner.cpp"
                     ,0x108,"Actor");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GetSpawnerPriority @ 14daf8910

int __thiscall FChaosCacheObjectSpawner::GetSpawnerPriority(FChaosCacheObjectSpawner *this)

{
  return 1;
}

// GetSupportedTemplateType @ 14daf8a80

UClass * __thiscall
FChaosCacheObjectSpawner::GetSupportedTemplateType(FChaosCacheObjectSpawner *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AChaosCacheManager.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"ChaosCacheManager",
               &Z_Registration_Info_UClass_AChaosCacheManager.InnerSingleton,
               AChaosCacheManager::StaticRegisterNativesAChaosCacheManager,0x378,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AChaosCacheManager>,
               InternalVTableHelperCtorCaller<AChaosCacheManager>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AChaosCacheManager.InnerSingleton;
}

// IsEditor @ 14dafa740

bool __thiscall FChaosCacheObjectSpawner::IsEditor(FChaosCacheObjectSpawner *this)

{
  return true;
}

// SpawnObject @ 14db04ef0

UObject * __thiscall
FChaosCacheObjectSpawner::SpawnObject
          (FChaosCacheObjectSpawner *this,FMovieSceneSpawnable *param_1,
          FMovieSceneSequenceID *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FSoftObjectPath *this_00;
  undefined1 local_res20 [8];
  FString local_78;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  FSoftObjectPath local_38;
  
  local_68.Object = param_3->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar3 = FLevelSequenceActorSpawner::SpawnObject
                     ((FLevelSequenceActorSpawner *)this,param_1,param_2,&local_68);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = AChaosCacheManager::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      lVar2 = *(longlong *)&pUVar3[0x12].field_0x8;
      iVar1 = *(int *)&pUVar3[0x12].field_0x10;
      this_00 = (FSoftObjectPath *)(lVar2 + 0x58);
      while( true ) {
        if (*(int *)&pUVar3[0x12].field_0x10 != iVar1) {
          `TCheckedPointerIterator<FObservedComponent,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
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
            ((param_3->SharedReferenceCount).ReferenceController);
  return pUVar3;
}

