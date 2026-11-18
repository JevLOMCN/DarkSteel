// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 9

// StaticClass @ 146327590

UClass * __cdecl UToIntegerField::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToIntegerField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"ToIntegerField",
               &Z_Registration_Info_UClass_UToIntegerField.InnerSingleton,
               StaticRegisterNativesUToIntegerField,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UToIntegerField>,
               InternalVTableHelperCtorCaller<UToIntegerField>,local_res8,UFieldNodeInt::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToIntegerField.InnerSingleton;
}

// UToIntegerField @ 14632b350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UToIntegerField * __thiscall
UToIntegerField::UToIntegerField(UToIntegerField *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  (this->FloatField).field0_0x0.DebugPtr = (UFieldNodeFloat *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UToIntegerField @ 14632bb50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UToIntegerField::~UToIntegerField(UToIntegerField *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1463307f0

UClass * __cdecl UToIntegerField::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToIntegerField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"ToIntegerField",
               &Z_Registration_Info_UClass_UToIntegerField.InnerSingleton,
               StaticRegisterNativesUToIntegerField,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UToIntegerField>,
               InternalVTableHelperCtorCaller<UToIntegerField>,local_res8,UFieldNodeInt::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToIntegerField.InnerSingleton;
}

// NewEvaluationGraph @ 146332950

FFieldNodeBase * __thiscall
UToIntegerField::NewEvaluationGraph
          (UToIntegerField *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FScriptContainerElement *pFVar1;
  UFieldNodeFloat *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FFieldNodeBase *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  UToIntegerField *local_18 [2];
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar8 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar8 == pFVar1) {
LAB_146332997:
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
      *(UToIntegerField **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
      if ((this->FloatField).field0_0x0.DebugPtr == (UFieldNodeFloat *)0x0) {
        return (FFieldNodeBase *)0x0;
      }
      pFVar6 = ::operator_new(0x18);
      if (pFVar6 == (FFieldNodeBase *)0x0) {
        return (FFieldNodeBase *)0x0;
      }
      pUVar2 = (this->FloatField).field0_0x0.DebugPtr;
      lVar7 = (**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
      (pFVar6->Name).ComparisonIndex = 0;
      (pFVar6->Name).Number = 0;
      pFVar6->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
      ::FName::FName(&pFVar6->Name,"");
      pFVar6->_padding_ = (longlong)&___7__FConversionField_MH__6B_;
      pFVar6[1]._padding_ = lVar7;
      return pFVar6;
    }
    if (*(UToIntegerField **)pFVar8 == this) {
      local_res8[0] = 0;
      bVar4 = `UToIntegerField::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar4) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_146332997;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// SetToIntegerField @ 146333f70

UToIntegerField * __thiscall
UToIntegerField::SetToIntegerField(UToIntegerField *this,UFieldNodeFloat *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFieldNodeFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->FloatField).field0_0x0.DebugPtr = param_1;
    return this;
  }
  (this->FloatField).field0_0x0.DebugPtr = param_1;
  return this;
}

// StaticRegisterNativesUToIntegerField @ 1463344d0

void __cdecl UToIntegerField::StaticRegisterNativesUToIntegerField(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UToIntegerField_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetToIntegerField @ 146337140

void __cdecl UToIntegerField::execSetToIntegerField(UObject *param_1,FFrame *param_2,void *param_3)

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

// operator() @ 1504e9d00

bool __thiscall `UToIntegerField::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983839>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983839>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

