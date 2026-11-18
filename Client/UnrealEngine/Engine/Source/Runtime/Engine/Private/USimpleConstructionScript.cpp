// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// StaticClass @ 148585260

UClass * __cdecl USimpleConstructionScript::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleConstructionScript.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SimpleConstructionScript",
               &Z_Registration_Info_UClass_USimpleConstructionScript.InnerSingleton,
               StaticRegisterNativesUSimpleConstructionScript,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USimpleConstructionScript>,
               InternalVTableHelperCtorCaller<USimpleConstructionScript>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleConstructionScript.InnerSingleton;
}

// USimpleConstructionScript @ 1485a56d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USimpleConstructionScript * __thiscall
USimpleConstructionScript::USimpleConstructionScript
          (USimpleConstructionScript *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USimpleConstructionScript__6B_;
  (this->RootNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootNodes).ArrayNum = 0;
  (this->RootNodes).ArrayMax = 0;
  (this->AllNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllNodes).ArrayNum = 0;
  (this->AllNodes).ArrayMax = 0;
  (this->DefaultSceneRootNode).field0_0x0.DebugPtr = (USCS_Node *)0x0;
  *(undefined8 *)&this->NameToSCSNodeMap = 0;
  *(undefined8 *)&(this->NameToSCSNodeMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameToSCSNodeMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameToSCSNodeMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameToSCSNodeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToSCSNodeMap).field_0x34 = 0;
  *(undefined4 *)&(this->NameToSCSNodeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameToSCSNodeMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameToSCSNodeMap).field_0x48 = 0;
  return this;
}

// USimpleConstructionScript @ 1485a5750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USimpleConstructionScript * __thiscall
USimpleConstructionScript::USimpleConstructionScript
          (USimpleConstructionScript *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USimpleConstructionScript__6B_;
  (this->RootNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootNodes).ArrayNum = 0;
  (this->RootNodes).ArrayMax = 0;
  (this->AllNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllNodes).ArrayNum = 0;
  (this->AllNodes).ArrayMax = 0;
  *(undefined8 *)&this->NameToSCSNodeMap = 0;
  *(undefined8 *)&(this->NameToSCSNodeMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameToSCSNodeMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameToSCSNodeMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameToSCSNodeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToSCSNodeMap).field_0x34 = 0;
  *(undefined4 *)&(this->NameToSCSNodeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameToSCSNodeMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameToSCSNodeMap).field_0x48 = 0;
  (this->DefaultSceneRootNode).field0_0x0.DebugPtr = (USCS_Node *)0x0;
  this->NameToSCSNodeMapRefCount = 0;
  this->ReregisterContext = (FStaticMeshComponentBulkReregisterContext *)0x0;
  return this;
}

// ~USimpleConstructionScript @ 1485a6180

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
USimpleConstructionScript::~USimpleConstructionScript(USimpleConstructionScript *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7USimpleConstructionScript__6B_;
  *(undefined4 *)&(this->NameToSCSNodeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameToSCSNodeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,USCS_Node_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,USCS_Node_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,USCS_Node_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToSCSNodeMap);
  pFVar2 = (this->AllNodes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RootNodes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddNode @ 1485a9dc0

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
USimpleConstructionScript::AddNode(USimpleConstructionScript *this,USCS_Node *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  USCS_Node *local_18;
  USCS_Node *local_10;
  
  pFVar5 = (this->RootNodes).AllocatorInstance.Data;
  pFVar2 = pFVar5 + (longlong)(this->RootNodes).ArrayNum * 8;
  for (; pFVar5 != pFVar2; pFVar5 = pFVar5 + 8) {
    if (*(USCS_Node **)pFVar5 == (USCS_Node *)0x0) {
      bVar6 = param_1 == (USCS_Node *)0x0;
    }
    else {
      bVar6 = *(USCS_Node **)pFVar5 == param_1;
    }
    if (bVar6) {
      return;
    }
  }
  local_18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USCS_Node *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->RootNodes).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->RootNodes).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (this->RootNodes).ArrayNum;
  piVar1 = &(this->RootNodes).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->RootNodes).AllocatorInstance,piVar1);
  }
  (this->RootNodes).ArrayNum = iVar4 + 1;
  *(USCS_Node **)((this->RootNodes).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (USCS_Node *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18);
  }
  local_10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USCS_Node *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->AllNodes).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_10) &&
      ((FScriptContainerElement *)&local_10 < pFVar2 + (longlong)(this->AllNodes).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (this->AllNodes).ArrayNum;
  piVar1 = &(this->AllNodes).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->AllNodes).AllocatorInstance,piVar1);
  }
  (this->AllNodes).ArrayNum = iVar4 + 1;
  *(USCS_Node **)((this->AllNodes).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_10 != (USCS_Node *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_10);
  }
  return;
}

// CreateNameToSCSNodeMap @ 1485aff10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USimpleConstructionScript::CreateNameToSCSNodeMap(USimpleConstructionScript *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong local_res8;
  undefined1 local_res10 [16];
  USCS_Node **local_res20;
  undefined8 local_68;
  USCS_Node ***local_60;
  longlong *local_58;
  undefined8 *local_50;
  longlong *local_48;
  
  if (this->NameToSCSNodeMapRefCount == 0) {
    TSet<TTuple<FName,USCS_Node_*>,TDefaultMapHashableKeyFuncs<FName,USCS_Node_*,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FName,USCS_Node_*>,TDefaultMapHashableKeyFuncs<FName,USCS_Node_*,0>,FDefaultSetAllocator>
               *)&this->NameToSCSNodeMap,(this->AllNodes).ArrayNum * 2);
    pFVar3 = (this->AllNodes).AllocatorInstance.Data;
    iVar2 = (this->AllNodes).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->AllNodes).ArrayNum != iVar2) {
        `TCheckedPointerIterator<USCS_Node_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar3 == pFVar1) break;
      local_res8 = *(longlong *)pFVar3;
      if (local_res8 != 0) {
        local_res20 = *(USCS_Node ***)(local_res8 + 0xd0);
        local_60 = &local_res20;
        local_58 = &local_res8;
        TSet<TTuple<FName,USCS_Node_*>,TDefaultMapHashableKeyFuncs<FName,USCS_Node_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_&&,USCS_Node_*_const_&>_>
                  ((TSet<TTuple<FName,USCS_Node_*>,TDefaultMapHashableKeyFuncs<FName,USCS_Node_*,0>,FDefaultSetAllocator>
                    *)&this->NameToSCSNodeMap,
                   (TPairInitializer<FName_&&,USCS_Node_*_const_&> *)local_res10,(bool *)&local_60);
        if (*(longlong *)(local_res8 + 0x30) != 0) {
          local_68 = *(undefined8 *)(*(longlong *)(local_res8 + 0x30) + 0x18);
          local_50 = &local_68;
          local_48 = &local_res8;
          TSet<TTuple<FName,USCS_Node_*>,TDefaultMapHashableKeyFuncs<FName,USCS_Node_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_&&,USCS_Node_*_const_&>_>
                    ((TSet<TTuple<FName,USCS_Node_*>,TDefaultMapHashableKeyFuncs<FName,USCS_Node_*,0>,FDefaultSetAllocator>
                      *)&this->NameToSCSNodeMap,
                     (TPairInitializer<FName_&&,USCS_Node_*_const_&> *)(local_res10 + 8),
                     (bool *)&local_50);
        }
      }
      pFVar3 = pFVar3 + 8;
    }
  }
  this->NameToSCSNodeMapRefCount = this->NameToSCSNodeMapRefCount + 1;
  return;
}

// ExecuteScriptOnActor @ 1485bab80

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

void __thiscall
USimpleConstructionScript::ExecuteScriptOnActor
          (USimpleConstructionScript *this,AActor *param_1,
          TInlineComponentArray<USceneComponent_*,24> *param_2,TTransform<double> *param_3,
          FRotationConversionCache *param_4,bool param_5,ESpawnActorScaleMethod param_6)

{
  int iVar1;
  USCS_Node *this_00;
  USCS_Node *pUVar2;
  UStruct *pUVar3;
  FName FVar4;
  code *pcVar5;
  FField *pFVar6;
  bool bVar7;
  USceneComponent *pUVar8;
  UClass *pUVar9;
  USceneComponent *pUVar10;
  longlong *plVar11;
  TInlineComponentArray<USceneComponent_*,24> *pTVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  undefined1 auStackY_178 [32];
  undefined1 local_138;
  undefined1 local_137 [7];
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  uint local_120;
  FName local_11c;
  USceneComponent *local_110;
  TFieldIterator<FObjectPropertyBase> local_108;
  undefined8 local_f0;
  AActor *local_e8;
  USimpleConstructionScript *local_e0;
  FRotationConversionCache *local_d8;
  TTransform<double> *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_d8 = param_4;
  local_e8 = param_1;
  local_e0 = this;
  local_d0 = param_3;
  if ((this->RootNodes).ArrayNum < 1) {
    if ((param_1->RootComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)param_1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar9 = Z_Construct_UClass_USceneComponent_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar9);
      local_c8._8_8_ = param_1;
      pUVar10 = (USceneComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar11 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar10,RF_Transactional);
      *(undefined1 *)((longlong)&pUVar10->_padding_ + 1) = 1;
      if (param_4 != (FRotationConversionCache *)0x0) {
        USceneComponent::SetRelativeRotationCache(pUVar10,param_4);
      }
      USceneComponent::SetWorldTransform(pUVar10,param_3,false,(FHitResult *)0x0,None);
      AActor::SetRootComponent(param_1,pUVar10);
      UActorComponent::RegisterComponent((UActorComponent *)pUVar10);
    }
  }
  else {
    local_120 = (this->RootNodes).ArrayNum;
    uVar15 = (ulonglong)(int)local_120;
    pFVar13 = (this->RootNodes).AllocatorInstance.Data;
    local_110 = (param_1->RootComponent).field0_0x0.DebugPtr;
    pFVar14 = pFVar13 + uVar15 * 8;
    local_128 = pFVar14;
    while( true ) {
      pUVar10 = (USceneComponent *)0x0;
      local_130 = pFVar13;
      if ((local_e0->RootNodes).ArrayNum != (int)uVar15) {
        local_138 = 0;
        `TCheckedPointerIterator<TObjectPtr<USCS_Node>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_138);
      }
      if (pFVar13 == pFVar14) break;
      this_00 = *(USCS_Node **)pFVar13;
      if ((this_00 != (USCS_Node *)0x0) &&
         (((pUVar2 = (local_e0->DefaultSceneRootNode).field0_0x0.DebugPtr,
           pUVar2 == (USCS_Node *)0x0 || (pUVar2 != this_00)) ||
          (local_110 == (USceneComponent *)0x0)))) {
        local_f0 = 0;
        pUVar8 = pUVar10;
        if (this_00->ParentComponentOrVariableName != (FName)0x0) {
          pUVar3 = (UStruct *)param_1->_padding_;
          if ((pUVar3 == (UStruct *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ActorClass != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SimpleConstructionScript.cpp"
                                 ,0x288,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (this_00->bIsParentComponentNative == false) {
            FVar4 = this_00->ParentComponentOrVariableName;
            pFVar13 = local_130;
            pFVar14 = local_128;
            if (FVar4 != (FName)0x0) {
              if (pUVar3 == (UStruct *)0x0) {
                local_108.Field = (FField *)0x0;
              }
              else {
                local_108.Field = pUVar3->ChildProperties;
              }
              local_108.InterfaceIndex = -1;
              local_108.bIncludeSuper = true;
              local_108.bIncludeDeprecated = true;
              local_108.bIncludeInterface = false;
              local_108.Struct = pUVar3;
              TFieldIterator<FObjectPropertyBase>::IterateToNext(&local_108);
              pFVar6 = local_108.Field;
              while (pFVar13 = local_130, pFVar14 = local_128, pUVar8 = (USceneComponent *)0x0,
                    local_108.Field = pFVar6, pFVar6 != (FField *)0x0) {
                bVar7 = IsThisNotNull(pFVar6,"FField::GetFName");
                if (bVar7) {
                  local_11c = pFVar6->NamePrivate;
                }
                else {
                  local_11c.ComparisonIndex.Value = 0;
                  local_11c.Number = 0;
                }
                if (local_11c == FVar4) {
                  pFVar13 = local_130;
                  pFVar14 = local_128;
                  pUVar8 = (USceneComponent *)0x0;
                  if (pFVar6 == (FField *)0x0) break;
                  pUVar8 = (USceneComponent *)
                           (**(code **)(pFVar6->_padding_ + 0x208))(pFVar6,param_1,0);
                  if (pUVar8 != (USceneComponent *)0x0) {
                    pUVar9 = Z_Construct_UClass_USceneComponent_NoRegister();
                    iVar1 = (int)pUVar9->_padding_;
                    if ((iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
                       (pFVar13 = local_130, pFVar14 = local_128,
                       (longlong *)
                       *(undefined1 **)
                        (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                       &pUVar9->_padding_)) break;
                  }
                  pFVar13 = local_130;
                  pFVar14 = local_128;
                  pUVar8 = (USceneComponent *)0x0;
                  break;
                }
                local_108.Field = pFVar6->Next;
                TFieldIterator<FObjectPropertyBase>::IterateToNext(&local_108);
                pFVar6 = local_108.Field;
              }
            }
          }
          else {
            iVar1 = *(int *)&param_2->field_0xc8;
            pTVar12 = param_2;
            if (*(TInlineComponentArray<USceneComponent_*,24> **)&param_2->field_0xc0 !=
                (TInlineComponentArray<USceneComponent_*,24> *)0x0) {
              pTVar12 = *(TInlineComponentArray<USceneComponent_*,24> **)&param_2->field_0xc0;
            }
            plVar11 = (longlong *)&pTVar12->field_0x0;
            while( true ) {
              if (*(int *)&param_2->field_0xc8 != iVar1) {
                local_137[0] = 0;
                `TCheckedPointerIterator<USceneComponent_*_const,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_137);
              }
              pFVar13 = local_130;
              param_1 = local_e8;
              pFVar14 = local_128;
              pUVar8 = pUVar10;
              if (pTVar12 == (TInlineComponentArray<USceneComponent_*,24> *)(plVar11 + iVar1))
              break;
              pUVar8 = *(USceneComponent **)pTVar12;
              if ((pUVar8 == (USceneComponent *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NativeSceneComponent != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SimpleConstructionScript.cpp"
                                     ,0x28f,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar13 = local_130;
              param_1 = local_e8;
              pFVar14 = local_128;
              if ((FName)pUVar8->_padding_ == this_00->ParentComponentOrVariableName) break;
              pTVar12 = (TInlineComponentArray<USceneComponent_*,24> *)&pTVar12->field_0x8;
            }
          }
        }
        pUVar10 = local_110;
        if (pUVar8 != (USceneComponent *)0x0) {
          pUVar10 = pUVar8;
        }
        USCS_Node::ExecuteNodeOnActor(this_00,param_1,pUVar10,local_d0,local_d8,param_5,param_6);
      }
      pFVar13 = pFVar13 + 8;
      uVar15 = (ulonglong)local_120;
    }
  }
  return;
}

// FindParentNode @ 1485c1890

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USCS_Node * __thiscall
USimpleConstructionScript::FindParentNode(USimpleConstructionScript *this,USCS_Node *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  USCS_Node *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->AllNodes).AllocatorInstance.Data;
  iVar3 = (this->AllNodes).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AllNodes).ArrayNum != iVar3) {
      `TCheckedPointerIterator<USCS_Node_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    pUVar4 = *(USCS_Node **)pFVar6;
    if (pUVar4 != (USCS_Node *)0x0) {
      pFVar5 = (pUVar4->ChildNodes).AllocatorInstance.Data;
      pFVar2 = pFVar5 + (longlong)(pUVar4->ChildNodes).ArrayNum * 8;
      for (; pFVar5 != pFVar2; pFVar5 = pFVar5 + 8) {
        if (*(USCS_Node **)pFVar5 == param_1) {
          return pUVar4;
        }
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  return (USCS_Node *)0x0;
}

// FindPromotableChildNodeIndex @ 1485c1920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
USimpleConstructionScript::FindPromotableChildNodeIndex
          (USimpleConstructionScript *this,USCS_Node *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((param_1->ChildNodes).ArrayNum < 1) {
    return -1;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1->ChildNodes).AllocatorInstance.Data + 0x30);
  if (plVar1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar1 + 0x120))();
    if (cVar3 != '\0') {
      uVar7 = 1;
      if ((param_1->ChildNodes).ArrayNum < 2) {
        return 0;
      }
      lVar8 = 8;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (param_1->ChildNodes).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
        }
        plVar1 = *(longlong **)
                  (*(longlong *)((param_1->ChildNodes).AllocatorInstance.Data + lVar8) + 0x30);
        if (plVar1 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar1 + 0x120))();
          if (cVar3 == '\0') {
            return uVar7;
          }
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < (param_1->ChildNodes).ArrayNum);
      return 0;
    }
  }
  return 0;
}

// FindSCSNode @ 1485c1a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USCS_Node * __thiscall
USimpleConstructionScript::FindSCSNode(USimpleConstructionScript *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USCS_Node *pUVar3;
  UActorComponent *pUVar4;
  TTuple<FName,USCS_Node_*> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if (0 < *(int *)&(this->NameToSCSNodeMap).field_0x8 - *(int *)&(this->NameToSCSNodeMap).field_0x34
     ) {
    pTVar5 = TSet<TTuple<FName,USCS_Node_*>,TDefaultMapHashableKeyFuncs<FName,USCS_Node_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,USCS_Node_*>,TDefaultMapHashableKeyFuncs<FName,USCS_Node_*,0>,FDefaultSetAllocator>
                     *)&this->NameToSCSNodeMap,param_1);
    if (pTVar5 == (TTuple<FName,USCS_Node_*> *)0x0) {
      return (USCS_Node *)0x0;
    }
    return *(USCS_Node **)&pTVar5->field_0x8;
  }
  iVar2 = (this->AllNodes).ArrayNum;
  pFVar6 = (this->AllNodes).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  do {
    if ((this->AllNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<USCS_Node_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) {
      return (USCS_Node *)0x0;
    }
    pUVar3 = *(USCS_Node **)pFVar6;
    if (pUVar3 != (USCS_Node *)0x0) {
      if (pUVar3->InternalVariableName == param_1) {
        return pUVar3;
      }
      pUVar4 = (pUVar3->ComponentTemplate).field0_0x0.DebugPtr;
      if ((pUVar4 != (UActorComponent *)0x0) && ((FName)pUVar4->_padding_ == param_1)) {
        return pUVar3;
      }
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// FindSCSNodeByGuid @ 1485c1b00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USCS_Node * __thiscall
USimpleConstructionScript::FindSCSNodeByGuid(USimpleConstructionScript *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USCS_Node *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->AllNodes).AllocatorInstance.Data;
  iVar2 = (this->AllNodes).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AllNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<USCS_Node_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pUVar3 = *(USCS_Node **)pFVar4;
    if ((pUVar3 != (USCS_Node *)0x0) &&
       ((((pUVar3->VariableGuid).D == param_1->D && (pUVar3->VariableGuid).B == param_1->B) &&
        (pUVar3->VariableGuid).A == param_1->A) && (pUVar3->VariableGuid).C == param_1->C)) {
      return pUVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return (USCS_Node *)0x0;
}

// FixupRootNodeParentReferences @ 1485c23b0

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
USimpleConstructionScript::FixupRootNodeParentReferences(USimpleConstructionScript *this)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  uint *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar12;
  bool bVar13;
  bool bVar14;
  UClass *pUVar15;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar16;
  int iVar17;
  UObject *pUVar18;
  longlong *plVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  longlong local_148;
  TArray<UBlueprintGeneratedClass_const_*,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  int local_110;
  int local_10c;
  FName local_108;
  FName local_100;
  FString local_f8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  pUVar5 = (UClass *)this->_padding_;
  if (pUVar5 != (UClass *)0x0) {
    pUVar15 = Z_Construct_UClass_UClass_NoRegister();
    iVar17 = (int)pUVar15->_padding_;
    if ((iVar17 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar17 * 8)
        == &pUVar15->_padding_)) {
      local_res20 = 0;
      if ((this->RootNodes).ArrayNum < 1) {
        return;
      }
      local_148 = 0;
LAB_1485c2450:
      uVar22 = 0;
      if ((int)local_res20 < (this->RootNodes).ArrayNum) {
        uVar22 = ~local_res20 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_128 = 0;
      lVar6 = *(longlong *)((this->RootNodes).AllocatorInstance.Data + local_148);
      if (*(longlong *)(lVar6 + 0x88) != 0) {
        bVar13 = false;
        if (*(char *)(lVar6 + 0x98) != '\0') {
          pUVar18 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
          if (pUVar18 == (UObject *)0x0) {
LAB_1485c2511:
            pUVar18 = (UObject *)0x0;
          }
          else {
            pUVar15 = Z_Construct_UClass_AActor_NoRegister();
            iVar17 = (int)pUVar15->_padding_;
            if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar17) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar17 * 8) !=
                &pUVar15->_padding_)) goto LAB_1485c2511;
          }
          if (pUVar18 != (UObject *)0x0) {
            pTVar16 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                                ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                                  *)&pUVar18[0xe].field_0x18);
            iStack_e0 = 0;
            local_c8 = 0;
            uStack_dc = 1;
            local_d8 = &(pTVar16->Elements).field_0x10;
            iVar17 = *(int *)&(pTVar16->Elements).field_0x28;
            iStack_cc = 0;
            if (iVar17 != 0) {
              puVar7 = *(uint **)&(pTVar16->Elements).field_0x20;
              puVar24 = (uint *)local_d8;
              if (puVar7 != (uint *)0x0) {
                puVar24 = puVar7;
              }
              uVar22 = *puVar24;
              while (uVar22 == 0) {
                iStack_e0 = iStack_e0 + 1;
                local_c8 = local_c8 + 0x20;
                iStack_cc = iVar17;
                if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0)
                goto LAB_1485c25af;
                uVar22 = puVar24[iStack_e0];
              }
              uStack_dc = -uVar22 & uVar22;
              uVar2 = (ulonglong)uStack_dc * 2 + 1;
              lVar21 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              local_110 = (int)lVar21;
              iStack_cc = local_c8 + -1 + local_110;
              if (iVar17 < iStack_cc) {
                iStack_cc = iVar17;
              }
            }
LAB_1485c25af:
            uVar22 = *(uint *)&(pTVar16->Elements).field_0x28;
            puVar3 = &(pTVar16->Elements).field_0x10;
            uStack_c4 = local_4c;
            uVar20 = uVar22 & 0xffffffe0;
            iStack_c0 = *(int *)&(pTVar16->Elements).field_0x8 -
                        *(int *)&(pTVar16->Elements).field_0x34;
            TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
            uStack_d0 = 0xffffffff;
            TStack_b0.CurrentBitIndex = iStack_cc;
            TStack_b0.UnvisitedBitMask = 0xffffffff;
            iVar17 = (int)uVar22 >> 5;
            TStack_b0._28_4_ = local_4c;
            TStack_b0.BaseBitIndex = local_c8;
            uStack_90 = CONCAT44(uStack_bc,iStack_c0);
            local_e8 = pTVar16;
            local_b8 = pTVar16;
            TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
            if ((((int)uVar22 < 0) || (*(int *)&(pTVar16->Elements).field_0x28 < (int)uVar22)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar13)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar4 = *(uint *)&(pTVar16->Elements).field_0x28;
            if (uVar22 != uVar4) {
              puVar8 = *(undefined1 **)&(pTVar16->Elements).field_0x20;
              puVar23 = puVar3;
              if (puVar8 != (undefined1 *)0x0) {
                puVar23 = puVar8;
              }
              uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar17 * 4);
              while (uVar22 == 0) {
                iVar17 = iVar17 + 1;
                uVar20 = uVar20 + 0x20;
                uVar22 = uVar4;
                if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar17)
                goto LAB_1485c26c0;
                uVar22 = *(uint *)(puVar23 + (longlong)iVar17 * 4);
              }
              uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
              lVar21 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              local_10c = (int)lVar21;
              uVar22 = local_10c + -1 + uVar20;
              if ((int)uVar4 < (int)uVar22) {
                uVar22 = uVar4;
              }
            }
LAB_1485c26c0:
            do {
              pTVar12 = local_b8;
              if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34
                  != (int)uStack_90) {
                local_res10[0] = 0;
                `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
              }
              if (((TStack_b0.CurrentBitIndex == uVar22) &&
                  (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
                 (pTVar12 == pTVar16)) goto LAB_1485c2869;
              lVar21 = *(longlong *)
                        (*(longlong *)&pTVar12->Elements +
                        (longlong)TStack_b0.CurrentBitIndex * 0x10);
              if ((lVar21 != 0) && (*(longlong *)(lVar21 + 0x18) == *(longlong *)(lVar6 + 0x88)))
              break;
              TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
            } while( true );
          }
          goto LAB_1485c2992;
        }
        local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.ArrayNum = 0;
        local_138.ArrayMax = 0;
        UBlueprintGeneratedClass::GetGeneratedClassesHierarchy(pUVar5,&local_138);
        uVar22 = local_138.ArrayNum - 1;
        if (0 < (int)uVar22) {
          lVar21 = (longlong)(int)uVar22 * 8;
          iVar17 = local_138.ArrayNum;
          do {
            uVar20 = 0;
            if ((int)uVar22 < iVar17) {
              uVar20 = ~uVar22 >> 0x1f;
            }
            if (uVar20 == 0) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar14) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              iVar17 = local_138.ArrayNum;
            }
            lVar9 = *(longlong *)(local_138.AllocatorInstance.Data + lVar21);
            if (((lVar9 != 0) && (lVar10 = *(longlong *)(lVar9 + 0x270), lVar10 != 0)) &&
               (*(longlong *)(lVar9 + 0x18) == *(longlong *)(lVar6 + 0x90))) {
              plVar19 = *(longlong **)(lVar10 + 0x38);
              iVar17 = *(int *)(lVar10 + 0x40);
              plVar1 = plVar19 + iVar17;
              goto LAB_1485c2800;
            }
            uVar22 = uVar22 - 1;
            lVar21 = lVar21 + -8;
          } while (0 < (int)uVar22);
        }
        goto LAB_1485c284a;
      }
      goto LAB_1485c2992;
    }
  }
  if (2 < (byte)LogBlueprint._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
  }
  return;
LAB_1485c2800:
  if (*(int *)(lVar10 + 0x40) != iVar17) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<USCS_Node_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res18);
  }
  if (plVar19 == plVar1) goto LAB_1485c284a;
  if ((*plVar19 != 0) && (*(longlong *)(*plVar19 + 0xd0) == *(longlong *)(lVar6 + 0x88)))
  goto LAB_1485c283b;
  plVar19 = plVar19 + 1;
  goto LAB_1485c2800;
LAB_1485c283b:
  bVar13 = true;
LAB_1485c284a:
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (!bVar13) {
LAB_1485c2869:
    if (2 < (byte)LogBlueprint._0_1_) {
      local_108 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_108,&local_f8);
      local_100 = *(FName *)(lVar6 + 0xd0);
      ::FName::ToString(&local_100,local_78);
      ::FName::ToString((FName *)(lVar6 + 0x88),&local_88);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
    local_120 = 0;
    local_118 = 0;
    *(undefined8 *)(lVar6 + 0x88) = 0;
    *(undefined8 *)(lVar6 + 0x90) = 0;
    *(undefined1 *)(lVar6 + 0x98) = 0;
  }
LAB_1485c2992:
  local_res20 = local_res20 + 1;
  local_148 = local_148 + 8;
  if ((this->RootNodes).ArrayNum <= (int)local_res20) {
    return;
  }
  goto LAB_1485c2450;
}

// FixupSceneNodeHierarchy @ 1485c2a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USimpleConstructionScript::FixupSceneNodeHierarchy(USimpleConstructionScript *this)

{
  return;
}

// GetOwnerClass @ 1485c6b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UClass * __thiscall USimpleConstructionScript::GetOwnerClass(USimpleConstructionScript *this)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UClass *)this->_padding_;
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UClass *)0x0;
}

// GetParentClass @ 1485c6bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UClass * __thiscall USimpleConstructionScript::GetParentClass(USimpleConstructionScript *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return *(UClass **)(lVar2 + 0x40);
    }
  }
  return (UClass *)0x0;
}

// GetPrivateStaticClass @ 1485c6d40

UClass * __cdecl USimpleConstructionScript::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleConstructionScript.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SimpleConstructionScript",
               &Z_Registration_Info_UClass_USimpleConstructionScript.InnerSingleton,
               StaticRegisterNativesUSimpleConstructionScript,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USimpleConstructionScript>,
               InternalVTableHelperCtorCaller<USimpleConstructionScript>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleConstructionScript.InnerSingleton;
}

// PostLoad @ 1485d2040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USimpleConstructionScript::PostLoad(USimpleConstructionScript *this)

{
  TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  USceneComponent *this_00;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  FPackageFileVersion FVar11;
  TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  FName local_res20;
  FName local_f8;
  FString local_f0;
  FString local_e0 [2];
  FString local_c0;
  TArray<USCS_Node_*,TSizedDefaultAllocator<32>_> local_b0;
  TVector<double>_u_0 local_98;
  double local_78;
  double dStack_70;
  double local_68;
  
  UObject::PostLoad((UObject *)this);
  lVar14 = this->_padding_;
  if (lVar14 != 0) {
    pUVar10 = Z_Construct_UClass_UClass_NoRegister();
    iVar3 = (int)pUVar10->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar3 * 8)
        == &pUVar10->_padding_)) goto LAB_1485d208d;
  }
  lVar14 = 0;
LAB_1485d208d:
  bVar8 = FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
  if (!bVar8) {
    FixupRootNodeParentReferences(this);
  }
  FVar11 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (((*(int *)FVar11 < 0x181) && (lVar14 != 0)) &&
     (lVar5 = *(longlong *)(lVar14 + 0x110), lVar5 != 0)) {
    pUVar10 = Z_Construct_UClass_AActor_NoRegister();
    iVar3 = (int)pUVar10->_padding_;
    if (((iVar3 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8)
         == &pUVar10->_padding_)) && (*(longlong *)(lVar5 + 0x1b8) == 0)) {
      pFVar13 = (this->RootNodes).AllocatorInstance.Data;
      iVar3 = (this->RootNodes).ArrayNum;
      pFVar2 = pFVar13 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->RootNodes).ArrayNum != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<USCS_Node>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar13 == pFVar2) goto LAB_1485d22f1;
        lVar5 = *(longlong *)pFVar13;
        local_res18 = 0;
        if (*(longlong *)(lVar5 + 0x88) == 0) break;
        pFVar13 = pFVar13 + 8;
      }
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        pUVar10 = Z_Construct_UClass_USceneComponent_NoRegister();
        bVar8 = FObjectPtr::IsA((FObjectPtr *)(lVar5 + 0x30),pUVar10);
        dVar7 = __real_3ff0000000000000;
        if ((bVar8) &&
           (this_00 = *(USceneComponent **)(lVar5 + 0x30), this_00 != (USceneComponent *)0x0)) {
          local_68 = (this_00->RelativeScale3D).field0_0x0._s_0.Z;
          if (((this_00->RelativeScale3D).field0_0x0._s_0.X != __real_3ff0000000000000) ||
             (((this_00->RelativeScale3D).field0_0x0._s_0.Y != __real_3ff0000000000000 ||
              (local_68 != __real_3ff0000000000000)))) {
            if (2 < (byte)LogBlueprint._0_1_) {
              ::FString::PrintfImpl(local_e0,L"X=%3.3f Y=%3.3f Z=%3.3f");
              local_res20 = *(FName *)(lVar5 + 0xd0);
              ::FName::ToString(&local_res20,&local_c0);
              local_f8 = *(FName *)(lVar14 + 0x18);
              ::FName::ToString(&local_f8,&local_f0);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
              if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f0.Data.AllocatorInstance.Data);
              }
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
              if (local_e0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e0[0].Data.AllocatorInstance.Data);
              }
            }
            local_98._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
            local_98._s_0.Y = _UNK_150689688;
            local_78 = ___xmm_3ff00000000000003ff0000000000000;
            dStack_70 = _UNK_150689688;
            local_68 = dVar7;
            local_98._s_0.Z = dVar7;
            USceneComponent::SetRelativeScale3D_Direct(this_00,(TVector<double> *)&local_98._s_0);
          }
        }
      }
    }
  }
LAB_1485d22f1:
  FVar11 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if ((*(int *)FVar11 < 0x1ee) && (0 < (this->RootNodes).ArrayNum)) {
    pTVar1 = &this->AllNodes;
    (this->AllNodes).ArrayNum = 0;
    if ((this->AllNodes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,&(this->AllNodes).ArrayMax);
    }
    pFVar13 = (this->RootNodes).AllocatorInstance.Data;
    iVar3 = (this->RootNodes).ArrayNum;
    pFVar2 = pFVar13 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->RootNodes).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<USCS_Node>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar13 == pFVar2) break;
      if (*(USCS_Node **)pFVar13 != (USCS_Node *)0x0) {
        pTVar12 = USCS_Node::GetAllNodes(*(USCS_Node **)pFVar13,&local_b0);
        if ((pTVar1 == (TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_> *)pTVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar4 = pTVar12->ArrayNum;
        if (iVar4 != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar4,&pTVar1->AllocatorInstance,&(this->AllNodes).ArrayNum,
                             &(this->AllNodes).ArrayMax);
          RelocateConstructItems<TObjectPtr<USCS_Node>,USCS_Node_*,int>
                    ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8,
                     (USCS_Node **)(pTVar12->AllocatorInstance).Data,iVar4);
          pTVar12->ArrayNum = 0;
        }
        if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.AllocatorInstance.Data);
        }
      }
      pFVar13 = pFVar13 + 8;
    }
  }
  return;
}

// PreloadChain @ 1485d2590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USimpleConstructionScript::PreloadChain(USimpleConstructionScript *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UObject::ConditionalPreload((UObject *)this);
  pFVar3 = (this->RootNodes).AllocatorInstance.Data;
  iVar2 = (this->RootNodes).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RootNodes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USCS_Node>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    USCS_Node::PreloadChain(*(USCS_Node **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// RegisterInstancedComponent @ 1485d4ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl USimpleConstructionScript::RegisterInstancedComponent(UActorComponent *param_1)

{
  int iVar1;
  UActorComponent *pUVar2;
  UClass *pUVar3;
  
  if (param_1 != (UActorComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) &&
        (pUVar2 = (UActorComponent *)param_1[1]._padding_, pUVar2 != (UActorComponent *)0x0)) &&
       ((pUVar2->OwnerPrivate == param_1->OwnerPrivate && (pUVar2->bRegistered == 0)))) {
      RegisterInstancedComponent(pUVar2);
    }
    if (((((uint)param_1->_padding_ >> 0x1e & 1) == 0) && (param_1->bRegistered == 0)) &&
       (param_1->bAutoRegister != '\0')) {
      UActorComponent::RegisterComponent(param_1);
    }
  }
  return;
}

// RemoveNameToSCSNodeMap @ 1485d6360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USimpleConstructionScript::RemoveNameToSCSNodeMap(USimpleConstructionScript *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  piVar1 = &this->NameToSCSNodeMapRefCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NameToSCSNodeMapRefCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SimpleConstructionScript.cpp"
                       ,0x2d9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->NameToSCSNodeMapRefCount == 0) {
    TSet<TTuple<FName,USCS_Node_*>,TDefaultMapHashableKeyFuncs<FName,USCS_Node_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,USCS_Node_*>,TDefaultMapHashableKeyFuncs<FName,USCS_Node_*,0>,FDefaultSetAllocator>
             *)&this->NameToSCSNodeMap);
    return;
  }
  return;
}

// RemoveNode @ 1485d63c0

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
USimpleConstructionScript::RemoveNode
          (USimpleConstructionScript *this,USCS_Node *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  USCS_Node *this_00;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  TObjectPtr<USCS_Node>_u_0 local_res8;
  
  pFVar2 = (this->RootNodes).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->RootNodes).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      this_00 = FindParentNode(this,param_1);
      if (this_00 != (USCS_Node *)0x0) {
        USCS_Node::RemoveChildNode(this_00,param_1,true);
      }
      return;
    }
    if (*(USCS_Node **)pFVar2 == (USCS_Node *)0x0) {
      bVar3 = param_1 == (USCS_Node *)0x0;
    }
    else {
      bVar3 = *(USCS_Node **)pFVar2 == param_1;
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 8;
  }
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USCS_Node *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_>::Remove
            (&this->RootNodes,(TObjectPtr<USCS_Node> *)&local_res8.ObjectPtr);
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USCS_Node *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_>::Remove
            (&this->AllNodes,(TObjectPtr<USCS_Node> *)&local_res8.ObjectPtr);
  (param_1->ParentComponentOrVariableName).ComparisonIndex = 0;
  (param_1->ParentComponentOrVariableName).Number = 0;
  (param_1->ParentComponentOwnerClassName).ComparisonIndex = 0;
  (param_1->ParentComponentOwnerClassName).Number = 0;
  param_1->bIsParentComponentNative = false;
  return;
}

// RemoveNodeAndPromoteChildren @ 1485d64c0

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
USimpleConstructionScript::RemoveNodeAndPromoteChildren
          (USimpleConstructionScript *this,USCS_Node *param_1)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  USCS_Node *pUVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  TObjectPtr<USCS_Node>_u_0 local_res20;
  USCS_Node *local_38;
  TObjectPtr<USCS_Node>_u_0 local_30;
  
  pFVar9 = (this->RootNodes).AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)(this->RootNodes).ArrayNum * 8;
  for (; pFVar9 != pFVar3; pFVar9 = pFVar9 + 8) {
    if (*(USCS_Node **)pFVar9 == (USCS_Node *)0x0) {
      bVar13 = param_1 == (USCS_Node *)0x0;
    }
    else {
      bVar13 = *(USCS_Node **)pFVar9 == param_1;
    }
    if (bVar13) {
      if ((param_1->ChildNodes).ArrayNum < 1) goto LAB_1485d67ea;
      uVar11 = 0;
      plVar2 = *(longlong **)(*(longlong *)(param_1->ChildNodes).AllocatorInstance.Data + 0x30);
      uVar12 = 0;
      if (((plVar2 == (longlong *)0x0) ||
          (cVar5 = (**(code **)(*plVar2 + 0x120))(), uVar12 = uVar11, cVar5 == '\0')) ||
         (uVar11 = 1, (param_1->ChildNodes).ArrayNum < 2)) goto LAB_1485d666a;
      lVar10 = 8;
      goto LAB_1485d65e0;
    }
  }
  pUVar8 = FindParentNode(this,param_1);
  if (pUVar8 == (USCS_Node *)0x0) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2965218873965542474>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SimpleConstructionScript.cpp"
                        ,0x3b6,"ParentNode");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar8 = (this->DefaultSceneRootNode).field0_0x0.DebugPtr;
    if (pUVar8 == (USCS_Node *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentNode",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SimpleConstructionScript.cpp"
                          ,0x3be,L"");
      if (!bVar13) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (pUVar8->ChildNodes).AllocatorInstance.Data;
  pFVar9 = pFVar3;
  do {
    if (pFVar9 == pFVar3 + (longlong)(pUVar8->ChildNodes).ArrayNum * 8) {
      iVar7 = -1;
LAB_1485d689b:
      USCS_Node::RemoveChildNode(pUVar8,param_1,true);
      USCS_Node::MoveChildNodes(pUVar8,param_1,iVar7);
      return;
    }
    if (*(USCS_Node **)pFVar9 == param_1) {
      iVar7 = (int)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
      goto LAB_1485d689b;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
LAB_1485d65e0:
  uVar6 = 0;
  if ((int)uVar11 < (param_1->ChildNodes).ArrayNum) {
    uVar6 = ~uVar11 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar2 = *(longlong **)
            (*(longlong *)((param_1->ChildNodes).AllocatorInstance.Data + lVar10) + 0x30);
  if ((plVar2 != (longlong *)0x0) && (cVar5 = (**(code **)(*plVar2 + 0x120))(), cVar5 == '\0')) {
    uVar12 = uVar11;
    if (uVar11 == 0xffffffff) goto LAB_1485d67ea;
    goto LAB_1485d666a;
  }
  uVar11 = uVar11 + 1;
  lVar10 = lVar10 + 8;
  if ((param_1->ChildNodes).ArrayNum <= (int)uVar11) {
LAB_1485d666a:
    uVar11 = 0;
    if ((int)uVar12 < (param_1->ChildNodes).ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar8 = *(USCS_Node **)
              ((param_1->ChildNodes).AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
    USCS_Node::RemoveChildNodeAt(param_1,uVar12,false);
    if (pUVar8 != (USCS_Node *)0x0) {
      local_38 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      pFVar3 = (this->RootNodes).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->RootNodes).ArrayMax * 8)
          ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->RootNodes).ArrayNum;
      piVar1 = &(this->RootNodes).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->RootNodes).AllocatorInstance,piVar1);
      }
      (this->RootNodes).ArrayNum = iVar7 + 1;
      *(USCS_Node **)((this->RootNodes).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (USCS_Node *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38);
      }
      USCS_Node::MoveChildNodes(pUVar8,param_1,-1);
      pUVar8->bIsParentComponentNative = param_1->bIsParentComponentNative;
      pUVar8->ParentComponentOrVariableName = param_1->ParentComponentOrVariableName;
      pUVar8->ParentComponentOwnerClassName = param_1->ParentComponentOwnerClassName;
    }
LAB_1485d67ea:
    local_res20.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_>::Remove
              (&this->RootNodes,(TObjectPtr<USCS_Node> *)&local_res20.ObjectPtr);
    local_30.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<USCS_Node>,TSizedDefaultAllocator<32>_>::Remove
              (&this->AllNodes,(TObjectPtr<USCS_Node> *)&local_30.ObjectPtr);
    param_1->bIsParentComponentNative = false;
    (param_1->ParentComponentOrVariableName).ComparisonIndex = 0;
    (param_1->ParentComponentOrVariableName).Number = 0;
    (param_1->ParentComponentOwnerClassName).ComparisonIndex = 0;
    (param_1->ParentComponentOwnerClassName).Number = 0;
    return;
  }
  goto LAB_1485d65e0;
}

// Serialize @ 1485d7800

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
USimpleConstructionScript::Serialize(USimpleConstructionScript *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001485d7820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FBlueprintsObjectVersion::GUID);
  return;
}

// Serialize @ 1485d7830

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
USimpleConstructionScript::Serialize
          (USimpleConstructionScript *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FBlueprintsObjectVersion::GUID);
  return;
}

// StaticRegisterNativesUSimpleConstructionScript @ 1485ddd60

void __cdecl USimpleConstructionScript::StaticRegisterNativesUSimpleConstructionScript(void)

{
  return;
}

// ValidateSceneRootNodes @ 1485df870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USimpleConstructionScript::ValidateSceneRootNodes(USimpleConstructionScript *this)

{
  return;
}

