// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147ba03c0

UScriptStruct * __cdecl FRadialDamageEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRadialDamageEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRadialDamageEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRadialDamageEvent,(UObject *)pUVar1,
                         L"RadialDamageEvent");
  }
  return Z_Registration_Info_UScriptStruct_FRadialDamageEvent.OuterSingleton;
}

// GetTypeID @ 147ba0400

int __thiscall FRadialDamageEvent::GetTypeID(FRadialDamageEvent *this)

{
  return 2;
}

// IsOfType @ 147ba0410

bool __thiscall FRadialDamageEvent::IsOfType(FRadialDamageEvent *this,int param_1)

{
  return (param_1 & 0xfffffffdU) == 0;
}

// GetBestHitInfo @ 147ba0420

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
FRadialDamageEvent::GetBestHitInfo
          (FRadialDamageEvent *this,AActor *param_1,AActor *param_2,FHitResult *param_3,
          TVector<double> *param_4)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FHitResult *pFVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if ((this->ComponentHits).ArrayNum < 1) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1597847264267599830>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\DamageEvents.cpp"
                       ,0x2a,"ComponentHits.Num() > 0");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ComponentHits).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar8 = 2;
  pFVar6 = (this->ComponentHits).AllocatorInstance.Data;
  pFVar7 = param_3;
  do {
    uVar3 = *(undefined8 *)pFVar6;
    uVar4 = *(undefined8 *)(pFVar6 + 8);
    pFVar7->FaceIndex = (int)uVar3;
    pFVar7->Time = (float)(int)((ulonglong)uVar3 >> 0x20);
    pFVar7->Distance = (float)(int)uVar4;
    pFVar7->_padding_ = (int)((ulonglong)uVar4 >> 0x20);
    uVar3 = *(undefined8 *)(pFVar6 + 0x18);
    *(undefined8 *)&pFVar7->Location = *(undefined8 *)(pFVar6 + 0x10);
    *(undefined8 *)&(pFVar7->Location).field_0x8 = uVar3;
    uVar3 = *(undefined8 *)(pFVar6 + 0x28);
    *(undefined8 *)&(pFVar7->Location).field_0x10 = *(undefined8 *)(pFVar6 + 0x20);
    *(undefined8 *)&pFVar7->ImpactPoint = uVar3;
    uVar3 = *(undefined8 *)(pFVar6 + 0x38);
    *(undefined8 *)&(pFVar7->ImpactPoint).field_0x8 = *(undefined8 *)(pFVar6 + 0x30);
    *(undefined8 *)&(pFVar7->ImpactPoint).field_0x10 = uVar3;
    uVar3 = *(undefined8 *)(pFVar6 + 0x48);
    *(undefined8 *)&pFVar7->Normal = *(undefined8 *)(pFVar6 + 0x40);
    *(undefined8 *)&(pFVar7->Normal).field_0x8 = uVar3;
    uVar3 = *(undefined8 *)(pFVar6 + 0x58);
    *(undefined8 *)&(pFVar7->Normal).field_0x10 = *(undefined8 *)(pFVar6 + 0x50);
    *(undefined8 *)&pFVar7->ImpactNormal = uVar3;
    uVar3 = *(undefined8 *)(pFVar6 + 0x68);
    *(undefined8 *)&(pFVar7->ImpactNormal).field_0x8 = *(undefined8 *)(pFVar6 + 0x60);
    *(undefined8 *)&(pFVar7->ImpactNormal).field_0x10 = uVar3;
    uVar3 = *(undefined8 *)(pFVar6 + 0x78);
    *(undefined8 *)&pFVar7->TraceStart = *(undefined8 *)(pFVar6 + 0x70);
    *(undefined8 *)&(pFVar7->TraceStart).field_0x8 = uVar3;
    lVar8 = lVar8 + -1;
    pFVar6 = pFVar6 + 0x80;
    pFVar7 = (FHitResult *)&(pFVar7->TraceStart).field_0x10;
  } while (lVar8 != 0);
  dVar15 = *(double *)&param_3->ImpactPoint - (this->Origin).field0_0x0._s_0.X;
  dVar2 = *(double *)&(param_3->ImpactPoint).field_0x8 - (this->Origin).field0_0x0._s_0.Y;
  dVar14 = *(double *)&(param_3->ImpactPoint).field_0x10 - (this->Origin).field0_0x0._s_0.Z;
  dVar13 = dVar2 * dVar2 + dVar15 * dVar15 + dVar14 * dVar14;
  if (dVar13 != __real_3ff0000000000000) {
    if (dVar13 < __real_3e45798ee0000000) {
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      dVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      uVar11 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar12 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      goto LAB_147ba058b;
    }
    dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
    dVar15 = dVar15 * dVar13;
    dVar2 = dVar2 * dVar13;
    dVar14 = dVar14 * dVar13;
  }
  uVar9 = SUB84(dVar15,0);
  uVar10 = (undefined4)((ulonglong)dVar15 >> 0x20);
  uVar11 = SUB84(dVar14,0);
  uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
LAB_147ba058b:
  *(undefined4 *)&param_4->field0_0x0 = uVar9;
  *(undefined4 *)((longlong)&param_4->field0_0x0 + 4) = uVar10;
  (param_4->field0_0x0)._s_0.Y = dVar2;
  (param_4->field0_0x0)._s_0.Z = (double)CONCAT44(uVar12,uVar11);
  return;
}

