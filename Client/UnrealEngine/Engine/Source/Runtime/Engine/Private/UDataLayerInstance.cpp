// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 43

// StaticClass @ 148a2b3e0

UClass * __cdecl UDataLayerInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstance",
               &Z_Registration_Info_UClass_UDataLayerInstance.InnerSingleton,
               StaticRegisterNativesUDataLayerInstance,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataLayerInstance>,
               InternalVTableHelperCtorCaller<UDataLayerInstance>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstance.InnerSingleton;
}

// UDataLayerInstance @ 148a42760

UDataLayerInstance * __thiscall
UDataLayerInstance::UDataLayerInstance(UDataLayerInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataLayerInstance__6B_;
  (this->Parent).field0_0x0.DebugPtr = (UDataLayerInstance *)0x0;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  return this;
}

// UDataLayerInstance @ 148a427a0

UDataLayerInstance * __thiscall
UDataLayerInstance::UDataLayerInstance(UDataLayerInstance *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->InitialRuntimeState = Unloaded;
  this->_padding_ = (longlong)&___7UDataLayerInstance__6B_;
  (this->Parent).field0_0x0.DebugPtr = (UDataLayerInstance *)0x0;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  return this;
}

// ~UDataLayerInstance @ 148a44690

void __thiscall UDataLayerInstance::~UDataLayerInstance(UDataLayerInstance *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDataLayerInstance__6B_;
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddChild @ 148a49340

void __thiscall UDataLayerInstance::AddChild(UDataLayerInstance *this,UDataLayerInstance *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  UDataLayerInstance *local_18 [2];
  
  pUVar7 = AWorldDataLayers::StaticClass();
  pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar7);
  pUVar7 = AWorldDataLayers::StaticClass();
  pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  if (pUVar8 != pUVar9) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDataLayer->GetDirectOuterWorldDataLayers() == GetDirectOuterWorldDataLayers()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                       ,0x29b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar5 = (**(code **)(this->_padding_ + 0x2f0))(this,param_1);
  if (cVar5 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CanHaveChildDataLayerInstance(InDataLayer)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                       ,0x29c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDataLayerInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
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
  iVar6 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar6 + 1;
  *(UDataLayerInstance **)((this->Children).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UDataLayerInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// CanEditInitialRuntimeState @ 148a4c6e0

bool __thiscall UDataLayerInstance::CanEditInitialRuntimeState(UDataLayerInstance *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148a4c6e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2c0))();
  return (bool)uVar1;
}

// CanHaveChildDataLayerInstance @ 148a4c6f0

bool __thiscall
UDataLayerInstance::CanHaveChildDataLayerInstance
          (UDataLayerInstance *this,UDataLayerInstance *param_1)

{
  return param_1 != (UDataLayerInstance *)0x0;
}

// CanHaveChildDataLayers @ 148a4c700

bool __thiscall UDataLayerInstance::CanHaveChildDataLayers(UDataLayerInstance *this)

{
  return true;
}

// CanHaveParentDataLayer @ 148a4c710

bool __thiscall UDataLayerInstance::CanHaveParentDataLayer(UDataLayerInstance *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148a4c713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2f8))();
  return (bool)uVar1;
}

// CanHaveParentDataLayerInstance @ 148a4c720

bool __thiscall UDataLayerInstance::CanHaveParentDataLayerInstance(UDataLayerInstance *this)

{
  return true;
}

// ForEachChild @ 148a53260

void __thiscall
UDataLayerInstance::ForEachChild
          (UDataLayerInstance *this,TFunctionRef<bool___cdecl(UDataLayerInstance_const_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_res8;
  
  pFVar4 = (this->Children).AllocatorInstance.Data;
  iVar2 = (this->Children).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Children).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDataLayerInstance>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_res8 = *(undefined8 *)pFVar4;
    cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
    if (cVar3 == '\0') {
      return;
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// GetAsset @ 148a542e0

UDataLayerAsset * __thiscall UDataLayerInstance::GetAsset(UDataLayerInstance *this)

{
  return (UDataLayerAsset *)0x0;
}

// GetDataLayerFName @ 148a55820

FName __thiscall UDataLayerInstance::GetDataLayerFName(UDataLayerInstance *this)

{
  FName in_RDX;
  
  *(longlong *)in_RDX = this->_padding_;
  return in_RDX;
}

// GetDataLayerFullName @ 148a55b70

FString * __thiscall
UDataLayerInstance::GetDataLayerFullName(UDataLayerInstance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Invalid Data Layer");
  return __return_storage_ptr__;
}

// GetDataLayerShortName @ 148a571d0

FString * __thiscall
UDataLayerInstance::GetDataLayerShortName(UDataLayerInstance *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Invalid Data Layer");
  return __return_storage_ptr__;
}

// GetDebugColor @ 148a57340

FColor __thiscall UDataLayerInstance::GetDebugColor(UDataLayerInstance *this)

{
  FColor_u_0 *in_RDX;
  
  in_RDX->_s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  return (FColor)SUB84(in_RDX,0);
}

// GetDirectOuterWorldDataLayers @ 148a573e0

AWorldDataLayers * __thiscall
UDataLayerInstance::GetDirectOuterWorldDataLayers(UDataLayerInstance *this)

{
  UClass *pUVar1;
  AWorldDataLayers *pAVar2;
  
  pUVar1 = AWorldDataLayers::StaticClass();
  pAVar2 = (AWorldDataLayers *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pAVar2;
}

// GetEffectiveRuntimeState @ 148a57ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerInstance::GetEffectiveRuntimeState(UDataLayerInstance *this)

{
  code *pcVar1;
  bool bVar2;
  EDataLayerRuntimeState EVar3;
  longlong lVar4;
  UWorld *this_00;
  AWorldDataLayers *pAVar5;
  FName *pFVar6;
  undefined1 local_res8 [8];
  
  lVar4 = (**(code **)(this->_padding_ + 0x2b0))();
  if (lVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuterWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x2b0))(this);
  pAVar5 = UWorld::GetWorldDataLayers(this_00);
  pFVar6 = (FName *)(**(code **)(this->_padding_ + 800))(this,local_res8);
  EVar3 = FWorldDataLayersEffectiveStates::GetDataLayerEffectiveRuntimeStateByName
                    (&pAVar5->EffectiveStates,*pFVar6);
  return EVar3;
}

// GetOuterWorld @ 148a592a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UDataLayerInstance::GetOuterWorld(UDataLayerInstance *this)

{
  UClass *pUVar1;
  UWorld *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar2 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2;
}

// GetOuterWorldDataLayers @ 148a59550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AWorldDataLayers * __thiscall UDataLayerInstance::GetOuterWorldDataLayers(UDataLayerInstance *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  AWorldDataLayers *pAVar4;
  UWorld *this_00;
  
  lVar3 = (**(code **)(this->_padding_ + 0x2b0))();
  if (lVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuterWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar4 = (AWorldDataLayers *)(*pcVar1)();
      return pAVar4;
    }
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x2b0))(this);
  pAVar4 = UWorld::GetWorldDataLayers(this_00);
  return pAVar4;
}

// GetPrivateStaticClass @ 148a5a1b0

UClass * __cdecl UDataLayerInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerInstance",
               &Z_Registration_Info_UClass_UDataLayerInstance.InnerSingleton,
               StaticRegisterNativesUDataLayerInstance,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataLayerInstance>,
               InternalVTableHelperCtorCaller<UDataLayerInstance>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerInstance.InnerSingleton;
}

// GetRuntimeState @ 148a5b0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall UDataLayerInstance::GetRuntimeState(UDataLayerInstance *this)

{
  code *pcVar1;
  bool bVar2;
  EDataLayerRuntimeState EVar3;
  longlong lVar4;
  UWorld *this_00;
  AWorldDataLayers *this_01;
  FName *pFVar5;
  undefined1 local_res8 [8];
  
  lVar4 = (**(code **)(this->_padding_ + 0x2b0))();
  if (lVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuterWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x2b0))(this);
  this_01 = UWorld::GetWorldDataLayers(this_00);
  pFVar5 = (FName *)(**(code **)(this->_padding_ + 800))(this,local_res8);
  EVar3 = AWorldDataLayers::GetDataLayerRuntimeStateByName(this_01,*pFVar5);
  return EVar3;
}

// GetType @ 148a5b410

EDataLayerType __thiscall UDataLayerInstance::GetType(UDataLayerInstance *this)

{
  return Unknown;
}

// IsClientOnly @ 148a5e130

bool __thiscall UDataLayerInstance::IsClientOnly(UDataLayerInstance *this)

{
  return false;
}

// IsEffectiveVisible @ 148a5e530

bool __thiscall UDataLayerInstance::IsEffectiveVisible(UDataLayerInstance *this)

{
  return false;
}

// IsInitiallyVisible @ 148a5ead0

bool __thiscall UDataLayerInstance::IsInitiallyVisible(UDataLayerInstance *this)

{
  return false;
}

// IsRuntime @ 148a5eb10

bool __thiscall UDataLayerInstance::IsRuntime(UDataLayerInstance *this)

{
  return false;
}

// IsServerOnly @ 148a5ec60

bool __thiscall UDataLayerInstance::IsServerOnly(UDataLayerInstance *this)

{
  return false;
}

// IsVisible @ 148a5ed70

bool __thiscall UDataLayerInstance::IsVisible(UDataLayerInstance *this)

{
  return false;
}

// PostLoad @ 148a614b0

void __thiscall UDataLayerInstance::PostLoad(UDataLayerInstance *this)

{
  int *piVar1;
  UDataLayerInstance *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  UDataLayerInstance *local_18 [2];
  
  UObject::PostLoad((UObject *)this);
  this_00 = (this->Parent).field0_0x0.DebugPtr;
  if (this_00 != (UDataLayerInstance *)0x0) {
    pUVar7 = AWorldDataLayers::StaticClass();
    pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
    pUVar7 = AWorldDataLayers::StaticClass();
    pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar7);
    if (pUVar8 != pUVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDataLayer->GetDirectOuterWorldDataLayers() == GetDirectOuterWorldDataLayers()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                         ,0x29b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    cVar5 = (**(code **)(this_00->_padding_ + 0x2f0))(this_00,this);
    if (cVar5 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CanHaveChildDataLayerInstance(InDataLayer)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                         ,0x29c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pFVar2 = (this_00->Children).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this_00->Children).ArrayMax * 8))
    {
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
    iVar6 = (this_00->Children).ArrayNum;
    piVar1 = &(this_00->Children).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this_00->Children).AllocatorInstance,piVar1);
    }
    (this_00->Children).ArrayNum = iVar6 + 1;
    *(UDataLayerInstance **)((this_00->Children).AllocatorInstance.Data + (longlong)iVar6 * 8) =
         local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UDataLayerInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// StaticRegisterNativesUDataLayerInstance @ 148a6a3b0

void __cdecl UDataLayerInstance::StaticRegisterNativesUDataLayerInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UDataLayerInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAsset @ 148a6e890

void __cdecl UDataLayerInstance::execGetAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x318))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetDataLayerFullName @ 148a6ed10

void __cdecl
UDataLayerInstance::execGetDataLayerFullName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetDataLayerShortName @ 148a6f880

void __cdecl
UDataLayerInstance::execGetDataLayerShortName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execGetDebugColor @ 148a6fb00

void __cdecl UDataLayerInstance::execGetDebugColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 *puVar1;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined4 *)(**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_res8);
  *(undefined4 *)param_3 = *puVar1;
  return;
}

// execGetInitialRuntimeState @ 148a6fbd0

void __cdecl
UDataLayerInstance::execGetInitialRuntimeState(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  if (cVar1 != '\0') {
    *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 1);
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetType @ 148a6fea0

void __cdecl UDataLayerInstance::execGetType(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsClientOnly @ 148a6ff50

void __cdecl UDataLayerInstance::execIsClientOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsEffectiveVisible @ 148a6ffe0

void __cdecl
UDataLayerInstance::execIsEffectiveVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsInitiallyVisible @ 148a70060

void __cdecl
UDataLayerInstance::execIsInitiallyVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsRuntime @ 148a70120

void __cdecl UDataLayerInstance::execIsRuntime(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsServerOnly @ 148a701d0

void __cdecl UDataLayerInstance::execIsServerOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsVisible @ 148a70230

void __cdecl UDataLayerInstance::execIsVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

