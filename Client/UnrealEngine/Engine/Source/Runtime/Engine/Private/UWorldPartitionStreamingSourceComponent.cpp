// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 14798df20

UClass * __cdecl UWorldPartitionStreamingSourceComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionStreamingSourceComponent",
               &Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.InnerSingleton,
               StaticRegisterNativesUWorldPartitionStreamingSourceComponent,0x120,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionStreamingSourceComponent>,
               InternalVTableHelperCtorCaller<UWorldPartitionStreamingSourceComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.InnerSingleton;
}

// UWorldPartitionStreamingSourceComponent @ 1479a86e0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorldPartitionStreamingSourceComponent * __thiscall
UWorldPartitionStreamingSourceComponent::UWorldPartitionStreamingSourceComponent
          (UWorldPartitionStreamingSourceComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UWorldPartitionStreamingSourceComponent__6B_;
  (this->TargetGrids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetGrids).ArrayNum = 0;
  (this->TargetGrids).ArrayMax = 0;
  (this->TargetGrid_DEPRECATED).ComparisonIndex = 0;
  (this->TargetGrid_DEPRECATED).Number = 0;
  (this->TargetHLODLayers_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetHLODLayers_DEPRECATED).ArrayNum = 0;
  (this->TargetHLODLayers_DEPRECATED).ArrayMax = 0;
  (this->TargetHLODLayer_DEPRECATED).field0_0x0.DebugPtr = (UHLODLayer *)0x0;
  (this->Shapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shapes).ArrayNum = 0;
  (this->Shapes).ArrayMax = 0;
  return this;
}

// UWorldPartitionStreamingSourceComponent @ 1479a8770

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorldPartitionStreamingSourceComponent * __thiscall
UWorldPartitionStreamingSourceComponent::UWorldPartitionStreamingSourceComponent
          (UWorldPartitionStreamingSourceComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  int iVar2;
  FString *pFVar3;
  int iVar4;
  wchar_t *pwVar5;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar6;
  FName local_res8;
  LARGE_INTEGER local_res18;
  FString local_18;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->TargetBehavior = Include;
  (this->TargetGrids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UWorldPartitionStreamingSourceComponent__6B_;
  (this->TargetGrids).ArrayNum = 0;
  (this->TargetGrids).ArrayMax = 0;
  (this->TargetGrid_DEPRECATED).ComparisonIndex = 0;
  (this->TargetGrid_DEPRECATED).Number = 0;
  local_res8 = (FName)this->_padding_;
  if (local_res8 == (FName)0x0) {
    QueryPerformanceCounter(&local_res18);
    fVar6 = extraout_XMM0_Da_01;
  }
  else {
    pFVar3 = ::FName::ToString(&local_res8,&local_18);
    iVar2 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    fVar6 = extraout_XMM0_Da;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      fVar6 = extraout_XMM0_Da_00;
    }
  }
  FColor::MakeRedToGreenColorFromScalar(fVar6);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  (this->TargetHLODLayers_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetHLODLayers_DEPRECATED).ArrayNum = 0;
  (this->TargetHLODLayers_DEPRECATED).ArrayMax = 0;
  (this->TargetHLODLayer_DEPRECATED).field0_0x0.DebugPtr = (UHLODLayer *)0x0;
  (this->Shapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shapes).ArrayNum = 0;
  (this->Shapes).ArrayMax = 0;
  this->Priority = Default;
  this->bStreamingSourceEnabled = true;
  this->TargetState = Activated;
  return this;
}

// ~UWorldPartitionStreamingSourceComponent @ 1479a9c60

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionStreamingSourceComponent::~UWorldPartitionStreamingSourceComponent
          (UWorldPartitionStreamingSourceComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UWorldPartitionStreamingSourceComponent__6B_;
  pFVar1 = (this->Shapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetHLODLayers_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TargetGrids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// DrawVisualization @ 1479bf740

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionStreamingSourceComponent::DrawVisualization
          (UWorldPartitionStreamingSourceComponent *this,FSceneView *param_1,
          FPrimitiveDrawInterface *param_2)

{
  return;
}

// GetPrivateStaticClass @ 1479ce860

UClass * __cdecl UWorldPartitionStreamingSourceComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionStreamingSourceComponent",
               &Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.InnerSingleton,
               StaticRegisterNativesUWorldPartitionStreamingSourceComponent,0x120,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionStreamingSourceComponent>,
               InternalVTableHelperCtorCaller<UWorldPartitionStreamingSourceComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionStreamingSourceComponent.InnerSingleton;
}

// GetStreamingSource @ 1479d2530

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UWorldPartitionStreamingSourceComponent::GetStreamingSource
          (UWorldPartitionStreamingSourceComponent *this,FWorldPartitionStreamingSource *param_1)

{
  TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *pTVar1;
  bool *pbVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  AActor *this_00;
  FScriptContainerElement *_Src;
  USceneComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  TRotator<double> *pTVar14;
  ForAnyElementType FVar15;
  bool *pbVar16;
  uint uVar17;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_01;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  FName local_res8 [2];
  FName local_res18;
  FName local_res20;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  TRotator<double> local_40;
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    return false;
  }
  this_00 = (AActor *)this[-1].Shapes.AllocatorInstance.Data;
  iVar4 = (this_00->ActorLabel).Data.ArrayNum;
  if (iVar4 < 2) {
    local_res18 = (FName)this_00->_padding_;
    ::FName::ToString(&local_res18,&local_68);
  }
  else {
    _Src = (this_00->ActorLabel).Data.AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = iVar4;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)&local_68,iVar4,&local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar15.Data = local_68.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar15.Data);
  param_1->Name = local_res20;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pUVar6 = (this_00->RootComponent).field0_0x0.DebugPtr;
  uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pUVar6 != (USceneComponent *)0x0) {
    local_48 = (pUVar6->ComponentToWorld).Translation.ZW.m128d_f64[0];
    local_58 = *(undefined4 *)(pUVar6->ComponentToWorld).Translation.XY.m128d_f64;
    uStack_54 = *(undefined4 *)((longlong)(pUVar6->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    uStack_50 = *(undefined4 *)((pUVar6->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    uStack_4c = *(undefined4 *)((longlong)(pUVar6->ComponentToWorld).Translation.XY.m128d_f64 + 0xc)
    ;
    uVar18 = local_58;
    uVar19 = uStack_54;
    uVar20 = uStack_50;
    uVar21 = uStack_4c;
    uVar22 = local_48;
  }
  *(undefined4 *)&(param_1->Location).field0_0x0 = uVar18;
  *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 4) = uVar19;
  *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 8) = uVar20;
  *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 0xc) = uVar21;
  (param_1->Location).field0_0x0._s_0.Z = (double)uVar22;
  pTVar14 = AActor::GetActorRotation(this_00,&local_40);
  dVar9 = pTVar14->Yaw;
  (param_1->Rotation).Pitch = pTVar14->Pitch;
  (param_1->Rotation).Yaw = dVar9;
  (param_1->Rotation).Roll = pTVar14->Roll;
  param_1->TargetState = *(EStreamingSourceTargetState *)((longlong)&this->_padding_ + 2);
  (param_1->DebugColor).field0_0x0 = *(FColor_u_0 *)&this->_padding_;
  param_1->TargetBehavior = (EStreamingSourceTargetBehavior)this->_padding_;
  param_1->Priority = (EStreamingSourcePriority)this->_padding_;
  if ((int)this->_padding_ != 0) {
    pTVar1 = &param_1->Shapes;
    if ((pTVar1 == (TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *)&this->_padding_) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    iVar4 = (int)this->_padding_;
    if (iVar4 != 0) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x48,8,iVar4,&pTVar1->AllocatorInstance,&(param_1->Shapes).ArrayNum,
                          &(param_1->Shapes).ArrayMax);
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x48,(void *)this->_padding_,
             (longlong)iVar4 * 0x48);
    }
  }
  if ((int)this->_padding_ != 0) {
    iVar4 = (int)this->_padding_;
    this_01 = &param_1->TargetGrids;
    pbVar16 = (bool *)this->_padding_;
    if ((iVar4 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    uVar13 = *(int *)&(param_1->TargetGrids).Elements.field_0x8 -
             *(int *)&(param_1->TargetGrids).Elements.field_0x34;
    uVar17 = uVar13 + iVar4;
    if (uVar13 < uVar17) {
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_01,uVar17);
      if (uVar17 < 4) {
        iVar12 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar7 & 0x1f);
      }
      iVar5 = (param_1->TargetGrids).HashSize;
      if ((iVar5 == 0) || (iVar5 < iVar12)) {
        (param_1->TargetGrids).HashSize = iVar12;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(this_01);
      }
    }
    pbVar2 = pbVar16 + (longlong)iVar4 * 8;
    for (; pbVar16 != pbVar2; pbVar16 = pbVar16 + 8) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (this_01,local_res8,pbVar16);
    }
  }
  return true;
}

// GetStreamingSourceOwner @ 1479d2840

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
UWorldPartitionStreamingSourceComponent::GetStreamingSourceOwner
          (UWorldPartitionStreamingSourceComponent *this)

{
  return (UObject *)&this[-1]._padding_;
}

// IsStreamingCompleted @ 1479da870

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UWorldPartitionStreamingSourceComponent::IsStreamingCompleted
          (UWorldPartitionStreamingSourceComponent *this)

{
  bool bVar1;
  UWorld *this_00;
  UWorldPartitionSubsystem *this_01;
  IWorldPartitionStreamingSourceProvider *pIVar2;
  
  this_00 = (UWorld *)this->_padding_;
  if ((this_00 == (UWorld *)0x0) &&
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this),
     this_00 == (UWorld *)0x0)) {
    return true;
  }
  this_01 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(this_00);
  if (this_01 == (UWorldPartitionSubsystem *)0x0) {
    return true;
  }
  pIVar2 = (IWorldPartitionStreamingSourceProvider *)&this->_padding_;
  if (this == (UWorldPartitionStreamingSourceComponent *)0x0) {
    pIVar2 = (IWorldPartitionStreamingSourceProvider *)0x0;
  }
  bVar1 = UWorldPartitionSubsystem::IsStreamingCompleted(this_01,pIVar2);
  return bVar1;
}

// OnRegister @ 1479dc790

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionStreamingSourceComponent::OnRegister(UWorldPartitionStreamingSourceComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UWorldPartitionSubsystem *this_01;
  IWorldPartitionStreamingSourceProvider *pIVar3;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  if (this->_padding_ == 0) {
    UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_01 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(this_00);
  if (this_01 == (UWorldPartitionSubsystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldPartitionSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\WorldPartitionStreamingSourceComponent.cpp"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar3 = (IWorldPartitionStreamingSourceProvider *)&this->_padding_;
  if (this == (UWorldPartitionStreamingSourceComponent *)0x0) {
    pIVar3 = (IWorldPartitionStreamingSourceProvider *)0x0;
  }
  UWorldPartitionSubsystem::RegisterStreamingSourceProvider(this_01,pIVar3);
  return;
}

// OnUnregister @ 1479dcbb0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionStreamingSourceComponent::OnUnregister(UWorldPartitionStreamingSourceComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UWorldPartitionSubsystem *this_01;
  IWorldPartitionStreamingSourceProvider *pIVar3;
  
  UActorComponent::OnUnregister((UActorComponent *)this);
  if (this->_padding_ == 0) {
    UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  this_01 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(this_00);
  if (this_01 == (UWorldPartitionSubsystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldPartitionSubsystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\WorldPartitionStreamingSourceComponent.cpp"
                       ,0x39,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar3 = (IWorldPartitionStreamingSourceProvider *)&this->_padding_;
  if (this == (UWorldPartitionStreamingSourceComponent *)0x0) {
    pIVar3 = (IWorldPartitionStreamingSourceProvider *)0x0;
  }
  bVar2 = UWorldPartitionSubsystem::UnregisterStreamingSourceProvider(this_01,pIVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldPartitionSubsystem->UnregisterStreamingSourceProvider(this)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\WorldPartitionStreamingSourceComponent.cpp"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// PostLoad @ 1479de660

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionStreamingSourceComponent::PostLoad(UWorldPartitionStreamingSourceComponent *this)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  FGuid local_18;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  local_18 = FFortniteMainBranchObjectVersion::GUID;
  iVar6 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if ((iVar6 < 0x51) && (pFVar2 = &this->TargetGrid_DEPRECATED, *pFVar2 != (FName)0x0)) {
    pTVar7 = &this->TargetGrids;
    pFVar3 = (pTVar7->AllocatorInstance).Data;
    if ((pFVar3 <= pFVar2) &&
       ((pFVar2 < pFVar3 + (longlong)(this->TargetGrids).ArrayMax * 8 &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->TargetGrids).ArrayNum;
    piVar1 = &(this->TargetGrids).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar7->AllocatorInstance,piVar1);
    }
    (this->TargetGrids).ArrayNum = iVar6 + 1;
    *(FName *)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 8) = *pFVar2;
  }
  return;
}

// Serialize @ 1479e6a10

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionStreamingSourceComponent::Serialize
          (UWorldPartitionStreamingSourceComponent *this,FArchive *param_1)

{
  UActorComponent::Serialize((UActorComponent *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001479e6a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// Serialize @ 1479e6a40

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionStreamingSourceComponent::Serialize
          (UWorldPartitionStreamingSourceComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UActorComponent::Serialize((UActorComponent *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// StaticRegisterNativesUWorldPartitionStreamingSourceComponent @ 1479ee1a0

void __cdecl
UWorldPartitionStreamingSourceComponent::
StaticRegisterNativesUWorldPartitionStreamingSourceComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDisableStreamingSource @ 1479f80d0

void __cdecl
UWorldPartitionStreamingSourceComponent::execDisableStreamingSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[7].field_0x1 = 0;
  return;
}

// execEnableStreamingSource @ 1479f8530

void __cdecl
UWorldPartitionStreamingSourceComponent::execEnableStreamingSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[7].field_0x1 = 1;
  return;
}

// execIsStreamingCompleted @ 147a02ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UWorldPartitionStreamingSourceComponent::execIsStreamingCompleted
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UWorld *this;
  UWorldPartitionSubsystem *this_00;
  IWorldPartitionStreamingSourceProvider *pIVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UWorld **)&param_1[4].field_0x10;
  if (this == (UWorld *)0x0) {
    this = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    if (this == (UWorld *)0x0) goto LAB_147a03065;
  }
  this_00 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(this);
  if (this_00 != (UWorldPartitionSubsystem *)0x0) {
    pIVar2 = (IWorldPartitionStreamingSourceProvider *)&param_1[4].field_0x20;
    if (param_1 == (UObject *)0x0) {
      pIVar2 = (IWorldPartitionStreamingSourceProvider *)0x0;
    }
    bVar1 = UWorldPartitionSubsystem::IsStreamingCompleted(this_00,pIVar2);
    *(bool *)param_3 = bVar1;
    return;
  }
LAB_147a03065:
  *(undefined1 *)param_3 = 1;
  return;
}

// execIsStreamingSourceEnabled @ 147a03080

void __cdecl
UWorldPartitionStreamingSourceComponent::execIsStreamingSourceEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[7].field_0x1;
  return;
}

