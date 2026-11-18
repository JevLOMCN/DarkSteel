// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 14

// StaticClass @ 14ab99450

UClass * __cdecl UCustomizableObjectInstanceUsagePrivate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectInstanceUsagePrivate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectInstanceUsagePrivate",
               &Z_Registration_Info_UClass_UCustomizableObjectInstanceUsagePrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectInstanceUsagePrivate,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectInstanceUsagePrivate>
               ,InternalVTableHelperCtorCaller<UCustomizableObjectInstanceUsagePrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectInstanceUsagePrivate.InnerSingleton;
}

// UCustomizableObjectInstanceUsagePrivate @ 14aba0080

UCustomizableObjectInstanceUsagePrivate * __thiscall
UCustomizableObjectInstanceUsagePrivate::UCustomizableObjectInstanceUsagePrivate
          (UCustomizableObjectInstanceUsagePrivate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bPendingSetSkeletalMesh = true;
  this->_padding_ = (longlong)&___7UCustomizableObjectInstanceUsagePrivate__6B_;
  return this;
}

// UCustomizableObjectInstanceUsagePrivate @ 14aba00b0

UCustomizableObjectInstanceUsagePrivate * __thiscall
UCustomizableObjectInstanceUsagePrivate::UCustomizableObjectInstanceUsagePrivate
          (UCustomizableObjectInstanceUsagePrivate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bPendingSetSkeletalMesh = true;
  this->_padding_ = (longlong)&___7UCustomizableObjectInstanceUsagePrivate__6B_;
  return this;
}

// ~UCustomizableObjectInstanceUsagePrivate @ 14aba2990

void __thiscall
UCustomizableObjectInstanceUsagePrivate::~UCustomizableObjectInstanceUsagePrivate
          (UCustomizableObjectInstanceUsagePrivate *this)

{
  this->_padding_ = (longlong)&___7UCustomizableObjectInstanceUsagePrivate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14aba5540

UClass * __cdecl UCustomizableObjectInstanceUsagePrivate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCustomizableObjectInstanceUsagePrivate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CustomizableObject",L"CustomizableObjectInstanceUsagePrivate",
               &Z_Registration_Info_UClass_UCustomizableObjectInstanceUsagePrivate.InnerSingleton,
               StaticRegisterNativesUCustomizableObjectInstanceUsagePrivate,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCustomizableObjectInstanceUsagePrivate>
               ,InternalVTableHelperCtorCaller<UCustomizableObjectInstanceUsagePrivate>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCustomizableObjectInstanceUsagePrivate.InnerSingleton;
}

// StaticRegisterNativesUCustomizableObjectInstanceUsagePrivate @ 14aba6980

void __cdecl
UCustomizableObjectInstanceUsagePrivate::
StaticRegisterNativesUCustomizableObjectInstanceUsagePrivate(void)

{
  return;
}

// Callbacks @ 14ac160f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCustomizableObjectInstanceUsagePrivate::Callbacks(UCustomizableObjectInstanceUsagePrivate *this)

{
  int iVar1;
  FName FVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  IModuleInterface *pIVar9;
  UClass *pUVar10;
  FReadAccessScope *this_01;
  undefined8 *puVar11;
  longlong lVar12;
  FName local_res8;
  undefined8 *local_98;
  int local_90;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  pFVar8 = ::FName::FName(&local_res8,"CustomizableObject");
  FVar2 = *pFVar8;
  this_00 = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModuleChecked(this_00,FVar2);
  (**(code **)((longlong)*pIVar9 + 0x60))(pIVar9,&local_98);
  for (puVar11 = local_98; puVar11 != local_98 + local_90; puVar11 = puVar11 + 1) {
    plVar3 = (longlong *)*puVar11;
    lVar12 = this->_padding_;
    pcVar4 = *(code **)(*plVar3 + 0x2d0);
    if ((lVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Public",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                           ,0x9b,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (*pcVar4)(plVar3,lVar12);
  }
  lVar12 = this->_padding_;
  if ((lVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                         ,0xa4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar12 = *(longlong *)(lVar12 + 0x20);
  if (lVar12 == 0) goto LAB_14ac1637e;
  lVar12 = *(longlong *)(lVar12 + 0x20);
  if (lVar12 == 0) {
LAB_14ac1623b:
    lVar12 = 0;
  }
  else {
    pUVar10 = UCustomizableSkeletalComponent::StaticClass();
    iVar1 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        != &pUVar10->_padding_)) goto LAB_14ac1623b;
  }
  if (lVar12 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar12 + 0x268),&local_88)
    ;
    if ((*(int *)(lVar12 + 0x278) != 0) && (*(longlong **)(lVar12 + 0x270) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar12 + 0x270) + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    lVar5 = this->_padding_;
    if ((lVar5 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Public",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                           ,0x9b,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar5 + 0x28),&local_58);
    if (((*(int *)(lVar5 + 0x38) == 0) || (*(longlong **)(lVar5 + 0x30) == (longlong *)0x0)) ||
       (cVar7 = (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x38))(), cVar7 == '\0')) {
      this_01 = &local_58;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar12 + 0x268),
                 &local_70);
      if (((*(int *)(lVar12 + 0x278) != 0) && (*(longlong **)(lVar12 + 0x270) != (longlong *)0x0))
         && (cVar7 = (**(code **)(**(longlong **)(lVar12 + 0x270) + 0x38))(), cVar7 != '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_70);
        if (1 < (byte)LogMutable._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
        }
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3654947027785089065>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                           ,0x29,"false");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_14ac1637e;
      }
      this_01 = &local_70;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (this_01);
  }
LAB_14ac1637e:
  lVar12 = this->_padding_;
  if ((lVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                         ,0x9b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar12 + 0x28),&local_40);
  if ((*(int *)(lVar12 + 0x38) != 0) && (*(longlong **)(lVar12 + 0x30) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar12 + 0x30) + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  return;
}

// GetAttachedSkeletalMesh @ 14ac1d3c0

USkeletalMesh * __thiscall
UCustomizableObjectInstanceUsagePrivate::GetAttachedSkeletalMesh
          (UCustomizableObjectInstanceUsagePrivate *this)

{
  UCustomizableObjectInstanceUsage *this_00;
  code *pcVar1;
  bool bVar2;
  USkeletalMesh *pUVar3;
  USkeletalMeshComponent *this_01;
  
  this_00 = (UCustomizableObjectInstanceUsage *)this->_padding_;
  if (this_00 == (UCustomizableObjectInstanceUsage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                       ,0xa4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USkeletalMesh *)(*pcVar1)();
      return pUVar3;
    }
  }
  this_01 = UCustomizableObjectInstanceUsage::GetAttachParent(this_00);
  if (this_01 != (USkeletalMeshComponent *)0x0) {
    pUVar3 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01);
    return pUVar3;
  }
  return (USkeletalMesh *)0x0;
}

// GetCustomizableSkeletalComponent @ 14ac1dd70

UCustomizableSkeletalComponent * __thiscall
UCustomizableObjectInstanceUsagePrivate::GetCustomizableSkeletalComponent
          (UCustomizableObjectInstanceUsagePrivate *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UCustomizableSkeletalComponent *pUVar5;
  UClass *pUVar6;
  
  lVar2 = this->_padding_;
  if ((lVar2 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                         ,0xa4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UCustomizableSkeletalComponent *)(*pcVar3)();
    return pUVar5;
  }
  lVar2 = *(longlong *)(lVar2 + 0x20);
  if (lVar2 == 0) {
    return (UCustomizableSkeletalComponent *)0x0;
  }
  pUVar5 = *(UCustomizableSkeletalComponent **)(lVar2 + 0x20);
  if (pUVar5 != (UCustomizableSkeletalComponent *)0x0) {
    pUVar6 = UCustomizableSkeletalComponent::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return pUVar5;
    }
  }
  return (UCustomizableSkeletalComponent *)0x0;
}

// GetPublic @ 14ac24600

UCustomizableObjectInstanceUsage * __thiscall
UCustomizableObjectInstanceUsagePrivate::GetPublic(UCustomizableObjectInstanceUsagePrivate *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectInstanceUsage *pUVar3;
  
  pUVar3 = (UCustomizableObjectInstanceUsage *)this->_padding_;
  if (pUVar3 == (UCustomizableObjectInstanceUsage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCustomizableObjectInstanceUsage *)(*pcVar1)();
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetPublic @ 14ac24650

UCustomizableObjectInstanceUsage * __thiscall
UCustomizableObjectInstanceUsagePrivate::GetPublic(UCustomizableObjectInstanceUsagePrivate *this)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectInstanceUsage *pUVar3;
  
  pUVar3 = (UCustomizableObjectInstanceUsage *)this->_padding_;
  if (pUVar3 == (UCustomizableObjectInstanceUsage *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                       ,0xa4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCustomizableObjectInstanceUsage *)(*pcVar1)();
      return pUVar3;
    }
  }
  return pUVar3;
}

// GetSkeletalMesh @ 14ac24a70

USkeletalMesh * __thiscall
UCustomizableObjectInstanceUsagePrivate::GetSkeletalMesh
          (UCustomizableObjectInstanceUsagePrivate *this)

{
  longlong lVar1;
  UCustomizableObjectInstanceUsage *this_00;
  code *pcVar2;
  bool bVar3;
  USkeletalMesh *pUVar4;
  UCustomizableSkeletalComponent *pUVar5;
  FName FVar6;
  UCustomizableObjectInstance *this_01;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Public",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                       ,0xa4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (USkeletalMesh *)(*pcVar2)();
      return pUVar4;
    }
  }
  pUVar5 = GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)(lVar1 + 0x60));
  if (pUVar5 == (UCustomizableSkeletalComponent *)0x0) {
    this_01 = *(UCustomizableObjectInstance **)(lVar1 + 0x48);
  }
  else {
    this_01 = (pUVar5->CustomizableObjectInstance).field0_0x0.DebugPtr;
  }
  if (this_01 != (UCustomizableObjectInstance *)0x0) {
    this_00 = (UCustomizableObjectInstanceUsage *)this->_padding_;
    if (this_00 == (UCustomizableObjectInstanceUsage *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                         ,0xa4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (USkeletalMesh *)(*pcVar2)();
        return pUVar4;
      }
    }
    FVar6 = UCustomizableObjectInstanceUsage::GetComponentName(this_00);
    pUVar4 = UCustomizableObjectInstance::GetComponentMeshSkeletalMesh(this_01,(FName *)FVar6);
    return pUVar4;
  }
  return (USkeletalMesh *)0x0;
}

// IsNetMode @ 14ac27cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UCustomizableObjectInstanceUsagePrivate::IsNetMode
          (UCustomizableObjectInstanceUsagePrivate *this,ENetMode param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ENetMode EVar5;
  UCustomizableSkeletalComponent *this_00;
  
  this_00 = GetCustomizableSkeletalComponent(this);
  if (this_00 == (UCustomizableSkeletalComponent *)0x0) {
    lVar1 = this->_padding_;
    if ((lVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Public",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                           ,0xa4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x40));
    if (!bVar3) {
      return false;
    }
    lVar1 = this->_padding_;
    if ((lVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Public",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                           ,0xa4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00 = (UCustomizableSkeletalComponent *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar1 + 0x40));
  }
  if (param_1 == NM_DedicatedServer) {
    return false;
  }
  EVar5 = UActorComponent::InternalGetNetMode((UActorComponent *)this_00);
  return EVar5 == param_1;
}

// UpdateDistFromComponentToPlayer @ 14ac4a6e0

/* WARNING: Type propagation algorithm not settling */
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
UCustomizableObjectInstanceUsagePrivate::UpdateDistFromComponentToPlayer
          (UCustomizableObjectInstanceUsagePrivate *this,AActor *param_1,bool param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  USceneComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  UCustomizableSkeletalComponent *pUVar7;
  USkeletalMeshComponent *this_00;
  AActor *this_01;
  UClass *pUVar8;
  UCustomizableInstancePrivate *pUVar9;
  UCustomizableObjectInstanceUsage *pUVar10;
  UCustomizableObjectInstance *this_02;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  UCustomizableObjectInstanceUsage *local_res8;
  AActor *local_res20;
  double local_68;
  double local_50;
  
  lVar3 = this->_padding_;
  if ((lVar3 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                         ,0x9b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar7 = GetCustomizableSkeletalComponent
                     (*(UCustomizableObjectInstanceUsagePrivate **)(lVar3 + 0x60));
  if (pUVar7 == (UCustomizableSkeletalComponent *)0x0) {
    this_02 = *(UCustomizableObjectInstance **)(lVar3 + 0x48);
  }
  else {
    this_02 = (pUVar7->CustomizableObjectInstance).field0_0x0.DebugPtr;
  }
  if (this_02 == (UCustomizableObjectInstance *)0x0) {
    return;
  }
  pUVar10 = (UCustomizableObjectInstanceUsage *)this->_padding_;
  if ((pUVar10 == (UCustomizableObjectInstanceUsage *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Public",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstanceUsage.cpp"
                         ,0x9b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = UCustomizableObjectInstanceUsage::GetAttachParent(pUVar10);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    UCustomizableObjectInstance::SetIsPlayerOrNearIt(this_02,false);
    return;
  }
  this_01 = USceneComponent::GetAttachmentRootActor((USceneComponent *)this_00);
  UCustomizableObjectInstance::SetIsPlayerOrNearIt(this_02,false);
  if (this_01 == (AActor *)0x0) {
    return;
  }
  bVar6 = UObjectBase::IsValidLowLevel((UObjectBase *)this_01);
  if (!bVar6) {
    return;
  }
  if ((this_01->ActorHasBegunPlay != HasBegunPlay) && (!param_2)) {
    return;
  }
  if ((param_1 == (AActor *)0x0) ||
     (bVar6 = UObjectBase::IsValidLowLevel((UObjectBase *)param_1), !bVar6)) {
    fVar17 = __real_bc23d70a;
    if (!param_2) {
      fVar17 = 0.0;
    }
    pUVar9 = UCustomizableObjectInstance::GetPrivate(this_02);
    fVar16 = pUVar9->MinSquareDistFromComponentToPlayer;
    if (fVar17 <= pUVar9->MinSquareDistFromComponentToPlayer) {
      fVar16 = fVar17;
    }
    pUVar9 = UCustomizableObjectInstance::GetPrivate(this_02);
    pUVar9->LastMinSquareDistFromComponentToPlayer = fVar16;
  }
  else {
    pUVar8 = Z_Construct_UClass_APawn_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar8->_padding_)) {
      UCustomizableObjectInstance::SetIsPlayerOrNearIt(this_02,false);
    }
    else {
      bVar6 = (bool)(**(code **)(this_01->_padding_ + 0x820))(this_01);
      UCustomizableObjectInstance::SetIsPlayerOrNearIt(this_02,bVar6);
      fVar17 = __real_bc23d70a;
      if (bVar6 != false) goto LAB_14ac4a927;
    }
    pUVar4 = (this_01->RootComponent).field0_0x0.DebugPtr;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    dVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    dVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    if (pUVar4 == (USceneComponent *)0x0) {
      local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar14 = dVar15;
    }
    else {
      local_68 = (pUVar4->ComponentToWorld).Translation.ZW.m128d_f64[0];
      auVar1 = *(undefined1 (*) [16])(pUVar4->ComponentToWorld).Translation.XY.m128d_f64;
      uVar12 = auVar1._0_4_;
      uVar13 = auVar1._4_4_;
      dVar14 = auVar1._8_8_;
    }
    pUVar4 = (param_1->RootComponent).field0_0x0.DebugPtr;
    if (pUVar4 == (USceneComponent *)0x0) {
      local_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_50 = (pUVar4->ComponentToWorld).Translation.ZW.m128d_f64[0];
      dVar11 = (pUVar4->ComponentToWorld).Translation.XY.m128d_f64[0];
      dVar15 = (pUVar4->ComponentToWorld).Translation.XY.m128d_f64[1];
    }
    dVar11 = (double)CONCAT44(uVar13,uVar12) - dVar11;
    fVar17 = (float)((dVar14 - dVar15) * (dVar14 - dVar15) + dVar11 * dVar11 +
                    (local_68 - local_50) * (local_68 - local_50));
  }
LAB_14ac4a927:
  pUVar9 = UCustomizableObjectInstance::GetPrivate(this_02);
  fVar16 = pUVar9->MinSquareDistFromComponentToPlayer;
  if (fVar17 <= pUVar9->MinSquareDistFromComponentToPlayer) {
    fVar16 = fVar17;
  }
  pUVar9 = UCustomizableObjectInstance::GetPrivate(this_02);
  pUVar9->MinSquareDistFromComponentToPlayer = fVar16;
  UCustomizableObjectInstance::SetIsBeingUsedByComponentInPlay(this_02,true);
  pUVar9 = UCustomizableObjectInstance::GetPrivate(this_02);
  if (fVar17 == pUVar9->MinSquareDistFromComponentToPlayer) {
    pUVar10 = GetPublic(this);
    pUVar9 = UCustomizableObjectInstance::GetPrivate(this_02);
    local_res8 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UCustomizableObjectInstanceUsage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    FWeakObjectPtr::operator=(&(pUVar9->NearestToActor).WeakPtr,(FObjectPtr)&local_res8);
    pUVar9 = UCustomizableObjectInstance::GetPrivate(this_02);
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(pUVar9->NearestToViewCenter).WeakPtr,(FObjectPtr)&local_res20);
  }
  return;
}

