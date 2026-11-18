// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 147ca9e20

UClass * __cdecl UInheritableComponentHandler::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInheritableComponentHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InheritableComponentHandler",
               &Z_Registration_Info_UClass_UInheritableComponentHandler.InnerSingleton,
               StaticRegisterNativesUInheritableComponentHandler,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInheritableComponentHandler>,
               InternalVTableHelperCtorCaller<UInheritableComponentHandler>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInheritableComponentHandler.InnerSingleton;
}

// UInheritableComponentHandler @ 147cc6950

UInheritableComponentHandler * __thiscall
UInheritableComponentHandler::UInheritableComponentHandler
          (UInheritableComponentHandler *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInheritableComponentHandler__6B_;
  (this->Records).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Records).ArrayNum = 0;
  (this->Records).ArrayMax = 0;
  (this->UnnecessaryComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnnecessaryComponents).ArrayNum = 0;
  (this->UnnecessaryComponents).ArrayMax = 0;
  return this;
}

// UInheritableComponentHandler @ 147cc6990

UInheritableComponentHandler * __thiscall
UInheritableComponentHandler::UInheritableComponentHandler
          (UInheritableComponentHandler *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInheritableComponentHandler__6B_;
  (this->Records).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Records).ArrayNum = 0;
  (this->Records).ArrayMax = 0;
  (this->UnnecessaryComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnnecessaryComponents).ArrayNum = 0;
  (this->UnnecessaryComponents).ArrayMax = 0;
  return this;
}

// ~UInheritableComponentHandler @ 147cc9550

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
UInheritableComponentHandler::~UInheritableComponentHandler(UInheritableComponentHandler *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInheritableComponentHandler__6B_;
  pFVar1 = (this->UnnecessaryComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FComponentOverrideRecord,int>
            ((FComponentOverrideRecord *)(this->Records).AllocatorInstance.Data,
             (this->Records).ArrayNum);
  pFVar1 = (this->Records).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// FindKey @ 147cf6f40

FComponentKey * __thiscall
UInheritableComponentHandler::FindKey
          (UInheritableComponentHandler *this,FComponentKey *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  UClass *pUVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Records).ArrayNum;
  pFVar5 = (this->Records).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->Records).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FComponentOverrideRecord_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if ((*(FName *)(pFVar5 + 0x18) == param_1) ||
       ((*(longlong *)(pFVar5 + 8) != 0 && (*(FName *)(*(longlong *)(pFVar5 + 8) + 0x18) == param_1)
        ))) {
      pUVar2 = *(UClass **)(pFVar5 + 0x10);
      (__return_storage_ptr__->OwnerClass).field0_0x0.DebugPtr = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      __return_storage_ptr__->SCSVariableName = *(FName *)(pFVar5 + 0x18);
      uVar3 = *(undefined8 *)(pFVar5 + 0x20);
      uVar4 = *(undefined8 *)(pFVar5 + 0x28);
      (__return_storage_ptr__->AssociatedGuid).A = (int)uVar3;
      (__return_storage_ptr__->AssociatedGuid).B = (int)((ulonglong)uVar3 >> 0x20);
      (__return_storage_ptr__->AssociatedGuid).C = (int)uVar4;
      (__return_storage_ptr__->AssociatedGuid).D = (int)((ulonglong)uVar4 >> 0x20);
      return __return_storage_ptr__;
    }
    pFVar5 = pFVar5 + 0x78;
  }
  (__return_storage_ptr__->OwnerClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (__return_storage_ptr__->SCSVariableName).ComparisonIndex = 0;
  (__return_storage_ptr__->SCSVariableName).Number = 0;
  (__return_storage_ptr__->AssociatedGuid).A = 0;
  (__return_storage_ptr__->AssociatedGuid).B = 0;
  (__return_storage_ptr__->AssociatedGuid).C = 0;
  (__return_storage_ptr__->AssociatedGuid).D = 0;
  return __return_storage_ptr__;
}

// FindRecord @ 147cf7000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentOverrideRecord * __thiscall
UInheritableComponentHandler::FindRecord(UInheritableComponentHandler *this,FComponentKey *param_1)

{
  int iVar1;
  FComponentOverrideRecord *pFVar2;
  FComponentOverrideRecord *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Records).ArrayNum;
  pFVar2 = (FComponentOverrideRecord *)(this->Records).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->Records).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FComponentOverrideRecord_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (((pFVar2->ComponentKey).OwnerClass.field0_0x0.DebugPtr ==
         (param_1->OwnerClass).field0_0x0.DebugPtr) &&
       ((((pFVar2->ComponentKey).AssociatedGuid.D == (param_1->AssociatedGuid).D &&
         (pFVar2->ComponentKey).AssociatedGuid.C == (param_1->AssociatedGuid).C) &&
        (pFVar2->ComponentKey).AssociatedGuid.B == (param_1->AssociatedGuid).B) &&
        (pFVar2->ComponentKey).AssociatedGuid.A == (param_1->AssociatedGuid).A)) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  return (FComponentOverrideRecord *)0x0;
}

// FixComponentTemplateName @ 147cf7170

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
UInheritableComponentHandler::FixComponentTemplateName
          (UInheritableComponentHandler *this,UActorComponent *param_1,FName param_2)

{
  code *pcVar1;
  UObjectBase *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FName local_res18 [2];
  FString local_18;
  
  local_res18[0] = param_2;
  pUVar2 = FindObjectWithOuter((UObjectBase *)param_1->_padding_,(UClass *)0x0,param_2);
  if (pUVar2 != (UObjectBase *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x170))(pUVar2,0,0,0x10);
  }
  pcVar1 = *(code **)(param_1->_padding_ + 0x170);
  pFVar3 = ::FName::ToString(local_res18,&local_18);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(param_1,pwVar4,0,0x10);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// FixComponentTemplateNames @ 147cf7210

void __thiscall
UInheritableComponentHandler::FixComponentTemplateNames(UInheritableComponentHandler *this)

{
  return;
}

// GetOverridenComponentTemplate @ 147d0a900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __thiscall
UInheritableComponentHandler::GetOverridenComponentTemplate
          (UInheritableComponentHandler *this,FComponentKey *param_1)

{
  UActorComponent *pUVar1;
  FComponentOverrideRecord *pFVar2;
  
  pFVar2 = FindRecord(this,param_1);
  if (pFVar2 != (FComponentOverrideRecord *)0x0) {
    pUVar1 = (pFVar2->ComponentTemplate).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UActorComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UActorComponent *)0x0;
}

// GetOverridenComponentTemplateData @ 147d0a950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBlueprintCookedComponentInstancingData * __thiscall
UInheritableComponentHandler::GetOverridenComponentTemplateData
          (UInheritableComponentHandler *this,FComponentKey *param_1)

{
  FComponentOverrideRecord *pFVar1;
  FBlueprintCookedComponentInstancingData *pFVar2;
  
  pFVar1 = FindRecord(this,param_1);
  pFVar2 = &pFVar1->CookedComponentInstancingData;
  if (pFVar1 == (FComponentOverrideRecord *)0x0) {
    pFVar2 = (FBlueprintCookedComponentInstancingData *)0x0;
  }
  return pFVar2;
}

// GetPrivateStaticClass @ 147d0c570

UClass * __cdecl UInheritableComponentHandler::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInheritableComponentHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InheritableComponentHandler",
               &Z_Registration_Info_UClass_UInheritableComponentHandler.InnerSingleton,
               StaticRegisterNativesUInheritableComponentHandler,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInheritableComponentHandler>,
               InternalVTableHelperCtorCaller<UInheritableComponentHandler>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInheritableComponentHandler.InnerSingleton;
}

// PreloadAll @ 147d1eb90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UInheritableComponentHandler::PreloadAll(UInheritableComponentHandler *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_38;
  
  UObject::ConditionalPreload((UObject *)this);
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId482,"UInheritableComponentHandler::PreloadAllTemplates",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InheritableComponentHandler.cpp"
               ,0x1e2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId482);
  }
  iVar2 = (this->Records).ArrayNum;
  pFVar5 = (this->Records).AllocatorInstance.Data;
  pFVar7 = pFVar5 + (longlong)iVar2 * 0x78;
  while( true ) {
    if ((this->Records).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FComponentOverrideRecord,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar7) break;
    if (*(UObject **)(pFVar5 + 8) != (UObject *)0x0) {
      UObject::ConditionalPreload(*(UObject **)(pFVar5 + 8));
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      GetObjectsWithOuter(*(UObjectBase **)(pFVar5 + 8),&local_38,true,RF_NoFlags,Borrowed);
      iVar3 = local_38.ArrayNum;
      uVar4 = (ulonglong)local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + uVar4 * 8;
      FVar6.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar4 != iVar3) {
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar6.Data == pFVar1) break;
        UObject::ConditionalPreload(*(UObject **)FVar6.Data);
        uVar4 = local_38._8_8_ & 0xffffffff;
        FVar6.Data = FVar6.Data + 8;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
    pFVar5 = pFVar5 + 0x78;
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PreloadAllTemplates @ 147d1ece0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UInheritableComponentHandler::PreloadAllTemplates(UInheritableComponentHandler *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_38;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId482,"UInheritableComponentHandler::PreloadAllTemplates",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InheritableComponentHandler.cpp"
               ,0x1e2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId482);
  }
  iVar2 = (this->Records).ArrayNum;
  pFVar5 = (this->Records).AllocatorInstance.Data;
  pFVar7 = pFVar5 + (longlong)iVar2 * 0x78;
  while( true ) {
    if ((this->Records).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FComponentOverrideRecord,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar7) break;
    if (*(UObject **)(pFVar5 + 8) != (UObject *)0x0) {
      UObject::ConditionalPreload(*(UObject **)(pFVar5 + 8));
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      GetObjectsWithOuter(*(UObjectBase **)(pFVar5 + 8),&local_38,true,RF_NoFlags,Borrowed);
      iVar3 = local_38.ArrayNum;
      uVar4 = (ulonglong)local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + uVar4 * 8;
      FVar6.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar4 != iVar3) {
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar6.Data == pFVar1) break;
        UObject::ConditionalPreload(*(UObject **)FVar6.Data);
        uVar4 = local_38._8_8_ & 0xffffffff;
        FVar6.Data = FVar6.Data + 8;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
    pFVar5 = pFVar5 + 0x78;
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Serialize @ 147d28630

void __thiscall
UInheritableComponentHandler::Serialize(UInheritableComponentHandler *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147d28650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FBlueprintsObjectVersion::GUID);
  return;
}

// Serialize @ 147d28660

void __thiscall
UInheritableComponentHandler::Serialize
          (UInheritableComponentHandler *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FBlueprintsObjectVersion::GUID);
  return;
}

// StaticRegisterNativesUInheritableComponentHandler @ 147d32900

void __cdecl UInheritableComponentHandler::StaticRegisterNativesUInheritableComponentHandler(void)

{
  return;
}

