// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149c3bd10

UClass * __cdecl UPCGWorldRaycastElementSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldRaycastElementSettings",
               &Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.InnerSingleton,
               StaticRegisterNativesUPCGWorldRaycastElementSettings,0x328,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGWorldRaycastElementSettings>,
               InternalVTableHelperCtorCaller<UPCGWorldRaycastElementSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.InnerSingleton;
}

// UPCGWorldRaycastElementSettings @ 149c4cd00

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

UPCGWorldRaycastElementSettings * __thiscall
UPCGWorldRaycastElementSettings::UPCGWorldRaycastElementSettings
          (UPCGWorldRaycastElementSettings *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  FObjectInitializer *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FString local_28;
  double local_18;
  
  pFVar5 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar5);
  this->_padding_ = (longlong)&___7UPCGWorldRaycastElementSettings__6B_;
  (this->CollisionShape).ShapeType = Line;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Y = (double)uVar2;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->CollisionShape).SphereRadius = 100.0;
  (this->CollisionShape).CapsuleRadius = 100.0;
  (this->CollisionShape).CapsuleHalfHeight = 100.0;
  dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->CollisionShape).ShapeRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->CollisionShape).ShapeRotation.Yaw = dVar4;
  (this->CollisionShape).ShapeRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RaycastMode = Infinite;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->OriginInputAttribute);
  uVar2 = __xmm_80000000000000008000000000000000;
  this->bOverrideRayDirections = false;
  uVar3 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  local_18 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  uVar6 = (uint)uVar2;
  uVar7 = (uint)((ulonglong)uVar2 >> 0x20);
  uVar8 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_ ^ uVar6;
  uVar9 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_ ^ uVar7;
  (this->RayDirection).field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_ ^ uVar7,
                        UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_ ^ uVar6);
  (this->RayDirection).field0_0x0._s_0.Y = (double)CONCAT44(uVar9,uVar8);
  (this->RayDirection).field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar7,(uint)uVar3 ^ uVar6);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->RayDirectionAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->EndPointAttribute);
  this->bOverrideRayLengths = false;
  this->RayLength = 100000.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->RayLengthAttribute);
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->WorldQueryParams);
  (this->WorldQueryParams).bGetReferenceToStaticMesh = '\0';
  (this->WorldQueryParams).bUseRenderMaterialIndex = '\0';
  (this->WorldQueryParams).bApplyMetadataFromLandscape = '\0';
  (this->WorldQueryParams).bGetSectionIndex = '\0';
  (this->WorldQueryParams).bGetElementIndex = '\0';
  (this->WorldQueryParams).bGetUVCoords = '\0';
  (this->WorldQueryParams).bGetFaceIndex = '\0';
  (this->WorldQueryParams).bGetRenderMaterialIndex = '\0';
  (this->WorldQueryParams).RenderMaterialIndex = 0;
  (this->WorldQueryParams).UVChannel = 0;
  puVar1 = &(this->WorldQueryParams).field_0xc8;
  (this->WorldQueryParams).bIgnoreBackfaceHits = '\0';
  (this->WorldQueryParams).bGetReferenceToRenderMaterial = '\0';
  (this->WorldQueryParams).bGetLocalImpactPoint = '\0';
  (this->WorldQueryParams).bGetDistance = '\0';
  (this->WorldQueryParams).bGetReflection = '\0';
  (this->WorldQueryParams).bGetImpactNormal = '\0';
  (this->WorldQueryParams).bGetImpactPoint = '\0';
  (this->WorldQueryParams).bGetImpact = '\0';
  this->bKeepOriginalPointOnMiss = false;
  this->bUnbounded = false;
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&this->OriginInputAttribute,Position,true);
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&this->EndPointAttribute,Position,true);
  ::FString::FString(&local_28,"$Rotation.Up");
  FPCGAttributePropertySelector::Update
            ((FPCGAttributePropertySelector *)&this->RayDirectionAttribute,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// UPCGWorldRaycastElementSettings @ 149c4cf00

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

UPCGWorldRaycastElementSettings * __thiscall
UPCGWorldRaycastElementSettings::UPCGWorldRaycastElementSettings
          (UPCGWorldRaycastElementSettings *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGWorldRaycastElementSettings__6B_;
  (this->CollisionShape).ShapeType = Line;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Y = (double)uVar3;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->CollisionShape).SphereRadius = 100.0;
  (this->CollisionShape).CapsuleRadius = 100.0;
  (this->CollisionShape).CapsuleHalfHeight = 100.0;
  dVar4 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->CollisionShape).ShapeRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->CollisionShape).ShapeRotation.Yaw = dVar4;
  (this->CollisionShape).ShapeRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RaycastMode = Infinite;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->OriginInputAttribute);
  uVar3 = __xmm_80000000000000008000000000000000;
  this->bOverrideRayDirections = false;
  uVar5 = (uint)uVar3;
  uVar9 = SUB84(UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z,0);
  uVar2 = (ulonglong)UE::Math::TVector<double>::ZAxisVector.field0_0x0._16_8_ >> 0x20;
  uVar6 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar7 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_ ^ uVar5;
  uVar8 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_ ^ uVar6;
  (this->RayDirection).field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_ ^ uVar6,
                        UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_ ^ uVar5);
  (this->RayDirection).field0_0x0._s_0.Y = (double)CONCAT44(uVar8,uVar7);
  (this->RayDirection).field0_0x0._s_0.Z = (double)CONCAT44((uint)uVar2 ^ uVar6,uVar9 ^ uVar5);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->RayDirectionAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->EndPointAttribute);
  this->bOverrideRayLengths = false;
  this->RayLength = 100000.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->RayLengthAttribute);
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->WorldQueryParams);
  (this->WorldQueryParams).bGetReferenceToStaticMesh = '\0';
  (this->WorldQueryParams).bUseRenderMaterialIndex = '\0';
  (this->WorldQueryParams).bApplyMetadataFromLandscape = '\0';
  (this->WorldQueryParams).bGetSectionIndex = '\0';
  (this->WorldQueryParams).bGetElementIndex = '\0';
  (this->WorldQueryParams).bGetUVCoords = '\0';
  (this->WorldQueryParams).bGetFaceIndex = '\0';
  (this->WorldQueryParams).bGetRenderMaterialIndex = '\0';
  (this->WorldQueryParams).RenderMaterialIndex = 0;
  (this->WorldQueryParams).UVChannel = 0;
  puVar1 = &(this->WorldQueryParams).field_0xc8;
  (this->WorldQueryParams).bIgnoreBackfaceHits = '\0';
  (this->WorldQueryParams).bGetReferenceToRenderMaterial = '\0';
  (this->WorldQueryParams).bGetLocalImpactPoint = '\0';
  (this->WorldQueryParams).bGetDistance = '\0';
  (this->WorldQueryParams).bGetReflection = '\0';
  (this->WorldQueryParams).bGetImpactNormal = '\0';
  (this->WorldQueryParams).bGetImpactPoint = '\0';
  (this->WorldQueryParams).bGetImpact = '\0';
  this->bKeepOriginalPointOnMiss = false;
  this->bUnbounded = false;
  return this;
}

// ~UPCGWorldRaycastElementSettings @ 149c4dfe0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __thiscall
UPCGWorldRaycastElementSettings::~UPCGWorldRaycastElementSettings
          (UPCGWorldRaycastElementSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGWorldRaycastElementSettings__6B_;
  FPCGWorldCommonQueryParams::~FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->WorldQueryParams);
  DestructItems<FString,int>
            (*(FString **)&(this->RayLengthAttribute).field_0x28,
             *(int *)&(this->RayLengthAttribute).field_0x30);
  pvVar1 = *(void **)&(this->RayLengthAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->EndPointAttribute).field_0x28,
             *(int *)&(this->EndPointAttribute).field_0x30);
  pvVar1 = *(void **)&(this->EndPointAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->RayDirectionAttribute).field_0x28,
             *(int *)&(this->RayDirectionAttribute).field_0x30);
  pvVar1 = *(void **)&(this->RayDirectionAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->OriginInputAttribute).field_0x28,
             *(int *)&(this->OriginInputAttribute).field_0x30);
  pvVar1 = *(void **)&(this->OriginInputAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ApplyPreconfiguredSettings @ 149c5cdb0

void __thiscall
UPCGWorldRaycastElementSettings::ApplyPreconfiguredSettings
          (UPCGWorldRaycastElementSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == 0) {
    (this->CollisionShape).ShapeType = Line;
    return;
  }
  if (iVar1 == 1) {
    (this->CollisionShape).ShapeType = Box;
    return;
  }
  if (iVar1 == 2) {
    (this->CollisionShape).ShapeType = Sphere;
    return;
  }
  if (iVar1 != 3) {
    PCGLog::Settings::LogInvalidPreconfigurationWarning
              (iVar1,&PCGWorldRaycastElement::Constants::DefaultNodeTitle);
    return;
  }
  (this->CollisionShape).ShapeType = Capsule;
  return;
}

// CreateElement @ 149c60f80

TSharedPtr<IPCGElement,1> * __thiscall
UPCGWorldRaycastElementSettings::CreateElement
          (UPCGWorldRaycastElementSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGWorldRaycastElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGWorldRaycastElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetAdditionalTitleInformation @ 149c761b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UPCGWorldRaycastElementSettings::GetAdditionalTitleInformation
          (UPCGWorldRaycastElementSettings *this,FString *__return_storage_ptr__)

{
  EPCGCollisionShapeType EVar1;
  code *pcVar2;
  TRefCountPtr<ITextData> TVar3;
  char cVar4;
  FName *pFVar5;
  FText *pFVar6;
  UEnum *this_00;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  FName local_res8;
  FText local_68;
  undefined1 local_58 [16];
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  FText::FText(&local_68);
  pcVar2 = *(code **)(this->_padding_ + 0x3e0);
  pFVar5 = ::FName::FName(&local_res8,0xe,L"CollisionShape",FNAME_Add);
  local_58._0_8_ = *pFVar5;
  pFVar5 = ::FName::FName(&local_res8,9,L"ShapeType",FNAME_Add);
  local_58._8_8_ = *pFVar5;
  local_48.TextData.Reference = (ITextData *)local_58;
  local_48.Flags = 2;
  cVar4 = (*pcVar2)(this,&local_48);
  TVar3.Reference = local_68.TextData.Reference;
  if (cVar4 == '\0') {
    EVar1 = (this->CollisionShape).ShapeType;
    if (EVar1 == Line) {
      local_68.Flags = PCGWorldRaycastElement::Constants::Labels::LineTrace.Flags;
      if (local_68.TextData.Reference !=
          PCGWorldRaycastElement::Constants::Labels::LineTrace.TextData.Reference) {
        local_68.TextData.Reference =
             PCGWorldRaycastElement::Constants::Labels::LineTrace.TextData.Reference;
        if (PCGWorldRaycastElement::Constants::Labels::LineTrace.TextData.Reference !=
            (ITextData *)0x0) {
          (**(code **)((longlong)
                       *PCGWorldRaycastElement::Constants::Labels::LineTrace.TextData.Reference + 8)
          )(PCGWorldRaycastElement::Constants::Labels::LineTrace.TextData.Reference,&local_res8);
        }
        local_68.Flags = PCGWorldRaycastElement::Constants::Labels::LineTrace.Flags;
        if (TVar3.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
          local_68.Flags = PCGWorldRaycastElement::Constants::Labels::LineTrace.Flags;
        }
      }
      goto LAB_149c763b9;
    }
    if (EVar1 == Box) {
      local_68.Flags = PCGWorldRaycastElement::Constants::Labels::BoxSweep.Flags;
      if (local_68.TextData.Reference !=
          PCGWorldRaycastElement::Constants::Labels::BoxSweep.TextData.Reference) {
        local_68.TextData.Reference =
             PCGWorldRaycastElement::Constants::Labels::BoxSweep.TextData.Reference;
        if (PCGWorldRaycastElement::Constants::Labels::BoxSweep.TextData.Reference !=
            (ITextData *)0x0) {
          (**(code **)((longlong)
                       *PCGWorldRaycastElement::Constants::Labels::BoxSweep.TextData.Reference + 8))
                    (PCGWorldRaycastElement::Constants::Labels::BoxSweep.TextData.Reference,
                     &local_res8);
        }
        local_68.Flags = PCGWorldRaycastElement::Constants::Labels::BoxSweep.Flags;
        if (TVar3.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
          local_68.Flags = PCGWorldRaycastElement::Constants::Labels::BoxSweep.Flags;
        }
      }
      goto LAB_149c763b9;
    }
    if (EVar1 == Sphere) {
      local_68.Flags = PCGWorldRaycastElement::Constants::Labels::SphereSweep.Flags;
      if (local_68.TextData.Reference !=
          PCGWorldRaycastElement::Constants::Labels::SphereSweep.TextData.Reference) {
        local_68.TextData.Reference =
             PCGWorldRaycastElement::Constants::Labels::SphereSweep.TextData.Reference;
        if (PCGWorldRaycastElement::Constants::Labels::SphereSweep.TextData.Reference !=
            (ITextData *)0x0) {
          (**(code **)((longlong)
                       *PCGWorldRaycastElement::Constants::Labels::SphereSweep.TextData.Reference +
                      8))(PCGWorldRaycastElement::Constants::Labels::SphereSweep.TextData.Reference,
                          &local_res8);
        }
        local_68.Flags = PCGWorldRaycastElement::Constants::Labels::SphereSweep.Flags;
        if (TVar3.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
          local_68.Flags = PCGWorldRaycastElement::Constants::Labels::SphereSweep.Flags;
        }
      }
      goto LAB_149c763b9;
    }
    if (EVar1 == Capsule) {
      local_68.Flags = PCGWorldRaycastElement::Constants::Labels::CapsuleSweep.Flags;
      if (local_68.TextData.Reference !=
          PCGWorldRaycastElement::Constants::Labels::CapsuleSweep.TextData.Reference) {
        local_68.TextData.Reference =
             PCGWorldRaycastElement::Constants::Labels::CapsuleSweep.TextData.Reference;
        if (PCGWorldRaycastElement::Constants::Labels::CapsuleSweep.TextData.Reference !=
            (ITextData *)0x0) {
          (**(code **)((longlong)
                       *PCGWorldRaycastElement::Constants::Labels::CapsuleSweep.TextData.Reference +
                      8))(PCGWorldRaycastElement::Constants::Labels::CapsuleSweep.TextData.Reference
                          ,&local_res8);
        }
        local_68.Flags = PCGWorldRaycastElement::Constants::Labels::CapsuleSweep.Flags;
        if (TVar3.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
          local_68.Flags = PCGWorldRaycastElement::Constants::Labels::CapsuleSweep.Flags;
        }
      }
      goto LAB_149c763b9;
    }
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"PCGWorldRaycastElement",L"InvalidCollisionShapeType",
                        L"World Raycast - Invalid Collision Shape Type");
    PCGLog::LogErrorOnGraph(pFVar6,(FPCGContext *)0x0);
  }
  else {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"PCGWorldRaycastElement",L"ShapeTypeOverridden",L"Overridden");
    FText::operator=(&local_68,pFVar6);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
LAB_149c763b9:
  pcVar2 = *(code **)(this->_padding_ + 1000);
  pFVar5 = ::FName::FName(&local_res8,0xb,L"RaycastMode",FNAME_Add);
  cVar4 = (*pcVar2)(this,*pFVar5);
  if ((cVar4 == '\0') &&
     (this_00 = StaticEnum<enum_EPCGWorldRaycastMode>(), this_00 != (UEnum *)0x0)) {
    pFVar6 = UEnum::GetDisplayNameTextByValue(this_00,&local_28,(ulonglong)this->RaycastMode);
    local_48.TextData.Reference = local_68.TextData.Reference;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 8))
                (local_68.TextData.Reference,&local_res8);
    }
    local_48.Flags = local_68.Flags;
    pFVar7 = FText::AsCultureInvariant(&local_38,L"{0} ({1})");
    pFVar8 = FTextFormat::FTextFormat(&local_18,pFVar7,Default);
    pFVar6 = FText::Format<FText,FText>((FText *)local_58,pFVar8,&local_48,pFVar6);
    FText::operator=(&local_68,pFVar6);
    if ((FName)local_58._0_8_ != (FName)0x0) {
      (**(code **)(*(longlong *)local_58._0_8_ + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  pFVar9 = FText::ToString(&local_68);
  ::FString::FString(__return_storage_ptr__,pFVar9);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c79230

UClass * __cdecl UPCGWorldRaycastElementSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldRaycastElementSettings",
               &Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.InnerSingleton,
               StaticRegisterNativesUPCGWorldRaycastElementSettings,0x328,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGWorldRaycastElementSettings>,
               InternalVTableHelperCtorCaller<UPCGWorldRaycastElementSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldRaycastElementSettings.InnerSingleton;
}

// InputPinProperties @ 149c804c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGWorldRaycastElementSettings::InputPinProperties
          (UPCGWorldRaycastElementSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrParam);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGWorldRaycastElement::Constants::Labels::OriginsInput,pFVar4,true,true,
                      pFVar3);
  pFVar5->PinStatus = Required;
  if (this->RaycastMode == Segments) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrParam);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGWorldRaycastElement::Constants::Labels::EndPointsInput,pFVar4,true,true,pFVar3);
  }
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spatial);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGWorldRaycastElement::Constants::Labels::BoundingShape,pFVar4,true,true,pFVar3);
  FPCGWorldCommonQueryParams::AddFilterPinIfNeeded
            ((FPCGWorldCommonQueryParams *)&this->WorldQueryParams,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c81b20

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGWorldRaycastElementSettings::OutputPinProperties
          (UPCGWorldRaycastElementSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGWorldRaycastElementSettings @ 149c92120

void __cdecl
UPCGWorldRaycastElementSettings::StaticRegisterNativesUPCGWorldRaycastElementSettings(void)

{
  return;
}

