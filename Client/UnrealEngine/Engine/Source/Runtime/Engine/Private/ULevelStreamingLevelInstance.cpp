// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147e42140

UClass * __cdecl ULevelStreamingLevelInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingLevelInstance",
               &Z_Registration_Info_UClass_ULevelStreamingLevelInstance.InnerSingleton,
               StaticRegisterNativesULevelStreamingLevelInstance,0x230,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreamingLevelInstance>,
               InternalVTableHelperCtorCaller<ULevelStreamingLevelInstance>,local_res8,
               ULevelStreamingDynamic::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstance.InnerSingleton;
}

// ULevelStreamingLevelInstance @ 147e56490

ULevelStreamingLevelInstance * __thiscall
ULevelStreamingLevelInstance::ULevelStreamingLevelInstance
          (ULevelStreamingLevelInstance *this,FVTableHelper *param_1)

{
  ULevelStreamingDynamic::ULevelStreamingDynamic((ULevelStreamingDynamic *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingLevelInstance__6B_;
  (this->LevelInstanceID).Hash = 0;
  (this->LevelInstanceID).ContainerID.Guid.A = 0;
  (this->LevelInstanceID).ContainerID.Guid.B = 0;
  (this->LevelInstanceID).ContainerID.Guid.C = 0;
  (this->LevelInstanceID).ContainerID.Guid.D = 0;
  (this->LevelInstanceID).ActorName.ComparisonIndex = 0;
  (this->LevelInstanceID).ActorName.Number = 0;
  (this->LevelInstanceID).PackageShortName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LevelInstanceID).PackageShortName.Data.ArrayNum = 0;
  (this->LevelInstanceID).PackageShortName.Data.ArrayMax = 0;
  return this;
}

// ULevelStreamingLevelInstance @ 147e564f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelStreamingLevelInstance * __thiscall
ULevelStreamingLevelInstance::ULevelStreamingLevelInstance
          (ULevelStreamingLevelInstance *this,FObjectInitializer *param_1)

{
  ULevelStreaming::ULevelStreaming((ULevelStreaming *)this,param_1);
  *(undefined ***)this = &___7ULevelStreamingLevelInstance__6B_;
  (this->LevelInstanceID).Hash = 0;
  (this->LevelInstanceID).ContainerID.Guid.A = 0;
  (this->LevelInstanceID).ContainerID.Guid.B = 0;
  (this->LevelInstanceID).ContainerID.Guid.C = 0;
  (this->LevelInstanceID).ContainerID.Guid.D = 0;
  (this->LevelInstanceID).ActorName.ComparisonIndex = 0;
  (this->LevelInstanceID).ActorName.Number = 0;
  (this->LevelInstanceID).PackageShortName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LevelInstanceID).PackageShortName.Data.ArrayNum = 0;
  (this->LevelInstanceID).PackageShortName.Data.ArrayMax = 0;
  return this;
}

// ~ULevelStreamingLevelInstance @ 147e57de0

void __thiscall
ULevelStreamingLevelInstance::~ULevelStreamingLevelInstance(ULevelStreamingLevelInstance *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7ULevelStreamingLevelInstance__6B_;
  pFVar1 = (this->LevelInstanceID).PackageShortName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ULevelStreamingDynamic::~ULevelStreamingDynamic((ULevelStreamingDynamic *)this);
  return;
}

// GetLevelInstance @ 147e67f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ILevelInstanceInterface * __thiscall
ULevelStreamingLevelInstance::GetLevelInstance(ULevelStreamingLevelInstance *this)

{
  ulong64 uVar1;
  bool bVar2;
  int iVar3;
  UWorld *pUVar4;
  ULevelInstanceSubsystem *pUVar5;
  longlong lVar6;
  UWorld *pUVar7;
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  pUVar7 = (UWorld *)0x0;
  pUVar4 = pUVar7;
  if (!bVar2) {
    pUVar4 = CastChecked<UWorld,UObject>(*(UObject **)&this->field_0x20);
  }
  pUVar5 = UWorld::GetSubsystem<ULevelInstanceSubsystem>(pUVar4);
  if (pUVar5 == (ULevelInstanceSubsystem *)0x0) {
    return (ILevelInstanceInterface *)0x0;
  }
  uVar1 = (this->LevelInstanceID).Hash;
  iVar3 = TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FLevelInstanceID>
                    ((TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
                      *)&pUVar5->RegisteredLevelInstances,(int)(uVar1 >> 0x20) * 0x17 + (int)uVar1,
                     &this->LevelInstanceID);
  if (iVar3 != -1) {
    lVar6 = (longlong)iVar3 * 0x40 + *(longlong *)&(pUVar5->RegisteredLevelInstances).field_0x0;
    pUVar4 = (UWorld *)(lVar6 + 0x30);
    if (lVar6 == 0) {
      pUVar4 = pUVar7;
    }
    if (pUVar4 != (UWorld *)0x0) {
      pUVar7 = (UWorld *)pUVar4->_padding_;
    }
  }
  return (ILevelInstanceInterface *)pUVar7;
}

// GetPrivateStaticClass @ 147e6a330

UClass * __cdecl ULevelStreamingLevelInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelStreamingLevelInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelStreamingLevelInstance",
               &Z_Registration_Info_UClass_ULevelStreamingLevelInstance.InnerSingleton,
               StaticRegisterNativesULevelStreamingLevelInstance,0x230,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelStreamingLevelInstance>,
               InternalVTableHelperCtorCaller<ULevelStreamingLevelInstance>,local_res8,
               ULevelStreamingDynamic::StaticClass,UWorld::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelStreamingLevelInstance.InnerSingleton;
}

// LoadInstance @ 147e6e6c0

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

ULevelStreamingLevelInstance * __cdecl
ULevelStreamingLevelInstance::LoadInstance(ILevelInstanceInterface *param_1)

{
  int iVar1;
  USceneComponent *pUVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  undefined8 uVar17;
  bool bVar18;
  AActor *this;
  longlong lVar19;
  UWorld *pUVar20;
  undefined8 *puVar21;
  ULevelStreamingLevelInstance *pUVar22;
  UClass *pUVar23;
  ulong64 *puVar24;
  FLinearColor *pFVar25;
  TTransform<double> *pTVar26;
  longlong *plVar27;
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  bool local_1b8 [16];
  FLinearColor_u_0 local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  undefined1 local_158 [200];
  longlong *local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  this = CastChecked<AActor,ILevelInstanceInterface>(param_1);
  lVar19 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
  FSoftObjectPath::GetLongPackageName((FSoftObjectPath *)(lVar19 + 8),&local_198);
  if (local_198.Data.ArrayNum == 0) {
    local_1a8._s_0.B = (float)0;
  }
  else {
    local_1a8._s_0.B = (float)(local_198.Data.ArrayNum + -1);
  }
  local_1a8._0_8_ = local_198.Data.AllocatorInstance.Data;
  FPackageName::GetShortName(&local_188,(TStringView<wchar_t> *)&local_1a8._s_0);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  pUVar20 = AActor::GetWorld(this);
  bVar18 = UWorld::IsGameWorld(pUVar20);
  (**(code **)((longlong)*param_1 + 0x10))(param_1);
  local_1c8 = (uint)bVar18;
  ::FString::PrintfImpl(&local_178,L"%s_LevelInstance_%016llx_%d");
  pUVar20 = AActor::GetWorld(this);
  pUVar2 = (this->RootComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (USceneComponent *)0x0) {
    pTVar26 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar26 = &pUVar2->ComponentToWorld;
  }
  dVar3 = (pTVar26->Rotation).XY.m128d_f64[0];
  dVar4 = (pTVar26->Rotation).XY.m128d_f64[1];
  dVar5 = (pTVar26->Rotation).ZW.m128d_f64[0];
  dVar6 = (pTVar26->Rotation).ZW.m128d_f64[1];
  dVar7 = (pTVar26->Translation).XY.m128d_f64[0];
  dVar8 = (pTVar26->Translation).XY.m128d_f64[1];
  dVar9 = (pTVar26->Translation).ZW.m128d_f64[0];
  dVar10 = (pTVar26->Translation).ZW.m128d_f64[1];
  dVar11 = (pTVar26->Scale3D).XY.m128d_f64[0];
  dVar12 = (pTVar26->Scale3D).XY.m128d_f64[1];
  dVar13 = (pTVar26->Scale3D).ZW.m128d_f64[0];
  dVar14 = (pTVar26->Scale3D).ZW.m128d_f64[1];
  lVar19 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
  FSoftObjectPath::GetLongPackageName((FSoftObjectPath *)(lVar19 + 8),(FString *)&local_1a8._s_0);
  local_158._0_8_ = pUVar20;
  FPackageName::ObjectPathToPackageName((FString *)(local_158 + 8),(FString *)&local_1a8._s_0);
  local_158._128_8_ = (FString *)0x0;
  local_158._136_8_ = (UClass *)0x0;
  local_158[0x90] = false;
  local_158[0x91] = true;
  local_158[0x92] = false;
  local_158._152_8_ = (UObject *)0x0;
  local_158._160_8_ = 0;
  local_90 = (longlong *)0x0;
  local_158._32_8_ = dVar3;
  local_158._40_8_ = dVar4;
  local_158._48_8_ = dVar5;
  local_158._56_8_ = dVar6;
  local_158._64_8_ = dVar7;
  local_158._72_8_ = dVar8;
  local_158._80_8_ = dVar9;
  local_158._88_8_ = dVar10;
  local_158._96_8_ = dVar11;
  local_158._104_8_ = dVar12;
  local_158._112_8_ = dVar13;
  local_158._120_8_ = dVar14;
  if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._0_8_);
  }
  local_158._128_8_ = &local_178;
  puVar21 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x70))(param_1,&local_198);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)*puVar21 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*puVar21);
  }
  local_158._136_8_ = *puVar21;
  local_158[0x90] = true;
  bVar18 = UWorld::IsGameWorld(pUVar20);
  if (bVar18) {
    bVar18 = (bool)(**(code **)((longlong)*param_1 + 0x60))(param_1);
    local_158[0x91] = bVar18;
    local_158[0x92] = true;
  }
  ULevelStreamingDynamic::GetLevelInstancePackageName
            (&local_168,(FLoadLevelInstanceParams *)local_158);
  local_1b8[0] = false;
  if ((((UWorld *)local_158._0_8_ != (UWorld *)0x0) && (1 < (int)local_158._16_4_)) &&
     (pUVar22 = (ULevelStreamingLevelInstance *)
                ULevelStreamingDynamic::LoadLevelInstance_Internal
                          ((FLoadLevelInstanceParams *)local_158,local_1b8),
     pUVar22 != (ULevelStreamingLevelInstance *)0x0)) {
    pUVar23 = StaticClass();
    iVar1 = (int)pUVar23->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar22->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar22->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar23->_padding_)) goto LAB_147e6e926;
  }
  pUVar22 = (ULevelStreamingLevelInstance *)0x0;
LAB_147e6e926:
  if (local_1b8[0] == false) {
    pUVar22 = (ULevelStreamingLevelInstance *)0x0;
  }
  else {
    puVar24 = (ulong64 *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    (pUVar22->LevelInstanceID).Hash = *puVar24;
    uVar15 = puVar24[1];
    uVar16 = puVar24[2];
    (pUVar22->LevelInstanceID).ContainerID.Guid.A = (int)uVar15;
    (pUVar22->LevelInstanceID).ContainerID.Guid.B = (int)(uVar15 >> 0x20);
    (pUVar22->LevelInstanceID).ContainerID.Guid.C = (int)uVar16;
    (pUVar22->LevelInstanceID).ContainerID.Guid.D = (int)(uVar16 >> 0x20);
    (pUVar22->LevelInstanceID).ActorName = *(FName *)(puVar24 + 3);
    ::FString::operator=(&(pUVar22->LevelInstanceID).PackageShortName,(FString *)(puVar24 + 4));
    puVar21 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    pFVar25 = FLinearColor::MakeRandomSeededColor
                        ((FLinearColor *)&local_1a8._s_0,
                         (int)((ulonglong)*puVar21 >> 0x20) * 0x17 + (int)*puVar21);
    uVar17 = *(undefined8 *)((longlong)&pFVar25->field0_0x0 + 8);
    *(undefined8 *)&pUVar22->field_0x124 = *(undefined8 *)&pFVar25->field0_0x0;
    *(undefined8 *)&pUVar22->field_0x12c = uVar17;
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_158._160_8_ != 0) {
    plVar27 = (longlong *)(local_158 + 0xb0);
    if (local_90 != (longlong *)0x0) {
      plVar27 = local_90;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  if ((FScriptContainerElement *)local_158._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_158._8_8_);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  return pUVar22;
}

// OnLevelLoadedChanged @ 147e717c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelStreamingLevelInstance::OnLevelLoadedChanged
          (ULevelStreamingLevelInstance *this,ULevel *param_1)

{
  ULevel *this_00;
  code *pcVar1;
  bool bVar2;
  AWorldSettings *pAVar3;
  UWorld *this_01;
  ULevelInstanceSubsystem *this_02;
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = *(ULevel **)&this->field_0x1b0;
  if (this_00 != (ULevel *)0x0) {
    if (param_1 != this_00) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLevel == NewLoadedLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceLevelStreaming.cpp"
                         ,0x21f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (!(bool)this_00->bAlreadyMovedActors) {
      pAVar3 = ULevel::GetWorldSettings(this_00,true);
      if (pAVar3 == (AWorldSettings *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorldSettings",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceLevelStreaming.cpp"
                           ,0x223,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_78.Translation.XY.m128d_f64[0] = (pAVar3->LevelInstancePivotOffset).field0_0x0._s_0.X;
      local_78.Translation.XY.m128d_f64[1] = (pAVar3->LevelInstancePivotOffset).field0_0x0._s_0.Y;
      local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_78.Translation.ZW.m128d_f64[0] = (pAVar3->LevelInstancePivotOffset).field0_0x0._s_0.Z;
      local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_78.Translation.ZW.m128d_f64[1] = 0.0;
      local_d8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_d8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_78.Rotation.XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
      local_78.Rotation.XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
      local_78.Rotation.ZW.m128d_f64[0] = local_d8.Rotation.ZW.m128d_f64[0];
      local_78.Rotation.ZW.m128d_f64[1] = local_d8.Rotation.ZW.m128d_f64[1];
      local_78.Scale3D.XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
      local_78.Scale3D.XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
      local_78.Scale3D.ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
      local_78.Scale3D.ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
      UE::Math::TTransform<double>::Multiply
                (&local_d8,&local_78,(TTransform<double> *)&this->field_0x90);
      *(double *)&this->field_0x90 = local_d8.Rotation.XY.m128d_f64[0];
      *(double *)&this->field_0x98 = local_d8.Rotation.XY.m128d_f64[1];
      *(double *)&this->field_0xa0 = local_d8.Rotation.ZW.m128d_f64[0];
      *(double *)&this->field_0xa8 = local_d8.Rotation.ZW.m128d_f64[1];
      *(double *)&this->field_0xb0 = local_d8.Translation.XY.m128d_f64[0];
      *(double *)&this->field_0xb8 = local_d8.Translation.XY.m128d_f64[1];
      *(double *)&this->field_0xc0 = local_d8.Translation.ZW.m128d_f64[0];
      *(double *)&this->field_0xc8 = local_d8.Translation.ZW.m128d_f64[1];
      *(double *)&this->field_0xd0 = local_d8.Scale3D.XY.m128d_f64[0];
      *(double *)&this->field_0xd8 = local_d8.Scale3D.XY.m128d_f64[1];
      *(double *)&this->field_0xe0 = local_d8.Scale3D.ZW.m128d_f64[0];
      *(double *)&this->field_0xe8 = local_d8.Scale3D.ZW.m128d_f64[1];
    }
    bVar2 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar2) {
      this_01 = (UWorld *)0x0;
    }
    else {
      this_01 = CastChecked<UWorld,UObject>(*(UObject **)&this->field_0x20);
    }
    this_02 = UWorld::GetSubsystem<ULevelInstanceSubsystem>(this_01);
    if (this_02 != (ULevelInstanceSubsystem *)0x0) {
      ULevelInstanceSubsystem::RegisterLoadedLevelStreamingLevelInstance(this_02,this);
    }
  }
  return;
}

// StaticRegisterNativesULevelStreamingLevelInstance @ 147e823b0

void __cdecl ULevelStreamingLevelInstance::StaticRegisterNativesULevelStreamingLevelInstance(void)

{
  return;
}

// UnloadInstance @ 147e83570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl ULevelStreamingLevelInstance::UnloadInstance(ULevelStreamingLevelInstance *param_1)

{
  bool bVar1;
  UWorld *pUVar2;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar1) {
    pUVar2 = (UWorld *)0x0;
  }
  else {
    pUVar2 = CastChecked<UWorld,UObject>(*(UObject **)&param_1->field_0x20);
  }
  bVar1 = UWorld::IsGameWorld(pUVar2);
  if (bVar1) {
    (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,0);
    if ((param_1->field_0xf8 & 8) != 0) {
      param_1->field_0xf8 = param_1->field_0xf8 & 0xf7;
      bVar1 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar1) {
        pUVar2 = CastChecked<UWorld,UObject>(*(UObject **)&param_1->field_0x20);
        if (pUVar2 != (UWorld *)0x0) {
          UWorld::UpdateStreamingLevelShouldBeConsidered(pUVar2,(ULevelStreaming *)param_1);
        }
      }
    }
    if ((param_1->field_0xf8 & 1) == 0) {
      param_1->field_0xf8 = param_1->field_0xf8 | 1;
      bVar1 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar1) {
        pUVar2 = CastChecked<UWorld,UObject>(*(UObject **)&param_1->field_0x20);
        if (pUVar2 != (UWorld *)0x0) {
          UWorld::UpdateStreamingLevelShouldBeConsidered(pUVar2,(ULevelStreaming *)param_1);
          return;
        }
      }
    }
  }
  return;
}

