// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetTypeID @ 14770afe0

int __thiscall FPointDamageEvent::GetTypeID(FPointDamageEvent *this)

{
  return 1;
}

// IsOfType @ 147714a60

bool __thiscall FPointDamageEvent::IsOfType(FPointDamageEvent *this,int param_1)

{
  return (uint)param_1 < 2;
}

// StaticStruct @ 147ba00c0

UScriptStruct * __cdecl FPointDamageEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPointDamageEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPointDamageEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPointDamageEvent,(UObject *)pUVar1,
                         L"PointDamageEvent");
  }
  return Z_Registration_Info_UScriptStruct_FPointDamageEvent.OuterSingleton;
}

// GetBestHitInfo @ 147ba0140

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
FPointDamageEvent::GetBestHitInfo
          (FPointDamageEvent *this,AActor *param_1,AActor *param_2,FHitResult *param_3,
          TVector<double> *param_4)

{
  undefined8 uVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  FHitResult *pFVar6;
  longlong lVar7;
  
  lVar7 = 2;
  pFVar6 = &this->HitInfo;
  do {
    fVar3 = pFVar6->Time;
    fVar4 = pFVar6->Distance;
    iVar5 = pFVar6->_padding_;
    param_3->FaceIndex = pFVar6->FaceIndex;
    param_3->Time = fVar3;
    param_3->Distance = fVar4;
    param_3->_padding_ = iVar5;
    uVar1 = *(undefined8 *)&(pFVar6->Location).field_0x8;
    *(undefined8 *)&param_3->Location = *(undefined8 *)&pFVar6->Location;
    *(undefined8 *)&(param_3->Location).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pFVar6->ImpactPoint;
    *(undefined8 *)&(param_3->Location).field_0x10 = *(undefined8 *)&(pFVar6->Location).field_0x10;
    *(undefined8 *)&param_3->ImpactPoint = uVar1;
    uVar1 = *(undefined8 *)&(pFVar6->ImpactPoint).field_0x10;
    *(undefined8 *)&(param_3->ImpactPoint).field_0x8 =
         *(undefined8 *)&(pFVar6->ImpactPoint).field_0x8;
    *(undefined8 *)&(param_3->ImpactPoint).field_0x10 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar6->Normal).field_0x8;
    *(undefined8 *)&param_3->Normal = *(undefined8 *)&pFVar6->Normal;
    *(undefined8 *)&(param_3->Normal).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pFVar6->ImpactNormal;
    *(undefined8 *)&(param_3->Normal).field_0x10 = *(undefined8 *)&(pFVar6->Normal).field_0x10;
    *(undefined8 *)&param_3->ImpactNormal = uVar1;
    uVar1 = *(undefined8 *)&(pFVar6->ImpactNormal).field_0x10;
    *(undefined8 *)&(param_3->ImpactNormal).field_0x8 =
         *(undefined8 *)&(pFVar6->ImpactNormal).field_0x8;
    *(undefined8 *)&(param_3->ImpactNormal).field_0x10 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar6->TraceStart).field_0x8;
    *(undefined8 *)&param_3->TraceStart = *(undefined8 *)&pFVar6->TraceStart;
    *(undefined8 *)&(param_3->TraceStart).field_0x8 = uVar1;
    lVar7 = lVar7 + -1;
    pFVar6 = (FHitResult *)&(pFVar6->TraceStart).field_0x10;
    param_3 = (FHitResult *)&(param_3->TraceStart).field_0x10;
  } while (lVar7 != 0);
  dVar2 = *(double *)&(this->ShotDirection).field_0x8;
  (param_4->field0_0x0)._s_0.X = *(double *)&this->ShotDirection;
  (param_4->field0_0x0)._s_0.Y = dVar2;
  (param_4->field0_0x0)._s_0.Z = *(double *)&(this->ShotDirection).field_0x10;
  return;
}

