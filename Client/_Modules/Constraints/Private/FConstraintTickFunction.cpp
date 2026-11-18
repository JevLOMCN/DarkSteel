// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 8

// StaticStruct @ 14648e170

UScriptStruct * __cdecl FConstraintTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintTickFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Constraints();
    Z_Registration_Info_UScriptStruct_FConstraintTickFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintTickFunction,(UObject *)pUVar1,
                         L"ConstraintTickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintTickFunction.OuterSingleton;
}

// FConstraintTickFunction @ 14649e1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintTickFunction * __thiscall
FConstraintTickFunction::FConstraintTickFunction
          (FConstraintTickFunction *this,FConstraintTickFunction *param_1)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FConstraintTickFunction *pFVar6;
  FScriptContainerElement *pFVar7;
  
  FTickFunction::FTickFunction((FTickFunction *)this);
  (this->Constraint).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ConstraintFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintFunctions).ArrayNum = 0;
  (this->ConstraintFunctions).ArrayMax = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x26;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FConstraintTickFunction__6B_;
  if (0 < (param_1->ConstraintFunctions).ArrayNum) {
    pFVar2 = (param_1->ConstraintFunctions).AllocatorInstance.Data;
    if ((pFVar2 < (FScriptContainerElement *)((longlong)(this->ConstraintFunctions).ArrayMax * 0x30)
        ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FConstraintTickFunction *)(*pcVar3)();
      return pFVar6;
    }
    iVar5 = (this->ConstraintFunctions).ArrayNum;
    if (iVar5 == (this->ConstraintFunctions).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&(this->ConstraintFunctions).AllocatorInstance,
                         &(this->ConstraintFunctions).ArrayMax);
    }
    (this->ConstraintFunctions).ArrayNum = iVar5 + 1;
    pFVar7 = (this->ConstraintFunctions).AllocatorInstance.Data + (longlong)iVar5 * 0x30;
    *(longlong *)pFVar7 = *(longlong *)pFVar2;
    *(longlong *)(pFVar7 + 0x28) = 0;
    if (*(longlong *)pFVar7 != 0) {
      pFVar7 = pFVar2 + 0x10;
      if (*(FScriptContainerElement **)(pFVar2 + 0x28) != (FScriptContainerElement *)0x0) {
        pFVar7 = *(FScriptContainerElement **)(pFVar2 + 0x28);
      }
      (*(code *)**(undefined8 **)pFVar7)();
    }
  }
  (this->Constraint).WeakPtr = (param_1->Constraint).WeakPtr;
  return this;
}

// FConstraintTickFunction @ 14649e2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintTickFunction * __thiscall
FConstraintTickFunction::FConstraintTickFunction(FConstraintTickFunction *this)

{
  byte *pbVar1;
  
  FTickFunction::FTickFunction((FTickFunction *)this);
  this->_padding_ = (longlong)&___7FConstraintTickFunction__6B_;
  (this->Constraint).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ConstraintFunctions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintFunctions).ArrayNum = 0;
  (this->ConstraintFunctions).ArrayMax = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x26;
  *(undefined1 *)&this->_padding_ = 0;
  return this;
}

// ~FConstraintTickFunction @ 14649f910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FConstraintTickFunction::~FConstraintTickFunction(FConstraintTickFunction *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FConstraintTickFunction__6B_;
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(this->ConstraintFunctions).AllocatorInstance.Data,
             (this->ConstraintFunctions).ArrayNum);
  pFVar1 = (this->ConstraintFunctions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickFunction::~FTickFunction((FTickFunction *)this);
  return;
}

// DiagnosticMessage @ 1464ad160

FString * __thiscall
FConstraintTickFunction::DiagnosticMessage
          (FConstraintTickFunction *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_res8;
  FString local_18;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Constraint).WeakPtr);
  if (!bVar1) {
    ::FString::PrintfImpl(__return_storage_ptr__,L"FConstraintTickFunction::Tick[%p]");
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->Constraint).WeakPtr);
  local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
  local_res8.Number = *(uint *)&pUVar2->field_0x1c;
  ::FName::ToString(&local_res8,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"FConstraintTickFunction::Tick[%p] (%s)");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EvaluateFunctions @ 1464af260

void __thiscall FConstraintTickFunction::EvaluateFunctions(FConstraintTickFunction *this)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ConstraintFunctions).ArrayNum;
  pFVar5 = (this->ConstraintFunctions).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->ConstraintFunctions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TFunction<void___cdecl(void)>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar5);
    pcVar2 = *(code **)pFVar5;
    pFVar4 = pFVar5 + 0x10;
    if (*(FScriptContainerElement **)(pFVar5 + 0x28) != (FScriptContainerElement *)0x0) {
      pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x28);
    }
    uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
    (*pcVar2)(uVar3);
    pFVar5 = pFVar5 + 0x30;
  }
  return;
}

// ExecuteTick @ 1464af810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FConstraintTickFunction::ExecuteTick
          (FConstraintTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackX_8 [8];
  
  iVar1 = (this->ConstraintFunctions).ArrayNum;
  pFVar5 = (this->ConstraintFunctions).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->ConstraintFunctions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TFunction<void___cdecl(void)>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (pFVar5 == pFVar6) break;
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar5);
    pcVar2 = *(code **)pFVar5;
    pFVar4 = pFVar5 + 0x10;
    if (*(FScriptContainerElement **)(pFVar5 + 0x28) != (FScriptContainerElement *)0x0) {
      pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x28);
    }
    uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
    (*pcVar2)(uVar3);
    pFVar5 = pFVar5 + 0x30;
  }
  return;
}

// RegisterFunction @ 1464bd0f0

void __thiscall
FConstraintTickFunction::RegisterFunction
          (FConstraintTickFunction *this,TFunction<void___cdecl(void)> *param_1)

{
  int *piVar1;
  TFunction<void___cdecl(void)> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  
  if ((this->ConstraintFunctions).ArrayNum == 0) {
    pTVar2 = (TFunction<void___cdecl(void)> *)(this->ConstraintFunctions).AllocatorInstance.Data;
    if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->ConstraintFunctions).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->ConstraintFunctions).ArrayNum;
    piVar1 = &(this->ConstraintFunctions).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&(this->ConstraintFunctions).AllocatorInstance,piVar1);
    }
    (this->ConstraintFunctions).ArrayNum = iVar5 + 1;
    pFVar8 = (this->ConstraintFunctions).AllocatorInstance.Data + (longlong)iVar5 * 0x30;
    *(longlong *)pFVar8 = *(longlong *)param_1;
    *(longlong *)(pFVar8 + 0x28) = 0;
    if (*(longlong *)pFVar8 != 0) {
      puVar6 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar6 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar6)();
    }
  }
  if (*(longlong *)param_1 != 0) {
    plVar7 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_1->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x0001464bd1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x10))();
    return;
  }
  return;
}

