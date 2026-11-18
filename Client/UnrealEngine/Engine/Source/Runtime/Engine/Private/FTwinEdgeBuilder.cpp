// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Add @ 14844dbc0

void __thiscall
_anon_14BEF342::FTwinEdgeBuilder::Add
          (FTwinEdgeBuilder *this,int param_1,
          TStaticArray<UE::Math::TVector<float>,3,4294967295> *param_2)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  TVector<float> *pTVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  TKeyInitializer<FEdgeKey_const_&> local_res20;
  TVector<float>_u_0 *local_80;
  undefined8 local_78;
  undefined8 local_68;
  TVector<float>_u_0 local_58;
  undefined8 local_4c;
  float local_44;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  float local_2c;
  
  uVar15 = param_1 * 3;
  lVar14 = 3;
  pTVar16 = param_2->Elements;
  do {
    uVar3 = *(undefined8 *)&pTVar16->field0_0x0;
    local_38 = (pTVar16->field0_0x0)._s_0.Z;
    local_40 = *(undefined8 *)&pTVar16->field0_0x0;
    uVar10 = (param_1 * -3 + 1 + uVar15) % 3;
    local_34 = *(undefined8 *)&param_2->Elements[uVar10].field0_0x0;
    fVar19 = (float)uVar3;
    fVar18 = (float)local_34;
    local_2c = param_2->Elements[uVar10].field0_0x0._s_0.Z;
    if (fVar19 == fVar18) {
      local_78._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
      local_68._4_4_ = (float)((ulonglong)local_34 >> 0x20);
      if (local_78._4_4_ == local_68._4_4_) {
        fVar18 = param_2->Elements[uVar10].field0_0x0._s_0.Z;
        pfVar1 = &(pTVar16->field0_0x0)._s_0.Z;
        bVar6 = fVar18 == *pfVar1;
        bVar17 = fVar18 < *pfVar1;
      }
      else {
        bVar6 = local_68._4_4_ == local_78._4_4_;
        bVar17 = local_68._4_4_ < local_78._4_4_;
      }
    }
    else {
      bVar6 = fVar18 == fVar19;
      bVar17 = fVar18 < fVar19;
    }
    uVar9 = (ulonglong)(!bVar17 && !bVar6);
    local_58._0_8_ = *(undefined8 *)((longlong)&local_40 + uVar9 * 0xc);
    local_58._s_0.Z = (&local_38)[uVar9 * 3];
    local_4c = *(undefined8 *)((longlong)&local_34 + uVar9 * -0xc);
    local_44 = (&local_2c)[uVar9 * -3];
    local_78 = uVar3;
    local_68 = local_34;
    uVar10 = ::GetTypeHash((FEdgeKey *)&local_58._s_0);
    if (*(int *)&(this->EdgeMap).field_0x8 != *(int *)&(this->EdgeMap).field_0x34) {
      puVar4 = *(undefined1 **)&(this->EdgeMap).field_0x40;
      puVar11 = &(this->EdgeMap).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar11 = puVar4;
      }
      iVar13 = *(int *)(puVar11 + (ulonglong)(*(int *)&(this->EdgeMap).field_0x48 - 1U & uVar10) * 4
                       );
      if (iVar13 != -1) {
        do {
          lVar2 = *(longlong *)&this->EdgeMap + (longlong)iVar13 * 0x28;
          if ((((local_58._s_0.X ==
                 *(float *)(*(longlong *)&this->EdgeMap + (longlong)iVar13 * 0x28)) &&
               (local_58._s_0.Y == *(float *)(lVar2 + 4))) &&
              (local_58._s_0.Z == *(float *)(lVar2 + 8))) &&
             ((((float)local_4c == *(float *)(lVar2 + 0xc) &&
               (local_4c._4_4_ == *(float *)(lVar2 + 0x10))) &&
              (local_44 == *(float *)(lVar2 + 0x14))))) {
            if (iVar13 != -1) {
              puVar12 = (uint *)(lVar2 + 0x18);
              if (lVar2 == 0) {
                puVar12 = (uint *)0x0;
              }
              if (puVar12 != (uint *)0x0) {
                if (puVar12[1] == 0xffffffff) {
                  uVar10 = *puVar12;
                  puVar12[1] = uVar15;
                  uVar7 = 0;
                  if ((int)uVar10 < (int)(this->TwinEdges)._padding_) {
                    uVar7 = ~uVar10 >> 0x1f;
                  }
                  if (uVar7 == 0) {
                    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar6) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                  }
                  uVar9 = (this->TwinEdges)._padding_;
                  if ((uVar9 & 1) != 0) {
                    uVar9 = (longlong)&(this->TwinEdges)._padding_ + ((longlong)uVar9 >> 0x18);
                  }
                  *(uint *)(uVar9 + (longlong)(int)uVar10 * 4) = uVar15;
                  uVar10 = *puVar12;
                  uVar7 = puVar12[1];
                  uVar8 = 0;
                  if ((int)uVar7 < (int)(this->TwinEdges)._padding_) {
                    uVar8 = ~uVar7 >> 0x1f;
                  }
                  if (uVar8 == 0) {
                    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      );
                    if (bVar6) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                  }
                  uVar9 = (this->TwinEdges)._padding_;
                  if ((uVar9 & 1) != 0) {
                    uVar9 = (longlong)&(this->TwinEdges)._padding_ + ((longlong)uVar9 >> 0x18);
                  }
                  *(uint *)(uVar9 + (longlong)(int)uVar7 * 4) = uVar10;
                }
                else {
                  *puVar12 = uVar15;
                  puVar12[1] = 0xffffffff;
                }
                goto LAB_14844dd84;
              }
            }
            break;
          }
          iVar13 = *(int *)(lVar2 + 0x20);
        } while (iVar13 != -1);
      }
    }
    local_80 = &local_58;
    TSet<TTuple<FEdgeKey,`anonymous_namespace'::FTwinEdgeBuilder::FEdgeDescription>,TDefaultMapHashableKeyFuncs<FEdgeKey,`anonymous_namespace'::FTwinEdgeBuilder::FEdgeDescription,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FEdgeKey_const_&>_>
              ((TSet<TTuple<FEdgeKey,_anonymous_namespace_::FTwinEdgeBuilder::FEdgeDescription>,TDefaultMapHashableKeyFuncs<FEdgeKey,_anonymous_namespace_::FTwinEdgeBuilder::FEdgeDescription,0>,FDefaultSetAllocator>
                *)this,&local_res20,(bool *)&local_80);
    *(uint *)(*(longlong *)&this->EdgeMap + 0x18 + (longlong)(int)local_res20.Key * 0x28) = uVar15;
LAB_14844dd84:
    uVar15 = uVar15 + 1;
    pTVar16 = pTVar16 + 1;
    lVar14 = lVar14 + -1;
    if (lVar14 == 0) {
      return;
    }
  } while( true );
}

