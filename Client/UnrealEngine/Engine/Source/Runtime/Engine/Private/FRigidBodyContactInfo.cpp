// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147ba8020

UScriptStruct * __cdecl FRigidBodyContactInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigidBodyContactInfo.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRigidBodyContactInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigidBodyContactInfo,(UObject *)pUVar1,
                         L"RigidBodyContactInfo");
  }
  return Z_Registration_Info_UScriptStruct_FRigidBodyContactInfo.OuterSingleton;
}

// SwapOrder @ 1483241f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FRigidBodyContactInfo::SwapOrder(FRigidBodyContactInfo *this)

{
  undefined8 uVar1;
  TObjectPtr<UPhysicalMaterial>_u_0 TVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  TVar2 = this->PhysMaterial[0].field0_0x0;
  this->PhysMaterial[0].field0_0x0 = this->PhysMaterial[1].field0_0x0;
  this->PhysMaterial[1].field0_0x0 = TVar2;
  uVar1 = *(undefined8 *)&(this->ContactNormal).field0_0x0;
  uVar3 = *(uint *)((longlong)&(this->ContactNormal).field0_0x0 + 8) ^
          (uint)__xmm_80000000000000008000000000000000;
  uVar4 = *(uint *)((longlong)&(this->ContactNormal).field0_0x0 + 0xc) ^
          __xmm_80000000000000008000000000000000._4_4_;
  uVar5 = *(uint *)((longlong)&(this->ContactNormal).field0_0x0 + 0x10) ^ _UNK_15066df78;
  uVar6 = *(uint *)((longlong)&(this->ContactNormal).field0_0x0 + 0x14) ^ _UNK_15066df7c;
  (this->ContactNormal).field0_0x0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  *(uint *)((longlong)&(this->ContactNormal).field0_0x0 + 8) = uVar3;
  *(uint *)((longlong)&(this->ContactNormal).field0_0x0 + 0xc) = uVar4;
  *(uint *)((longlong)&(this->ContactNormal).field0_0x0 + 0x10) = uVar5;
  *(uint *)((longlong)&(this->ContactNormal).field0_0x0 + 0x14) = uVar6;
  return;
}

