// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 10

// StaticClass @ 146327710

UClass * __cdecl UCullingField::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCullingField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"CullingField",
               &Z_Registration_Info_UClass_UCullingField.InnerSingleton,
               StaticRegisterNativesUCullingField,0xd8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCullingField>,
               InternalVTableHelperCtorCaller<UCullingField>,local_res8,UFieldNodeBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCullingField.InnerSingleton;
}

// UCullingField @ 14632a9a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCullingField * __thiscall UCullingField::UCullingField(UCullingField *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->Culling).field0_0x0.DebugPtr = (UFieldNodeBase *)0x0;
  (this->Field).field0_0x0.DebugPtr = (UFieldNodeBase *)0x0;
  return this;
}

// ~UCullingField @ 14632b630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCullingField::~UCullingField(UCullingField *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14632f900

UClass * __cdecl UCullingField::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCullingField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"CullingField",
               &Z_Registration_Info_UClass_UCullingField.InnerSingleton,
               StaticRegisterNativesUCullingField,0xd8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<UCullingField>,
               InternalVTableHelperCtorCaller<UCullingField>,local_res8,UFieldNodeBase::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCullingField.InnerSingleton;
}

// NewEvaluationGraph @ 146330e40

FFieldNodeBase * __thiscall
UCullingField::NewEvaluationGraph
          (UCullingField *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UFieldNodeBase_const_> *pTVar1;
  TObjectPtr<UFieldNodeBase_const_> *pTVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  UFieldNodeBase *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FFieldNodeBase *pFVar9;
  FCullingField<float> *pFVar10;
  FFieldNode<float> *pFVar11;
  FFieldNode<float> *pFVar12;
  FCullingField<UE::Math::TVector<double>_> *pFVar13;
  FFieldNode<UE::Math::TVector<double>_> *pFVar14;
  FCullingField<int> *pFVar15;
  FFieldNode<int> *pFVar16;
  TObjectPtr<UFieldNodeBase_const_> *pTVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  UCullingField *local_28 [2];
  
  pFVar18 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar18 + (longlong)param_1->ArrayNum * 8;
  do {
    if (pFVar18 == pFVar4) {
LAB_146330e9d:
      pFVar4 = (param_1->AllocatorInstance).Data;
      local_28[0] = this;
      if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FFieldNodeBase *)(*pcVar6)();
        return pFVar9;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar8;
      }
      pTVar1 = &this->Culling;
      param_1->ArrayNum = iVar8 + 1;
      *(UCullingField **)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_28[0];
      if (((pTVar1->field0_0x0).DebugPtr != (UFieldNodeBase *)0x0) &&
         (pTVar2 = &this->Field, (pTVar2->field0_0x0).DebugPtr != (UFieldNodeBase *)0x0)) {
        iVar8 = (**(code **)(*(longlong *)(pTVar1->field0_0x0).DebugPtr + 0x4f8))();
        if ((iVar8 == 3) &&
           (iVar8 = (**(code **)(*(longlong *)(pTVar2->field0_0x0).DebugPtr + 0x4f8))(), iVar8 == 3)
           ) {
          pFVar10 = ::operator_new(0x28);
          if (pFVar10 != (FCullingField<float> *)0x0) {
            bVar3 = (this->Operation).Value;
            pFVar11 = (FFieldNode<float> *)
                      (**(code **)(*(longlong *)(pTVar2->field0_0x0).DebugPtr + 0x508))
                                ((pTVar2->field0_0x0).DebugPtr,param_1);
            pFVar12 = (FFieldNode<float> *)
                      (**(code **)(*(longlong *)(pTVar1->field0_0x0).DebugPtr + 0x508))
                                ((pTVar1->field0_0x0).DebugPtr,param_1);
            pFVar10 = FCullingField<float>::FCullingField<float>
                                (pFVar10,pFVar12,pFVar11,(uint)bVar3);
            return (FFieldNodeBase *)pFVar10;
          }
        }
        else {
          pTVar17 = &this->Culling;
          iVar8 = (**(code **)(*(longlong *)(pTVar1->field0_0x0).DebugPtr + 0x4f8))();
          if ((iVar8 == 3) &&
             (iVar8 = (**(code **)(*(longlong *)(pTVar2->field0_0x0).DebugPtr + 0x4f8))(),
             iVar8 == 4)) {
            pFVar13 = ::operator_new(0x28);
            if (pFVar13 != (FCullingField<UE::Math::TVector<double>_> *)0x0) {
              bVar3 = (this->Operation).Value;
              pFVar14 = (FFieldNode<UE::Math::TVector<double>_> *)
                        (**(code **)(*(longlong *)(pTVar2->field0_0x0).DebugPtr + 0x508))
                                  ((pTVar2->field0_0x0).DebugPtr,param_1);
              pFVar11 = (FFieldNode<float> *)
                        (**(code **)(*(longlong *)(pTVar17->field0_0x0).DebugPtr + 0x508))
                                  ((pTVar17->field0_0x0).DebugPtr,param_1);
              pFVar13 = FCullingField<UE::Math::TVector<double>_>::
                        FCullingField<UE::Math::TVector<double>_>
                                  (pFVar13,pFVar11,pFVar14,(uint)bVar3);
              return (FFieldNodeBase *)pFVar13;
            }
          }
          else {
            iVar8 = (**(code **)(*(longlong *)(pTVar17->field0_0x0).DebugPtr + 0x4f8))();
            if ((iVar8 == 3) &&
               ((iVar8 = (**(code **)(*(longlong *)(this->Field).field0_0x0.DebugPtr + 0x4f8))(),
                iVar8 == 2 && (pFVar15 = ::operator_new(0x28), pFVar15 != (FCullingField<int> *)0x0)
                ))) {
              pUVar5 = (this->Field).field0_0x0.DebugPtr;
              bVar3 = (this->Operation).Value;
              pFVar16 = (FFieldNode<int> *)
                        (**(code **)(*(longlong *)pUVar5 + 0x508))(pUVar5,param_1);
              pFVar11 = (FFieldNode<float> *)
                        (**(code **)(*(longlong *)(pTVar17->field0_0x0).DebugPtr + 0x508))
                                  ((pTVar17->field0_0x0).DebugPtr,param_1);
              pFVar15 = FCullingField<int>::FCullingField<int>(pFVar15,pFVar11,pFVar16,(uint)bVar3);
              return (FFieldNodeBase *)pFVar15;
            }
          }
        }
      }
      return (FFieldNodeBase *)0x0;
    }
    if (*(UCullingField **)pFVar18 == this) {
      local_res8[0] = 0;
      bVar7 = `UCullingField::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar7) {
        return (FFieldNodeBase *)0x0;
      }
      goto LAB_146330e9d;
    }
    pFVar18 = pFVar18 + 8;
  } while( true );
}

// SetCullingField @ 146333bb0

UCullingField * __thiscall
UCullingField::SetCullingField
          (UCullingField *this,UFieldNodeBase *param_1,UFieldNodeBase *param_2,
          EFieldCullingOperationType param_3)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFieldNodeBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Culling).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UFieldNodeBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Field).field0_0x0.DebugPtr = param_2;
  (this->Operation).Value = (uchar)param_3;
  return this;
}

// StaticRegisterNativesUCullingField @ 1463340f0

void __cdecl UCullingField::StaticRegisterNativesUCullingField(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCullingField_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Type @ 146334630

EFieldType __thiscall UCullingField::Type(UCullingField *this)

{
  UFieldNodeBase *pUVar1;
  EFieldType EVar2;
  
  pUVar1 = (this->Field).field0_0x0.DebugPtr;
  if (pUVar1 != (UFieldNodeBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014633463f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar2 = (**(code **)(*(longlong *)pUVar1 + 0x4f8))();
    return EVar2;
  }
  return EField_None;
}

// execSetCullingField @ 1463360d0

void __cdecl UCullingField::execSetCullingField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 local_res8 [8];
  UObject *local_res10;
  UObject *local_res18 [2];
  
  local_res18[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
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
  pUVar4 = local_res18[0];
  pUVar3 = local_res10;
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18[0]);
  }
  *(UObject **)&param_1[4].field_0x20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)(param_1 + 5) = pUVar3;
  param_1[5].field_0x8 = uVar2;
  *(UObject **)param_3 = param_1;
  return;
}

// operator() @ 1504e9a80

bool __thiscall `UCullingField::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983879>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983879>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

