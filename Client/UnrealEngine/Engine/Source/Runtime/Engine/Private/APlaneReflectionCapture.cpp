// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147321f50

UClass * __cdecl APlaneReflectionCapture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlaneReflectionCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlaneReflectionCapture",
               &Z_Registration_Info_UClass_APlaneReflectionCapture.InnerSingleton,
               StaticRegisterNativesAPlaneReflectionCapture,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<APlaneReflectionCapture>,
               InternalVTableHelperCtorCaller<APlaneReflectionCapture>,local_res8,
               AReflectionCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlaneReflectionCapture.InnerSingleton;
}

// APlaneReflectionCapture @ 1473246d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APlaneReflectionCapture * __thiscall
APlaneReflectionCapture::APlaneReflectionCapture
          (APlaneReflectionCapture *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined8 *)&this->field_0x2c0 = 0;
  *(undefined ***)this = &___7APlaneReflectionCapture__6B_;
  return this;
}

// ~APlaneReflectionCapture @ 147325030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APlaneReflectionCapture::~APlaneReflectionCapture(APlaneReflectionCapture *this)

{
  *(undefined ***)this = &___7AReflectionCapture__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1473267e0

UClass * __cdecl APlaneReflectionCapture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlaneReflectionCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlaneReflectionCapture",
               &Z_Registration_Info_UClass_APlaneReflectionCapture.InnerSingleton,
               StaticRegisterNativesAPlaneReflectionCapture,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<APlaneReflectionCapture>,
               InternalVTableHelperCtorCaller<APlaneReflectionCapture>,local_res8,
               AReflectionCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlaneReflectionCapture.InnerSingleton;
}

// StaticRegisterNativesAPlaneReflectionCapture @ 147328060

void __cdecl APlaneReflectionCapture::StaticRegisterNativesAPlaneReflectionCapture(void)

{
  return;
}

// APlaneReflectionCapture @ 147928770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APlaneReflectionCapture * __thiscall
APlaneReflectionCapture::APlaneReflectionCapture
          (APlaneReflectionCapture *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  int iVar2;
  FName FVar3;
  UReflectionCaptureComponent *pUVar4;
  longlong lVar5;
  undefined8 uVar6;
  TObjectPtr<USceneComponent>_u_0 TVar7;
  undefined8 uVar8;
  FName *pFVar9;
  UClass *pUVar10;
  USceneComponent *pUVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  FName local_res8;
  FName local_res10;
  FString local_48;
  FString local_38 [2];
  
  pFVar9 = ::FName::FName(&local_res8,L"NewReflectionComponent");
  FVar3 = *pFVar9;
  pUVar10 = Z_Construct_UClass_UPlaneReflectionCaptureComponent_NoRegister();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar3);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar3,pUVar10,(TArrayView<FName_const_,int> *)0x0);
  AReflectionCapture::AReflectionCapture((AReflectionCapture *)this,param_1);
  pUVar4 = *(UReflectionCaptureComponent **)&this->field_0x2c0;
  *(undefined ***)this = &___7APlaneReflectionCapture__6B_;
  if (pUVar4 == (UReflectionCaptureComponent *)0x0) {
    pFVar12 = GetTypeName<UPlaneReflectionCaptureComponent>(&local_48);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar13);
  }
  pUVar10 = Z_Construct_UClass_UPlaneReflectionCaptureComponent_NoRegister();
  uVar8 = _UNK_1517f6fe8;
  uVar6 = __real_408f400000000000;
  iVar2 = (int)pUVar10->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8)
      == &pUVar10->_padding_)) {
    *(undefined8 *)&pUVar4->field_0x178 = ___xmm_408f4000000000003ff0000000000000;
    *(undefined8 *)&pUVar4->field_0x180 = uVar8;
    *(undefined8 *)&pUVar4->field_0x188 = uVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    *(UReflectionCaptureComponent **)&this->field_0x1b8 = pUVar4;
    pFVar9 = ::FName::FName(&local_res10,L"DrawRadius0");
    FVar3 = *pFVar9;
    pUVar10 = Z_Construct_UClass_UDrawSphereComponent_NoRegister();
    pUVar11 = (USceneComponent *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar10,pUVar10,true,false);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    USceneComponent::SetupAttachment(pUVar11,*(USceneComponent **)&this->field_0x2c0,(FName)0x0);
    lVar5 = pUVar11->_padding_;
    pbVar1 = (byte *)((longlong)&pUVar11[2]._padding_ + 4);
    *pbVar1 = *pbVar1 | 1;
    pUVar11->bAbsoluteScale = '\x01';
    pbVar1 = (byte *)((longlong)&pUVar11[1]._padding_ + 1);
    *pbVar1 = *pbVar1 | 0x10;
    (**(code **)(lVar5 + 0x788))(pUVar11,UCollisionProfile::NoCollision_ProfileName,1);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    *(USceneComponent **)(pUVar4 + 1) = pUVar11;
    pFVar9 = ::FName::FName(&local_res10,L"DrawBox1");
    FVar3 = *pFVar9;
    pUVar10 = Z_Construct_UClass_UBoxComponent_NoRegister();
    pUVar11 = (USceneComponent *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar10,pUVar10,true,false);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    USceneComponent::SetupAttachment(pUVar11,*(USceneComponent **)&this->field_0x2c0,(FName)0x0);
    lVar5 = pUVar11->_padding_;
    pbVar1 = (byte *)((longlong)&pUVar11[2]._padding_ + 4);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)((longlong)&pUVar11[1]._padding_ + 1);
    *pbVar1 = *pbVar1 | 0x10;
    (**(code **)(lVar5 + 0x788))(pUVar11,UCollisionProfile::NoCollision_ProfileName,1);
    TVar7 = _UNK_150689688;
    FVar3 = __real_3ff0000000000000;
    pUVar11[2].PhysicsVolume.WeakPtr = ___xmm_3ff00000000000003ff0000000000000;
    pUVar11[2].AttachParent.field0_0x0 = TVar7;
    local_res8.ComparisonIndex.Value = 0xff645a28;
    pUVar11[2].AttachSocketName = FVar3;
    *(undefined4 *)&pUVar11[2]._padding_ = 0xff645a28;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    *(USceneComponent **)&pUVar4[1].field_0x8 = pUVar11;
    return this;
  }
  pFVar12 = GetTypeName<UPlaneReflectionCaptureComponent>(&local_48);
  pwVar13 = L"";
  if ((pFVar12->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  pFVar12 = GetFullNameForCastLogError<UReflectionCaptureComponent>(local_38,pUVar4);
  if ((pFVar12->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar13,pwVar14);
}

