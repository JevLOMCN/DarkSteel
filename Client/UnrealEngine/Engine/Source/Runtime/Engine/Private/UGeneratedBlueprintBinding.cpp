// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147c19da0

UClass * __cdecl UGeneratedBlueprintBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeneratedBlueprintBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GeneratedBlueprintBinding",
               &Z_Registration_Info_UClass_UGeneratedBlueprintBinding.InnerSingleton,
               StaticRegisterNativesUGeneratedBlueprintBinding,0x38,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UGeneratedBlueprintBinding>,
               InternalVTableHelperCtorCaller<UGeneratedBlueprintBinding>,local_res8,
               UDynamicBlueprintBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeneratedBlueprintBinding.InnerSingleton;
}

// UGeneratedBlueprintBinding @ 147c30800

UGeneratedBlueprintBinding * __thiscall
UGeneratedBlueprintBinding::UGeneratedBlueprintBinding
          (UGeneratedBlueprintBinding *this,FVTableHelper *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UGeneratedBlueprintBinding__6B_;
  (this->GeneratedBlueprintBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedBlueprintBindings).ArrayNum = 0;
  (this->GeneratedBlueprintBindings).ArrayMax = 0;
  return this;
}

// UGeneratedBlueprintBinding @ 147c30840

UGeneratedBlueprintBinding * __thiscall
UGeneratedBlueprintBinding::UGeneratedBlueprintBinding
          (UGeneratedBlueprintBinding *this,FObjectInitializer *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this,param_1);
  this->_padding_ = (longlong)&___7UGeneratedBlueprintBinding__6B_;
  (this->GeneratedBlueprintBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedBlueprintBindings).ArrayNum = 0;
  (this->GeneratedBlueprintBindings).ArrayMax = 0;
  return this;
}

// ~UGeneratedBlueprintBinding @ 147c31b40

void __thiscall
UGeneratedBlueprintBinding::~UGeneratedBlueprintBinding(UGeneratedBlueprintBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UGeneratedBlueprintBinding__6B_;
  pFVar1 = (this->GeneratedBlueprintBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDynamicBlueprintBinding::~UDynamicBlueprintBinding((UDynamicBlueprintBinding *)this);
  return;
}

// BindDynamicDelegates @ 147c386d0

void __thiscall
UGeneratedBlueprintBinding::BindDynamicDelegates(UGeneratedBlueprintBinding *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  FMulticastDelegateProperty *pFVar3;
  UFunction *pUVar4;
  FName *pFVar5;
  FName *pFVar6;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FWeakObjectPtr local_70;
  FName local_68;
  undefined1 local_60 [24];
  FReadAccessScope local_48;
  
  if (param_1 != (UObject *)0x0) {
    pFVar5 = (FName *)(this->GeneratedBlueprintBindings).AllocatorInstance.Data;
    iVar1 = (this->GeneratedBlueprintBindings).ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 2;
    while( true ) {
      if ((this->GeneratedBlueprintBindings).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FGeneratedBlueprintDelegateBinding_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_res10);
      }
      if (pFVar5 == pFVar6) break;
      pFVar3 = FindFProperty<FMulticastDelegateProperty>
                         (*(UStruct **)&param_1->field_0x10,*pFVar5,Default);
      if ((pFVar3 != (FMulticastDelegateProperty *)0x0) &&
         (pUVar4 = UClass::FindFunctionByName
                             (*(UClass **)&param_1->field_0x10,pFVar5[1],IncludeSuper),
         pUVar4 != (UFunction *)0x0)) {
        local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_70.ObjectIndex = 0;
        local_70.ObjectSerialNumber = 0;
        local_68.ComparisonIndex.Value = 0;
        local_68.Number = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_78,(FWriteAccessScope *)local_60);
        local_res10 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res10);
        local_68 = pFVar5[1];
        if (local_60[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_60._8_8_,(FDestructionSentinel *)local_60
                    );
        }
        local_60._0_8_ = 0;
        pcVar2 = *(code **)(pFVar3->_padding_ + 0x1e0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  (&local_78,&local_48);
        local_60._8_4_ = local_70.ObjectIndex;
        local_60._12_4_ = local_70.ObjectSerialNumber;
        local_60._16_4_ = local_68.ComparisonIndex.Value;
        local_60._20_4_ = local_68.Number;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        (*pcVar2)(pFVar3,local_60,param_1,0);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
      }
      pFVar5 = pFVar5 + 2;
    }
  }
  return;
}

// GetPrivateStaticClass @ 147c5a3c0

UClass * __cdecl UGeneratedBlueprintBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeneratedBlueprintBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GeneratedBlueprintBinding",
               &Z_Registration_Info_UClass_UGeneratedBlueprintBinding.InnerSingleton,
               StaticRegisterNativesUGeneratedBlueprintBinding,0x38,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UGeneratedBlueprintBinding>,
               InternalVTableHelperCtorCaller<UGeneratedBlueprintBinding>,local_res8,
               UDynamicBlueprintBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeneratedBlueprintBinding.InnerSingleton;
}

// StaticRegisterNativesUGeneratedBlueprintBinding @ 147c880d0

void __cdecl UGeneratedBlueprintBinding::StaticRegisterNativesUGeneratedBlueprintBinding(void)

{
  return;
}

// UnbindDynamicDelegates @ 147c8d720

void __thiscall
UGeneratedBlueprintBinding::UnbindDynamicDelegates
          (UGeneratedBlueprintBinding *this,UObject *param_1)

{
  int iVar1;
  FMulticastDelegateProperty *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FWeakObjectPtr local_50;
  FName local_48;
  FDestructionSentinel local_40;
  
  if (param_1 != (UObject *)0x0) {
    pFVar3 = (FName *)(this->GeneratedBlueprintBindings).AllocatorInstance.Data;
    iVar1 = (this->GeneratedBlueprintBindings).ArrayNum;
    pFVar4 = pFVar3 + (longlong)iVar1 * 2;
    while( true ) {
      if ((this->GeneratedBlueprintBindings).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FGeneratedBlueprintDelegateBinding_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_res10);
      }
      if (pFVar3 == pFVar4) break;
      pFVar2 = FindFProperty<FMulticastDelegateProperty>
                         (*(UStruct **)&param_1->field_0x10,*pFVar3,Default);
      if (pFVar2 != (FMulticastDelegateProperty *)0x0) {
        local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_50.ObjectIndex = 0;
        local_50.ObjectSerialNumber = 0;
        local_48.ComparisonIndex.Value = 0;
        local_48.Number = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_58,(FWriteAccessScope *)&local_40);
        local_res10 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_res10);
        local_48 = pFVar3[1];
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        (**(code **)(pFVar2->_padding_ + 0x1e8))(pFVar2,&local_58,param_1,0);
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
      }
      pFVar3 = pFVar3 + 2;
    }
  }
  return;
}

// UnbindDynamicDelegatesForProperty @ 147c8d860

void __thiscall
UGeneratedBlueprintBinding::UnbindDynamicDelegatesForProperty
          (UGeneratedBlueprintBinding *this,UObject *param_1,FObjectProperty *param_2)

{
  return;
}

