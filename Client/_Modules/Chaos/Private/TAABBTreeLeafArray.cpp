// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 27

// OverlapFast<Chaos::TSpatialVisitor<int,double>_> @ 143c37f20

bool __thiscall
Chaos::TAABBTreeLeafArray<int,0,float>::OverlapFast<Chaos::TSpatialVisitor<int,double>_>
          (TAABBTreeLeafArray<int,0,float> *this,TAABB<double,3> *param_1,
          TSpatialVisitor<int,double> *param_2)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  int iVar31;
  FScriptContainerElement *pFVar32;
  code *pcVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  bool bVar40;
  undefined1 uVar41;
  char cVar42;
  int iVar43;
  uint uVar44;
  int iVar45;
  TAABB<double,3> *pTVar46;
  longlong lVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  int iVar51;
  uint uVar52;
  longlong lVar53;
  longlong lVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  longlong local_220;
  longlong local_218;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined1 local_1b0 [16];
  double local_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined1 local_178 [16];
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  undefined1 local_130 [16];
  double local_120;
  double local_f0;
  
  iVar31 = (this->Elems).ArrayNum;
  iVar43 = (int)(iVar31 + (iVar31 >> 0x1f & 3U)) >> 2;
  if (0 < iVar43) {
    local_218 = 0;
    iVar51 = 0;
    local_220 = 0;
    lVar47 = 0x38;
    uVar52 = 3;
    do {
      uVar50 = ~uVar52 >> 0x1f;
      uVar49 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar49 = uVar50;
      }
      if ((uVar49 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      uVar48 = ~(uVar52 - 3) >> 0x1f;
      fVar2 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 0x20);
      uVar49 = 0;
      if ((int)(uVar52 - 1) < (this->Elems).ArrayNum) {
        uVar49 = uVar48;
      }
      if ((uVar49 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar3 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 4);
      uVar49 = 0;
      if ((int)(uVar52 - 2) < (this->Elems).ArrayNum) {
        uVar49 = uVar48;
      }
      if ((uVar49 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      uVar49 = uVar52 - 3;
      fVar4 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + -0x18);
      uVar44 = 0;
      if ((int)uVar49 < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar5 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + -0x34);
      uVar44 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar44 = uVar50;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar6 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 0x2c);
      uVar44 = 0;
      if ((int)(uVar52 - 1) < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar7 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 0x10);
      uVar44 = 0;
      if ((int)(uVar52 - 2) < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar8 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + -0xc);
      uVar44 = 0;
      if ((int)uVar49 < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar9 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + -0x28);
      uVar44 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar44 = uVar50;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar10 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 0x24);
      uVar44 = 0;
      if ((int)(uVar52 - 1) < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar11 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 8);
      uVar44 = 0;
      if ((int)(uVar52 - 2) < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar12 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + -0x14);
      uVar44 = 0;
      if ((int)uVar49 < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar13 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + -0x30);
      uVar44 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar44 = uVar50;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar14 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 0x30);
      uVar44 = 0;
      if ((int)(uVar52 - 1) < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar15 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 0x14);
      uVar44 = 0;
      if ((int)(uVar52 - 2) < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar16 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + -8);
      uVar44 = 0;
      if ((int)uVar49 < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar17 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + -0x24);
      uVar44 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar44 = uVar50;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar18 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 0x28);
      uVar44 = 0;
      if ((int)(uVar52 - 1) < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar19 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 0xc);
      uVar44 = 0;
      if ((int)(uVar52 - 2) < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar20 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + -0x10);
      uVar44 = 0;
      if ((int)uVar49 < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar21 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + -0x2c);
      uVar44 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar44 = uVar50;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar22 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 0x34);
      uVar44 = 0;
      if ((int)(uVar52 - 1) < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar23 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + 0x18);
      uVar44 = 0;
      if ((int)(uVar52 - 2) < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      fVar24 = *(float *)((this->Elems).AllocatorInstance.Data + lVar47 + -4);
      uVar44 = 0;
      if ((int)uVar49 < (this->Elems).ArrayNum) {
        uVar44 = uVar48;
      }
      if ((uVar44 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      dVar25 = *(double *)&(param_1->MMax).field_0x8;
      dVar26 = *(double *)&param_1->MMax;
      pFVar32 = (this->Elems).AllocatorInstance.Data;
      dVar27 = *(double *)&(param_1->MMin).field_0x8;
      dVar28 = *(double *)&param_1->MMin;
      dVar29 = *(double *)&(param_1->MMax).field_0x10;
      dVar30 = *(double *)&(param_1->MMin).field_0x10;
      auVar55._8_4_ = SUB84(dVar26,0);
      auVar55._0_8_ = dVar26;
      auVar55._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      auVar56._8_8_ = -(ulonglong)(auVar55._8_8_ < (double)fVar4);
      auVar56._0_8_ = -(ulonglong)(dVar26 < (double)fVar5);
      auVar59._8_8_ = -(ulonglong)(dVar26 < (double)fVar2);
      auVar59._0_8_ = -(ulonglong)(dVar26 < (double)fVar3);
      lVar53 = -(ulonglong)(dVar25 < (double)fVar10);
      lVar54 = -(ulonglong)(dVar25 < (double)fVar12);
      auVar60._8_8_ = -(ulonglong)((double)fVar16 < dVar27);
      auVar60._0_8_ = -(ulonglong)((double)fVar17 < dVar27);
      auVar34._8_4_ = (int)lVar54;
      auVar34._0_8_ = -(ulonglong)(dVar25 < (double)fVar13);
      auVar34._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
      lVar54 = -(ulonglong)((double)fVar8 < dVar28);
      auVar35._8_4_ = (int)lVar54;
      auVar35._0_8_ = -(ulonglong)((double)fVar9 < dVar28);
      auVar35._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
      auVar61._8_8_ = -(ulonglong)((double)fVar14 < dVar27);
      auVar61._0_8_ = -(ulonglong)((double)fVar15 < dVar27);
      auVar38._8_4_ = (int)lVar53;
      auVar38._0_8_ = -(ulonglong)(dVar25 < (double)fVar11);
      auVar38._12_4_ = (int)((ulonglong)lVar53 >> 0x20);
      auVar57._8_8_ = -(ulonglong)((double)fVar24 < dVar30);
      auVar57._0_8_ = -(ulonglong)((double)*(float *)(pFVar32 + lVar47 + -0x20) < dVar30);
      lVar53 = -(ulonglong)(dVar29 < (double)fVar20);
      auVar36._8_4_ = (int)lVar53;
      auVar36._0_8_ = -(ulonglong)(dVar29 < (double)fVar21);
      auVar36._12_4_ = (int)((ulonglong)lVar53 >> 0x20);
      lVar53 = -(ulonglong)((double)fVar6 < dVar28);
      auVar37._8_4_ = (int)lVar53;
      auVar37._0_8_ = -(ulonglong)((double)fVar7 < dVar28);
      auVar37._12_4_ = (int)((ulonglong)lVar53 >> 0x20);
      uVar50 = movmskpd(uVar50,auVar60 | auVar34 | auVar56 | auVar35 | auVar57 | auVar36);
      auVar58._8_8_ = -(ulonglong)((double)fVar22 < dVar30);
      auVar58._0_8_ = -(ulonglong)((double)fVar23 < dVar30);
      lVar53 = -(ulonglong)(dVar29 < (double)fVar18);
      auVar39._8_4_ = (int)lVar53;
      auVar39._0_8_ = -(ulonglong)(dVar29 < (double)fVar19);
      auVar39._12_4_ = (int)((ulonglong)lVar53 >> 0x20);
      iVar45 = movmskpd((int)pFVar32,auVar61 | auVar38 | auVar59 | auVar37 | auVar58 | auVar39);
      lVar53 = local_220;
      do {
        if (((uVar50 | iVar45 << 2) >> (uVar49 + iVar51 & 0x1f) & 1) == 0) {
          uVar48 = 0;
          if ((int)uVar49 < (this->Elems).ArrayNum) {
            uVar48 = ~uVar49 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar33 = (code *)swi(3);
            uVar41 = (*pcVar33)();
            return (bool)uVar41;
          }
          pFVar32 = (this->Elems).AllocatorInstance.Data;
          local_1b8 = *(undefined4 *)(pFVar32 + lVar53);
          local_188 = (double)*(float *)(pFVar32 + lVar53 + 0x18);
          local_1b4 = 1;
          local_1a0 = (double)*(float *)(pFVar32 + lVar53 + 0xc);
          dVar25 = (double)(float)((ulonglong)*(undefined8 *)(pFVar32 + lVar53 + 4) >> 0x20);
          local_198._8_4_ = SUB84((double)*(float *)(pFVar32 + lVar53 + 0x14),0);
          local_198._0_8_ = (double)*(float *)(pFVar32 + lVar53 + 0x10);
          local_198._12_4_ = (int)((ulonglong)(double)*(float *)(pFVar32 + lVar53 + 0x14) >> 0x20);
          local_1b0._8_4_ = SUB84(dVar25,0);
          local_1b0._0_8_ = (double)(float)*(undefined8 *)(pFVar32 + lVar53 + 4);
          local_1b0._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
          local_f0 = local_188;
          cVar42 = (**(code **)((longlong)*param_2->Visitor + 8))(param_2->Visitor,&local_1b8);
          if (cVar42 == '\0') {
            return false;
          }
        }
        uVar49 = uVar49 + 1;
        lVar53 = lVar53 + 0x1c;
      } while ((int)(uVar49 + iVar51) < 4);
      uVar52 = uVar52 + 4;
      local_220 = local_220 + 0x70;
      local_218 = local_218 + 1;
      iVar51 = iVar51 + -4;
      lVar47 = lVar47 + 0x70;
    } while (local_218 < iVar43);
  }
  uVar52 = iVar43 * 4;
  if ((int)uVar52 < iVar31) {
    lVar47 = (longlong)(int)uVar52;
    lVar53 = lVar47 * 0x1c;
    do {
      uVar49 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar49 = ~uVar52 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar40)) {
        pcVar33 = (code *)swi(3);
        uVar41 = (*pcVar33)();
        return (bool)uVar41;
      }
      pFVar32 = (this->Elems).AllocatorInstance.Data;
      lVar54 = 0;
      pTVar46 = param_1;
      do {
        pdVar1 = (double *)(((longlong)&param_1->MMax - (longlong)param_1) + (longlong)pTVar46);
        if ((*pdVar1 <= (double)*(float *)(pFVar32 + lVar54 + lVar53 + 4) &&
             (double)*(float *)(pFVar32 + lVar54 + lVar53 + 4) != *pdVar1) ||
           ((double)*(float *)(pFVar32 + lVar54 + lVar53 + 0x10) < *(double *)&pTVar46->MMin))
        goto LAB_143c38bd8;
        lVar54 = lVar54 + 4;
        pTVar46 = (TAABB<double,3> *)&(pTVar46->MMin).field_0x8;
      } while (lVar54 < 0xc);
      dVar25 = (double)(float)((ulonglong)*(undefined8 *)(pFVar32 + lVar53 + 4) >> 0x20);
      local_180 = *(undefined4 *)(pFVar32 + lVar53);
      local_17c = 1;
      local_178._8_4_ = SUB84(dVar25,0);
      local_178._0_8_ = (double)(float)*(undefined8 *)(pFVar32 + lVar53 + 4);
      local_178._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      local_150 = (double)*(float *)(pFVar32 + lVar53 + 0x18);
      local_160._0_8_ = (double)*(float *)(pFVar32 + lVar53 + 0x10);
      local_168 = (double)*(float *)(pFVar32 + lVar53 + 0xc);
      local_160._8_8_ = (double)*(float *)(pFVar32 + lVar53 + 0x14);
      local_130 = local_160;
      local_120 = local_150;
      cVar42 = (**(code **)((longlong)*param_2->Visitor + 8))(param_2->Visitor,&local_180);
      if (cVar42 == '\0') {
        return false;
      }
LAB_143c38bd8:
      uVar52 = uVar52 + 1;
      lVar47 = lVar47 + 1;
      lVar53 = lVar53 + 0x1c;
    } while (lVar47 < iVar31);
  }
  return true;
}

// TAABBTreeLeafArray<int,0,float> @ 143c42c30

TAABBTreeLeafArray<int,0,float> * __thiscall
Chaos::TAABBTreeLeafArray<int,0,float>::TAABBTreeLeafArray<int,0,float>
          (TAABBTreeLeafArray<int,0,float> *this,TAABBTreeLeafArray<int,0,float> *param_1)

{
  int *piVar1;
  int iVar2;
  TPayloadBoundsElement<int,float> *pTVar3;
  
  (this->Elems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Elems).ArrayMax;
  iVar2 = (param_1->Elems).ArrayNum;
  pTVar3 = (TPayloadBoundsElement<int,float> *)(param_1->Elems).AllocatorInstance.Data;
  (this->Elems).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<Chaos::TPayloadBoundsElement<int,float>,Chaos::TPayloadBoundsElement<int,float>,int>
              ((this->Elems).AllocatorInstance.Data,pTVar3,iVar2);
  }
  this->bDirtyLeaf = param_1->bDirtyLeaf;
  return this;
}

// AddElement @ 143c56d30

void __thiscall
Chaos::TAABBTreeLeafArray<int,0,float>::AddElement
          (TAABBTreeLeafArray<int,0,float> *this,TPayloadBoundsElement<int,float> *param_1)

{
  int *piVar1;
  TPayloadBoundsElement<int,float> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar2 = (TPayloadBoundsElement<int,float> *)(this->Elems).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Elems).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Elems).ArrayNum;
  piVar1 = &(this->Elems).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,(ForAnyElementType *)this,piVar1);
  }
  (this->Elems).ArrayNum = iVar5 + 1;
  pFVar6 = (this->Elems).AllocatorInstance.Data + (longlong)iVar5 * 0x1c;
  *(int *)pFVar6 = param_1->Payload;
  *(undefined8 *)(pFVar6 + 4) = *(undefined8 *)&(param_1->Bounds).MMin;
  *(undefined4 *)(pFVar6 + 0xc) = *(undefined4 *)&(param_1->Bounds).MMin.field_0x8;
  *(undefined8 *)(pFVar6 + 0x10) = *(undefined8 *)&(param_1->Bounds).MMax;
  *(undefined4 *)(pFVar6 + 0x18) = *(undefined4 *)&(param_1->Bounds).MMax.field_0x8;
  this->bDirtyLeaf = true;
  return;
}

// DebugDrawLeaf @ 143c63e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TAABBTreeLeafArray<int,0,float>::DebugDrawLeaf
          (TAABBTreeLeafArray<int,0,float> *this,ISpacialDebugDrawInterface<float> *param_1,
          FLinearColor *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float local_94;
  
  fVar2 = __real_3f800000;
  local_98 = -3.4028235e+38;
  local_94 = -3.4028235e+38;
  local_a8 = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
  uStack_a0 = _UNK_150a9e6b8;
  fVar7 = (float)(this->Elems).ArrayNum * __real_3dcccccd;
  fVar6 = __real_3f800000 - fVar7;
  fVar8 = fVar7 * FLinearColor::Red.field0_0x0._s_0.R +
          fVar6 * FLinearColor::Green.field0_0x0._s_0.R;
  fVar9 = fVar7 * FLinearColor::Red.field0_0x0._s_0.G +
          fVar6 * FLinearColor::Green.field0_0x0._s_0.G;
  fVar7 = fVar7 * FLinearColor::Red.field0_0x0._s_0.B +
          fVar6 * FLinearColor::Green.field0_0x0._s_0.B;
  local_d8 = fVar8;
  local_d4 = fVar9;
  local_d0 = fVar7;
  (**(code **)((longlong)*param_1 + 8))(param_1,&local_a8,&local_d8);
  fVar6 = __real_3f000000;
  pFVar4 = (this->Elems).AllocatorInstance.Data;
  iVar1 = (this->Elems).ArrayNum;
  pFVar3 = pFVar4 + 0x14;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x1c;
  while( true ) {
    if ((this->Elems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,float>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    local_cc = (*(float *)(pFVar3 + -4) - *(float *)(pFVar3 + -0x10)) * fVar6 +
               *(float *)(pFVar3 + -0x10);
    local_c8 = (*(float *)pFVar3 - *(float *)(pFVar3 + -0xc)) * fVar6 + *(float *)(pFVar3 + -0xc);
    local_c4 = (*(float *)(pFVar3 + 4) - *(float *)(pFVar3 + -8)) * fVar6 + *(float *)(pFVar3 + -8);
    local_c0 = (uStack_a0._4_4_ - (float)local_a8) * fVar6 + (float)local_a8;
    local_bc = (local_98 - local_a8._4_4_) * fVar6 + local_a8._4_4_;
    local_b8 = (local_94 - (float)uStack_a0) * fVar6 + (float)uStack_a0;
    local_d8 = fVar8;
    local_d4 = fVar9;
    local_d0 = fVar7;
    (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_c0,&local_cc,&local_d8,param_3);
    local_b4 = 0x3f800000;
    local_b0 = 0x3e4ccccd;
    local_ac = 0x3e4ccccd;
    (**(code **)((longlong)*param_1 + 8))(param_1,pFVar3 + -0x10,&local_b4,fVar2);
    pFVar4 = pFVar4 + 0x1c;
    pFVar3 = pFVar3 + 0x1c;
  }
  return;
}

// RemoveElement @ 143c6f9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::TAABBTreeLeafArray<int,0,float>::RemoveElement
          (TAABBTreeLeafArray<int,0,float> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar7 = (this->Elems).ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->Elems).ArrayNum;
      if (*(int *)((this->Elems).AllocatorInstance.Data + lVar10) == param_1) {
        uVar6 = 0;
        if ((int)uVar9 < iVar7) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->Elems).ArrayNum;
        pFVar3 = (this->Elems).AllocatorInstance.Data;
        iVar7 = iVar2 + ~uVar9;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar9 * 0x1c,pFVar3 + (longlong)(iVar2 - iVar7) * 0x1c,
                  (longlong)iVar7 * 0x1c);
        }
        piVar1 = &(this->Elems).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,(ForAnyElementType *)this,(this->Elems).ArrayNum,&(this->Elems).ArrayMax);
        break;
      }
      if (uVar9 == iVar7 - 1U) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181246422089989683>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                           ,0x1cd,"Idx != Elems.Num() - 1");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (2 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Chaos::TAABBTreeLeafArray<int,0,float>::RemoveElement(int)___ptr64'
                      ::__l11::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
      }
      iVar7 = (this->Elems).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x1c;
    } while ((int)uVar9 < iVar7);
  }
  this->bDirtyLeaf = true;
  return;
}

// UpdateElement @ 143c7cb40

void __thiscall
Chaos::TAABBTreeLeafArray<int,0,float>::UpdateElement
          (TAABBTreeLeafArray<int,0,float> *this,int *param_1,TAABB<float,3> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  if (param_3) {
    iVar8 = (this->Elems).ArrayNum;
    uVar5 = 0;
    if (0 < iVar8) {
      lVar6 = 0;
      do {
        uVar7 = ~uVar5 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar5 < iVar8) {
          uVar4 = uVar7;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar8 = (this->Elems).ArrayNum;
        if (*(int *)((this->Elems).AllocatorInstance.Data + lVar6) == *param_1) {
          uVar4 = 0;
          if ((int)uVar5 < iVar8) {
            uVar4 = uVar7;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->Elems).AllocatorInstance.Data;
          *(undefined8 *)(pFVar1 + (longlong)(int)uVar5 * 0x1c + 4) = *(undefined8 *)&param_2->MMin;
          *(undefined4 *)(pFVar1 + (longlong)(int)uVar5 * 0x1c + 0xc) =
               *(undefined4 *)&(param_2->MMin).field_0x8;
          *(undefined8 *)(pFVar1 + (longlong)(int)uVar5 * 0x1c + 0x10) =
               *(undefined8 *)&param_2->MMax;
          *(undefined4 *)(pFVar1 + (longlong)(int)uVar5 * 0x1c + 0x18) =
               *(undefined4 *)&(param_2->MMax).field_0x8;
          uVar4 = 0;
          if ((int)uVar5 < (this->Elems).ArrayNum) {
            uVar4 = uVar7;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x1c;
      } while ((int)uVar5 < iVar8);
    }
    this->bDirtyLeaf = true;
  }
  return;
}

// UpdateElementWithoutDirty @ 143c7ccd0

void __thiscall
Chaos::TAABBTreeLeafArray<int,0,float>::UpdateElementWithoutDirty
          (TAABBTreeLeafArray<int,0,float> *this,int *param_1,TAABB<float,3> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = (this->Elems).ArrayNum;
  uVar5 = 0;
  if (0 < iVar8) {
    lVar6 = 0;
    do {
      uVar7 = ~uVar5 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar5 < iVar8) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar8 = (this->Elems).ArrayNum;
      if (*(int *)((this->Elems).AllocatorInstance.Data + lVar6) == *param_1) {
        uVar4 = 0;
        if ((int)uVar5 < iVar8) {
          uVar4 = uVar7;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Elems).AllocatorInstance.Data;
        *(undefined8 *)(pFVar1 + (longlong)(int)uVar5 * 0x1c + 4) = *(undefined8 *)&param_2->MMin;
        *(undefined4 *)(pFVar1 + (longlong)(int)uVar5 * 0x1c + 0xc) =
             *(undefined4 *)&(param_2->MMin).field_0x8;
        *(undefined8 *)(pFVar1 + (longlong)(int)uVar5 * 0x1c + 0x10) = *(undefined8 *)&param_2->MMax
        ;
        *(undefined4 *)(pFVar1 + (longlong)(int)uVar5 * 0x1c + 0x18) =
             *(undefined4 *)&(param_2->MMax).field_0x8;
        uVar4 = 0;
        if ((int)uVar5 < (this->Elems).ArrayNum) {
          uVar4 = uVar7;
        }
        if (uVar4 != 0) {
          return;
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (!bVar3) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x1c;
    } while ((int)uVar5 < iVar8);
  }
  return;
}

// OverlapFast<Chaos::Private::FSimOverlapVisitor> @ 143ce9350

bool __thiscall
Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>::
OverlapFast<Chaos::Private::FSimOverlapVisitor>
          (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *this,
          TAABB<double,3> *param_1,FSimOverlapVisitor *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  FScriptContainerElement *pFVar29;
  FBroadPhaseContext *pFVar30;
  TGeometryParticleHandleImp<double,3,1> *pTVar31;
  code *pcVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  double dVar40;
  int *piVar41;
  bool bVar42;
  undefined1 uVar43;
  int iVar44;
  int iVar45;
  uint uVar46;
  TVector<double,3> *pTVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  longlong lVar52;
  longlong lVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int local_364;
  int local_360;
  longlong local_340;
  longlong local_338;
  longlong local_308;
  longlong local_300;
  
  lVar52 = 0;
  iVar45 = (this->Elems).ArrayNum;
  iVar44 = (int)(iVar45 + (iVar45 >> 0x1f & 3U)) >> 2;
  if (0 < iVar44) {
    lVar53 = 0xd0;
    local_308 = (longlong)iVar44;
    uVar56 = 3;
    local_300 = 0x138;
    local_364 = 2;
    iVar51 = 1;
    local_340 = 0x68;
    local_360 = 0;
    local_338 = 0;
    do {
      uVar55 = ~uVar56 >> 0x1f;
      uVar46 = 0;
      if ((int)uVar56 < (this->Elems).ArrayNum) {
        uVar46 = uVar55;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar1 = *(double *)((this->Elems).AllocatorInstance.Data + local_300 + 0x38);
      uVar54 = ~(uVar56 - 3) >> 0x1f;
      uVar46 = 0;
      if (local_364 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar2 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + 0x38);
      uVar46 = 0;
      if (iVar51 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar3 = *(double *)((this->Elems).AllocatorInstance.Data + local_340 + 0x38);
      uVar46 = 0;
      if (local_360 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar4 = *(double *)((this->Elems).AllocatorInstance.Data + local_338 + 0x38);
      uVar46 = 0;
      if ((int)uVar56 < (this->Elems).ArrayNum) {
        uVar46 = uVar55;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      iVar48 = uVar56 - 1;
      dVar5 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + 0xb8);
      uVar46 = 0;
      if (iVar48 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      iVar49 = uVar56 - 2;
      dVar40 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + 0x50);
      uVar46 = 0;
      if (iVar49 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      iVar50 = uVar56 - 3;
      dVar6 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + -0x18);
      uVar46 = 0;
      if (iVar50 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar7 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + -0x80);
      uVar46 = 0;
      if ((int)uVar56 < (this->Elems).ArrayNum) {
        uVar46 = uVar55;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar8 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + 0xa8);
      uVar46 = 0;
      if (iVar48 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar9 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + 0x40);
      uVar46 = 0;
      if (iVar49 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar10 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + -0x28);
      uVar46 = 0;
      if (iVar50 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar11 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + -0x90);
      uVar46 = 0;
      if ((int)uVar56 < (this->Elems).ArrayNum) {
        uVar46 = uVar55;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar12 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + 0xc0);
      uVar46 = 0;
      if (iVar48 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar13 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + 0x58);
      uVar46 = 0;
      if (iVar49 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar14 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + -0x10);
      uVar46 = 0;
      if (iVar50 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar15 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + -0x78);
      uVar46 = 0;
      if ((int)uVar56 < (this->Elems).ArrayNum) {
        uVar46 = uVar55;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar16 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + 0xb0);
      uVar46 = 0;
      if (iVar48 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar17 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + 0x48);
      uVar46 = 0;
      if (iVar49 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar18 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + -0x20);
      uVar46 = 0;
      if (iVar50 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar19 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + -0x88);
      uVar46 = 0;
      if ((int)uVar56 < (this->Elems).ArrayNum) {
        uVar46 = uVar55;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar20 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + 200);
      uVar46 = 0;
      if (iVar48 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      dVar21 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + 0x60);
      uVar46 = 0;
      if (iVar49 < (this->Elems).ArrayNum) {
        uVar46 = uVar54;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      iVar48 = (this->Elems).ArrayNum;
      dVar22 = *(double *)((this->Elems).AllocatorInstance.Data + lVar53 + -8);
      uVar46 = 0;
      if (iVar50 < iVar48) {
        uVar46 = uVar54;
      }
      if (uVar46 == 0) {
        iVar48 = 0x506106c8;
        bVar42 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar42) {
          pcVar32 = (code *)swi(3);
          uVar43 = (*pcVar32)();
          return (bool)uVar43;
        }
      }
      dVar23 = *(double *)&param_1->MMax;
      dVar24 = *(double *)&(param_1->MMax).field_0x8;
      dVar25 = *(double *)&param_1->MMin;
      dVar26 = *(double *)&(param_1->MMin).field_0x8;
      dVar27 = *(double *)&(param_1->MMin).field_0x10;
      dVar28 = *(double *)&(param_1->MMax).field_0x10;
      pFVar29 = (this->Elems).AllocatorInstance.Data;
      lVar57 = -(ulonglong)(dVar23 < dVar3);
      lVar58 = -(ulonglong)(dVar23 < dVar1);
      auVar63._8_4_ = SUB84(dVar24,0);
      auVar63._0_8_ = dVar24;
      auVar63._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      auVar64._8_8_ = -(ulonglong)(auVar63._8_8_ < dVar10);
      auVar64._0_8_ = -(ulonglong)(dVar24 < dVar11);
      lVar59 = -(ulonglong)(dVar24 < dVar8);
      auVar60._8_8_ = -(ulonglong)(dVar6 < dVar25);
      auVar60._0_8_ = -(ulonglong)(dVar7 < dVar25);
      auVar33._8_4_ = (int)lVar57;
      auVar33._0_8_ = -(ulonglong)(dVar23 < dVar4);
      auVar33._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
      lVar57 = -(ulonglong)(dVar14 < dVar26);
      auVar38._8_4_ = (int)lVar57;
      auVar38._0_8_ = -(ulonglong)(dVar15 < dVar26);
      auVar38._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
      auVar61._8_8_ = -(ulonglong)(dVar22 < dVar27);
      auVar61._0_8_ = -(ulonglong)(*(double *)(pFVar29 + lVar53 + -0x70) < dVar27);
      lVar57 = -(ulonglong)(dVar28 < dVar18);
      auVar34._8_4_ = (int)lVar57;
      auVar34._0_8_ = -(ulonglong)(dVar28 < dVar19);
      auVar34._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
      uVar46 = movmskpd(iVar48,auVar64 | auVar38 | auVar60 | auVar33 | auVar61 | auVar34);
      auVar65._8_8_ = -(ulonglong)(dVar5 < dVar25);
      auVar65._0_8_ = -(ulonglong)(dVar40 < dVar25);
      auVar35._8_4_ = (int)lVar58;
      auVar35._0_8_ = -(ulonglong)(dVar23 < dVar2);
      auVar35._12_4_ = (int)((ulonglong)lVar58 >> 0x20);
      auVar66._8_8_ = -(ulonglong)(dVar12 < dVar26);
      auVar66._0_8_ = -(ulonglong)(dVar13 < dVar26);
      auVar36._8_4_ = (int)lVar59;
      auVar36._0_8_ = -(ulonglong)(dVar24 < dVar9);
      auVar36._12_4_ = (int)((ulonglong)lVar59 >> 0x20);
      auVar62._8_8_ = -(ulonglong)(dVar20 < dVar27);
      auVar62._0_8_ = -(ulonglong)(dVar21 < dVar27);
      lVar57 = -(ulonglong)(dVar28 < dVar16);
      auVar37._8_4_ = (int)lVar57;
      auVar37._0_8_ = -(ulonglong)(dVar28 < dVar17);
      auVar37._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
      iVar48 = movmskpd((int)pFVar29,auVar65 | auVar35 | auVar66 | auVar36 | auVar62 | auVar37);
      uVar55 = 0;
      do {
        if (((uVar46 | iVar48 << 2) >> (uVar55 & 0x1f) & 1) == 0) {
          uVar54 = 0;
          if ((int)(uVar55 + iVar50) < (this->Elems).ArrayNum) {
            uVar54 = ~(uVar55 + (uVar56 - 3)) >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar42)) {
            pcVar32 = (code *)swi(3);
            uVar43 = (*pcVar32)();
            return (bool)uVar43;
          }
          pFVar29 = (this->Elems).AllocatorInstance.Data;
          if (SUB164(*(undefined1 (*) [16])(pFVar29 + lVar52 + 0x10),0) !=
              (param_2->ParticleUniqueIdx).Idx) {
            if (pFVar29[lVar52 + 0x34] != (FScriptContainerElement)0x0) {
              if ((((param_2->SimFilterData).Word2 & *(uint *)(pFVar29 + lVar52 + 0x28)) == 0) ||
                 (((param_2->SimFilterData).Word1 & *(uint *)(pFVar29 + lVar52 + 0x2c)) == 0)) {
                bVar42 = true;
              }
              else {
                bVar42 = false;
              }
              if (bVar42) goto LAB_143ce9f38;
            }
            pFVar30 = param_2->Context;
            pTVar31 = (param_2->AccelerationHandle).GeometryParticleHandle;
            piVar41 = &(pFVar30->Overlaps).ArrayMax;
            uVar39 = *(undefined8 *)(pFVar29 + lVar52 + 8);
            iVar49 = (pFVar30->Overlaps).ArrayNum;
            if (iVar49 == *piVar41) {
              iVar49 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,(ForAnyElementType *)pFVar30,piVar41);
            }
            (pFVar30->Overlaps).ArrayNum = iVar49 + 1;
            pFVar29 = (pFVar30->Overlaps).AllocatorInstance.Data;
            lVar57 = (longlong)iVar49;
            *(TGeometryParticleHandleImp<double,3,1> **)(pFVar29 + lVar57 * 0x18) = pTVar31;
            *(undefined8 *)(pFVar29 + lVar57 * 0x18 + 8) = uVar39;
            *(undefined4 *)(pFVar29 + lVar57 * 0x18 + 0x10) = 0;
            pFVar29[lVar57 * 0x18 + 0x14] = (FScriptContainerElement)0x1;
          }
        }
LAB_143ce9f38:
        uVar55 = uVar55 + 1;
        lVar52 = lVar52 + 0x68;
      } while ((int)uVar55 < 4);
      lVar53 = lVar53 + 0x1a0;
      iVar51 = iVar51 + 4;
      local_300 = local_300 + 0x1a0;
      local_364 = local_364 + 4;
      local_338 = local_338 + 0x1a0;
      uVar56 = uVar56 + 4;
      local_308 = local_308 + -1;
      local_340 = local_340 + 0x1a0;
      local_360 = local_360 + 4;
    } while (local_308 != 0);
  }
  uVar56 = iVar44 * 4;
  if ((int)uVar56 < iVar45) {
    lVar52 = (longlong)(int)uVar56 * 0x68;
    lVar53 = (longlong)iVar45 - (longlong)(int)uVar56;
    do {
      lVar57 = 0;
      uVar46 = 0;
      if ((int)uVar56 < (this->Elems).ArrayNum) {
        uVar46 = ~uVar56 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar42)) {
        pcVar32 = (code *)swi(3);
        uVar43 = (*pcVar32)();
        return (bool)uVar43;
      }
      pFVar29 = (this->Elems).AllocatorInstance.Data;
      if (*(int *)(pFVar29 + lVar52 + 0x10) != (param_2->ParticleUniqueIdx).Idx) {
        if (pFVar29[lVar52 + 0x34] != (FScriptContainerElement)0x0) {
          if ((((param_2->SimFilterData).Word2 & *(uint *)(pFVar29 + lVar52 + 0x28)) == 0) ||
             (((param_2->SimFilterData).Word1 & *(uint *)(pFVar29 + lVar52 + 0x2c)) == 0)) {
            bVar42 = true;
          }
          else {
            bVar42 = false;
          }
          if (bVar42) goto LAB_143cea222;
        }
        pTVar47 = &param_1->MMax;
        lVar58 = (lVar52 + 0x38) - (longlong)pTVar47;
        lVar59 = -(longlong)pTVar47;
        do {
          if ((*(double *)pTVar47 <= *(double *)(pFVar29 + lVar58 + (longlong)&pTVar47->field_0x0)
               && *(double *)(pFVar29 + lVar58 + (longlong)&pTVar47->field_0x0) !=
                  *(double *)pTVar47) ||
             (*(double *)(pFVar29 + lVar59 + 0x50 + lVar52 + (longlong)&pTVar47->field_0x0) <
              *(double *)((longlong)pTVar47 + lVar59 + (longlong)param_1))) goto LAB_143cea222;
          lVar57 = lVar57 + 1;
          pTVar47 = (TVector<double,3> *)&pTVar47->field_0x8;
        } while (lVar57 < 3);
        pFVar30 = param_2->Context;
        uVar39 = *(undefined8 *)(pFVar29 + lVar52 + 8);
        pTVar31 = (param_2->AccelerationHandle).GeometryParticleHandle;
        iVar45 = (pFVar30->Overlaps).ArrayNum;
        piVar41 = &(pFVar30->Overlaps).ArrayMax;
        if (iVar45 == *piVar41) {
          iVar45 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar30,piVar41);
        }
        (pFVar30->Overlaps).ArrayNum = iVar45 + 1;
        pFVar29 = (pFVar30->Overlaps).AllocatorInstance.Data;
        lVar57 = (longlong)iVar45;
        *(TGeometryParticleHandleImp<double,3,1> **)(pFVar29 + lVar57 * 0x18) = pTVar31;
        *(undefined4 *)(pFVar29 + lVar57 * 0x18 + 0x10) = 0;
        *(undefined8 *)(pFVar29 + lVar57 * 0x18 + 8) = uVar39;
        pFVar29[lVar57 * 0x18 + 0x14] = (FScriptContainerElement)0x1;
      }
LAB_143cea222:
      uVar56 = uVar56 + 1;
      lVar52 = lVar52 + 0x68;
      lVar53 = lVar53 + -1;
    } while (lVar53 != 0);
  }
  return true;
}

// OverlapFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_> @ 143ceb190

bool __thiscall
Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>::
OverlapFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
          (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *this,
          TAABB<double,3> *param_1,
          TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_2)

{
  TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  int iVar31;
  FScriptContainerElement *pFVar32;
  code *pcVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  longlong lVar40;
  bool bVar41;
  undefined1 uVar42;
  char cVar43;
  int iVar44;
  uint uVar45;
  int iVar46;
  TVector<double,3> *pTVar47;
  longlong lVar48;
  longlong lVar49;
  uint uVar50;
  uint uVar51;
  FAccelerationStructureHandle *pFVar52;
  longlong lVar53;
  int iVar54;
  uint uVar55;
  uint uVar56;
  longlong lVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  longlong local_240;
  longlong local_238;
  TGeometryParticle<double,3> *local_1c8;
  TGeometryParticleHandleImp<double,3,1> *pTStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined1 local_190;
  TGeometryParticle<double,3> *local_188;
  TGeometryParticleHandleImp<double,3,1> *pTStack_180;
  undefined8 local_178;
  undefined1 local_170 [16];
  undefined8 local_160;
  TGeometryParticle<double,3> *local_158;
  TGeometryParticleHandleImp<double,3,1> *pTStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 local_120;
  TGeometryParticle<double,3> *local_118;
  TGeometryParticleHandleImp<double,3,1> *pTStack_110;
  undefined8 local_108;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined8 local_f0;
  
  pTVar1 = &this->Elems;
  iVar31 = (this->Elems).ArrayNum;
  iVar44 = (int)(iVar31 + (iVar31 >> 0x1f & 3U)) >> 2;
  if (0 < iVar44) {
    local_238 = 0;
    iVar54 = 0;
    local_240 = 0;
    lVar49 = 0xd0;
    uVar55 = 3;
    do {
      uVar56 = ~uVar55 >> 0x1f;
      uVar50 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar50 = uVar56;
      }
      if ((uVar50 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      uVar51 = ~(uVar55 - 3) >> 0x1f;
      dVar2 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0xa0);
      uVar50 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar50 = uVar51;
      }
      if ((uVar50 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar3 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x38);
      uVar50 = 0;
      if ((int)(uVar55 - 2) < (this->Elems).ArrayNum) {
        uVar50 = uVar51;
      }
      if ((uVar50 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      uVar50 = uVar55 - 3;
      dVar4 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x30);
      uVar45 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar5 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x98);
      uVar45 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar45 = uVar56;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar6 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0xb8);
      uVar45 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar7 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x50);
      uVar45 = 0;
      if ((int)(uVar55 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar8 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x18);
      uVar45 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar9 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x80);
      uVar45 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar45 = uVar56;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar10 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0xa8);
      uVar45 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar11 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x40);
      uVar45 = 0;
      if ((int)(uVar55 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar12 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x28);
      uVar45 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar13 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x90);
      uVar45 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar45 = uVar56;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar14 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0xc0);
      uVar45 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar15 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x58);
      uVar45 = 0;
      if ((int)(uVar55 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar16 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x10);
      uVar45 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar17 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x78);
      uVar45 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar45 = uVar56;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar18 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0xb0);
      uVar45 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar19 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x48);
      uVar45 = 0;
      if ((int)(uVar55 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar20 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x20);
      uVar45 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar21 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x88);
      uVar45 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar45 = uVar56;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar22 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 200);
      uVar56 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar56 = uVar51;
      }
      if ((uVar56 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      iVar46 = (this->Elems).ArrayNum;
      dVar23 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x60);
      uVar56 = 0;
      if ((int)(uVar55 - 2) < iVar46) {
        uVar56 = uVar51;
      }
      if (uVar56 == 0) {
        iVar46 = 0x506109c0;
        bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar41) {
          pcVar33 = (code *)swi(3);
          uVar42 = (*pcVar33)();
          return (bool)uVar42;
        }
      }
      dVar24 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -8);
      uVar56 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar56 = uVar51;
      }
      if (uVar56 == 0) {
        iVar46 = 0x506109c0;
        bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar41) {
          pcVar33 = (code *)swi(3);
          uVar42 = (*pcVar33)();
          return (bool)uVar42;
        }
      }
      dVar25 = *(double *)&param_1->MMax;
      dVar26 = *(double *)&(param_1->MMax).field_0x8;
      dVar27 = *(double *)&param_1->MMin;
      dVar28 = *(double *)&(param_1->MMin).field_0x8;
      dVar29 = *(double *)&(param_1->MMin).field_0x10;
      dVar30 = *(double *)&(param_1->MMax).field_0x10;
      pFVar32 = (pTVar1->AllocatorInstance).Data;
      auVar61._8_4_ = SUB84(dVar26,0);
      auVar61._0_8_ = dVar26;
      auVar61._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      auVar62._8_8_ = -(ulonglong)(auVar61._8_8_ < dVar12);
      auVar62._0_8_ = -(ulonglong)(dVar26 < dVar13);
      auVar64._8_8_ = -(ulonglong)(dVar26 < dVar10);
      auVar64._0_8_ = -(ulonglong)(dVar26 < dVar11);
      lVar57 = -(ulonglong)(dVar25 < dVar4);
      auVar63._8_8_ = -(ulonglong)(dVar25 < dVar2);
      auVar63._0_8_ = -(ulonglong)(dVar25 < dVar3);
      auVar58._8_8_ = -(ulonglong)(dVar8 < dVar27);
      auVar58._0_8_ = -(ulonglong)(dVar9 < dVar27);
      auVar34._8_4_ = (int)lVar57;
      auVar34._0_8_ = -(ulonglong)(dVar25 < dVar5);
      auVar34._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
      lVar57 = -(ulonglong)(dVar16 < dVar28);
      auVar38._8_4_ = (int)lVar57;
      auVar38._0_8_ = -(ulonglong)(dVar17 < dVar28);
      auVar38._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
      auVar59._8_8_ = -(ulonglong)(dVar24 < dVar29);
      auVar59._0_8_ = -(ulonglong)(*(double *)(pFVar32 + lVar49 + -0x70) < dVar29);
      lVar57 = -(ulonglong)(dVar30 < dVar20);
      auVar35._8_4_ = (int)lVar57;
      auVar35._0_8_ = -(ulonglong)(dVar30 < dVar21);
      auVar35._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
      lVar57 = -(ulonglong)(dVar6 < dVar27);
      auVar36._8_4_ = (int)lVar57;
      auVar36._0_8_ = -(ulonglong)(dVar7 < dVar27);
      auVar36._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
      uVar56 = movmskpd(iVar46,auVar62 | auVar38 | auVar58 | auVar34 | auVar59 | auVar35);
      lVar57 = -(ulonglong)(dVar14 < dVar28);
      auVar39._8_4_ = (int)lVar57;
      auVar39._0_8_ = -(ulonglong)(dVar15 < dVar28);
      auVar39._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
      auVar60._8_8_ = -(ulonglong)(dVar22 < dVar29);
      auVar60._0_8_ = -(ulonglong)(dVar23 < dVar29);
      lVar57 = -(ulonglong)(dVar30 < dVar18);
      auVar37._8_4_ = (int)lVar57;
      auVar37._0_8_ = -(ulonglong)(dVar30 < dVar19);
      auVar37._12_4_ = (int)((ulonglong)lVar57 >> 0x20);
      iVar46 = movmskpd((int)pFVar32,auVar64 | auVar39 | auVar63 | auVar36 | auVar60 | auVar37);
      lVar57 = local_240;
      do {
        if (((uVar56 | iVar46 << 2) >> (iVar54 + uVar50 & 0x1f) & 1) == 0) {
          uVar51 = 0;
          if ((int)uVar50 < (this->Elems).ArrayNum) {
            uVar51 = ~uVar50 >> 0x1f;
          }
          if ((uVar51 == 0) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar41)) {
            pcVar33 = (code *)swi(3);
            uVar42 = (*pcVar33)();
            return (bool)uVar42;
          }
          pFVar52 = (FAccelerationStructureHandle *)((pTVar1->AllocatorInstance).Data + lVar57);
          bVar41 = PrePreFilterHelper<Chaos::FAccelerationStructureHandle,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                             (pFVar52,param_2);
          if (!bVar41) {
            local_1c8 = pFVar52->ExternalGeometryParticle;
            pTStack_1c0 = pFVar52->GeometryParticleHandle;
            local_188 = pFVar52[1].ExternalGeometryParticle;
            pTStack_180 = pFVar52[1].GeometryParticleHandle;
            local_178._0_4_ = pFVar52[1].CachedUniqueIdx;
            local_178._4_4_ = pFVar52[1].UnionQueryFilterData.Word0;
            local_170 = *(undefined1 (*) [16])&pFVar52[1].UnionQueryFilterData.Word1;
            local_160._0_4_ = pFVar52[1].UnionSimFilterData.Word1;
            local_160._4_4_ = pFVar52[1].UnionSimFilterData.Word2;
            local_1b8._0_4_ = pFVar52->CachedUniqueIdx;
            local_1b8._4_4_ = (pFVar52->UnionQueryFilterData).Word0;
            uStack_1b0._0_4_ = (pFVar52->UnionQueryFilterData).Word1;
            uStack_1b0._4_4_ = (pFVar52->UnionQueryFilterData).Word2;
            local_1a8 = (pFVar52->UnionQueryFilterData).Word3;
            uStack_1a4 = (pFVar52->UnionSimFilterData).Word0;
            uStack_1a0 = (pFVar52->UnionSimFilterData).Word1;
            uStack_19c = (pFVar52->UnionSimFilterData).Word2;
            local_198 = *(undefined8 *)&(pFVar52->UnionSimFilterData).Word3;
            local_190 = 1;
            cVar43 = (**(code **)((longlong)*param_2->Visitor + 8))(param_2->Visitor,&local_1c8);
            if (cVar43 == '\0') {
              return false;
            }
          }
        }
        uVar50 = uVar50 + 1;
        lVar57 = lVar57 + 0x68;
      } while ((int)(iVar54 + uVar50) < 4);
      uVar55 = uVar55 + 4;
      local_240 = local_240 + 0x1a0;
      local_238 = local_238 + 1;
      iVar54 = iVar54 + -4;
      lVar49 = lVar49 + 0x1a0;
    } while (local_238 < iVar44);
  }
  uVar55 = iVar44 * 4;
  if ((int)uVar55 < iVar31) {
    lVar49 = (longlong)(int)uVar55;
    lVar57 = lVar49 * 0x68;
    do {
      uVar50 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar50 = ~uVar55 >> 0x1f;
      }
      if ((uVar50 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      pFVar52 = (FAccelerationStructureHandle *)((pTVar1->AllocatorInstance).Data + lVar57);
      bVar41 = PrePreFilterHelper<Chaos::FAccelerationStructureHandle,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                         (pFVar52,param_2);
      if (!bVar41) {
        pTVar47 = &param_1->MMax;
        lVar48 = 0;
        lVar40 = 0x38 - (longlong)pTVar47;
        lVar53 = -(longlong)pTVar47;
        do {
          dVar2 = *(double *)((longlong)pFVar52 + lVar40 + (longlong)pTVar47);
          if ((*(double *)pTVar47 <= dVar2 && dVar2 != *(double *)pTVar47) ||
             (*(double *)((longlong)pTVar47 + lVar53 + 0x50 + (longlong)pFVar52) <
              *(double *)(lVar53 + (longlong)param_1 + (longlong)pTVar47))) goto LAB_143cebe35;
          lVar48 = lVar48 + 1;
          pTVar47 = (TVector<double,3> *)&pTVar47->field_0x8;
        } while (lVar48 < 3);
        local_158 = pFVar52->ExternalGeometryParticle;
        pTStack_150 = pFVar52->GeometryParticleHandle;
        local_148._0_4_ = pFVar52->CachedUniqueIdx;
        local_148._4_4_ = (pFVar52->UnionQueryFilterData).Word0;
        uStack_140._0_4_ = (pFVar52->UnionQueryFilterData).Word1;
        uStack_140._4_4_ = (pFVar52->UnionQueryFilterData).Word2;
        local_120 = 1;
        local_138 = *(undefined8 *)&(pFVar52->UnionQueryFilterData).Word3;
        uStack_130._0_4_ = (pFVar52->UnionSimFilterData).Word1;
        uStack_130._4_4_ = (pFVar52->UnionSimFilterData).Word2;
        local_128 = *(undefined8 *)&(pFVar52->UnionSimFilterData).Word3;
        local_118 = pFVar52[1].ExternalGeometryParticle;
        pTStack_110 = pFVar52[1].GeometryParticleHandle;
        local_108._0_4_ = pFVar52[1].CachedUniqueIdx;
        local_108._4_4_ = pFVar52[1].UnionQueryFilterData.Word0;
        local_100 = pFVar52[1].UnionQueryFilterData.Word1;
        uStack_fc = pFVar52[1].UnionQueryFilterData.Word2;
        uStack_f8 = pFVar52[1].UnionQueryFilterData.Word3;
        uStack_f4 = pFVar52[1].UnionSimFilterData.Word0;
        local_f0._0_4_ = pFVar52[1].UnionSimFilterData.Word1;
        local_f0._4_4_ = pFVar52[1].UnionSimFilterData.Word2;
        cVar43 = (**(code **)((longlong)*param_2->Visitor + 8))(param_2->Visitor,&local_158);
        if (cVar43 == '\0') {
          return false;
        }
      }
LAB_143cebe35:
      uVar55 = uVar55 + 1;
      lVar49 = lVar49 + 1;
      lVar57 = lVar57 + 0x68;
    } while (lVar49 < iVar31);
  }
  return true;
}

// TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> @ 143cff420

TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> * __thiscall
Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>::
TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>
          (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *this,
          TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *param_1)

{
  TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *pTVar4;
  longlong lVar5;
  
  lVar5 = param_1->_padding_;
  pTVar1 = &this->Elems;
  piVar2 = &(this->Elems).ArrayMax;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  this->_padding_ = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  this->_padding_ = param_1->_padding_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Elems).ArrayNum;
  pTVar4 = (TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *)
           (param_1->Elems).AllocatorInstance.Data;
  (this->Elems).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  this->bDirtyLeaf = param_1->bDirtyLeaf;
  return this;
}

// TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> @ 143cff4e0

TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> * __thiscall
Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>::
TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>
          (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *this,
          TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *pTVar4;
  
  pTVar1 = &this->Elems;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = -0x10000000000001;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Elems).ArrayMax;
  iVar3 = param_1->ArrayNum;
  pTVar4 = (TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *)
           (param_1->AllocatorInstance).Data;
  (this->Elems).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  this->bDirtyLeaf = false;
  TBoundsWrapperHelper<Chaos::FAccelerationStructureHandle,double,1>::ComputeBounds
            ((TBoundsWrapperHelper<Chaos::FAccelerationStructureHandle,double,1> *)this,pTVar1,false
            );
  return this;
}

// AddElement @ 143d3aa40

void __thiscall
Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>::AddElement
          (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *this,
          TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *param_1)

{
  int *piVar1;
  TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  
  pTVar2 = (TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *)
           (this->Elems).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Elems).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->Elems).ArrayNum;
  piVar1 = &(this->Elems).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&(this->Elems).AllocatorInstance,piVar1);
  }
  (this->Elems).ArrayNum = iVar8 + 1;
  pTVar5 = (param_1->Payload).GeometryParticleHandle;
  lVar9 = (longlong)iVar8 * 0x68;
  pFVar3 = (this->Elems).AllocatorInstance.Data;
  *(TGeometryParticle<double,3> **)(pFVar3 + lVar9) = (param_1->Payload).ExternalGeometryParticle;
  *(TGeometryParticleHandleImp<double,3,1> **)(pFVar3 + lVar9 + 8) = pTVar5;
  uVar6 = *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word1;
  *(undefined8 *)(pFVar3 + lVar9 + 0x10) = *(undefined8 *)&(param_1->Payload).CachedUniqueIdx;
  *(undefined8 *)(pFVar3 + lVar9 + 0x10 + 8) = uVar6;
  uVar6 = *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word1;
  *(undefined8 *)(pFVar3 + lVar9 + 0x20) =
       *(undefined8 *)&(param_1->Payload).UnionQueryFilterData.Word3;
  *(undefined8 *)(pFVar3 + lVar9 + 0x20 + 8) = uVar6;
  *(undefined8 *)(pFVar3 + lVar9 + 0x30) =
       *(undefined8 *)&(param_1->Payload).UnionSimFilterData.Word3;
  uVar6 = *(undefined8 *)&(param_1->Bounds).MMin.field_0x8;
  *(undefined8 *)(pFVar3 + lVar9 + 0x38) = *(undefined8 *)&(param_1->Bounds).MMin;
  *(undefined8 *)(pFVar3 + lVar9 + 0x38 + 8) = uVar6;
  *(undefined8 *)(pFVar3 + lVar9 + 0x48) = *(undefined8 *)&(param_1->Bounds).MMin.field_0x10;
  uVar6 = *(undefined8 *)&(param_1->Bounds).MMax.field_0x8;
  *(undefined8 *)(pFVar3 + lVar9 + 0x50) = *(undefined8 *)&(param_1->Bounds).MMax;
  *(undefined8 *)(pFVar3 + lVar9 + 0x50 + 8) = uVar6;
  *(undefined8 *)(pFVar3 + lVar9 + 0x60) = *(undefined8 *)&(param_1->Bounds).MMax.field_0x10;
  this->bDirtyLeaf = true;
  return;
}

// RemoveElement @ 143d650e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>::RemoveElement
          (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *this,
          FAccelerationStructureHandle *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if ((this->Elems).ArrayNum < 1) {
    this->bDirtyLeaf = true;
    return;
  }
  lVar9 = 0;
  while( true ) {
    uVar10 = ~uVar8 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar8 < (this->Elems).ArrayNum) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->Elems).ArrayNum;
    if (*(int *)((this->Elems).AllocatorInstance.Data + lVar9 + 0x10) ==
        (param_1->CachedUniqueIdx).Idx) break;
    if (uVar8 == iVar7 - 1U) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9181246422089989683>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x1cd,"Idx != Elems.Num() - 1");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>::RemoveElement(Chaos::FAccelerationStructureHandle)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x68;
    if ((this->Elems).ArrayNum <= (int)uVar8) {
LAB_143d651f0:
      this->bDirtyLeaf = true;
      return;
    }
  }
  uVar6 = 0;
  if ((int)uVar8 < iVar7) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->Elems).ArrayNum;
  pFVar3 = (this->Elems).AllocatorInstance.Data;
  iVar7 = iVar2 + ~uVar8;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  if (iVar7 != 0) {
    memmove(pFVar3 + (longlong)(int)uVar8 * 0x68,pFVar3 + (longlong)(iVar2 - iVar7) * 0x68,
            (longlong)iVar7 * 0x68);
  }
  piVar1 = &(this->Elems).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x68,8,&(this->Elems).AllocatorInstance,(this->Elems).ArrayNum,&(this->Elems).ArrayMax)
  ;
  goto LAB_143d651f0;
}

// UpdateElement @ 143d7c8b0

void __thiscall
Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>::UpdateElement
          (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *this,
          FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_3) {
    uVar6 = 0;
    if (0 < (this->Elems).ArrayNum) {
      lVar8 = 0;
      do {
        uVar7 = ~uVar6 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar6 < (this->Elems).ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)((this->Elems).AllocatorInstance.Data + lVar8 + 0x10) ==
            (param_1->CachedUniqueIdx).Idx) {
          uVar5 = 0;
          if ((int)uVar6 < (this->Elems).ArrayNum) {
            uVar5 = uVar7;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->Elems).AllocatorInstance.Data;
          uVar3 = *(undefined8 *)&(param_2->MMin).field_0x8;
          lVar8 = (longlong)(int)uVar6 * 0x68;
          *(undefined8 *)(pFVar1 + lVar8 + 0x38) = *(undefined8 *)&param_2->MMin;
          *(undefined8 *)(pFVar1 + lVar8 + 0x38 + 8) = uVar3;
          *(undefined8 *)(pFVar1 + lVar8 + 0x48) = *(undefined8 *)&(param_2->MMin).field_0x10;
          uVar3 = *(undefined8 *)&(param_2->MMax).field_0x8;
          *(undefined8 *)(pFVar1 + lVar8 + 0x50) = *(undefined8 *)&param_2->MMax;
          *(undefined8 *)(pFVar1 + lVar8 + 0x50 + 8) = uVar3;
          *(undefined8 *)(pFVar1 + lVar8 + 0x60) = *(undefined8 *)&(param_2->MMax).field_0x10;
          uVar5 = 0;
          if ((int)uVar6 < (this->Elems).ArrayNum) {
            uVar5 = uVar7;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->Elems).AllocatorInstance.Data;
          if (FAABBTreeCVars::UpdateDirtyElementPayloadData != 0) {
            *(uint *)(pFVar1 + lVar8 + 0x14) = (param_1->UnionQueryFilterData).Word0;
            *(uint *)(pFVar1 + lVar8 + 0x18) = (param_1->UnionQueryFilterData).Word1;
            *(uint *)(pFVar1 + lVar8 + 0x1c) = (param_1->UnionQueryFilterData).Word2;
            *(uint *)(pFVar1 + lVar8 + 0x20) = (param_1->UnionQueryFilterData).Word3;
            *(uint *)(pFVar1 + lVar8 + 0x24) = (param_1->UnionSimFilterData).Word0;
            *(uint *)(pFVar1 + lVar8 + 0x28) = (param_1->UnionSimFilterData).Word1;
            *(uint *)(pFVar1 + lVar8 + 0x2c) = (param_1->UnionSimFilterData).Word2;
            *(uint *)(pFVar1 + lVar8 + 0x30) = (param_1->UnionSimFilterData).Word3;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x68;
      } while ((int)uVar6 < (this->Elems).ArrayNum);
    }
    this->bDirtyLeaf = true;
  }
  return;
}

// UpdateElementWithoutDirty @ 143d7d390

void __thiscall
Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>::UpdateElementWithoutDirty
          (TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double> *this,
          FAccelerationStructureHandle *param_1,TAABB<double,3> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar6 = 0;
  if (0 < (this->Elems).ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = ~uVar6 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar6 < (this->Elems).ArrayNum) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)((this->Elems).AllocatorInstance.Data + lVar8 + 0x10) ==
          (param_1->CachedUniqueIdx).Idx) {
        uVar5 = 0;
        if ((int)uVar6 < (this->Elems).ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Elems).AllocatorInstance.Data;
        uVar3 = *(undefined8 *)&(param_2->MMin).field_0x8;
        lVar8 = (longlong)(int)uVar6 * 0x68;
        *(undefined8 *)(pFVar1 + lVar8 + 0x38) = *(undefined8 *)&param_2->MMin;
        *(undefined8 *)(pFVar1 + lVar8 + 0x38 + 8) = uVar3;
        *(undefined8 *)(pFVar1 + lVar8 + 0x48) = *(undefined8 *)&(param_2->MMin).field_0x10;
        uVar3 = *(undefined8 *)&(param_2->MMax).field_0x8;
        *(undefined8 *)(pFVar1 + lVar8 + 0x50) = *(undefined8 *)&param_2->MMax;
        *(undefined8 *)(pFVar1 + lVar8 + 0x50 + 8) = uVar3;
        *(undefined8 *)(pFVar1 + lVar8 + 0x60) = *(undefined8 *)&(param_2->MMax).field_0x10;
        uVar5 = 0;
        if ((int)uVar6 < (this->Elems).ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->Elems).AllocatorInstance.Data;
        if (FAABBTreeCVars::UpdateDirtyElementPayloadData == 0) {
          return;
        }
        *(uint *)(pFVar1 + lVar8 + 0x14) = (param_1->UnionQueryFilterData).Word0;
        *(uint *)(pFVar1 + lVar8 + 0x18) = (param_1->UnionQueryFilterData).Word1;
        *(uint *)(pFVar1 + lVar8 + 0x1c) = (param_1->UnionQueryFilterData).Word2;
        *(uint *)(pFVar1 + lVar8 + 0x20) = (param_1->UnionQueryFilterData).Word3;
        *(uint *)(pFVar1 + lVar8 + 0x24) = (param_1->UnionSimFilterData).Word0;
        *(uint *)(pFVar1 + lVar8 + 0x28) = (param_1->UnionSimFilterData).Word1;
        *(uint *)(pFVar1 + lVar8 + 0x2c) = (param_1->UnionSimFilterData).Word2;
        *(uint *)(pFVar1 + lVar8 + 0x30) = (param_1->UnionSimFilterData).Word3;
        return;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x68;
    } while ((int)uVar6 < (this->Elems).ArrayNum);
  }
  return;
}

// OverlapFast<Chaos::TSpatialVisitor<int,double>_> @ 143ddfc00

bool __thiscall
Chaos::TAABBTreeLeafArray<int,1,double>::OverlapFast<Chaos::TSpatialVisitor<int,double>_>
          (TAABBTreeLeafArray<int,1,double> *this,TAABB<double,3> *param_1,
          TSpatialVisitor<int,double> *param_2)

{
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  int iVar31;
  FScriptContainerElement *pFVar32;
  FScriptContainerElement *pFVar33;
  code *pcVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  bool bVar41;
  undefined1 uVar42;
  char cVar43;
  int iVar44;
  uint uVar45;
  int iVar46;
  TVector<double,3> *pTVar47;
  longlong lVar48;
  longlong lVar49;
  uint uVar50;
  TVector<double,3> *pTVar51;
  uint uVar52;
  uint uVar53;
  int iVar54;
  uint uVar55;
  longlong lVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  longlong local_1c8;
  longlong local_1c0;
  undefined4 local_158;
  undefined1 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  
  pTVar1 = &this->Elems;
  iVar31 = (this->Elems).ArrayNum;
  iVar44 = (int)(iVar31 + (iVar31 >> 0x1f & 3U)) >> 2;
  if (0 < iVar44) {
    local_1c0 = 0;
    iVar54 = 0;
    local_1c8 = 0;
    lVar49 = 0x70;
    uVar55 = 3;
    do {
      uVar53 = ~uVar55 >> 0x1f;
      uVar52 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar52 = uVar53;
      }
      if ((uVar52 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      uVar50 = ~(uVar55 - 3) >> 0x1f;
      dVar2 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x40);
      uVar52 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar52 = uVar50;
      }
      if ((uVar52 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar3 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 8);
      uVar52 = 0;
      if ((int)(uVar55 - 2) < (this->Elems).ArrayNum) {
        uVar52 = uVar50;
      }
      if ((uVar52 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      uVar52 = uVar55 - 3;
      dVar4 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x30);
      uVar45 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar5 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x68);
      uVar45 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar45 = uVar53;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar6 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x58);
      uVar45 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar7 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x20);
      uVar45 = 0;
      if ((int)(uVar55 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar8 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x18);
      uVar45 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar9 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x50);
      uVar45 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar45 = uVar53;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar10 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x48);
      uVar45 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar11 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x10);
      uVar45 = 0;
      if ((int)(uVar55 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar12 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x28);
      uVar45 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar13 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x60);
      uVar45 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar45 = uVar53;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar14 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x60);
      uVar45 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar15 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x28);
      uVar45 = 0;
      if ((int)(uVar55 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar16 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x10);
      uVar45 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar17 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x48);
      uVar45 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar45 = uVar53;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar18 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x50);
      uVar45 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar19 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x18);
      uVar45 = 0;
      if ((int)(uVar55 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar20 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x20);
      uVar45 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar21 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -0x58);
      uVar45 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar45 = uVar53;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar22 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x68);
      uVar45 = 0;
      if ((int)(uVar55 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar23 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + 0x30);
      uVar45 = 0;
      if ((int)(uVar55 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar24 = *(double *)((pTVar1->AllocatorInstance).Data + lVar49 + -8);
      uVar45 = 0;
      if ((int)uVar52 < (this->Elems).ArrayNum) {
        uVar45 = uVar50;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar25 = *(double *)&param_1->MMax;
      dVar26 = *(double *)&(param_1->MMax).field_0x8;
      dVar27 = *(double *)&param_1->MMin;
      dVar28 = *(double *)&(param_1->MMin).field_0x8;
      dVar29 = *(double *)&(param_1->MMin).field_0x10;
      dVar30 = *(double *)&(param_1->MMax).field_0x10;
      pFVar32 = (pTVar1->AllocatorInstance).Data;
      auVar60._8_4_ = SUB84(dVar26,0);
      auVar60._0_8_ = dVar26;
      auVar60._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      auVar61._8_8_ = -(ulonglong)(auVar60._8_8_ < dVar12);
      auVar61._0_8_ = -(ulonglong)(dVar26 < dVar13);
      auVar63._8_8_ = -(ulonglong)(dVar26 < dVar10);
      auVar63._0_8_ = -(ulonglong)(dVar26 < dVar11);
      lVar56 = -(ulonglong)(dVar25 < dVar4);
      auVar62._8_8_ = -(ulonglong)(dVar25 < dVar2);
      auVar62._0_8_ = -(ulonglong)(dVar25 < dVar3);
      auVar57._8_8_ = -(ulonglong)(dVar8 < dVar27);
      auVar57._0_8_ = -(ulonglong)(dVar9 < dVar27);
      auVar35._8_4_ = (int)lVar56;
      auVar35._0_8_ = -(ulonglong)(dVar25 < dVar5);
      auVar35._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
      lVar56 = -(ulonglong)(dVar16 < dVar28);
      auVar39._8_4_ = (int)lVar56;
      auVar39._0_8_ = -(ulonglong)(dVar17 < dVar28);
      auVar39._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
      auVar58._8_8_ = -(ulonglong)(dVar24 < dVar29);
      auVar58._0_8_ = -(ulonglong)(*(double *)(pFVar32 + lVar49 + -0x40) < dVar29);
      lVar56 = -(ulonglong)(dVar30 < dVar20);
      auVar36._8_4_ = (int)lVar56;
      auVar36._0_8_ = -(ulonglong)(dVar30 < dVar21);
      auVar36._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
      lVar56 = -(ulonglong)(dVar6 < dVar27);
      auVar37._8_4_ = (int)lVar56;
      auVar37._0_8_ = -(ulonglong)(dVar7 < dVar27);
      auVar37._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
      uVar53 = movmskpd(uVar53,auVar61 | auVar39 | auVar57 | auVar35 | auVar58 | auVar36);
      lVar56 = -(ulonglong)(dVar14 < dVar28);
      auVar40._8_4_ = (int)lVar56;
      auVar40._0_8_ = -(ulonglong)(dVar15 < dVar28);
      auVar40._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
      auVar59._8_8_ = -(ulonglong)(dVar22 < dVar29);
      auVar59._0_8_ = -(ulonglong)(dVar23 < dVar29);
      lVar56 = -(ulonglong)(dVar30 < dVar18);
      auVar38._8_4_ = (int)lVar56;
      auVar38._0_8_ = -(ulonglong)(dVar30 < dVar19);
      auVar38._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
      iVar46 = movmskpd((int)pFVar32,auVar63 | auVar40 | auVar62 | auVar37 | auVar59 | auVar38);
      lVar56 = local_1c8;
      do {
        if (((uVar53 | iVar46 << 2) >> (uVar52 + iVar54 & 0x1f) & 1) == 0) {
          uVar50 = 0;
          if ((int)uVar52 < (this->Elems).ArrayNum) {
            uVar50 = ~uVar52 >> 0x1f;
          }
          if ((uVar50 == 0) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar41)) {
            pcVar34 = (code *)swi(3);
            uVar42 = (*pcVar34)();
            return (bool)uVar42;
          }
          pFVar33 = (pTVar1->AllocatorInstance).Data;
          pFVar32 = pFVar33 + lVar56 + 8;
          local_150 = *(undefined4 *)pFVar32;
          uStack_14c = *(undefined4 *)(pFVar32 + 4);
          uStack_148 = *(undefined4 *)(pFVar32 + 8);
          uStack_144 = *(undefined4 *)(pFVar32 + 0xc);
          local_140 = *(undefined8 *)(pFVar33 + lVar56 + 0x18);
          local_138 = *(undefined1 (*) [16])(pFVar33 + lVar56 + 0x20);
          local_128 = *(undefined8 *)(pFVar33 + lVar56 + 0x30);
          local_158 = *(undefined4 *)(pFVar33 + lVar56);
          local_154 = 1;
          cVar43 = (**(code **)((longlong)*param_2->Visitor + 8))(param_2->Visitor,&local_158);
          if (cVar43 == '\0') {
            return false;
          }
        }
        uVar52 = uVar52 + 1;
        lVar56 = lVar56 + 0x38;
      } while ((int)(uVar52 + iVar54) < 4);
      uVar55 = uVar55 + 4;
      local_1c8 = local_1c8 + 0xe0;
      local_1c0 = local_1c0 + 1;
      iVar54 = iVar54 + -4;
      lVar49 = lVar49 + 0xe0;
    } while (local_1c0 < iVar44);
  }
  uVar55 = iVar44 * 4;
  if ((int)uVar55 < iVar31) {
    lVar56 = (longlong)(int)uVar55;
    pTVar51 = &param_1->MMax;
    lVar49 = lVar56 * 0x38;
    do {
      uVar52 = 0;
      if ((int)uVar55 < (this->Elems).ArrayNum) {
        uVar52 = ~uVar55 >> 0x1f;
      }
      if ((uVar52 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      pFVar32 = (pTVar1->AllocatorInstance).Data;
      lVar48 = 0;
      pTVar47 = pTVar51;
      do {
        if ((*(double *)pTVar47 <=
             *(double *)
              (pFVar32 + ((lVar49 + 8) - (longlong)pTVar51) + (longlong)&pTVar47->field_0x0) &&
             *(double *)
              (pFVar32 + ((lVar49 + 8) - (longlong)pTVar51) + (longlong)&pTVar47->field_0x0) !=
             *(double *)pTVar47) ||
           (*(double *)
             (pFVar32 + (0x20 - (longlong)pTVar51) + lVar49 + (longlong)&pTVar47->field_0x0) <
            *(double *)&((TAABB<double,3> *)(pTVar47 + -1))->MMin)) goto LAB_143de07fa;
        lVar48 = lVar48 + 1;
        pTVar47 = (TVector<double,3> *)&pTVar47->field_0x8;
      } while (lVar48 < 3);
      local_118 = *(undefined8 *)(pFVar32 + lVar49 + 8);
      uStack_110 = *(undefined8 *)(pFVar32 + lVar49 + 8 + 8);
      local_120 = *(undefined4 *)(pFVar32 + lVar49);
      local_108 = *(undefined8 *)(pFVar32 + lVar49 + 0x18);
      pFVar33 = pFVar32 + lVar49 + 0x20;
      local_100 = *(undefined4 *)pFVar33;
      uStack_fc = *(undefined4 *)(pFVar33 + 4);
      uStack_f8 = *(undefined4 *)(pFVar33 + 8);
      uStack_f4 = *(undefined4 *)(pFVar33 + 0xc);
      local_11c = 1;
      local_f0 = *(undefined8 *)(pFVar32 + lVar49 + 0x30);
      cVar43 = (**(code **)((longlong)*param_2->Visitor + 8))(param_2->Visitor,&local_120);
      if (cVar43 == '\0') {
        return false;
      }
LAB_143de07fa:
      uVar55 = uVar55 + 1;
      lVar56 = lVar56 + 1;
      lVar49 = lVar49 + 0x38;
    } while (lVar56 < iVar31);
  }
  return true;
}

// OverlapFast<Chaos::TSpatialVisitor<int,double>_> @ 143de0870

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Chaos::TAABBTreeLeafArray<int,0,double>::OverlapFast<Chaos::TSpatialVisitor<int,double>_>
          (TAABBTreeLeafArray<int,0,double> *this,TAABB<double,3> *param_1,
          TSpatialVisitor<int,double> *param_2)

{
  TVector<double,3> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int iVar30;
  FScriptContainerElement *pFVar31;
  FScriptContainerElement *pFVar32;
  code *pcVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  bool bVar41;
  undefined1 uVar42;
  char cVar43;
  int iVar44;
  uint uVar45;
  int iVar46;
  TVector<double,3> *pTVar47;
  longlong lVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  int iVar52;
  uint uVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  longlong local_1c8;
  longlong local_1c0;
  undefined4 local_158;
  undefined1 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  
  iVar30 = (this->Elems).ArrayNum;
  pTVar1 = &param_1->MMax;
  iVar44 = (int)(iVar30 + (iVar30 >> 0x1f & 3U)) >> 2;
  if (0 < iVar44) {
    local_1c0 = 0;
    iVar52 = 0;
    local_1c8 = 0;
    lVar48 = 0x70;
    uVar53 = 3;
    do {
      uVar51 = ~uVar53 >> 0x1f;
      uVar50 = 0;
      if ((int)uVar53 < (this->Elems).ArrayNum) {
        uVar50 = uVar51;
      }
      if ((uVar50 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      uVar49 = ~(uVar53 - 3) >> 0x1f;
      dVar2 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 0x40);
      uVar50 = 0;
      if ((int)(uVar53 - 1) < (this->Elems).ArrayNum) {
        uVar50 = uVar49;
      }
      if ((uVar50 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar3 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 8);
      uVar50 = 0;
      if ((int)(uVar53 - 2) < (this->Elems).ArrayNum) {
        uVar50 = uVar49;
      }
      if ((uVar50 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      uVar50 = uVar53 - 3;
      dVar4 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + -0x30);
      uVar45 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar5 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + -0x68);
      uVar45 = 0;
      if ((int)uVar53 < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar6 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 0x58);
      uVar45 = 0;
      if ((int)(uVar53 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar40 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 0x20);
      uVar45 = 0;
      if ((int)(uVar53 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar7 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + -0x18);
      uVar45 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar8 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + -0x50);
      uVar45 = 0;
      if ((int)uVar53 < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar9 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 0x48);
      uVar45 = 0;
      if ((int)(uVar53 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar10 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 0x10);
      uVar45 = 0;
      if ((int)(uVar53 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar11 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + -0x28);
      uVar45 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar12 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + -0x60);
      uVar45 = 0;
      if ((int)uVar53 < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar13 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 0x60);
      uVar45 = 0;
      if ((int)(uVar53 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar14 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 0x28);
      uVar45 = 0;
      if ((int)(uVar53 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar15 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + -0x10);
      uVar45 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar16 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + -0x48);
      uVar45 = 0;
      if ((int)uVar53 < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar17 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 0x50);
      uVar45 = 0;
      if ((int)(uVar53 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar18 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 0x18);
      uVar45 = 0;
      if ((int)(uVar53 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar19 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + -0x20);
      uVar45 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar20 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + -0x58);
      uVar45 = 0;
      if ((int)uVar53 < (this->Elems).ArrayNum) {
        uVar45 = uVar51;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar21 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 0x68);
      uVar45 = 0;
      if ((int)(uVar53 - 1) < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar22 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + 0x30);
      uVar45 = 0;
      if ((int)(uVar53 - 2) < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar23 = *(double *)((this->Elems).AllocatorInstance.Data + lVar48 + -8);
      uVar45 = 0;
      if ((int)uVar50 < (this->Elems).ArrayNum) {
        uVar45 = uVar49;
      }
      if ((uVar45 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      dVar24 = *(double *)&param_1->MMin;
      dVar25 = *(double *)pTVar1;
      pFVar31 = (this->Elems).AllocatorInstance.Data;
      dVar26 = *(double *)&(param_1->MMax).field_0x8;
      dVar27 = *(double *)&(param_1->MMin).field_0x8;
      dVar28 = *(double *)&(param_1->MMax).field_0x10;
      dVar29 = *(double *)&(param_1->MMin).field_0x10;
      lVar54 = -(ulonglong)(dVar25 < dVar4);
      lVar55 = -(ulonglong)(dVar25 < dVar2);
      auVar57._8_8_ = -(ulonglong)(dVar7 < dVar24);
      auVar57._0_8_ = -(ulonglong)(dVar8 < dVar24);
      auVar34._8_4_ = (int)lVar54;
      auVar34._0_8_ = -(ulonglong)(dVar25 < dVar5);
      auVar34._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
      lVar54 = -(ulonglong)(dVar26 < dVar9);
      lVar56 = -(ulonglong)(dVar26 < dVar11);
      auVar61._8_8_ = -(ulonglong)(dVar15 < dVar27);
      auVar61._0_8_ = -(ulonglong)(dVar16 < dVar27);
      auVar35._8_4_ = (int)lVar56;
      auVar35._0_8_ = -(ulonglong)(dVar26 < dVar12);
      auVar35._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
      lVar56 = -(ulonglong)(dVar28 < dVar19);
      auVar58._8_8_ = -(ulonglong)(dVar23 < dVar29);
      auVar58._0_8_ = -(ulonglong)(*(double *)(pFVar31 + lVar48 + -0x40) < dVar29);
      auVar36._8_4_ = (int)lVar56;
      auVar36._0_8_ = -(ulonglong)(dVar28 < dVar20);
      auVar36._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
      auVar60._8_8_ = -(ulonglong)(dVar6 < dVar24);
      auVar60._0_8_ = -(ulonglong)(dVar40 < dVar24);
      auVar37._8_4_ = (int)lVar55;
      auVar37._0_8_ = -(ulonglong)(dVar25 < dVar3);
      auVar37._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
      auVar62._8_8_ = -(ulonglong)(dVar13 < dVar27);
      auVar62._0_8_ = -(ulonglong)(dVar14 < dVar27);
      auVar59._8_8_ = -(ulonglong)(dVar21 < dVar29);
      auVar59._0_8_ = -(ulonglong)(dVar22 < dVar29);
      auVar38._8_4_ = (int)lVar54;
      auVar38._0_8_ = -(ulonglong)(dVar26 < dVar10);
      auVar38._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
      uVar51 = movmskpd(uVar51,auVar57 | auVar34 | auVar61 | auVar35 | auVar58 | auVar36);
      lVar54 = -(ulonglong)(dVar28 < dVar17);
      auVar39._8_4_ = (int)lVar54;
      auVar39._0_8_ = -(ulonglong)(dVar28 < dVar18);
      auVar39._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
      iVar46 = movmskpd((int)pFVar31,auVar60 | auVar37 | auVar62 | auVar38 | auVar59 | auVar39);
      lVar54 = local_1c8;
      do {
        if (((uVar51 | iVar46 << 2) >> (uVar50 + iVar52 & 0x1f) & 1) == 0) {
          uVar49 = 0;
          if ((int)uVar50 < (this->Elems).ArrayNum) {
            uVar49 = ~uVar50 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar41)) {
            pcVar33 = (code *)swi(3);
            uVar42 = (*pcVar33)();
            return (bool)uVar42;
          }
          pFVar32 = (this->Elems).AllocatorInstance.Data;
          pFVar31 = pFVar32 + lVar54 + 8;
          local_150 = *(undefined4 *)pFVar31;
          uStack_14c = *(undefined4 *)(pFVar31 + 4);
          uStack_148 = *(undefined4 *)(pFVar31 + 8);
          uStack_144 = *(undefined4 *)(pFVar31 + 0xc);
          local_140 = *(undefined8 *)(pFVar32 + lVar54 + 0x18);
          pFVar31 = pFVar32 + lVar54 + 0x20;
          local_138 = *(undefined4 *)pFVar31;
          uStack_134 = *(undefined4 *)(pFVar31 + 4);
          uStack_130 = *(undefined4 *)(pFVar31 + 8);
          uStack_12c = *(undefined4 *)(pFVar31 + 0xc);
          local_128 = *(undefined8 *)(pFVar32 + lVar54 + 0x30);
          local_158 = *(undefined4 *)(pFVar32 + lVar54);
          local_154 = 1;
          cVar43 = (**(code **)((longlong)*param_2->Visitor + 8))(param_2->Visitor,&local_158);
          if (cVar43 == '\0') {
            return false;
          }
        }
        uVar50 = uVar50 + 1;
        lVar54 = lVar54 + 0x38;
      } while ((int)(uVar50 + iVar52) < 4);
      uVar53 = uVar53 + 4;
      local_1c8 = local_1c8 + 0xe0;
      local_1c0 = local_1c0 + 1;
      iVar52 = iVar52 + -4;
      lVar48 = lVar48 + 0xe0;
    } while (local_1c0 < iVar44);
  }
  uVar53 = iVar44 * 4;
  if ((int)uVar53 < iVar30) {
    lVar48 = (longlong)(int)uVar53;
    lVar54 = lVar48 * 0x38;
    do {
      uVar50 = 0;
      if ((int)uVar53 < (this->Elems).ArrayNum) {
        uVar50 = ~uVar53 >> 0x1f;
      }
      if ((uVar50 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar33 = (code *)swi(3);
        uVar42 = (*pcVar33)();
        return (bool)uVar42;
      }
      pFVar31 = (this->Elems).AllocatorInstance.Data;
      lVar55 = 0;
      pTVar47 = pTVar1;
      do {
        if ((*(double *)pTVar47 <=
             *(double *)(pFVar31 + ((lVar54 + 8) - (longlong)pTVar1) + (longlong)pTVar47) &&
             *(double *)(pFVar31 + ((lVar54 + 8) - (longlong)pTVar1) + (longlong)pTVar47) !=
             *(double *)pTVar47) ||
           (*(double *)
             (pFVar31 + (0x20 - (longlong)pTVar1) + lVar54 + (longlong)&pTVar47->field_0x0) <
            *(double *)(((longlong)param_1 - (longlong)pTVar1) + (longlong)pTVar47)))
        goto LAB_143de14a7;
        lVar55 = lVar55 + 1;
        pTVar47 = (TVector<double,3> *)&pTVar47->field_0x8;
      } while (lVar55 < 3);
      local_118 = *(undefined8 *)(pFVar31 + lVar54 + 8);
      uStack_110 = *(undefined8 *)(pFVar31 + lVar54 + 8 + 8);
      local_120 = *(undefined4 *)(pFVar31 + lVar54);
      local_108 = *(undefined8 *)(pFVar31 + lVar54 + 0x18);
      pFVar32 = pFVar31 + lVar54 + 0x20;
      local_100 = *(undefined4 *)pFVar32;
      uStack_fc = *(undefined4 *)(pFVar32 + 4);
      uStack_f8 = *(undefined4 *)(pFVar32 + 8);
      uStack_f4 = *(undefined4 *)(pFVar32 + 0xc);
      local_11c = 1;
      local_f0 = *(undefined8 *)(pFVar31 + lVar54 + 0x30);
      cVar43 = (**(code **)((longlong)*param_2->Visitor + 8))(param_2->Visitor,&local_120);
      if (cVar43 == '\0') {
        return false;
      }
LAB_143de14a7:
      uVar53 = uVar53 + 1;
      lVar48 = lVar48 + 1;
      lVar54 = lVar54 + 0x38;
    } while (lVar48 < iVar30);
  }
  return true;
}

// TAABBTreeLeafArray<int,1,double> @ 143df9760

TAABBTreeLeafArray<int,1,double> * __thiscall
Chaos::TAABBTreeLeafArray<int,1,double>::TAABBTreeLeafArray<int,1,double>
          (TAABBTreeLeafArray<int,1,double> *this,TAABBTreeLeafArray<int,1,double> *param_1)

{
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TPayloadBoundsElement<int,double> *pTVar4;
  longlong lVar5;
  
  lVar5 = param_1->_padding_;
  pTVar1 = &this->Elems;
  piVar2 = &(this->Elems).ArrayMax;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  this->_padding_ = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  this->_padding_ = param_1->_padding_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Elems).ArrayNum;
  pTVar4 = (TPayloadBoundsElement<int,double> *)(param_1->Elems).AllocatorInstance.Data;
  (this->Elems).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Chaos::TPayloadBoundsElement<int,double>,Chaos::TPayloadBoundsElement<int,double>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  this->bDirtyLeaf = param_1->bDirtyLeaf;
  return this;
}

// TAABBTreeLeafArray<int,1,double> @ 143df9820

TAABBTreeLeafArray<int,1,double> * __thiscall
Chaos::TAABBTreeLeafArray<int,1,double>::TAABBTreeLeafArray<int,1,double>
          (TAABBTreeLeafArray<int,1,double> *this,
          TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TPayloadBoundsElement<int,double> *pTVar4;
  
  pTVar1 = &this->Elems;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = 0x7fefffffffffffff;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = -0x10000000000001;
  this->_padding_ = -0x10000000000001;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Elems).ArrayMax;
  iVar3 = param_1->ArrayNum;
  pTVar4 = (TPayloadBoundsElement<int,double> *)(param_1->AllocatorInstance).Data;
  (this->Elems).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Chaos::TPayloadBoundsElement<int,double>,Chaos::TPayloadBoundsElement<int,double>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  this->bDirtyLeaf = false;
  TBoundsWrapperHelper<int,double,1>::ComputeBounds
            ((TBoundsWrapperHelper<int,double,1> *)this,pTVar1,false);
  return this;
}

// TAABBTreeLeafArray<int,0,double> @ 143df98f0

TAABBTreeLeafArray<int,0,double> * __thiscall
Chaos::TAABBTreeLeafArray<int,0,double>::TAABBTreeLeafArray<int,0,double>
          (TAABBTreeLeafArray<int,0,double> *this,TAABBTreeLeafArray<int,0,double> *param_1)

{
  int *piVar1;
  int iVar2;
  TPayloadBoundsElement<int,double> *pTVar3;
  
  (this->Elems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Elems).ArrayMax;
  iVar2 = (param_1->Elems).ArrayNum;
  pTVar3 = (TPayloadBoundsElement<int,double> *)(param_1->Elems).AllocatorInstance.Data;
  (this->Elems).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<Chaos::TPayloadBoundsElement<int,double>,Chaos::TPayloadBoundsElement<int,double>,int>
              ((this->Elems).AllocatorInstance.Data,pTVar3,iVar2);
  }
  this->bDirtyLeaf = param_1->bDirtyLeaf;
  return this;
}

// AddElement @ 143e092a0

void __thiscall
Chaos::TAABBTreeLeafArray<int,1,double>::AddElement
          (TAABBTreeLeafArray<int,1,double> *this,TPayloadBoundsElement<int,double> *param_1)

{
  int *piVar1;
  TPayloadBoundsElement<int,double> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar2 = (TPayloadBoundsElement<int,double> *)(this->Elems).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Elems).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Elems).ArrayNum;
  piVar1 = &(this->Elems).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->Elems).AllocatorInstance,piVar1);
  }
  (this->Elems).ArrayNum = iVar6 + 1;
  pFVar7 = (this->Elems).AllocatorInstance.Data + (longlong)iVar6 * 0x38;
  *(int *)pFVar7 = param_1->Payload;
  uVar4 = *(undefined8 *)&(param_1->Bounds).MMin.field_0x8;
  *(undefined8 *)(pFVar7 + 8) = *(undefined8 *)&(param_1->Bounds).MMin;
  *(undefined8 *)(pFVar7 + 0x10) = uVar4;
  *(undefined8 *)(pFVar7 + 0x18) = *(undefined8 *)&(param_1->Bounds).MMin.field_0x10;
  uVar4 = *(undefined8 *)&(param_1->Bounds).MMax.field_0x8;
  *(undefined8 *)(pFVar7 + 0x20) = *(undefined8 *)&(param_1->Bounds).MMax;
  *(undefined8 *)(pFVar7 + 0x28) = uVar4;
  *(undefined8 *)(pFVar7 + 0x30) = *(undefined8 *)&(param_1->Bounds).MMax.field_0x10;
  this->bDirtyLeaf = true;
  return;
}

// AddElement @ 143e09380

void __thiscall
Chaos::TAABBTreeLeafArray<int,0,double>::AddElement
          (TAABBTreeLeafArray<int,0,double> *this,TPayloadBoundsElement<int,double> *param_1)

{
  int *piVar1;
  TPayloadBoundsElement<int,double> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar2 = (TPayloadBoundsElement<int,double> *)(this->Elems).AllocatorInstance.Data;
  if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->Elems).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Elems).ArrayNum;
  piVar1 = &(this->Elems).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,(ForAnyElementType *)this,piVar1);
  }
  (this->Elems).ArrayNum = iVar6 + 1;
  pFVar7 = (this->Elems).AllocatorInstance.Data + (longlong)iVar6 * 0x38;
  *(int *)pFVar7 = param_1->Payload;
  uVar4 = *(undefined8 *)&(param_1->Bounds).MMin.field_0x8;
  *(undefined8 *)(pFVar7 + 8) = *(undefined8 *)&(param_1->Bounds).MMin;
  *(undefined8 *)(pFVar7 + 0x10) = uVar4;
  *(undefined8 *)(pFVar7 + 0x18) = *(undefined8 *)&(param_1->Bounds).MMin.field_0x10;
  uVar4 = *(undefined8 *)&(param_1->Bounds).MMax.field_0x8;
  *(undefined8 *)(pFVar7 + 0x20) = *(undefined8 *)&(param_1->Bounds).MMax;
  *(undefined8 *)(pFVar7 + 0x28) = uVar4;
  *(undefined8 *)(pFVar7 + 0x30) = *(undefined8 *)&(param_1->Bounds).MMax.field_0x10;
  this->bDirtyLeaf = true;
  return;
}

// DebugDrawLeaf @ 143e19c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TAABBTreeLeafArray<int,0,double>::DebugDrawLeaf
          (TAABBTreeLeafArray<int,0,double> *this,ISpacialDebugDrawInterface<double> *param_1,
          FLinearColor *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  float fVar10;
  undefined4 in_XMM3_Db;
  float fVar11;
  undefined1 local_res8 [8];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  
  fVar2 = __real_3f800000;
  local_b0 = ___xmm_7fefffffffffffff7fefffffffffffff;
  dStack_a8 = _UNK_150a9e648;
  local_90 = ___xmm_ffefffffffffffffffefffffffffffff;
  dStack_88 = _UNK_1508ffb58;
  fVar11 = (float)(this->Elems).ArrayNum * __real_3dcccccd;
  fVar10 = __real_3f800000 - fVar11;
  local_a0 = ___xmm_ffefffffffffffff7fefffffffffffff;
  dStack_98 = _UNK_150a9e6d8;
  local_e0 = (double)(fVar11 * FLinearColor::Red.field0_0x0._s_0.R +
                     fVar10 * FLinearColor::Green.field0_0x0._s_0.R);
  local_d8 = (double)(fVar11 * FLinearColor::Red.field0_0x0._s_0.G +
                     fVar10 * FLinearColor::Green.field0_0x0._s_0.G);
  local_d0 = (double)(fVar11 * FLinearColor::Red.field0_0x0._s_0.B +
                     fVar10 * FLinearColor::Green.field0_0x0._s_0.B);
  (**(code **)((longlong)*param_1 + 8))(param_1,&local_b0,&local_e0,CONCAT44(in_XMM3_Db,param_3));
  uVar6 = _UNK_150b1f268;
  dVar5 = ___xmm_3fc999999999999a3ff0000000000000;
  uVar4 = __real_3fc999999999999a;
  dVar3 = __real_3fe0000000000000;
  pFVar8 = (this->Elems).AllocatorInstance.Data;
  iVar1 = (this->Elems).ArrayNum;
  pFVar7 = pFVar8 + 0x28;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->Elems).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,double>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    local_b8 = (*(double *)(pFVar7 + 8) - *(double *)(pFVar7 + -0x10)) * dVar3 +
               *(double *)(pFVar7 + -0x10);
    local_c8 = (*(double *)(pFVar7 + -8) - *(double *)(pFVar7 + -0x20)) * dVar3 +
               *(double *)(pFVar7 + -0x20);
    local_c0 = (*(double *)pFVar7 - *(double *)(pFVar7 + -0x18)) * dVar3 +
               *(double *)(pFVar7 + -0x18);
    local_f8 = (dStack_98 - local_b0) * dVar3 + local_b0;
    dStack_f0 = (local_90 - dStack_a8) * dVar3 + dStack_a8;
    local_e8 = (dStack_88 - local_a0) * dVar3 + local_a0;
    (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_f8,&local_c8,&local_e0,param_3);
    local_e8 = (double)uVar4;
    local_f8 = dVar5;
    dStack_f0 = (double)uVar6;
    (**(code **)((longlong)*param_1 + 8))(param_1,pFVar7 + -0x20,&local_f8,fVar2);
    pFVar8 = pFVar8 + 0x38;
    pFVar7 = pFVar7 + 0x38;
  }
  return;
}

// RemoveElement @ 143e42cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::TAABBTreeLeafArray<int,1,double>::RemoveElement
          (TAABBTreeLeafArray<int,1,double> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if ((this->Elems).ArrayNum < 1) {
    this->bDirtyLeaf = true;
    return;
  }
  lVar9 = 0;
  while( true ) {
    uVar10 = ~uVar8 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar8 < (this->Elems).ArrayNum) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->Elems).ArrayNum;
    if (*(int *)((this->Elems).AllocatorInstance.Data + lVar9) == param_1) break;
    if (uVar8 == iVar7 - 1U) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9181246422089989683>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                         ,0x1cd,"Idx != Elems.Num() - 1");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_Chaos::TAABBTreeLeafArray<int,1,double>::RemoveElement(int)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x38;
    if ((this->Elems).ArrayNum <= (int)uVar8) {
LAB_143e42dfc:
      this->bDirtyLeaf = true;
      return;
    }
  }
  uVar6 = 0;
  if ((int)uVar8 < iVar7) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->Elems).ArrayNum;
  pFVar3 = (this->Elems).AllocatorInstance.Data;
  iVar7 = iVar2 + ~uVar8;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  if (iVar7 != 0) {
    memmove(pFVar3 + (longlong)(int)uVar8 * 0x38,pFVar3 + (longlong)(iVar2 - iVar7) * 0x38,
            (longlong)iVar7 * 0x38);
  }
  piVar1 = &(this->Elems).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x38,8,&(this->Elems).AllocatorInstance,(this->Elems).ArrayNum,&(this->Elems).ArrayMax)
  ;
  goto LAB_143e42dfc;
}

// RemoveElement @ 143e42ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::TAABBTreeLeafArray<int,0,double>::RemoveElement
          (TAABBTreeLeafArray<int,0,double> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar7 = (this->Elems).ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = uVar8;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->Elems).ArrayNum;
      if (*(int *)((this->Elems).AllocatorInstance.Data + lVar10) == param_1) {
        uVar6 = 0;
        if ((int)uVar9 < iVar7) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->Elems).ArrayNum;
        pFVar3 = (this->Elems).AllocatorInstance.Data;
        iVar7 = iVar2 + ~uVar9;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar9 * 0x38,pFVar3 + (longlong)(iVar2 - iVar7) * 0x38,
                  (longlong)iVar7 * 0x38);
        }
        piVar1 = &(this->Elems).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,(ForAnyElementType *)this,(this->Elems).ArrayNum,&(this->Elems).ArrayMax);
        break;
      }
      if (uVar9 == iVar7 - 1U) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9181246422089989683>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\AABBTree.h"
                           ,0x1cd,"Idx != Elems.Num() - 1");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (2 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_Chaos::TAABBTreeLeafArray<int,0,double>::RemoveElement(int)___ptr64'
                      ::__l11::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
      }
      iVar7 = (this->Elems).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x38;
    } while ((int)uVar9 < iVar7);
  }
  this->bDirtyLeaf = true;
  return;
}

// UpdateElement @ 143e5fe90

void __thiscall
Chaos::TAABBTreeLeafArray<int,1,double>::UpdateElement
          (TAABBTreeLeafArray<int,1,double> *this,int *param_1,TAABB<double,3> *param_2,bool param_3
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if (param_3) {
    uVar6 = 0;
    if (0 < (this->Elems).ArrayNum) {
      lVar7 = 0;
      do {
        uVar8 = ~uVar6 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar6 < (this->Elems).ArrayNum) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(int *)((this->Elems).AllocatorInstance.Data + lVar7) == *param_1) {
          uVar5 = 0;
          if ((int)uVar6 < (this->Elems).ArrayNum) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->Elems).AllocatorInstance.Data;
          uVar3 = *(undefined8 *)&(param_2->MMin).field_0x8;
          lVar7 = (longlong)(int)uVar6 * 0x38;
          *(undefined8 *)(pFVar1 + lVar7 + 8) = *(undefined8 *)&param_2->MMin;
          *(undefined8 *)(pFVar1 + lVar7 + 8 + 8) = uVar3;
          *(undefined8 *)(pFVar1 + lVar7 + 0x18) = *(undefined8 *)&(param_2->MMin).field_0x10;
          uVar3 = *(undefined8 *)&(param_2->MMax).field_0x8;
          *(undefined8 *)(pFVar1 + lVar7 + 0x20) = *(undefined8 *)&param_2->MMax;
          *(undefined8 *)(pFVar1 + lVar7 + 0x20 + 8) = uVar3;
          *(undefined8 *)(pFVar1 + lVar7 + 0x30) = *(undefined8 *)&(param_2->MMax).field_0x10;
          uVar5 = 0;
          if ((int)uVar6 < (this->Elems).ArrayNum) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x38;
      } while ((int)uVar6 < (this->Elems).ArrayNum);
    }
    this->bDirtyLeaf = true;
  }
  return;
}

// UpdateElement @ 143e60030

void __thiscall
Chaos::TAABBTreeLeafArray<int,0,double>::UpdateElement
          (TAABBTreeLeafArray<int,0,double> *this,int *param_1,TAABB<double,3> *param_2,bool param_3
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  if (param_3) {
    iVar9 = (this->Elems).ArrayNum;
    uVar6 = 0;
    if (0 < iVar9) {
      lVar7 = 0;
      do {
        uVar8 = ~uVar6 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar6 < iVar9) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = (this->Elems).ArrayNum;
        if (*(int *)((this->Elems).AllocatorInstance.Data + lVar7) == *param_1) {
          uVar5 = 0;
          if ((int)uVar6 < iVar9) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->Elems).AllocatorInstance.Data;
          uVar3 = *(undefined8 *)&(param_2->MMin).field_0x8;
          lVar7 = (longlong)(int)uVar6 * 0x38;
          *(undefined8 *)(pFVar1 + lVar7 + 8) = *(undefined8 *)&param_2->MMin;
          *(undefined8 *)(pFVar1 + lVar7 + 8 + 8) = uVar3;
          *(undefined8 *)(pFVar1 + lVar7 + 0x18) = *(undefined8 *)&(param_2->MMin).field_0x10;
          uVar3 = *(undefined8 *)&(param_2->MMax).field_0x8;
          *(undefined8 *)(pFVar1 + lVar7 + 0x20) = *(undefined8 *)&param_2->MMax;
          *(undefined8 *)(pFVar1 + lVar7 + 0x20 + 8) = uVar3;
          *(undefined8 *)(pFVar1 + lVar7 + 0x30) = *(undefined8 *)&(param_2->MMax).field_0x10;
          uVar5 = 0;
          if ((int)uVar6 < (this->Elems).ArrayNum) {
            uVar5 = uVar8;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x38;
      } while ((int)uVar6 < iVar9);
    }
    this->bDirtyLeaf = true;
  }
  return;
}

