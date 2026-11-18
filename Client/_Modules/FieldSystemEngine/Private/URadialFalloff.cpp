// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 9

// StaticClass @ 146326d30

UClass * __cdecl URadialFalloff::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialFalloff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"RadialFalloff",
               &Z_Registration_Info_UClass_URadialFalloff.InnerSingleton,
               StaticRegisterNativesURadialFalloff,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URadialFalloff>,
               InternalVTableHelperCtorCaller<URadialFalloff>,local_res8,
               UFieldNodeFloat::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialFalloff.InnerSingleton;
}

// URadialFalloff @ 14632b1c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URadialFalloff * __thiscall
URadialFalloff::URadialFalloff(URadialFalloff *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~URadialFalloff @ 14632ba30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URadialFalloff::~URadialFalloff(URadialFalloff *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 146330370

UClass * __cdecl URadialFalloff::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialFalloff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"RadialFalloff",
               &Z_Registration_Info_UClass_URadialFalloff.InnerSingleton,
               StaticRegisterNativesURadialFalloff,0xf8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URadialFalloff>,
               InternalVTableHelperCtorCaller<URadialFalloff>,local_res8,
               UFieldNodeFloat::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialFalloff.InnerSingleton;
}

// NewEvaluationGraph @ 146331c60

FFieldNodeBase * __thiscall
URadialFalloff::NewEvaluationGraph
          (URadialFalloff *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  FName FVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  FName FVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  FFieldNodeBase *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  URadialFalloff *local_88 [16];
  
  pFVar14 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar14 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar14 == pFVar4) {
LAB_146331c95:
      pFVar4 = (param_1->AllocatorInstance).Data;
      local_88[0] = this;
      if (((pFVar4 <= (FScriptContainerElement *)local_88) &&
          ((FScriptContainerElement *)local_88 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FFieldNodeBase *)(*pcVar5)();
        return pFVar13;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == param_1->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar12;
      }
      param_1->ArrayNum = iVar12 + 1;
      *(URadialFalloff **)((param_1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_88[0];
      pFVar13 = ::operator_new(0x48);
      if (pFVar13 == (FFieldNodeBase *)0x0) {
        pFVar13 = (FFieldNodeBase *)0x0;
      }
      else {
        bVar3 = (this->Falloff).Value;
        lVar6 = *(longlong *)&this->Magnitude;
        fVar9 = this->MaxRange;
        fVar10 = this->Default;
        FVar2 = (FName)(this->Position).field0_0x0._s_0.Z;
        FVar7 = (FName)(this->Position).field0_0x0._s_0.X;
        dVar8 = (this->Position).field0_0x0._s_0.Y;
        fVar1 = this->Radius;
        (pFVar13->Name).ComparisonIndex = 0;
        (pFVar13->Name).Number = 0;
        pFVar13->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar13->Name,"");
        pFVar13[2].Name = FVar7;
        pFVar13[3]._padding_ = (longlong)dVar8;
        pFVar13->_padding_ = (longlong)&___7FRadialFalloff__6B_;
        *(float *)&pFVar13[2]._padding_ = fVar1;
        pFVar13[1]._padding_ = lVar6;
        pFVar13[1].Name.ComparisonIndex = (FNameEntryId)fVar9;
        pFVar13[1].Name.Number = (uint)fVar10;
        *(uint *)&pFVar13[4]._padding_ = (uint)bVar3;
        pFVar13[3].Name = FVar2;
      }
      return pFVar13;
    }
    if (*(URadialFalloff **)pFVar14 == this) {
      local_res8[0] = 0;
      bVar11 = `URadialFalloff::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar11) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_146331c95;
    }
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// SetRadialFalloff @ 146333df0

URadialFalloff * __thiscall
URadialFalloff::SetRadialFalloff
          (URadialFalloff *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,TVector<double> *param_6,EFieldFalloffType param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  this->Magnitude = param_1;
  this->Default = param_4;
  dVar2 = (param_6->field0_0x0)._s_0.X;
  dVar3 = (param_6->field0_0x0)._s_0.Y;
  this->Radius = param_5;
  dVar1 = (param_6->field0_0x0)._s_0.Z;
  (this->Position).field0_0x0._s_0.X = dVar2;
  (this->Position).field0_0x0._s_0.Y = dVar3;
  (this->Falloff).Value = (undefined1)param_7;
  (this->Position).field0_0x0._s_0.Z = dVar1;
  this->MinRange = param_2;
  this->MaxRange = param_3;
  return this;
}

// StaticRegisterNativesURadialFalloff @ 146334350

void __cdecl URadialFalloff::StaticRegisterNativesURadialFalloff(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_URadialFalloff_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetRadialFalloff @ 146336aa0

void __cdecl URadialFalloff::execSetRadialFalloff(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
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
  local_48 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_44 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_44,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_44);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
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
  *(undefined4 *)&param_1[4].field_0x24 = local_res18[0];
  *(undefined4 *)(param_1 + 5) = local_res20[0];
  *(undefined4 *)&param_1[5].field_0x4 = local_48;
  *(undefined1 *)(param_1 + 6) = local_res8[0];
  *(undefined4 *)&param_1[5].field_0x8 = local_44;
  *(undefined8 *)&param_1[5].field_0x10 = local_40;
  *(undefined8 *)&param_1[5].field_0x18 = uStack_38;
  *(undefined8 *)&param_1[5].field_0x20 = local_30;
  *(UObject **)param_3 = param_1;
  return;
}

// operator() @ 1504e9b80

bool __thiscall `URadialFalloff::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983561>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983561>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

