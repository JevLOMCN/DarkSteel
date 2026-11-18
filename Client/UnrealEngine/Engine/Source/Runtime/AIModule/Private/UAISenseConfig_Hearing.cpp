// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146e7b360

UClass * __cdecl UAISenseConfig_Hearing::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Hearing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Hearing",
               &Z_Registration_Info_UClass_UAISenseConfig_Hearing.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Hearing,0x60,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig_Hearing>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Hearing>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Hearing.InnerSingleton;
}

// UAISenseConfig_Hearing @ 146e80a00

UAISenseConfig_Hearing * __thiscall
UAISenseConfig_Hearing::UAISenseConfig_Hearing(UAISenseConfig_Hearing *this,FVTableHelper *param_1)

{
  FAISenseAffiliationFilter *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pFVar1->bDetectEnemies = 0;
  pFVar1->bDetectFriendlies = 0;
  pFVar1->bDetectNeutrals = 0;
  this->_padding_ = (longlong)&___7UAISenseConfig_Hearing__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Implementation).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UAISenseConfig_Hearing @ 146e81c10

void __thiscall UAISenseConfig_Hearing::~UAISenseConfig_Hearing(UAISenseConfig_Hearing *this)

{
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146e8ed20

UClass * __cdecl UAISenseConfig_Hearing::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Hearing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Hearing",
               &Z_Registration_Info_UClass_UAISenseConfig_Hearing.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Hearing,0x60,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig_Hearing>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Hearing>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Hearing.InnerSingleton;
}

// StaticRegisterNativesUAISenseConfig_Hearing @ 146ea0120

void __cdecl UAISenseConfig_Hearing::StaticRegisterNativesUAISenseConfig_Hearing(void)

{
  return;
}

// UAISenseConfig_Hearing @ 146f940d0

UAISenseConfig_Hearing * __thiscall
UAISenseConfig_Hearing::UAISenseConfig_Hearing
          (UAISenseConfig_Hearing *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UAISenseConfig_Hearing__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Implementation).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->HearingRange = 3000.0;
  *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)FColor::Yellow.field0_0x0;
  return this;
}

// DescribeSelfToGameplayDebugger @ 146fa2b60

/* WARNING: Type propagation algorithm not settling */
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
UAISenseConfig_Hearing::DescribeSelfToGameplayDebugger
          (UAISenseConfig_Hearing *this,UAIPerceptionComponent *param_1,
          FGameplayDebuggerCategory *param_2)

{
  FColor_u_0 FVar1;
  FScriptContainerElement *pFVar2;
  USceneComponent *pUVar3;
  FColor_u_0 *pFVar4;
  FString *pFVar5;
  AActor *pAVar6;
  FGameplayDebuggerShape *pFVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FColor_u_0 local_res20 [2];
  FString local_118;
  FColor_u_0 local_108 [2];
  FString local_100;
  FString local_f0;
  FColor_u_0 local_e0 [2];
  FScriptContainerElement *local_d8;
  TVector<double>_u_0 local_d0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FGameplayDebuggerShape local_78;
  
  if ((param_1 != (UAIPerceptionComponent *)0x0) && (param_2 != (FGameplayDebuggerCategory *)0x0)) {
    iVar11 = GColorList.ColorsMap._8_4_ - GColorList.ColorsMap._52_4_;
    iVar9 = 0;
    local_res20[0] = FColor::Yellow.field0_0x0;
    local_108[0] = FColorList::Cyan.field0_0x0;
    iVar8 = iVar9;
    if (0 < iVar11) {
      do {
        pFVar4 = &FColorList::GetFColorByIndex(&GColorList,iVar8)->field0_0x0;
        if (local_108[0].Bits == pFVar4->Bits) {
          pFVar5 = FColorList::GetColorNameByIndex(&GColorList,iVar8);
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar8 = (pFVar5->Data).ArrayNum;
          pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
          local_118.Data.ArrayNum = iVar8;
          if (iVar8 == 0) {
            local_118.Data.ArrayNum = 0;
            local_118.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar8,0,(ForAnyElementType *)&local_118,iVar8,&local_118.Data.ArrayMax);
            memcpy(local_118.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar8 * 2);
          }
          goto LAB_146fa2c0d;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar11);
    }
    ::FString::FString(&local_118,L"color");
LAB_146fa2c0d:
    pFVar5 = FColor::ToString((FColor *)&local_108[0]._s_0,(FString *)&local_d0._s_0);
    if ((pFVar5->Data).ArrayNum == 0) {
      local_d8 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_d8 = (pFVar5->Data).AllocatorInstance.Data;
    }
    iVar8 = GColorList.ColorsMap._8_4_ - GColorList.ColorsMap._52_4_;
    if (0 < iVar8) {
      do {
        pFVar4 = &FColorList::GetFColorByIndex(&GColorList,iVar9)->field0_0x0;
        if (local_res20[0].Bits == pFVar4->Bits) {
          pFVar5 = FColorList::GetColorNameByIndex(&GColorList,iVar9);
          local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f0.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          lVar10 = (longlong)local_f0.Data.ArrayNum;
          pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
          if (local_f0.Data.ArrayNum == 0) {
            local_f0.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_f0,
                       local_f0.Data.ArrayNum,&local_f0.Data.ArrayMax);
            memcpy(local_f0.Data.AllocatorInstance.Data,pFVar2,lVar10 * 2);
          }
          goto LAB_146fa2cf0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8);
    }
    ::FString::FString(&local_f0,L"color");
LAB_146fa2cf0:
    FColor::ToString((FColor *)&local_res20[0]._s_0,&local_88);
    FVar1 = (FColor_u_0)*(FColor_u_0 *)&this->_padding_;
    iVar9 = 0;
    iVar8 = GColorList.ColorsMap._8_4_ - GColorList.ColorsMap._52_4_;
    if (0 < iVar8) {
      do {
        pFVar4 = &FColorList::GetFColorByIndex(&GColorList,iVar9)->field0_0x0;
        if (FVar1.Bits == pFVar4->Bits) {
          pFVar5 = FColorList::GetColorNameByIndex(&GColorList,iVar9);
          local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_100.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          lVar10 = (longlong)local_100.Data.ArrayNum;
          pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
          if (local_100.Data.ArrayNum == 0) {
            local_100.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_100,
                       local_100.Data.ArrayNum,&local_100.Data.ArrayMax);
            memcpy(local_100.Data.AllocatorInstance.Data,pFVar2,lVar10 * 2);
          }
          goto LAB_146fa2dc9;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8);
    }
    ::FString::FString(&local_100,L"color");
LAB_146fa2dc9:
    local_e0[0] = *(FColor_u_0 *)&this->_padding_;
    FColor::ToString((FColor *)&local_e0[0]._s_0,&local_98);
    UAISenseConfig::GetSenseName((UAISenseConfig *)this,&local_a8);
    ::FString::PrintfImpl(&local_b8,L"%s: {%s}%s {white}range:{%s}%s {white} rangeLoS:{%s}%s");
    FGameplayDebuggerCategory::AddTextLine(param_2,&local_b8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if ((void *)CONCAT44(local_d0._4_4_,local_d0._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_d0._4_4_,local_d0._0_4_));
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    pAVar6 = UAIPerceptionComponent::GetBodyActor(param_1);
    if (pAVar6 != (AActor *)0x0) {
      pUVar3 = (pAVar6->RootComponent).field0_0x0.DebugPtr;
      local_d0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_d0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_d0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_d0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (pUVar3 != (USceneComponent *)0x0) {
        local_d0._0_4_ = *(undefined4 *)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64;
        local_d0._4_4_ =
             *(undefined4 *)((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 4);
        local_d0._8_4_ = *(undefined4 *)((pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 1);
        local_d0._12_4_ =
             *(undefined4 *)((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
        local_d0._s_0.Z = (pUVar3->ComponentToWorld).Translation.ZW.m128d_f64[0];
      }
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      pFVar7 = FGameplayDebuggerShape::MakeCylinder
                         (&local_78,(TVector<double> *)&local_d0._s_0,this->HearingRange,
                          __real_41c80000,(FColor *)&local_res20[0]._s_0,&local_118);
      FGameplayDebuggerCategory::AddShape(param_2,pFVar7);
      if (local_78.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Description.Data.AllocatorInstance.Data);
      }
      if (local_78.ShapeData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.ShapeData.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetSenseImplementation @ 146fb4d20

TSubclassOf<UAISense> __thiscall
UAISenseConfig_Hearing::GetSenseImplementation(UAISenseConfig_Hearing *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  TObjectPtr<UClass> in_RDX;
  
  pUVar4 = (this->Implementation).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = UAISense_Hearing::StaticClass();
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
        goto LAB_146fb4d74;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_146fb4d74:
  *(UClass **)in_RDX.field0_0x0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  return (TSubclassOf<UAISense>)in_RDX.field0_0x0;
}

