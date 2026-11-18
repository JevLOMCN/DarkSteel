// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 14

// StaticClass @ 14a68c3e0

UClass * __cdecl USkeletalMeshComponentBudgeted::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationBudgetAllocator",L"SkeletalMeshComponentBudgeted",
               &Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshComponentBudgeted,0x1090,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshComponentBudgeted>,
               InternalVTableHelperCtorCaller<USkeletalMeshComponentBudgeted>,local_res8,
               USkeletalMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.InnerSingleton;
}

// USkeletalMeshComponentBudgeted @ 14a692500

USkeletalMeshComponentBudgeted * __thiscall
USkeletalMeshComponentBudgeted::USkeletalMeshComponentBudgeted
          (USkeletalMeshComponentBudgeted *this,FVTableHelper *param_1)

{
  USkeletalMeshComponent::USkeletalMeshComponent((USkeletalMeshComponent *)this,param_1);
  this->AnimationBudgetHandle = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  this->_padding_ = (longlong)&___7USkeletalMeshComponentBudgeted__6B_;
  *(undefined8 *)&this->OnReduceWorkDelegate = 0;
  *(undefined8 *)&(this->OnReduceWorkDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnReduceWorkDelegate).field_0x10 = 0;
  this->AnimationBudgetAllocator = (IAnimationBudgetAllocator *)0x0;
  this->AutoCalculatedSignificance = 1.0;
  return this;
}

// USkeletalMeshComponentBudgeted @ 14a6925d0

USkeletalMeshComponentBudgeted * __thiscall
USkeletalMeshComponentBudgeted::USkeletalMeshComponentBudgeted
          (USkeletalMeshComponentBudgeted *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  USkeletalMeshComponent::USkeletalMeshComponent((USkeletalMeshComponent *)this,param_1);
  this->AnimationBudgetHandle = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  this->_padding_ = (longlong)&___7USkeletalMeshComponentBudgeted__6B_;
  *(undefined8 *)&this->OnReduceWorkDelegate = 0;
  *(undefined8 *)&(this->OnReduceWorkDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnReduceWorkDelegate).field_0x10 = 0;
  this->AnimationBudgetAllocator = (IAnimationBudgetAllocator *)0x0;
  this->AutoCalculatedSignificance = 1.0;
  puVar2 = &this->field_0x1088;
  this->bAutoRegisterWithBudgetAllocator = '\x01';
  this->bShouldUseActorRenderedFlag = '\0';
  this->bAutoCalculateSignificance = '\0';
  return this;
}

// ~USkeletalMeshComponentBudgeted @ 14a692980

void __thiscall
USkeletalMeshComponentBudgeted::~USkeletalMeshComponentBudgeted
          (USkeletalMeshComponentBudgeted *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&_vftable__for__ILODSyncInterface__;
  this->_padding_ = (longlong)&_vftable__for__IClothSimulationDataProvider__;
  this->_padding_ = (longlong)&___7USkeletalMeshComponentBudgeted__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReduceWorkDelegate);
  USkeletalMeshComponent::~USkeletalMeshComponent((USkeletalMeshComponent *)this);
  return;
}

// BeginPlay @ 14a693570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USkeletalMeshComponentBudgeted::BeginPlay(USkeletalMeshComponentBudgeted *this)

{
  IAnimationBudgetAllocator *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UWorld *pUVar5;
  IAnimationBudgetAllocator *pIVar6;
  USkeletalMeshComponentBudgeted *local_18 [2];
  
  USkeletalMeshComponent::BeginPlay((USkeletalMeshComponent *)this);
  if ((this->bAutoRegisterWithBudgetAllocator != 0) &&
     (bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)this), !bVar3)) {
    pUVar5 = (UWorld *)this->_padding_;
    if ((pUVar5 == (UWorld *)0x0) &&
       (pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
       pUVar5 == (UWorld *)0x0)) {
      return;
    }
    pIVar6 = IAnimationBudgetAllocator::Get(pUVar5);
    if (pIVar6 != (IAnimationBudgetAllocator *)0x0) {
      if (pIVar6[0x2a].field_0x6 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014a6935e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*pIVar6)(pIVar6,this,*(code **)*pIVar6);
        return;
      }
      pIVar1 = pIVar6 + 0x19;
      local_18[0] = this;
      if (((*(FScriptContainerElement **)pIVar1 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           *(FScriptContainerElement **)pIVar1 + (longlong)*(int *)&pIVar6[0x1a].field_0x4 * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = *(int *)(pIVar6 + 0x1a);
      if (iVar4 == *(int *)&pIVar6[0x1a].field_0x4) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)pIVar1,(int *)&pIVar6[0x1a].field_0x4);
      }
      *(int *)(pIVar6 + 0x1a) = iVar4 + 1;
      *(USkeletalMeshComponentBudgeted **)
       (*(FScriptContainerElement **)pIVar1 + (longlong)iVar4 * 8) = local_18[0];
    }
  }
  return;
}

// CompleteParallelAnimationEvaluation @ 14a695360

void __thiscall
USkeletalMeshComponentBudgeted::CompleteParallelAnimationEvaluation
          (USkeletalMeshComponentBudgeted *this,bool param_1)

{
  IAnimationBudgetAllocator *pIVar1;
  code *pcVar2;
  uint uVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18 [2];
  
  if (!__CsvProfilerStat139) {
    FCsvProfilerTrace::OutputInlineStat("BudgetedAnimation",_GCsvCategory_AnimationBudget.Index);
    __CsvProfilerStat139 = true;
  }
  uVar3 = _GCsvCategory_AnimationBudget.Index;
  FCsvProfiler::BeginStat
            ("BudgetedAnimation",_GCsvCategory_AnimationBudget.Index,"CSV_BudgetedAnimation");
  if (this->AnimationBudgetAllocator == (IAnimationBudgetAllocator *)0x0) {
    USkeletalMeshComponent::CompleteParallelAnimationEvaluation
              ((USkeletalMeshComponent *)this,param_1);
  }
  else {
    QueryPerformanceCounter(local_res18);
    USkeletalMeshComponent::CompleteParallelAnimationEvaluation
              ((USkeletalMeshComponent *)this,param_1);
    pIVar1 = this->AnimationBudgetAllocator;
    if (pIVar1 != (IAnimationBudgetAllocator *)0x0) {
      pcVar2 = *(code **)((longlong)*pIVar1 + 0x48);
      QueryPerformanceCounter(&local_res8);
      (*pcVar2)(pIVar1,this->AnimationBudgetHandle,
                (float)((double)(ulonglong)(local_res8.QuadPart - (longlong)local_res18[0]) *
                        FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000));
    }
  }
  FCsvProfiler::EndStat("BudgetedAnimation",uVar3);
  return;
}

// EndPlay @ 14a695e00

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
USkeletalMeshComponentBudgeted::EndPlay(USkeletalMeshComponentBudgeted *this,Type param_1)

{
  FName FVar1;
  UWorld *pUVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  longlong *plVar5;
  FName local_res8;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (pUVar2 == (UWorld *)0x0) goto LAB_14a695e80;
  }
  pFVar3 = ::FName::FName(&local_res8,"AnimationBudgetAllocator");
  FVar1 = *pFVar3;
  this_00 = FModuleManager::Get();
  pIVar4 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4,pUVar2);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5,this);
  }
LAB_14a695e80:
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  return;
}

// GetDefaultSignificance @ 14a696780

float __thiscall
USkeletalMeshComponentBudgeted::GetDefaultSignificance(USkeletalMeshComponentBudgeted *this)

{
  return this->AutoCalculatedSignificance;
}

// GetPrivateStaticClass @ 14a6968d0

UClass * __cdecl USkeletalMeshComponentBudgeted::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AnimationBudgetAllocator",L"SkeletalMeshComponentBudgeted",
               &Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.InnerSingleton,
               StaticRegisterNativesUSkeletalMeshComponentBudgeted,0x1090,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshComponentBudgeted>,
               InternalVTableHelperCtorCaller<USkeletalMeshComponentBudgeted>,local_res8,
               USkeletalMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.InnerSingleton;
}

// SetComponentSignificance @ 14a698ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USkeletalMeshComponentBudgeted::SetComponentSignificance
          (USkeletalMeshComponentBudgeted *this,float param_1,bool param_2,bool param_3,bool param_4
          ,bool param_5)

{
  IAnimationBudgetAllocator *pIVar1;
  undefined7 in_register_00000081;
  FName local_res8 [4];
  FString local_18;
  
  pIVar1 = this->AnimationBudgetAllocator;
  if (pIVar1 != (IAnimationBudgetAllocator *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x20))
              (pIVar1,this,CONCAT71(in_register_00000081,param_2),param_2,param_3,param_4,param_5);
    return;
  }
  if (((this->_padding_ & 0x20000000) != 0) && (2 < (byte)LogSkeletalMesh._0_1_)) {
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetComponentTickEnabled @ 14a698e70

void __thiscall
USkeletalMeshComponentBudgeted::SetComponentTickEnabled
          (USkeletalMeshComponentBudgeted *this,bool param_1)

{
  IAnimationBudgetAllocator *pIVar1;
  
  pIVar1 = this->AnimationBudgetAllocator;
  if (pIVar1 != (IAnimationBudgetAllocator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a698e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,this,param_1);
    return;
  }
  USkeletalMeshComponent::SetComponentTickEnabled((USkeletalMeshComponent *)this,param_1);
  return;
}

// StaticRegisterNativesUSkeletalMeshComponentBudgeted @ 14a699190

void __cdecl
USkeletalMeshComponentBudgeted::StaticRegisterNativesUSkeletalMeshComponentBudgeted(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 14a6991d0

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
USkeletalMeshComponentBudgeted::TickComponent
          (USkeletalMeshComponentBudgeted *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  IAnimationBudgetAllocator *pIVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  UWorld *this_00;
  UObject *pUVar10;
  float fVar11;
  float fVar12;
  LARGE_INTEGER local_res8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_a8;
  LARGE_INTEGER local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  double local_50;
  FReadAccessScope local_48 [2];
  
  if (!__CsvProfilerStat94) {
    FCsvProfilerTrace::OutputInlineStat("BudgetedAnimation",_GCsvCategory_AnimationBudget.Index);
    __CsvProfilerStat94 = true;
  }
  uVar4 = _GCsvCategory_AnimationBudget.Index;
  FCsvProfiler::BeginStat
            ("BudgetedAnimation",_GCsvCategory_AnimationBudget.Index,"CSV_BudgetedAnimation");
  if (this->AnimationBudgetAllocator == (IAnimationBudgetAllocator *)0x0) {
    USkeletalMeshComponent::TickComponent((USkeletalMeshComponent *)this,param_1,param_2,param_3);
  }
  else {
    QueryPerformanceCounter(&local_res8);
    USkeletalMeshComponent::TickComponent((USkeletalMeshComponent *)this,param_1,param_2,param_3);
    if (this->bAutoCalculateSignificance != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &OnCalculateSignificanceDelegate,local_48);
      if (((OnCalculateSignificanceDelegate._16_4_ == 0) ||
          (OnCalculateSignificanceDelegate._8_8_ == 0)) ||
         (cVar7 = (**(code **)(*(longlong *)OnCalculateSignificanceDelegate._8_8_ + 0x38))(),
         cVar7 == '\0')) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_48);
      if (!bVar8) {
        this_00 = (UWorld *)this->_padding_;
        this->AutoCalculatedSignificance = 0.0;
        local_78 = (double)this->_padding_;
        dStack_70 = (double)this->_padding_;
        local_68 = (double)this->_padding_;
        if (this_00 == (UWorld *)0x0) {
          this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        UWorld::GetPlayerControllerIterator(this_00,&local_a8);
        fVar3 = __real_3f800000;
        for (; (iVar6 = local_a8.Index, pTVar5 = local_a8.Container, -1 < local_a8.Index &&
               (local_a8.Index < (local_a8.Container)->ArrayNum));
            local_a8.Index = local_a8.Index + 1) {
          uVar9 = 0;
          if (local_a8.Index < (local_a8.Container)->ArrayNum) {
            uVar9 = (uint)~local_a8.Index >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                        ((pTVar5->AllocatorInstance).Data + (longlong)iVar6 * 8));
          if (pUVar10 != (UObject *)0x0) {
            local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_50 = UE::Math::TRotator<double>::ZeroRotator.Roll;
            local_60 = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_;
            uStack_5c = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_;
            uStack_58 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_;
            uStack_54 = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_;
            (**(code **)(*(longlong *)pUVar10 + 0x840))(pUVar10,&local_90,&local_60);
            fVar11 = GBudgetParameters.AutoCalculatedSignificanceMaxDistanceSqr -
                     (float)((dStack_70 - dStack_88) * (dStack_70 - dStack_88) +
                             (local_78 - local_90) * (local_78 - local_90) +
                            (local_68 - local_80) * (local_68 - local_80));
            if (fVar11 <= fVar3) {
              fVar11 = fVar3;
            }
            fVar12 = fVar11 / GBudgetParameters.AutoCalculatedSignificanceMaxDistanceSqr;
            if (fVar11 / GBudgetParameters.AutoCalculatedSignificanceMaxDistanceSqr <=
                this->AutoCalculatedSignificance) {
              fVar12 = this->AutoCalculatedSignificance;
            }
            this->AutoCalculatedSignificance = fVar12;
          }
        }
      }
    }
    pIVar1 = this->AnimationBudgetAllocator;
    if (pIVar1 != (IAnimationBudgetAllocator *)0x0) {
      pcVar2 = *(code **)((longlong)*pIVar1 + 0x40);
      QueryPerformanceCounter(&local_98);
      (*pcVar2)(pIVar1,this->AnimationBudgetHandle,
                (float)((double)(ulonglong)(local_98.QuadPart - (longlong)local_res8) *
                        FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000));
    }
  }
  FCsvProfiler::EndStat("BudgetedAnimation",uVar4);
  return;
}

// execSetAutoRegisterWithBudgetAllocator @ 14a69ae10

void __cdecl
USkeletalMeshComponentBudgeted::execSetAutoRegisterWithBudgetAllocator
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x69].field_0x20 = param_1[0x69].field_0x20 & 0xfe;
  param_1[0x69].field_0x20 = param_1[0x69].field_0x20 | local_res8[0] != 0;
  return;
}

