// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 11

// StaticClass @ 1463277d0

UClass * __cdecl UReturnResultsTerminal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReturnResultsTerminal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"ReturnResultsTerminal",
               &Z_Registration_Info_UClass_UReturnResultsTerminal.InnerSingleton,
               StaticRegisterNativesUReturnResultsTerminal,0xc0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UReturnResultsTerminal>,
               InternalVTableHelperCtorCaller<UReturnResultsTerminal>,local_res8,
               UFieldNodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReturnResultsTerminal.InnerSingleton;
}

// UReturnResultsTerminal @ 14632b2c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UReturnResultsTerminal * __thiscall
UReturnResultsTerminal::UReturnResultsTerminal(UReturnResultsTerminal *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UReturnResultsTerminal @ 14632baf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReturnResultsTerminal::~UReturnResultsTerminal(UReturnResultsTerminal *this)

{
  *(undefined ***)this = &UFieldNodeBase::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UFieldNodeBase::_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &UFieldNodeBase::_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 146330670

UClass * __cdecl UReturnResultsTerminal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReturnResultsTerminal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FieldSystemEngine",L"ReturnResultsTerminal",
               &Z_Registration_Info_UClass_UReturnResultsTerminal.InnerSingleton,
               StaticRegisterNativesUReturnResultsTerminal,0xc0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UReturnResultsTerminal>,
               InternalVTableHelperCtorCaller<UReturnResultsTerminal>,local_res8,
               UFieldNodeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReturnResultsTerminal.InnerSingleton;
}

// NewEvaluationGraph @ 1463323e0

FFieldNodeBase * __thiscall
UReturnResultsTerminal::NewEvaluationGraph
          (UReturnResultsTerminal *this,
          TArray<UFieldNodeBase_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  FFieldNodeBase *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  UReturnResultsTerminal *local_38 [2];
  
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar11 + (longlong)param_1->ArrayNum * 8;
  for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 8) {
    if (*(UReturnResultsTerminal **)pFVar11 == this) {
      local_res8[0] = 0;
      bVar3 = `UReturnResultsTerminal::NewEvaluationGraph'::__l3::<lambda_1>::operator()(local_res8)
      ;
      if (!bVar3) {
        return (FFieldNodeBase *)0x0;
      }
      break;
    }
  }
  piVar10 = &param_1->ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_38[0] = this;
  if (((pFVar1 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FFieldNodeBase *)(*pcVar2)();
    return pFVar6;
  }
  iVar5 = *piVar10;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    *piVar10 = iVar5;
  }
  *piVar10 = iVar5 + 1;
  uVar7 = 0xffffffff;
  *(UReturnResultsTerminal **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_38[0];
  uVar8 = *piVar10 - 1;
  if (-1 < (int)uVar8) {
    lVar12 = (longlong)(int)uVar8 * 8;
    do {
      if (uVar7 != 0xffffffff) break;
      uVar7 = 0;
      if ((int)uVar8 < *piVar10) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FFieldNodeBase *)(*pcVar2)();
        return pFVar6;
      }
      cVar4 = (**(code **)(**(longlong **)((param_1->AllocatorInstance).Data + lVar12) + 0x500))();
      uVar7 = uVar8;
      if (cVar4 == '\0') {
        uVar7 = 0xffffffff;
      }
      lVar12 = lVar12 + -8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
    if (uVar7 != 0xffffffff) goto LAB_146332594;
  }
  local_res10[0] = 0;
  bVar3 = `UReturnResultsTerminal::NewEvaluationGraph'::__l9::<lambda_2>::operator()(local_res10);
  if (!bVar3) {
    return (FFieldNodeBase *)0x0;
  }
LAB_146332594:
  uVar9 = ~uVar7 >> 0x1f;
  uVar8 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar8 = uVar9;
  }
  if ((uVar8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FFieldNodeBase *)(*pcVar2)();
    return pFVar6;
  }
  lVar12 = (longlong)(int)uVar7;
  iVar5 = (**(code **)(**(longlong **)((param_1->AllocatorInstance).Data + lVar12 * 8) + 0x4f8))();
  if (iVar5 == 2) {
    pFVar6 = ::operator_new(0x10);
    if (pFVar6 != (FFieldNodeBase *)0x0) {
      (pFVar6->Name).ComparisonIndex = 0;
      (pFVar6->Name).Number = 0;
      pFVar6->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
      ::FName::FName(&pFVar6->Name,"");
      pFVar6->_padding_ = (longlong)&___7__FReturnResultsTerminal_H__6B_;
      return pFVar6;
    }
  }
  else {
    uVar8 = 0;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar8 = uVar9;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FFieldNodeBase *)(*pcVar2)();
      return pFVar6;
    }
    iVar5 = (**(code **)(**(longlong **)((param_1->AllocatorInstance).Data + lVar12 * 8) + 0x4f8))()
    ;
    if (iVar5 == 3) {
      pFVar6 = ::operator_new(0x10);
      if (pFVar6 != (FFieldNodeBase *)0x0) {
        (pFVar6->Name).ComparisonIndex = 0;
        (pFVar6->Name).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar6->Name,"");
        pFVar6->_padding_ = (longlong)&___7__FReturnResultsTerminal_M__6B_;
        return pFVar6;
      }
    }
    else {
      uVar8 = 0;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar8 = uVar9;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FFieldNodeBase *)(*pcVar2)();
        return pFVar6;
      }
      iVar5 = (**(code **)(**(longlong **)((param_1->AllocatorInstance).Data + lVar12 * 8) + 0x4f8))
                        ();
      if (iVar5 != 4) {
        return (FFieldNodeBase *)0x0;
      }
      pFVar6 = ::operator_new(0x10);
      if (pFVar6 != (FFieldNodeBase *)0x0) {
        (pFVar6->Name).ComparisonIndex = 0;
        (pFVar6->Name).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FFieldNodeBase__6B_;
        ::FName::FName(&pFVar6->Name,"");
        pFVar6->_padding_ = (longlong)&___7__FReturnResultsTerminal_U__TVector_N_Math_UE____6B_;
        return pFVar6;
      }
    }
  }
  return (FFieldNodeBase *)0x0;
}

// SetReturnResultsTerminal @ 146333f00

UReturnResultsTerminal * __thiscall
UReturnResultsTerminal::SetReturnResultsTerminal(UReturnResultsTerminal *this)

{
  return this;
}

// StaticRegisterNativesUReturnResultsTerminal @ 146334450

void __cdecl UReturnResultsTerminal::StaticRegisterNativesUReturnResultsTerminal(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UReturnResultsTerminal_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Type @ 146334770

EFieldType __thiscall UReturnResultsTerminal::Type(UReturnResultsTerminal *this)

{
  return EField_Results;
}

// execSetReturnResultsTerminal @ 146337070

void __cdecl
UReturnResultsTerminal::execSetReturnResultsTerminal(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(UObject **)param_3 = param_1;
  return;
}

// operator() @ 1504e9c80

bool __thiscall
`UReturnResultsTerminal::NewEvaluationGraph'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983923>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983923>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e9ec0

bool __thiscall
`UReturnResultsTerminal::NewEvaluationGraph'::__l9::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3094132317354983935>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3094132317354983935>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

