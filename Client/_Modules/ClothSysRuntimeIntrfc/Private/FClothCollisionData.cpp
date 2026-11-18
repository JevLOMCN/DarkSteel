// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 5

// StaticStruct @ 144645b20

UScriptStruct * __cdecl FClothCollisionData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClothCollisionData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
    Z_Registration_Info_UScriptStruct_FClothCollisionData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionData,(UObject *)pUVar1,
                         L"ClothCollisionData");
  }
  return Z_Registration_Info_UScriptStruct_FClothCollisionData.OuterSingleton;
}

// Append @ 1446492b0

void __thiscall FClothCollisionData::Append(FClothCollisionData *this,FClothCollisionData *param_1)

{
  int *piVar1;
  TArray<FClothCollisionPrim_SphereConnection,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FClothCollisionPrim_Convex,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FClothCollisionPrim_Box,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  
  iVar6 = (this->Spheres).ArrayNum;
  uVar14 = (ulonglong)(this->SphereConnections).ArrayNum;
  piVar1 = &(this->SphereConnections).ArrayNum;
  if (this == param_1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar12 = (param_1->Spheres).ArrayNum;
  if (iVar12 != 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,iVar12,(ForAnyElementType *)this,&(this->Spheres).ArrayNum,
                        &(this->Spheres).ArrayMax);
    memcpy((this->Spheres).AllocatorInstance.Data + (longlong)iVar10 * 0x20,
           (param_1->Spheres).AllocatorInstance.Data,(longlong)iVar12 << 5);
  }
  pTVar2 = &this->SphereConnections;
  if (pTVar2 == &param_1->SphereConnections) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar12 = (param_1->SphereConnections).ArrayNum;
  if (iVar12 != 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,iVar12,&pTVar2->AllocatorInstance,piVar1,
                        &(this->SphereConnections).ArrayMax);
    memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x20,
           (param_1->SphereConnections).AllocatorInstance.Data,(longlong)iVar12 << 5);
  }
  if ((0 < iVar6) && (lVar15 = (longlong)*piVar1, (longlong)uVar14 < lVar15)) {
    lVar16 = uVar14 << 5;
    lVar15 = lVar15 - uVar14;
    do {
      uVar13 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar13 < (this->SphereConnections).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      uVar14 = (ulonglong)(uVar13 + 1);
      pFVar5 = pFVar7 + lVar16;
      *(int *)pFVar5 = *(int *)pFVar5 + iVar6;
      pFVar7 = pFVar7 + lVar16 + 4;
      *(int *)pFVar7 = *(int *)pFVar7 + iVar6;
      lVar16 = lVar16 + 0x20;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  pTVar3 = &this->Convexes;
  if (pTVar3 == &param_1->Convexes) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar6 = (param_1->Convexes).ArrayNum;
  if (iVar6 != 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,iVar6,&pTVar3->AllocatorInstance,&(this->Convexes).ArrayNum,
                        &(this->Convexes).ArrayMax);
    ConstructItems<FClothCollisionPrim_Convex,FClothCollisionPrim_Convex,int>
              ((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x28,
               (FClothCollisionPrim_Convex *)(param_1->Convexes).AllocatorInstance.Data,iVar6);
  }
  pTVar4 = &this->Boxes;
  if (pTVar4 == &param_1->Boxes) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar6 = (param_1->Boxes).ArrayNum;
  if (iVar6 != 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,0x10,iVar6,&pTVar4->AllocatorInstance,&(this->Boxes).ArrayNum,
                        &(this->Boxes).ArrayMax);
    memcpy((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 0x60,
           (param_1->Boxes).AllocatorInstance.Data,(longlong)iVar6 * 0x60);
  }
  return;
}

// AppendTransformed @ 144649570

void __thiscall
FClothCollisionData::AppendTransformed
          (FClothCollisionData *this,FClothCollisionData *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  bool bVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  longlong lVar33;
  uint uVar34;
  int *piVar35;
  double *pdVar36;
  FScriptContainerElement *pFVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar71;
  undefined4 uVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 local_res8 [8];
  
  uVar28 = (this->Convexes).ArrayNum;
  uVar29 = (this->Boxes).ArrayNum;
  iVar4 = (this->Spheres).ArrayNum;
  uVar32 = (ulonglong)iVar4;
  Append(this,param_1);
  iVar27 = (this->Spheres).ArrayNum;
  if (iVar4 < iVar27) {
    lVar33 = uVar32 << 5;
    do {
      uVar30 = (uint)uVar32;
      uVar34 = ~uVar30 >> 0x1f;
      uVar31 = 0;
      if ((int)uVar30 < iVar27) {
        uVar31 = uVar34;
      }
      if ((uVar31 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar31 = *(uint *)((this->Spheres).AllocatorInstance.Data + lVar33);
      uVar26 = 0;
      if ((int)uVar31 < param_2->ArrayNum) {
        uVar26 = ~uVar31 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar37 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar31 * 0x60;
      uVar31 = 0;
      if ((int)uVar30 < (this->Spheres).ArrayNum) {
        uVar31 = uVar34;
      }
      if ((uVar31 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auVar58 = *(undefined1 (*) [16])(pFVar37 + 0x10);
      auVar38 = *(undefined1 (*) [16])pFVar37;
      pFVar5 = (this->Spheres).AllocatorInstance.Data;
      auVar55 = *(undefined1 (*) [16])pFVar37;
      dVar17 = *(double *)(pFVar37 + 0x18);
      pFVar2 = pFVar5 + lVar33 + 8;
      dVar12 = *(double *)pFVar2 * *(double *)&pFVar37[0x40].field_0x0;
      dVar13 = *(double *)(pFVar2 + 8) * *(double *)(pFVar37 + 0x48);
      uVar72 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uVar31 = 0;
      if ((int)uVar30 < (this->Spheres).ArrayNum) {
        uVar31 = uVar34;
      }
      auVar64._8_4_ = SUB84(dVar13,0);
      auVar64._0_8_ = dVar12;
      auVar64._12_4_ = uVar72;
      dVar16 = *(double *)(pFVar5 + lVar33 + 0x18) * *(double *)&pFVar37[0x50].field_0x0;
      dVar18 = *(double *)(pFVar37 + 0x58) * 0.0;
      auVar48 = blendpd(auVar38,auVar58,2);
      dVar3 = auVar58._0_8_;
      auVar65._0_8_ = auVar64._8_8_ * auVar38._0_8_ - auVar38._8_8_ * dVar12;
      auVar65._8_8_ = dVar16 * auVar38._8_8_ - dVar3 * dVar13;
      auVar54._8_4_ = SUB84(dVar13,0);
      auVar54._0_8_ = dVar12;
      auVar54._12_4_ = uVar72;
      auVar38._8_4_ = SUB84(dVar18,0);
      auVar38._0_8_ = dVar16;
      auVar38._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      auVar38 = blendpd(auVar54,auVar38,2);
      auVar39._0_8_ = auVar38._0_8_ * dVar3 - auVar48._0_8_ * dVar16;
      auVar39._8_8_ = auVar38._8_8_ * auVar58._8_8_ - auVar48._8_8_ * dVar18;
      auVar38 = blendpd(auVar65,auVar39,2);
      dVar18 = auVar65._8_8_ + auVar65._8_8_;
      dVar63 = auVar39._0_8_ + auVar39._0_8_;
      uVar72 = (undefined4)((ulonglong)dVar63 >> 0x20);
      auVar66._0_8_ = auVar38._0_8_ + auVar38._0_8_;
      auVar66._8_8_ = auVar38._8_8_ + auVar38._8_8_;
      auVar56._8_4_ = SUB84(dVar63,0);
      auVar56._0_8_ = dVar18;
      auVar56._12_4_ = uVar72;
      auVar49._8_4_ = SUB84(dVar63,0);
      auVar49._0_8_ = dVar18;
      auVar49._12_4_ = uVar72;
      auVar38 = blendpd(auVar49,auVar66,2);
      auVar57._0_8_ = auVar56._8_8_ * auVar55._0_8_ - auVar55._8_8_ * dVar18;
      auVar57._8_8_ = auVar66._0_8_ * auVar55._8_8_ - dVar3 * dVar63;
      auVar48._8_4_ = SUB84(auVar57._8_8_,0);
      auVar48._0_8_ = auVar57._0_8_;
      auVar48._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
      auVar54 = blendpd(auVar55,auVar58,2);
      auVar55._0_8_ = auVar38._0_8_ * dVar3 - auVar54._0_8_ * auVar66._0_8_;
      auVar55._8_8_ = auVar38._8_8_ * auVar58._8_8_ - auVar54._8_8_ * auVar66._8_8_;
      auVar58 = blendpd(auVar57,auVar55,2);
      dVar3 = *(double *)&pFVar37[0x20].field_0x0;
      dVar63 = dVar63 * dVar17 + dVar13 + auVar55._0_8_ + *(double *)(pFVar37 + 0x28);
      dVar13 = *(double *)&pFVar37[0x30].field_0x0;
      if ((uVar31 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar37 = (this->Spheres).AllocatorInstance.Data;
      uVar32 = (ulonglong)(uVar30 + 1);
      auVar19._8_4_ = SUB84(dVar63,0);
      auVar19._0_8_ = dVar18 * dVar17 + dVar12 + auVar48._8_8_ + dVar3;
      auVar19._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
      *(undefined1 (*) [16])(pFVar37 + lVar33 + 8) = auVar19;
      *(double *)(pFVar37 + lVar33 + 0x18) =
           auVar66._0_8_ * dVar17 + dVar16 + auVar58._0_8_ + dVar13;
      lVar33 = lVar33 + 0x20;
      iVar27 = (this->Spheres).ArrayNum;
    } while ((int)(uVar30 + 1) < iVar27);
  }
  piVar35 = &(this->Convexes).ArrayNum;
  if ((int)uVar28 < *piVar35) {
    lVar33 = (longlong)(int)uVar28 * 0x28;
    do {
      uVar31 = 0;
      if ((int)uVar28 < (this->Convexes).ArrayNum) {
        uVar31 = ~uVar28 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar31 = *(uint *)((this->Convexes).AllocatorInstance.Data + lVar33 + 0x20);
      uVar30 = 0;
      if ((int)uVar31 < param_2->ArrayNum) {
        uVar30 = ~uVar31 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar37 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar31 * 0x60;
      uVar31 = 0;
      if ((int)uVar28 < (this->Convexes).ArrayNum) {
        uVar31 = ~uVar28 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->Convexes).AllocatorInstance.Data;
      iVar4 = *(int *)(pFVar2 + lVar33 + 0x18);
      pdVar36 = *(double **)(pFVar2 + lVar33 + 0x10);
      pdVar1 = pdVar36 + (longlong)iVar4 * 3;
      while( true ) {
        if (*(int *)(pFVar2 + lVar33 + 0x18) != iVar4) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pdVar36 == pdVar1) break;
        auVar58 = *(undefined1 (*) [16])(pFVar37 + 0x10);
        auVar38 = *(undefined1 (*) [16])pFVar37;
        dVar17 = *pdVar36 * *(double *)&pFVar37[0x40].field_0x0;
        dVar3 = pdVar36[1] * *(double *)(pFVar37 + 0x48);
        uVar72 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar16 = pdVar36[2] * *(double *)&pFVar37[0x50].field_0x0;
        dVar13 = *(double *)(pFVar37 + 0x58) * 0.0;
        auVar55 = *(undefined1 (*) [16])pFVar37;
        auVar73._8_4_ = SUB84(dVar3,0);
        auVar73._0_8_ = dVar17;
        auVar73._12_4_ = uVar72;
        dVar18 = *(double *)(pFVar37 + 0x18);
        dVar12 = auVar58._0_8_;
        auVar54 = blendpd(auVar38,auVar58,2);
        auVar74._0_8_ = auVar73._8_8_ * auVar38._0_8_ - auVar38._8_8_ * dVar17;
        auVar74._8_8_ = dVar16 * auVar38._8_8_ - dVar12 * dVar3;
        auVar67._8_4_ = SUB84(auVar74._8_8_,0);
        auVar67._0_8_ = auVar74._0_8_;
        auVar67._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
        auVar40._8_4_ = SUB84(dVar3,0);
        auVar40._0_8_ = dVar17;
        auVar40._12_4_ = uVar72;
        auVar20._8_4_ = SUB84(dVar13,0);
        auVar20._0_8_ = dVar16;
        auVar20._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        auVar38 = blendpd(auVar40,auVar20,2);
        auVar41._0_8_ = auVar38._0_8_ * dVar12 - auVar54._0_8_ * dVar16;
        auVar41._8_8_ = auVar38._8_8_ * auVar58._8_8_ - auVar54._8_8_ * dVar13;
        auVar38 = blendpd(auVar74,auVar41,2);
        dVar63 = auVar67._8_8_ + auVar67._8_8_;
        dVar71 = auVar41._0_8_ + auVar41._0_8_;
        auVar75._0_8_ = auVar38._0_8_ + auVar38._0_8_;
        auVar75._8_8_ = auVar38._8_8_ + auVar38._8_8_;
        auVar59._8_4_ = SUB84(dVar71,0);
        auVar59._0_8_ = dVar63;
        uVar72 = (undefined4)((ulonglong)dVar71 >> 0x20);
        auVar59._12_4_ = uVar72;
        auVar50._8_4_ = SUB84(dVar71,0);
        auVar50._0_8_ = dVar63;
        auVar50._12_4_ = uVar72;
        auVar38 = blendpd(auVar50,auVar75,2);
        auVar60._0_8_ = auVar59._8_8_ * auVar55._0_8_ - auVar55._8_8_ * dVar63;
        auVar60._8_8_ = auVar75._0_8_ * auVar55._8_8_ - dVar12 * dVar71;
        auVar42._8_4_ = SUB84(auVar60._8_8_,0);
        auVar42._0_8_ = auVar60._0_8_;
        auVar42._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
        auVar55 = blendpd(auVar55,auVar58,2);
        auVar51._0_8_ = auVar38._0_8_ * dVar12 - auVar55._0_8_ * auVar75._0_8_;
        auVar51._8_8_ = auVar38._8_8_ * auVar58._8_8_ - auVar55._8_8_ * auVar75._8_8_;
        auVar58 = blendpd(auVar60,auVar51,2);
        dVar13 = *(double *)(pFVar37 + 0x28);
        dVar12 = *(double *)&pFVar37[0x30].field_0x0;
        *pdVar36 = dVar63 * dVar18 + dVar17 + auVar42._8_8_ + *(double *)&pFVar37[0x20].field_0x0;
        pdVar36[1] = dVar71 * dVar18 + dVar3 + auVar51._0_8_ + dVar13;
        pdVar36[2] = auVar75._0_8_ * dVar18 + dVar16 + auVar58._0_8_ + dVar12;
        pdVar36 = pdVar36 + 3;
      }
      uVar28 = uVar28 + 1;
      lVar33 = lVar33 + 0x28;
    } while ((int)uVar28 < *piVar35);
  }
  piVar35 = &(this->Boxes).ArrayNum;
  if ((int)uVar29 < *piVar35) {
    lVar33 = (longlong)(int)uVar29 * 0x60;
    do {
      uVar31 = ~uVar29 >> 0x1f;
      uVar28 = 0;
      if ((int)uVar29 < (this->Boxes).ArrayNum) {
        uVar28 = uVar31;
      }
      if ((uVar28 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar28 = *(uint *)((this->Boxes).AllocatorInstance.Data + lVar33 + 0x58);
      uVar30 = 0;
      if ((int)uVar28 < param_2->ArrayNum) {
        uVar30 = ~uVar28 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar37 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar28 * 0x60;
      uVar28 = 0;
      if ((int)uVar29 < (this->Boxes).ArrayNum) {
        uVar28 = uVar31;
      }
      if ((uVar28 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      auVar58 = *(undefined1 (*) [16])(pFVar37 + 0x10);
      pFVar5 = (this->Boxes).AllocatorInstance.Data;
      auVar38 = *(undefined1 (*) [16])pFVar37;
      dVar17 = *(double *)(pFVar37 + 0x18);
      pFVar2 = pFVar5 + lVar33;
      dVar12 = *(double *)(pFVar5 + lVar33 + 0x10) * *(double *)&pFVar37[0x50].field_0x0;
      dVar13 = *(double *)(pFVar37 + 0x58) * 0.0;
      uVar28 = 0;
      if ((int)uVar29 < (this->Boxes).ArrayNum) {
        uVar28 = uVar31;
      }
      dVar16 = *(double *)&pFVar37[0x40].field_0x0 * *(double *)pFVar2;
      dVar18 = *(double *)(pFVar37 + 0x48) * *(double *)(pFVar2 + 8);
      uVar72 = (undefined4)((ulonglong)dVar18 >> 0x20);
      auVar55 = *(undefined1 (*) [16])pFVar37;
      auVar68._8_4_ = SUB84(dVar18,0);
      auVar68._0_8_ = dVar16;
      auVar68._12_4_ = uVar72;
      dVar3 = auVar58._0_8_;
      auVar54 = blendpd(auVar55,auVar58,2);
      auVar69._0_8_ = auVar68._8_8_ * auVar55._0_8_ - auVar55._8_8_ * dVar16;
      auVar69._8_8_ = dVar12 * auVar55._8_8_ - dVar3 * dVar18;
      auVar43._8_4_ = SUB84(dVar18,0);
      auVar43._0_8_ = dVar16;
      auVar43._12_4_ = uVar72;
      auVar15._8_4_ = SUB84(dVar13,0);
      auVar15._0_8_ = dVar12;
      auVar15._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar55 = blendpd(auVar43,auVar15,2);
      auVar44._0_8_ = auVar55._0_8_ * dVar3 - auVar54._0_8_ * dVar12;
      auVar44._8_8_ = auVar55._8_8_ * auVar58._8_8_ - auVar54._8_8_ * dVar13;
      auVar55 = blendpd(auVar69,auVar44,2);
      dVar63 = auVar69._8_8_ + auVar69._8_8_;
      dVar71 = auVar44._0_8_ + auVar44._0_8_;
      uVar72 = (undefined4)((ulonglong)dVar71 >> 0x20);
      auVar70._0_8_ = auVar55._0_8_ + auVar55._0_8_;
      auVar70._8_8_ = auVar55._8_8_ + auVar55._8_8_;
      auVar61._8_4_ = SUB84(dVar71,0);
      auVar61._0_8_ = dVar63;
      auVar61._12_4_ = uVar72;
      auVar52._8_4_ = SUB84(dVar71,0);
      auVar52._0_8_ = dVar63;
      auVar52._12_4_ = uVar72;
      auVar55 = blendpd(auVar52,auVar70,2);
      auVar62._0_8_ = auVar61._8_8_ * auVar38._0_8_ - auVar38._8_8_ * dVar63;
      auVar62._8_8_ = auVar70._0_8_ * auVar38._8_8_ - dVar3 * dVar71;
      auVar45._8_4_ = SUB84(auVar62._8_8_,0);
      auVar45._0_8_ = auVar62._0_8_;
      auVar45._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
      auVar38 = blendpd(auVar38,auVar58,2);
      auVar53._0_8_ = auVar55._0_8_ * dVar3 - auVar38._0_8_ * auVar70._0_8_;
      auVar53._8_8_ = auVar55._8_8_ * auVar58._8_8_ - auVar38._8_8_ * auVar70._8_8_;
      auVar58 = blendpd(auVar62,auVar53,2);
      dVar13 = *(double *)&pFVar37[0x20].field_0x0;
      dVar18 = dVar71 * dVar17 + dVar18 + auVar53._0_8_ + *(double *)(pFVar37 + 0x28);
      dVar3 = *(double *)&pFVar37[0x30].field_0x0;
      if ((uVar28 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->Boxes).AllocatorInstance.Data;
      auVar21._8_4_ = SUB84(dVar18,0);
      auVar21._0_8_ = dVar63 * dVar17 + dVar16 + auVar45._8_8_ + dVar13;
      auVar21._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + lVar33) = auVar21;
      *(double *)(pFVar2 + lVar33 + 0x10) = auVar70._0_8_ * dVar17 + dVar12 + auVar58._0_8_ + dVar3;
      uVar28 = 0;
      if ((int)uVar29 < (this->Boxes).ArrayNum) {
        uVar28 = uVar31;
      }
      if ((uVar28 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->Boxes).AllocatorInstance.Data;
      dVar13 = *(double *)&pFVar37->field_0x0;
      dVar17 = *(double *)(pFVar37 + 8);
      auVar58 = *(undefined1 (*) [16])(pFVar37 + 0x10);
      pFVar37 = pFVar2 + lVar33 + 0x30;
      dVar3 = *(double *)pFVar37;
      dVar16 = *(double *)(pFVar37 + 8);
      pFVar2 = pFVar2 + lVar33 + 0x20;
      dVar18 = *(double *)pFVar2;
      dVar63 = *(double *)(pFVar2 + 8);
      dVar12 = auVar58._8_8_;
      auVar46._8_4_ = auVar58._8_4_;
      auVar46._0_8_ = dVar12;
      auVar46._12_4_ = auVar58._12_4_;
      uVar28 = 0;
      if ((int)uVar29 < (this->Boxes).ArrayNum) {
        uVar28 = uVar31;
      }
      dVar14 = auVar58._0_8_;
      dVar71 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
      dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      auVar47._8_4_ = auVar58._0_4_;
      auVar47._0_8_ = dVar14;
      auVar47._12_4_ = auVar58._4_4_;
      dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar24 = dVar13 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar46._8_8_ * dVar63 +
               dVar17 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar47._8_8_ * dVar18 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar22 = dVar13 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar12 * dVar16 +
               dVar17 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar14 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      if ((uVar28 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar37 = (this->Boxes).AllocatorInstance.Data;
      uVar29 = uVar29 + 1;
      auVar23._8_4_ = SUB84(dVar24,0);
      auVar23._0_8_ =
           dVar13 * dVar16 * dVar71 + dVar12 * dVar18 + dVar17 * dVar3 * dVar8 +
           dVar14 * dVar63 * dVar10;
      auVar23._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      *(undefined1 (*) [16])(pFVar37 + lVar33 + 0x20) = auVar23;
      auVar58._8_4_ = SUB84(dVar22,0);
      auVar58._0_8_ =
           dVar13 * dVar63 * dVar7 + dVar12 * dVar3 + dVar17 * dVar18 * dVar9 +
           dVar14 * dVar16 * dVar11;
      auVar58._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      *(undefined1 (*) [16])(pFVar37 + lVar33 + 0x30) = auVar58;
      lVar33 = lVar33 + 0x60;
    } while ((int)uVar29 < *piVar35);
  }
  return;
}

// AppendUnique @ 144649f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FClothCollisionData::AppendUnique(FClothCollisionData *this,FClothCollisionData *param_1)

{
  int *piVar1;
  FClothCollisionPrim_Convex *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FClothCollisionPrim_Convex *pFVar11;
  FClothCollisionPrim_Box *pFVar12;
  FClothCollisionPrim_Box *pFVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStackY_98 [32];
  undefined1 local_68;
  undefined1 local_67 [7];
  ForAnyElementType local_60;
  int local_58 [2];
  undefined1 local_50 [2] [16];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  uVar14 = (param_1->Spheres).ArrayNum;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  if ((int)uVar14 < 1) {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&local_60,local_58,local_58 + 1);
  }
  iVar8 = (this->Spheres).ArrayNum;
  uVar14 = (param_1->Spheres).ArrayNum + iVar8;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar1 = &(this->Spheres).ArrayMax;
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar14,(ForAnyElementType *)this,iVar8,piVar1);
  }
  iVar8 = (param_1->Spheres).ArrayNum;
  uVar14 = 0;
  if (0 < iVar8) {
    lVar15 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar14 < iVar8) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = TArray<FClothCollisionPrim_Sphere,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<FClothCollisionPrim_Sphere_const_&>
                        (&this->Spheres,
                         (FClothCollisionPrim_Sphere *)
                         ((param_1->Spheres).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x20))
      ;
      uVar7 = 0;
      if ((int)uVar14 < local_58[0]) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar14 = uVar14 + 1;
      *(int *)(local_60.Data + lVar15) = iVar8;
      lVar15 = lVar15 + 4;
      iVar8 = (param_1->Spheres).ArrayNum;
    } while ((int)uVar14 < iVar8);
  }
  iVar8 = (this->SphereConnections).ArrayNum;
  uVar14 = (param_1->SphereConnections).ArrayNum + iVar8;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if ((this->SphereConnections).ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar14,&(this->SphereConnections).AllocatorInstance,iVar8,
               &(this->SphereConnections).ArrayMax);
  }
  iVar8 = (param_1->SphereConnections).ArrayNum;
  uVar14 = 0;
  if (0 < iVar8) {
    lVar15 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar14 < iVar8) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->SphereConnections).AllocatorInstance.Data;
      local_50[0] = *(undefined1 (*) [16])(pFVar3 + lVar15);
      uVar7 = local_50[0]._0_4_;
      pFVar3 = pFVar3 + lVar15 + 0x10;
      local_50[1]._0_8_ = *(undefined8 *)pFVar3;
      local_50[1]._8_8_ = *(undefined8 *)(pFVar3 + 8);
      if ((((-1 < (int)uVar7) && ((int)uVar7 < local_58[0])) && (-1 < local_50[0]._0_8_)) &&
         (local_50[0]._4_4_ < local_58[0])) {
        uVar9 = 0;
        if ((int)uVar7 < local_58[0]) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar5 = local_50[0]._4_4_;
        lVar10 = (longlong)(int)local_50[0]._4_4_;
        local_50[0]._0_4_ = *(undefined4 *)(local_60.Data + (longlong)(int)uVar7 * 4);
        uVar7 = 0;
        if ((int)uVar5 < local_58[0]) {
          uVar7 = (uint)~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_50[0]._4_4_ = *(int *)(local_60.Data + lVar10 * 4);
      }
      TArray<FClothCollisionPrim_SphereConnection,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FClothCollisionPrim_SphereConnection>
                (&this->SphereConnections,(FClothCollisionPrim_SphereConnection *)local_50);
      iVar8 = (param_1->SphereConnections).ArrayNum;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x20;
    } while ((int)uVar14 < iVar8);
  }
  iVar8 = (this->Convexes).ArrayNum;
  uVar14 = (param_1->Convexes).ArrayNum + iVar8;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if ((this->Convexes).ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar14,&(this->Convexes).AllocatorInstance,iVar8,&(this->Convexes).ArrayMax);
  }
  iVar8 = (param_1->Convexes).ArrayNum;
  pFVar11 = (FClothCollisionPrim_Convex *)(param_1->Convexes).AllocatorInstance.Data;
  pFVar2 = pFVar11 + iVar8;
  while( true ) {
    if ((param_1->Convexes).ArrayNum != iVar8) {
      `TCheckedPointerIterator<FClothCollisionPrim_Convex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_68);
    }
    if (pFVar11 == pFVar2) break;
    TArray<FClothCollisionPrim_Convex,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FClothCollisionPrim_Convex_const_&>(&this->Convexes,pFVar11);
    pFVar11 = pFVar11 + 1;
  }
  iVar8 = (this->Boxes).ArrayNum;
  uVar14 = (param_1->Boxes).ArrayNum + iVar8;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if ((this->Boxes).ArrayMax < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar14,&(this->Boxes).AllocatorInstance,iVar8,&(this->Boxes).ArrayMax);
  }
  iVar8 = (param_1->Boxes).ArrayNum;
  pFVar12 = (FClothCollisionPrim_Box *)(param_1->Boxes).AllocatorInstance.Data;
  pFVar13 = pFVar12 + iVar8;
  while( true ) {
    if ((param_1->Boxes).ArrayNum != iVar8) {
      `TCheckedPointerIterator<FClothCollisionPrim_Box_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_67);
    }
    if (pFVar12 == pFVar13) break;
    TArray<FClothCollisionPrim_Box,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FClothCollisionPrim_Box_const_&>(&this->Boxes,pFVar12);
    pFVar12 = pFVar12 + 1;
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

// Reset @ 14464c540

void __thiscall FClothCollisionData::Reset(FClothCollisionData *this)

{
  int *piVar1;
  int iVar2;
  FClothCollisionPrim_Convex *pFVar3;
  
  (this->Spheres).ArrayNum = 0;
  if ((this->Spheres).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,&(this->Spheres).ArrayMax);
  }
  (this->SphereConnections).ArrayNum = 0;
  if ((this->SphereConnections).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->SphereConnections).AllocatorInstance,0,
               &(this->SphereConnections).ArrayMax);
  }
  piVar1 = &(this->Convexes).ArrayMax;
  pFVar3 = (FClothCollisionPrim_Convex *)(this->Convexes).AllocatorInstance.Data;
  iVar2 = (this->Convexes).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FClothCollisionPrim_Convex,int>(pFVar3,iVar2);
    (this->Convexes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->Convexes).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FClothCollisionPrim_Convex,int>(pFVar3,iVar2);
    (this->Convexes).ArrayNum = 0;
  }
  (this->Boxes).ArrayNum = 0;
  if ((this->Boxes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->Boxes).AllocatorInstance,0,&(this->Boxes).ArrayMax);
  }
  return;
}

