// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 9

// StaticClass @ 146327350

UClass * __cdecl URadialVector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"RadialVector",
               &Z_Registration_Info_UClass_URadialVector.InnerSingleton,
               StaticRegisterNativesURadialVector,0xe0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<URadialVector>,
               InternalVTableHelperCtorCaller<URadialVector>,local_res8,
               UFieldNodeVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialVector.InnerSingleton;
}

// URadialVector @ 14632b240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URadialVector * __thiscall URadialVector::URadialVector(URadialVector *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~URadialVector @ 14632ba90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URadialVector::~URadialVector(URadialVector *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1463304f0

UClass * __cdecl URadialVector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"RadialVector",
               &Z_Registration_Info_UClass_URadialVector.InnerSingleton,
               StaticRegisterNativesURadialVector,0xe0,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<URadialVector>,
               InternalVTableHelperCtorCaller<URadialVector>,local_res8,
               UFieldNodeVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialVector.InnerSingleton;
}

// NewEvaluationGraph @ 146332090

FFieldNodeBase * __thiscall
URadialVector::NewEvaluationGraph
          (URadialVector *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FFieldNodeBase *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  URadialVector *local_48 [8];
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar10 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar10 == pFVar3) {
LAB_1463320c5:
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_48[0] = this;
      if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FFieldNodeBase *)(*pcVar4)();
        return pFVar9;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar8;
      }
      param_1->ArrayNum = iVar8 + 1;
      *(URadialVector **)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_48[0];
      pFVar9 = ::operator_new(0x30);
      if (pFVar9 == (FFieldNodeBase *)0x0) {
        pFVar9 = (FFieldNodeBase *)0x0;
      }
      else {
        fVar1 = this->Magnitude;
        FVar2 = (FName)(this->Position).field0_0x0._s_0.Z;
        FVar5 = (FName)(this->Position).field0_0x0._s_0.X;
        dVar6 = (this->Position).field0_0x0._s_0.Y;
        (pFVar9->Name).ComparisonIndex = 0;
        (pFVar9->Name).Number = 0;
        pFVar9->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar9->Name,"");
        pFVar9[1].Name = FVar5;
        pFVar9[2]._padding_ = (longlong)dVar6;
        *(float *)&pFVar9[1]._padding_ = fVar1;
        pFVar9[2].Name = FVar2;
        pFVar9->_padding_ = (longlong)&___7FRadialVector__6B_;
      }
      return pFVar9;
    }
    if (*(URadialVector **)pFVar10 == this) {
      local_res8[0] = 0;
      bVar7 = `URadialVector::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar7) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_1463320c5;
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// SetRadialVector @ 146333eb0

URadialVector * __thiscall
URadialVector::SetRadialVector(URadialVector *this,float param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  this->Magnitude = param_1;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (this->Position).field0_0x0._s_0.X = dVar2;
  (this->Position).field0_0x0._s_0.Y = dVar3;
  (this->Position).field0_0x0._s_0.Z = dVar1;
  return this;
}

// StaticRegisterNativesURadialVector @ 1463343d0

void __cdecl URadialVector::StaticRegisterNativesURadialVector(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_URadialVector_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetRadialVector @ 146336ee0

void __cdecl URadialVector::execSetRadialVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[4].field_0x20 = local_res8[0];
  *(undefined8 *)(param_1 + 5) = local_28;
  *(undefined8 *)&param_1[5].field_0x8 = uStack_20;
  *(undefined8 *)&param_1[5].field_0x10 = local_18;
  *(UObject **)param_3 = param_1;
  return;
}

// operator() @ 1504e9c00

bool __thiscall `URadialVector::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983678>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983678>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

