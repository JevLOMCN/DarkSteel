// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147ba8380

UScriptStruct * __cdecl FCollisionImpactData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollisionImpactData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCollisionImpactData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollisionImpactData,(UObject *)pUVar1,
                         L"CollisionImpactData");
  }
  return Z_Registration_Info_UScriptStruct_FCollisionImpactData.OuterSingleton;
}

// SwapContactOrders @ 148324110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FCollisionImpactData::SwapContactOrders(FCollisionImpactData *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  
  uVar11 = _UNK_15066df7c;
  uVar10 = _UNK_15066df78;
  uVar9 = __xmm_80000000000000008000000000000000._4_4_;
  uVar8 = (uint)__xmm_80000000000000008000000000000000;
  iVar14 = (this->ContactInfos).ArrayNum;
  uVar15 = 0;
  if (0 < iVar14) {
    lVar16 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < iVar14) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->ContactInfos).AllocatorInstance.Data;
      uVar15 = uVar15 + 1;
      uVar4 = *(undefined8 *)(pFVar3 + lVar16 + 0x38);
      *(undefined8 *)(pFVar3 + lVar16 + 0x38) = *(undefined8 *)(pFVar3 + lVar16 + 0x40);
      *(undefined8 *)(pFVar3 + lVar16 + 0x40) = uVar4;
      pFVar1 = pFVar3 + lVar16 + 0x18;
      uVar13 = *(uint *)(pFVar1 + 4);
      uVar6 = *(uint *)(pFVar1 + 8);
      uVar7 = *(uint *)(pFVar1 + 0xc);
      uVar4 = *(undefined8 *)(pFVar3 + lVar16 + 0x28);
      pFVar2 = pFVar3 + lVar16 + 0x18;
      *(uint *)pFVar2 = *(uint *)pFVar1 ^ uVar8;
      *(uint *)(pFVar2 + 4) = uVar13 ^ uVar9;
      *(uint *)(pFVar2 + 8) = uVar6 ^ uVar10;
      *(uint *)(pFVar2 + 0xc) = uVar7 ^ uVar11;
      *(ulonglong *)(pFVar3 + lVar16 + 0x28) =
           CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar9,(uint)uVar4 ^ uVar8);
      lVar16 = lVar16 + 0x48;
      iVar14 = (this->ContactInfos).ArrayNum;
    } while ((int)uVar15 < iVar14);
  }
  return;
}

