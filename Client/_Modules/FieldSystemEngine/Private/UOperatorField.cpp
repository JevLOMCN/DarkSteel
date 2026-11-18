// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 13

// StaticClass @ 1463274d0

UClass * __cdecl UOperatorField::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOperatorField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"OperatorField",
               &Z_Registration_Info_UClass_UOperatorField.InnerSingleton,
               StaticRegisterNativesUOperatorField,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UOperatorField>,
               InternalVTableHelperCtorCaller<UOperatorField>,local_res8,UFieldNodeBase::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOperatorField.InnerSingleton;
}

// UOperatorField @ 14632b130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UOperatorField * __thiscall
UOperatorField::UOperatorField(UOperatorField *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->RightField).field0_0x0.DebugPtr = (UFieldNodeBase *)0x0;
  (this->LeftField).field0_0x0.DebugPtr = (UFieldNodeBase *)0x0;
  return this;
}

// ~UOperatorField @ 14632b9d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UOperatorField::~UOperatorField(UOperatorField *this)

{
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1463301f0

UClass * __cdecl UOperatorField::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOperatorField.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"OperatorField",
               &Z_Registration_Info_UClass_UOperatorField.InnerSingleton,
               StaticRegisterNativesUOperatorField,0xe0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UOperatorField>,
               InternalVTableHelperCtorCaller<UOperatorField>,local_res8,UFieldNodeBase::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOperatorField.InnerSingleton;
}

// NewEvaluationGraph @ 146331370

/* WARNING: Type propagation algorithm not settling */

FFieldNodeBase * __thiscall
UOperatorField::NewEvaluationGraph
          (UOperatorField *this,TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UFieldNodeBase *pUVar2;
  UFieldNodeBase *pUVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  FFieldNodeBase *pFVar9;
  FSumVector *pFVar10;
  FFieldNode<UE::Math::TVector<double>_> *pFVar11;
  FFieldNode<float> *pFVar12;
  FFieldNode<float> *pFVar13;
  FSumScalar *pFVar14;
  FScriptContainerElement *pFVar15;
  TObjectPtr<UFieldNodeBase_const_> *pTVar16;
  TObjectPtr<UFieldNodeBase_const_> *pTVar17;
  EFieldOperationType EVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UOperatorField *local_48 [2];
  
  pFVar15 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar15 + (longlong)param_1->ArrayNum * 8;
  for (; pFVar15 != pFVar1; pFVar15 = pFVar15 + 8) {
    if (*(UOperatorField **)pFVar15 == this) {
      local_res8[0] = 0;
      bVar5 = `UOperatorField::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar5) {
        return (FFieldNodeBase *)0x0;
      }
      break;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_48[0] = this;
  if (((pFVar1 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
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
  bVar5 = true;
  *(UOperatorField **)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_48[0];
  pUVar2 = (this->RightField).field0_0x0.DebugPtr;
  if (((pUVar2 != (UFieldNodeBase *)0x0) &&
      (iVar8 = (**(code **)(*(longlong *)pUVar2 + 0x4f8))(), iVar8 == 2)) &&
     (bVar6 = `UOperatorField::NewEvaluationGraph'::__l8::<lambda_2>::operator()(local_res10),
     !bVar6)) {
    bVar5 = false;
  }
  pUVar2 = (this->LeftField).field0_0x0.DebugPtr;
  if (pUVar2 != (UFieldNodeBase *)0x0) {
    iVar8 = (**(code **)(*(longlong *)pUVar2 + 0x4f8))();
    if (iVar8 == 2) {
      bVar6 = `UOperatorField::NewEvaluationGraph'::__l11::<lambda_3>::operator()(local_res18);
      bVar7 = 0;
      if (bVar6) goto LAB_1463314e1;
    }
    else {
LAB_1463314e1:
      bVar7 = 1;
    }
    bVar5 = (bool)(bVar5 & bVar7);
  }
  pTVar17 = &this->RightField;
  pTVar16 = &this->LeftField;
  if (!bVar5) {
    return (FFieldNodeBase *)0x0;
  }
  pUVar2 = (this->RightField).field0_0x0.DebugPtr;
  pUVar3 = (this->LeftField).field0_0x0.DebugPtr;
  if (pUVar2 == (UFieldNodeBase *)0x0) {
    if (pUVar3 == (UFieldNodeBase *)0x0) {
      return (FFieldNodeBase *)0x0;
    }
    iVar8 = (**(code **)(*(longlong *)pUVar3 + 0x4f8))();
    if (iVar8 != 3) {
      iVar8 = (**(code **)(*(longlong *)(pTVar16->field0_0x0).DebugPtr + 0x4f8))();
      if (iVar8 != 4) {
        return (FFieldNodeBase *)0x0;
      }
      pFVar10 = ::operator_new(0x38);
      if (pFVar10 == (FSumVector *)0x0) {
        return (FFieldNodeBase *)0x0;
      }
      pUVar2 = (pTVar16->field0_0x0).DebugPtr;
      bVar7 = (this->Operation).Value;
      if (pUVar2 == (UFieldNodeBase *)0x0) {
        pFVar11 = (FFieldNode<UE::Math::TVector<double>_> *)0x0;
      }
      else {
        pFVar11 = (FFieldNode<UE::Math::TVector<double>_> *)
                  (**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
      }
      pFVar10 = FSumVector::FSumVector
                          (pFVar10,this->Magnitude,(FFieldNode<float> *)0x0,
                           (FFieldNode<UE::Math::TVector<double>_> *)0x0,pFVar11,(uint)bVar7);
      return (FFieldNodeBase *)pFVar10;
    }
    pFVar14 = ::operator_new(0x30);
    if (pFVar14 == (FSumScalar *)0x0) {
      return (FFieldNodeBase *)0x0;
    }
    pUVar2 = (pTVar16->field0_0x0).DebugPtr;
    EVar18 = (EFieldOperationType)(this->Operation).Value;
    if (pUVar2 == (UFieldNodeBase *)0x0) {
      pFVar12 = (FFieldNode<float> *)0x0;
      pFVar13 = (FFieldNode<float> *)0x0;
    }
    else {
      pFVar12 = (FFieldNode<float> *)(**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
      pFVar13 = (FFieldNode<float> *)0x0;
    }
LAB_1463317f7:
    pFVar14 = FSumScalar::FSumScalar(pFVar14,this->Magnitude,pFVar13,pFVar12,EVar18);
    return (FFieldNodeBase *)pFVar14;
  }
  if (pUVar3 == (UFieldNodeBase *)0x0) {
    iVar8 = (**(code **)(*(longlong *)pUVar2 + 0x4f8))(pUVar2);
    if (iVar8 == 3) {
      pFVar14 = ::operator_new(0x30);
      if (pFVar14 == (FSumScalar *)0x0) {
        return (FFieldNodeBase *)0x0;
      }
      pUVar2 = (pTVar17->field0_0x0).DebugPtr;
      bVar7 = (this->Operation).Value;
      if (pUVar2 == (UFieldNodeBase *)0x0) {
        pFVar12 = (FFieldNode<float> *)0x0;
      }
      else {
        pFVar12 = (FFieldNode<float> *)(**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
      }
      pFVar14 = FSumScalar::FSumScalar
                          (pFVar14,this->Magnitude,pFVar12,(FFieldNode<float> *)0x0,(uint)bVar7);
      return (FFieldNodeBase *)pFVar14;
    }
    iVar8 = (**(code **)(*(longlong *)(pTVar17->field0_0x0).DebugPtr + 0x4f8))();
    if (iVar8 != 4) {
      return (FFieldNodeBase *)0x0;
    }
    pFVar10 = ::operator_new(0x38);
    pFVar12 = (FFieldNode<float> *)0x0;
    if (pFVar10 == (FSumVector *)0x0) {
      return (FFieldNodeBase *)0x0;
    }
    pUVar2 = (pTVar17->field0_0x0).DebugPtr;
    EVar18 = (EFieldOperationType)(this->Operation).Value;
    if (pUVar2 == (UFieldNodeBase *)0x0) {
      pFVar13 = (FFieldNode<float> *)0x0;
    }
    else {
      pFVar12 = (FFieldNode<float> *)(**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
      pFVar13 = (FFieldNode<float> *)0x0;
    }
  }
  else {
    iVar8 = (**(code **)(*(longlong *)pUVar2 + 0x4f8))();
    if ((iVar8 == 3) ||
       (iVar8 = (**(code **)(*(longlong *)(pTVar17->field0_0x0).DebugPtr + 0x4f8))(), iVar8 == 1)) {
      pTVar16 = &this->LeftField;
      iVar8 = (**(code **)(*(longlong *)(pTVar16->field0_0x0).DebugPtr + 0x4f8))();
      if ((iVar8 == 3) ||
         (iVar8 = (**(code **)(*(longlong *)(pTVar16->field0_0x0).DebugPtr + 0x4f8))(), iVar8 == 1))
      {
        pFVar14 = ::operator_new(0x30);
        if (pFVar14 == (FSumScalar *)0x0) {
          return (FFieldNodeBase *)0x0;
        }
        pUVar2 = (pTVar16->field0_0x0).DebugPtr;
        pFVar13 = (FFieldNode<float> *)0x0;
        bVar7 = (this->Operation).Value;
        pFVar12 = pFVar13;
        if (pUVar2 != (UFieldNodeBase *)0x0) {
          pFVar12 = (FFieldNode<float> *)(**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
        }
        pUVar2 = (this->RightField).field0_0x0.DebugPtr;
        if (pUVar2 != (UFieldNodeBase *)0x0) {
          pFVar13 = (FFieldNode<float> *)(**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
        }
        EVar18 = (EFieldOperationType)bVar7;
        goto LAB_1463317f7;
      }
    }
    pTVar17 = &this->RightField;
    pTVar16 = &this->LeftField;
    iVar8 = (**(code **)(*(longlong *)(pTVar17->field0_0x0).DebugPtr + 0x4f8))();
    if ((iVar8 == 3) &&
       (iVar8 = (**(code **)(*(longlong *)(pTVar16->field0_0x0).DebugPtr + 0x4f8))(), iVar8 == 4)) {
      pFVar10 = ::operator_new(0x38);
      if (pFVar10 == (FSumVector *)0x0) {
        return (FFieldNodeBase *)0x0;
      }
      pUVar2 = (pTVar16->field0_0x0).DebugPtr;
      pFVar12 = (FFieldNode<float> *)0x0;
      bVar7 = (this->Operation).Value;
      pFVar11 = (FFieldNode<UE::Math::TVector<double>_> *)pFVar12;
      if (pUVar2 != (UFieldNodeBase *)0x0) {
        pFVar11 = (FFieldNode<UE::Math::TVector<double>_> *)
                  (**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
      }
      pUVar2 = (pTVar17->field0_0x0).DebugPtr;
      if (pUVar2 != (UFieldNodeBase *)0x0) {
        pFVar12 = (FFieldNode<float> *)(**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
      }
      pFVar10 = FSumVector::FSumVector
                          (pFVar10,this->Magnitude,pFVar12,
                           (FFieldNode<UE::Math::TVector<double>_> *)0x0,pFVar11,(uint)bVar7);
      return (FFieldNodeBase *)pFVar10;
    }
    iVar8 = (**(code **)(*(longlong *)(pTVar17->field0_0x0).DebugPtr + 0x4f8))();
    if ((iVar8 != 4) ||
       (iVar8 = (**(code **)(*(longlong *)(pTVar16->field0_0x0).DebugPtr + 0x4f8))(), iVar8 != 3)) {
      iVar8 = (**(code **)(*(longlong *)(pTVar17->field0_0x0).DebugPtr + 0x4f8))();
      if ((iVar8 != 4) &&
         (iVar8 = (**(code **)(*(longlong *)(pTVar17->field0_0x0).DebugPtr + 0x4f8))(), iVar8 != 1))
      {
        return (FFieldNodeBase *)0x0;
      }
      iVar8 = (**(code **)(*(longlong *)(pTVar16->field0_0x0).DebugPtr + 0x4f8))();
      if ((iVar8 != 4) &&
         (iVar8 = (**(code **)(*(longlong *)(this->RightField).field0_0x0.DebugPtr + 0x4f8))(),
         iVar8 != 1)) {
        return (FFieldNodeBase *)0x0;
      }
      pFVar10 = ::operator_new(0x38);
      pFVar12 = (FFieldNode<float> *)0x0;
      if (pFVar10 == (FSumVector *)0x0) {
        return (FFieldNodeBase *)0x0;
      }
      pUVar2 = (this->LeftField).field0_0x0.DebugPtr;
      bVar7 = (this->Operation).Value;
      pFVar11 = (FFieldNode<UE::Math::TVector<double>_> *)pFVar12;
      if (pUVar2 != (UFieldNodeBase *)0x0) {
        pFVar11 = (FFieldNode<UE::Math::TVector<double>_> *)
                  (**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
      }
      pUVar2 = (this->RightField).field0_0x0.DebugPtr;
      if (pUVar2 != (UFieldNodeBase *)0x0) {
        pFVar12 = (FFieldNode<float> *)(**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
      }
      EVar18 = (EFieldOperationType)bVar7;
      pFVar13 = (FFieldNode<float> *)0x0;
      goto LAB_1463316b8;
    }
    pFVar10 = ::operator_new(0x38);
    pFVar13 = (FFieldNode<float> *)0x0;
    if (pFVar10 == (FSumVector *)0x0) {
      return (FFieldNodeBase *)0x0;
    }
    pUVar2 = (pTVar17->field0_0x0).DebugPtr;
    EVar18 = (EFieldOperationType)(this->Operation).Value;
    pFVar12 = pFVar13;
    if (pUVar2 != (UFieldNodeBase *)0x0) {
      pFVar12 = (FFieldNode<float> *)(**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
    }
    pUVar2 = (this->LeftField).field0_0x0.DebugPtr;
    if (pUVar2 != (UFieldNodeBase *)0x0) {
      pFVar13 = (FFieldNode<float> *)(**(code **)(*(longlong *)pUVar2 + 0x508))(pUVar2,param_1);
    }
  }
  pFVar11 = (FFieldNode<UE::Math::TVector<double>_> *)0x0;
LAB_1463316b8:
  pFVar10 = FSumVector::FSumVector
                      (pFVar10,this->Magnitude,pFVar13,
                       (FFieldNode<UE::Math::TVector<double>_> *)pFVar12,pFVar11,EVar18);
  return (FFieldNodeBase *)pFVar10;
}

// ResultsExpector @ 146333810

bool __thiscall UOperatorField::ResultsExpector(UOperatorField *this)

{
  return true;
}

// SetOperatorField @ 146333ce0

UOperatorField * __thiscall
UOperatorField::SetOperatorField
          (UOperatorField *this,float param_1,UFieldNodeBase *param_2,UFieldNodeBase *param_3,
          EFieldOperationType param_4)

{
  this->Magnitude = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UFieldNodeBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (this->RightField).field0_0x0.DebugPtr = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UFieldNodeBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->LeftField).field0_0x0.DebugPtr = param_2;
  (this->Operation).Value = (undefined1)param_4;
  return this;
}

// StaticRegisterNativesUOperatorField @ 1463342d0

void __cdecl UOperatorField::StaticRegisterNativesUOperatorField(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UOperatorField_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Type @ 1463346d0

EFieldType __thiscall UOperatorField::Type(UOperatorField *this)

{
  UFieldNodeBase *pUVar1;
  int iVar2;
  EFieldType EVar3;
  
  pUVar1 = (this->RightField).field0_0x0.DebugPtr;
  if ((pUVar1 != (UFieldNodeBase *)0x0) &&
     (iVar2 = (**(code **)(*(longlong *)pUVar1 + 0x4f8))(), iVar2 == 4)) {
    return EField_FVector;
  }
  pUVar1 = (this->LeftField).field0_0x0.DebugPtr;
  if ((pUVar1 != (UFieldNodeBase *)0x0) &&
     (iVar2 = (**(code **)(*(longlong *)pUVar1 + 0x4f8))(), iVar2 == 4)) {
    return EField_FVector;
  }
  pUVar1 = (this->RightField).field0_0x0.DebugPtr;
  if ((pUVar1 != (UFieldNodeBase *)0x0) &&
     (iVar2 = (**(code **)(*(longlong *)pUVar1 + 0x4f8))(), iVar2 == 3)) {
    return EField_Float;
  }
  pUVar1 = (this->LeftField).field0_0x0.DebugPtr;
  if (pUVar1 == (UFieldNodeBase *)0x0) {
    return EField_None;
  }
  iVar2 = (**(code **)(*(longlong *)pUVar1 + 0x4f8))();
  EVar3 = EField_None;
  if (iVar2 == 3) {
    EVar3 = EField_Float;
  }
  return EVar3;
}

// execSetOperatorField @ 146336650

void __cdecl UOperatorField::execSetOperatorField(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  UObject *local_res18;
  UObject *local_res20;
  
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
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
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
  pUVar4 = local_res20;
  pUVar3 = local_res18;
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[4].field_0x20 = local_res10[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  *(UObject **)(param_1 + 5) = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)&param_1[5].field_0x8 = pUVar3;
  param_1[5].field_0x10 = uVar2;
  *(UObject **)param_3 = param_1;
  return;
}

// operator() @ 1504e9b00

bool __thiscall `UOperatorField::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983715>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983715>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e9e80

bool __thiscall `UOperatorField::NewEvaluationGraph'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983721>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983721>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e9f00

bool __thiscall `UOperatorField::NewEvaluationGraph'::__l11::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983725>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983725>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

