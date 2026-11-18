// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 9

// StaticClass @ 146326e90

UClass * __cdecl UPlaneFalloff::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlaneFalloff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"PlaneFalloff",
               &Z_Registration_Info_UClass_UPlaneFalloff.InnerSingleton,
               StaticRegisterNativesUPlaneFalloff,0x110,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlaneFalloff>,
               InternalVTableHelperCtorCaller<UPlaneFalloff>,local_res8,UFieldNodeFloat::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlaneFalloff.InnerSingleton;
}

// UPlaneFalloff @ 14632b180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPlaneFalloff * __thiscall UPlaneFalloff::UPlaneFalloff(UPlaneFalloff *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UPlaneFalloff @ 14632ba00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPlaneFalloff::~UPlaneFalloff(UPlaneFalloff *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1463302b0

UClass * __cdecl UPlaneFalloff::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlaneFalloff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"PlaneFalloff",
               &Z_Registration_Info_UClass_UPlaneFalloff.InnerSingleton,
               StaticRegisterNativesUPlaneFalloff,0x110,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UPlaneFalloff>,
               InternalVTableHelperCtorCaller<UPlaneFalloff>,local_res8,UFieldNodeFloat::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlaneFalloff.InnerSingleton;
}

// NewEvaluationGraph @ 1463319f0

FFieldNodeBase * __thiscall
UPlaneFalloff::NewEvaluationGraph
          (UPlaneFalloff *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  FName FVar2;
  double dVar3;
  byte bVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  FName FVar8;
  double dVar9;
  double dVar10;
  FName FVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  int iVar15;
  FFieldNodeBase *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  UPlaneFalloff *local_a8 [20];
  
  pFVar17 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar17 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar17 == pFVar5) {
LAB_146331a25:
      pFVar5 = (param_1->AllocatorInstance).Data;
      local_a8[0] = this;
      if (((pFVar5 <= (FScriptContainerElement *)local_a8) &&
          ((FScriptContainerElement *)local_a8 < pFVar5 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FFieldNodeBase *)(*pcVar6)();
        return pFVar16;
      }
      iVar15 = param_1->ArrayNum;
      if (iVar15 == param_1->ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar15;
      }
      param_1->ArrayNum = iVar15 + 1;
      *(UPlaneFalloff **)((param_1->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_a8[0];
      pFVar16 = ::operator_new(0x60);
      if (pFVar16 == (FFieldNodeBase *)0x0) {
        pFVar16 = (FFieldNodeBase *)0x0;
      }
      else {
        bVar4 = (this->Falloff).Value;
        FVar2 = (FName)(this->Position).field0_0x0._s_0.Z;
        lVar7 = *(longlong *)&this->Magnitude;
        fVar12 = this->MaxRange;
        fVar13 = this->Default;
        FVar8 = (FName)(this->Position).field0_0x0._s_0.X;
        dVar9 = (this->Position).field0_0x0._s_0.Y;
        fVar1 = this->Distance;
        dVar3 = (this->Normal).field0_0x0._s_0.Z;
        dVar10 = (this->Normal).field0_0x0._s_0.X;
        FVar11 = (FName)(this->Normal).field0_0x0._s_0.Y;
        (pFVar16->Name).ComparisonIndex = 0;
        (pFVar16->Name).Number = 0;
        pFVar16->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar16->Name,"");
        pFVar16[2].Name = FVar8;
        pFVar16[3]._padding_ = (longlong)dVar9;
        pFVar16->_padding_ = (longlong)&___7FPlaneFalloff__6B_;
        pFVar16[4]._padding_ = (longlong)dVar10;
        pFVar16[4].Name = FVar11;
        pFVar16[5].Name.ComparisonIndex.Value = (uint)bVar4;
        *(float *)&pFVar16[2]._padding_ = fVar1;
        pFVar16[1]._padding_ = lVar7;
        pFVar16[1].Name.ComparisonIndex = (FNameEntryId)fVar12;
        pFVar16[1].Name.Number = (uint)fVar13;
        pFVar16[3].Name = FVar2;
        pFVar16[5]._padding_ = (longlong)dVar3;
      }
      return pFVar16;
    }
    if (*(UPlaneFalloff **)pFVar17 == this) {
      local_res8[0] = 0;
      bVar14 = `UPlaneFalloff::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar14) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_146331a25;
    }
    pFVar17 = pFVar17 + 8;
  } while( true );
}

// SetPlaneFalloff @ 146333d60

UPlaneFalloff * __thiscall
UPlaneFalloff::SetPlaneFalloff
          (UPlaneFalloff *this,float param_1,float param_2,float param_3,float param_4,float param_5
          ,TVector<double> *param_6,TVector<double> *param_7,EFieldFalloffType param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  this->Default = param_4;
  this->Magnitude = param_1;
  dVar2 = (param_6->field0_0x0)._s_0.Y;
  dVar1 = (param_6->field0_0x0)._s_0.Z;
  (this->Position).field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar2;
  this->Distance = param_5;
  dVar2 = (param_7->field0_0x0)._s_0.X;
  dVar3 = (param_7->field0_0x0)._s_0.Y;
  (this->Position).field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_7->field0_0x0)._s_0.Z;
  (this->Normal).field0_0x0._s_0.X = dVar2;
  (this->Normal).field0_0x0._s_0.Y = dVar3;
  (this->Falloff).Value = (undefined1)param_8;
  (this->Normal).field0_0x0._s_0.Z = dVar1;
  this->MinRange = param_2;
  this->MaxRange = param_3;
  return this;
}

// StaticRegisterNativesUPlaneFalloff @ 146334310

void __cdecl UPlaneFalloff::StaticRegisterNativesUPlaneFalloff(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPlaneFalloff_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetPlaneFalloff @ 1463367f0

void __cdecl UPlaneFalloff::execSetPlaneFalloff(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_68 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_64 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_64,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_64);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[4].field_0x20 = local_res10[0];
  *(undefined4 *)(param_1 + 5) = local_res20[0];
  param_1[6].field_0x18 = local_res8[0];
  *(undefined4 *)&param_1[4].field_0x24 = local_res18[0];
  *(undefined8 *)&param_1[5].field_0x10 = local_60;
  *(undefined8 *)&param_1[5].field_0x18 = uStack_58;
  *(undefined4 *)&param_1[5].field_0x4 = local_68;
  *(undefined8 *)&param_1[5].field_0x20 = local_50;
  *(undefined4 *)&param_1[5].field_0x8 = local_64;
  *(undefined8 *)(param_1 + 6) = local_48;
  *(undefined8 *)&param_1[6].field_0x8 = uStack_40;
  *(undefined8 *)&param_1[6].field_0x10 = local_38;
  *(UObject **)param_3 = param_1;
  return;
}

// operator() @ 1504e9b40

bool __thiscall `UPlaneFalloff::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983586>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983586>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

