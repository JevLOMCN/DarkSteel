// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146eafaa0

UClass * __cdecl UBTTask_MakeNoise::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_MakeNoise.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_MakeNoise",
               &Z_Registration_Info_UClass_UBTTask_MakeNoise.InnerSingleton,
               StaticRegisterNativesUBTTask_MakeNoise,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UBTTask_MakeNoise>,
               InternalVTableHelperCtorCaller<UBTTask_MakeNoise>,local_res8,UBTTaskNode::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_MakeNoise.InnerSingleton;
}

// UBTTask_MakeNoise @ 146ec8f40

UBTTask_MakeNoise * __thiscall
UBTTask_MakeNoise::UBTTask_MakeNoise(UBTTask_MakeNoise *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Loudnes)._padding_ = 0;
  *(undefined2 *)&(this->Loudnes)._padding_ = 0xffff;
  (this->Loudnes).DefaultValue = 0.0;
  return this;
}

// UBTTask_MakeNoise @ 146ec8fa0

UBTTask_MakeNoise * __thiscall
UBTTask_MakeNoise::UBTTask_MakeNoise(UBTTask_MakeNoise *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  plVar2 = &this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *plVar2 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Loudnes)._padding_ = 0;
  *(undefined2 *)&(this->Loudnes)._padding_ = 0xffff;
  (this->Loudnes).DefaultValue = 1.0;
  ::FString::FString(&local_18,"MakeNoise");
  if ((FString *)plVar2 != &local_18) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UBTTask_MakeNoise @ 146ecd550

void __thiscall UBTTask_MakeNoise::~UBTTask_MakeNoise(UBTTask_MakeNoise *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 146ee0cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_MakeNoise::ExecuteTask
          (UBTTask_MakeNoise *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  longlong lVar2;
  AActor *this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UClass *pUVar6;
  float fVar7;
  TVector<double>_u_0 local_48 [2];
  
  lVar2 = param_1->_padding_;
  if (lVar2 != 0) {
    pUVar6 = Z_Construct_UClass_AController_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      this_00 = *(AActor **)(lVar2 + 0x310);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (this_00 == (AActor *)0x0) {
          return Failed;
        }
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      if (this_00 != (AActor *)0x0) {
        if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
          fVar7 = (this->Loudnes).DefaultValue;
        }
        else {
          fVar7 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                            ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->Loudnes,
                             (FKey *)&(this->Loudnes)._padding_,&(this->Loudnes).DefaultValue);
        }
        local_48[0]._s_0.X = uVar3;
        local_48[0]._s_0.Y = uVar4;
        local_48[0]._s_0.Z = uVar5;
        AActor::MakeNoise(this_00,fVar7,(APawn *)this_00,(TVector<double> *)&local_48[0]._s_0,0.0,
                          (FName)0x0);
        return Succeeded;
      }
    }
  }
  return Failed;
}

// GetPrivateStaticClass @ 146ee88e0

UClass * __cdecl UBTTask_MakeNoise::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_MakeNoise.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_MakeNoise",
               &Z_Registration_Info_UClass_UBTTask_MakeNoise.InnerSingleton,
               StaticRegisterNativesUBTTask_MakeNoise,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UBTTask_MakeNoise>,
               InternalVTableHelperCtorCaller<UBTTask_MakeNoise>,local_res8,UBTTaskNode::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_MakeNoise.InnerSingleton;
}

// StaticRegisterNativesUBTTask_MakeNoise @ 146f00dd0

void __cdecl UBTTask_MakeNoise::StaticRegisterNativesUBTTask_MakeNoise(void)

{
  return;
}

