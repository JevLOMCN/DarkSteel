// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 9

// StaticClass @ 1463268e0

UClass * __cdecl URadialIntMask::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialIntMask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"RadialIntMask",
               &Z_Registration_Info_UClass_URadialIntMask.InnerSingleton,
               StaticRegisterNativesURadialIntMask,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URadialIntMask>,
               InternalVTableHelperCtorCaller<URadialIntMask>,local_res8,UFieldNodeInt::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialIntMask.InnerSingleton;
}

// URadialIntMask @ 14632b200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URadialIntMask * __thiscall
URadialIntMask::URadialIntMask(URadialIntMask *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~URadialIntMask @ 14632ba60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URadialIntMask::~URadialIntMask(URadialIntMask *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 146330430

UClass * __cdecl URadialIntMask::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialIntMask.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"RadialIntMask",
               &Z_Registration_Info_UClass_URadialIntMask.InnerSingleton,
               StaticRegisterNativesURadialIntMask,0xf0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<URadialIntMask>,
               InternalVTableHelperCtorCaller<URadialIntMask>,local_res8,UFieldNodeInt::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialIntMask.InnerSingleton;
}

// NewEvaluationGraph @ 146331e90

FFieldNodeBase * __thiscall
URadialIntMask::NewEvaluationGraph
          (URadialIntMask *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  FName FVar2;
  byte bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  FFieldNodeBase *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  URadialIntMask *local_58 [8];
  
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar12 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar12 == pFVar5) {
LAB_146331ec2:
      pFVar5 = (param_1->AllocatorInstance).Data;
      local_58[0] = this;
      if (((pFVar5 <= (FScriptContainerElement *)local_58) &&
          ((FScriptContainerElement *)local_58 < pFVar5 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FFieldNodeBase *)(*pcVar6)();
        return pFVar11;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == param_1->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar10;
      }
      param_1->ArrayNum = iVar10 + 1;
      *(URadialIntMask **)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_58[0];
      pFVar11 = ::operator_new(0x40);
      if (pFVar11 == (FFieldNodeBase *)0x0) {
        pFVar11 = (FFieldNodeBase *)0x0;
      }
      else {
        iVar10 = this->InteriorValue;
        bVar3 = (this->SetMaskCondition).Value;
        iVar4 = this->ExteriorValue;
        FVar2 = (FName)(this->Position).field0_0x0._s_0.Z;
        fVar1 = this->Radius;
        FVar7 = (FName)(this->Position).field0_0x0._s_0.X;
        dVar8 = (this->Position).field0_0x0._s_0.Y;
        (pFVar11->Name).ComparisonIndex = 0;
        (pFVar11->Name).Number = 0;
        pFVar11->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar11->Name,"");
        pFVar11[1].Name = FVar7;
        pFVar11[2]._padding_ = (longlong)dVar8;
        *(int *)((longlong)&pFVar11[3]._padding_ + 4) = iVar4;
        *(float *)&pFVar11[1]._padding_ = fVar1;
        pFVar11[2].Name = FVar2;
        pFVar11[3].Name.ComparisonIndex.Value = (uint)bVar3;
        pFVar11->_padding_ = (longlong)&___7FRadialIntMask__6B_;
        *(int *)&pFVar11[3]._padding_ = iVar10;
      }
      return pFVar11;
    }
    if (*(URadialIntMask **)pFVar12 == this) {
      local_res8[0] = 0;
      bVar9 = `URadialIntMask::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar9) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_146331ec2;
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// SetRadialIntMask @ 146333e60

URadialIntMask * __thiscall
URadialIntMask::SetRadialIntMask
          (URadialIntMask *this,float param_1,TVector<double> *param_2,int param_3,int param_4,
          ESetMaskConditionType param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  this->ExteriorValue = param_4;
  this->Radius = param_1;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (this->Position).field0_0x0._s_0.X = dVar2;
  (this->Position).field0_0x0._s_0.Y = dVar3;
  (this->SetMaskCondition).Value = (undefined1)param_5;
  (this->Position).field0_0x0._s_0.Z = dVar1;
  this->InteriorValue = param_3;
  return this;
}

// StaticRegisterNativesURadialIntMask @ 146334390

void __cdecl URadialIntMask::StaticRegisterNativesURadialIntMask(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_URadialIntMask_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetRadialIntMask @ 146336d00

void __cdecl URadialIntMask::execSetRadialIntMask(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  *(undefined4 *)&param_1[5].field_0x18 = local_res18[0];
  *(undefined4 *)&param_1[5].field_0x1c = local_res20[0];
  *(undefined4 *)&param_1[4].field_0x20 = local_res10[0];
  *(undefined8 *)(param_1 + 5) = local_48;
  *(undefined8 *)&param_1[5].field_0x8 = uStack_40;
  param_1[5].field_0x20 = local_res8[0];
  *(undefined8 *)&param_1[5].field_0x10 = local_38;
  *(UObject **)param_3 = param_1;
  return;
}

// operator() @ 1504e9bc0

bool __thiscall `URadialIntMask::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983497>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983497>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

