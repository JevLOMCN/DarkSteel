// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Broadcast @ 1478b6840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FComponentBeginOverlapSignature_MCSignature::Broadcast
          (FComponentBeginOverlapSignature_MCSignature *this,UPrimitiveComponent *param_1,
          AActor *param_2,UPrimitiveComponent *param_3,int param_4,bool param_5,FHitResult *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  UPrimitiveComponent *local_128;
  AActor *local_120;
  UPrimitiveComponent *local_118;
  int local_110;
  bool local_10c;
  undefined8 local_108 [32];
  
  memset(local_108,0,0x100);
  local_110 = param_4;
  lVar5 = 2;
  local_10c = param_5;
  puVar6 = local_108;
  do {
    uVar1 = *(undefined8 *)&param_6->Distance;
    uVar2 = *(undefined8 *)&param_6->Location;
    uVar3 = *(undefined8 *)&(param_6->Location).field_0x8;
    *puVar6 = *(undefined8 *)param_6;
    puVar6[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_6->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_6->ImpactPoint;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_6->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_6->ImpactPoint).field_0x10;
    puVar6[4] = uVar1;
    puVar6[5] = uVar4;
    uVar1 = *(undefined8 *)&param_6->Normal;
    uVar4 = *(undefined8 *)&(param_6->Normal).field_0x8;
    puVar6[6] = uVar2;
    puVar6[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_6->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_6->ImpactNormal;
    puVar6[8] = uVar1;
    puVar6[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_6->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_6->ImpactNormal).field_0x10;
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_6->TraceStart;
    uVar3 = *(undefined8 *)&(param_6->TraceStart).field_0x8;
    puVar6[0xc] = uVar1;
    puVar6[0xd] = uVar4;
    puVar6[0xe] = uVar2;
    puVar6[0xf] = uVar3;
    lVar5 = lVar5 + -1;
    param_6 = (FHitResult *)&(param_6->TraceStart).field_0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar5 != 0);
  local_128 = param_1;
  local_120 = param_2;
  local_118 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this,&local_128);
  return;
}

