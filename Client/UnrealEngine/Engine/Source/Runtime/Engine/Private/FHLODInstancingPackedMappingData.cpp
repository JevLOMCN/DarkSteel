// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 148a263f0

UScriptStruct * __cdecl FHLODInstancingPackedMappingData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHLODInstancingPackedMappingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FHLODInstancingPackedMappingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHLODInstancingPackedMappingData,
                         (UObject *)pUVar1,L"HLODInstancingPackedMappingData");
  }
  return Z_Registration_Info_UScriptStruct_FHLODInstancingPackedMappingData.OuterSingleton;
}

// ForEachActorInstancingMapping @ 148a52f80

void __thiscall
FHLODInstancingPackedMappingData::ForEachActorInstancingMapping
          (FHLODInstancingPackedMappingData *this,uint param_1,
          TFunctionRef<void___cdecl(UHLODInstancedStaticMeshComponent_*,unsigned_int,unsigned_int)>
          *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res20 [2];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48 [2];
  
  if (*(int *)&(this->PerActorMappingData).field_0x8 !=
      *(int *)&(this->PerActorMappingData).field_0x34) {
    puVar11 = *(undefined1 **)&(this->PerActorMappingData).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->PerActorMappingData).field_0x38;
    }
    iVar6 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->PerActorMappingData).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar6 != -1) {
      while (lVar1 = *(longlong *)&this->PerActorMappingData + (longlong)iVar6 * 0x14,
            *(uint *)(*(longlong *)&this->PerActorMappingData + (longlong)iVar6 * 0x14) != param_1)
      {
        iVar6 = *(int *)(lVar1 + 0xc);
        if (iVar6 == -1) {
          return;
        }
      }
      puVar8 = (uint *)(lVar1 + 4);
      if (lVar1 == 0) {
        puVar8 = (uint *)0x0;
      }
      if (puVar8 != (uint *)0x0) {
        uVar10 = *puVar8;
        uVar7 = puVar8[1];
        uVar12 = (ulonglong)uVar7;
        if ((int)uVar10 < 0) {
          uVar9 = uVar10 >> 0x15 & 0x3ff;
          if (((this->ISMCs).ArrayNum <= (int)uVar9) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_50 = *(undefined8 *)((this->ISMCs).AllocatorInstance.Data + (ulonglong)uVar9 * 8);
          local_res8[0] = uVar7;
          local_res10[0] = uVar10 & 0x1fffff;
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_50,local_res8,local_res10);
        }
        else {
          uVar10 = uVar10 & 0x7fffffff;
          if (uVar7 != 0) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (this->ComponentsMapping).ArrayNum) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar3 = (this->ComponentsMapping).AllocatorInstance.Data;
              uVar7 = *(uint *)(pFVar3 + (longlong)(int)uVar10 * 8);
              uVar2 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar10 * 8 + 4);
              uVar9 = uVar7 >> 0x15;
              if (((this->ISMCs).ArrayNum <= (int)uVar9) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_48[0] = *(undefined8 *)
                             ((this->ISMCs).AllocatorInstance.Data + (ulonglong)uVar9 * 8);
              local_res20[0] = uVar7 & 0x1fffff;
              local_58[0] = uVar2;
              (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_48,local_58,local_res20)
              ;
              uVar10 = uVar10 + 1;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
        }
      }
    }
  }
  return;
}

