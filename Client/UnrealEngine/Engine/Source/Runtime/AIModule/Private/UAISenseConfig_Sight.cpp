// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146e7a460

UClass * __cdecl UAISenseConfig_Sight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Sight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Sight",
               &Z_Registration_Info_UClass_UAISenseConfig_Sight.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Sight,0x70,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig_Sight>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Sight>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Sight.InnerSingleton;
}

// UAISenseConfig_Sight @ 146e80a80

UAISenseConfig_Sight * __thiscall
UAISenseConfig_Sight::UAISenseConfig_Sight(UAISenseConfig_Sight *this,FVTableHelper *param_1)

{
  FAISenseAffiliationFilter *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pFVar1->bDetectEnemies = 0;
  pFVar1->bDetectFriendlies = 0;
  pFVar1->bDetectNeutrals = 0;
  this->_padding_ = (longlong)&___7UAISenseConfig_Sight__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Implementation).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UAISenseConfig_Sight @ 146e81c90

void __thiscall UAISenseConfig_Sight::~UAISenseConfig_Sight(UAISenseConfig_Sight *this)

{
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146e8eea0

UClass * __cdecl UAISenseConfig_Sight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Sight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Sight",
               &Z_Registration_Info_UClass_UAISenseConfig_Sight.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Sight,0x70,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig_Sight>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Sight>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Sight.InnerSingleton;
}

// StaticRegisterNativesUAISenseConfig_Sight @ 146ea0140

void __cdecl UAISenseConfig_Sight::StaticRegisterNativesUAISenseConfig_Sight(void)

{
  return;
}

// UAISenseConfig_Sight @ 146f94190

UAISenseConfig_Sight * __thiscall
UAISenseConfig_Sight::UAISenseConfig_Sight(UAISenseConfig_Sight *this,FObjectInitializer *param_1)

{
  FAISenseAffiliationFilter *pFVar1;
  FColor FVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  FVar2 = FColor::White;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)FVar2.field0_0x0;
  pFVar1->bDetectEnemies = 0;
  pFVar1->bDetectFriendlies = 0;
  pFVar1->bDetectNeutrals = 0;
  this->_padding_ = (longlong)&___7UAISenseConfig_Sight__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Implementation).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  return this;
}

// DescribeSelfToGameplayDebugger @ 146fa3030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UAISenseConfig_Sight::DescribeSelfToGameplayDebugger
          (UAISenseConfig_Sight *this,UAIPerceptionComponent *param_1,
          FGameplayDebuggerCategory *param_2)

{
  float fVar1;
  FColor_u_0 FVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FColor_u_0 *pFVar9;
  FString *pFVar10;
  AActor *pAVar11;
  UClass *pUVar12;
  TVector<double> *pTVar13;
  FGameplayDebuggerShape *pFVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  FColor_u_0 local_res20 [2];
  FString local_1e8;
  FColor_u_0 local_1d8 [2];
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  FString local_190;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  FColor_u_0 local_150 [2];
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FGameplayDebuggerShape local_138;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  FScriptContainerElement *local_e0;
  
  if (param_1 == (UAIPerceptionComponent *)0x0) {
    return;
  }
  if (param_2 == (FGameplayDebuggerCategory *)0x0) {
    return;
  }
  iVar19 = GColorList.ColorsMap._8_4_ - GColorList.ColorsMap._52_4_;
  iVar16 = 0;
  local_res20[0] = FColor::Green.field0_0x0;
  local_1d8[0] = FColorList::NeonPink.field0_0x0;
  iVar15 = iVar16;
  if (0 < iVar19) {
    do {
      pFVar9 = &FColorList::GetFColorByIndex(&GColorList,iVar15)->field0_0x0;
      if (local_1d8[0].Bits == pFVar9->Bits) {
        pFVar10 = FColorList::GetColorNameByIndex(&GColorList,iVar15);
        local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar15 = (pFVar10->Data).ArrayNum;
        pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
        local_1e8.Data.ArrayNum = iVar15;
        if (iVar15 == 0) {
          local_1e8.Data.ArrayNum = 0;
          local_1e8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar15,0,(ForAnyElementType *)&local_1e8,iVar15,&local_1e8.Data.ArrayMax);
          memcpy(local_1e8.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar15 * 2);
        }
        goto LAB_146fa30dd;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar19);
  }
  ::FString::FString(&local_1e8,L"color");
LAB_146fa30dd:
  local_e0 = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    local_e0 = local_1e8.Data.AllocatorInstance.Data;
  }
  pFVar10 = FColor::ToString((FColor *)&local_1d8[0]._s_0,(FString *)&local_168._s_0);
  if ((pFVar10->Data).ArrayNum == 0) {
    local_148 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_148 = (pFVar10->Data).AllocatorInstance.Data;
  }
  iVar15 = GColorList.ColorsMap._8_4_ - GColorList.ColorsMap._52_4_;
  if (0 < iVar15) {
    do {
      pFVar9 = &FColorList::GetFColorByIndex(&GColorList,iVar16)->field0_0x0;
      if (local_res20[0].Bits == pFVar9->Bits) {
        pFVar10 = FColorList::GetColorNameByIndex(&GColorList,iVar16);
        local_180._s_0.X = 0.0;
        local_180._8_4_ = (pFVar10->Data).ArrayNum;
        lVar17 = (longlong)(int)local_180._8_4_;
        pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
        if (local_180._8_4_ == 0) {
          local_180._12_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_180._8_4_,0,(ForAnyElementType *)&local_180._s_0,local_180._8_4_,
                     (int *)((longlong)&local_180._s_0.Y + 4));
          memcpy((void *)local_180._s_0.X,pFVar3,lVar17 * 2);
        }
        goto LAB_146fa31ce;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar15);
  }
  ::FString::FString((FString *)&local_180._s_0,L"color");
LAB_146fa31ce:
  pFVar10 = FColor::ToString((FColor *)&local_res20[0]._s_0,(FString *)&local_110._s_0);
  if ((pFVar10->Data).ArrayNum == 0) {
    local_140 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_140 = (pFVar10->Data).AllocatorInstance.Data;
  }
  iVar15 = 0;
  iVar16 = GColorList.ColorsMap._8_4_ - GColorList.ColorsMap._52_4_;
  FVar2 = (FColor_u_0)*(FColor_u_0 *)&this->_padding_;
  if (0 < iVar16) {
    do {
      pFVar9 = &FColorList::GetFColorByIndex(&GColorList,iVar15)->field0_0x0;
      if (FVar2.Bits == pFVar9->Bits) {
        pFVar10 = FColorList::GetColorNameByIndex(&GColorList,iVar15);
        local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_190.Data.ArrayNum = (pFVar10->Data).ArrayNum;
        lVar17 = (longlong)local_190.Data.ArrayNum;
        pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
        if (local_190.Data.ArrayNum == 0) {
          local_190.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_190.Data.ArrayNum,0,(ForAnyElementType *)&local_190,
                     local_190.Data.ArrayNum,&local_190.Data.ArrayMax);
          memcpy(local_190.Data.AllocatorInstance.Data,pFVar3,lVar17 * 2);
        }
        goto LAB_146fa32ac;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar16);
  }
  ::FString::FString(&local_190,L"color");
LAB_146fa32ac:
  local_150[0] = *(FColor_u_0 *)&this->_padding_;
  FColor::ToString((FColor *)&local_150[0]._s_0,(FString *)&local_1b8._s_0);
  UAISenseConfig::GetSenseName((UAISenseConfig *)this,(FString *)&local_1d0._s_0);
  ::FString::PrintfImpl
            ((FString *)&local_f8._s_0,
             L"%s: {%s}%s {white}rangeIN:{%s} %.2f (%s) {white} rangeOUT:{%s} %.2f (%s)");
  FGameplayDebuggerCategory::AddTextLine(param_2,(FString *)&local_f8._s_0);
  if ((void *)local_f8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_f8._s_0.X);
  }
  if ((void *)local_1d0._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_1d0._s_0.X);
  }
  if ((void *)local_1b8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_1b8._s_0.X);
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if ((void *)local_110._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_110._s_0.X);
  }
  if ((void *)local_180._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_180._s_0.X);
  }
  if ((void *)local_168._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_168._s_0.X);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  pAVar11 = UAIPerceptionComponent::GetBodyActor(param_1);
  if (pAVar11 == (AActor *)0x0) {
    return;
  }
  plVar18 = (longlong *)param_1->_padding_;
  if (plVar18 != (longlong *)0x0) {
    pUVar12 = Z_Construct_UClass_AActor_NoRegister();
    iVar15 = (int)pUVar12->_padding_;
    if ((iVar15 <= *(int *)(plVar18[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar18[2] + 0x30) + (longlong)iVar15 * 8) ==
        &pUVar12->_padding_)) goto LAB_146fa34d1;
  }
  plVar18 = (longlong *)0x0;
LAB_146fa34d1:
  if (plVar18 != (longlong *)0x0) {
    local_1b8._s_0.Z = 0.0;
    local_1b8._s_0.X = 0.0;
    local_1b8._s_0.Y = 0.0;
    (**(code **)(*plVar18 + 0x720))(plVar18,&local_110,&local_1b8);
    pTVar13 = UE::Math::TRotator<double>::Vector
                        ((TRotator<double> *)&local_1b8._s_0,(TVector<double> *)&local_1d0._s_0);
    local_168._s_0.X = (pTVar13->field0_0x0)._s_0.X;
    local_168._s_0.Y = (pTVar13->field0_0x0)._s_0.Y;
    local_168._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
  }
  fVar1 = __real_41c80000;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  pFVar14 = FGameplayDebuggerShape::MakeCylinder
                      ((FGameplayDebuggerShape *)&local_1b8._s_0,(TVector<double> *)&local_110._s_0,
                       this->LoseSightRadius,__real_41c80000,(FColor *)&local_1d8[0]._s_0,&local_1e8
                      );
  FGameplayDebuggerCategory::AddShape(param_2,pFVar14);
  if ((void *)local_1b8._s_0.Z != (void *)0x0) {
    FMemory::Free((void *)local_1b8._s_0.Z);
  }
  if ((void *)local_1b8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_1b8._s_0.X);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  pFVar14 = FGameplayDebuggerShape::MakeCylinder
                      ((FGameplayDebuggerShape *)&local_1b8._s_0,(TVector<double> *)&local_110._s_0,
                       this->SightRadius,fVar1,(FColor *)&local_res20[0]._s_0,&local_1e8);
  FGameplayDebuggerCategory::AddShape(param_2,pFVar14);
  if ((void *)local_1b8._s_0.Z != (void *)0x0) {
    FMemory::Free((void *)local_1b8._s_0.Z);
  }
  if ((void *)local_1b8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_1b8._s_0.X);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  uVar8 = local_168._s_0.Z;
  uVar7 = local_168._s_0.Y;
  uVar6 = local_168._s_0.X;
  fVar1 = this->PointOfViewBackwardOffset;
  fVar20 = this->PeripheralVisionAngleDegrees;
  dVar21 = (double)fVar1;
  dVar4 = local_110._s_0.X - local_168._s_0.X * dVar21;
  dVar5 = local_110._s_0.Y - local_168._s_0.Y * dVar21;
  dVar21 = local_110._s_0.Z - local_168._s_0.Z * dVar21;
  UE::Math::TVector<double>::RotateAngleAxis
            ((TVector<double> *)&local_168._s_0,(TVector<double> *)&local_f8._s_0,(double)fVar20,
             &UE::Math::TVector<double>::UpVector);
  UE::Math::TVector<double>::RotateAngleAxis
            ((TVector<double> *)&local_168._s_0,(TVector<double> *)&local_180._s_0,
             (double)(float)((uint)fVar20 ^ __xmm_80000000800000008000000080000000),
             &UE::Math::TVector<double>::UpVector);
  fVar20 = this->LoseSightRadius;
  if (this->LoseSightRadius <= this->SightRadius) {
    fVar20 = this->SightRadius;
  }
  dVar22 = (double)this->NearClippingRadius;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  dVar24 = (double)(fVar20 + fVar1);
  local_1b8._s_0.X = (double)uVar6 * dVar24 + dVar4;
  local_1b8._s_0.Y = (double)uVar7 * dVar24 + dVar5;
  local_1b8._s_0.Z = (double)uVar8 * dVar24 + dVar21;
  local_1d0._s_0.X = (double)uVar6 * dVar22 + dVar4;
  local_1d0._s_0.Y = (double)uVar7 * dVar22 + dVar5;
  local_1d0._s_0.Z = (double)uVar8 * dVar22 + dVar21;
  pFVar14 = FGameplayDebuggerShape::MakeSegment
                      (&local_138,(TVector<double> *)&local_1d0._s_0,
                       (TVector<double> *)&local_1b8._s_0,(FColor *)&local_res20[0]._s_0,&local_1e8)
  ;
  FGameplayDebuggerCategory::AddShape(param_2,pFVar14);
  if (local_138.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Description.Data.AllocatorInstance.Data);
  }
  if (local_138.ShapeData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ShapeData.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  dVar22 = (double)this->NearClippingRadius;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  local_1b8._s_0.X = local_f8._s_0.X * dVar24 + dVar4;
  local_1b8._s_0.Y = local_f8._s_0.Y * dVar24 + dVar5;
  local_1b8._s_0.Z = local_f8._s_0.Z * dVar24 + dVar21;
  local_1d0._s_0.X = local_f8._s_0.X * dVar22 + dVar4;
  local_1d0._s_0.Y = local_f8._s_0.Y * dVar22 + dVar5;
  local_1d0._s_0.Z = local_f8._s_0.Z * dVar22 + dVar21;
  pFVar14 = FGameplayDebuggerShape::MakeSegment
                      (&local_138,(TVector<double> *)&local_1d0._s_0,
                       (TVector<double> *)&local_1b8._s_0,(FColor *)&local_res20[0]._s_0,&local_1e8)
  ;
  FGameplayDebuggerCategory::AddShape(param_2,pFVar14);
  if (local_138.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Description.Data.AllocatorInstance.Data);
  }
  if (local_138.ShapeData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ShapeData.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  uVar6 = local_180._s_0.X;
  dVar22 = (double)CONCAT44(local_180._12_4_,local_180._8_4_);
  dVar23 = (double)this->NearClippingRadius;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  local_1b8._s_0.X = local_180._s_0.X * dVar24 + dVar4;
  local_1b8._s_0.Y = dVar22 * dVar24 + dVar5;
  local_1b8._s_0.Z = local_180._s_0.Z * dVar24 + dVar21;
  local_1d0._s_0.X = local_180._s_0.X * dVar23 + dVar4;
  local_1d0._s_0.Y = dVar22 * dVar23 + dVar5;
  local_1d0._s_0.Z = local_180._s_0.Z * dVar23 + dVar21;
  pFVar14 = FGameplayDebuggerShape::MakeSegment
                      (&local_138,(TVector<double> *)&local_1d0._s_0,
                       (TVector<double> *)&local_1b8._s_0,(FColor *)&local_res20[0]._s_0,&local_1e8)
  ;
  FGameplayDebuggerCategory::AddShape(param_2,pFVar14);
  if (local_138.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Description.Data.AllocatorInstance.Data);
  }
  if (local_138.ShapeData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ShapeData.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  uVar7 = local_168._s_0.X;
  dVar24 = (double)this->NearClippingRadius;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  local_1b8._s_0.X = local_168._s_0.X * dVar24 + dVar4;
  local_1b8._s_0.Y = local_168._s_0.Y * dVar24 + dVar5;
  local_1d0._s_0.X = local_f8._s_0.X * dVar24 + dVar4;
  local_1d0._s_0.Y = local_f8._s_0.Y * dVar24 + dVar5;
  local_1d0._s_0.Z = local_f8._s_0.Z * dVar24 + dVar21;
  local_1b8._s_0.Z = local_168._s_0.Z * dVar24 + dVar21;
  pFVar14 = FGameplayDebuggerShape::MakeSegment
                      (&local_138,(TVector<double> *)&local_1d0._s_0,
                       (TVector<double> *)&local_1b8._s_0,(FColor *)&local_res20[0]._s_0,&local_1e8)
  ;
  FGameplayDebuggerCategory::AddShape(param_2,pFVar14);
  if (local_138.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Description.Data.AllocatorInstance.Data);
  }
  if (local_138.ShapeData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ShapeData.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  dVar24 = (double)this->NearClippingRadius;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  local_1d0._s_0.Y = local_168._s_0.Y * dVar24 + dVar5;
  local_1b8._s_0.X = (double)uVar6 * dVar24 + dVar4;
  local_1b8._s_0.Y = dVar22 * dVar24 + dVar5;
  local_1b8._s_0.Z = local_180._s_0.Z * dVar24 + dVar21;
  local_1d0._s_0.X = (double)uVar7 * dVar24 + dVar4;
  local_1d0._s_0.Z = local_168._s_0.Z * dVar24 + dVar21;
  pFVar14 = FGameplayDebuggerShape::MakeSegment
                      (&local_138,(TVector<double> *)&local_1d0._s_0,
                       (TVector<double> *)&local_1b8._s_0,(FColor *)&local_res20[0]._s_0,&local_1e8)
  ;
  FGameplayDebuggerCategory::AddShape(param_2,pFVar14);
  if (local_138.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Description.Data.AllocatorInstance.Data);
  }
  if (local_138.ShapeData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.ShapeData.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  return;
}

// GetSenseImplementation @ 146fb4df0

TSubclassOf<UAISense> __thiscall
UAISenseConfig_Sight::GetSenseImplementation(UAISenseConfig_Sight *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UClass> in_RDX;
  
  pUVar4 = (this->Implementation).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UAISense_Sight::StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pUVar4 = (this->Implementation).Class.field0_0x0.DebugPtr;
        goto LAB_146fb4e44;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_146fb4e44:
  *(UClass **)in_RDX.field0_0x0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  return (TSubclassOf<UAISense>)in_RDX.field0_0x0;
}

