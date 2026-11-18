// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 9

// StaticClass @ 1463267e0

UClass * __cdecl UUniformInteger::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUniformInteger.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"UniformInteger",
               &Z_Registration_Info_UClass_UUniformInteger.InnerSingleton,
               StaticRegisterNativesUUniformInteger,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UUniformInteger>,
               InternalVTableHelperCtorCaller<UUniformInteger>,local_res8,UFieldNodeInt::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUniformInteger.InnerSingleton;
}

// UUniformInteger @ 14632b3a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UUniformInteger * __thiscall
UUniformInteger::UUniformInteger(UUniformInteger *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UUniformInteger @ 14632bb80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UUniformInteger::~UUniformInteger(UUniformInteger *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1463308b0

UClass * __cdecl UUniformInteger::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUniformInteger.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"UniformInteger",
               &Z_Registration_Info_UClass_UUniformInteger.InnerSingleton,
               StaticRegisterNativesUUniformInteger,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UUniformInteger>,
               InternalVTableHelperCtorCaller<UUniformInteger>,local_res8,UFieldNodeInt::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUniformInteger.InnerSingleton;
}

// NewEvaluationGraph @ 146332af0

FFieldNodeBase * __thiscall
UUniformInteger::NewEvaluationGraph
          (UUniformInteger *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FFieldNodeBase *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  UUniformInteger *local_18 [2];
  
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar6 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar6 == pFVar1) {
LAB_146332b22:
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_18[0] = this;
      if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FFieldNodeBase *)(*pcVar2)();
        return pFVar5;
      }
      iVar4 = param_1->ArrayNum;
      if (iVar4 == param_1->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar4;
      }
      param_1->ArrayNum = iVar4 + 1;
      *(UUniformInteger **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
      pFVar5 = ::operator_new(0x18);
      if (pFVar5 == (FFieldNodeBase *)0x0) {
        pFVar5 = (FFieldNodeBase *)0x0;
      }
      else {
        iVar4 = this->Magnitude;
        (pFVar5->Name).ComparisonIndex = 0;
        (pFVar5->Name).Number = 0;
        pFVar5->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar5->Name,"");
        *(int *)&pFVar5[1]._padding_ = iVar4;
        pFVar5->_padding_ = (longlong)&___7FUniformInteger__6B_;
      }
      return pFVar5;
    }
    if (*(UUniformInteger **)pFVar6 == this) {
      local_res8[0] = 0;
      bVar3 = `UUniformInteger::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar3) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_146332b22;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// SetUniformInteger @ 146333fd0

UUniformInteger * __thiscall UUniformInteger::SetUniformInteger(UUniformInteger *this,int param_1)

{
  this->Magnitude = param_1;
  return this;
}

// StaticRegisterNativesUUniformInteger @ 146334510

void __cdecl UUniformInteger::StaticRegisterNativesUUniformInteger(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UUniformInteger_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetUniformInteger @ 1463371f0

void __cdecl UUniformInteger::execSetUniformInteger(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[4].field_0x20 = local_res8[0];
  *(UObject **)param_3 = param_1;
  return;
}

// operator() @ 1504e9d40

bool __thiscall `UUniformInteger::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983479>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983479>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

