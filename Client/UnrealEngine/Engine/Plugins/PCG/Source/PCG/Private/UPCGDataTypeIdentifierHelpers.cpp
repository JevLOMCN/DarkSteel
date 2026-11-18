// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 1498580a0

UClass * __cdecl UPCGDataTypeIdentifierHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataTypeIdentifierHelpers",
               &Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.InnerSingleton,
               StaticRegisterNativesUPCGDataTypeIdentifierHelpers,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataTypeIdentifierHelpers>,
               InternalVTableHelperCtorCaller<UPCGDataTypeIdentifierHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.InnerSingleton;
}

// UPCGDataTypeIdentifierHelpers @ 14988dc80

UPCGDataTypeIdentifierHelpers * __thiscall
UPCGDataTypeIdentifierHelpers::UPCGDataTypeIdentifierHelpers
          (UPCGDataTypeIdentifierHelpers *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGDataTypeIdentifierHelpers__6B_;
  return this;
}

// UPCGDataTypeIdentifierHelpers @ 14988dcb0

UPCGDataTypeIdentifierHelpers * __thiscall
UPCGDataTypeIdentifierHelpers::UPCGDataTypeIdentifierHelpers
          (UPCGDataTypeIdentifierHelpers *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGDataTypeIdentifierHelpers__6B_;
  return this;
}

// ~UPCGDataTypeIdentifierHelpers @ 149891540

void __thiscall
UPCGDataTypeIdentifierHelpers::~UPCGDataTypeIdentifierHelpers(UPCGDataTypeIdentifierHelpers *this)

{
  *(undefined ***)this = &___7UPCGDataTypeIdentifierHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetIdentifierFromLegacyType @ 1498ba280

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __cdecl
UPCGDataTypeIdentifierHelpers::GetIdentifierFromLegacyType
          (FPCGDataTypeIdentifier *__return_storage_ptr__,EPCGExclusiveDataType param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  UEnum *this_00;
  FPCGDataTypeIdentifier *pFVar3;
  long64 lVar4;
  EPCGDataType EVar5;
  FName local_res8;
  
  this = StaticEnum<enum_EPCGDataType>();
  this_00 = StaticEnum<enum_EPCGExclusiveDataType>();
  EVar5 = Other;
  if ((this != (UEnum *)0x0) && (this_00 != (UEnum *)0x0)) {
    UEnum::GetNameByValue(this_00,(long64)&local_res8);
    if (local_res8 == (FName)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3543041294110555653>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGDataTypeIdentifier.cpp"
                         ,0x1fb,"ExclusiveDataTypeName != NAME_None");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPCGDataTypeIdentifier *)(*pcVar1)();
        return pFVar3;
      }
    }
    else {
      lVar4 = UEnum::GetValueByName(this,local_res8,None);
      if (lVar4 == -1) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3543041294110555650>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGDataTypeIdentifier.cpp"
                           ,0x1fe,"MatchingType != INDEX_NONE");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FPCGDataTypeIdentifier *)(*pcVar1)();
          return pFVar3;
        }
      }
      else {
        EVar5 = (EPCGDataType)lVar4;
      }
    }
  }
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,EVar5);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1498bc1d0

UClass * __cdecl UPCGDataTypeIdentifierHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataTypeIdentifierHelpers",
               &Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.InnerSingleton,
               StaticRegisterNativesUPCGDataTypeIdentifierHelpers,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataTypeIdentifierHelpers>,
               InternalVTableHelperCtorCaller<UPCGDataTypeIdentifierHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataTypeIdentifierHelpers.InnerSingleton;
}

// StaticRegisterNativesUPCGDataTypeIdentifierHelpers @ 1498f6810

void __cdecl UPCGDataTypeIdentifierHelpers::StaticRegisterNativesUPCGDataTypeIdentifierHelpers(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UPCGDataTypeIdentifierHelpers_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetIdentifierFromClass @ 1498fc8d0

void __cdecl
UPCGDataTypeIdentifierHelpers::execGetIdentifierFromClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FScriptContainerElement *pFVar9;
  UClass *local_res10;
  FPCGDataTypeIdentifier local_28;
  
  local_res10 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar8 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  local_28.Ids.ArrayNum = 0;
  local_28.Ids.ArrayMax = 0;
  local_28.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.CustomSubtype = -1;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar8 == (UClass *)0x0) goto LAB_1498fcb24;
  }
  else {
    if (pUVar8 == (UClass *)0x0) goto LAB_1498fcb24;
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pUVar7 = Z_Construct_UClass_UPCGData_NoRegister();
  if (pUVar7 == (UClass *)0x0) goto LAB_1498fcb24;
  iVar6 = (int)pUVar7->_padding_;
  if (((int)pUVar8->_padding_ < iVar6) ||
     ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar6 * 8) != &pUVar7->_padding_))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_1498fcb24;
  pUVar7 = Z_Construct_UClass_UPCGData_NoRegister();
  if (pUVar7 == (UClass *)0x0) {
LAB_1498fc9f8:
    pUVar8 = (UClass *)0x0;
  }
  else {
    iVar6 = (int)pUVar7->_padding_;
    if (((int)pUVar8->_padding_ < iVar6) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar6 * 8) != &pUVar7->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1498fc9f8;
  }
  if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar8);
  }
  pUVar2 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar8 = Z_Construct_UClass_UPCGData_NoRegister();
  iVar6 = (int)pUVar8->_padding_;
  if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar6) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
       &pUVar8->_padding_)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = (FScriptContainerElement *)(**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2);
  bVar5 = FPCGDataTypeIdentifier::PrepareForCompose(&local_28,(FPCGDataTypeBaseId *)pFVar9);
  if (bVar5) {
    if (((local_28.Ids.AllocatorInstance.Data <= pFVar9) &&
        (pFVar9 < local_28.Ids.AllocatorInstance.Data + (longlong)local_28.Ids.ArrayMax * 8)) &&
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
    iVar6 = local_28.Ids.ArrayNum;
    if (local_28.Ids.ArrayNum == local_28.Ids.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&local_28,&local_28.Ids.ArrayMax);
    }
    local_28.Ids.ArrayNum = iVar6 + 1;
    TVar3.ObjectPtr.field0_0x0 = *(FObjectPtr *)pFVar9;
    *(TObjectPtr<UScriptStruct_const_>_u_0 *)
     (local_28.Ids.AllocatorInstance.Data + (longlong)iVar6 * 8) = TVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar3 != (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
  }
LAB_1498fcb24:
  if (param_3 != &local_28) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_28.Ids.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_28.Ids.ArrayNum;
    local_28.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_28.Ids.ArrayMax;
    local_28.Ids.ArrayNum = 0;
    local_28.Ids.ArrayMax = 0;
  }
  *(int *)((longlong)param_3 + 0x10) = local_28.CustomSubtype;
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return;
}

// execGetIdentifierFromLegacyType @ 1498fcb90

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl
UPCGDataTypeIdentifierHelpers::execGetIdentifierFromLegacyType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UEnum *this;
  UEnum *this_00;
  long64 lVar4;
  EPCGDataType EVar5;
  undefined1 local_res10 [8];
  FName local_res18;
  FPCGDataTypeIdentifier local_38;
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = StaticEnum<enum_EPCGDataType>();
  this_00 = StaticEnum<enum_EPCGExclusiveDataType>();
  EVar5 = Other;
  if ((this != (UEnum *)0x0) && (this_00 != (UEnum *)0x0)) {
    UEnum::GetNameByValue(this_00,(long64)&local_res18);
    if (local_res18 == (FName)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3543041294110555653>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGDataTypeIdentifier.cpp"
                         ,0x1fb,"ExclusiveDataTypeName != NAME_None");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      lVar4 = UEnum::GetValueByName(this,local_res18,None);
      if (lVar4 == -1) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3543041294110555650>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGDataTypeIdentifier.cpp"
                           ,0x1fe,"MatchingType != INDEX_NONE");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        EVar5 = (EPCGDataType)lVar4;
      }
    }
  }
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,EVar5);
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Ids.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Ids.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_38.Ids.ArrayMax;
    local_38.Ids.ArrayNum = 0;
    local_38.Ids.ArrayMax = 0;
    local_38.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(int *)((longlong)param_3 + 0x10) = local_38.CustomSubtype;
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Ids.AllocatorInstance.Data);
  }
  return;
}

// execIsComposition @ 1498fe490

void __cdecl
UPCGDataTypeIdentifierHelpers::execIsComposition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void *local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_18 = 0xffffffff;
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  ppvVar2 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = 1 < *(int *)(ppvVar2 + 1);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execIsIdentical @ 1498fe550

void __cdecl
UPCGDataTypeIdentifierHelpers::execIsIdentical(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  FPCGDataTypeIdentifier *this;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier local_48;
  FPCGDataTypeIdentifier local_30;
  
  local_30.CustomSubtype = -1;
  local_30.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Ids.ArrayNum = 0;
  local_30.Ids.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_48.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Ids.ArrayNum = 0;
  local_48.Ids.ArrayMax = 0;
  this = &local_30;
  if ((FPCGDataTypeIdentifier *)param_2->MostRecentPropertyAddress != (FPCGDataTypeIdentifier *)0x0)
  {
    this = (FPCGDataTypeIdentifier *)param_2->MostRecentPropertyAddress;
  }
  local_48.CustomSubtype = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  this_00 = &local_48;
  if ((FPCGDataTypeIdentifier *)param_2->MostRecentPropertyAddress != (FPCGDataTypeIdentifier *)0x0)
  {
    this_00 = (FPCGDataTypeIdentifier *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FPCGDataTypeIdentifier::IsValid(this);
  if (bVar2) {
LAB_1498fe654:
    if ((this->Ids).ArrayNum == (this_00->Ids).ArrayNum) {
      bVar2 = FPCGDataTypeIdentifier::SupportsType(this,this_00);
      if (bVar2) goto LAB_1498fe66b;
    }
  }
  else {
    bVar2 = FPCGDataTypeIdentifier::IsValid(this_00);
    if (bVar2) goto LAB_1498fe654;
LAB_1498fe66b:
    if (this->CustomSubtype == this_00->CustomSubtype) {
      uVar3 = 1;
      goto LAB_1498fe679;
    }
  }
  uVar3 = 0;
LAB_1498fe679:
  *(undefined1 *)param_3 = uVar3;
  if (local_48.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Ids.AllocatorInstance.Data);
  }
  if (local_30.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Ids.AllocatorInstance.Data);
  }
  return;
}

// execIsSameType @ 1498fe6c0

void __cdecl
UPCGDataTypeIdentifierHelpers::execIsSameType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  FPCGDataTypeIdentifier *this;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier local_38;
  FPCGDataTypeIdentifier local_20;
  
  local_20.CustomSubtype = -1;
  local_20.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Ids.ArrayNum = 0;
  local_20.Ids.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_38.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Ids.ArrayNum = 0;
  local_38.Ids.ArrayMax = 0;
  this = &local_20;
  if ((FPCGDataTypeIdentifier *)param_2->MostRecentPropertyAddress != (FPCGDataTypeIdentifier *)0x0)
  {
    this = (FPCGDataTypeIdentifier *)param_2->MostRecentPropertyAddress;
  }
  local_38.CustomSubtype = -1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this_00 = &local_38;
  if ((FPCGDataTypeIdentifier *)param_2->MostRecentPropertyAddress != (FPCGDataTypeIdentifier *)0x0)
  {
    this_00 = (FPCGDataTypeIdentifier *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FPCGDataTypeIdentifier::IsValid(this);
  if (bVar2) {
LAB_1498fe7c5:
    if ((this->Ids).ArrayNum == (this_00->Ids).ArrayNum) {
      bVar2 = FPCGDataTypeIdentifier::SupportsType(this,this_00);
      if (bVar2) goto LAB_1498fe7dc;
    }
    uVar3 = 0;
  }
  else {
    bVar2 = FPCGDataTypeIdentifier::IsValid(this_00);
    if (bVar2) goto LAB_1498fe7c5;
LAB_1498fe7dc:
    uVar3 = 1;
  }
  *(undefined1 *)param_3 = uVar3;
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Ids.AllocatorInstance.Data);
  }
  if (local_20.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Ids.AllocatorInstance.Data);
  }
  return;
}

// execIsValid @ 1498fe830

void __cdecl
UPCGDataTypeIdentifierHelpers::execIsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *this;
  FPCGDataTypeIdentifier local_28;
  
  local_28.CustomSubtype = -1;
  local_28.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Ids.ArrayNum = 0;
  local_28.Ids.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((FPCGDataTypeIdentifier *)param_2->MostRecentPropertyAddress != (FPCGDataTypeIdentifier *)0x0)
  {
    this = (FPCGDataTypeIdentifier *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = FPCGDataTypeIdentifier::IsValid(this);
  *(bool *)param_3 = bVar2;
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return;
}

