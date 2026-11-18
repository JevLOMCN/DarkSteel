// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 12

// StaticClass @ 14a200230

UClass * __cdecl UControlRigValidator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigValidator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigValidator",
               &Z_Registration_Info_UClass_UControlRigValidator.InnerSingleton,
               StaticRegisterNativesUControlRigValidator,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigValidator>,
               InternalVTableHelperCtorCaller<UControlRigValidator>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigValidator.InnerSingleton;
}

// UControlRigValidator @ 14a222fc0

UControlRigValidator * __thiscall
UControlRigValidator::UControlRigValidator(UControlRigValidator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigValidator__6B_;
  (this->Passes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Passes).ArrayNum = 0;
  (this->Passes).ArrayMax = 0;
  *(undefined8 *)&(this->ValidationContext).ClearDelegate = 0;
  *(undefined8 *)&(this->ValidationContext).ClearDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->ValidationContext).ClearDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->ValidationContext).ReportDelegate = 0;
  *(undefined8 *)&(this->ValidationContext).ReportDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->ValidationContext).ReportDelegate.field_0x10 = 0;
  (this->ValidationContext).DrawInterface = (FRigVMDrawInterface *)0x0;
  (this->WeakControlRig).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UControlRigValidator @ 14a223010

UControlRigValidator * __thiscall
UControlRigValidator::UControlRigValidator(UControlRigValidator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigValidator__6B_;
  (this->Passes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Passes).ArrayNum = 0;
  (this->Passes).ArrayMax = 0;
  *(undefined8 *)&(this->ValidationContext).ClearDelegate = 0;
  *(undefined8 *)&(this->ValidationContext).ClearDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->ValidationContext).ClearDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->ValidationContext).ReportDelegate = 0;
  *(undefined8 *)&(this->ValidationContext).ReportDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->ValidationContext).ReportDelegate.field_0x10 = 0;
  (this->ValidationContext).DrawInterface = (FRigVMDrawInterface *)0x0;
  (this->WeakControlRig).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UControlRigValidator @ 14a226e80

void __thiscall UControlRigValidator::~UControlRigValidator(UControlRigValidator *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UControlRigValidator__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ValidationContext).ReportDelegate)
  ;
  pvVar1 = *(void **)&(this->ValidationContext).ReportDelegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ValidationContext).ReportDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ValidationContext);
  pvVar1 = *(void **)&(this->ValidationContext).ClearDelegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValidationContext);
  pFVar2 = (this->Passes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddPass @ 14a23c540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UControlRigValidationPass * __thiscall
UControlRigValidator::AddPass(UControlRigValidator *this,UClass *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UControlRigValidationPass *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStack_128 [32];
  UObject **local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [8];
  UObject *local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((param_1 == (UClass *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigValidationPass.cpp"
                         ,0x55,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UControlRigValidationPass *)(*pcVar3)();
    return pUVar6;
  }
  pFVar12 = (this->Passes).AllocatorInstance.Data;
  iVar5 = (this->Passes).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->Passes).ArrayNum != iVar5) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UControlRigValidationPass>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_d8);
    }
    if (pFVar12 == pFVar2) break;
    if (*(UClass **)&(*(UControlRigValidationPass **)pFVar12)->field_0x10 == param_1) {
      return *(UControlRigValidationPass **)pFVar12;
    }
    pFVar12 = pFVar12 + 8;
  }
  local_c8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = UControlRigValidationPass::StaticClass();
  CheckIsClassChildOf_Internal(pUVar7,param_1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,param_1);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  local_d0 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  pFVar2 = (this->Passes).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_d0) &&
     (lVar11 = (longlong)(this->Passes).ArrayMax,
     (FScriptContainerElement *)&local_d0 < pFVar2 + lVar11 * 8)) {
    local_f0 = (longlong)(this->Passes).ArrayNum;
    local_e8 = 8;
    local_108 = &local_d0;
    local_100 = pFVar2;
    local_f8 = lVar11;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UControlRigValidationPass *)(*pcVar3)();
      return pUVar6;
    }
  }
  iVar5 = (this->Passes).ArrayNum;
  piVar1 = &(this->Passes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Passes).AllocatorInstance,piVar1);
  }
  (this->Passes).ArrayNum = iVar5 + 1;
  *(UObject **)((this->Passes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_d0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_d0);
  }
  pcVar3 = *(code **)(*(longlong *)pUVar8 + 0x2b0);
  pUVar9 = FWeakObjectPtr::Get(&(this->WeakControlRig).WeakPtr);
  (*pcVar3)(pUVar8,pUVar9,&this->ValidationContext);
  pcVar3 = *(code **)(*(longlong *)pUVar8 + 0x2b8);
  pUVar9 = FWeakObjectPtr::Get(&(this->WeakControlRig).WeakPtr);
  (*pcVar3)(pUVar8,pUVar9,&this->ValidationContext);
  return (UControlRigValidationPass *)pUVar8;
}

// FindPass @ 14a25c330

UControlRigValidationPass * __thiscall
UControlRigValidator::FindPass(UControlRigValidator *this,UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Passes).AllocatorInstance.Data;
  iVar2 = (this->Passes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Passes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UControlRigValidationPass>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(UClass **)&(*(UControlRigValidationPass **)pFVar3)->field_0x10 == param_1) {
      return *(UControlRigValidationPass **)pFVar3;
    }
    pFVar3 = pFVar3 + 8;
  }
  return (UControlRigValidationPass *)0x0;
}

// GetPrivateStaticClass @ 14a268190

UClass * __cdecl UControlRigValidator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigValidator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigValidator",
               &Z_Registration_Info_UClass_UControlRigValidator.InnerSingleton,
               StaticRegisterNativesUControlRigValidator,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigValidator>,
               InternalVTableHelperCtorCaller<UControlRigValidator>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigValidator.InnerSingleton;
}

// OnControlRigExecuted @ 14a277ac0

void __thiscall
UControlRigValidator::OnControlRigExecuted
          (UControlRigValidator *this,URigVMHost *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  URigVMHost *pUVar5;
  uint uVar6;
  longlong lVar7;
  
  pUVar5 = (URigVMHost *)FWeakObjectPtr::Get(&(this->WeakControlRig).WeakPtr);
  if (((pUVar5 != (URigVMHost *)0x0) && (pUVar5 == param_1)) &&
     (uVar6 = 0, 0 < (this->Passes).ArrayNum)) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Passes).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->Passes).AllocatorInstance.Data + lVar7);
      (**(code **)(*plVar1 + 0x2c0))(plVar1,pUVar5,param_2,&this->ValidationContext);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->Passes).ArrayNum);
  }
  return;
}

// OnControlRigInitialized @ 14a277ba0

void __thiscall
UControlRigValidator::OnControlRigInitialized
          (UControlRigValidator *this,URigVMHost *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  URigVMHost *pUVar5;
  uint uVar6;
  longlong lVar7;
  FReadAccessScope local_28;
  
  pUVar5 = (URigVMHost *)FWeakObjectPtr::Get(&(this->WeakControlRig).WeakPtr);
  if ((pUVar5 != (URigVMHost *)0x0) && (pUVar5 == param_1)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ValidationContext,
               &local_28);
    if ((*(int *)&(this->ValidationContext).ClearDelegate.field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->ValidationContext).ClearDelegate.field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    uVar6 = 0;
    if (0 < (this->Passes).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->Passes).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->Passes).AllocatorInstance.Data + lVar7);
        (**(code **)(*plVar1 + 0x2b8))(plVar1,pUVar5,&this->ValidationContext);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->Passes).ArrayNum);
    }
  }
  return;
}

// RemovePass @ 14a286760

void __thiscall UControlRigValidator::RemovePass(UControlRigValidator *this,UClass *param_1)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  UPackage *pUVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 local_res18 [16];
  UObject *local_48 [2];
  
  pFVar8 = (this->Passes).AllocatorInstance.Data;
  iVar1 = (this->Passes).ArrayNum;
  pFVar3 = pFVar8 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Passes).ArrayNum != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UControlRigValidationPass>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar3) {
      return;
    }
    pUVar2 = *(UObject **)pFVar8;
    if (*(UClass **)&pUVar2->field_0x10 == param_1) break;
    pFVar8 = pFVar8 + 8;
  }
  local_48[0] = pUVar2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pFVar3 = (this->Passes).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)(this->Passes).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (this->Passes).ArrayNum;
  if (iVar1 != 0) {
    pFVar3 = (this->Passes).AllocatorInstance.Data;
    iVar12 = 0;
    bVar5 = *(UObject **)pFVar3 != local_48[0];
    lVar9 = 0;
    pUVar6 = local_48[0];
    iVar10 = 0;
    do {
      iVar11 = iVar10;
      do {
        lVar9 = lVar9 + 1;
        iVar11 = iVar11 + 1;
        if (iVar1 <= lVar9) break;
      } while (bVar5 == (*(UObject **)(pFVar3 + lVar9 * 8) != pUVar6));
      if (bVar5 != false) {
        if (iVar12 != iVar10) {
          memmove(pFVar3 + (longlong)iVar12 * 8,pFVar3 + (longlong)iVar10 * 8,
                  (longlong)(iVar11 - iVar10) << 3);
          pUVar6 = local_48[0];
        }
        iVar12 = iVar12 + (iVar11 - iVar10);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar10 = iVar11;
    } while (lVar9 < iVar1);
    (this->Passes).ArrayNum = iVar12;
  }
  pcVar4 = *(code **)(*(longlong *)pUVar2 + 0x170);
  pUVar7 = GetTransientPackage();
  (*pcVar4)(pUVar2,0,pUVar7,0);
  return;
}

// SetControlRig @ 14a291460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRigValidator::SetControlRig(UControlRigValidator *this,UControlRig *param_1)

{
  UObject *pUVar1;
  URigVMHost *pUVar2;
  FName local_res8;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->WeakControlRig).WeakPtr);
  if (pUVar1 != (UObject *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar1 + 0xb),this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1[0xb].field_0x20,this);
  }
  (this->ValidationContext).DrawInterface = (FRigVMDrawInterface *)0x0;
  local_res8 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UControlRig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakControlRig).WeakPtr,(FObjectPtr)&local_res8);
  pUVar2 = (URigVMHost *)FWeakObjectPtr::Get(&(this->WeakControlRig).WeakPtr);
  if (pUVar2 != (URigVMHost *)0x0) {
    FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
    OnControlRigInitialized(this,pUVar2,&local_res8);
    TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UControlRigValidator>
              ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->InitializedEvent,(UControlRigValidator *)&local_res8,(pmf_f06aaa00)this);
    TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UControlRigValidator>
              ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->ExecutedEvent,(UControlRigValidator *)&local_res8,(pmf_f06aaa00)this);
    (this->ValidationContext).DrawInterface = &pUVar2->DrawInterface;
  }
  return;
}

// StaticRegisterNativesUControlRigValidator @ 14a298100

void __cdecl UControlRigValidator::StaticRegisterNativesUControlRigValidator(void)

{
  return;
}

