// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// UBlueprint @ 1476883e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBlueprint * __thiscall UBlueprint::UBlueprint(UBlueprint *this,FVTableHelper *param_1)

{
  UBlueprintCore::UBlueprintCore((UBlueprintCore *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UBlueprintCore__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  (this->ParentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SimpleConstructionScript).field0_0x0.DebugPtr = (USimpleConstructionScript *)0x0;
  (this->ComponentTemplates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTemplates).ArrayNum = 0;
  (this->ComponentTemplates).ArrayMax = 0;
  (this->Timelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Timelines).ArrayNum = 0;
  (this->Timelines).ArrayMax = 0;
  (this->ComponentClassOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentClassOverrides).ArrayNum = 0;
  (this->ComponentClassOverrides).ArrayMax = 0;
  (this->InheritableComponentHandler).field0_0x0.DebugPtr = (UInheritableComponentHandler *)0x0;
  return this;
}

// UBlueprint @ 147688450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UBlueprint * __thiscall UBlueprint::UBlueprint(UBlueprint *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UBlueprintCore__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->ParentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SimpleConstructionScript).field0_0x0.DebugPtr = (USimpleConstructionScript *)0x0;
  (this->ComponentTemplates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentTemplates).ArrayNum = 0;
  (this->ComponentTemplates).ArrayMax = 0;
  (this->Timelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Timelines).ArrayNum = 0;
  (this->Timelines).ArrayMax = 0;
  (this->ComponentClassOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentClassOverrides).ArrayNum = 0;
  (this->ComponentClassOverrides).ArrayMax = 0;
  (this->InheritableComponentHandler).field0_0x0.DebugPtr = (UInheritableComponentHandler *)0x0;
  return this;
}

// ~UBlueprint @ 14768a770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBlueprint::~UBlueprint(UBlueprint *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UBlueprintCore__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  pFVar1 = (this->ComponentClassOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Timelines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentTemplates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBlueprintCore::~UBlueprintCore((UBlueprintCore *)this);
  return;
}

// FindBlueprintPropertyGuidFromName @ 1476a8700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGuid * __thiscall
UBlueprint::FindBlueprintPropertyGuidFromName
          (UBlueprint *this,FGuid *__return_storage_ptr__,FName param_1)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// FindBlueprintPropertyNameFromGuid @ 1476a8780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall UBlueprint::FindBlueprintPropertyNameFromGuid(UBlueprint *this,FGuid *param_1)

{
  param_1->A = 0;
  param_1->B = 0;
  return (FName)param_1;
}

// GetAllGraphs @ 1476ad8b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UBlueprint::GetAllGraphs(UBlueprint *this,TArray<UEdGraph_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetBlueprintHierarchyFromClass @ 1476ae5c0

bool __cdecl
UBlueprint::GetBlueprintHierarchyFromClass
          (UClass *param_1,
          TArray<IBlueprintPropertyGuidProvider_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  UClass *local_18 [2];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if (param_1 != (UClass *)0x0) {
    pUVar7 = UBlueprintGeneratedClass::StaticClass();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar7->_padding_)) {
      do {
        local_18[0] = param_1 + 1;
        param_1 = (UClass *)param_1->_padding_;
        if (param_1 == (UClass *)0x0) {
LAB_1476ae67b:
          param_1 = (UClass *)0x0;
        }
        else {
          pUVar7 = UBlueprintGeneratedClass::StaticClass();
          iVar6 = (int)pUVar7->_padding_;
          if ((*(int *)(param_1->_padding_ + 0x38) < iVar6) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar7->_padding_)) goto LAB_1476ae67b;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(UClass **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
      } while (param_1 != (UClass *)0x0);
    }
  }
  return true;
}

// GetBlueprintHierarchyFromClass @ 1476ae740

bool __cdecl
UBlueprint::GetBlueprintHierarchyFromClass
          (UClass *param_1,TArray<UBlueprintGeneratedClass_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UClass *pUVar7;
  UClass *local_18 [2];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if (param_1 != (UClass *)0x0) {
    pUVar7 = UBlueprintGeneratedClass::StaticClass();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar7->_padding_)) {
      while( true ) {
        pFVar2 = (param_2->AllocatorInstance).Data;
        local_18[0] = param_1;
        if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
           (((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 8 &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)))) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(UClass **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
        if ((local_18[0] == (UClass *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentClass",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Blueprint.cpp"
                               ,0x6d1,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        param_1 = (UClass *)local_18[0]->_padding_;
        if (param_1 == (UClass *)0x0) break;
        pUVar7 = UBlueprintGeneratedClass::StaticClass();
        iVar6 = (int)pUVar7->_padding_;
        if (*(int *)(param_1->_padding_ + 0x38) < iVar6) {
          return true;
        }
        if ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar7->_padding_) {
          return true;
        }
      }
    }
  }
  return true;
}

// GetDesc @ 1476b0aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall UBlueprint::GetDesc(UBlueprint *this,FString *__return_storage_ptr__)

{
  uchar uVar1;
  int iVar2;
  UClass *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  wchar_t *pwVar6;
  UClass *pUVar7;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  uVar1 = (this->BlueprintType).Value;
  pUVar7 = (UClass *)0x0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (uVar1 == '\x01') {
    pwVar6 = L"const extends";
  }
  else if (uVar1 == '\x02') {
    pwVar6 = L"macros for";
  }
  else if (uVar1 == '\x03') {
    pwVar6 = L"";
  }
  else {
    pwVar6 = L"extends";
  }
  ::FString::operator=(&local_38,pwVar6);
  pUVar3 = (this->ParentClass).Class.field0_0x0.DebugPtr;
  if ((pUVar3 != (UClass *)0x0) &&
     (pUVar5 = Z_Construct_UClass_UObject_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar2 = (int)pUVar5->_padding_;
    if (((int)pUVar3->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) != &pUVar5->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar7 = (this->ParentClass).Class.field0_0x0.DebugPtr;
    }
  }
  local_res8 = (FName)pUVar7->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1476b3dd0

UClass * __cdecl UBlueprint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Blueprint",&Z_Registration_Info_UClass_UBlueprint.InnerSingleton,
               StaticRegisterNativesUBlueprint,0xa8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_UBlueprint,L"Engine",InternalConstructor<UBlueprint>,
               InternalVTableHelperCtorCaller<UBlueprint>,local_res8,UBlueprintCore::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprint.InnerSingleton;
}

// GetTimelineSignatureForFunctionByName @ 1476b5890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ETimelineSigType __thiscall
UBlueprint::GetTimelineSignatureForFunctionByName(UBlueprint *this,FName *param_1,FName *param_2)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  ETimelineSigType EVar6;
  UClass *pUVar7;
  FObjectPropertyBase *pFVar8;
  UStruct *pUVar9;
  TObjectPtr<UClass>_u_0 TVar10;
  FName local_res18 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  TObjectPtr<UClass>_u_0 local_48;
  UFunction *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  lVar2 = this->_padding_;
  if ((lVar2 == 0) || (pUVar7 = Z_Construct_UClass_UObject_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_1476b58ea:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkeletonGeneratedClass != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Blueprint.cpp"
                       ,0x74a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
  }
  else {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) || (this->_padding_ == 0)) goto LAB_1476b58ea;
  }
  lVar2 = this->_padding_;
  if ((lVar2 == 0) || (pUVar7 = Z_Construct_UClass_UObject_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_1476b5951:
    TVar10.DebugPtr = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1476b5951;
    TVar10 = (TObjectPtr<UClass>_u_0)this->_padding_;
  }
  FVar3 = *param_2;
  if (FVar3 != (FName)0x0) {
    lVar2 = this->_padding_;
    if ((lVar2 == 0) || (pUVar7 = Z_Construct_UClass_UObject_NoRegister(), pUVar7 == (UClass *)0x0))
    {
LAB_1476b59ad:
      pUVar9 = (UStruct *)0x0;
    }
    else {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_1476b59ad;
      pUVar9 = (UStruct *)this->_padding_;
    }
    pFVar8 = FindFProperty<FObjectPropertyBase>(pUVar9,FVar3,Default);
    if (pFVar8 == (FObjectPropertyBase *)0x0) {
      if ((byte)LogBlueprint._0_1_ < 5) {
        return ETS_InvalidSignature;
      }
      ::FName::ToString(param_2,&local_68);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
      goto LAB_1476b5af7;
    }
    TVar10 = (TObjectPtr<UClass>_u_0)(pFVar8->PropertyClass).field0_0x0.DebugPtr;
  }
  FVar3 = *param_1;
  if (FVar3 != (FName)0x0) {
    if (TVar10.DebugPtr == (UClass *)0x0) {
      local_40 = (UFunction *)0x0;
    }
    else {
      local_40 = (UFunction *)(TVar10.DebugPtr)->_padding_;
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = TVar10;
    TFieldIterator<UFunction>::IterateToNext((TFieldIterator<UFunction> *)&local_48.ObjectPtr);
    while (local_40 != (UFunction *)0x0) {
      if ((FName)local_40->_padding_ == FVar3) {
        if (local_40 != (UFunction *)0x0) {
          EVar6 = UTimelineComponent::GetTimelineSignatureForFunction(local_40);
          return EVar6;
        }
        break;
      }
      local_40 = (UFunction *)local_40->_padding_;
      TFieldIterator<UFunction>::IterateToNext((TFieldIterator<UFunction> *)&local_48.ObjectPtr);
    }
  }
  if ((byte)LogBlueprint._0_1_ < 5) {
    return ETS_InvalidSignature;
  }
  local_res18[0] = (FName)(TVar10.DebugPtr)->_padding_;
  ::FName::ToString(local_res18,&local_78);
  ::FName::ToString(param_1,&local_58);
  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
  local_68.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
    local_68.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  }
LAB_1476b5af7:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return ETS_InvalidSignature;
}

// HasNonEditorOnlyReferences @ 1476b7370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UBlueprint::HasNonEditorOnlyReferences(UBlueprint *this)

{
  return true;
}

// NeedsLoadForClient @ 1476bd620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UBlueprint::NeedsLoadForClient(UBlueprint *this)

{
  return false;
}

// NeedsLoadForEditorGame @ 1476bd700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UBlueprint::NeedsLoadForEditorGame(UBlueprint *this)

{
  return true;
}

// NeedsLoadForServer @ 1476bd720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UBlueprint::NeedsLoadForServer(UBlueprint *this)

{
  return false;
}

// Serialize @ 1476c6260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UBlueprint::Serialize(UBlueprint *this,FArchive *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UObjectBase *pUVar6;
  ForAnyElementType FVar7;
  UObjectBase *pUVar8;
  int iVar9;
  undefined1 auStackY_98 [32];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> TStack_68;
  FString FStack_58;
  undefined8 uStack_48;
  uchar auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  UObject::Serialize((UObject *)this,param_1);
  pUVar8 = (UObjectBase *)0x0;
  iVar9 = 0;
  iVar4 = (int)*(undefined8 *)&param_1->field_0x40;
  if ((iVar4 < 0xf0) && (iVar4 != 0xdd)) {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->_padding_);
    lVar1 = this->_padding_;
    if ((lVar1 != 0) && (pUVar5 = Z_Construct_UClass_UObject_NoRegister(), pUVar5 != (UClass *)0x0))
    {
      iVar4 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar1 + 0x38) < iVar4) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar1 = this->_padding_, lVar1 != 0)) {
        pUVar5 = Z_Construct_UClass_UObject_NoRegister();
        pUVar6 = pUVar8;
        if (pUVar5 != (UClass *)0x0) {
          iVar4 = (int)pUVar5->_padding_;
          if ((*(int *)(lVar1 + 0x38) < iVar4) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar4 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar6 = (UObjectBase *)this->_padding_;
          }
        }
        UObjectBase::AtomicallySetFlags(pUVar6,RF_Transient);
        lVar1 = this->_padding_;
        TStack_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_68.ArrayNum = 0;
        TStack_68.ArrayMax = 0;
        pUVar6 = pUVar8;
        if ((lVar1 != 0) &&
           (pUVar5 = Z_Construct_UClass_UObject_NoRegister(), pUVar5 != (UClass *)0x0)) {
          iVar4 = (int)pUVar5->_padding_;
          if ((*(int *)(lVar1 + 0x38) < iVar4) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar4 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar6 = (UObjectBase *)this->_padding_;
          }
        }
        GetObjectsWithOuter(pUVar6,&TStack_68,true,RF_NoFlags,Borrowed);
        while ((iVar4 = (int)pUVar8, -1 < iVar4 && (iVar4 < TStack_68.ArrayNum))) {
          UObjectBase::AtomicallySetFlags
                    (*(UObjectBase **)(TStack_68.AllocatorInstance.Data + (longlong)iVar4 * 8),
                     RF_Transient);
          pUVar8 = (UObjectBase *)(ulonglong)(iVar4 + 1);
        }
        if (TStack_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_68.AllocatorInstance.Data);
        }
      }
    }
    if (this != (UBlueprint *)0x0) {
      pUVar5 = StaticClass();
      iVar4 = (int)pUVar5->_padding_;
      if ((((iVar4 <= *(int *)(this->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar5->_padding_)) && ((param_1->field_0x28 & 1) != 0)) &&
         (this->bHasBeenRegenerated != '\0')) {
        uStack_48 = 0;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&uStack_48);
        goto LAB_1476c64a2;
      }
    }
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->_padding_);
  }
LAB_1476c64a2:
  if (((param_1->field_0x28 & 1) != 0) &&
     ((((int)this->_padding_ == 0 && *(int *)((longlong)&this->_padding_ + 4) == 0) &&
      (int)this->_padding_ == 0) && *(int *)((longlong)&this->_padding_ + 4) == 0)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&FStack_58,(UObject *)0x0);
    ::FString::Shrink(&FStack_58);
    if (((FStack_58.Data.ArrayNum == 0) || (FStack_58.Data.ArrayNum == 1)) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<961926507976982875>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Blueprint.cpp"
                           ,0x15b,"HashString.Len()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (FStack_58.Data.ArrayNum != 0) {
      iVar9 = FStack_58.Data.ArrayNum + -1;
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (FStack_58.Data.ArrayNum != 0) {
      FVar7.Data = FStack_58.Data.AllocatorInstance.Data;
    }
    FSHA1::HashBuffer(FVar7.Data,(ulonglong)(uint)(iVar9 * 2),auStack_40);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_3c;
    *(undefined4 *)&this->_padding_ = uStack_38;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uStack_34;
    *(undefined4 *)&this->_padding_ = uStack_30;
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 1476c6270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBlueprint::Serialize(UBlueprint *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UBlueprintCore::Serialize((UBlueprintCore *)this,pFVar1);
  return;
}

// StaticRegisterNativesUBlueprint @ 1476ca230

void __cdecl UBlueprint::StaticRegisterNativesUBlueprint(void)

{
  return;
}

// TagSubobjects @ 1476ca850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UBlueprint::TagSubobjects(UBlueprint *this,EObjectFlags param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UObjectBaseUtility *pUVar5;
  UObjectBaseUtility *pUVar6;
  UObjectBaseUtility *pUVar7;
  
  UObject::TagSubobjects((UObject *)this,param_1);
  lVar2 = this->_padding_;
  pUVar7 = (UObjectBaseUtility *)0x0;
  if ((lVar2 != 0) && (pUVar4 = Z_Construct_UClass_UObject_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (this->_padding_ != 0)) {
      Z_Construct_UClass_UObject_NoRegister();
      lVar2 = this->_padding_;
      pUVar6 = pUVar7;
      if ((lVar2 != 0) &&
         (pUVar4 = Z_Construct_UClass_UObject_NoRegister(), pUVar4 != (UClass *)0x0)) {
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar6 = (UObjectBaseUtility *)this->_padding_;
        }
      }
      UObjectBaseUtility::SetFlags(pUVar6,param_1);
      lVar2 = this->_padding_;
      pUVar6 = pUVar7;
      if ((lVar2 != 0) &&
         (pUVar4 = Z_Construct_UClass_UObject_NoRegister(), pUVar4 != (UClass *)0x0)) {
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar6 = (UObjectBaseUtility *)this->_padding_;
        }
      }
      (**(code **)(*(longlong *)pUVar6 + 0x1e0))(pUVar6,param_1);
    }
  }
  lVar2 = this->_padding_;
  if ((lVar2 != 0) && (pUVar4 = Z_Construct_UClass_UObject_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = this->_padding_, lVar2 != 0)) {
      pUVar4 = Z_Construct_UClass_UObject_NoRegister();
      pUVar6 = pUVar7;
      if (pUVar4 != (UClass *)0x0) {
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar6 = (UObjectBaseUtility *)this->_padding_;
        }
      }
      lVar2 = this->_padding_;
      pUVar5 = pUVar7;
      if ((lVar2 != 0) &&
         (pUVar4 = Z_Construct_UClass_UObject_NoRegister(), pUVar4 != (UClass *)0x0)) {
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar5 = (UObjectBaseUtility *)this->_padding_;
        }
      }
      if (pUVar6 != pUVar5) {
        if (this->_padding_ != 0) {
          Z_Construct_UClass_UObject_NoRegister();
        }
        lVar2 = this->_padding_;
        pUVar6 = pUVar7;
        if ((lVar2 != 0) &&
           (pUVar4 = Z_Construct_UClass_UObject_NoRegister(), pUVar4 != (UClass *)0x0)) {
          iVar1 = (int)pUVar4->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar6 = (UObjectBaseUtility *)this->_padding_;
          }
        }
        UObjectBaseUtility::SetFlags(pUVar6,param_1);
        lVar2 = this->_padding_;
        if ((lVar2 != 0) &&
           (pUVar4 = Z_Construct_UClass_UObject_NoRegister(), pUVar4 != (UClass *)0x0)) {
          iVar1 = (int)pUVar4->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar7 = (UObjectBaseUtility *)this->_padding_;
          }
        }
        (**(code **)(*(longlong *)pUVar7 + 0x1e0))(pUVar7,param_1);
      }
    }
  }
  return;
}

// GetGuidFromClassByFieldName<FProperty> @ 147f9ccc0

bool __cdecl
UBlueprint::GetGuidFromClassByFieldName<FProperty>(UClass *param_1,FName param_2,FGuid *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  undefined1 local_res20 [8];
  TArray<IBlueprintPropertyGuidProvider_*,TSizedDefaultAllocator<32>_> local_38;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetBlueprintHierarchyFromClass(param_1,&local_38);
  iVar2 = local_38.ArrayNum;
  uVar3 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar3 * 8;
  FVar5.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<IBlueprintPropertyGuidProvider_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (FVar5.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar5.Data + 0x10))(*(longlong **)FVar5.Data,&local_28,param_2);
    if (((iStack_1c != 0 || iStack_20 != 0) || iStack_24 != 0) || local_28 != 0) {
      bVar4 = true;
      param_3->A = local_28;
      param_3->B = iStack_24;
      param_3->C = iStack_20;
      param_3->D = iStack_1c;
LAB_147f9cd4f:
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return bVar4;
    }
    uVar3 = local_38._8_8_ & 0xffffffff;
    FVar5.Data = FVar5.Data + 8;
  }
  bVar4 = false;
  goto LAB_147f9cd4f;
}

