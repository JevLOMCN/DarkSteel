// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 9

// StaticClass @ 146327410

UClass * __cdecl URandomVector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URandomVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"RandomVector",
               &Z_Registration_Info_UClass_URandomVector.InnerSingleton,
               StaticRegisterNativesURandomVector,200,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<URandomVector>,
               InternalVTableHelperCtorCaller<URandomVector>,local_res8,
               UFieldNodeVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URandomVector.InnerSingleton;
}

// URandomVector @ 14632b280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URandomVector * __thiscall URandomVector::URandomVector(URandomVector *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~URandomVector @ 14632bac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall URandomVector::~URandomVector(URandomVector *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1463305b0

UClass * __cdecl URandomVector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URandomVector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"RandomVector",
               &Z_Registration_Info_UClass_URandomVector.InnerSingleton,
               StaticRegisterNativesURandomVector,200,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<URandomVector>,
               InternalVTableHelperCtorCaller<URandomVector>,local_res8,
               UFieldNodeVector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URandomVector.InnerSingleton;
}

// NewEvaluationGraph @ 146332250

FFieldNodeBase * __thiscall
URandomVector::NewEvaluationGraph
          (URandomVector *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FFieldNodeBase *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  URandomVector *local_28 [4];
  
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar7 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar7 == pFVar2) {
LAB_146332282:
      pFVar2 = (param_1->AllocatorInstance).Data;
      local_28[0] = this;
      if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FFieldNodeBase *)(*pcVar3)();
        return pFVar6;
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar5;
      }
      param_1->ArrayNum = iVar5 + 1;
      *(URandomVector **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28[0];
      pFVar6 = ::operator_new(0x18);
      if (pFVar6 == (FFieldNodeBase *)0x0) {
        return (FFieldNodeBase *)0x0;
      }
      fVar1 = this->Magnitude;
      (pFVar6->Name).ComparisonIndex = 0;
      (pFVar6->Name).Number = 0;
      pFVar6->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
      ::FName::FName(&pFVar6->Name,"");
      *(float *)&pFVar6[1]._padding_ = fVar1;
      pFVar6->_padding_ = (longlong)&___7FRandomVector__6B_;
      return pFVar6;
    }
    if (*(URandomVector **)pFVar7 == this) {
      local_res8[0] = 0;
      bVar4 = `URandomVector::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar4) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_146332282;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// SetRandomVector @ 146333ee0

URandomVector * __thiscall URandomVector::SetRandomVector(URandomVector *this,float param_1)

{
  this->Magnitude = param_1;
  return this;
}

// StaticRegisterNativesURandomVector @ 146334410

void __cdecl URandomVector::StaticRegisterNativesURandomVector(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_URandomVector_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetRandomVector @ 146336fd0

void __cdecl URandomVector::execSetRandomVector(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(UObject **)param_3 = param_1;
  *(undefined4 *)&param_1[4].field_0x20 = local_res8[0];
  return;
}

// operator() @ 1504e9c40

bool __thiscall `URandomVector::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983697>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983697>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

