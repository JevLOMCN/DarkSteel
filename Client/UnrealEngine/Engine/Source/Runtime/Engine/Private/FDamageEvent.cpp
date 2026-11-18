// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// ~FDamageEvent @ 1476e8e20

void __thiscall FDamageEvent::~FDamageEvent(FDamageEvent *this)

{
  this->_padding_ = (longlong)&___7FDamageEvent__6B_;
  return;
}

// GetTypeID @ 14770afd0

int __thiscall FDamageEvent::GetTypeID(FDamageEvent *this)

{
  return 0;
}

// IsOfType @ 147714a50

bool __thiscall FDamageEvent::IsOfType(FDamageEvent *this,int param_1)

{
  return param_1 == 0;
}

// StaticStruct @ 147b9fb00

UScriptStruct * __cdecl FDamageEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDamageEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDamageEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDamageEvent,(UObject *)pUVar1,L"DamageEvent");
  }
  return Z_Registration_Info_UScriptStruct_FDamageEvent.OuterSingleton;
}

// GetBestHitInfo @ 147b9fc80

/* WARNING: Type propagation algorithm not settling */
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

void __thiscall
FDamageEvent::GetBestHitInfo
          (FDamageEvent *this,AActor *param_1,AActor *param_2,FHitResult *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  USceneComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  TVector<double>_u_0 *pTVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_a0;
  FWeakObjectPtr FStack_98;
  IActorInstanceManagerInterface *local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  AActor *local_80;
  USceneComponent *local_78;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58;
  TVector<double> local_40;
  
  if (param_1 == (AActor *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1597847264267599862>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\DamageEvents.cpp"
                       ,10,"HitActor");
    if (!bVar6) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_a0.ObjectIndex = 0;
  local_a0.ObjectSerialNumber = 0;
  local_80 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_80);
  FStack_98.ObjectIndex = 0;
  FStack_98.ObjectSerialNumber = 0;
  local_90 = (IActorInstanceManagerInterface *)0x0;
  uStack_88 = 0xffffffff;
  uStack_84 = CONCAT31(uStack_84._1_3_,1);
  if (((UE::FActorInstanceHandle::Private::bValidateAccessFromGameThread != false) &&
      (bVar6 = IsInGameThread(), !bVar6)) && (bVar6 = IsInParallelGameThread(), !bVar6)) {
    `FActorInstanceHandle::FActorInstanceHandle'::__l5::<lambda_1>::operator()(local_res10);
  }
  param_3->bBlockingHit = '\x01';
  (param_3->BoneName).ComparisonIndex = 0;
  (param_3->BoneName).Number = 0;
  (param_3->HitObjectHandle).ReferenceObject.WeakPtr = local_a0;
  (param_3->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr = FStack_98;
  (param_3->HitObjectHandle).ManagerInterface.InterfaceInstance = local_90;
  (param_3->HitObjectHandle).InstanceIndex = uStack_88;
  (param_3->HitObjectHandle).ResolutionStatus = (char)uStack_84;
  *(int3 *)&(param_3->HitObjectHandle).field_0x1d = (int3)((uint)uStack_84 >> 8);
  pUVar4 = (param_1->RootComponent).field0_0x0.DebugPtr;
  if (pUVar4 != (USceneComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar3 = (int)pUVar7->_padding_;
    if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       (local_78 = pUVar4,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8)
       == &pUVar7->_padding_)) goto LAB_147b9fdc6;
  }
  local_78 = (USceneComponent *)0x0;
LAB_147b9fdc6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (USceneComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_78);
  }
  FWeakObjectPtr::operator=(&(param_3->Component).WeakPtr,(FObjectPtr)&local_78);
  pUVar4 = (param_1->RootComponent).field0_0x0.DebugPtr;
  if (pUVar4 == (USceneComponent *)0x0) {
    uVar15 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar17 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    dVar1 = (pUVar4->ComponentToWorld).Translation.ZW.m128d_f64[0];
    uVar15 = SUB84(dVar1,0);
    uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
    uVar9 = *(undefined4 *)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64;
    uVar11 = *(undefined4 *)((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    uVar13 = *(undefined4 *)((pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    uVar14 = *(undefined4 *)((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
  }
  *(undefined4 *)&param_3->ImpactPoint = uVar9;
  *(undefined4 *)&(param_3->ImpactPoint).field_0x4 = uVar11;
  *(undefined4 *)&(param_3->ImpactPoint).field_0x8 = uVar13;
  *(undefined4 *)&(param_3->ImpactPoint).field_0xc = uVar14;
  *(ulonglong *)&(param_3->ImpactPoint).field_0x10 = CONCAT44(uVar17,uVar15);
  *(undefined4 *)&param_3->Location = uVar9;
  *(undefined4 *)&(param_3->Location).field_0x4 = uVar11;
  *(undefined4 *)&(param_3->Location).field_0x8 = uVar13;
  *(undefined4 *)&(param_3->Location).field_0xc = uVar14;
  *(ulonglong *)&(param_3->Location).field_0x10 = CONCAT44(uVar17,uVar15);
  if (param_2 == (AActor *)0x0) {
    pTVar8 = &local_70;
    local_70._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    local_70._s_0.Y =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_70._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pUVar4 = (param_2->RootComponent).field0_0x0.DebugPtr;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_70._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (pUVar4 != (USceneComponent *)0x0) {
      uVar9 = *(undefined4 *)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64;
      uVar11 = *(undefined4 *)((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      uVar13 = *(undefined4 *)((pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      uVar14 = *(undefined4 *)((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
      local_70._s_0.Z = (pUVar4->ComponentToWorld).Translation.ZW.m128d_f64[0];
    }
    local_58._s_0.X = *(double *)&param_3->ImpactPoint - (double)CONCAT44(uVar11,uVar9);
    local_58._s_0.Y = *(double *)&(param_3->ImpactPoint).field_0x8 - (double)CONCAT44(uVar14,uVar13)
    ;
    local_58._s_0.Z = *(double *)&(param_3->ImpactPoint).field_0x10 - local_70._s_0.Z;
    pTVar8 = &UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_58._s_0,&local_40,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector)->field0_0x0;
  }
  dVar1 = (pTVar8->_s_0).Y;
  (param_4->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar8->_s_0).X)->_s_0).X;
  (param_4->field0_0x0)._s_0.Y = dVar1;
  uVar20 = _UNK_15066df7c;
  uVar19 = _UNK_15066df78;
  uVar12 = __xmm_80000000000000008000000000000000._4_4_;
  uVar10 = (uint)__xmm_80000000000000008000000000000000;
  (param_4->field0_0x0)._s_0.Z = (pTVar8->_s_0).Z;
  uVar2 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 0x10);
  uVar16 = *(uint *)&param_4->field0_0x0 ^ uVar10;
  uVar18 = *(uint *)((longlong)&param_4->field0_0x0 + 4) ^ uVar12;
  uVar19 = *(uint *)((longlong)&param_4->field0_0x0 + 8) ^ uVar19;
  uVar20 = *(uint *)((longlong)&param_4->field0_0x0 + 0xc) ^ uVar20;
  uVar10 = (uint)uVar2 ^ uVar10;
  uVar12 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar12;
  *(uint *)&param_3->ImpactNormal = uVar16;
  *(uint *)&(param_3->ImpactNormal).field_0x4 = uVar18;
  *(uint *)&(param_3->ImpactNormal).field_0x8 = uVar19;
  *(uint *)&(param_3->ImpactNormal).field_0xc = uVar20;
  *(uint *)&param_3->Normal = uVar16;
  *(uint *)&(param_3->Normal).field_0x4 = uVar18;
  *(uint *)&(param_3->Normal).field_0x8 = uVar19;
  *(uint *)&(param_3->Normal).field_0xc = uVar20;
  *(ulonglong *)&(param_3->ImpactNormal).field_0x10 = CONCAT44(uVar12,uVar10);
  *(ulonglong *)&(param_3->Normal).field_0x10 = CONCAT44(uVar12,uVar10);
  return;
}

