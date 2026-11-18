// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472658b0

UClass * __cdecl ABoxReflectionCapture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABoxReflectionCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoxReflectionCapture",
               &Z_Registration_Info_UClass_ABoxReflectionCapture.InnerSingleton,
               StaticRegisterNativesABoxReflectionCapture,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ABoxReflectionCapture>,
               InternalVTableHelperCtorCaller<ABoxReflectionCapture>,local_res8,
               AReflectionCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABoxReflectionCapture.InnerSingleton;
}

// ABoxReflectionCapture @ 14726c850

ABoxReflectionCapture * __thiscall
ABoxReflectionCapture::ABoxReflectionCapture(ABoxReflectionCapture *this,FVTableHelper *param_1)

{
  AReflectionCapture::AReflectionCapture((AReflectionCapture *)this,param_1);
  *(undefined ***)this = &___7ABoxReflectionCapture__6B_;
  return this;
}

// ~ABoxReflectionCapture @ 14726d260

void __thiscall ABoxReflectionCapture::~ABoxReflectionCapture(ABoxReflectionCapture *this)

{
  *(undefined ***)this = &___7ABoxReflectionCapture__6B_;
  AReflectionCapture::~AReflectionCapture((AReflectionCapture *)this);
  return;
}

// GetPrivateStaticClass @ 14726eda0

UClass * __cdecl ABoxReflectionCapture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABoxReflectionCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BoxReflectionCapture",
               &Z_Registration_Info_UClass_ABoxReflectionCapture.InnerSingleton,
               StaticRegisterNativesABoxReflectionCapture,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ABoxReflectionCapture>,
               InternalVTableHelperCtorCaller<ABoxReflectionCapture>,local_res8,
               AReflectionCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABoxReflectionCapture.InnerSingleton;
}

// StaticRegisterNativesABoxReflectionCapture @ 147270940

void __cdecl ABoxReflectionCapture::StaticRegisterNativesABoxReflectionCapture(void)

{
  return;
}

// ABoxReflectionCapture @ 147928340

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

ABoxReflectionCapture * __thiscall
ABoxReflectionCapture::ABoxReflectionCapture
          (ABoxReflectionCapture *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  int iVar2;
  FName FVar3;
  UReflectionCaptureComponent *pUVar4;
  longlong lVar5;
  FName FVar6;
  TObjectPtr<USceneComponent>_u_0 TVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FName *pFVar10;
  UClass *pUVar11;
  USceneComponent *pUVar12;
  FString *pFVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  FName local_res8;
  FName local_res10;
  FString local_58;
  FString local_48 [3];
  
  pFVar10 = ::FName::FName(&local_res8,L"NewReflectionComponent");
  FVar3 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UBoxReflectionCaptureComponent_NoRegister();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar3);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar3,pUVar11,(TArrayView<FName_const_,int> *)0x0);
  AReflectionCapture::AReflectionCapture((AReflectionCapture *)this,param_1);
  pUVar4 = *(UReflectionCaptureComponent **)&this->field_0x2c0;
  *(undefined ***)this = &___7ABoxReflectionCapture__6B_;
  if (pUVar4 == (UReflectionCaptureComponent *)0x0) {
    pFVar13 = GetTypeName<UBoxReflectionCaptureComponent>(&local_58);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar14);
  }
  pUVar11 = Z_Construct_UClass_UBoxReflectionCaptureComponent_NoRegister();
  uVar9 = _UNK_151003208;
  uVar8 = __real_4079000000000000;
  iVar2 = (int)pUVar11->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8)
      == &pUVar11->_padding_)) {
    *(undefined8 *)&pUVar4->field_0x178 = ___xmm_408f400000000000408f400000000000;
    *(undefined8 *)&pUVar4->field_0x180 = uVar9;
    *(undefined8 *)&pUVar4->field_0x188 = uVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    *(UReflectionCaptureComponent **)&this->field_0x1b8 = pUVar4;
    pFVar10 = ::FName::FName(&local_res10,L"DrawBox0");
    FVar3 = *pFVar10;
    pUVar11 = Z_Construct_UClass_UBoxComponent_NoRegister();
    pUVar12 = (USceneComponent *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar3,pUVar11,pUVar11,true,false);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    USceneComponent::SetupAttachment(pUVar12,*(USceneComponent **)&this->field_0x2c0,(FName)0x0);
    lVar5 = pUVar12->_padding_;
    pbVar1 = (byte *)((longlong)&pUVar12[2]._padding_ + 4);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)((longlong)&pUVar12[1]._padding_ + 1);
    *pbVar1 = *pbVar1 | 0x10;
    (**(code **)(lVar5 + 0x788))(pUVar12,UCollisionProfile::NoCollision_ProfileName,1);
    TVar7 = _UNK_150689688;
    FVar3 = __real_3ff0000000000000;
    pUVar12[2].PhysicsVolume.WeakPtr = ___xmm_3ff00000000000003ff0000000000000;
    pUVar12[2].AttachParent.field0_0x0 = TVar7;
    pUVar12[2].AttachSocketName = FVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    *(USceneComponent **)(pUVar4 + 1) = pUVar12;
    pFVar10 = ::FName::FName(&local_res10,L"DrawBox1");
    FVar6 = *pFVar10;
    pUVar11 = Z_Construct_UClass_UBoxComponent_NoRegister();
    pUVar12 = (USceneComponent *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar6,pUVar11,pUVar11,true,false);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    USceneComponent::SetupAttachment(pUVar12,*(USceneComponent **)&this->field_0x2c0,(FName)0x0);
    lVar5 = pUVar12->_padding_;
    pbVar1 = (byte *)((longlong)&pUVar12[2]._padding_ + 4);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)((longlong)&pUVar12[1]._padding_ + 1);
    *pbVar1 = *pbVar1 | 0x10;
    (**(code **)(lVar5 + 0x788))(pUVar12,UCollisionProfile::NoCollision_ProfileName,1);
    TVar7 = _UNK_150689688;
    pUVar12[2].PhysicsVolume.WeakPtr = ___xmm_3ff00000000000003ff0000000000000;
    pUVar12[2].AttachParent.field0_0x0 = TVar7;
    local_res8.ComparisonIndex.Value = 0xff645a28;
    pUVar12[2].AttachSocketName = FVar3;
    *(undefined4 *)&pUVar12[2]._padding_ = 0xff645a28;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    *(USceneComponent **)&pUVar4[1].field_0x8 = pUVar12;
    return this;
  }
  pFVar13 = GetTypeName<UBoxReflectionCaptureComponent>(&local_58);
  pwVar14 = L"";
  if ((pFVar13->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  pFVar13 = GetFullNameForCastLogError<UReflectionCaptureComponent>(local_48,pUVar4);
  if ((pFVar13->Data).ArrayNum != 0) {
    pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar14,pwVar15);
}

