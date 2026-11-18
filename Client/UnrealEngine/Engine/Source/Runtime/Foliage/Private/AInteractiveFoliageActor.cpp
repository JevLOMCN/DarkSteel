// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 13

// StaticClass @ 145ecea50

UClass * __cdecl AInteractiveFoliageActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AInteractiveFoliageActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"InteractiveFoliageActor",
               &Z_Registration_Info_UClass_AInteractiveFoliageActor.InnerSingleton,
               StaticRegisterNativesAInteractiveFoliageActor,0x360,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AInteractiveFoliageActor>,
               InternalVTableHelperCtorCaller<AInteractiveFoliageActor>,local_res8,
               AStaticMeshActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInteractiveFoliageActor.InnerSingleton;
}

// AInteractiveFoliageActor @ 145ed7fb0

AInteractiveFoliageActor * __thiscall
AInteractiveFoliageActor::AInteractiveFoliageActor
          (AInteractiveFoliageActor *this,FVTableHelper *param_1)

{
  AStaticMeshActor::AStaticMeshActor((AStaticMeshActor *)this,param_1);
  this->_padding_ = (longlong)&___7AInteractiveFoliageActor__6B_;
  (this->CapsuleComponent).field0_0x0.DebugPtr = (UCapsuleComponent *)0x0;
  return this;
}

// AInteractiveFoliageActor @ 145ed7ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AInteractiveFoliageActor * __thiscall
AInteractiveFoliageActor::AInteractiveFoliageActor
          (AInteractiveFoliageActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  UStaticMeshComponent *pUVar3;
  void *pvVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UInteractiveFoliageComponent *pUVar7;
  UCapsuleComponent *pUVar8;
  ulonglong uVar9;
  FName local_res8;
  
  pFVar5 = ::FName::FName(&local_res8,"StaticMeshComponent0");
  FVar2 = *pFVar5;
  pUVar6 = UInteractiveFoliageComponent::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,pUVar6,(TArrayView<FName_const_,int> *)0x0);
  AStaticMeshActor::AStaticMeshActor((AStaticMeshActor *)this,param_1);
  pUVar3 = (UStaticMeshComponent *)this->_padding_;
  this->_padding_ = (longlong)&___7AInteractiveFoliageActor__6B_;
  (this->CapsuleComponent).field0_0x0.DebugPtr = (UCapsuleComponent *)0x0;
  pUVar7 = CastChecked<UInteractiveFoliageComponent,UStaticMeshComponent>(pUVar3);
  (**(code **)(*(longlong *)pUVar7 + 0x788))(pUVar7,UCollisionProfile::NoCollision_ProfileName,1);
  pUVar7->field_0x1ab = 0;
  pFVar5 = ::FName::FName(&local_res8,L"CollisionCylinder");
  FVar2 = *pFVar5;
  pUVar6 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
  pUVar8 = (UCapsuleComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UCapsuleComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pvVar4 = ThreadLocalStoragePointer;
  uVar9 = (ulonglong)_tls_index;
  (this->CapsuleComponent).field0_0x0.DebugPtr = pUVar8;
  pUVar8->CapsuleRadius = 60.0;
  pUVar8->CapsuleHalfHeight = 200.0;
  if (*(int *)(*(longlong *)((longlong)pvVar4 + uVar9 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CollisionProfileName,L"OverlapAllDynamic");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pUVar8 = (this->CapsuleComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar8->_padding_ + 0x788))(pUVar8,CollisionProfileName,1);
  *(undefined1 *)((longlong)&((this->CapsuleComponent).field0_0x0.DebugPtr)->_padding_ + 3) = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (this->CapsuleComponent).field0_0x0.DebugPtr, pUVar8 != (UCapsuleComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  this->_padding_ = (longlong)(this->CapsuleComponent).field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  AActor::SetCanBeDamaged((AActor *)this,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 0x10;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 3;
  this->FoliageDamageImpulseScale = 20.0;
  this->FoliageTouchImpulseScale = 10.0;
  this->FoliageStiffness = 10.0;
  this->FoliageStiffnessQuadratic = 0.3;
  this->FoliageDamping = 2.0;
  this->MaxDamageImpulse = 100000.0;
  this->MaxTouchImpulse = 1000.0;
  this->MaxForce = 100000.0;
  this->Mass = 1.0;
  return this;
}

// ~AInteractiveFoliageActor @ 145ed9f00

void __thiscall AInteractiveFoliageActor::~AInteractiveFoliageActor(AInteractiveFoliageActor *this)

{
  this->_padding_ = (longlong)&___7AInteractiveFoliageActor__6B_;
  AStaticMeshActor::~AStaticMeshActor((AStaticMeshActor *)this);
  return;
}

// CapsuleTouched @ 145edf2d0

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
AInteractiveFoliageActor::CapsuleTouched
          (AInteractiveFoliageActor *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4,bool param_5,FHitResult *param_6)

{
  int iVar1;
  longlong lVar2;
  UCapsuleComponent *pUVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  UClass *pUVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  
  if ((param_2 != (AActor *)0x0) && (param_3 != (UPrimitiveComponent *)0x0)) {
    pUVar7 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
    lVar2 = *(longlong *)&param_3->field_0x10;
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       (((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar7->_padding_ &&
        (pUVar3 = (this->CapsuleComponent).field0_0x0.DebugPtr, pUVar3 != (UCapsuleComponent *)0x0))
       )) {
      dVar12 = *(double *)&param_3->field_0x110 - (double)pUVar3->_padding_;
      lVar4 = this->_padding_;
      dVar10 = (double)pUVar3->_padding_ - (double)pUVar3->_padding_;
      dVar8 = *(double *)&param_3->field_0x118 - (double)pUVar3->_padding_;
      dVar9 = dVar8 * dVar8 + dVar12 * dVar12 + dVar10 * dVar10;
      uVar11 = dVar10;
      uVar13 = dVar12;
      uVar6 = dVar8;
      if ((dVar9 != __real_3ff0000000000000) &&
         (uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         __real_3e45798ee0000000 <= dVar9)) {
        dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
        uVar11 = dVar10 * dVar9;
        uVar13 = dVar12 * dVar9;
        uVar6 = dVar8 * dVar9;
      }
      dVar9 = (double)pUVar3->_padding_;
      if ((double)pUVar3->_padding_ <= (double)pUVar3->_padding_) {
        dVar9 = (double)pUVar3->_padding_;
      }
      dVar10 = (double)((float)dVar9 * pUVar3->CapsuleRadius);
      dVar8 = dVar10 * (double)uVar6 + *(double *)(lVar4 + 0x118);
      dVar9 = *(double *)(lVar4 + 0x120);
      auVar5._8_4_ = SUB84(dVar8,0);
      auVar5._0_8_ = dVar10 * (double)uVar13 + *(double *)(lVar4 + 0x110);
      auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])&(this->TouchingActorEntryPosition).field0_0x0 = auVar5;
      (this->TouchingActorEntryPosition).field0_0x0._s_0.Z = dVar10 * (double)uVar11 + dVar9;
    }
    (**(code **)(this->_padding_ + 0x4a8))(this,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
  }
  return;
}

// GetPrivateStaticClass @ 145ee4c10

UClass * __cdecl AInteractiveFoliageActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AInteractiveFoliageActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"InteractiveFoliageActor",
               &Z_Registration_Info_UClass_AInteractiveFoliageActor.InnerSingleton,
               StaticRegisterNativesAInteractiveFoliageActor,0x360,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AInteractiveFoliageActor>,
               InternalVTableHelperCtorCaller<AInteractiveFoliageActor>,local_res8,
               AStaticMeshActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AInteractiveFoliageActor.InnerSingleton;
}

// PostActorCreated @ 145ee7dd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AInteractiveFoliageActor::PostActorCreated(AInteractiveFoliageActor *this)

{
  AActor::PostActorCreated((AActor *)this);
  SetupCollisionCylinder(this);
  return;
}

// PostLoad @ 145ee8990

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AInteractiveFoliageActor::PostLoad(AInteractiveFoliageActor *this)

{
  AActor::PostLoad((AActor *)this);
  SetupCollisionCylinder(this);
  return;
}

// SetupCollisionCylinder @ 145eeb690

void __thiscall AInteractiveFoliageActor::SetupCollisionCylinder(AInteractiveFoliageActor *this)

{
  UObject *pUVar1;
  UStaticMesh *this_00;
  longlong lVar2;
  UCapsuleComponent *pUVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  double dVar10;
  FName local_res8;
  FName local_res10;
  TBoxSphereBounds<double,double> local_60;
  
  pUVar1 = *(UObject **)(this->_padding_ + 0x5a0);
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(pUVar1);
  }
  if (pUVar1 == (UObject *)0x0) {
    return;
  }
  this_00 = *(UStaticMesh **)(this->_padding_ + 0x5a0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UStaticMesh::GetBounds(this_00,&local_60);
  lVar2 = this->_padding_;
  dVar10 = *(double *)(lVar2 + 0x178);
  if (*(double *)(lVar2 + 0x178) <= *(double *)(lVar2 + 0x180)) {
    dVar10 = *(double *)(lVar2 + 0x180);
  }
  UCapsuleComponent::SetCapsuleSize
            ((this->CapsuleComponent).field0_0x0.DebugPtr,
             (float)(dVar10 * local_60.SphereRadius * __real_3fe6666660000000),
             (float)(*(double *)(lVar2 + 0x188) * local_60.BoxExtent.field0_0x0._s_0.Z),true);
  pUVar3 = (this->CapsuleComponent).field0_0x0.DebugPtr;
  pcVar7 = strstr("&AInteractiveFoliageActor::CapsuleTouched","::");
  pcVar9 = &DAT_00000002;
  if (pcVar7 == (char *)0x0) {
LAB_145eeb7da:
    pcVar8 = &DAT_00000002;
LAB_145eeb7dd:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    do {
      pcVar8 = pcVar7;
      pcVar7 = strstr(pcVar8 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_145eeb7da;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_145eeb7dd;
  }
  ::FName::FName(&local_res8,pcVar8);
  if (*(char *)((longlong)&pUVar3->_padding_ + 1) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnComponentBeginOverlap");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar5 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)pUVar3,false);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar6 = FSparseDelegateStorage::Remove((UObject *)pUVar3,FVar5,(UObject *)this,local_res8);
    *(bool *)((longlong)&pUVar3->_padding_ + 1) = bVar6;
  }
  pUVar3 = (this->CapsuleComponent).field0_0x0.DebugPtr;
  pcVar7 = strstr("&AInteractiveFoliageActor::CapsuleTouched","::");
  if (pcVar7 != (char *)0x0) {
    do {
      pcVar8 = pcVar7;
      pcVar7 = strstr(pcVar8 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if ((pcVar8 != (char *)0x0) && (pcVar9 = pcVar8 + 2, pcVar8[2] != '0')) goto LAB_145eeb928;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_145eeb928:
  ::FName::FName(&local_res10,pcVar9);
  TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
  ::__Internal_AddDynamic<AInteractiveFoliageActor>
            ((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
              *)((longlong)&pUVar3->_padding_ + 1),this,(pmf_3578d58d)0x145edf2d0,local_res10);
  return;
}

// StaticRegisterNativesAInteractiveFoliageActor @ 145eecf80

void __cdecl AInteractiveFoliageActor::StaticRegisterNativesAInteractiveFoliageActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AInteractiveFoliageActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TakeDamage @ 145eed310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
AInteractiveFoliageActor::TakeDamage
          (AInteractiveFoliageActor *this,float param_1,FDamageEvent *param_2,AController *param_3,
          AActor *param_4)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  APawn *pAVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  memset(local_158,0,0x100);
  pAVar6 = (APawn *)0x0;
  pcVar1 = *(code **)(param_2->_padding_ + 0x18);
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  local_a0 = 0;
  uStack_98 = 0;
  uVar3 = 0xffffffff;
  local_90 = 0;
  uStack_88 = 0xffffffff;
  uVar4 = uVar3;
  if (((param_3 != (AController *)0x0) &&
      (pAVar6 = (param_3->Pawn).field0_0x0.DebugPtr,
      UE::GC::GIsIncrementalReachabilityPending != false)) &&
     (uVar4 = uStack_88, pAVar6 != (APawn *)0x0)) {
    uStack_88 = uVar3;
    UE::GC::MarkAsReachable((UObject *)pAVar6);
    uVar4 = uStack_88;
  }
  uStack_88 = uVar4;
  (*pcVar1)(param_2,this,pAVar6,local_158,&local_178);
  dVar7 = (double)CONCAT44(uStack_16c,uStack_170);
  dVar2 = (double)CONCAT44(uStack_174,local_178);
  dVar8 = dVar7 * dVar7 + dVar2 * dVar2 + local_168 * local_168;
  uVar3 = local_168;
  uVar4 = dVar2;
  uVar5 = dVar7;
  if ((dVar8 != __real_3ff0000000000000) &&
     (uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar8)) {
    dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
    uVar3 = local_168 * dVar8;
    uVar4 = dVar2 * dVar8;
    uVar5 = dVar7 * dVar8;
  }
  dVar10 = (double)this->MaxDamageImpulse;
  dVar9 = (double)(float)((uint)this->MaxDamageImpulse ^ __xmm_80000000800000008000000080000000);
  dVar11 = (double)param_1;
  dVar8 = (double)this->FoliageDamageImpulseScale;
  dVar7 = dVar11 * (double)uVar4 * dVar8;
  dVar2 = dVar11 * (double)uVar5 * dVar8;
  dVar8 = dVar11 * (double)uVar3 * dVar8;
  if (dVar10 <= dVar7) {
    dVar7 = dVar10;
  }
  if (dVar10 <= dVar2) {
    dVar2 = dVar10;
  }
  if (dVar10 <= dVar8) {
    dVar8 = dVar10;
  }
  if (dVar7 <= dVar9) {
    dVar7 = dVar9;
  }
  if (dVar2 <= dVar9) {
    dVar2 = dVar9;
  }
  if (dVar8 <= dVar9) {
    dVar8 = dVar9;
  }
  dVar9 = (this->FoliageForce).field0_0x0._s_0.Y;
  dVar10 = (this->FoliageForce).field0_0x0._s_0.Z;
  (this->FoliageForce).field0_0x0._s_0.X = dVar7 + (this->FoliageForce).field0_0x0._s_0.X;
  (this->FoliageForce).field0_0x0._s_0.Y = dVar2 + dVar9;
  (this->FoliageForce).field0_0x0._s_0.Z = dVar8 + dVar10;
  (**(code **)(this->_padding_ + 0x4a8))(this,1);
  return 0.0;
}

// Tick @ 145eed5d0

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

void __thiscall AInteractiveFoliageActor::Tick(AInteractiveFoliageActor *this,float param_1)

{
  ulonglong uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UCapsuleComponent *pUVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  double dVar16;
  longlong *plVar17;
  bool bVar18;
  UInteractiveFoliageComponent *pUVar19;
  UClass *pUVar20;
  double *pdVar21;
  byte bVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  undefined8 uVar37;
  double dVar38;
  double dVar39;
  undefined8 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined8 uVar44;
  double dVar45;
  double dVar46;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [4];
  float local_2f4;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  longlong *local_2d8;
  uint uStack_2d0;
  uint uStack_2cc;
  TBitArray<FDefaultBitArrayAllocator> *local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  uint local_2b8;
  uint uStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  int local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  TVector4<double>_u_0 local_268 [2];
  double local_228 [5];
  double local_200;
  double local_1d0;
  undefined8 local_188;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_318;
  local_2f4 = param_1;
  pUVar19 = CastChecked<UInteractiveFoliageComponent,UStaticMeshComponent>
                      ((UStaticMeshComponent *)this->_padding_);
  if (((pUVar19->field_0x98 & 1) != 0) &&
     (pUVar19->FoliageSceneProxy != (FInteractiveFoliageSceneProxy *)0x0)) {
    local_138._0_8_ = 0;
    local_138._8_8_ = 0;
    local_118 = (uint *)0x0;
    uVar24 = 0;
    local_110 = 0;
    local_10c = 0x80;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = (ForElementType<FSetElementId>)0x0;
    local_f0 = 0;
    local_2a0 = 0;
    AActor::GetOverlappingActors
              ((AActor *)this,
               (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)local_138,
               (TSubclassOf<AActor>)&local_2a0);
    uVar27 = local_110;
    uStack_2cc = 1;
    local_2b8 = 0;
    uStack_2bc = local_2b8;
    if (local_110 != 0) {
      puVar25 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar25 = local_118;
      }
      uVar26 = *puVar25;
      uVar24 = 0;
      local_2b8 = 0;
      while (uVar26 == 0) {
        uVar24 = uVar24 + 1;
        local_2b8 = local_2b8 + 0x20;
        uStack_2bc = local_110;
        if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
        goto LAB_145eed771;
        uVar26 = puVar25[(int)uVar24];
      }
      uStack_2cc = ~(uVar26 - 1) & uVar26;
      uVar1 = (ulonglong)uStack_2cc * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uStack_2bc = (local_2b8 - 1) + (int)lVar7;
      local_2a8 = (int)lVar7;
      if ((int)local_110 < (int)uStack_2bc) {
        uStack_2bc = local_110;
      }
    }
LAB_145eed771:
    local_2d8 = (longlong *)local_138;
    uStack_2b4 = uStack_2bc;
    uVar26 = local_110 & 0xffffffe0;
    local_2c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    uStack_2c0 = 0xffffffff;
    uStack_2d0 = uVar24;
    iStack_2b0 = local_138._8_4_ - local_104;
    local_298 = (longlong *)local_138;
    TStack_290._padding_ = CONCAT44(uStack_2cc,uVar24);
    iVar23 = (int)local_110 >> 5;
    bVar22 = (byte)local_110;
    TStack_290.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
    TStack_290.UnvisitedBitMask = 0xffffffff;
    TStack_290.CurrentBitIndex = uStack_2bc;
    TStack_290.BaseBitIndex = local_2b8;
    TStack_290._28_4_ = uStack_2bc;
    uStack_270 = CONCAT44(uStack_2ac,local_138._8_4_ - local_104);
    if (((int)local_110 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar2 = __real_3ff0000000000000;
    if (uVar27 != local_110) {
      puVar25 = (uint *)(local_138 + 0x10);
      if (local_118 != (uint *)0x0) {
        puVar25 = local_118;
      }
      uVar24 = -1 << (bVar22 & 0x1f) & puVar25[iVar23];
      while (uVar24 == 0) {
        iVar23 = iVar23 + 1;
        uVar26 = uVar26 + 0x20;
        uVar27 = local_110;
        if ((int)(((int)(local_110 - 1) >> 0x1f & 0x1fU) + (local_110 - 1)) >> 5 < iVar23)
        goto LAB_145eed8d1;
        uVar24 = puVar25[iVar23];
      }
      uVar1 = (ulonglong)(~(uVar24 - 1) & uVar24) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar27 = (uVar26 - 1) + (int)lVar7;
      if ((int)local_110 < (int)uVar27) {
        uVar27 = local_110;
      }
    }
LAB_145eed8d1:
    while( true ) {
      plVar17 = local_298;
      if ((int)local_298[1] - *(int *)((longlong)local_298 + 0x34) != (int)uStack_270) {
        `TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2f8);
      }
      param_1 = local_2f4;
      uVar24 = __xmm_80000000800000008000000080000000;
      dVar38 = __real_3e45798ee0000000;
      if (((TStack_290.CurrentBitIndex == uVar27) &&
          (TStack_290.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
         (plVar17 == (longlong *)local_138)) break;
      lVar7 = *(longlong *)(*plVar17 + (longlong)TStack_290.CurrentBitIndex * 0x10);
      if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x1b8), lVar7 != 0)) {
        dVar38 = *(double *)(lVar7 + 0x118);
        dVar36 = *(double *)(lVar7 + 0x110);
        dVar42 = *(double *)(this->_padding_ + 0x120);
        pUVar20 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
        iVar23 = (int)pUVar20->_padding_;
        if ((iVar23 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar23 * 8) ==
             &pUVar20->_padding_ &&
            (pUVar5 = (this->CapsuleComponent).field0_0x0.DebugPtr,
            pUVar5 != (UCapsuleComponent *)0x0)))) {
          dVar43 = (this->TouchingActorEntryPosition).field0_0x0._s_0.X;
          dVar46 = (this->TouchingActorEntryPosition).field0_0x0._s_0.Y;
          local_200 = (this->TouchingActorEntryPosition).field0_0x0._s_0.Z;
          lVar6 = this->_padding_;
          dVar39 = (*(double *)(lVar6 + 0x110) + *(double *)(lVar6 + 0x110)) - dVar43;
          dVar45 = (*(double *)(lVar6 + 0x118) + *(double *)(lVar6 + 0x118)) - dVar46;
          local_1d0 = (*(double *)(lVar6 + 0x120) + *(double *)(lVar6 + 0x120)) - local_200;
          dVar43 = dVar43 - dVar39;
          local_200 = local_200 - local_1d0;
          dVar46 = dVar46 - dVar45;
          auVar29._0_8_ = dVar43 * dVar43;
          auVar29._8_8_ = 0;
          dVar38 = ((dVar38 - dVar45) * dVar46 + (dVar36 - dVar39) * dVar43 +
                   (dVar42 - local_1d0) * local_200) /
                   (dVar46 * dVar46 + dVar43 * dVar43 + local_200 * local_200);
          dVar36 = dVar46 * dVar46 + auVar29._0_8_ + local_200 * local_200;
          uVar37 = local_200;
          uVar40 = dVar43;
          uVar44 = dVar46;
          if ((dVar36 != dVar2) &&
             (uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
             uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
             __real_3e45798ee0000000 <= dVar36)) {
            auVar29 = ZEXT416((uint)((ulonglong)dVar36 >> 0x20)) << 0x20;
            dVar36 = dVar2 / SQRT(dVar36);
            uVar37 = dVar36 * local_200;
            uVar40 = dVar36 * dVar43;
            uVar44 = dVar36 * dVar46;
          }
          auVar34 = *(undefined1 (*) [16])(lVar7 + 0x230);
          auVar14._4_8_ = auVar29._8_8_;
          auVar14._0_4_ = auVar34._4_4_;
          auVar30._0_8_ = auVar14._0_8_ << 0x20;
          auVar30._8_4_ = auVar34._8_4_;
          auVar30._12_4_ = auVar34._12_4_;
          dVar36 = auVar30._8_8_;
          if (auVar34._0_8_ <= auVar30._8_8_) {
            dVar36 = auVar34._0_8_;
          }
          dVar36 = (double)((float)dVar36 * *(float *)(lVar7 + 0x56c));
          dVar39 = dVar39 - (dVar36 * (double)uVar40 + dVar38 * dVar43 + dVar39);
          local_1d0 = local_1d0 - (dVar36 * (double)uVar37 + dVar38 * local_200 + local_1d0);
          dVar45 = dVar45 - (dVar36 * (double)uVar44 + dVar38 * dVar46 + dVar45);
          auVar31._0_8_ = dVar39 * dVar39;
          auVar31._8_8_ = 0;
          dVar38 = dVar45 * dVar45 + auVar31._0_8_ + local_1d0 * local_1d0;
          uVar44 = local_1d0;
          uVar37 = dVar39;
          uVar40 = dVar45;
          if ((dVar38 != dVar2) &&
             (uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
             uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
             __real_3e45798ee0000000 <= dVar38)) {
            auVar31 = ZEXT416((uint)((ulonglong)dVar38 >> 0x20)) << 0x20;
            dVar38 = dVar2 / SQRT(dVar38);
            uVar44 = dVar38 * local_1d0;
            uVar37 = dVar38 * dVar39;
            uVar40 = dVar38 * dVar45;
          }
          auVar34 = *(undefined1 (*) [16])(lVar7 + 0x230);
          uVar3 = pUVar5->_padding_;
          uVar4 = pUVar5->_padding_;
          auVar15._4_8_ = auVar31._8_8_;
          auVar15._0_4_ = auVar34._4_4_;
          auVar32._0_8_ = auVar15._0_8_ << 0x20;
          auVar32._8_4_ = auVar34._8_4_;
          auVar32._12_4_ = auVar34._12_4_;
          dVar38 = auVar32._8_8_;
          if (auVar34._0_8_ <= auVar32._8_8_) {
            dVar38 = auVar34._0_8_;
          }
          uVar28 = (int)uVar4;
          uVar35 = (int)((ulonglong)uVar4 >> 0x20);
          if ((double)uVar3 <= (double)uVar4) {
            uVar28 = (int)uVar3;
            uVar35 = (int)((ulonglong)uVar3 >> 0x20);
          }
          dVar43 = (double)this->FoliageTouchImpulseScale;
          dVar38 = (double)((float)(double)CONCAT44(uVar35,uVar28) * pUVar5->CapsuleRadius +
                           (float)dVar38 * *(float *)(lVar7 + 0x56c));
          dVar41 = (double)this->MaxTouchImpulse;
          dVar46 = (double)(float)((uint)this->MaxTouchImpulse ^
                                  __xmm_80000000800000008000000080000000);
          dVar36 = ((double)uVar37 * __real_4000000000000000 * dVar38 - dVar39) * dVar43;
          dVar42 = ((double)uVar40 * __real_4000000000000000 * dVar38 - dVar45) * dVar43;
          dVar43 = ((double)uVar44 * __real_4000000000000000 * dVar38 - local_1d0) * dVar43;
          if (dVar41 <= dVar36) {
            dVar36 = dVar41;
          }
          if (dVar41 <= dVar42) {
            dVar42 = dVar41;
          }
          if (dVar41 <= dVar43) {
            dVar43 = dVar41;
          }
          if (dVar36 <= dVar46) {
            dVar36 = dVar46;
          }
          if (dVar42 <= dVar46) {
            dVar42 = dVar46;
          }
          if (dVar43 <= dVar46) {
            dVar43 = dVar46;
          }
          dVar38 = (this->FoliageForce).field0_0x0._s_0.Y;
          dVar46 = (this->FoliageForce).field0_0x0._s_0.Z;
          (this->FoliageForce).field0_0x0._s_0.X = dVar36 + (this->FoliageForce).field0_0x0._s_0.X;
          (this->FoliageForce).field0_0x0._s_0.Y = dVar42 + dVar38;
          (this->FoliageForce).field0_0x0._s_0.Z = dVar43 + dVar46;
        }
      }
      TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
    }
    dVar43 = (double)(float)((uint)this->FoliageStiffness ^ __xmm_80000000800000008000000080000000);
    dVar36 = (this->FoliagePosition).field0_0x0._s_0.Z;
    dVar46 = (this->FoliageForce).field0_0x0._s_0.X +
             dVar43 * (this->FoliagePosition).field0_0x0._s_0.X;
    dVar39 = (this->FoliageForce).field0_0x0._s_0.Y +
             dVar43 * (this->FoliagePosition).field0_0x0._s_0.Y;
    dVar42 = (this->FoliageForce).field0_0x0._s_0.Z;
    auVar34._8_4_ = SUB84(dVar39,0);
    auVar34._0_8_ = dVar46;
    auVar34._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    *(undefined1 (*) [16])&(this->FoliageForce).field0_0x0 = auVar34;
    (this->FoliageForce).field0_0x0._s_0.Z = dVar43 * dVar36 + dVar42;
    dVar36 = (this->FoliagePosition).field0_0x0._s_0.Y;
    dVar42 = (this->FoliagePosition).field0_0x0._s_0.X;
    dVar43 = (this->FoliagePosition).field0_0x0._s_0.Z;
    dVar45 = dVar42 * dVar42 + dVar36 * dVar36 + dVar43 * dVar43;
    if (dVar45 == dVar2) {
      uVar44 = (this->FoliagePosition).field0_0x0._s_0.Z;
      uVar37 = (this->FoliagePosition).field0_0x0._s_0.Y;
      uVar40 = (this->FoliagePosition).field0_0x0._s_0.X;
    }
    else {
      uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      if (dVar38 <= dVar45) {
        dVar41 = dVar2 / SQRT(dVar45);
        uVar44 = dVar43 * dVar41;
        uVar37 = dVar36 * dVar41;
        uVar40 = dVar41 * dVar42;
      }
    }
    dVar45 = (double)(float)((uint)this->FoliageStiffnessQuadratic ^ uVar24) * dVar45;
    dVar41 = (double)local_2f4;
    dVar46 = dVar46 + dVar45 * (double)uVar40;
    dVar39 = dVar39 + dVar45 * (double)uVar37;
    (this->FoliageForce).field0_0x0._s_0.Z =
         dVar45 * (double)uVar44 + (this->FoliageForce).field0_0x0._s_0.Z;
    auVar11._8_4_ = SUB84(dVar39,0);
    auVar11._0_8_ = dVar46;
    auVar11._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    *(undefined1 (*) [16])&(this->FoliageForce).field0_0x0 = auVar11;
    dVar43 = (double)(float)((uint)this->FoliageDamping ^ uVar24);
    dVar36 = (this->FoliageVelocity).field0_0x0._s_0.Z;
    dVar39 = dVar39 + dVar43 * (this->FoliageVelocity).field0_0x0._s_0.Y;
    dVar42 = (this->FoliageForce).field0_0x0._s_0.Z;
    auVar12._8_4_ = SUB84(dVar39,0);
    auVar12._0_8_ = dVar46 + dVar43 * (this->FoliageVelocity).field0_0x0._s_0.X;
    auVar12._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    *(undefined1 (*) [16])&(this->FoliageForce).field0_0x0 = auVar12;
    (this->FoliageForce).field0_0x0._s_0.Z = dVar43 * dVar36 + dVar42;
    dVar42 = (double)this->MaxForce;
    dVar36 = (this->FoliageForce).field0_0x0._s_0.X;
    dVar43 = dVar42;
    if (dVar36 <= dVar42) {
      dVar43 = dVar36;
    }
    dVar39 = (double)(float)((uint)this->MaxForce ^ uVar24);
    dVar36 = (this->FoliageForce).field0_0x0._s_0.Y;
    dVar46 = dVar42;
    if (dVar36 <= dVar42) {
      dVar46 = dVar36;
    }
    dVar36 = (this->FoliageForce).field0_0x0._s_0.Z;
    if (dVar36 <= dVar42) {
      dVar42 = dVar36;
    }
    if (dVar43 <= dVar39) {
      dVar43 = dVar39;
    }
    if (dVar46 <= dVar39) {
      dVar46 = dVar39;
    }
    if (dVar42 <= dVar39) {
      dVar42 = dVar39;
    }
    (this->FoliageForce).field0_0x0._s_0.X = dVar43;
    (this->FoliageForce).field0_0x0._s_0.Y = dVar46;
    dVar45 = (this->FoliageVelocity).field0_0x0._s_0.X;
    dVar39 = (this->FoliageVelocity).field0_0x0._s_0.Y;
    (this->FoliageForce).field0_0x0._s_0.Z = dVar42;
    dVar16 = __real_c08f400000000000;
    dVar36 = (this->FoliageForce).field0_0x0._s_0.Z;
    dVar39 = dVar41 * dVar46 + dVar39;
    dVar42 = (this->FoliageVelocity).field0_0x0._s_0.Z;
    auVar9._8_4_ = SUB84(dVar39,0);
    auVar9._0_8_ = dVar41 * dVar43 + dVar45;
    auVar9._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    *(undefined1 (*) [16])&(this->FoliageVelocity).field0_0x0 = auVar9;
    (this->FoliageVelocity).field0_0x0._s_0.Z = dVar41 * dVar36 + dVar42;
    uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    dVar43 = __real_408f400000000000;
    dVar36 = (this->FoliageVelocity).field0_0x0._s_0.X;
    dVar42 = *(double *)((longlong)&(this->FoliageVelocity).field0_0x0 + 0x10);
    uVar28 = SUB84(dVar42,0);
    uVar35 = (undefined4)((ulonglong)dVar42 >> 0x20);
    if (__real_408f400000000000 <= dVar36) {
      dVar36 = __real_408f400000000000;
    }
    (this->FoliageForce).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
    ;
    (this->FoliageForce).field0_0x0._s_0.Y = (double)uVar37;
    if (dVar43 <= dVar42) {
      uVar28 = SUB84(dVar43,0);
      uVar35 = (undefined4)((ulonglong)dVar43 >> 0x20);
    }
    (this->FoliageForce).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
    ;
    dVar42 = (this->FoliageVelocity).field0_0x0._s_0.Y;
    if (dVar36 <= dVar16) {
      dVar36 = dVar16;
    }
    if (dVar43 <= dVar42) {
      dVar42 = dVar43;
    }
    if ((double)CONCAT44(uVar35,uVar28) <= dVar16) {
      uVar28 = SUB84(dVar16,0);
      uVar35 = (undefined4)((ulonglong)dVar16 >> 0x20);
    }
    (this->FoliageVelocity).field0_0x0._s_0.X = dVar36;
    if (dVar42 <= dVar16) {
      dVar42 = dVar16;
    }
    (this->FoliageVelocity).field0_0x0._s_0.Z = (double)CONCAT44(uVar35,uVar28);
    (this->FoliageVelocity).field0_0x0._s_0.Y = dVar42;
    dVar42 = dVar41 * dVar42 + (this->FoliagePosition).field0_0x0._s_0.Y;
    dVar43 = dVar41 * (double)CONCAT44(uVar35,uVar28) + (this->FoliagePosition).field0_0x0._s_0.Z;
    auVar10._8_4_ = SUB84(dVar42,0);
    auVar10._0_8_ = dVar36 * dVar41 + (this->FoliagePosition).field0_0x0._s_0.X;
    auVar10._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    *(undefined1 (*) [16])&(this->FoliagePosition).field0_0x0 = auVar10;
    dVar46 = __real_bff0000000000000;
    uVar28 = SUB84(__real_bff0000000000000,0);
    uVar35 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    (this->FoliagePosition).field0_0x0._s_0.Z = dVar43;
    dVar36 = (this->FoliagePosition).field0_0x0._s_0.Y;
    dVar42 = (this->FoliagePosition).field0_0x0._s_0.X;
    auVar33._0_8_ = dVar36 * dVar36;
    auVar33._8_8_ = 0;
    dVar43 = dVar42 * dVar42 + auVar33._0_8_ + dVar43 * dVar43;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar43;
    auVar34 = sqrtpd(auVar33,auVar13);
    dVar39 = auVar34._0_8_ * __real_3f847ae147ae147b;
    if (dVar46 <= dVar39) {
      if (dVar2 <= dVar39) {
        dVar39 = dVar2;
      }
      uVar28 = SUB84(dVar39,0);
      uVar35 = (undefined4)((ulonglong)dVar39 >> 0x20);
    }
    dVar46 = asin((double)CONCAT44(uVar35,uVar28));
    uVar24 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_268[0]._24_8_ =
         CONCAT44((uint)((ulonglong)dVar46 >> 0x20) ^ uVar24,
                  SUB84(dVar46,0) ^ (uint)__xmm_80000000000000008000000000000000);
    if (dVar43 <= __real_3f1a36e2e0000000) {
      local_228[2] = dVar2;
      local_228[0] = 0.0;
      local_228[1] = 0.0;
      pdVar21 = local_228;
    }
    else {
      uVar27 = SUB84(dVar42,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar24 = (uint)((ulonglong)dVar42 >> 0x20) ^ uVar24;
      local_188 = 0;
      dVar42 = dVar36 * dVar36 + (double)CONCAT44(uVar24,uVar27) * (double)CONCAT44(uVar24,uVar27);
      if (dVar42 == dVar2) {
        pdVar21 = &local_2f0;
        local_2f0 = dVar36;
        dStack_2e8 = (double)CONCAT44(uVar24,uVar27);
        local_2e0 = 0.0;
      }
      else if (dVar38 <= dVar42) {
        local_2e0 = 0.0;
        pdVar21 = &local_2f0;
        local_2f0 = dVar36 * (dVar2 / SQRT(dVar42));
        dStack_2e8 = (double)CONCAT44(uVar24,uVar27) * (dVar2 / SQRT(dVar42));
      }
      else {
        pdVar21 = &local_2f0;
        local_2f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_2e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_2e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    local_268[0]._0_8_ = *pdVar21;
    local_268[0]._8_8_ = pdVar21[1];
    local_268[0]._16_8_ = pdVar21[2];
    FInteractiveFoliageSceneProxy::UpdateParameters_GameThread
              (pUVar19->FoliageSceneProxy,&this->FoliagePosition,
               (TVector4<double> *)&local_268[0]._s_0);
    dVar2 = (this->FoliagePosition).field0_0x0._s_0.Y;
    dVar38 = (this->FoliagePosition).field0_0x0._s_0.X;
    dVar36 = (this->FoliagePosition).field0_0x0._s_0.Z;
    if ((dVar38 * dVar38 + dVar2 * dVar2 + dVar36 * dVar36 < __real_3eb0c6f780000000) &&
       (dVar2 = (this->FoliageVelocity).field0_0x0._s_0.Y,
       dVar38 = (this->FoliageVelocity).field0_0x0._s_0.X,
       dVar36 = (this->FoliageVelocity).field0_0x0._s_0.Z,
       dVar38 * dVar38 + dVar2 * dVar2 + dVar36 * dVar36 < __real_3eb0c6f780000000)) {
      (**(code **)(this->_padding_ + 0x4a8))(this,0);
    }
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_138);
  }
  AActor::Tick((AActor *)this,param_1);
  return;
}

// execCapsuleTouched @ 145eef3c0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
AInteractiveFoliageActor::execCapsuleTouched(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  longlong lVar9;
  UClass *pUVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  longlong local_178;
  longlong local_170 [4];
  double local_150;
  undefined4 uStack_148;
  undefined1 uStack_144;
  undefined2 uStack_143;
  undefined1 uStack_141;
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_170[1] = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_170 + 1,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_170 + 1);
  }
  local_170[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_170,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_170);
  }
  local_178 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  memset(local_138,0,0x100);
  uStack_143 = 0;
  uStack_141 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_150 = 0.0;
  uStack_148 = 0xffffffff;
  uStack_144 = 0;
  uStack_68 = 0xffffffff;
  local_134 = 0x3f800000;
  local_94 = 0xffffffff;
  local_70 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_138,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_138);
  }
  lVar9 = local_178;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_170[0] != 0) && (local_178 != 0)) {
    pUVar10 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
    lVar4 = *(longlong *)(lVar9 + 0x10);
    iVar2 = (int)pUVar10->_padding_;
    if ((iVar2 <= *(int *)(lVar4 + 0x38)) &&
       (((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar10->_padding_ && (lVar5 = *(longlong *)(param_1 + 0x12), lVar5 != 0)))) {
      dVar14 = *(double *)(lVar9 + 0x110) - *(double *)(lVar5 + 0x110);
      lVar6 = *(longlong *)(param_1 + 0xb);
      local_150 = *(double *)(lVar5 + 0x120) - *(double *)(lVar5 + 0x120);
      dVar11 = *(double *)(lVar9 + 0x118) - *(double *)(lVar5 + 0x118);
      dVar12 = dVar11 * dVar11 + dVar14 * dVar14 + local_150 * local_150;
      uVar13 = local_150;
      uVar15 = dVar14;
      uVar8 = dVar11;
      if ((dVar12 != __real_3ff0000000000000) &&
         (uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         __real_3e45798ee0000000 <= dVar12)) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
        uVar13 = local_150 * dVar12;
        uVar15 = dVar14 * dVar12;
        uVar8 = dVar11 * dVar12;
      }
      dVar12 = *(double *)(lVar5 + 0x230);
      if (*(double *)(lVar5 + 0x238) <= *(double *)(lVar5 + 0x230)) {
        dVar12 = *(double *)(lVar5 + 0x238);
      }
      dVar14 = (double)((float)dVar12 * *(float *)(lVar5 + 0x56c));
      dVar11 = dVar14 * (double)uVar8 + *(double *)(lVar6 + 0x118);
      dVar12 = *(double *)(lVar6 + 0x120);
      auVar7._8_4_ = SUB84(dVar11,0);
      auVar7._0_8_ = dVar14 * (double)uVar15 + *(double *)(lVar6 + 0x110);
      auVar7._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])&param_1[0x12].field_0x8 = auVar7;
      *(double *)&param_1[0x12].field_0x18 = dVar14 * (double)uVar13 + dVar12;
    }
    (**(code **)(*(longlong *)param_1 + 0x4a8))(param_1,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
  }
  return;
}

