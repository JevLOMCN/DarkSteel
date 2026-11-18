// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 9

// StaticClass @ 146327650

UClass * __cdecl UToFloatField::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToFloatField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"ToFloatField",
               &Z_Registration_Info_UClass_UToFloatField.InnerSingleton,
               StaticRegisterNativesUToFloatField,200,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<UToFloatField>,
               InternalVTableHelperCtorCaller<UToFloatField>,local_res8,UFieldNodeFloat::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToFloatField.InnerSingleton;
}

// UToFloatField @ 14632b300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UToFloatField * __thiscall UToFloatField::UToFloatField(UToFloatField *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  (this->IntField).field0_0x0.DebugPtr = (UFieldNodeInt *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UToFloatField @ 14632bb20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UToFloatField::~UToFloatField(UToFloatField *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 146330730

UClass * __cdecl UToFloatField::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToFloatField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"ToFloatField",
               &Z_Registration_Info_UClass_UToFloatField.InnerSingleton,
               StaticRegisterNativesUToFloatField,200,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<UToFloatField>,
               InternalVTableHelperCtorCaller<UToFloatField>,local_res8,UFieldNodeFloat::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToFloatField.InnerSingleton;
}

// NewEvaluationGraph @ 1463327b0

FFieldNodeBase * __thiscall
UToFloatField::NewEvaluationGraph
          (UToFloatField *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UFieldNodeInt *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FFieldNodeBase *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  UToFloatField *local_18 [2];
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar8 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar8 == pFVar1) {
LAB_1463327f7:
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_18[0] = this;
      if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
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
      *(UToFloatField **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
      if ((this->IntField).field0_0x0.DebugPtr == (UFieldNodeInt *)0x0) {
        return (FFieldNodeBase *)0x0;
      }
      pFVar6 = ::operator_new(0x18);
      if (pFVar6 == (FFieldNodeBase *)0x0) {
        return (FFieldNodeBase *)0x0;
      }
      pUVar2 = (this->IntField).field0_0x0.DebugPtr;
      lVar7 = (**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
      (pFVar6->Name).ComparisonIndex = 0;
      (pFVar6->Name).Number = 0;
      pFVar6->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
      ::FName::FName(&pFVar6->Name,"");
      pFVar6->_padding_ = (longlong)&___7__FConversionField_HM__6B_;
      pFVar6[1]._padding_ = lVar7;
      return pFVar6;
    }
    if (*(UToFloatField **)pFVar8 == this) {
      local_res8[0] = 0;
      bVar4 = `UToFloatField::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar4) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_1463327f7;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// SetToFloatField @ 146333f10

UToFloatField * __thiscall
UToFloatField::SetToFloatField(UToFloatField *this,UFieldNodeInt *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFieldNodeInt *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->IntField).field0_0x0.DebugPtr = param_1;
    return this;
  }
  (this->IntField).field0_0x0.DebugPtr = param_1;
  return this;
}

// StaticRegisterNativesUToFloatField @ 146334490

void __cdecl UToFloatField::StaticRegisterNativesUToFloatField(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UToFloatField_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetToFloatField @ 146337090

void __cdecl UToFloatField::execSetToFloatField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[4].field_0x20 = pUVar2;
  *(UObject **)param_3 = param_1;
  return;
}

// operator() @ 1504e9cc0

bool __thiscall `UToFloatField::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983859>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983859>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

