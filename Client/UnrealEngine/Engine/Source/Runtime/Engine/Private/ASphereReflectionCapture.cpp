// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14732e950

UClass * __cdecl ASphereReflectionCapture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASphereReflectionCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SphereReflectionCapture",
               &Z_Registration_Info_UClass_ASphereReflectionCapture.InnerSingleton,
               StaticRegisterNativesASphereReflectionCapture,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASphereReflectionCapture>,
               InternalVTableHelperCtorCaller<ASphereReflectionCapture>,local_res8,
               AReflectionCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASphereReflectionCapture.InnerSingleton;
}

// ASphereReflectionCapture @ 147330b60

ASphereReflectionCapture * __thiscall
ASphereReflectionCapture::ASphereReflectionCapture
          (ASphereReflectionCapture *this,FVTableHelper *param_1)

{
  AReflectionCapture::AReflectionCapture((AReflectionCapture *)this,param_1);
  this->_padding_ = (longlong)&___7ASphereReflectionCapture__6B_;
  (this->DrawCaptureRadius).field0_0x0.DebugPtr = (UDrawSphereComponent *)0x0;
  return this;
}

// ~ASphereReflectionCapture @ 147331340

void __thiscall ASphereReflectionCapture::~ASphereReflectionCapture(ASphereReflectionCapture *this)

{
  this->_padding_ = (longlong)&___7ASphereReflectionCapture__6B_;
  AReflectionCapture::~AReflectionCapture((AReflectionCapture *)this);
  return;
}

// GetPrivateStaticClass @ 147332580

UClass * __cdecl ASphereReflectionCapture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASphereReflectionCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SphereReflectionCapture",
               &Z_Registration_Info_UClass_ASphereReflectionCapture.InnerSingleton,
               StaticRegisterNativesASphereReflectionCapture,0x2d0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASphereReflectionCapture>,
               InternalVTableHelperCtorCaller<ASphereReflectionCapture>,local_res8,
               AReflectionCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASphereReflectionCapture.InnerSingleton;
}

// StaticRegisterNativesASphereReflectionCapture @ 1473333c0

void __cdecl ASphereReflectionCapture::StaticRegisterNativesASphereReflectionCapture(void)

{
  return;
}

// ASphereReflectionCapture @ 147928d00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASphereReflectionCapture * __thiscall
ASphereReflectionCapture::ASphereReflectionCapture
          (ASphereReflectionCapture *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  FName FVar4;
  UReflectionCaptureComponent *pUVar5;
  longlong lVar6;
  FName *pFVar7;
  UClass *pUVar8;
  USceneComponent *this_00;
  UDrawSphereComponent *pUVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  pFVar7 = ::FName::FName(&local_res8,L"NewReflectionComponent");
  FVar4 = *pFVar7;
  pUVar8 = Z_Construct_UClass_USphereReflectionCaptureComponent_NoRegister();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar4);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar4,pUVar8,(TArrayView<FName_const_,int> *)0x0);
  AReflectionCapture::AReflectionCapture((AReflectionCapture *)this,param_1);
  this->_padding_ = (longlong)&___7ASphereReflectionCapture__6B_;
  (this->DrawCaptureRadius).field0_0x0.DebugPtr = (UDrawSphereComponent *)0x0;
  pUVar5 = (UReflectionCaptureComponent *)this->_padding_;
  if (pUVar5 == (UReflectionCaptureComponent *)0x0) {
    pFVar10 = GetTypeName<USphereReflectionCaptureComponent>(&local_38);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar8 = Z_Construct_UClass_USphereReflectionCaptureComponent_NoRegister();
  iVar3 = (int)pUVar8->_padding_;
  if ((iVar3 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8)
      == &pUVar8->_padding_)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    this->_padding_ = (longlong)pUVar5;
    pFVar7 = ::FName::FName(&local_res10,L"DrawRadius0");
    FVar4 = *pFVar7;
    pUVar8 = Z_Construct_UClass_UDrawSphereComponent_NoRegister();
    this_00 = (USceneComponent *)
              UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar8,pUVar8,true,false);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    USceneComponent::SetupAttachment(this_00,(USceneComponent *)this->_padding_,(FName)0x0);
    lVar6 = this_00->_padding_;
    pbVar1 = (byte *)((longlong)&this_00[2]._padding_ + 4);
    *pbVar1 = *pbVar1 | 1;
    pbVar1 = (byte *)((longlong)&this_00[1]._padding_ + 1);
    *pbVar1 = *pbVar1 | 0x10;
    (**(code **)(lVar6 + 0x788))(this_00,UCollisionProfile::NoCollision_ProfileName,1);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    *(USceneComponent **)(pUVar5 + 1) = this_00;
    pFVar7 = ::FName::FName(&local_res8,L"DrawRadius1");
    FVar4 = *pFVar7;
    pUVar8 = Z_Construct_UClass_UDrawSphereComponent_NoRegister();
    pUVar9 = (UDrawSphereComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar8,pUVar8,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDrawSphereComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->DrawCaptureRadius).field0_0x0.DebugPtr = pUVar9;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    USceneComponent::SetupAttachment
              ((USceneComponent *)pUVar9,(USceneComponent *)this->_padding_,(FName)0x0);
    puVar2 = &((this->DrawCaptureRadius).field0_0x0.DebugPtr)->field_0x554;
    *puVar2 = *puVar2 | 1;
    puVar2 = &((this->DrawCaptureRadius).field0_0x0.DebugPtr)->field_0x281;
    *puVar2 = *puVar2 | 0x10;
    pUVar9 = (this->DrawCaptureRadius).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar9 + 0x788))(pUVar9,UCollisionProfile::NoCollision_ProfileName,1);
    *(undefined4 *)&((this->DrawCaptureRadius).field0_0x0.DebugPtr)->field_0x550 = 0xff645a28;
    return this;
  }
  pFVar10 = GetTypeName<USphereReflectionCaptureComponent>(&local_38);
  pwVar11 = L"";
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar10 = GetFullNameForCastLogError<UReflectionCaptureComponent>(&local_28,pUVar5);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar11,pwVar12);
}

