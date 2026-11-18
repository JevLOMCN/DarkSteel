// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 29

// StaticClass @ 14ac023d0

UClass * __cdecl UCustomizableSkeletalComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableSkeletalComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableSkeletalComponent",
               &Z_Registration_Info_UClass_UCustomizableSkeletalComponent.InnerSingleton,
               StaticRegisterNativesUCustomizableSkeletalComponent,0x290,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCustomizableSkeletalComponent>,
               InternalVTableHelperCtorCaller<UCustomizableSkeletalComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableSkeletalComponent.InnerSingleton;
}

// UCustomizableSkeletalComponent @ 14ac0bea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCustomizableSkeletalComponent * __thiscall
UCustomizableSkeletalComponent::UCustomizableSkeletalComponent
          (UCustomizableSkeletalComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->CustomizableObjectInstance).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->ComponentName).ComparisonIndex = 0;
  (this->ComponentName).Number = 0;
  this->bSkipSetReferenceSkeletalMesh = false;
  *(undefined8 *)&this->UpdatedDelegate = 0;
  *(undefined8 *)&(this->UpdatedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdatedDelegate).field_0x10 = 0;
  this->bSkipSkipSetSkeletalMeshOnAttach = false;
  (this->Private).field0_0x0.DebugPtr = (UCustomizableSkeletalComponentPrivate *)0x0;
  return this;
}

// UCustomizableSkeletalComponent @ 14ac0bf20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCustomizableSkeletalComponent * __thiscall
UCustomizableSkeletalComponent::UCustomizableSkeletalComponent(UCustomizableSkeletalComponent *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UCustomizableSkeletalComponentPrivate *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  USceneComponent::USceneComponent((USceneComponent *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->CustomizableObjectInstance).field0_0x0.DebugPtr = (UCustomizableObjectInstance *)0x0;
  (this->ComponentName).ComparisonIndex = 0;
  (this->ComponentName).Number = 0;
  this->bSkipSetReferenceSkeletalMesh = false;
  *(undefined8 *)&this->UpdatedDelegate = 0;
  *(undefined8 *)&(this->UpdatedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->UpdatedDelegate).field_0x10 = 0;
  this->bSkipSkipSetSkeletalMeshOnAttach = false;
  (this->Private).field0_0x0.DebugPtr = (UCustomizableSkeletalComponentPrivate *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"Private");
  FVar1 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UCustomizableSkeletalComponentPrivate_NoRegister();
  pUVar5 = (UCustomizableSkeletalComponentPrivate *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UCustomizableSkeletalComponentPrivate *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Private).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~UCustomizableSkeletalComponent @ 14ac0d050

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UCustomizableSkeletalComponent::~UCustomizableSkeletalComponent
          (UCustomizableSkeletalComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->UpdatedDelegate);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// GetComponentName @ 14ac1dac0

FName __thiscall
UCustomizableSkeletalComponent::GetComponentName(UCustomizableSkeletalComponent *this)

{
  FName *pFVar1;
  int iVar2;
  FName in_RDX;
  FName local_res8;
  FString local_18;
  
  if (this->ComponentName != (FName)0x0) {
    *(FName *)in_RDX = this->ComponentName;
    return in_RDX;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_18,this->ComponentIndex);
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  pFVar1 = ::FName::FName(&local_res8,iVar2,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)in_RDX = *pFVar1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return in_RDX;
}

// GetCustomizableObjectInstance @ 14ac1dd60

UCustomizableObjectInstance * __thiscall
UCustomizableSkeletalComponent::GetCustomizableObjectInstance(UCustomizableSkeletalComponent *this)

{
  return (this->CustomizableObjectInstance).field0_0x0.DebugPtr;
}

// GetPrivate @ 14ac22470

UCustomizableSkeletalComponentPrivate * __thiscall
UCustomizableSkeletalComponent::GetPrivate(UCustomizableSkeletalComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableSkeletalComponentPrivate *pUVar3;
  
  if ((this->Private).field0_0x0.DebugPtr != (UCustomizableSkeletalComponentPrivate *)0x0) {
    return (this->Private).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Private",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                     ,0x86,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCustomizableSkeletalComponentPrivate *)(*pcVar1)();
    return pUVar3;
  }
  return (this->Private).field0_0x0.DebugPtr;
}

// GetPrivate @ 14ac224d0

UCustomizableSkeletalComponentPrivate * __thiscall
UCustomizableSkeletalComponent::GetPrivate(UCustomizableSkeletalComponent *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableSkeletalComponentPrivate *pUVar3;
  
  if ((this->Private).field0_0x0.DebugPtr != (UCustomizableSkeletalComponentPrivate *)0x0) {
    return (this->Private).field0_0x0.DebugPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Private",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                     ,0x8d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UCustomizableSkeletalComponentPrivate *)(*pcVar1)();
    return pUVar3;
  }
  return (this->Private).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14ac22810

UClass * __cdecl UCustomizableSkeletalComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableSkeletalComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableSkeletalComponent",
               &Z_Registration_Info_UClass_UCustomizableSkeletalComponent.InnerSingleton,
               StaticRegisterNativesUCustomizableSkeletalComponent,0x290,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCustomizableSkeletalComponent>,
               InternalVTableHelperCtorCaller<UCustomizableSkeletalComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableSkeletalComponent.InnerSingleton;
}

// GetSkipSetReferenceSkeletalMesh @ 14ac25130

bool __thiscall
UCustomizableSkeletalComponent::GetSkipSetReferenceSkeletalMesh
          (UCustomizableSkeletalComponent *this)

{
  return this->bSkipSetReferenceSkeletalMesh;
}

// GetSkipSetSkeletalMeshOnAttach @ 14ac25180

bool __thiscall
UCustomizableSkeletalComponent::GetSkipSetSkeletalMeshOnAttach(UCustomizableSkeletalComponent *this)

{
  return this->bSkipSkipSetSkeletalMeshOnAttach;
}

// OnAttachmentChanged @ 14ac2b130

void __thiscall
UCustomizableSkeletalComponent::OnAttachmentChanged(UCustomizableSkeletalComponent *this)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  UClass *pUVar7;
  UCustomizableSkeletalComponent *pUVar8;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  undefined8 local_res18 [2];
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableSkeletalComponentPrivate *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                       ,0x86,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar2 = (UObject *)this->_padding_;
  lVar3 = *(longlong *)((longlong)(this->Private).field0_0x0 + 0x28);
  if (pUVar2 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar7->_padding_)) && ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0)) {
      local_res10 = pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar3 + 0x40),(FObjectPtr)&local_res10);
      goto LAB_14ac2b206;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  *(FWeakObjectPtr *)(lVar3 + 0x40) = local_res8;
LAB_14ac2b206:
  pUVar8 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)(lVar3 + 0x60));
  if (pUVar8 == (UCustomizableSkeletalComponent *)0x0) {
    cVar6 = *(char *)(lVar3 + 0x5d);
  }
  else {
    cVar6 = pUVar8->bSkipSetReferenceSkeletalMesh;
  }
  if (cVar6 == '\0') {
    *(undefined1 *)(*(longlong *)(lVar3 + 0x60) + 0x28) = 1;
  }
  return;
}

// SetComponentName @ 14ac34ce0

void __thiscall
UCustomizableSkeletalComponent::SetComponentName
          (UCustomizableSkeletalComponent *this,FName *param_1)

{
  this->ComponentName = *param_1;
  return;
}

// SetCustomizableObjectInstance @ 14ac34f30

void __thiscall
UCustomizableSkeletalComponent::SetCustomizableObjectInstance
          (UCustomizableSkeletalComponent *this,UCustomizableObjectInstance *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCustomizableObjectInstance *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->CustomizableObjectInstance).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->CustomizableObjectInstance).field0_0x0.DebugPtr = param_1;
  return;
}

// SetSkipSetReferenceSkeletalMesh @ 14ac38860

void __thiscall
UCustomizableSkeletalComponent::SetSkipSetReferenceSkeletalMesh
          (UCustomizableSkeletalComponent *this,bool param_1)

{
  this->bSkipSetReferenceSkeletalMesh = param_1;
  return;
}

// SetSkipSetSkeletalMeshOnAttach @ 14ac388c0

void __thiscall
UCustomizableSkeletalComponent::SetSkipSetSkeletalMeshOnAttach
          (UCustomizableSkeletalComponent *this,bool param_1)

{
  this->bSkipSkipSetSkeletalMeshOnAttach = param_1;
  return;
}

// StaticRegisterNativesUCustomizableSkeletalComponent @ 14ac39b20

void __cdecl
UCustomizableSkeletalComponent::StaticRegisterNativesUCustomizableSkeletalComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UCustomizableSkeletalComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateSkeletalMeshAsync @ 14ac4b8e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync
          (UCustomizableSkeletalComponent *this,bool param_1)

{
  UCustomizableSkeletalComponentPrivate *pUVar1;
  UCustomizableObjectInstanceUsage *pUVar2;
  code *pcVar3;
  bool bVar4;
  UCustomizableSkeletalComponent *pUVar5;
  UCustomizableObjectInstance *this_00;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableSkeletalComponentPrivate *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                       ,0x86,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  if ((pUVar1->InstanceUsage).field0_0x0.DebugPtr != (UCustomizableObjectInstanceUsage *)0x0) {
    if (pUVar1 == (UCustomizableSkeletalComponentPrivate *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                         ,0x86,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar2 = (((this->Private).field0_0x0.DebugPtr)->InstanceUsage).field0_0x0.DebugPtr;
    pUVar5 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                       ((pUVar2->Private).field0_0x0.DebugPtr);
    if (pUVar5 == (UCustomizableSkeletalComponent *)0x0) {
      this_00 = (pUVar2->UsedCustomizableObjectInstance).field0_0x0.DebugPtr;
    }
    else {
      this_00 = (pUVar5->CustomizableObjectInstance).field0_0x0.DebugPtr;
    }
    if (this_00 != (UCustomizableObjectInstance *)0x0) {
      UCustomizableObjectInstance::UpdateSkeletalMeshAsync(this_00,false,false);
      return;
    }
  }
  return;
}

// UpdateSkeletalMeshAsyncResult @ 14ac4ba50

void __thiscall
UCustomizableSkeletalComponent::UpdateSkeletalMeshAsyncResult
          (UCustomizableSkeletalComponent *this,FInstanceUpdateDelegate *param_1,bool param_2,
          bool param_3)

{
  UCustomizableSkeletalComponentPrivate *pUVar1;
  UCustomizableObjectInstanceUsage *this_00;
  code *pcVar2;
  bool bVar3;
  FInstanceUpdateDelegate local_38;
  FReadAccessScope local_20;
  
  if ((this->Private).field0_0x0.DebugPtr == (UCustomizableSkeletalComponentPrivate *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                       ,0x86,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->Private).field0_0x0.DebugPtr;
  if ((pUVar1->InstanceUsage).field0_0x0.DebugPtr != (UCustomizableObjectInstanceUsage *)0x0) {
    if (pUVar1 == (UCustomizableSkeletalComponentPrivate *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                         ,0x86,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (((this->Private).field0_0x0.DebugPtr)->InstanceUsage).field0_0x0.DebugPtr;
    local_38._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_20);
    local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
    local_38._16_8_ = *(undefined8 *)&param_1->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    UCustomizableObjectInstanceUsage::UpdateSkeletalMeshAsyncResult
              (this_00,&local_38,param_2,param_3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// execGetComponentName @ 14ac4d4f0

void __cdecl
UCustomizableSkeletalComponent::execGetComponentName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  FName *pFVar2;
  int iVar3;
  FName local_res8;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0xf].field_0x4 != 0) {
    *(longlong *)param_3 = *(longlong *)&param_1[0xf].field_0x4;
    return;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_18,*(int *)(param_1 + 0xf));
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar3,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(FName *)param_3 = FVar1;
  return;
}

// execGetCustomizableObjectInstance @ 14ac4d630

void __cdecl
UCustomizableSkeletalComponent::execGetCustomizableObjectInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0xe].field_0x20;
  return;
}

// execGetSkipSetReferenceSkeletalMesh @ 14ac4db00

void __cdecl
UCustomizableSkeletalComponent::execGetSkipSetReferenceSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0xf].field_0xc;
  return;
}

// execGetSkipSetSkeletalMeshOnAttach @ 14ac4db90

void __cdecl
UCustomizableSkeletalComponent::execGetSkipSetSkeletalMeshOnAttach
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x10);
  return;
}

// execSetComponentName @ 14ac4e0b0

void __cdecl
UCustomizableSkeletalComponent::execSetComponentName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar *puVar9;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  local_res8[1] = '\0';
  local_res8[2] = '\0';
  local_res8[3] = '\0';
  local_res8[4] = '\0';
  local_res8[5] = '\0';
  local_res8[6] = '\0';
  local_res8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar9 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  uVar5 = puVar9[4];
  uVar6 = puVar9[5];
  uVar7 = puVar9[6];
  uVar8 = puVar9[7];
  param_1[0xf].field_0x4 = puVar9[0];
  param_1[0xf].field_0x5 = uVar2;
  param_1[0xf].field_0x6 = uVar3;
  param_1[0xf].field_0x7 = uVar4;
  param_1[0xf].field_0x8 = uVar5;
  param_1[0xf].field_0x9 = uVar6;
  param_1[0xf].field_0xa = uVar7;
  param_1[0xf].field_0xb = uVar8;
  return;
}

// execSetCustomizableObjectInstance @ 14ac4e230

void __cdecl
UCustomizableSkeletalComponent::execSetCustomizableObjectInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0xe].field_0x20 = pUVar2;
  return;
}

// execSetSkipSetReferenceSkeletalMesh @ 14ac4e420

void __cdecl
UCustomizableSkeletalComponent::execSetSkipSetReferenceSkeletalMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xf].field_0xc = local_res8[0] != 0;
  return;
}

// execSetSkipSetSkeletalMeshOnAttach @ 14ac4e560

void __cdecl
UCustomizableSkeletalComponent::execSetSkipSetSkeletalMeshOnAttach
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)(param_1 + 0x10) = local_res8[0] != 0;
  return;
}

// execUpdateSkeletalMeshAsync @ 14ac4e8f0

void __cdecl
UCustomizableSkeletalComponent::execUpdateSkeletalMeshAsync
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UCustomizableSkeletalComponent *pUVar5;
  UCustomizableObjectInstance *this;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x10].field_0x8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                       ,0x86,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(*(longlong *)&param_1[0x10].field_0x8 + 0x28) != 0) {
    if (*(longlong *)&param_1[0x10].field_0x8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                         ,0x86,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)(*(longlong *)&param_1[0x10].field_0x8 + 0x28);
    pUVar5 = UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
                       (*(UCustomizableObjectInstanceUsagePrivate **)(lVar2 + 0x60));
    if (pUVar5 == (UCustomizableSkeletalComponent *)0x0) {
      this = *(UCustomizableObjectInstance **)(lVar2 + 0x48);
    }
    else {
      this = (pUVar5->CustomizableObjectInstance).field0_0x0.DebugPtr;
    }
    if (this != (UCustomizableObjectInstance *)0x0) {
      UCustomizableObjectInstance::UpdateSkeletalMeshAsync(this,false,false);
    }
  }
  return;
}

// execUpdateSkeletalMeshAsyncResult @ 14ac4eb70

void __cdecl
UCustomizableSkeletalComponent::execUpdateSkeletalMeshAsyncResult
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCustomizableObjectInstanceUsage *this;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int local_res8 [2];
  int local_res10 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90 [3];
  FInstanceUpdateDelegate local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0 = 0;
  local_98 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_90[0].AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_a8,&local_60);
  local_90[1].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_a0;
  local_90[2].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  if (*(longlong *)&param_1[0x10].field_0x8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                       ,0x86,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)(*(longlong *)&param_1[0x10].field_0x8 + 0x28) != 0) {
    if (*(longlong *)&param_1[0x10].field_0x8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Private",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableSkeletalComponent.cpp"
                         ,0x86,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this = *(UCustomizableObjectInstanceUsage **)(*(longlong *)&param_1[0x10].field_0x8 + 0x28);
    local_78._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(local_90,&local_48);
    local_78._8_8_ = local_90[1].AccessDetector.State;
    local_78._16_8_ = local_90[2].AccessDetector.State;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    UCustomizableObjectInstanceUsage::UpdateSkeletalMeshAsyncResult(this,&local_78,bVar4,bVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90[0].AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

