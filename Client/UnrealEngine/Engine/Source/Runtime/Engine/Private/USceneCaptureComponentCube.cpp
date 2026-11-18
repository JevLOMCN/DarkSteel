// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 14731f7a0

UClass * __cdecl USceneCaptureComponentCube::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneCaptureComponentCube.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneCaptureComponentCube",
               &Z_Registration_Info_UClass_USceneCaptureComponentCube.InnerSingleton,
               StaticRegisterNativesUSceneCaptureComponentCube,0xae0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USceneCaptureComponentCube>,
               InternalVTableHelperCtorCaller<USceneCaptureComponentCube>,local_res8,
               USceneCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneCaptureComponentCube.InnerSingleton;
}

// USceneCaptureComponentCube @ 147324e60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

USceneCaptureComponentCube * __thiscall
USceneCaptureComponentCube::USceneCaptureComponentCube
          (USceneCaptureComponentCube *this,FVTableHelper *param_1)

{
  USceneCaptureComponent::USceneCaptureComponent((USceneCaptureComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->TextureTarget).field0_0x0.DebugPtr = (UTextureRenderTargetCube *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  return this;
}

// ~USceneCaptureComponentCube @ 1473254d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USceneCaptureComponentCube::~USceneCaptureComponentCube(USceneCaptureComponentCube *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->PostProcessSettings).WeightedBlendables.Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneCaptureComponent::~USceneCaptureComponent((USceneCaptureComponent *)this);
  return;
}

// GetPrivateStaticClass @ 147327800

UClass * __cdecl USceneCaptureComponentCube::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneCaptureComponentCube.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SceneCaptureComponentCube",
               &Z_Registration_Info_UClass_USceneCaptureComponentCube.InnerSingleton,
               StaticRegisterNativesUSceneCaptureComponentCube,0xae0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USceneCaptureComponentCube>,
               InternalVTableHelperCtorCaller<USceneCaptureComponentCube>,local_res8,
               USceneCaptureComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneCaptureComponentCube.InnerSingleton;
}

// IsCube @ 147327ae0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall USceneCaptureComponentCube::IsCube(USceneCaptureComponentCube *this)

{
  return true;
}

// Serialize @ 147327f10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USceneCaptureComponentCube::Serialize
          (USceneCaptureComponentCube *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUSceneCaptureComponentCube @ 147328340

void __cdecl USceneCaptureComponentCube::StaticRegisterNativesUSceneCaptureComponentCube(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USceneCaptureComponentCube_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCaptureScene @ 147329eb0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
USceneCaptureComponentCube::execCaptureScene(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CaptureScene((USceneCaptureComponentCube *)param_1);
  return;
}

// USceneCaptureComponentCube @ 14792ab50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

USceneCaptureComponentCube * __thiscall
USceneCaptureComponentCube::USceneCaptureComponentCube
          (USceneCaptureComponentCube *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  
  USceneCaptureComponent::USceneCaptureComponent((USceneCaptureComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->TextureTarget).field0_0x0.DebugPtr = (UTextureRenderTargetCube *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  bVar2 = this->field_0x42;
  this->field_0x9a = this->field_0x9a | 8;
  this->field_0x99 = this->field_0x99 | 0x80;
  (this->PostProcessSettings).LumenReflectionsScreenTraces = '\0';
  (this->PostProcessSettings).LumenFinalGatherScreenTraces = '\0';
  this->field_0x42 = bVar2 & 0xf7 | 2;
  this->field_0x40 = 2;
  this->bCaptureRotation = false;
  this->PostProcessBlendWeight = 1.0;
  (this->PostProcessSettings).DynamicGlobalIlluminationMethod.Value = '\0';
  (this->PostProcessSettings).ReflectionMethod.Value = '\0';
  (this->PostProcessSettings).LumenSurfaceCacheResolution = 0.5;
  (this->PostProcessSettings).VignetteIntensity = 0.0;
  return this;
}

// AddReferencedObjects @ 147930720

void __cdecl
USceneCaptureComponentCube::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  FString *pFVar7;
  uint uVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  if (param_1 == (UObject *)0x0) {
    pFVar7 = GetTypeName<USceneCaptureComponent>(&FStack_48);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar6 = USceneCaptureComponent::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar6->_padding_)) {
    uVar8 = 0;
    if (0 < *(int *)(param_1 + 0x15)) {
      lVar10 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < *(int *)(param_1 + 0x15)) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(*(longlong *)(lVar10 + *(longlong *)&param_1[0x14].field_0x20) + 8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
        }
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x15));
    }
    UActorComponent::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar7 = GetTypeName<USceneCaptureComponent>(&FStack_38);
  pwVar9 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UObject>(&FStack_28,param_1);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar11);
}

// CaptureScene @ 1479386b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneCaptureComponentCube::CaptureScene(USceneCaptureComponentCube *this)

{
  char cVar1;
  bool bVar2;
  UWorld *this_00;
  FMessageLog *this_01;
  FText *pFVar3;
  FName local_res8;
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  this_00 = *(UWorld **)&this->field_0xb0;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (this_00 == (UWorld *)0x0) goto LAB_147938763;
  }
  if (this_00->Scene != (FSceneInterface *)0x0) {
    cVar1 = (**(code **)(*(longlong *)this + 0x560))(this);
    if (cVar1 != '\0') {
      bVar2 = USceneCaptureComponent::IsCulledByDetailMode((USceneCaptureComponent *)this);
      if (!bVar2) {
        this->field_0x252 = this->field_0x252 & 0xef;
        UWorld::SendAllEndOfFrameUpdates(this_00);
        ISceneRenderBuilder::Create((FSceneInterface *)&local_res8);
        (**(code **)(*(longlong *)this + 0x658))(this,this_00->Scene,local_res8);
        (**(code **)(*(longlong *)local_res8 + 0x30))();
        if (local_res8 != (FName)0x0) {
          (*(code *)**(undefined8 **)local_res8)(local_res8,1);
        }
      }
    }
  }
LAB_147938763:
  if ((this->field_0x252 & 1) != 0) {
    ::FName::FName(&local_res8,"Blueprint");
    this_01 = FMessageLog::FMessageLog(&local_38,&local_res8);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"SceneCaptureComponent",L"CaptureScene",
                        L"CaptureScene: Scene capture with bCaptureEveryFrame enabled was told to update - major inefficiency."
                       );
    FMessageLog::Warning(this_01,&local_58,pFVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_38);
  }
  return;
}

// CaptureSceneDeferred @ 147938a40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneCaptureComponentCube::CaptureSceneDeferred(USceneCaptureComponentCube *this)

{
  TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *pTVar1;
  char cVar2;
  bool bVar3;
  UWorld *pUVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  TPairInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_&&>
  local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  FWeakObjectPtr *local_30;
  
  pUVar4 = *(UWorld **)&this->field_0xb0;
  if ((pUVar4 == (UWorld *)0x0) &&
     (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)this), pUVar4 == (UWorld *)0x0)
     ) {
    return;
  }
  if (pUVar4->Scene == (FSceneInterface *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*(longlong *)this + 0x560))(this);
  if (cVar2 == '\0') {
    return;
  }
  bVar3 = USceneCaptureComponent::IsCulledByDetailMode((USceneCaptureComponent *)this);
  if (bVar3) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&SceneCapturesToUpdateMapCS);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_res8.Value = (TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *)0x0;
  local_res8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)pUVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8.Value,(FObjectPtr)&local_res8);
  pTVar1 = local_res8.Value;
  if (SceneCapturesToUpdateMap._72_4_ != 0) {
    lVar5 = 0x154c33aa8;
    if (SceneCapturesToUpdateMap._64_8_ != 0) {
      lVar5 = SceneCapturesToUpdateMap._64_8_;
    }
    iVar7 = *(int *)(lVar5 + (longlong)
                             (int)(SceneCapturesToUpdateMap._72_4_ - 1U &
                                  ((uint)((ulonglong)local_res8.Value >> 0x20) ^
                                  (uint)local_res8.Value)) * 4);
    local_38 = local_res18;
    do {
      iVar6 = iVar7;
      iVar7 = iVar6;
      if (iVar6 == -1) break;
      local_res8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)pTVar1;
      iVar7 = *(int *)(SceneCapturesToUpdateMap._0_8_ + 0x10 + (longlong)iVar6 * 0x18);
      local_res20 = *(FWeakObjectPtr *)(SceneCapturesToUpdateMap._0_8_ + (longlong)iVar6 * 0x18);
      bVar3 = TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>::UEOpEquals<UWorld_const_,bool>
                        ((TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res8);
    } while (!bVar3);
    if (iVar6 != -1) {
      while( true ) {
        bVar3 = TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>::
                UEOpEquals<USceneCaptureComponent,bool>
                          ((TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *)
                           (SceneCapturesToUpdateMap._0_8_ + 8 + (longlong)iVar6 * 0x18),
                           (TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr> *)&local_38);
        if (bVar3) break;
        do {
          iVar6 = iVar7;
          if (iVar6 == -1) goto LAB_147938c39;
          local_res8.Key = (TWeakObjectPtr<UWorld,FWeakObjectPtr> *)pTVar1;
          iVar7 = *(int *)(SceneCapturesToUpdateMap._0_8_ + 0x10 + (longlong)iVar6 * 0x18);
          local_res20 = *(FWeakObjectPtr *)(SceneCapturesToUpdateMap._0_8_ + (longlong)iVar6 * 0x18)
          ;
          bVar3 = TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>::UEOpEquals<UWorld_const_,bool>
                            ((TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res20,
                             (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res8);
        } while (!bVar3);
      }
      if (SceneCapturesToUpdateMap._0_8_ + 8 + (longlong)iVar6 * 0x18 != 0) goto LAB_147938c60;
    }
  }
LAB_147938c39:
  local_38 = (FWeakObjectPtr)&local_res8.Value;
  local_30 = &local_res18;
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TWeakObjectPtr<UWorld,FWeakObjectPtr>_&&,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_&&>_>
            ((TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
              *)&SceneCapturesToUpdateMap,&local_res8,(bool *)&local_38);
LAB_147938c60:
  LeaveCriticalSection((LPCRITICAL_SECTION)&SceneCapturesToUpdateMapCS);
  return;
}

// OnComponentDestroyed @ 147958bf0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponentCube::OnComponentDestroyed(USceneCaptureComponentCube *this,bool param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  UObjectBaseUtility *pUVar4;
  USceneCaptureComponentCube *pUVar5;
  UObject *pUVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FUObjectItem *pFVar13;
  FString *pFVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  undefined8 *puVar17;
  uint uVar18;
  wchar_t *pwVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  uint uStackX_18;
  ulonglong in_stack_fffffffffffffe08;
  ForAnyElementType FStack_1c8;
  undefined8 uStack_1c0;
  UObject *pUStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  FName FStack_1a0;
  FName FStack_198;
  FName FStack_190;
  FString FStack_188;
  FString FStack_178;
  FString FStack_168;
  FString FStack_158;
  FString FStack_148;
  FString FStack_138;
  FString FStack_128;
  FString FStack_118;
  FString FStack_108;
  FString FStack_f8;
  FString FStack_e8;
  FString FStack_d8;
  FString FStack_c8;
  FString FStack_b8;
  FString FStack_a8;
  FString FStack_98;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  
  UActorComponent::OnComponentDestroyed((UActorComponent *)this,param_1);
  *(undefined4 *)&this->field_0x1d8 = 0;
  if (*(int *)&this->field_0x1dc < 0) {
    in_stack_fffffffffffffe08 = in_stack_fffffffffffffe08 & 0xffffffff00000000;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->field_0x1d0,0,(int *)&this->field_0x1dc);
  }
  if ((GExitPurge == false) && (-1 < (char)this->field_0x1a9)) {
    lVar3 = *(longlong *)&this->field_0xa8;
    uStackX_18 = *(uint *)&this->field_0xf0;
    uVar21 = (ulonglong)uStackX_18;
    if (param_1) {
      lVar22 = 0;
      bVar10 = false;
      FStack_1c8.Data = (FScriptContainerElement *)0x0;
      uStack_1c0 = 0;
      if ((int)uStackX_18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar21);
      }
      if (0 < (int)uStackX_18) {
        pwVar19 = (wchar_t *)((longlong)&uStack_1c0 + 4);
        pwVar15 = (wchar_t *)(in_stack_fffffffffffffe08 & 0xffffffff00000000);
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uStackX_18,&FStack_1c8,0,(int *)pwVar19);
        puVar23 = &this->field_0xe8;
        do {
          iVar12 = *(int *)&this->field_0xf0;
          pFVar20 = (FScriptContainerElement *)(longlong)iVar12;
          uVar18 = iVar12 - 1;
          uVar11 = 0;
          if ((int)uVar18 < iVar12) {
            uVar11 = ~uVar18 >> 0x1f;
          }
          if (uVar11 == 0) {
            pwVar15 = (wchar_t *)(longlong)(int)uVar18;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            pwVar19 = (wchar_t *)pFVar20;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          pFVar20 = (FScriptContainerElement *)(longlong)*(int *)&this->field_0xf0;
          pUVar4 = *(UObjectBaseUtility **)(*(longlong *)puVar23 + -8 + (longlong)pFVar20 * 8);
          if ((pUVar4 == (UObjectBaseUtility *)0x0) || (*(longlong *)&pUVar4[4].field_0x8 == lVar3))
          {
            if (*(int *)&this->field_0xf0 < 1) {
              pwVar15 = (wchar_t *)0x0;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              pwVar19 = (wchar_t *)pFVar20;
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar6 = *(UObject **)
                          (*(longlong *)puVar23 + -8 + (longlong)*(int *)&this->field_0xf0 * 8),
               pUVar6 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(pUVar6);
            }
            uVar11 = *(int *)&this->field_0xf0 - 1;
            pvVar1 = (void *)(*(longlong *)puVar23 + (longlong)(int)uVar11 * 8);
            iVar12 = ~uVar11 + *(int *)&this->field_0xf0;
            if (iVar12 != 0) {
              memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)iVar12 << 3);
            }
            *(int *)&this->field_0xf0 = *(int *)&this->field_0xf0 + -1;
            if (pUVar4 != (UObjectBaseUtility *)0x0) {
              pUStack_1b8 = (UObject *)pUVar4;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar4);
              }
              if ((FStack_1c8.Data <= (FScriptContainerElement *)&pUStack_1b8) &&
                 ((FScriptContainerElement *)&pUStack_1b8 <
                  FStack_1c8.Data + (longlong)uStack_1c0._4_4_ * 8)) {
                pwVar15 = (wchar_t *)&pUStack_1b8;
                pwVar19 = (wchar_t *)FStack_1c8.Data;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar8) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar12 = (int)uStack_1c0;
              if ((int)uStack_1c0 == uStack_1c0._4_4_) {
                iVar12 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&FStack_1c8,(int *)((longlong)&uStack_1c0 + 4));
              }
              uStack_1c0 = CONCAT44(uStack_1c0._4_4_,iVar12 + 1);
              *(UObject **)(FStack_1c8.Data + (longlong)iVar12 * 8) = pUStack_1b8;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUStack_1b8 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUStack_1b8);
              }
            }
          }
          else {
            pUVar5 = *(USceneCaptureComponentCube **)&pUVar4[5].field_0x8;
            if (pUVar5 == (USceneCaptureComponentCube *)0x0) {
              if ((((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0) &&
                  ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0)) &&
                 (1 < (byte)LogSceneComponent._0_1_)) {
                pFVar14 = UObjectBaseUtility::GetFullName(pUVar4,&FStack_f8,(UObject *)0x0,None);
                if ((pFVar14->Data).ArrayNum == 0) {
                  pwVar15 = L"";
                }
                else {
                  pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                }
                UObjectBaseUtility::GetFullName(pUVar4,&FStack_108,(UObject *)0x0,None);
                UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this,&FStack_118,(UObject *)0x0,None);
                UE::Logging::Private::BasicLog<2>
                          (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
                if (FStack_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_118.Data.AllocatorInstance.Data);
                }
                FVar16.Data = FStack_f8.Data.AllocatorInstance.Data;
                if (FStack_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
                  FVar16.Data = FStack_f8.Data.AllocatorInstance.Data;
                }
LAB_147959024:
                if (FVar16.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar16.Data);
                }
              }
LAB_147959035:
              pFVar20 = (FScriptContainerElement *)(longlong)*(int *)&this->field_0xf0;
              if (*(int *)&this->field_0xf0 < 1) {
                pwVar15 = (wchar_t *)0x0;
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                pwVar19 = (wchar_t *)pFVar20;
                if (bVar8) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar6 = *(UObject **)
                            (*(longlong *)puVar23 + -8 + (longlong)*(int *)&this->field_0xf0 * 8),
                 pUVar6 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              uVar11 = *(int *)&this->field_0xf0 - 1;
              pvVar1 = (void *)(*(longlong *)puVar23 + (longlong)(int)uVar11 * 8);
              iVar12 = ~uVar11 + *(int *)&this->field_0xf0;
              if (iVar12 != 0) {
                memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)iVar12 << 3);
              }
              *(int *)&this->field_0xf0 = *(int *)&this->field_0xf0 + -1;
            }
            else {
              if (pUVar5 != this) {
                if (1 < (byte)LogSceneComponent._0_1_) {
                  pFVar14 = UObjectBaseUtility::GetFullName
                                      ((UObjectBaseUtility *)pUVar5,&FStack_128,(UObject *)0x0,None)
                  ;
                  if ((pFVar14->Data).ArrayNum == 0) {
                    pwVar19 = L"";
                  }
                  else {
                    pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                  }
                  pFVar14 = UObjectBaseUtility::GetFullName(pUVar4,&FStack_138,(UObject *)0x0,None);
                  if ((pFVar14->Data).ArrayNum == 0) {
                    pwVar15 = L"";
                  }
                  else {
                    pwVar15 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
                  }
                  UObjectBaseUtility::GetFullName(pUVar4,&FStack_148,(UObject *)0x0,None);
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this,&FStack_158,(UObject *)0x0,None);
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
                  if (FStack_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FStack_158.Data.AllocatorInstance.Data);
                  }
                  if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
                  }
                  FVar16.Data = FStack_128.Data.AllocatorInstance.Data;
                  if (FStack_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FStack_138.Data.AllocatorInstance.Data);
                    FVar16.Data = FStack_128.Data.AllocatorInstance.Data;
                  }
                  goto LAB_147959024;
                }
                goto LAB_147959035;
              }
              pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc);
              if (((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
                if (!bVar10) {
                  for (lVar22 = *(longlong *)&this->field_0xd0;
                      (lVar22 != 0 &&
                      ((pFVar13 = FUObjectArray::IndexToObject
                                            (&GUObjectArray,*(int *)(lVar22 + 0xc)),
                       ((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) != 0 ||
                       (*(longlong *)(lVar22 + 0xa8) == lVar3))));
                      lVar22 = *(longlong *)(lVar22 + 0xd0)) {
                  }
                  bVar10 = true;
                }
                if (lVar22 == 0) goto LAB_147958e4d;
                uStack_1b0 = 0;
                cVar9 = (**(code **)(*(longlong *)pUVar4 + 0x508))
                                  (pUVar4,lVar22,&FAttachmentTransformRules::KeepWorldTransform,0,
                                   pwVar15,pwVar19);
                if (cVar9 == '\0') goto LAB_147958e4d;
              }
              else {
LAB_147958e4d:
                (**(code **)(*(longlong *)pUVar4 + 0x518))
                          (pUVar4,&FDetachmentTransformRules::KeepWorldTransform);
              }
            }
            if ((int)uStackX_18 <= *(int *)&this->field_0xf0) {
              FStack_1a0.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
              FStack_1a0.Number = *(uint *)&pUVar4->field_0x1c;
              ::FName::ToString(&FStack_1a0,&FStack_188);
              pwVar15 = L"";
              if (FStack_188.Data.ArrayNum != 0) {
                pwVar15 = (wchar_t *)FStack_188.Data.AllocatorInstance.Data;
              }
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ChildCount > AttachChildren.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                                 ,0x612,
                                 L"AttachChildren count increased while detaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                                );
              if (FStack_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_188.Data.AllocatorInstance.Data);
              }
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
          }
          uStackX_18 = *(uint *)&this->field_0xf0;
        } while (0 < (int)uStackX_18);
      }
      puVar23 = &this->field_0xe8;
      if ((ForAnyElementType *)puVar23 != &FStack_1c8) {
        if (*(void **)puVar23 != (void *)0x0) {
          FMemory::Free(*(void **)puVar23);
        }
        *(FScriptContainerElement **)puVar23 = FStack_1c8.Data;
        *(int *)&this->field_0xf0 = (int)uStack_1c0;
        FStack_1c8.Data = (FScriptContainerElement *)0x0;
        *(int *)&this->field_0xf4 = uStack_1c0._4_4_;
        uStack_1c0 = 0;
      }
      if (FStack_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1c8.Data);
      }
    }
    else {
      while (0 < (int)uStackX_18) {
        uVar18 = *(int *)&this->field_0xf0 - 1;
        uVar11 = 0;
        if ((int)uVar18 < *(int *)&this->field_0xf0) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = *(int *)&this->field_0xf0;
        pUVar4 = *(UObjectBaseUtility **)
                  (*(longlong *)&this->field_0xe8 + -8 + (longlong)iVar12 * 8);
        if (pUVar4 == (UObjectBaseUtility *)0x0) {
joined_r0x00014795986d:
          if ((iVar12 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar6 = *(UObject **)
                        (*(longlong *)&this->field_0xe8 + -8 +
                        (longlong)*(int *)&this->field_0xf0 * 8), pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          uVar11 = *(int *)&this->field_0xf0 - 1;
          pvVar1 = (void *)(*(longlong *)&this->field_0xe8 + (longlong)(int)uVar11 * 8);
          iVar12 = ~uVar11 + *(int *)&this->field_0xf0;
          if (iVar12 != 0) {
            memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)iVar12 << 3);
          }
          *(int *)&this->field_0xf0 = *(int *)&this->field_0xf0 + -1;
        }
        else {
          pUVar5 = *(USceneCaptureComponentCube **)&pUVar4[5].field_0x8;
          if (pUVar5 == (USceneCaptureComponentCube *)0x0) {
            if ((((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0) &&
                ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0)) &&
               (1 < (byte)LogSceneComponent._0_1_)) {
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_58,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_68,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&FStack_78,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
              if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
              }
              if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
              }
              if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
              }
            }
            iVar12 = *(int *)&this->field_0xf0;
            goto joined_r0x00014795986d;
          }
          if (pUVar5 != this) {
            if (1 < (byte)LogSceneComponent._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar5,&FStack_88,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_98,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName(pUVar4,&FStack_a8,(UObject *)0x0,None);
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this,&FStack_b8,(UObject *)0x0,None);
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogSceneComponent);
              if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
              }
              if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
              }
              if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
              }
              if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
              }
            }
            iVar12 = *(int *)&this->field_0xf0;
            goto joined_r0x00014795986d;
          }
          pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc);
          if (((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
            for (lVar22 = *(longlong *)&this->field_0xd0; lVar22 != 0;
                lVar22 = *(longlong *)(lVar22 + 0xd0)) {
              pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar22 + 0xc));
              if (((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0) {
                uStack_1a8 = 0;
                cVar9 = (**(code **)(*(longlong *)pUVar4 + 0x508))(pUVar4,lVar22);
                if (cVar9 != '\0') {
                  if ((int)uVar21 <= *(int *)&this->field_0xf0) {
                    FStack_198.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
                    FStack_198.Number = *(uint *)&pUVar4->field_0x1c;
                    ::FName::ToString(&FStack_198,&FStack_178);
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ChildCount > AttachChildren.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                                        ,0x63e,
                                        L"AttachChildren count did not decrease while reattaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                                       );
                    if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
                    }
                    if (bVar10) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  goto LAB_147959903;
                }
                break;
              }
            }
          }
          puVar17 = *(undefined8 **)&pUVar5->field_0xe8;
          puVar2 = puVar17 + *(int *)&pUVar5->field_0xf0;
          for (; puVar17 != puVar2; puVar17 = puVar17 + 1) {
            if (((UObjectBaseUtility *)*puVar17 != (UObjectBaseUtility *)0x0) &&
               ((UObjectBaseUtility *)*puVar17 == pUVar4)) goto LAB_1479595ca;
          }
          UObjectBaseUtility::GetFullName
                    (*(UObjectBaseUtility **)&pUVar4[5].field_0x8,&FStack_c8,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName(pUVar4,&FStack_d8,(UObject *)0x0,None);
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&FStack_e8,(UObject *)0x0,None)
          ;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ChildAttachParentWas->GetAttachChildren().Contains(Child)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                              ,0x646,
                              L"Did not find \'%s\', in Child->AttachParent->AttachChildren. Child: \'%s\', Child->AttachParent: \'%s\'"
                             );
          if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
          }
          if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
          }
          if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
          }
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_1479595ca:
          (**(code **)(*(longlong *)pUVar4 + 0x518))
                    (pUVar4,&FDetachmentTransformRules::KeepWorldTransform);
          if ((int)uVar21 <= *(int *)&this->field_0xf0) {
            FStack_190.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
            FStack_190.Number = *(uint *)&pUVar4->field_0x1c;
            ::FName::ToString(&FStack_190,&FStack_168);
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ChildCount > AttachChildren.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                                ,0x648,
                                L"AttachChildren count increased while detaching \'%s\', likely caused by OnAttachmentChanged introducing new children, which could lead to an infinite loop."
                               );
            if (FStack_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_168.Data.AllocatorInstance.Data);
            }
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
        }
LAB_147959903:
        uStackX_18 = *(uint *)&this->field_0xf0;
        uVar21 = (ulonglong)uStackX_18;
      }
    }
    if ((*(longlong *)&this->field_0xd0 != 0) &&
       ((!param_1 || (*(longlong *)(*(longlong *)&this->field_0xd0 + 0xa8) != lVar3)))) {
      (**(code **)(*(longlong *)this + 0x518))(this,&FDetachmentTransformRules::KeepWorldTransform);
    }
  }
  return;
}

// OnRegister @ 14795a0e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USceneCaptureComponentCube::OnRegister(USceneCaptureComponentCube *this)

{
  USceneComponent::OnRegister((USceneComponent *)this);
  USceneCaptureComponent::UpdateShowFlags((USceneCaptureComponent *)this);
  return;
}

// SendRenderTransform_Concurrent @ 147965880

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponentCube::SendRenderTransform_Concurrent(USceneCaptureComponentCube *this)

{
  if ((this->field_0x252 & 3) == 2) {
    CaptureSceneDeferred(this);
  }
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  return;
}

// Serialize @ 147966120

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponentCube::Serialize(USceneCaptureComponentCube *this,FArchive *param_1)

{
  bool bVar1;
  int iVar2;
  UObject *this_00;
  FPostProcessSettings *pFVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar2 < 0xb9) {
    this_00 = UObject::GetArchetype((UObject *)this);
    bVar1 = UObject::IsInBlueprint(this_00);
    if (!bVar1) {
      pFVar3 = FPostProcessSettings::GetDefault();
      FPostProcessSettings::operator=(&this->PostProcessSettings,pFVar3);
    }
  }
  USceneComponent::Serialize((USceneComponent *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRenderingObjectVersion::GUID);
  iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRenderingObjectVersion::GUID);
  if ((iVar2 < 0x13) && ((0 < *(int *)&this->field_0x290 || (0 < *(int *)&this->field_0x280)))) {
    this->field_0x250 = 2;
  }
  return;
}

// TickComponent @ 147973b00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USceneCaptureComponentCube::TickComponent
          (USceneCaptureComponentCube *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  if ((this->field_0x252 & 1) != 0) {
    CaptureSceneDeferred(this);
    return;
  }
  return;
}

// UpdateSceneCaptureContents @ 14797b670

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USceneCaptureComponentCube::UpdateSceneCaptureContents
          (USceneCaptureComponentCube *this,FSceneInterface *param_1,ISceneRenderBuilder *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014797b67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x1d0))(param_1,this);
  return;
}

