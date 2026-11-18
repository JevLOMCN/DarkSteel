// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Broadcast @ 1478b6a00

void __thiscall
UInterpToMovementComponent::FOnInterpToStopDelegate::Broadcast
          (FOnInterpToStopDelegate *this,FHitResult *param_1,float param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 local_128 [32];
  float local_28;
  
  memset(local_128,0,0x100);
  lVar6 = 2;
  puVar5 = local_128;
  do {
    uVar1 = *(undefined8 *)&param_1->Distance;
    uVar2 = *(undefined8 *)&param_1->Location;
    uVar3 = *(undefined8 *)&(param_1->Location).field_0x8;
    *puVar5 = *(undefined8 *)param_1;
    puVar5[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_1->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_1->ImpactPoint;
    puVar5[2] = uVar2;
    puVar5[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
    puVar5[4] = uVar1;
    puVar5[5] = uVar4;
    uVar1 = *(undefined8 *)&param_1->Normal;
    uVar4 = *(undefined8 *)&(param_1->Normal).field_0x8;
    puVar5[6] = uVar2;
    puVar5[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_1->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_1->ImpactNormal;
    puVar5[8] = uVar1;
    puVar5[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
    puVar5[10] = uVar2;
    puVar5[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_1->TraceStart;
    uVar3 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
    puVar5[0xc] = uVar1;
    puVar5[0xd] = uVar4;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar3;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 0x10;
    param_1 = (FHitResult *)&(param_1->TraceStart).field_0x10;
  } while (lVar6 != 0);
  local_28 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,local_128);
  return;
}

