// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 23

// CanCullTaskIfUnwired @ 149c01870

bool __thiscall UPCGBaseSubgraphSettings::CanCullTaskIfUnwired(UPCGBaseSubgraphSettings *this)

{
  return false;
}

// HasFlippedTitleLines @ 149c27470

bool __thiscall UPCGBaseSubgraphSettings::HasFlippedTitleLines(UPCGBaseSubgraphSettings *this)

{
  return true;
}

// RequiresDataFromPreTask @ 149c334b0

bool __thiscall UPCGBaseSubgraphSettings::RequiresDataFromPreTask(UPCGBaseSubgraphSettings *this)

{
  return true;
}

// GetOriginalSubgraphInterface @ 149c77a70

UPCGGraphInterface * __thiscall
UPCGBaseSubgraphSettings::GetOriginalSubgraphInterface(UPCGBaseSubgraphSettings *this)

{
  UPCGGraphInterface *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149c77a73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UPCGGraphInterface *)(**(code **)(*(longlong *)this + 0x4f0))();
  return pUVar1;
}

// SetSubgraphInternal @ 149c8c9d0

void __thiscall
UPCGBaseSubgraphSettings::SetSubgraphInternal
          (UPCGBaseSubgraphSettings *this,UPCGGraphInterface *param_1)

{
  return;
}

// StaticClass @ 149c91e40

UClass * __cdecl UPCGBaseSubgraphSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseSubgraphSettings",
               &Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.InnerSingleton,
               StaticRegisterNativesUPCGBaseSubgraphSettings,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBaseSubgraphSettings>,
               InternalVTableHelperCtorCaller<UPCGBaseSubgraphSettings>,aFStackX_8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.InnerSingleton;
}

// UPCGBaseSubgraphSettings @ 149f320c0

UPCGBaseSubgraphSettings * __thiscall
UPCGBaseSubgraphSettings::UPCGBaseSubgraphSettings
          (UPCGBaseSubgraphSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGBaseSubgraphSettings__6B_;
  return this;
}

// UPCGBaseSubgraphSettings @ 149f320f0

UPCGBaseSubgraphSettings * __thiscall
UPCGBaseSubgraphSettings::UPCGBaseSubgraphSettings
          (UPCGBaseSubgraphSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGBaseSubgraphSettings__6B_;
  return this;
}

// ~UPCGBaseSubgraphSettings @ 149f34640

void __thiscall UPCGBaseSubgraphSettings::~UPCGBaseSubgraphSettings(UPCGBaseSubgraphSettings *this)

{
  *(undefined ***)this = &___7UPCGBaseSubgraphSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// BeginDestroy @ 149f3c880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGBaseSubgraphSettings::BeginDestroy(UPCGBaseSubgraphSettings *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if ((*(uint *)&this->field_0x8 >> 0xf & 1) == 0) {
    aFStackX_8[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    aFStackX_8[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UPCGBaseSubgraphSettings **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// FixingOverridableParamPropertyClass @ 149f450a0

void __thiscall
UPCGBaseSubgraphSettings::FixingOverridableParamPropertyClass
          (UPCGBaseSubgraphSettings *this,FPCGSettingsOverridableParam *param_1)

{
  int iVar1;
  UStruct *this_00;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FInstancedPropertyBag *this_01;
  UPropertyBag *this_02;
  FProperty *pFVar5;
  
  plVar4 = (longlong *)(**(code **)(*(longlong *)this + 0x4f0))();
  if ((((plVar4 == (longlong *)0x0) ||
       (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b8))(plVar4), plVar4 == (longlong *)0x0)) ||
      ((param_1->PropertiesNames).ArrayNum == 0)) ||
     ((this_01 = (FInstancedPropertyBag *)(**(code **)(*plVar4 + 0x2c0))(plVar4),
      this_01 == (FInstancedPropertyBag *)0x0 ||
      (this_02 = FInstancedPropertyBag::GetPropertyBagStruct(this_01),
      this_02 == (UPropertyBag *)0x0)))) {
LAB_149f45162:
    this_00 = *(UStruct **)&this->field_0x10;
    if (this_00 == (UStruct *)0x0) {
      return;
    }
    iVar1 = (param_1->PropertiesNames).ArrayNum;
    if (iVar1 == 0) {
      return;
    }
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = UStruct::FindPropertyByName
                       (this_00,*(FName *)(param_1->PropertiesNames).AllocatorInstance.Data);
    if (pFVar5 == (FProperty *)0x0) {
      return;
    }
    this_02 = *(UPropertyBag **)&this->field_0x10;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_149f451d7;
    bVar3 = this_02 == (UPropertyBag *)0x0;
  }
  else {
    if (((param_1->PropertiesNames).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = UStruct::FindPropertyByName
                       ((UStruct *)this_02,
                        *(FName *)(param_1->PropertiesNames).AllocatorInstance.Data);
    if (pFVar5 == (FProperty *)0x0) goto LAB_149f45162;
    bVar3 = UE::GC::GIsIncrementalReachabilityPending == false;
  }
  if (!bVar3) {
    UE::GC::MarkAsReachable((UObject *)this_02);
  }
LAB_149f451d7:
  (param_1->PropertyClass).field0_0x0.DebugPtr = (UStruct *)this_02;
  return;
}

// GetPrivateStaticClass @ 149f4cdb0

UClass * __cdecl UPCGBaseSubgraphSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBaseSubgraphSettings",
               &Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.InnerSingleton,
               StaticRegisterNativesUPCGBaseSubgraphSettings,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBaseSubgraphSettings>,
               InternalVTableHelperCtorCaller<UPCGBaseSubgraphSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBaseSubgraphSettings.InnerSingleton;
}

// GetSubgraph @ 149f4f2c0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall UPCGBaseSubgraphSettings::GetSubgraph(UPCGBaseSubgraphSettings *this)

{
  longlong *plVar1;
  UPCGGraph *pUVar2;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)this + 0x4f0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149f4f2e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UPCGGraph *)(**(code **)(*plVar1 + 0x2b8))(plVar1,*(code **)(*plVar1 + 0x2b8));
    return pUVar2;
  }
  return (UPCGGraph *)0x0;
}

// GetSubgraphInterface @ 149f4f320

UPCGGraphInterface * __thiscall
UPCGBaseSubgraphSettings::GetSubgraphInterface(UPCGBaseSubgraphSettings *this)

{
  return (UPCGGraphInterface *)0x0;
}

// InputPinProperties @ 149f51950

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBaseSubgraphSettings::InputPinProperties
          (UPCGBaseSubgraphSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  UPCGGraph *pUVar2;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  <lambda_1> local_res8 [8];
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_38;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  plVar1 = (longlong *)(**(code **)(*(longlong *)this + 0x4f0))();
  if (plVar1 != (longlong *)0x0) {
    pUVar2 = (UPCGGraph *)(**(code **)(*plVar1 + 0x2b8))(plVar1);
    if (pUVar2 != (UPCGGraph *)0x0) {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      Algo::
      Transform<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGNode::InputPinProperties_::__l2::<lambda_1>_>
                (&((pUVar2->InputNode).field0_0x0.DebugPtr)->InputPins,&local_38,local_res8[0]);
      if (__return_storage_ptr__ == &local_38) {
        iVar4 = local_38.ArrayNum;
      }
      else {
        DestructItems<FPCGPinProperties,int>
                  ((FPCGPinProperties *)(__return_storage_ptr__->AllocatorInstance).Data,
                   __return_storage_ptr__->ArrayNum);
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        (__return_storage_ptr__->AllocatorInstance).Data = local_38.AllocatorInstance.Data;
        __return_storage_ptr__->ArrayNum = local_38.ArrayNum;
        __return_storage_ptr__->ArrayMax = local_38.ArrayMax;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar4 = 0;
      }
      DestructItems<FPCGPinProperties,int>
                ((FPCGPinProperties *)local_38.AllocatorInstance.Data,iVar4);
      if ((FPCGPinProperties *)local_38.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      PCGSubgraphSettings::RemoveAdvancedAndInvisibleOnConnectedPins
                (pUVar2,__return_storage_ptr__,true);
      return __return_storage_ptr__;
    }
  }
  pTVar3 = UPCGSettings::InputPinProperties((UPCGSettings *)this,&local_28);
  if (__return_storage_ptr__ != pTVar3) {
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)(__return_storage_ptr__->AllocatorInstance).Data,
               __return_storage_ptr__->ArrayNum);
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = pTVar3->ArrayNum;
    __return_storage_ptr__->ArrayMax = pTVar3->ArrayMax;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if ((FPCGPinProperties *)local_28.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x30;
  while( true ) {
    if (__return_storage_ptr__->ArrayNum != iVar4) {
      `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (pFVar5[0x29] == (FScriptContainerElement)0x1) {
      pFVar5[0x29] = (FScriptContainerElement)0x0;
    }
    pFVar5 = pFVar5 + 0x30;
  }
  return __return_storage_ptr__;
}

// IsDynamicGraph @ 149f520c0

bool __thiscall UPCGBaseSubgraphSettings::IsDynamicGraph(UPCGBaseSubgraphSettings *this)

{
  return false;
}

// OutputPinProperties @ 149f573d0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBaseSubgraphSettings::OutputPinProperties
          (UPCGBaseSubgraphSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGNode *pUVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  UPCGGraph *pUVar5;
  FPCGDataTypeIdentifier *pFVar6;
  FName *pFVar7;
  <lambda_1> local_res8;
  FPCGDataTypeIdentifier local_28;
  
  plVar4 = (longlong *)(**(code **)(*(longlong *)this + 0x4f0))();
  if (plVar4 != (longlong *)0x0) {
    pUVar5 = (UPCGGraph *)(**(code **)(*plVar4 + 0x2b8))(plVar4);
    if (pUVar5 != (UPCGGraph *)0x0) {
      pUVar1 = (pUVar5->OutputNode).field0_0x0.DebugPtr;
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayMax = 0;
      __return_storage_ptr__->ArrayNum = 0;
      Algo::
      Transform<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGNode::OutputPinProperties_::__l2::<lambda_1>_>
                (&pUVar1->OutputPins,__return_storage_ptr__,local_res8);
      PCGSubgraphSettings::RemoveAdvancedAndInvisibleOnConnectedPins
                (pUVar5,__return_storage_ptr__,false);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar7 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x30);
  FText::GetEmpty();
  pFVar6 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  *pFVar7 = PCGPinConstants::DefaultOutputLabel;
  pFVar7[2].ComparisonIndex = 0;
  pFVar7[2].Number = 0;
  *(undefined1 *)&pFVar7[1].ComparisonIndex.Value = 0;
  pFVar7[2] = (FName)(pFVar6->Ids).AllocatorInstance.Data;
  (pFVar6->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[3].ComparisonIndex.Value = (pFVar6->Ids).ArrayNum;
  pFVar7[3].Number = (pFVar6->Ids).ArrayMax;
  (pFVar6->Ids).ArrayNum = 0;
  (pFVar6->Ids).ArrayMax = 0;
  pFVar7[4].ComparisonIndex.Value = pFVar6->CustomSubtype;
  *(undefined2 *)((longlong)&pFVar7[5].ComparisonIndex.Value + 1) = 0;
  *(undefined1 *)&pFVar7[5].ComparisonIndex.Value = 1;
  *(undefined1 *)((longlong)&pFVar7[5].ComparisonIndex.Value + 3) = 1;
  pFVar2 = (pFVar6->Ids).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// PostDuplicate @ 149f577b0

void __thiscall UPCGBaseSubgraphSettings::PostDuplicate(UPCGBaseSubgraphSettings *this,bool param_1)

{
  longlong lVar1;
  
  LOCK();
  UNLOCK();
  lVar1 = (longlong)UPCGData::UIDCounter + 1;
  UPCGData::UIDCounter = (atomic<unsigned___int64>)((longlong)UPCGData::UIDCounter + 1);
  *(longlong *)&this->field_0x28 = lVar1;
  return;
}

// PostEditImport @ 149f577c0

void __thiscall UPCGBaseSubgraphSettings::PostEditImport(UPCGBaseSubgraphSettings *this)

{
  longlong lVar1;
  
  LOCK();
  UNLOCK();
  lVar1 = (longlong)UPCGData::UIDCounter + 1;
  UPCGData::UIDCounter = (atomic<unsigned___int64>)((longlong)UPCGData::UIDCounter + 1);
  *(longlong *)&this->field_0x28 = lVar1;
  return;
}

// PostInitProperties @ 149f57b90

void __thiscall UPCGBaseSubgraphSettings::PostInitProperties(UPCGBaseSubgraphSettings *this)

{
  bool bVar1;
  undefined4 uVar2;
  
  UObject::PostInitProperties((UObject *)this);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,true);
  if (bVar1) {
    uVar2 = (**(code **)(*(longlong *)this + 0x470))(this);
    *(undefined4 *)&this->field_0x50 = uVar2;
  }
  return;
}

// PostLoad @ 149f57d70

void __thiscall UPCGBaseSubgraphSettings::PostLoad(UPCGBaseSubgraphSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// SetSubgraph @ 149f62e50

void __thiscall
UPCGBaseSubgraphSettings::SetSubgraph(UPCGBaseSubgraphSettings *this,UPCGGraphInterface *param_1)

{
  (**(code **)(*(longlong *)this + 0x510))(this,(char)param_1);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,true);
  return;
}

// StaticRegisterNativesUPCGBaseSubgraphSettings @ 149f638d0

void __cdecl UPCGBaseSubgraphSettings::StaticRegisterNativesUPCGBaseSubgraphSettings(void)

{
  return;
}

