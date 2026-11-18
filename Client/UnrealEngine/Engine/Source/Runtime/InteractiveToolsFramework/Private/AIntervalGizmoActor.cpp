// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 149670430

UClass * __cdecl AIntervalGizmoActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AIntervalGizmoActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"IntervalGizmoActor",
               &Z_Registration_Info_UClass_AIntervalGizmoActor.InnerSingleton,
               StaticRegisterNativesAIntervalGizmoActor,0x2f8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AIntervalGizmoActor>,
               InternalVTableHelperCtorCaller<AIntervalGizmoActor>,local_res8,
               AGizmoActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AIntervalGizmoActor.InnerSingleton;
}

// AIntervalGizmoActor @ 149682470

AIntervalGizmoActor * __thiscall
AIntervalGizmoActor::AIntervalGizmoActor(AIntervalGizmoActor *this,FVTableHelper *param_1)

{
  AGizmoActor::AGizmoActor((AGizmoActor *)this,param_1);
  this->_padding_ = (longlong)&___7AIntervalGizmoActor__6B_;
  (this->UpIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  (this->DownIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  (this->ForwardIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  (this->BackwardIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  (this->RightIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  (this->LeftIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  return this;
}

// AIntervalGizmoActor @ 1496824d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AIntervalGizmoActor * __thiscall AIntervalGizmoActor::AIntervalGizmoActor(AIntervalGizmoActor *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *this_00;
  undefined7 uVar4;
  FName local_res8;
  
  AGizmoActor::AGizmoActor((AGizmoActor *)this);
  this->_padding_ = (longlong)&___7AIntervalGizmoActor__6B_;
  (this->UpIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  (this->DownIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  (this->ForwardIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  (this->BackwardIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  (this->RightIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  (this->LeftIntervalComponent).field0_0x0.DebugPtr = (UGizmoLineHandleComponent *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"GizmoCenter");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USphereComponent_NoRegister();
  this_00 = (USceneComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  this->_padding_ = (longlong)this_00;
  uVar4 = (undefined7)((ulonglong)pUVar3 >> 8);
  this_00[2].PhysicsVolume.WeakPtr.ObjectIndex = 0x3f800000;
  USceneComponent::SetVisibility(this_00,false,DirtyOnly);
  (**(code **)(this_00->_padding_ + 0x788))
            (this_00,UCollisionProfile::NoCollision_ProfileName,CONCAT71(uVar4,1));
  return this;
}

// ~AIntervalGizmoActor @ 149689280

void __thiscall AIntervalGizmoActor::~AIntervalGizmoActor(AIntervalGizmoActor *this)

{
  this->_padding_ = (longlong)&___7AIntervalGizmoActor__6B_;
  AGizmoActor::~AGizmoActor((AGizmoActor *)this);
  return;
}

// ConstructDefaultIntervalGizmo @ 14969a200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AIntervalGizmoActor * __cdecl
AIntervalGizmoActor::ConstructDefaultIntervalGizmo(UWorld *param_1,UGizmoViewContext *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  UClass *pUVar6;
  AIntervalGizmoActor *pAVar7;
  FString *pFVar8;
  UGizmoLineHandleComponent *pUVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_158 [32];
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  FLinearColor_u_0 local_e8;
  undefined1 local_d8 [112];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_d8);
  pUVar6 = StaticClass();
  pAVar7 = (AIntervalGizmoActor *)
           UWorld::SpawnActor(param_1,pUVar6,&UE::Math::TVector<double>::ZeroVector,
                              &UE::Math::TRotator<double>::ZeroRotator,
                              (FActorSpawnParameters *)local_d8);
  if (pAVar7 == (AIntervalGizmoActor *)0x0) {
    pAVar7 = (AIntervalGizmoActor *)0x0;
  }
  else {
    pUVar6 = StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pAVar7->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      pFVar8 = GetTypeName<AIntervalGizmoActor>((FString *)&local_118._s_0);
      pwVar12 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<AActor>((FString *)&local_100._s_0,(AActor *)pAVar7);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar12,pwVar11);
    }
  }
  fVar5 = __real_42700000;
  dVar4 = _UNK_15061cbc8;
  dVar3 = ___xmm_3ff00000000000000000000000000000;
  dVar2 = __real_3ff0000000000000;
  local_e8._0_8_ = ___xmm_3f8000003f1898993f8000003f189899;
  local_e8._8_8_ = _UNK_151e9f5d8;
  local_100._s_0.Z = __real_3ff0000000000000;
  local_118._s_0.Z = 0.0;
  local_100._s_0.X = 0.0;
  local_100._s_0.Y = 0.0;
  local_118._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_118._s_0.Y = _UNK_15061cbc8;
  pUVar9 = AGizmoActor::AddDefaultLineHandleComponent
                     (param_1,(AActor *)pAVar7,param_2,(FLinearColor *)&local_e8._s_0,
                      (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_100._s_0,
                      __real_42700000,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UGizmoLineHandleComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  local_100._s_0.Z = dVar2;
  local_118._s_0.Z = 0.0;
  (pAVar7->UpIntervalComponent).field0_0x0.DebugPtr = pUVar9;
  local_100._s_0.X = 0.0;
  local_100._s_0.Y = 0.0;
  local_118._s_0.X = dVar3;
  local_118._s_0.Y = dVar4;
  pUVar9 = AGizmoActor::AddDefaultLineHandleComponent
                     (param_1,(AActor *)pAVar7,param_2,(FLinearColor *)&local_e8._s_0,
                      (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_100._s_0,fVar5,
                      false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UGizmoLineHandleComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  dVar4 = _UNK_150689518;
  dVar3 = ___xmm_00000000000000003ff0000000000000;
  local_100._s_0.Y = _UNK_15061cbc8;
  local_100._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_100._s_0.Z = 0.0;
  local_118._s_0.Z = 0.0;
  (pAVar7->DownIntervalComponent).field0_0x0.DebugPtr = pUVar9;
  local_118._s_0.X = dVar3;
  local_118._s_0.Y = dVar4;
  pUVar9 = AGizmoActor::AddDefaultLineHandleComponent
                     (param_1,(AActor *)pAVar7,param_2,(FLinearColor *)&local_e8._s_0,
                      (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_100._s_0,fVar5,
                      false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UGizmoLineHandleComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  local_100._s_0.Y = _UNK_15061cbc8;
  local_100._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_100._s_0.Z = 0.0;
  local_118._s_0.Z = 0.0;
  (pAVar7->ForwardIntervalComponent).field0_0x0.DebugPtr = pUVar9;
  local_118._s_0.X = dVar3;
  local_118._s_0.Y = dVar4;
  pUVar9 = AGizmoActor::AddDefaultLineHandleComponent
                     (param_1,(AActor *)pAVar7,param_2,(FLinearColor *)&local_e8._s_0,
                      (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_100._s_0,fVar5,
                      false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UGizmoLineHandleComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  local_100._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_100._s_0.Y = _UNK_150689518;
  local_100._s_0.Z = 0.0;
  local_118._s_0.X = 0.0;
  local_118._s_0.Y = 0.0;
  local_118._s_0.Z = dVar2;
  (pAVar7->BackwardIntervalComponent).field0_0x0.DebugPtr = pUVar9;
  pUVar9 = AGizmoActor::AddDefaultLineHandleComponent
                     (param_1,(AActor *)pAVar7,param_2,(FLinearColor *)&local_e8._s_0,
                      (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_100._s_0,fVar5,
                      false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UGizmoLineHandleComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  local_100._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_100._s_0.Y = _UNK_150689518;
  local_100._s_0.Z = 0.0;
  local_118._s_0.X = 0.0;
  local_118._s_0.Y = 0.0;
  local_118._s_0.Z = dVar2;
  (pAVar7->RightIntervalComponent).field0_0x0.DebugPtr = pUVar9;
  pUVar9 = AGizmoActor::AddDefaultLineHandleComponent
                     (param_1,(AActor *)pAVar7,param_2,(FLinearColor *)&local_e8._s_0,
                      (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_100._s_0,fVar5,
                      false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UGizmoLineHandleComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (pAVar7->LeftIntervalComponent).field0_0x0.DebugPtr = pUVar9;
  if (local_d8._64_8_ != 0) {
    plVar10 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return pAVar7;
}

// GetPrivateStaticClass @ 1496a3f90

UClass * __cdecl AIntervalGizmoActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AIntervalGizmoActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"IntervalGizmoActor",
               &Z_Registration_Info_UClass_AIntervalGizmoActor.InnerSingleton,
               StaticRegisterNativesAIntervalGizmoActor,0x2f8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AIntervalGizmoActor>,
               InternalVTableHelperCtorCaller<AIntervalGizmoActor>,local_res8,
               AGizmoActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AIntervalGizmoActor.InnerSingleton;
}

// StaticRegisterNativesAIntervalGizmoActor @ 1496c2740

void __cdecl AIntervalGizmoActor::StaticRegisterNativesAIntervalGizmoActor(void)

{
  return;
}

