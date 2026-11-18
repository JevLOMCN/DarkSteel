// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// StaticClass @ 14d570590

UClass * __cdecl UCameraRigTransitionCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigTransitionCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigTransitionCondition",
               &Z_Registration_Info_UClass_UCameraRigTransitionCondition.InnerSingleton,
               StaticRegisterNativesUCameraRigTransitionCondition,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraRigTransitionCondition>,
               InternalVTableHelperCtorCaller<UCameraRigTransitionCondition>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigTransitionCondition.InnerSingleton;
}

// UCameraRigTransitionCondition @ 14d58f870

UCameraRigTransitionCondition * __thiscall
UCameraRigTransitionCondition::UCameraRigTransitionCondition
          (UCameraRigTransitionCondition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// UCameraRigTransitionCondition @ 14d58f8b0

UCameraRigTransitionCondition * __thiscall
UCameraRigTransitionCondition::UCameraRigTransitionCondition
          (UCameraRigTransitionCondition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~UCameraRigTransitionCondition @ 14d591d00

void __thiscall
UCameraRigTransitionCondition::~UCameraRigTransitionCondition(UCameraRigTransitionCondition *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Build @ 14d59b100

void __thiscall
UCameraRigTransitionCondition::Build
          (UCameraRigTransitionCondition *this,FCameraObjectBuildContext *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d59b103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b8))();
  return;
}

// GetPrivateStaticClass @ 14d5a9a50

UClass * __cdecl UCameraRigTransitionCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigTransitionCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigTransitionCondition",
               &Z_Registration_Info_UClass_UCameraRigTransitionCondition.InnerSingleton,
               StaticRegisterNativesUCameraRigTransitionCondition,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraRigTransitionCondition>,
               InternalVTableHelperCtorCaller<UCameraRigTransitionCondition>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigTransitionCondition.InnerSingleton;
}

// OnBuild @ 14d5b80e0

void __thiscall
UCameraRigTransitionCondition::OnBuild
          (UCameraRigTransitionCondition *this,FCameraObjectBuildContext *param_1)

{
  return;
}

// OnTransitionMatches @ 14d5c3af0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UCameraRigTransitionCondition::OnTransitionMatches
          (UCameraRigTransitionCondition *this,FCameraRigTransitionConditionMatchParams *param_1)

{
  return false;
}

// PostLoad @ 14d5c4820

void __thiscall UCameraRigTransitionCondition::PostLoad(UCameraRigTransitionCondition *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(*(longlong *)&this->field_0x10 + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((*(uint *)&this->field_0x8 & 0x3400) == 0)) &&
          ((*(uint *)&this->field_0x8 >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UCameraRigTransitionCondition **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// StaticRegisterNativesUCameraRigTransitionCondition @ 14d5d0df0

void __cdecl UCameraRigTransitionCondition::StaticRegisterNativesUCameraRigTransitionCondition(void)

{
  return;
}

// TransitionMatches @ 14d5d13d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UCameraRigTransitionCondition::TransitionMatches
          (UCameraRigTransitionCondition *this,FCameraRigTransitionConditionMatchParams *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d5d13d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2b0))();
  return (bool)uVar1;
}

// _getUObject @ 14d5d7560

UObject * __thiscall UCameraRigTransitionCondition::_getUObject(UCameraRigTransitionCondition *this)

{
  return (UObject *)&this[-1].field_0x8;
}

