// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 20

// StaticClass @ 1493171e0

UClass * __cdecl UNiagaraBaselineController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBaselineController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBaselineController",
               &Z_Registration_Info_UClass_UNiagaraBaselineController.InnerSingleton,
               StaticRegisterNativesUNiagaraBaselineController,0x68,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBaselineController>,
               InternalVTableHelperCtorCaller<UNiagaraBaselineController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBaselineController.InnerSingleton;
}

// UNiagaraBaselineController @ 1493352e0

UNiagaraBaselineController * __thiscall
UNiagaraBaselineController::UNiagaraBaselineController
          (UNiagaraBaselineController *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->TestDuration = 5.0;
  this_00 = &(this->System).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraBaselineController__6B_;
  (this->EffectType).field0_0x0.DebugPtr = (UNiagaraEffectType *)0x0;
  (this->Owner).field0_0x0.DebugPtr = (ANiagaraPerfBaselineActor *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->System).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->System).SoftObjectPtr = 0;
  *(undefined8 *)&(this->System).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->System).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->System).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// UNiagaraBaselineController @ 149335360

UNiagaraBaselineController * __thiscall
UNiagaraBaselineController::UNiagaraBaselineController
          (UNiagaraBaselineController *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->TestDuration = 5.0;
  this_00 = &(this->System).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNiagaraBaselineController__6B_;
  (this->EffectType).field0_0x0.DebugPtr = (UNiagaraEffectType *)0x0;
  (this->Owner).field0_0x0.DebugPtr = (ANiagaraPerfBaselineActor *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->System).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->System).SoftObjectPtr = 0;
  *(undefined8 *)&(this->System).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->System).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->System).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UNiagaraBaselineController @ 149336c50

void __thiscall
UNiagaraBaselineController::~UNiagaraBaselineController(UNiagaraBaselineController *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraBaselineController__6B_;
  pvVar1 = *(void **)&(this->System).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149355c10

UClass * __cdecl UNiagaraBaselineController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBaselineController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBaselineController",
               &Z_Registration_Info_UClass_UNiagaraBaselineController.InnerSingleton,
               StaticRegisterNativesUNiagaraBaselineController,0x68,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBaselineController>,
               InternalVTableHelperCtorCaller<UNiagaraBaselineController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBaselineController.InnerSingleton;
}

// GetSystem @ 149356f00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraSystem * __thiscall UNiagaraBaselineController::GetSystem(UNiagaraBaselineController *this)

{
  int iVar1;
  UNiagaraSystem *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UNiagaraSystem *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->System);
  if (pUVar2 == (UNiagaraSystem *)0x0) {
    if (*(longlong *)&(this->System).SoftObjectPtr.field_0x8 == 0) {
      return (UNiagaraSystem *)0x0;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->System).SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar2 = (UNiagaraSystem *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->System);
  }
  if (pUVar2 != (UNiagaraSystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UNiagaraSystem *)0x0;
}

// OnBeginTest @ 14935f9b0

void __thiscall UNiagaraBaselineController::OnBeginTest(UNiagaraBaselineController *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UNiagaraBaselineController_OnBeginTest);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014935f9f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014935fa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this);
  return;
}

// OnBeginTest_Implementation @ 14935fa20

void __thiscall
UNiagaraBaselineController::OnBeginTest_Implementation(UNiagaraBaselineController *this)

{
  return;
}

// OnEndTest @ 14935ffd0

void __thiscall
UNiagaraBaselineController::OnEndTest
          (UNiagaraBaselineController *this,FNiagaraPerfBaselineStats *param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UNiagaraBaselineController_OnEndTest);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  local_18 = param_1->PerInstanceAvg_GT;
  fStack_14 = param_1->PerInstanceAvg_RT;
  fStack_10 = param_1->PerInstanceMax_GT;
  fStack_c = param_1->PerInstanceMax_RT;
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    return;
  }
  (**(code **)(this->_padding_ + 0x2b8))(this,&local_18);
  return;
}

// OnEndTest_Implementation @ 149360060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraBaselineController::OnEndTest_Implementation
          (UNiagaraBaselineController *this,FNiagaraPerfBaselineStats *param_1)

{
  int iVar1;
  UNiagaraEffectType *this_00;
  ANiagaraPerfBaselineActor *this_01;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  char *pcVar6;
  
  UEngine::RemoveOnScreenDebugMessage(GEngine,(longlong)*(int *)((longlong)&this->_padding_ + 4));
  pUVar4 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->System);
  if (pUVar4 == (UObject *)0x0) {
LAB_1493600d5:
    pcVar6 = "System";
  }
  else {
    pUVar5 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_1493600d5;
    this_00 = (this->EffectType).field0_0x0.DebugPtr;
    if (this_00 != (UNiagaraEffectType *)0x0) {
      UNiagaraEffectType::UpdatePerfBaselineStats(this_00,param_1);
      goto LAB_149360102;
    }
    pcVar6 = "EffectType";
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7558058588782984960>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                     ,0x100,pcVar6);
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_149360102:
  this_01 = (this->Owner).field0_0x0.DebugPtr;
  if (this_01 == (ANiagaraPerfBaselineActor *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7558058588782984955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                       ,0x105,"Owner");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    AActor::Destroy((AActor *)this_01,false,true);
  }
  return;
}

// OnOwnerTick @ 1493603a0

void __thiscall
UNiagaraBaselineController::OnOwnerTick(UNiagaraBaselineController *this,float param_1)

{
  UFunction *this_00;
  UClass *pUVar1;
  float local_res18 [4];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UNiagaraBaselineController_OnOwnerTick);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = param_1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149360412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this,param_1);
  return;
}

// OnOwnerTick_Implementation @ 149360420

void __thiscall
UNiagaraBaselineController::OnOwnerTick_Implementation
          (UNiagaraBaselineController *this,float param_1)

{
  return;
}

// OnTickTest @ 149360c70

bool __thiscall UNiagaraBaselineController::OnTickTest(UNiagaraBaselineController *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UNiagaraBaselineController_OnTickTest)
  ;
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x000149360cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2c0))(this);
  return (bool)uVar1;
}

// OnTickTest_Implementation @ 149360cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraBaselineController::OnTickTest_Implementation(UNiagaraBaselineController *this)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  char *pcVar8;
  float fVar9;
  FName local_res8;
  FString local_38;
  FString local_28 [2];
  
  if ((this->Owner).field0_0x0.DebugPtr == (ANiagaraPerfBaselineActor *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7558058588782984977>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                       ,0xef,"Owner");
    if (!bVar4) {
      return false;
    }
    goto code_r0x000149360ebf;
  }
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->System);
  if (pUVar6 == (UObject *)0x0) {
LAB_149360e93:
    pcVar8 = "System";
  }
  else {
    pUVar7 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) goto LAB_149360e93;
    if ((this->EffectType).field0_0x0.DebugPtr != (UNiagaraEffectType *)0x0) {
      fVar1 = this->TestDuration;
      fVar9 = AActor::GetGameTimeSinceCreation((AActor *)(this->Owner).field0_0x0.DebugPtr);
      if (fVar1 <= fVar9) {
        return false;
      }
      pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)&this->System);
      if (pUVar6 != (UObject *)0x0) {
        pUVar7 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
        iVar2 = (int)pUVar7->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar7->_padding_)) goto LAB_149360de7;
      }
      pUVar6 = (UObject *)0x0;
LAB_149360de7:
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res8.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res8,&local_38);
      ::FString::PrintfImpl(local_28,L"Generating Niagara Performance Baselines: %s");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      UEngine::AddOnScreenDebugMessage
                (GEngine,*(int *)((longlong)&this->_padding_ + 4),__real_40800000,FColor::White,
                 local_28,true,&UE::Math::TVector2<double>::UnitVector);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      return true;
    }
    pcVar8 = "EffectType";
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_7558058588782984977>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraPerfBaseline.cpp"
                     ,0xef,pcVar8);
  if (!bVar4) {
    return false;
  }
code_r0x000149360ebf:
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// StaticRegisterNativesUNiagaraBaselineController @ 149370300

void __cdecl UNiagaraBaselineController::StaticRegisterNativesUNiagaraBaselineController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraBaselineController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSystem @ 149376210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraBaselineController::execGetSystem(UObject *param_1,FFrame *param_2,void *param_3)

{
  UNiagaraSystem *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetSystem((UNiagaraBaselineController *)param_1);
  *(UNiagaraSystem **)param_3 = pUVar1;
  return;
}

// execOnBeginTest @ 149376290

void __cdecl
UNiagaraBaselineController::execOnBeginTest(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001493762a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2c8))();
  return;
}

// execOnEndTest @ 1493762c0

void __cdecl
UNiagaraBaselineController::execOnEndTest(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,&local_18);
  return;
}

// execOnOwnerTick @ 149376360

void __cdecl
UNiagaraBaselineController::execOnOwnerTick(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res8[0]);
  return;
}

// execOnTickTest @ 1493763f0

void __cdecl
UNiagaraBaselineController::execOnTickTest(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

