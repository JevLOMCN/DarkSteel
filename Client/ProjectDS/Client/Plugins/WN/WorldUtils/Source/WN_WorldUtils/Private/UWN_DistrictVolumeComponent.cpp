// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 8

// StaticClass @ 14a0248c0

UClass * __cdecl UWN_DistrictVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_DistrictVolumeComponent",
               &Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_DistrictVolumeComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_DistrictVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_DistrictVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.InnerSingleton;
}

// UWN_DistrictVolumeComponent @ 14a02da70

UWN_DistrictVolumeComponent * __thiscall
UWN_DistrictVolumeComponent::UWN_DistrictVolumeComponent
          (UWN_DistrictVolumeComponent *this,FVTableHelper *param_1)

{
  UWN_VolumeComponent::UWN_VolumeComponent((UWN_VolumeComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UWN_DistrictVolumeComponent @ 14a02dae0

UWN_DistrictVolumeComponent * __thiscall
UWN_DistrictVolumeComponent::UWN_DistrictVolumeComponent
          (UWN_DistrictVolumeComponent *this,FObjectInitializer *param_1)

{
  UWN_VolumeComponent::UWN_VolumeComponent((UWN_VolumeComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UWN_DistrictVolumeComponent @ 14a02ebb0

void __thiscall
UWN_DistrictVolumeComponent::~UWN_DistrictVolumeComponent(UWN_DistrictVolumeComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UWN_VolumeComponent::~UWN_VolumeComponent((UWN_VolumeComponent *)this);
  return;
}

// DestroyComponent @ 14a032c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UWN_DistrictVolumeComponent::DestroyComponent(UWN_DistrictVolumeComponent *this,bool param_1)

{
  TObjectPtr<USceneComponent>_u_0 *pTVar1;
  FScriptContainerElement *pFVar2;
  AActor *this_00;
  USceneComponent *pUVar3;
  void *_Src;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  char cVar7;
  bool bVar8;
  FUObjectItem *pFVar9;
  UClass *pUVar10;
  TObjectPtr<USceneComponent>_u_0 this_01;
  TRotator<double> *pTVar11;
  int iVar12;
  int iVar13;
  TObjectPtr<USceneComponent>_u_0 *pTVar14;
  longlong lVar15;
  longlong *plVar16;
  ForAnyElementType FVar17;
  longlong *plVar18;
  undefined1 auStackY_1d8 [32];
  undefined1 uStack_198;
  undefined1 uStack_197;
  ForAnyElementType FStack_190;
  int iStack_188;
  int iStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  UWN_DistrictVolumeComponent *pUStack_170;
  UWN_DistrictVolumeComponent *pUStack_168;
  TObjectPtr<USceneComponent>_u_0 TStack_160;
  TObjectPtr<USceneComponent>_u_0 TStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  TRotator<double> TStack_138;
  TVector<double>_u_0 aTStack_118 [2];
  double dStack_e8;
  TRotator<double> TStack_e0;
  undefined1 auStack_c8 [128];
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uStack_197 = param_1;
  if ((param_1) && (this_00 = *(AActor **)&this->field_0xa8, this_00 != (AActor *)0x0)) {
    this_01.DebugPtr = (USceneComponent *)0x0;
    if (this == (UWN_DistrictVolumeComponent *)(this_00->RootComponent).field0_0x0.DebugPtr) {
      pTVar14 = *(TObjectPtr<USceneComponent>_u_0 **)&this->field_0xe8;
      pTVar1 = pTVar14 + *(int *)&this->field_0xf0;
      for (; pTVar14 != pTVar1; pTVar14 = pTVar14 + 1) {
        pUVar3 = pTVar14->DebugPtr;
        if (((pUVar3 != (USceneComponent *)0x0) &&
            (cVar7 = (**(code **)(pUVar3->_padding_ + 0x120))(pUVar3), cVar7 == '\0')) &&
           ((AActor *)pUVar3->_padding_ == this_00)) goto LAB_14793ed97;
      }
      pTVar14 = (TObjectPtr<USceneComponent>_u_0 *)0x0;
LAB_14793ed97:
      pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(this_00->_padding_ + 0xc));
      if (pTVar14 == (TObjectPtr<USceneComponent>_u_0 *)0x0) {
        if (((pFVar9->field0_0x0).FlagsAndRefCount & 0x200000000000000U) == 0) {
          (**(code **)(*(longlong *)this + 0x170))(this,0,*(undefined8 *)&this->field_0x20);
          FVar5 = SceneComponentStatics::DefaultSceneRootVariableName;
          if (SceneComponentStatics::DefaultSceneRootVariableName == (FName)0x0) {
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)this_00,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
          }
          pUVar10 = USceneComponent::StaticClass();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)auStack_c8,pUVar10);
          FVar6 = SceneComponentStatics::DefaultSceneRootVariableName;
          auStack_c8._48_8_ = (FObjectInstancingGraph *)0x0;
          auStack_c8._56_8_ = (UPackage *)0x0;
          SceneComponentStatics::DefaultSceneRootVariableName.ComparisonIndex =
               FVar5.ComparisonIndex.Value;
          SceneComponentStatics::DefaultSceneRootVariableName.Number = FVar5.Number;
          auStack_c8._16_4_ =
               SceneComponentStatics::DefaultSceneRootVariableName.ComparisonIndex.Value;
          auStack_c8._20_4_ = SceneComponentStatics::DefaultSceneRootVariableName.Number;
          auStack_c8._24_4_ = RF_Transactional;
          auStack_c8._40_8_ = (UObject *)0x0;
          auStack_c8[0x20] = false;
          SceneComponentStatics::DefaultSceneRootVariableName = FVar6;
          auStack_c8._8_8_ = this_00;
          this_01.DebugPtr =
               (USceneComponent *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_c8);
          if (auStack_c8._64_8_ != 0) {
            plVar18 = (longlong *)(auStack_c8 + 0x50);
            if ((longlong *)auStack_c8._104_8_ != (longlong *)0x0) {
              plVar18 = (longlong *)auStack_c8._104_8_;
            }
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
          ((this_01.DebugPtr)->Mobility).Value = this->field_0x1ab;
          pTVar11 = USceneComponent::GetComponentRotation((USceneComponent *)this,&TStack_e0);
          dStack_140 = *(double *)&this->field_0x220;
          dStack_150 = *(double *)&this->field_0x210;
          dStack_148 = *(double *)&this->field_0x218;
          TStack_138.Pitch = pTVar11->Pitch;
          TStack_138.Yaw = pTVar11->Yaw;
          TStack_138.Roll = pTVar11->Roll;
          aTStack_118[0]._0_8_ = dStack_150;
          aTStack_118[0]._8_8_ = dStack_148;
          aTStack_118[0]._16_8_ = dStack_140;
          dStack_e8 = dStack_140;
          USceneComponent::SetWorldLocationAndRotation
                    (this_01.DebugPtr,(TVector<double> *)&aTStack_118[0]._s_0,&TStack_138,false,
                     (FHitResult *)0x0,None);
          AActor::AddInstanceComponent(this_00,(UActorComponent *)this_01.DebugPtr);
          UActorComponent::RegisterComponent((UActorComponent *)this_01.DebugPtr);
        }
        AActor::SetRootComponent(this_00,this_01.DebugPtr);
      }
      else {
        this_01 = (TObjectPtr<USceneComponent>_u_0)pTVar14->DebugPtr;
        AActor::SetRootComponent(this_00,this_01.DebugPtr);
      }
    }
    else {
      lVar15 = *(longlong *)&this->field_0xd0;
      if ((lVar15 != 0) ||
         (pUStack_170 = this,
         bVar8 = `USceneComponent::DestroyComponent'::__l21::<lambda_2>::operator()(&pUStack_170),
         bVar8)) {
        plVar18 = *(longlong **)(lVar15 + 0xe8);
        for (plVar16 = plVar18; plVar16 != plVar18 + *(int *)(lVar15 + 0xf0); plVar16 = plVar16 + 1)
        {
          if ((UWN_DistrictVolumeComponent *)*plVar16 == this) {
            iVar12 = (int)((longlong)plVar16 - (longlong)plVar18 >> 3);
            if (iVar12 == -1) goto LAB_14793ef59;
            goto LAB_14793ef7f;
          }
        }
        iVar12 = -1;
LAB_14793ef59:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                           ,0x575,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_14793ef7f:
        (**(code **)(*(longlong *)this + 0x518))(this);
        this_01.DebugPtr = (USceneComponent *)0x0;
        if (0 < *(int *)&this->field_0xf0) {
          plVar16 = *(longlong **)&this->field_0xe8;
          plVar18 = plVar16 + *(int *)&this->field_0xf0;
          for (; plVar16 != plVar18; plVar16 = plVar16 + 1) {
            if (((longlong *)*plVar16 != (longlong *)0x0) &&
               (cVar7 = (**(code **)(*(longlong *)*plVar16 + 0x120))(), cVar7 == '\0'))
            goto LAB_14793f073;
          }
          if ((*(int *)&this->field_0xf0 < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((**(longlong **)&this->field_0xe8 != 0) ||
             (pUStack_168 = this,
             bVar8 = `USceneComponent::DestroyComponent'::__l39::<lambda_4>::operator()
                               (&pUStack_168), bVar8)) {
            if ((*(int *)&this->field_0xf0 < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            plVar16 = *(longlong **)&this->field_0xe8;
LAB_14793f073:
            this_01.DebugPtr = (USceneComponent *)*plVar16;
            if (this_01.DebugPtr != (USceneComponent *)0x0) {
              uStack_180 = 0;
              (**(code **)((this_01.DebugPtr)->_padding_ + 0x508))
                        (this_01.DebugPtr,lVar15,&FAttachmentTransformRules::KeepWorldTransform);
              TStack_160.DebugPtr = this_01.DebugPtr;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
              }
              TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_>::Remove
                        ((TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_> *)
                         (lVar15 + 0xe8),(TObjectPtr<USceneComponent> *)&TStack_160.ObjectPtr);
              iVar13 = *(int *)(lVar15 + 0xf0);
              if (iVar12 < *(int *)(lVar15 + 0xf0)) {
                iVar13 = iVar12;
              }
              iVar12 = 0;
              if (0 < iVar13) {
                iVar12 = iVar13;
              }
              TStack_158.DebugPtr = this_01.DebugPtr;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
              }
              TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_>::Insert
                        ((TArray<TObjectPtr<USceneComponent>,TSizedDefaultAllocator<32>_> *)
                         (lVar15 + 0xe8),(TObjectPtr<USceneComponent> *)&TStack_158.ObjectPtr,iVar12
                        );
            }
          }
        }
      }
    }
    iStack_188 = *(int *)&this->field_0xf0;
    lVar15 = (longlong)iStack_188;
    _Src = *(void **)&this->field_0xe8;
    FStack_190.Data = (FScriptContainerElement *)0x0;
    if (iStack_188 == 0) {
      iStack_184 = 0;
      iVar12 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iStack_188,0,&FStack_190,iStack_188,&iStack_184);
      memcpy(FStack_190.Data,_Src,lVar15 << 3);
      iVar12 = iStack_188;
    }
    pFVar2 = FStack_190.Data + (longlong)iVar12 * 8;
    FVar17.Data = FStack_190.Data;
    iVar13 = iVar12;
    while( true ) {
      if (iVar13 != iVar12) {
        uStack_198 = 0;
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&uStack_198);
      }
      param_1 = (bool)uStack_197;
      if (FVar17.Data == pFVar2) break;
      pUVar3 = *(USceneComponent **)FVar17.Data;
      if (pUVar3 == (USceneComponent *)0x0) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8868271983431776863>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\SceneComponent.cpp"
                           ,0x5a1,"Child");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        (**(code **)(pUVar3->_padding_ + 0x518))(pUVar3);
        if (pUVar3 != this_01.DebugPtr) {
          uStack_178 = 0;
          (**(code **)(pUVar3->_padding_ + 0x508))
                    (pUVar3,this_01.DebugPtr,&FAttachmentTransformRules::KeepWorldTransform,0);
        }
      }
      FVar17.Data = FVar17.Data + 8;
      iVar13 = iStack_188;
    }
    if (FStack_190.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_190.Data);
    }
  }
  UActorComponent::DestroyComponent((UActorComponent *)this,param_1);
  return;
}

// GetPrivateStaticClass @ 14a034ab0

UClass * __cdecl UWN_DistrictVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_DistrictVolumeComponent",
               &Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_DistrictVolumeComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_DistrictVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_DistrictVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_DistrictVolumeComponent.InnerSingleton;
}

// OnRegister @ 14a037000

void __thiscall UWN_DistrictVolumeComponent::OnRegister(UWN_DistrictVolumeComponent *this)

{
  UWN_VolumeComponent::OnRegister((UWN_VolumeComponent *)this);
  return;
}

// StaticRegisterNativesUWN_DistrictVolumeComponent @ 14a03a7e0

void __cdecl UWN_DistrictVolumeComponent::StaticRegisterNativesUWN_DistrictVolumeComponent(void)

{
  return;
}

