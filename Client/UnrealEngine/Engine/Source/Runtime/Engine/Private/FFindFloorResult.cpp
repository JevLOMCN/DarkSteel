// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1476d85d0

UScriptStruct * __cdecl FFindFloorResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFindFloorResult.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FFindFloorResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFindFloorResult,(UObject *)pUVar1,
                         L"FindFloorResult");
  }
  return Z_Registration_Info_UScriptStruct_FFindFloorResult.OuterSingleton;
}

// SetFromLineTrace @ 14786a720

void __thiscall
FFindFloorResult::SetFromLineTrace
          (FFindFloorResult *this,FHitResult *param_1,float param_2,float param_3,bool param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  FHitResult *pFVar9;
  FHitResult local_128;
  
  if ((this->HitResult).bBlockingHit == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("HitResult.bBlockingHit",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\CharacterMovementComponent.cpp"
                       ,0x240,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((this->HitResult).bBlockingHit != 0) && (param_1->bBlockingHit != 0)) {
    FHitResult::FHitResult(&local_128,&this->HitResult);
    lVar8 = 2;
    pFVar9 = &this->HitResult;
    do {
      fVar4 = param_1->Time;
      fVar5 = param_1->Distance;
      iVar6 = param_1->_padding_;
      pFVar9->FaceIndex = param_1->FaceIndex;
      pFVar9->Time = fVar4;
      pFVar9->Distance = fVar5;
      pFVar9->_padding_ = iVar6;
      uVar3 = *(undefined8 *)&(param_1->Location).field_0x8;
      *(undefined8 *)&pFVar9->Location = *(undefined8 *)&param_1->Location;
      *(undefined8 *)&(pFVar9->Location).field_0x8 = uVar3;
      uVar3 = *(undefined8 *)&param_1->ImpactPoint;
      *(undefined8 *)&(pFVar9->Location).field_0x10 = *(undefined8 *)&(param_1->Location).field_0x10
      ;
      *(undefined8 *)&pFVar9->ImpactPoint = uVar3;
      uVar3 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
      *(undefined8 *)&(pFVar9->ImpactPoint).field_0x8 =
           *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
      *(undefined8 *)&(pFVar9->ImpactPoint).field_0x10 = uVar3;
      uVar3 = *(undefined8 *)&(param_1->Normal).field_0x8;
      *(undefined8 *)&pFVar9->Normal = *(undefined8 *)&param_1->Normal;
      *(undefined8 *)&(pFVar9->Normal).field_0x8 = uVar3;
      uVar3 = *(undefined8 *)&param_1->ImpactNormal;
      *(undefined8 *)&(pFVar9->Normal).field_0x10 = *(undefined8 *)&(param_1->Normal).field_0x10;
      *(undefined8 *)&pFVar9->ImpactNormal = uVar3;
      uVar3 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
      *(undefined8 *)&(pFVar9->ImpactNormal).field_0x8 =
           *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
      *(undefined8 *)&(pFVar9->ImpactNormal).field_0x10 = uVar3;
      uVar3 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
      *(undefined8 *)&pFVar9->TraceStart = *(undefined8 *)&param_1->TraceStart;
      *(undefined8 *)&(pFVar9->TraceStart).field_0x8 = uVar3;
      lVar8 = lVar8 + -1;
      pFVar9 = (FHitResult *)&(pFVar9->TraceStart).field_0x10;
      param_1 = (FHitResult *)&(param_1->TraceStart).field_0x10;
    } while (lVar8 != 0);
    uVar1 = *(uint *)this;
    *(undefined8 *)&(this->HitResult).ImpactPoint = local_128.ImpactPoint._0_8_;
    *(undefined8 *)&(this->HitResult).ImpactPoint.field_0x8 = local_128.ImpactPoint._8_8_;
    (this->HitResult).Time = local_128.Time;
    *(undefined8 *)&(this->HitResult).Location = local_128.Location._0_8_;
    *(undefined8 *)&(this->HitResult).Location.field_0x8 = local_128.Location._8_8_;
    *(uint *)this = (param_4 | 2) * 2 | uVar1 & 0xfffffffd;
    *(undefined8 *)&(this->HitResult).ImpactPoint.field_0x10 = local_128.ImpactPoint._16_8_;
    *(undefined8 *)&(this->HitResult).TraceStart = local_128.TraceStart._0_8_;
    *(undefined8 *)&(this->HitResult).TraceStart.field_0x8 = local_128.TraceStart._8_8_;
    *(undefined8 *)&(this->HitResult).Location.field_0x10 = local_128.Location._16_8_;
    *(undefined8 *)&(this->HitResult).TraceStart.field_0x10 = local_128.TraceStart._16_8_;
    *(undefined8 *)&(this->HitResult).TraceEnd = local_128.TraceEnd._0_8_;
    *(undefined8 *)&(this->HitResult).TraceEnd.field_0x8 = local_128.TraceEnd._8_8_;
    *(undefined8 *)&(this->HitResult).TraceEnd.field_0x10 = local_128.TraceEnd._16_8_;
    this->FloorDist = param_2;
    this->LineDist = param_3;
  }
  return;
}

// SetFromSweep @ 14786a8c0

void __thiscall
FFindFloorResult::SetFromSweep
          (FFindFloorResult *this,FHitResult *param_1,float param_2,bool param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  FHitResult *pFVar8;
  
  this->FloorDist = param_2;
  this->LineDist = 0.0;
  lVar7 = 2;
  *(uint *)this =
       (uint)(param_1->bBlockingHit == '\x01' && param_1->bStartPenetrating == '\0') |
       *(uint *)this & 0xfffffff8 | (uint)param_3 * 2;
  do {
    pFVar8 = &this->HitResult;
    this = (FFindFloorResult *)&pFVar8->TraceStart;
    fVar4 = param_1->Time;
    fVar5 = param_1->Distance;
    iVar6 = param_1->_padding_;
    pFVar8->FaceIndex = param_1->FaceIndex;
    pFVar8->Time = fVar4;
    pFVar8->Distance = fVar5;
    pFVar8->_padding_ = iVar6;
    uVar2 = *(undefined8 *)&(param_1->Location).field_0x8;
    *(undefined8 *)&pFVar8->Location = *(undefined8 *)&param_1->Location;
    *(undefined8 *)&(pFVar8->Location).field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&param_1->ImpactPoint;
    *(undefined8 *)&(pFVar8->Location).field_0x10 = *(undefined8 *)&(param_1->Location).field_0x10;
    *(undefined8 *)&pFVar8->ImpactPoint = uVar2;
    uVar2 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar8->ImpactPoint).field_0x8 =
         *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar8->ImpactPoint).field_0x10 = uVar2;
    uVar2 = *(undefined8 *)&(param_1->Normal).field_0x8;
    *(undefined8 *)&pFVar8->Normal = *(undefined8 *)&param_1->Normal;
    *(undefined8 *)&(pFVar8->Normal).field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&param_1->ImpactNormal;
    *(undefined8 *)&(pFVar8->Normal).field_0x10 = *(undefined8 *)&(param_1->Normal).field_0x10;
    *(undefined8 *)&pFVar8->ImpactNormal = uVar2;
    uVar2 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar8->ImpactNormal).field_0x8 =
         *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar8->ImpactNormal).field_0x10 = uVar2;
    uVar2 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
    *(undefined8 *)&pFVar8->TraceStart = *(undefined8 *)&param_1->TraceStart;
    *(undefined8 *)&(pFVar8->TraceStart).field_0x8 = uVar2;
    lVar7 = lVar7 + -1;
    param_1 = (FHitResult *)&(param_1->TraceStart).field_0x10;
  } while (lVar7 != 0);
  return;
}

