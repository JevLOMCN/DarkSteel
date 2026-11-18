// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 60

// StaticClass @ 146eabfa0

UClass * __cdecl UBTFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTFunctionLibrary",
               &Z_Registration_Info_UClass_UBTFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUBTFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBTFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBTFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTFunctionLibrary.InnerSingleton;
}

// UBTFunctionLibrary @ 146ec7bf0

UBTFunctionLibrary * __thiscall
UBTFunctionLibrary::UBTFunctionLibrary(UBTFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBTFunctionLibrary__6B_;
  return this;
}

// UBTFunctionLibrary @ 146ec7c20

UBTFunctionLibrary * __thiscall
UBTFunctionLibrary::UBTFunctionLibrary(UBTFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBTFunctionLibrary__6B_;
  return this;
}

// ~UBTFunctionLibrary @ 146ecd1a0

void __thiscall UBTFunctionLibrary::~UBTFunctionLibrary(UBTFunctionLibrary *this)

{
  *(undefined ***)this = &___7UBTFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ClearBlackboardValue @ 146ed65c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::ClearBlackboardValue(UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FKey local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146ed6608;
  }
  else {
LAB_146ed6608:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146ed6634:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146ed6634;
    }
    if (lVar4 != 0) goto LAB_146ed6671;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return;
  }
LAB_146ed6671:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(int)param_2 + 0x10);
      UBlackboardComponent::ClearValue(this,local_res8);
      return;
    }
    UBlackboardComponent::ClearValue(this,(FKey)0xffff);
  }
  return;
}

// ClearBlackboardValueAsVector @ 146ed66d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::ClearBlackboardValueAsVector(UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FKey local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146ed6718;
  }
  else {
LAB_146ed6718:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146ed6744:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146ed6744;
    }
    if (lVar4 != 0) goto LAB_146ed6781;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return;
  }
LAB_146ed6781:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(int)param_2 + 0x10);
      UBlackboardComponent::ClearValue(this,local_res8);
      return;
    }
    UBlackboardComponent::ClearValue(this,(FKey)0xffff);
  }
  return;
}

// GetBlackboardValueAsActor @ 146ee3ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __cdecl
UBTFunctionLibrary::GetBlackboardValueAsActor(UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  int iVar1;
  AActor *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = (AActor *)GetBlackboardValueAsObject(param_1,param_2);
  if (pAVar2 != (AActor *)0x0) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pAVar2;
    }
  }
  return (AActor *)0x0;
}

// GetBlackboardValueAsBool @ 146ee3b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
UBTFunctionLibrary::GetBlackboardValueAsBool(UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FKey local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146ee3b78;
  }
  else {
LAB_146ee3b78:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146ee3ba4:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146ee3ba4;
    }
    if (lVar4 != 0) goto LAB_146ee3be1;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return false;
  }
LAB_146ee3be1:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this == (UBlackboardComponent *)0x0) {
    return false;
  }
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    bVar2 = UBlackboardComponent::GetValue<UBlackboardKeyType_Bool>(this,(FKey)0xffff);
    return bVar2;
  }
  UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(int)param_2 + 0x10);
  bVar2 = UBlackboardComponent::GetValue<UBlackboardKeyType_Bool>(this,local_res8);
  return bVar2;
}

// GetBlackboardValueAsClass @ 146ee3c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __cdecl
UBTFunctionLibrary::GetBlackboardValueAsClass(UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FKey local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146ee3c98;
  }
  else {
LAB_146ee3c98:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146ee3cc4:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146ee3cc4;
    }
    if (lVar4 != 0) goto LAB_146ee3d01;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return (UClass *)0x0;
  }
LAB_146ee3d01:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this == (UBlackboardComponent *)0x0) {
    return (UClass *)0x0;
  }
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    pUVar3 = UBlackboardComponent::GetValue<UBlackboardKeyType_Class>(this,(FKey)0xffff);
    return pUVar3;
  }
  UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(int)param_2 + 0x10);
  pUVar3 = UBlackboardComponent::GetValue<UBlackboardKeyType_Class>(this,local_res8);
  return pUVar3;
}

// GetBlackboardValueAsEnum @ 146ee3d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __cdecl
UBTFunctionLibrary::GetBlackboardValueAsEnum(UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  uchar uVar3;
  UClass *pUVar4;
  longlong lVar5;
  FKey local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar5 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146ee3db8;
  }
  else {
LAB_146ee3db8:
    lVar5 = param_1->_padding_;
    if (lVar5 == 0) {
LAB_146ee3de4:
      lVar5 = 0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar4->_padding_)) goto LAB_146ee3de4;
    }
    if (lVar5 != 0) goto LAB_146ee3e21;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return '\0';
  }
LAB_146ee3e21:
  this = *(UBlackboardComponent **)(lVar5 + 200);
  if (this == (UBlackboardComponent *)0x0) {
    return '\0';
  }
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    uVar3 = UBlackboardComponent::GetValue<UBlackboardKeyType_Enum>(this,(FKey)0xffff);
    return uVar3;
  }
  UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(int)param_2 + 0x10);
  uVar3 = UBlackboardComponent::GetValue<UBlackboardKeyType_Enum>(this,local_res8);
  return uVar3;
}

// GetBlackboardValueAsFloat @ 146ee3e90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __cdecl
UBTFunctionLibrary::GetBlackboardValueAsFloat(UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  float fVar5;
  FKey local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146ee3ed8;
  }
  else {
LAB_146ee3ed8:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146ee3f04:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146ee3f04;
    }
    if (lVar4 != 0) goto LAB_146ee3f41;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return 0.0;
  }
LAB_146ee3f41:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this == (UBlackboardComponent *)0x0) {
    return 0.0;
  }
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    fVar5 = UBlackboardComponent::GetValue<UBlackboardKeyType_Float>(this,(FKey)0xffff);
    return fVar5;
  }
  UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(int)param_2 + 0x10);
  fVar5 = UBlackboardComponent::GetValue<UBlackboardKeyType_Float>(this,local_res8);
  return fVar5;
}

// GetBlackboardValueAsInt @ 146ee3fb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __cdecl
UBTFunctionLibrary::GetBlackboardValueAsInt(UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar1;
  int iVar2;
  UClass *pUVar3;
  longlong lVar4;
  FKey local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146ee3ff8;
  }
  else {
LAB_146ee3ff8:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146ee4024:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar2 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          != &pUVar3->_padding_)) goto LAB_146ee4024;
    }
    if (lVar4 != 0) goto LAB_146ee4061;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar1 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar1) {
    return 0;
  }
LAB_146ee4061:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this == (UBlackboardComponent *)0x0) {
    return 0;
  }
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    iVar2 = UBlackboardComponent::GetValue<UBlackboardKeyType_Int>(this,(FKey)0xffff);
    return iVar2;
  }
  UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(int)param_2 + 0x10);
  iVar2 = UBlackboardComponent::GetValue<UBlackboardKeyType_Int>(this,local_res8);
  return iVar2;
}

// GetBlackboardValueAsName @ 146ee40d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __cdecl
UBTFunctionLibrary::GetBlackboardValueAsName(UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  int in_R8D;
  FName local_res8;
  
  if ((param_2 == (FBlackboardKeySelector *)0x0) ||
     ((*(uint *)((longlong)param_2->SelectedKeyName + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_2 != (FBlackboardKeySelector *)0x0) goto LAB_146ee4120;
LAB_146ee4153:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (bVar2) goto LAB_146ee4189;
  }
  else {
LAB_146ee4120:
    lVar4 = *(longlong *)&param_2->SelectedKeyID;
    if (lVar4 == 0) {
LAB_146ee414c:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146ee414c;
    }
    if (lVar4 == 0) goto LAB_146ee4153;
LAB_146ee4189:
    this = *(UBlackboardComponent **)(lVar4 + 200);
    if (this != (UBlackboardComponent *)0x0) {
      this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
      if (this_00 == (UBlackboardData *)0x0) {
        UBlackboardComponent::GetValue<UBlackboardKeyType_Name>(this,(FKey)(ushort)&local_res8);
      }
      else {
        UBlackboardData::InternalGetKeyID(this_00,&local_res8,in_R8D + 0x10);
        UBlackboardComponent::GetValue<UBlackboardKeyType_Name>(this,(FKey)(ushort)&local_res8);
      }
      goto LAB_146ee41e5;
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
LAB_146ee41e5:
  param_1->_padding_ = (longlong)local_res8;
  return (FName)param_1;
}

// GetBlackboardValueAsObject @ 146ee4210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl
UBTFunctionLibrary::GetBlackboardValueAsObject(UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  longlong lVar5;
  FKey local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar5 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146ee4258;
  }
  else {
LAB_146ee4258:
    lVar5 = param_1->_padding_;
    if (lVar5 == 0) {
LAB_146ee4284:
      lVar5 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146ee4284;
    }
    if (lVar5 != 0) goto LAB_146ee42c1;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return (UObject *)0x0;
  }
LAB_146ee42c1:
  this = *(UBlackboardComponent **)(lVar5 + 200);
  if (this == (UBlackboardComponent *)0x0) {
    return (UObject *)0x0;
  }
  this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
  if (this_00 == (UBlackboardData *)0x0) {
    pUVar4 = UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(this,(FKey)0xffff);
    return pUVar4;
  }
  UBlackboardData::InternalGetKeyID(this_00,(FName *)&local_res8,(int)param_2 + 0x10);
  pUVar4 = UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(this,local_res8);
  return pUVar4;
}

// GetBlackboardValueAsRotator @ 146ee4330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __cdecl
UBTFunctionLibrary::GetBlackboardValueAsRotator
          (TRotator<double> *__return_storage_ptr__,UBTNode *param_1,FBlackboardKeySelector *param_2
          )

{
  int iVar1;
  UBlackboardData *this;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  UBlackboardComponent *this_00;
  FKey local_res8;
  TRotator<double> local_28;
  
  if (((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), param_1 == (UBTNode *)0x0)) {
    lVar4 = 0;
LAB_146ee43c1:
    this_00 = (UBlackboardComponent *)0x0;
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar2) goto LAB_146ee43fe;
  }
  else {
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146ee43b3:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146ee43b3;
    }
    if (lVar4 == 0) goto LAB_146ee43c1;
  }
  this_00 = *(UBlackboardComponent **)(lVar4 + 200);
LAB_146ee43fe:
  if (this_00 == (UBlackboardComponent *)0x0) {
    local_28.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_28.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_28.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    this = (this_00->BlackboardAsset).field0_0x0.DebugPtr;
    if (this == (UBlackboardData *)0x0) {
      UBlackboardComponent::GetValue<UBlackboardKeyType_Rotator>(this_00,&local_28,(FKey)0xffff);
    }
    else {
      UBlackboardData::InternalGetKeyID(this,(FName *)&local_res8,(int)param_2 + 0x10);
      UBlackboardComponent::GetValue<UBlackboardKeyType_Rotator>(this_00,&local_28,local_res8);
    }
  }
  __return_storage_ptr__->Pitch = local_28.Pitch;
  __return_storage_ptr__->Yaw = local_28.Yaw;
  __return_storage_ptr__->Roll = local_28.Roll;
  return __return_storage_ptr__;
}

// GetBlackboardValueAsString @ 146ee44a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __cdecl
UBTFunctionLibrary::GetBlackboardValueAsString
          (FString *__return_storage_ptr__,UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  int iVar1;
  longlong lVar2;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  longlong lVar7;
  FKey FVar8;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  lVar7 = 0;
  local_res8.ComparisonIndex.Value = 0;
  if (((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), param_1 == (UBTNode *)0x0)) {
LAB_146ee453c:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (bVar4) goto LAB_146ee4572;
  }
  else {
    lVar2 = param_1->_padding_;
    if (lVar2 == 0) {
LAB_146ee452f:
      lVar2 = lVar7;
    }
    else {
      pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar5->_padding_)) goto LAB_146ee452f;
    }
    lVar7 = lVar2;
    if (lVar7 == 0) goto LAB_146ee453c;
LAB_146ee4572:
    this = *(UBlackboardComponent **)(lVar7 + 200);
    if (this != (UBlackboardComponent *)0x0) {
      this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
      bVar3 = true;
      bVar4 = false;
      if (this_00 == (UBlackboardData *)0x0) {
        FVar8.Key = 0xffff;
      }
      else {
        UBlackboardData::InternalGetKeyID(this_00,&local_res8,(int)param_2 + 0x10);
        FVar8.Key = (ushort)local_res8.ComparisonIndex.Value;
      }
      UBlackboardComponent::GetValue<UBlackboardKeyType_String>(this,&local_28,FVar8);
      pFVar6 = &local_28;
      goto LAB_146ee45d6;
    }
  }
  bVar3 = false;
  bVar4 = true;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  pFVar6 = &local_38;
LAB_146ee45d6:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
  iVar1 = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetBlackboardValueAsVector @ 146ee4640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __cdecl
UBTFunctionLibrary::GetBlackboardValueAsVector
          (TVector<double> *__return_storage_ptr__,UBTNode *param_1,FBlackboardKeySelector *param_2)

{
  int iVar1;
  UBlackboardData *this;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  UBlackboardComponent *this_00;
  FKey local_res8;
  TVector<double>_u_0 local_28;
  
  if (((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), param_1 == (UBTNode *)0x0)) {
    lVar4 = 0;
LAB_146ee46d1:
    this_00 = (UBlackboardComponent *)0x0;
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar2) goto LAB_146ee470e;
  }
  else {
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146ee46c3:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146ee46c3;
    }
    if (lVar4 == 0) goto LAB_146ee46d1;
  }
  this_00 = *(UBlackboardComponent **)(lVar4 + 200);
LAB_146ee470e:
  if (this_00 == (UBlackboardComponent *)0x0) {
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    this = (this_00->BlackboardAsset).field0_0x0.DebugPtr;
    if (this == (UBlackboardData *)0x0) {
      UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
                (this_00,(TVector<double> *)&local_28._s_0,(FKey)0xffff);
    }
    else {
      UBlackboardData::InternalGetKeyID(this,(FName *)&local_res8,(int)param_2 + 0x10);
      UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
                (this_00,(TVector<double> *)&local_28._s_0,local_res8);
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = local_28._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// GetOwnerComponent @ 146ee6b50

UBehaviorTreeComponent * __cdecl UBTFunctionLibrary::GetOwnerComponent(UBTNode *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UBehaviorTreeComponent *pUVar3;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    if (param_1 == (UBTNode *)0x0) goto LAB_146ee6bca;
  }
  pUVar3 = (UBehaviorTreeComponent *)param_1->_padding_;
  if (pUVar3 == (UBehaviorTreeComponent *)0x0) {
LAB_146ee6bba:
    pUVar3 = (UBehaviorTreeComponent *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) goto LAB_146ee6bba;
  }
  if (pUVar3 != (UBehaviorTreeComponent *)0x0) {
    return pUVar3;
  }
LAB_146ee6bca:
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  return (UBehaviorTreeComponent *)0x0;
}

// GetOwnersBlackboard @ 146ee6c00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBlackboardComponent * __cdecl UBTFunctionLibrary::GetOwnersBlackboard(UBTNode *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146ee6c3e;
  }
  else {
LAB_146ee6c3e:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146ee6c6a:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146ee6c6a;
    }
    if (lVar4 != 0) goto LAB_146ee6c71;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return (UBlackboardComponent *)0x0;
  }
LAB_146ee6c71:
  return *(UBlackboardComponent **)(lVar4 + 200);
}

// GetPrivateStaticClass @ 146ee7ff0

UClass * __cdecl UBTFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTFunctionLibrary",
               &Z_Registration_Info_UClass_UBTFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUBTFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBTFunctionLibrary>,
               InternalVTableHelperCtorCaller<UBTFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTFunctionLibrary.InnerSingleton;
}

// SetBlackboardValueAsBool @ 146efebb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::SetBlackboardValueAsBool
          (UBTNode *param_1,FBlackboardKeySelector *param_2,bool param_3)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FName local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146efec01;
  }
  else {
LAB_146efec01:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146efec2d:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146efec2d;
    }
    if (lVar4 != 0) goto LAB_146efec6a;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return;
  }
LAB_146efec6a:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 == (UBlackboardData *)0x0) {
      local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(this_00,&local_res8,(int)param_2 + 0x10);
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Bool>
              (this,local_res8.ComparisonIndex.Value._0_2_,param_3);
  }
  return;
}

// SetBlackboardValueAsClass @ 146efecd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::SetBlackboardValueAsClass
          (UBTNode *param_1,FBlackboardKeySelector *param_2,UClass *param_3)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FName local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146efed20;
  }
  else {
LAB_146efed20:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146efed4c:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146efed4c;
    }
    if (lVar4 != 0) goto LAB_146efed89;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return;
  }
LAB_146efed89:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 == (UBlackboardData *)0x0) {
      local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(this_00,&local_res8,(int)param_2 + 0x10);
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Class>
              (this,local_res8.ComparisonIndex.Value._0_2_,param_3);
  }
  return;
}

// SetBlackboardValueAsEnum @ 146efede0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::SetBlackboardValueAsEnum
          (UBTNode *param_1,FBlackboardKeySelector *param_2,uchar param_3)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FName local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146efee31;
  }
  else {
LAB_146efee31:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146efee5d:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146efee5d;
    }
    if (lVar4 != 0) goto LAB_146efee9a;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return;
  }
LAB_146efee9a:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 == (UBlackboardData *)0x0) {
      local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(this_00,&local_res8,(int)param_2 + 0x10);
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Enum>
              (this,local_res8.ComparisonIndex.Value._0_2_,param_3);
  }
  return;
}

// SetBlackboardValueAsFloat @ 146efef00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::SetBlackboardValueAsFloat
          (UBTNode *param_1,FBlackboardKeySelector *param_2,float param_3)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FName local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146efef50;
  }
  else {
LAB_146efef50:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146efef7c:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146efef7c;
    }
    if (lVar4 != 0) goto LAB_146efefb9;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return;
  }
LAB_146efefb9:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 == (UBlackboardData *)0x0) {
      local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(this_00,&local_res8,(int)param_2 + 0x10);
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Float>
              (this,local_res8.ComparisonIndex.Value._0_2_,param_3);
  }
  return;
}

// SetBlackboardValueAsInt @ 146eff010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::SetBlackboardValueAsInt
          (UBTNode *param_1,FBlackboardKeySelector *param_2,int param_3)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FName local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146eff060;
  }
  else {
LAB_146eff060:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146eff08c:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146eff08c;
    }
    if (lVar4 != 0) goto LAB_146eff0c9;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return;
  }
LAB_146eff0c9:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 == (UBlackboardData *)0x0) {
      local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(this_00,&local_res8,(int)param_2 + 0x10);
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Int>
              (this,local_res8.ComparisonIndex.Value._0_2_,param_3);
  }
  return;
}

// SetBlackboardValueAsName @ 146eff120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::SetBlackboardValueAsName
          (UBTNode *param_1,FBlackboardKeySelector *param_2,FName param_3)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FName local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146eff170;
  }
  else {
LAB_146eff170:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146eff19c:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146eff19c;
    }
    if (lVar4 != 0) goto LAB_146eff1d9;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return;
  }
LAB_146eff1d9:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 == (UBlackboardData *)0x0) {
      local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(this_00,&local_res8,(int)param_2 + 0x10);
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Name>
              (this,local_res8.ComparisonIndex.Value._0_2_,param_3);
  }
  return;
}

// SetBlackboardValueAsObject @ 146eff230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::SetBlackboardValueAsObject
          (UBTNode *param_1,FBlackboardKeySelector *param_2,UObject *param_3)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FName local_res8;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146eff280;
  }
  else {
LAB_146eff280:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146eff2ac:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146eff2ac;
    }
    if (lVar4 != 0) goto LAB_146eff2e9;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return;
  }
LAB_146eff2e9:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 == (UBlackboardData *)0x0) {
      local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(this_00,&local_res8,(int)param_2 + 0x10);
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Object>
              (this,local_res8.ComparisonIndex.Value._0_2_,param_3);
  }
  return;
}

// SetBlackboardValueAsRotator @ 146eff340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::SetBlackboardValueAsRotator
          (UBTNode *param_1,FBlackboardKeySelector *param_2,TRotator<double> *param_3)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FName local_res8;
  TRotator<double> local_28;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146eff390;
  }
  else {
LAB_146eff390:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146eff3bc:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146eff3bc;
    }
    if (lVar4 != 0) goto LAB_146eff3f9;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return;
  }
LAB_146eff3f9:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 == (UBlackboardData *)0x0) {
      local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(this_00,&local_res8,(int)param_2 + 0x10);
    }
    local_28.Pitch = param_3->Pitch;
    local_28.Yaw = param_3->Yaw;
    local_28.Roll = param_3->Roll;
    UBlackboardComponent::SetValue<UBlackboardKeyType_Rotator>
              (this,local_res8.ComparisonIndex.Value._0_2_,&local_28);
  }
  return;
}

// SetBlackboardValueAsString @ 146eff470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::SetBlackboardValueAsString
          (UBTNode *param_1,FBlackboardKeySelector *param_2,FString *param_3)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  FString *pFVar6;
  longlong lVar7;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar7 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146eff4c4;
LAB_146eff4f7:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar3 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar3) goto LAB_146eff5a4;
  }
  else {
LAB_146eff4c4:
    lVar7 = param_1->_padding_;
    if (lVar7 == 0) {
LAB_146eff4f0:
      lVar7 = 0;
    }
    else {
      pUVar4 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar4->_padding_)) goto LAB_146eff4f0;
    }
    if (lVar7 == 0) goto LAB_146eff4f7;
  }
  this = *(UBlackboardComponent **)(lVar7 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    pFVar5 = ::FString::FString(&local_28,param_3);
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 == (UBlackboardData *)0x0) {
      local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(this_00,&local_res8,(int)param_2 + 0x10);
    }
    pFVar6 = ::FString::FString(&local_18,pFVar5);
    UBlackboardComponent::SetValue<UBlackboardKeyType_String>
              (this,local_res8.ComparisonIndex.Value._0_2_,pFVar6);
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
LAB_146eff5a4:
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// SetBlackboardValueAsVector @ 146eff5d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::SetBlackboardValueAsVector
          (UBTNode *param_1,FBlackboardKeySelector *param_2,TVector<double> *param_3)

{
  int iVar1;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  FName local_res8;
  TVector<double>_u_0 local_28;
  
  if ((param_1 == (UBTNode *)0x0) || ((*(uint *)(param_1->_padding_ + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar4 = 0;
    if (param_1 != (UBTNode *)0x0) goto LAB_146eff620;
  }
  else {
LAB_146eff620:
    lVar4 = param_1->_padding_;
    if (lVar4 == 0) {
LAB_146eff64c:
      lVar4 = 0;
    }
    else {
      pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar3->_padding_)) goto LAB_146eff64c;
    }
    if (lVar4 != 0) goto LAB_146eff689;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar2 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar2) {
    return;
  }
LAB_146eff689:
  this = *(UBlackboardComponent **)(lVar4 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    if (this_00 == (UBlackboardData *)0x0) {
      local_res8.ComparisonIndex.Value._0_2_ = 0xffff;
    }
    else {
      UBlackboardData::InternalGetKeyID(this_00,&local_res8,(int)param_2 + 0x10);
    }
    local_28._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_28._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    UBlackboardComponent::SetValue<UBlackboardKeyType_Vector>
              (this,local_res8.ComparisonIndex.Value._0_2_,(TVector<double> *)&local_28._s_0);
  }
  return;
}

// StartUsingExternalEvent @ 146f00aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UBTFunctionLibrary::StartUsingExternalEvent(UBTNode *param_1,AActor *param_2)

{
  return;
}

// StaticRegisterNativesUBTFunctionLibrary @ 146f00c80

void __cdecl UBTFunctionLibrary::StaticRegisterNativesUBTFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1b;
  local_18.DataPtr = Z_Construct_UClass_UBTFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopUsingExternalEvent @ 146f010b0

void __cdecl UBTFunctionLibrary::StopUsingExternalEvent(UBTNode *param_1)

{
  return;
}

// execClearBlackboardValue @ 146f08350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execClearBlackboardValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  FKey FVar7;
  void **ppvVar8;
  FName local_res10;
  longlong local_res20;
  void *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  
  lVar6 = 0;
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_24 = local_24 & 0xfffffffe;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  lVar3 = local_res20;
  ppvVar8 = &local_48;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res20 == 0) ||
      ((*(uint *)(*(longlong *)(local_res20 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar3 == 0)) {
LAB_146f084a9:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar4) goto LAB_146f08518;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 == 0) {
LAB_146f0849c:
      lVar3 = lVar6;
    }
    else {
      pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar5->_padding_)) goto LAB_146f0849c;
    }
    lVar6 = lVar3;
    if (lVar6 == 0) goto LAB_146f084a9;
  }
  this = *(UBlackboardComponent **)(lVar6 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar7.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar8 + 0x10);
      FVar7.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    UBlackboardComponent::ClearValue(this,FVar7);
  }
LAB_146f08518:
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execClearBlackboardValueAsVector @ 146f08550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execClearBlackboardValueAsVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  FKey FVar7;
  void **ppvVar8;
  FName local_res10;
  longlong local_res20;
  void *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  
  lVar6 = 0;
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_24 = local_24 & 0xfffffffe;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  lVar3 = local_res20;
  ppvVar8 = &local_48;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res20 == 0) ||
      ((*(uint *)(*(longlong *)(local_res20 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar3 == 0)) {
LAB_146f086a9:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar4) goto LAB_146f08718;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 == 0) {
LAB_146f0869c:
      lVar3 = lVar6;
    }
    else {
      pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar5->_padding_)) goto LAB_146f0869c;
    }
    lVar6 = lVar3;
    if (lVar6 == 0) goto LAB_146f086a9;
  }
  this = *(UBlackboardComponent **)(lVar6 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar7.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar8 + 0x10);
      FVar7.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    UBlackboardComponent::ClearValue(this,FVar7);
  }
LAB_146f08718:
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execGetBlackboardValueAsActor @ 146f08a10

void __cdecl
UBTFunctionLibrary::execGetBlackboardValueAsActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FBlackboardKeySelector *pFVar5;
  UBTNode *local_res10;
  FBlackboardKeySelector local_48;
  
  local_res10 = (UBTNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_48.bNoneIsAllowedValue = 0;
  local_48.AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.AllowedTypes.ArrayNum = 0;
  local_48.AllowedTypes.ArrayMax = 0;
  local_48.SelectedKeyName.ComparisonIndex.Value = 0;
  local_48.SelectedKeyName.Number = 0;
  local_48.SelectedKeyType.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>_u_0)0x0;
  local_48.SelectedKeyID = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar5 = &local_48;
  if ((FBlackboardKeySelector *)param_2->MostRecentPropertyAddress != (FBlackboardKeySelector *)0x0)
  {
    pFVar5 = (FBlackboardKeySelector *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetBlackboardValueAsObject(local_res10,pFVar5);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_146f08b23;
  }
  pUVar3 = (UObject *)0x0;
LAB_146f08b23:
  *(UObject **)param_3 = pUVar3;
  if (local_48.AllowedTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllowedTypes.AllocatorInstance.Data);
  }
  return;
}

// execGetBlackboardValueAsBool @ 146f08b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execGetBlackboardValueAsBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  FKey FVar7;
  void **ppvVar8;
  FName local_res10;
  longlong local_res18 [2];
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  
  lVar6 = 0;
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_34 = local_34 & 0xfffffffe;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  lVar3 = local_res18[0];
  ppvVar8 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res18[0] == 0) ||
      ((*(uint *)(*(longlong *)(local_res18[0] + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar3 == 0)) {
LAB_146f08cba:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (bVar4) goto LAB_146f08cf0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 == 0) {
LAB_146f08cad:
      lVar3 = lVar6;
    }
    else {
      pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar5->_padding_)) goto LAB_146f08cad;
    }
    lVar6 = lVar3;
    if (lVar6 == 0) goto LAB_146f08cba;
LAB_146f08cf0:
    this = *(UBlackboardComponent **)(lVar6 + 200);
    if (this != (UBlackboardComponent *)0x0) {
      this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
      FVar7.Key = 0xffff;
      if (this_00 != (UBlackboardData *)0x0) {
        UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar8 + 0x10);
        FVar7.Key = (ushort)local_res10.ComparisonIndex.Value;
      }
      bVar4 = UBlackboardComponent::GetValue<UBlackboardKeyType_Bool>(this,FVar7);
      goto LAB_146f08d33;
    }
  }
  bVar4 = false;
LAB_146f08d33:
  *(bool *)param_3 = bVar4;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetBlackboardValueAsClass @ 146f08d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execGetBlackboardValueAsClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FKey FVar7;
  void **ppvVar8;
  UClass *pUVar9;
  FName local_res10;
  longlong local_res18 [2];
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  
  pUVar6 = (UClass *)0x0;
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_34 = local_34 & 0xfffffffe;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  lVar3 = local_res18[0];
  ppvVar8 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res18[0] == 0) ||
      ((*(uint *)(*(longlong *)(local_res18[0] + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), pUVar9 = pUVar6, lVar3 == 0)) {
LAB_146f08eb9:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar4) goto LAB_146f08f31;
  }
  else {
    pUVar9 = *(UClass **)(lVar3 + 0x20);
    if (pUVar9 == (UClass *)0x0) {
LAB_146f08eac:
      pUVar9 = pUVar6;
    }
    else {
      pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_146f08eac;
    }
    if (pUVar9 == (UClass *)0x0) goto LAB_146f08eb9;
  }
  this = *(UBlackboardComponent **)&pUVar9->ClassUnique;
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar7.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar8 + 0x10);
      FVar7.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    pUVar6 = UBlackboardComponent::GetValue<UBlackboardKeyType_Class>(this,FVar7);
  }
LAB_146f08f31:
  *(UClass **)param_3 = pUVar6;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetBlackboardValueAsEnum @ 146f08f60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execGetBlackboardValueAsEnum(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar4;
  uchar uVar5;
  UClass *pUVar6;
  longlong lVar7;
  FKey FVar8;
  void **ppvVar9;
  FName local_res10;
  longlong local_res18 [2];
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  
  lVar7 = 0;
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_34 = local_34 & 0xfffffffe;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  lVar3 = local_res18[0];
  ppvVar9 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res18[0] == 0) ||
      ((*(uint *)(*(longlong *)(local_res18[0] + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar3 == 0)) {
LAB_146f090ba:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (bVar4) goto LAB_146f090f0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 == 0) {
LAB_146f090ad:
      lVar3 = lVar7;
    }
    else {
      pUVar6 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar6->_padding_)) goto LAB_146f090ad;
    }
    lVar7 = lVar3;
    if (lVar7 == 0) goto LAB_146f090ba;
LAB_146f090f0:
    this = *(UBlackboardComponent **)(lVar7 + 200);
    if (this != (UBlackboardComponent *)0x0) {
      this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
      FVar8.Key = 0xffff;
      if (this_00 != (UBlackboardData *)0x0) {
        UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar9 + 0x10);
        FVar8.Key = (ushort)local_res10.ComparisonIndex.Value;
      }
      uVar5 = UBlackboardComponent::GetValue<UBlackboardKeyType_Enum>(this,FVar8);
      goto LAB_146f09133;
    }
  }
  uVar5 = '\0';
LAB_146f09133:
  *(uchar *)param_3 = uVar5;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetBlackboardValueAsFloat @ 146f09160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execGetBlackboardValueAsFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  FKey FVar7;
  void **ppvVar8;
  float fVar9;
  FName local_res10;
  longlong local_res18 [2];
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  
  lVar6 = 0;
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_34 = local_34 & 0xfffffffe;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  lVar3 = local_res18[0];
  ppvVar8 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res18[0] == 0) ||
      ((*(uint *)(*(longlong *)(local_res18[0] + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar3 == 0)) {
LAB_146f092ba:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (bVar4) goto LAB_146f092f0;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 == 0) {
LAB_146f092ad:
      lVar3 = lVar6;
    }
    else {
      pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar5->_padding_)) goto LAB_146f092ad;
    }
    lVar6 = lVar3;
    if (lVar6 == 0) goto LAB_146f092ba;
LAB_146f092f0:
    this = *(UBlackboardComponent **)(lVar6 + 200);
    if (this != (UBlackboardComponent *)0x0) {
      this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
      FVar7.Key = 0xffff;
      if (this_00 != (UBlackboardData *)0x0) {
        UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar8 + 0x10);
        FVar7.Key = (ushort)local_res10.ComparisonIndex.Value;
      }
      fVar9 = UBlackboardComponent::GetValue<UBlackboardKeyType_Float>(this,FVar7);
      goto LAB_146f09334;
    }
  }
  fVar9 = 0.0;
LAB_146f09334:
  *(float *)param_3 = fVar9;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetBlackboardValueAsInt @ 146f09370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execGetBlackboardValueAsInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  longlong lVar7;
  FKey FVar8;
  void **ppvVar9;
  FName local_res10;
  longlong local_res18 [2];
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  
  lVar7 = 0;
  iVar5 = 0;
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_34 = local_34 & 0xfffffffe;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  lVar3 = local_res18[0];
  ppvVar9 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res18[0] == 0) ||
      ((*(uint *)(*(longlong *)(local_res18[0] + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar3 == 0)) {
LAB_146f094c9:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar4) goto LAB_146f09540;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 == 0) {
LAB_146f094bc:
      lVar3 = lVar7;
    }
    else {
      pUVar6 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar6->_padding_)) goto LAB_146f094bc;
    }
    lVar7 = lVar3;
    if (lVar7 == 0) goto LAB_146f094c9;
  }
  this = *(UBlackboardComponent **)(lVar7 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar8.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar9 + 0x10);
      FVar8.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    iVar5 = UBlackboardComponent::GetValue<UBlackboardKeyType_Int>(this,FVar8);
  }
LAB_146f09540:
  *(int *)param_3 = iVar5;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetBlackboardValueAsName @ 146f09570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execGetBlackboardValueAsName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  void **ppvVar7;
  FName local_res10;
  longlong local_res18 [2];
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  
  lVar6 = 0;
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_34 = local_34 & 0xfffffffe;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  lVar3 = local_res18[0];
  ppvVar7 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar7 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res18[0] == 0) ||
      ((*(uint *)(*(longlong *)(local_res18[0] + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar3 == 0)) {
LAB_146f096ca:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (bVar4) goto LAB_146f09700;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 == 0) {
LAB_146f096bd:
      lVar3 = lVar6;
    }
    else {
      pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar5->_padding_)) goto LAB_146f096bd;
    }
    lVar6 = lVar3;
    if (lVar6 == 0) goto LAB_146f096ca;
LAB_146f09700:
    this = *(UBlackboardComponent **)(lVar6 + 200);
    if (this != (UBlackboardComponent *)0x0) {
      this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
      if (this_00 != (UBlackboardData *)0x0) {
        UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar7 + 0x10);
      }
      UBlackboardComponent::GetValue<UBlackboardKeyType_Name>(this,(FKey)(ushort)&local_res10);
      goto LAB_146f09752;
    }
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
LAB_146f09752:
  *(FName *)param_3 = local_res10;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetBlackboardValueAsObject @ 146f09790

void __cdecl
UBTFunctionLibrary::execGetBlackboardValueAsObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FBlackboardKeySelector *pFVar3;
  UBTNode *local_res10;
  FBlackboardKeySelector local_38;
  
  local_res10 = (UBTNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.bNoneIsAllowedValue = 0;
  local_38.AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AllowedTypes.ArrayNum = 0;
  local_38.AllowedTypes.ArrayMax = 0;
  local_38.SelectedKeyName.ComparisonIndex.Value = 0;
  local_38.SelectedKeyName.Number = 0;
  local_38.SelectedKeyType.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>_u_0)0x0;
  local_38.SelectedKeyID = 0xffff;
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
  pFVar3 = &local_38;
  if ((FBlackboardKeySelector *)param_2->MostRecentPropertyAddress != (FBlackboardKeySelector *)0x0)
  {
    pFVar3 = (FBlackboardKeySelector *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetBlackboardValueAsObject(local_res10,pFVar3);
  *(UObject **)param_3 = pUVar2;
  if (local_38.AllowedTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.AllocatorInstance.Data);
  }
  return;
}

// execGetBlackboardValueAsRotator @ 146f098a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execGetBlackboardValueAsRotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UBlackboardData *this;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UBlackboardComponent *this_00;
  void **ppvVar6;
  UBlackboardComponent *pUVar7;
  FKey FVar8;
  FName local_res10;
  longlong local_res18;
  TRotator<double> local_68;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  
  this_00 = (UBlackboardComponent *)0x0;
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_2c = local_2c & 0xfffffffe;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  lVar3 = local_res18;
  ppvVar6 = &local_50;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res18 == 0) ||
      ((*(uint *)(*(longlong *)(local_res18 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), pUVar7 = this_00, lVar3 == 0)) {
LAB_146f099eb:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar4) goto LAB_146f09a28;
  }
  else {
    pUVar7 = *(UBlackboardComponent **)(lVar3 + 0x20);
    if (pUVar7 == (UBlackboardComponent *)0x0) {
LAB_146f099de:
      pUVar7 = this_00;
    }
    else {
      pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_146f099de;
    }
    if (pUVar7 == (UBlackboardComponent *)0x0) goto LAB_146f099eb;
  }
  this_00 = (UBlackboardComponent *)(pUVar7->DefaultBlackboardAsset).field0_0x0.DebugPtr;
LAB_146f09a28:
  if (this_00 == (UBlackboardComponent *)0x0) {
    local_68.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    local_68.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_68.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    this = (this_00->BlackboardAsset).field0_0x0.DebugPtr;
    FVar8.Key = 0xffff;
    if (this != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this,&local_res10,(int)ppvVar6 + 0x10);
      FVar8.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    UBlackboardComponent::GetValue<UBlackboardKeyType_Rotator>(this_00,&local_68,FVar8);
  }
  *(double *)param_3 = local_68.Pitch;
  *(double *)((longlong)param_3 + 8) = local_68.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_68.Roll;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execGetBlackboardValueAsString @ 146f09ac0

void __cdecl
UBTFunctionLibrary::execGetBlackboardValueAsString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FBlackboardKeySelector *pFVar3;
  UBTNode *local_res10;
  FString local_48;
  FBlackboardKeySelector local_38;
  
  local_res10 = (UBTNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.bNoneIsAllowedValue = 0;
  local_38.AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AllowedTypes.ArrayNum = 0;
  local_38.AllowedTypes.ArrayMax = 0;
  local_38.SelectedKeyName.ComparisonIndex.Value = 0;
  local_38.SelectedKeyName.Number = 0;
  local_38.SelectedKeyType.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>_u_0)0x0;
  local_38.SelectedKeyID = 0xffff;
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
  pFVar3 = &local_38;
  if ((FBlackboardKeySelector *)param_2->MostRecentPropertyAddress != (FBlackboardKeySelector *)0x0)
  {
    pFVar3 = (FBlackboardKeySelector *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetBlackboardValueAsString(&local_48,local_res10,pFVar3);
  if (param_3 != pFVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.AllowedTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.AllocatorInstance.Data);
  }
  return;
}

// execGetBlackboardValueAsVector @ 146f09c10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execGetBlackboardValueAsVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UBlackboardData *this;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UBlackboardComponent *this_00;
  void **ppvVar6;
  UBlackboardComponent *pUVar7;
  FKey FVar8;
  FName local_res10;
  longlong local_res18;
  TVector<double>_u_0 local_68;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  
  this_00 = (UBlackboardComponent *)0x0;
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_2c = local_2c & 0xfffffffe;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  lVar3 = local_res18;
  ppvVar6 = &local_50;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res18 == 0) ||
      ((*(uint *)(*(longlong *)(local_res18 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), pUVar7 = this_00, lVar3 == 0)) {
LAB_146f09d5b:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar4) goto LAB_146f09d98;
  }
  else {
    pUVar7 = *(UBlackboardComponent **)(lVar3 + 0x20);
    if (pUVar7 == (UBlackboardComponent *)0x0) {
LAB_146f09d4e:
      pUVar7 = this_00;
    }
    else {
      pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_146f09d4e;
    }
    if (pUVar7 == (UBlackboardComponent *)0x0) goto LAB_146f09d5b;
  }
  this_00 = (UBlackboardComponent *)(pUVar7->DefaultBlackboardAsset).field0_0x0.DebugPtr;
LAB_146f09d98:
  if (this_00 == (UBlackboardComponent *)0x0) {
    local_68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    this = (this_00->BlackboardAsset).field0_0x0.DebugPtr;
    FVar8.Key = 0xffff;
    if (this != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this,&local_res10,(int)ppvVar6 + 0x10);
      FVar8.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    UBlackboardComponent::GetValue<UBlackboardKeyType_Vector>
              (this_00,(TVector<double> *)&local_68._s_0,FVar8);
  }
  *(double *)param_3 = local_68._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_68._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_68._s_0.Z;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execGetOwnerComponent @ 146f09f50

void __cdecl
UBTFunctionLibrary::execGetOwnerComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] == 0) ||
     ((*(uint *)(*(longlong *)(local_res10[0] + 0x10) + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    if (lVar4 == 0) goto LAB_146f0a032;
  }
  lVar4 = *(longlong *)(lVar4 + 0x20);
  if (lVar4 == 0) {
LAB_146f0a01d:
    lVar4 = 0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_146f0a01d;
  }
  if (lVar4 != 0) {
    *(longlong *)param_3 = lVar4;
    return;
  }
LAB_146f0a032:
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetOwnersBlackboard @ 146f0a060

void __cdecl
UBTFunctionLibrary::execGetOwnersBlackboard(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] == 0) ||
     ((*(uint *)(*(longlong *)(local_res10[0] + 0x10) + 0xd4) >> 0x12 & 1) == 0)) {
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2b);
    lVar6 = 0;
    if (lVar3 != 0) goto LAB_146f0a101;
  }
  else {
LAB_146f0a101:
    lVar6 = *(longlong *)(lVar3 + 0x20);
    if (lVar6 == 0) {
LAB_146f0a12d:
      lVar6 = 0;
    }
    else {
      pUVar5 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar5->_padding_)) goto LAB_146f0a12d;
    }
    if (lVar6 != 0) goto LAB_146f0a134;
  }
  FRuntimeErrors::LogRuntimeIssueReturningFalse
            ("OwnerComp != nullptr",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
             ,0x2e);
  bVar4 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                    ("BTComponent != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                     ,0x36);
  if (!bVar4) {
    *(undefined8 *)param_3 = 0;
    return;
  }
LAB_146f0a134:
  *(undefined8 *)param_3 = *(undefined8 *)(lVar6 + 200);
  return;
}

// execSetBlackboardValueAsBool @ 146f0ae90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execSetBlackboardValueAsBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  FKey FVar8;
  void **ppvVar9;
  bool bVar10;
  FName local_res10 [2];
  int local_res20 [2];
  longlong local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  
  lVar7 = 0;
  local_58 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_2c = local_2c & 0xfffffffe;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res20[0] = 0;
  ppvVar9 = &local_50;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar9 = (void **)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  lVar4 = local_58;
  bVar10 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_58 == 0) || ((*(uint *)(*(longlong *)(local_58 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar4 == 0)) {
LAB_146f0b01e:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar5 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar5) goto LAB_146f0b097;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    if (lVar4 == 0) {
LAB_146f0b011:
      lVar4 = lVar7;
    }
    else {
      pUVar6 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          != &pUVar6->_padding_)) goto LAB_146f0b011;
    }
    lVar7 = lVar4;
    if (lVar7 == 0) goto LAB_146f0b01e;
  }
  this = *(UBlackboardComponent **)(lVar7 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar8.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,local_res10,(int)ppvVar9 + 0x10);
      FVar8.Key = (ushort)local_res10[0].ComparisonIndex.Value;
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Bool>(this,FVar8,bVar10);
  }
LAB_146f0b097:
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execSetBlackboardValueAsClass @ 146f0b0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execSetBlackboardValueAsClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  UClass *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong lVar8;
  FKey FVar9;
  void **ppvVar10;
  FName local_res10 [2];
  UClass *local_res20;
  longlong local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  
  lVar8 = 0;
  local_58 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_2c = local_2c & 0xfffffffe;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res20 = (UClass *)0x0;
  ppvVar10 = &local_50;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  lVar4 = local_58;
  pUVar5 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_58 == 0) || ((*(uint *)(*(longlong *)(local_58 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar4 == 0)) {
LAB_146f0b24a:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar6 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar6) goto LAB_146f0b2c2;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    if (lVar4 == 0) {
LAB_146f0b23d:
      lVar4 = lVar8;
    }
    else {
      pUVar7 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          != &pUVar7->_padding_)) goto LAB_146f0b23d;
    }
    lVar8 = lVar4;
    if (lVar8 == 0) goto LAB_146f0b24a;
  }
  this = *(UBlackboardComponent **)(lVar8 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar9.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,local_res10,(int)ppvVar10 + 0x10);
      FVar9.Key = (ushort)local_res10[0].ComparisonIndex.Value;
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Class>(this,FVar9,pUVar5);
  }
LAB_146f0b2c2:
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execSetBlackboardValueAsEnum @ 146f0b2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execSetBlackboardValueAsEnum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  uchar uVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong lVar8;
  FKey FVar9;
  void **ppvVar10;
  uchar local_res10 [16];
  FName local_res20;
  longlong local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  
  lVar8 = 0;
  local_58 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_2c = local_2c & 0xfffffffe;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res10[0] = '\0';
  ppvVar10 = &local_50;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_58;
  uVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_58 == 0) || ((*(uint *)(*(longlong *)(local_58 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar4 == 0)) {
LAB_146f0b47a:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar6 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar6) goto LAB_146f0b4f3;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    if (lVar4 == 0) {
LAB_146f0b46d:
      lVar4 = lVar8;
    }
    else {
      pUVar7 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          != &pUVar7->_padding_)) goto LAB_146f0b46d;
    }
    lVar8 = lVar4;
    if (lVar8 == 0) goto LAB_146f0b47a;
  }
  this = *(UBlackboardComponent **)(lVar8 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar9.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,&local_res20,(int)ppvVar10 + 0x10);
      FVar9.Key = (ushort)local_res20.ComparisonIndex.Value;
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Enum>(this,FVar9,uVar5);
  }
LAB_146f0b4f3:
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execSetBlackboardValueAsFloat @ 146f0b520

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execSetBlackboardValueAsFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  float fVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong lVar8;
  FKey FVar9;
  void **ppvVar10;
  FName local_res10 [2];
  float local_res20 [2];
  longlong local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  
  lVar8 = 0;
  local_68 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_3c = local_3c & 0xfffffffe;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20[0] = 0.0;
  ppvVar10 = &local_60;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  lVar4 = local_68;
  fVar5 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_68 == 0) || ((*(uint *)(*(longlong *)(local_68 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar4 == 0)) {
LAB_146f0b6b0:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar6 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar6) goto LAB_146f0b728;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    if (lVar4 == 0) {
LAB_146f0b6a3:
      lVar4 = lVar8;
    }
    else {
      pUVar7 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          != &pUVar7->_padding_)) goto LAB_146f0b6a3;
    }
    lVar8 = lVar4;
    if (lVar8 == 0) goto LAB_146f0b6b0;
  }
  this = *(UBlackboardComponent **)(lVar8 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar9.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,local_res10,(int)ppvVar10 + 0x10);
      FVar9.Key = (ushort)local_res10[0].ComparisonIndex.Value;
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Float>(this,FVar9,fVar5);
  }
LAB_146f0b728:
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// execSetBlackboardValueAsInt @ 146f0b760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execSetBlackboardValueAsInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  int iVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong lVar8;
  FKey FVar9;
  void **ppvVar10;
  FName local_res10 [2];
  int local_res20 [2];
  longlong local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  
  lVar8 = 0;
  local_58 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_2c = local_2c & 0xfffffffe;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res20[0] = 0;
  ppvVar10 = &local_50;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  lVar4 = local_58;
  iVar5 = local_res20[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_58 == 0) || ((*(uint *)(*(longlong *)(local_58 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar4 == 0)) {
LAB_146f0b8e9:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar6 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar6) goto LAB_146f0b961;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    if (lVar4 == 0) {
LAB_146f0b8dc:
      lVar4 = lVar8;
    }
    else {
      pUVar7 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          != &pUVar7->_padding_)) goto LAB_146f0b8dc;
    }
    lVar8 = lVar4;
    if (lVar8 == 0) goto LAB_146f0b8e9;
  }
  this = *(UBlackboardComponent **)(lVar8 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar9.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,local_res10,(int)ppvVar10 + 0x10);
      FVar9.Key = (ushort)local_res10[0].ComparisonIndex.Value;
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Int>(this,FVar9,iVar5);
  }
LAB_146f0b961:
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execSetBlackboardValueAsName @ 146f0b990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execSetBlackboardValueAsName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  FName FVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong lVar8;
  FKey FVar9;
  void **ppvVar10;
  FName local_res10;
  FName local_res20;
  longlong local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  
  lVar8 = 0;
  local_58 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_2c = local_2c & 0xfffffffe;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  ppvVar10 = &local_50;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  lVar4 = local_58;
  FVar5 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_58 == 0) || ((*(uint *)(*(longlong *)(local_58 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar4 == 0)) {
LAB_146f0bb08:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar6 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar6) goto LAB_146f0bb7a;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    if (lVar4 == 0) {
LAB_146f0bafb:
      lVar4 = lVar8;
    }
    else {
      pUVar7 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          != &pUVar7->_padding_)) goto LAB_146f0bafb;
    }
    lVar8 = lVar4;
    if (lVar8 == 0) goto LAB_146f0bb08;
  }
  this = *(UBlackboardComponent **)(lVar8 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar9.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar10 + 0x10);
      FVar9.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Name>(this,FVar9,FVar5);
  }
LAB_146f0bb7a:
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execSetBlackboardValueAsObject @ 146f0bbb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execSetBlackboardValueAsObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  UObject *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong lVar8;
  FKey FVar9;
  void **ppvVar10;
  FName local_res10 [2];
  UObject *local_res20;
  longlong local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  
  lVar8 = 0;
  local_58 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_2c = local_2c & 0xfffffffe;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res20 = (UObject *)0x0;
  ppvVar10 = &local_50;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar10 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  lVar4 = local_58;
  pUVar5 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_58 == 0) || ((*(uint *)(*(longlong *)(local_58 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar4 == 0)) {
LAB_146f0bd3a:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar6 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar6) goto LAB_146f0bdb2;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    if (lVar4 == 0) {
LAB_146f0bd2d:
      lVar4 = lVar8;
    }
    else {
      pUVar7 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          != &pUVar7->_padding_)) goto LAB_146f0bd2d;
    }
    lVar8 = lVar4;
    if (lVar8 == 0) goto LAB_146f0bd3a;
  }
  this = *(UBlackboardComponent **)(lVar8 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar9.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,local_res10,(int)ppvVar10 + 0x10);
      FVar9.Key = (ushort)local_res10[0].ComparisonIndex.Value;
    }
    UBlackboardComponent::SetValue<UBlackboardKeyType_Object>(this,FVar9,pUVar5);
  }
LAB_146f0bdb2:
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execSetBlackboardValueAsRotator @ 146f0bde0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execSetBlackboardValueAsRotator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  void **ppvVar8;
  FKey FVar9;
  FName local_res10;
  longlong local_res20;
  TRotator<double> local_88;
  double local_68;
  double dStack_60;
  double local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  
  lVar7 = 0;
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_2c = local_2c & 0xfffffffe;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  ppvVar8 = &local_50;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  lVar4 = local_res20;
  local_88.Pitch = local_68;
  local_88.Yaw = dStack_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res20 == 0) ||
      ((*(uint *)(*(longlong *)(local_res20 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar4 == 0)) {
LAB_146f0bf67:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar5 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar5) goto LAB_146f0bfec;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    if (lVar4 == 0) {
LAB_146f0bf5a:
      lVar4 = lVar7;
    }
    else {
      pUVar6 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          != &pUVar6->_padding_)) goto LAB_146f0bf5a;
    }
    lVar7 = lVar4;
    if (lVar7 == 0) goto LAB_146f0bf67;
  }
  this = *(UBlackboardComponent **)(lVar7 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar9.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar8 + 0x10);
      FVar9.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    local_88.Roll = local_58;
    UBlackboardComponent::SetValue<UBlackboardKeyType_Rotator>(this,FVar9,&local_88);
  }
LAB_146f0bfec:
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execSetBlackboardValueAsString @ 146f0c020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execSetBlackboardValueAsString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  FScriptContainerElement *pFVar4;
  void *_Src;
  bool bVar5;
  UClass *pUVar6;
  FString *pFVar7;
  FString *pFVar8;
  longlong lVar9;
  longlong lVar10;
  void **ppvVar11;
  FKey FVar12;
  FName local_res10;
  longlong local_res20;
  FString local_98;
  void *local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  
  lVar10 = 0;
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_34 = local_34 & 0xfffffffe;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_88 = (void *)0x0;
  local_80 = 0;
  ppvVar11 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar11 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  _Src = local_88;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)(int)local_80;
  local_98.Data.ArrayNum = (int)local_80;
  if ((int)local_80 == 0) {
    local_98.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_80,0,(ForAnyElementType *)&local_98,(int)local_80,
               &local_98.Data.ArrayMax);
    memcpy(local_98.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  }
  lVar9 = local_res20;
  if (((local_res20 == 0) ||
      ((*(uint *)(*(longlong *)(local_res20 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar9 == 0)) {
LAB_146f0c1f0:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar5 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar5) goto LAB_146f0c28b;
  }
  else {
    lVar9 = *(longlong *)(lVar9 + 0x20);
    if (lVar9 == 0) {
LAB_146f0c1e3:
      lVar9 = lVar10;
    }
    else {
      pUVar6 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          != &pUVar6->_padding_)) goto LAB_146f0c1e3;
    }
    lVar10 = lVar9;
    if (lVar10 == 0) goto LAB_146f0c1f0;
  }
  this = *(UBlackboardComponent **)(lVar10 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    pFVar7 = ::FString::FString(&local_78,&local_98);
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar12.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar11 + 0x10);
      FVar12.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    pFVar8 = ::FString::FString(&local_68,pFVar7);
    UBlackboardComponent::SetValue<UBlackboardKeyType_String>(this,FVar12,pFVar8);
    pFVar4 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
LAB_146f0c28b:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execSetBlackboardValueAsVector @ 146f0c2e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UBTFunctionLibrary::execSetBlackboardValueAsVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UBlackboardComponent *this;
  UBlackboardData *this_00;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  void **ppvVar8;
  FKey FVar9;
  FName local_res10;
  longlong local_res20;
  TVector<double>_u_0 local_88;
  double local_68;
  double dStack_60;
  double local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  
  lVar7 = 0;
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_2c = local_2c & 0xfffffffe;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  ppvVar8 = &local_50;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  lVar4 = local_res20;
  local_88._s_0.X = local_68;
  local_88._s_0.Y = dStack_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res20 == 0) ||
      ((*(uint *)(*(longlong *)(local_res20 + 0x10) + 0xd4) >> 0x12 & 1) == 0)) &&
     (FRuntimeErrors::LogRuntimeIssueReturningFalse
                ("(NodeOwner != nullptr) && (NodeOwner->GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                 ,0x2b), lVar4 == 0)) {
LAB_146f0c467:
    FRuntimeErrors::LogRuntimeIssueReturningFalse
              ("OwnerComp != nullptr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
               ,0x2e);
    bVar5 = FRuntimeErrors::LogRuntimeIssueReturningFalse
                      ("BTComponent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\BTFunctionLibrary.cpp"
                       ,0x36);
    if (!bVar5) goto LAB_146f0c4ec;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    if (lVar4 == 0) {
LAB_146f0c45a:
      lVar4 = lVar7;
    }
    else {
      pUVar6 = Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          != &pUVar6->_padding_)) goto LAB_146f0c45a;
    }
    lVar7 = lVar4;
    if (lVar7 == 0) goto LAB_146f0c467;
  }
  this = *(UBlackboardComponent **)(lVar7 + 200);
  if (this != (UBlackboardComponent *)0x0) {
    this_00 = (this->BlackboardAsset).field0_0x0.DebugPtr;
    FVar9.Key = 0xffff;
    if (this_00 != (UBlackboardData *)0x0) {
      UBlackboardData::InternalGetKeyID(this_00,&local_res10,(int)ppvVar8 + 0x10);
      FVar9.Key = (ushort)local_res10.ComparisonIndex.Value;
    }
    local_88._s_0.Z = local_58;
    UBlackboardComponent::SetValue<UBlackboardKeyType_Vector>
              (this,FVar9,(TVector<double> *)&local_88._s_0);
  }
LAB_146f0c4ec:
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return;
}

// execStartUsingExternalEvent @ 146f0d260

void __cdecl
UBTFunctionLibrary::execStartUsingExternalEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execStopUsingExternalEvent @ 146f0d310

void __cdecl
UBTFunctionLibrary::execStopUsingExternalEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

