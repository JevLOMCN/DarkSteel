// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 65

// GetShapeType_WrapperImpl @ 14b4dcc60

void __cdecl ADS_LevelTriggerActorBase::GetShapeType_WrapperImpl(void *param_1,void *param_2)

{
  EDS_LevelTriggerShapeType EVar1;
  
  EVar1 = GetShapeType(param_1);
  *(EDS_LevelTriggerShapeType *)param_2 = EVar1;
  return;
}

// SetShapeType_WrapperImpl @ 14b4dcc80

void __cdecl ADS_LevelTriggerActorBase::SetShapeType_WrapperImpl(void *param_1,void *param_2)

{
  SetShapeType(param_1,*(EDS_LevelTriggerShapeType *)param_2);
  return;
}

// SetInt32Value_WrapperImpl @ 14b4dcc90

void __cdecl ADS_LevelTriggerActorBase::SetInt32Value_WrapperImpl(void *param_1,void *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x2d0),param_2);
                    /* WARNING: Could not recover jumptable at 0x00014bc5fe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x788))(param_1);
  return;
}

// SetInt64Value_WrapperImpl @ 14b4dcca0

void __cdecl ADS_LevelTriggerActorBase::SetInt64Value_WrapperImpl(void *param_1,void *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x2e0);
  if (pFVar1 != param_2) {
    _Src = *(void **)param_2;
    iVar2 = *(int *)((longlong)param_2 + 8);
    *(int *)((longlong)param_1 + 0x2e8) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x2ec) == 0)) {
      *(int *)((longlong)param_1 + 0x2ec) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,*(int *)((longlong)param_1 + 0x2ec),pFVar1,iVar2,
                 (int *)((longlong)param_1 + 0x2ec));
      if (iVar2 != 0) {
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014bc5ff0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x788))(param_1);
  return;
}

// SetFloatValue_WrapperImpl @ 14b4dccb0

void __cdecl ADS_LevelTriggerActorBase::SetFloatValue_WrapperImpl(void *param_1,void *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x2f0),param_2);
                    /* WARNING: Could not recover jumptable at 0x00014bc5e390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x788))(param_1);
  return;
}

// SetDoubleValue_WrapperImpl @ 14b4dccc0

void __cdecl ADS_LevelTriggerActorBase::SetDoubleValue_WrapperImpl(void *param_1,void *param_2)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  void *_Src;
  
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x300);
  if (pFVar1 != param_2) {
    _Src = *(void **)param_2;
    iVar2 = *(int *)((longlong)param_2 + 8);
    *(int *)((longlong)param_1 + 0x308) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x30c) == 0)) {
      *(int *)((longlong)param_1 + 0x30c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar2,*(int *)((longlong)param_1 + 0x30c),pFVar1,iVar2,
                 (int *)((longlong)param_1 + 0x30c));
      if (iVar2 != 0) {
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014bc5dfbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x788))(param_1);
  return;
}

// SetStringValue_WrapperImpl @ 14b4dccd0

void __cdecl ADS_LevelTriggerActorBase::SetStringValue_WrapperImpl(void *param_1,void *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FString *pFVar4;
  
  pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x310);
  if (pFVar2 != param_2) {
    DestructItems<FString,int>((FString *)pFVar2->Data,*(int *)((longlong)param_1 + 0x318));
    iVar3 = *(int *)((longlong)param_2 + 8);
    piVar1 = (int *)((longlong)param_1 + 0x31c);
    pFVar4 = *(FString **)param_2;
    *(int *)((longlong)param_1 + 0x318) = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
      ConstructItems<FString,FString,int>(pFVar2->Data,pFVar4,iVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014bc64a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x788))(param_1);
  return;
}

// GetTriggerShapeColor_WrapperImpl @ 14b4dcce0

void __cdecl
ADS_LevelTriggerActorBase::GetTriggerShapeColor_WrapperImpl(void *param_1,void *param_2)

{
  FColor FVar1;
  undefined4 extraout_var;
  
  FVar1 = GetTriggerShapeColor(param_1);
  *(undefined4 *)param_2 = *(undefined4 *)CONCAT44(extraout_var,FVar1.field0_0x0);
  return;
}

// SetTriggerShapeColor_WrapperImpl @ 14b4dcd10

void __cdecl
ADS_LevelTriggerActorBase::SetTriggerShapeColor_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)((longlong)param_1 + 800) = *(undefined4 *)param_2;
  return;
}

// SetTriggerShapeThickness_WrapperImpl @ 14b4dcd20

void __cdecl
ADS_LevelTriggerActorBase::SetTriggerShapeThickness_WrapperImpl(void *param_1,void *param_2)

{
  SetTriggerShapeThickness(param_1,*(float *)param_2);
  return;
}

// SetTriggerShapeOverDraw_WrapperImpl @ 14b4dcd30

void __cdecl
ADS_LevelTriggerActorBase::SetTriggerShapeOverDraw_WrapperImpl(void *param_1,void *param_2)

{
  SetTriggerShapeOverDraw(param_1,*(bool *)param_2);
  return;
}

// GetIsNeedServer_WrapperImpl @ 14b4dcd40

void __cdecl ADS_LevelTriggerActorBase::GetIsNeedServer_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = GetIsNeedServer(param_1);
  *(bool *)param_2 = bVar1;
  return;
}

// SetIsNeedServer_WrapperImpl @ 14b4dcd60

void __cdecl ADS_LevelTriggerActorBase::SetIsNeedServer_WrapperImpl(void *param_1,void *param_2)

{
  SetIsNeedServer(param_1,*(bool *)param_2);
  return;
}

// GetInteractType_WrapperImpl @ 14b4dcd70

void __cdecl ADS_LevelTriggerActorBase::GetInteractType_WrapperImpl(void *param_1,void *param_2)

{
  EDS_LevelTriggerInteractType EVar1;
  
  EVar1 = GetInteractType(param_1);
  *(EDS_LevelTriggerInteractType *)param_2 = EVar1;
  return;
}

// SetInteractType_WrapperImpl @ 14b4dcd90

void __cdecl ADS_LevelTriggerActorBase::SetInteractType_WrapperImpl(void *param_1,void *param_2)

{
  SetInteractType(param_1,*(EDS_LevelTriggerInteractType *)param_2);
  return;
}

// GetCapsule_Radius_WrapperImpl @ 14b4dcda0

void __cdecl ADS_LevelTriggerActorBase::GetCapsule_Radius_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = GetCapsule_Radius(param_1);
  *(float *)param_2 = fVar1;
  return;
}

// SetCapsule_Radius_WrapperImpl @ 14b4dcdc0

void __cdecl ADS_LevelTriggerActorBase::SetCapsule_Radius_WrapperImpl(void *param_1,void *param_2)

{
  SetCapsule_Radius(param_1,*(float *)param_2);
  return;
}

// GetCapsule_HalfHeight_WrapperImpl @ 14b4dcdd0

void __cdecl
ADS_LevelTriggerActorBase::GetCapsule_HalfHeight_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = GetCapsule_HalfHeight(param_1);
  *(float *)param_2 = fVar1;
  return;
}

// SetCapsule_HalfHeight_WrapperImpl @ 14b4dcdf0

void __cdecl
ADS_LevelTriggerActorBase::SetCapsule_HalfHeight_WrapperImpl(void *param_1,void *param_2)

{
  SetCapsule_HalfHeight(param_1,*(float *)param_2);
  return;
}

// GetBoxExtent_WrapperImpl @ 14b4dce00

void __cdecl ADS_LevelTriggerActorBase::GetBoxExtent_WrapperImpl(void *param_1,void *param_2)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  pTVar2 = GetBoxExtent(param_1,&local_28);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  *(double *)param_2 = (pTVar2->field0_0x0)._s_0.X;
  *(double *)((longlong)param_2 + 8) = dVar1;
  *(double *)((longlong)param_2 + 0x10) = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// SetBoxExtent_WrapperImpl @ 14b4dce30

void __cdecl ADS_LevelTriggerActorBase::SetBoxExtent_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x338) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x340) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x348) = *(undefined8 *)((longlong)param_2 + 0x10);
  return;
}

// GetSphereRadius_WrapperImpl @ 14b4dce40

void __cdecl ADS_LevelTriggerActorBase::GetSphereRadius_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = GetSphereRadius(param_1);
  *(float *)param_2 = fVar1;
  return;
}

// SetSphereRadius_WrapperImpl @ 14b4dce60

void __cdecl ADS_LevelTriggerActorBase::SetSphereRadius_WrapperImpl(void *param_1,void *param_2)

{
  SetSphereRadius(param_1,*(float *)param_2);
  return;
}

// StaticClass @ 14b4dce70

UClass * __cdecl ADS_LevelTriggerActorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LevelTriggerActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelTriggerActorBase",
               &Z_Registration_Info_UClass_ADS_LevelTriggerActorBase.InnerSingleton,
               StaticRegisterNativesADS_LevelTriggerActorBase,0x358,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_LevelTriggerActorBase>,
               InternalVTableHelperCtorCaller<ADS_LevelTriggerActorBase>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LevelTriggerActorBase.InnerSingleton;
}

// ADS_LevelTriggerActorBase @ 14b4df590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_LevelTriggerActorBase * __thiscall
ADS_LevelTriggerActorBase::ADS_LevelTriggerActorBase
          (ADS_LevelTriggerActorBase *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_LevelTriggerActorBase__6B_;
  (this->Int32Value).ArrayNum = 0;
  (this->Int32Value).ArrayMax = 0;
  (this->Int64Value).ArrayNum = 0;
  (this->Int64Value).ArrayMax = 0;
  (this->FloatValue).ArrayNum = 0;
  (this->FloatValue).ArrayMax = 0;
  (this->DoubleValue).ArrayNum = 0;
  (this->DoubleValue).ArrayMax = 0;
  (this->StringValue).ArrayNum = 0;
  (this->StringValue).ArrayMax = 0;
  (this->LevelTriggerComponent).field0_0x0.DebugPtr = (UDS_LevelTriggerComponentBase *)0x0;
  (this->Int32Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Int64Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerShapeColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  (this->BoxExtent).field0_0x0._s_0.X = 100.0;
  (this->BoxExtent).field0_0x0._s_0.Y = 100.0;
  (this->BoxExtent).field0_0x0._s_0.Z = 100.0;
  this->TriggerShapeThickness = 1.0;
  this->TriggerShapeOverDraw = false;
  this->IsNeedServer = false;
  this->InteractType = ActsOnCollision;
  this->Capsule_Radius = 100.0;
  this->Capsule_HalfHeight = 100.0;
  this->SphereRadius = 100.0;
  return this;
}

// ~ADS_LevelTriggerActorBase @ 14b4e00b0

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
ADS_LevelTriggerActorBase::~ADS_LevelTriggerActorBase(ADS_LevelTriggerActorBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ADS_LevelTriggerActorBase__6B_;
  DestructItems<FString,int>
            ((FString *)(this->StringValue).AllocatorInstance.Data,(this->StringValue).ArrayNum);
  pFVar1 = (this->StringValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DoubleValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FloatValue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Int64Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Int32Value).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// CheckCondition @ 14b4e1090

bool __thiscall ADS_LevelTriggerActorBase::CheckCondition(ADS_LevelTriggerActorBase *this)

{
  return true;
}

// CheckOverlap @ 14b4e10a0

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
ADS_LevelTriggerActorBase::CheckOverlap
          (ADS_LevelTriggerActorBase *this,AActor *param_1,UPrimitiveComponent *param_2)

{
  return true;
}

// ExecuteTriggerBeginEvent @ 14b4e1750

void __thiscall ADS_LevelTriggerActorBase::ExecuteTriggerBeginEvent(ADS_LevelTriggerActorBase *this)

{
  return;
}

// ExecuteTriggerEndEvent @ 14b4e1760

void __thiscall ADS_LevelTriggerActorBase::ExecuteTriggerEndEvent(ADS_LevelTriggerActorBase *this)

{
  return;
}

// GetPrivateStaticClass @ 14b4e1910

UClass * __cdecl ADS_LevelTriggerActorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_LevelTriggerActorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelTriggerActorBase",
               &Z_Registration_Info_UClass_ADS_LevelTriggerActorBase.InnerSingleton,
               StaticRegisterNativesADS_LevelTriggerActorBase,0x358,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_LevelTriggerActorBase>,
               InternalVTableHelperCtorCaller<ADS_LevelTriggerActorBase>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_LevelTriggerActorBase.InnerSingleton;
}

// SetPropertiesChange @ 14b4e26b0

void __thiscall ADS_LevelTriggerActorBase::SetPropertiesChange(ADS_LevelTriggerActorBase *this)

{
  return;
}

// StaticRegisterNativesADS_LevelTriggerActorBase @ 14b4e2700

void __cdecl ADS_LevelTriggerActorBase::StaticRegisterNativesADS_LevelTriggerActorBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ADS_LevelTriggerActorBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetTrigger @ 14b4e4010

void __cdecl
ADS_LevelTriggerActorBase::execSetTrigger(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTrigger((ADS_LevelTriggerActorBase *)param_1);
  return;
}

// ADS_LevelTriggerActorBase @ 14bc29ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_LevelTriggerActorBase * __thiscall
ADS_LevelTriggerActorBase::ADS_LevelTriggerActorBase(ADS_LevelTriggerActorBase *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this);
  this->_padding_ = (longlong)&___7ADS_LevelTriggerActorBase__6B_;
  (this->Int32Value).ArrayNum = 0;
  (this->Int32Value).ArrayMax = 0;
  (this->Int64Value).ArrayNum = 0;
  (this->Int64Value).ArrayMax = 0;
  (this->FloatValue).ArrayNum = 0;
  (this->FloatValue).ArrayMax = 0;
  (this->DoubleValue).ArrayNum = 0;
  (this->DoubleValue).ArrayMax = 0;
  (this->StringValue).ArrayNum = 0;
  (this->StringValue).ArrayMax = 0;
  (this->LevelTriggerComponent).field0_0x0.DebugPtr = (UDS_LevelTriggerComponentBase *)0x0;
  (this->Int32Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Int64Value).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerShapeColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  (this->BoxExtent).field0_0x0._s_0.X = 100.0;
  (this->BoxExtent).field0_0x0._s_0.Y = 100.0;
  (this->BoxExtent).field0_0x0._s_0.Z = 100.0;
  this->TriggerShapeThickness = 1.0;
  this->TriggerShapeOverDraw = false;
  this->IsNeedServer = false;
  this->InteractType = ActsOnCollision;
  this->Capsule_Radius = 100.0;
  this->Capsule_HalfHeight = 100.0;
  this->SphereRadius = 100.0;
  pFVar2 = ::FName::FName(&local_res8,L"RootComponent");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  return this;
}

// BeginDestroy @ 14bc2de50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_LevelTriggerActorBase::BeginDestroy(ADS_LevelTriggerActorBase *this)

{
  UDS_LevelTriggerComponentBase *pUVar1;
  
  pUVar1 = (this->LevelTriggerComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_LevelTriggerComponentBase *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2b0))();
  }
  AActor::BeginDestroy((AActor *)this);
  return;
}

// BeginPlay @ 14bc2ded0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_LevelTriggerActorBase::BeginPlay(ADS_LevelTriggerActorBase *this)

{
  AActor::BeginPlay((AActor *)this);
  (**(code **)(this->_padding_ + 0x788))(this);
  SetTrigger(this);
  return;
}

// GetBoxExtent @ 14bc3f7b0

TVector<double> * __thiscall
ADS_LevelTriggerActorBase::GetBoxExtent
          (ADS_LevelTriggerActorBase *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->BoxExtent).field0_0x0._s_0.Y;
  dVar1 = (this->BoxExtent).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->BoxExtent).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetCapsule_HalfHeight @ 14bc3fbe0

float __thiscall ADS_LevelTriggerActorBase::GetCapsule_HalfHeight(ADS_LevelTriggerActorBase *this)

{
  return this->Capsule_HalfHeight;
}

// GetCapsule_Radius @ 14bc3fbf0

float __thiscall ADS_LevelTriggerActorBase::GetCapsule_Radius(ADS_LevelTriggerActorBase *this)

{
  return this->Capsule_Radius;
}

// GetComponentProfile @ 14bc40030

FName __thiscall ADS_LevelTriggerActorBase::GetComponentProfile(ADS_LevelTriggerActorBase *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"LevelTrigger");
  return in_RDX;
}

// GetInteractType @ 14bc41870

EDS_LevelTriggerInteractType __thiscall
ADS_LevelTriggerActorBase::GetInteractType(ADS_LevelTriggerActorBase *this)

{
  return this->InteractType;
}

// GetIsNeedServer @ 14bc41960

bool __thiscall ADS_LevelTriggerActorBase::GetIsNeedServer(ADS_LevelTriggerActorBase *this)

{
  return this->IsNeedServer;
}

// GetShapeType @ 14bc43d20

EDS_LevelTriggerShapeType __thiscall
ADS_LevelTriggerActorBase::GetShapeType(ADS_LevelTriggerActorBase *this)

{
  return this->ShapeType;
}

// GetSphereRadius @ 14bc443f0

float __thiscall ADS_LevelTriggerActorBase::GetSphereRadius(ADS_LevelTriggerActorBase *this)

{
  return this->SphereRadius;
}

// GetTriggerShapeColor @ 14bc44950

FColor __thiscall ADS_LevelTriggerActorBase::GetTriggerShapeColor(ADS_LevelTriggerActorBase *this)

{
  FColor_u_0 *in_RDX;
  
  *in_RDX = (this->TriggerShapeColor).field0_0x0;
  return (FColor)SUB84(in_RDX,0);
}

// PostInitProperties @ 14bc555a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_LevelTriggerActorBase::PostInitProperties(ADS_LevelTriggerActorBase *this)

{
  UObject::PostInitProperties((UObject *)this);
  *(byte *)&this->_padding_ = *(byte *)((longlong)&this->_padding_ + 3) >> 3 & 1;
  if ((this->_padding_ & 0x10) == 0) {
    AActor::ResetOwnedComponents((AActor *)this);
    return;
  }
  return;
}

// PostLoad @ 14bc55ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_LevelTriggerActorBase::PostLoad(ADS_LevelTriggerActorBase *this)

{
  AActor::PostLoad((AActor *)this);
  (**(code **)(this->_padding_ + 0x788))(this);
  SetTrigger(this);
  return;
}

// SetBoxExtent @ 14bc5d1e0

void __thiscall
ADS_LevelTriggerActorBase::SetBoxExtent(ADS_LevelTriggerActorBase *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->BoxExtent).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->BoxExtent).field0_0x0._s_0.Y = dVar1;
  (this->BoxExtent).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetCapsule_HalfHeight @ 14bc5d6e0

void __thiscall
ADS_LevelTriggerActorBase::SetCapsule_HalfHeight(ADS_LevelTriggerActorBase *this,float param_1)

{
  this->Capsule_HalfHeight = param_1;
  return;
}

// SetCapsule_Radius @ 14bc5d6f0

void __thiscall
ADS_LevelTriggerActorBase::SetCapsule_Radius(ADS_LevelTriggerActorBase *this,float param_1)

{
  this->Capsule_Radius = param_1;
  return;
}

// SetDoubleValue @ 14bc5df30

void __thiscall
ADS_LevelTriggerActorBase::SetDoubleValue
          (ADS_LevelTriggerActorBase *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar2 = &this->DoubleValue;
  if (pTVar2 != param_1) {
    iVar3 = (this->DoubleValue).ArrayMax;
    piVar1 = &(this->DoubleValue).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    (this->DoubleValue).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014bc5dfbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x788))(this);
  return;
}

// SetFloatValue @ 14bc5e370

void __thiscall
ADS_LevelTriggerActorBase::SetFloatValue
          (ADS_LevelTriggerActorBase *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->FloatValue,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014bc5e390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x788))(this);
  return;
}

// SetInt32Value @ 14bc5fe50

void __thiscall
ADS_LevelTriggerActorBase::SetInt32Value
          (ADS_LevelTriggerActorBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->Int32Value,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014bc5fe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x788))(this);
  return;
}

// SetInt64Value @ 14bc5fe80

void __thiscall
ADS_LevelTriggerActorBase::SetInt64Value
          (ADS_LevelTriggerActorBase *this,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pTVar2 = &this->Int64Value;
  if (pTVar2 != param_1) {
    iVar3 = (this->Int64Value).ArrayMax;
    piVar1 = &(this->Int64Value).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    (this->Int64Value).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014bc5ff0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x788))(this);
  return;
}

// SetInteractType @ 14bc5ff20

void __thiscall
ADS_LevelTriggerActorBase::SetInteractType
          (ADS_LevelTriggerActorBase *this,EDS_LevelTriggerInteractType param_1)

{
  this->InteractType = param_1;
  return;
}

// SetIsNeedServer @ 14bc5ff30

void __thiscall
ADS_LevelTriggerActorBase::SetIsNeedServer(ADS_LevelTriggerActorBase *this,bool param_1)

{
  this->IsNeedServer = param_1;
  return;
}

// SetShapeType @ 14bc647f0

void __thiscall
ADS_LevelTriggerActorBase::SetShapeType
          (ADS_LevelTriggerActorBase *this,EDS_LevelTriggerShapeType param_1)

{
  this->ShapeType = param_1;
  return;
}

// SetSphereRadius @ 14bc649c0

void __thiscall
ADS_LevelTriggerActorBase::SetSphereRadius(ADS_LevelTriggerActorBase *this,float param_1)

{
  this->SphereRadius = param_1;
  return;
}

// SetStringValue @ 14bc649f0

void __thiscall
ADS_LevelTriggerActorBase::SetStringValue
          (ADS_LevelTriggerActorBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar2 = &this->StringValue;
  if (pTVar2 != param_1) {
    DestructItems<FString,int>
              ((FString *)(pTVar2->AllocatorInstance).Data,(this->StringValue).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->StringValue).ArrayMax;
    pFVar4 = (param_1->AllocatorInstance).Data;
    (this->StringValue).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014bc64a86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x788))(this);
  return;
}

// SetTrigger @ 14bc64b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_LevelTriggerActorBase::SetTrigger(ADS_LevelTriggerActorBase *this)

{
  bool bVar1;
  UClass *pUVar2;
  UDS_LevelTriggerComponentBase *pUVar3;
  UDS_LogManager *pUVar4;
  longlong *plVar5;
  undefined1 auStackY_1f8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr local_1c0;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pUVar3 = (this->LevelTriggerComponent).field0_0x0.DebugPtr;
  if (pUVar3 != (UDS_LevelTriggerComponentBase *)0x0) {
    (**(code **)(pUVar3->_padding_ + 0x2b0))();
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_LevelTriggerComponentBase_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1b8,pUVar2);
  local_1b8._8_8_ = this;
  pUVar3 = (UDS_LevelTriggerComponentBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
  if (local_1b8._64_8_ != 0) {
    plVar5 = (longlong *)(local_1b8 + 0x50);
    if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_1b8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar3 == (UDS_LevelTriggerComponentBase *)0x0)) {
    (this->LevelTriggerComponent).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 == (UDS_LevelTriggerComponentBase *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)pUVar3;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_LevelTriggerActorBase::SetTrigger",0x25,Yes);
      pwVar7 = L"LevelTriggerComponent is nullptr";
      uVar6 = 0x8a;
      goto LAB_14bc64cd4;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->LevelTriggerComponent).field0_0x0.DebugPtr = pUVar3;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_1c0.ObjectIndex = 0;
  local_1c0.ObjectSerialNumber = 0;
  local_1c8 = (FWeakObjectPtr)this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_1c0,(FObjectPtr)&local_1c8);
  local_1c8 = local_1c0;
  bVar1 = TWeakObjectPtr<ADS_LevelTriggerActorBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_LevelTriggerActorBase,FWeakObjectPtr> *)&local_1c8,
                     (void *)0x0);
  if (!bVar1) {
    (pUVar3->OwnerActor).WeakPtr = local_1c8;
    UDS_LevelTriggerComponentBase::ChangeCollisionComponent(pUVar3);
    return;
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar4 = UDS_LogManager::GetInst();
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"UDS_LevelTriggerComponentBase::InitTriggerComponent",0x33,Yes);
  pwVar7 = L"OwnerActor is nullptr.";
  uVar6 = 0x11;
LAB_14bc64cd4:
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((UDS_LevelTriggerComponentBase *)local_138._padding_ != (UDS_LevelTriggerComponentBase *)0x0)
  {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// SetTriggerShapeColor @ 14bc64da0

void __thiscall
ADS_LevelTriggerActorBase::SetTriggerShapeColor(ADS_LevelTriggerActorBase *this,FColor *param_1)

{
  (this->TriggerShapeColor).field0_0x0 = param_1->field0_0x0;
  return;
}

// SetTriggerShapeOverDraw @ 14bc64db0

void __thiscall
ADS_LevelTriggerActorBase::SetTriggerShapeOverDraw(ADS_LevelTriggerActorBase *this,bool param_1)

{
  this->TriggerShapeOverDraw = param_1;
  return;
}

// SetTriggerShapeThickness @ 14bc64dc0

void __thiscall
ADS_LevelTriggerActorBase::SetTriggerShapeThickness(ADS_LevelTriggerActorBase *this,float param_1)

{
  this->TriggerShapeThickness = param_1;
  return;
}

// Tick @ 14bc66940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_LevelTriggerActorBase::Tick(ADS_LevelTriggerActorBase *this,float param_1)

{
  uint uVar1;
  UFunction *pUVar2;
  UWorld *this_00;
  FLatentActionManager *this_01;
  float afStackX_8 [2];
  
  uVar1 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    afStackX_8[0] = param_1;
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveTick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,afStackX_8);
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      this_01 = UWorld::GetLatentActionManager(this_00);
      FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,this_00->DeltaTimeSeconds);
    }
  }
  return;
}

