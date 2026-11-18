// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// OverlapFast<Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_> @ 148243760

bool __thiscall
Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::
OverlapFast<Chaos::TSpatialVisitor<FExternalSpatialAccelerationPayload,double>_>
          (TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *this,
          TAABB<double,3> *param_1,
          TSpatialVisitor<FExternalSpatialAccelerationPayload,double> *param_2)

{
  TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
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
  uint uVar47;
  TVector<double,3> *pTVar48;
  longlong lVar49;
  uint uVar50;
  uint uVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  int local_res20;
  uint local_2c8;
  longlong local_2b8;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238;
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8;
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_e0;
  
  pTVar1 = &this->Elems;
  iVar31 = (this->Elems).ArrayNum;
  iVar44 = (int)(iVar31 + (iVar31 >> 0x1f & 3U)) >> 2;
  if (0 < iVar44) {
    local_2b8 = 0;
    local_2c8 = 3;
    local_res20 = 0;
    lVar53 = 0x80;
    do {
      uVar47 = ~local_2c8 >> 0x1f;
      uVar51 = 0;
      if ((int)local_2c8 < (this->Elems).ArrayNum) {
        uVar51 = uVar47;
      }
      if ((uVar51 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      uVar50 = ~(local_2c8 - 3) >> 0x1f;
      dVar2 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x50);
      uVar51 = 0;
      if ((int)(local_2c8 - 1) < (this->Elems).ArrayNum) {
        uVar51 = uVar50;
      }
      if ((uVar51 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      dVar3 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x10);
      uVar51 = 0;
      if ((int)(local_2c8 - 2) < (this->Elems).ArrayNum) {
        uVar51 = uVar50;
      }
      if ((uVar51 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      uVar51 = local_2c8 - 3;
      dVar4 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + -0x30);
      uVar45 = 0;
      if ((int)uVar51 < (this->Elems).ArrayNum) {
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
      dVar5 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + -0x70);
      uVar45 = 0;
      if ((int)local_2c8 < (this->Elems).ArrayNum) {
        uVar45 = uVar47;
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
      dVar6 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x68);
      uVar45 = 0;
      if ((int)(local_2c8 - 1) < (this->Elems).ArrayNum) {
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
      dVar7 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x28);
      uVar45 = 0;
      if ((int)(local_2c8 - 2) < (this->Elems).ArrayNum) {
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
      dVar8 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + -0x18);
      uVar45 = 0;
      if ((int)uVar51 < (this->Elems).ArrayNum) {
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
      dVar9 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + -0x58);
      uVar45 = 0;
      if ((int)local_2c8 < (this->Elems).ArrayNum) {
        uVar45 = uVar47;
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
      dVar10 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x58);
      uVar45 = 0;
      if ((int)(local_2c8 - 1) < (this->Elems).ArrayNum) {
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
      dVar11 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x18);
      uVar45 = 0;
      if ((int)(local_2c8 - 2) < (this->Elems).ArrayNum) {
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
      dVar12 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + -0x28);
      uVar45 = 0;
      if ((int)uVar51 < (this->Elems).ArrayNum) {
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
      dVar13 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + -0x68);
      uVar45 = 0;
      if ((int)local_2c8 < (this->Elems).ArrayNum) {
        uVar45 = uVar47;
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
      dVar14 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x70);
      uVar45 = 0;
      if ((int)(local_2c8 - 1) < (this->Elems).ArrayNum) {
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
      dVar15 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x30);
      uVar45 = 0;
      if ((int)(local_2c8 - 2) < (this->Elems).ArrayNum) {
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
      dVar16 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + -0x10);
      uVar45 = 0;
      if ((int)uVar51 < (this->Elems).ArrayNum) {
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
      dVar17 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + -0x50);
      uVar45 = 0;
      if ((int)local_2c8 < (this->Elems).ArrayNum) {
        uVar45 = uVar47;
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
      dVar18 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x60);
      uVar45 = 0;
      if ((int)(local_2c8 - 1) < (this->Elems).ArrayNum) {
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
      dVar19 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x20);
      uVar45 = 0;
      if ((int)(local_2c8 - 2) < (this->Elems).ArrayNum) {
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
      dVar20 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + -0x20);
      uVar45 = 0;
      if ((int)uVar51 < (this->Elems).ArrayNum) {
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
      dVar21 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + -0x60);
      uVar45 = 0;
      if ((int)local_2c8 < (this->Elems).ArrayNum) {
        uVar45 = uVar47;
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
      dVar22 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x78);
      uVar47 = 0;
      if ((int)(local_2c8 - 1) < (this->Elems).ArrayNum) {
        uVar47 = uVar50;
      }
      if ((uVar47 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      iVar46 = (this->Elems).ArrayNum;
      dVar23 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + 0x38);
      uVar47 = 0;
      if ((int)(local_2c8 - 2) < iVar46) {
        uVar47 = uVar50;
      }
      if (uVar47 == 0) {
        iVar46 = 0x506109c0;
        bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar41) {
          pcVar34 = (code *)swi(3);
          uVar42 = (*pcVar34)();
          return (bool)uVar42;
        }
      }
      dVar24 = *(double *)((pTVar1->AllocatorInstance).Data + lVar53 + -8);
      uVar47 = 0;
      if ((int)uVar51 < (this->Elems).ArrayNum) {
        uVar47 = uVar50;
      }
      if (uVar47 == 0) {
        iVar46 = 0x506109c0;
        bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar41) {
          pcVar34 = (code *)swi(3);
          uVar42 = (*pcVar34)();
          return (bool)uVar42;
        }
      }
      dVar25 = *(double *)&(param_1->MMax).field_0x8;
      dVar26 = *(double *)&(param_1->MMin).field_0x8;
      dVar27 = *(double *)&param_1->MMax;
      dVar28 = *(double *)&param_1->MMin;
      dVar29 = *(double *)&(param_1->MMin).field_0x10;
      dVar30 = *(double *)&(param_1->MMax).field_0x10;
      pFVar32 = (pTVar1->AllocatorInstance).Data;
      auVar56._8_4_ = SUB84(dVar27,0);
      auVar56._0_8_ = dVar27;
      auVar56._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar57._8_8_ = -(ulonglong)(auVar56._8_8_ < dVar4);
      auVar57._0_8_ = -(ulonglong)(dVar27 < dVar5);
      auVar60._8_8_ = -(ulonglong)(dVar27 < dVar2);
      auVar60._0_8_ = -(ulonglong)(dVar27 < dVar3);
      lVar54 = -(ulonglong)(dVar25 < dVar12);
      lVar55 = -(ulonglong)(dVar25 < dVar10);
      auVar61._8_8_ = -(ulonglong)(dVar16 < dVar26);
      auVar61._0_8_ = -(ulonglong)(dVar17 < dVar26);
      auVar35._8_4_ = (int)lVar54;
      auVar35._0_8_ = -(ulonglong)(dVar25 < dVar13);
      auVar35._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
      lVar54 = -(ulonglong)(dVar8 < dVar28);
      auVar36._8_4_ = (int)lVar54;
      auVar36._0_8_ = -(ulonglong)(dVar9 < dVar28);
      auVar36._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
      auVar58._8_8_ = -(ulonglong)(dVar24 < dVar29);
      auVar58._0_8_ = -(ulonglong)(*(double *)(pFVar32 + lVar53 + -0x48) < dVar29);
      lVar54 = -(ulonglong)(dVar30 < dVar20);
      auVar37._8_4_ = (int)lVar54;
      auVar37._0_8_ = -(ulonglong)(dVar30 < dVar21);
      auVar37._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
      auVar62._8_8_ = -(ulonglong)(dVar14 < dVar26);
      auVar62._0_8_ = -(ulonglong)(dVar15 < dVar26);
      lVar54 = -(ulonglong)(dVar6 < dVar28);
      auVar38._8_4_ = (int)lVar54;
      auVar38._0_8_ = -(ulonglong)(dVar7 < dVar28);
      auVar38._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
      uVar47 = movmskpd(iVar46,auVar61 | auVar35 | auVar57 | auVar36 | auVar58 | auVar37);
      auVar39._8_4_ = (int)lVar55;
      auVar39._0_8_ = -(ulonglong)(dVar25 < dVar11);
      auVar39._12_4_ = (int)((ulonglong)lVar55 >> 0x20);
      auVar59._8_8_ = -(ulonglong)(dVar22 < dVar29);
      auVar59._0_8_ = -(ulonglong)(dVar23 < dVar29);
      lVar54 = -(ulonglong)(dVar30 < dVar18);
      auVar40._8_4_ = (int)lVar54;
      auVar40._0_8_ = -(ulonglong)(dVar30 < dVar19);
      auVar40._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
      iVar46 = movmskpd((int)pFVar32,auVar62 | auVar39 | auVar60 | auVar38 | auVar59 | auVar40);
      lVar54 = local_2b8 << 8;
      do {
        if (((uVar47 | iVar46 << 2) >> (local_res20 + uVar51 & 0x1f) & 1) == 0) {
          uVar50 = 0;
          if ((int)uVar51 < (this->Elems).ArrayNum) {
            uVar50 = ~uVar51 >> 0x1f;
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
          local_230 = ZEXT816(0);
          local_220 = 0;
          local_238 = 0;
          pFVar32 = pFVar33 + lVar54;
          local_248 = *(undefined4 *)pFVar32;
          uStack_244 = *(undefined4 *)(pFVar32 + 4);
          uStack_240 = *(undefined4 *)(pFVar32 + 8);
          uStack_23c = *(undefined4 *)(pFVar32 + 0xc);
          local_218 = 0;
          uStack_210 = 0;
          local_208 = 0;
          local_e0 = 0;
          cVar43 = (**(code **)((longlong)*param_2->Visitor + 0x30))(param_2->Visitor,&local_248);
          if (cVar43 == '\0') {
            lVar55 = (**(code **)((longlong)*param_2->Visitor + 0x20))();
            if (lVar55 == 0) {
              (**(code **)((longlong)*param_2->Visitor + 0x28))();
            }
            local_1e0 = *(undefined1 (*) [16])(pFVar33 + lVar54 + 0x10);
            pFVar32 = pFVar33 + lVar54 + 0x28;
            local_1c8 = *(undefined4 *)pFVar32;
            uStack_1c4 = *(undefined4 *)(pFVar32 + 4);
            uStack_1c0 = *(undefined4 *)(pFVar32 + 8);
            uStack_1bc = *(undefined4 *)(pFVar32 + 0xc);
            pFVar32 = pFVar33 + lVar54;
            local_1f8 = *(undefined4 *)pFVar32;
            uStack_1f4 = *(undefined4 *)(pFVar32 + 4);
            uStack_1f0 = *(undefined4 *)(pFVar32 + 8);
            uStack_1ec = *(undefined4 *)(pFVar32 + 0xc);
            local_1d0 = *(undefined8 *)(pFVar33 + lVar54 + 0x20);
            local_1b8 = *(undefined8 *)(pFVar33 + lVar54 + 0x38);
            local_1e8 = 1;
            cVar43 = (**(code **)((longlong)*param_2->Visitor + 8))(param_2->Visitor,&local_1f8);
            if (cVar43 == '\0') {
              return false;
            }
          }
        }
        uVar51 = uVar51 + 1;
        lVar54 = lVar54 + 0x40;
      } while ((int)(uVar51 + local_res20) < 4);
      local_res20 = local_res20 + -4;
      local_2c8 = local_2c8 + 4;
      local_2b8 = local_2b8 + 1;
      lVar53 = lVar53 + 0x100;
    } while (local_2b8 < iVar44);
  }
  uVar51 = iVar44 * 4;
  if ((int)uVar51 < iVar31) {
    lVar54 = (longlong)(int)uVar51;
    lVar53 = lVar54 << 6;
    do {
      uVar47 = 0;
      if ((int)uVar51 < (this->Elems).ArrayNum) {
        uVar47 = ~uVar51 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar34 = (code *)swi(3);
        uVar42 = (*pcVar34)();
        return (bool)uVar42;
      }
      pFVar33 = (pTVar1->AllocatorInstance).Data;
      local_180 = 0;
      local_198 = 0;
      pFVar32 = pFVar33 + lVar53;
      local_1a8 = *(undefined4 *)pFVar32;
      uStack_1a4 = *(undefined4 *)(pFVar32 + 4);
      uStack_1a0 = *(undefined4 *)(pFVar32 + 8);
      uStack_19c = *(undefined4 *)(pFVar32 + 0xc);
      local_190 = 0;
      uStack_188 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      local_e0 = 0;
      cVar43 = (**(code **)((longlong)*param_2->Visitor + 0x30))();
      if (cVar43 == '\0') {
        lVar55 = (**(code **)((longlong)*param_2->Visitor + 0x20))();
        if (lVar55 == 0) {
          (**(code **)((longlong)*param_2->Visitor + 0x28))();
        }
        lVar49 = 0;
        pTVar48 = &param_1->MMax;
        lVar55 = (lVar53 + 0x10) - (longlong)pTVar48;
        lVar52 = -(longlong)pTVar48;
        do {
          if ((*(double *)pTVar48 <= *(double *)(pFVar33 + lVar55 + (longlong)pTVar48) &&
               *(double *)(pFVar33 + lVar55 + (longlong)pTVar48) != *(double *)pTVar48) ||
             (*(double *)(pFVar33 + lVar52 + lVar53 + 0x10 + 0x18 + (longlong)pTVar48) <
              *(double *)((longlong)pTVar48 + lVar52 + (longlong)param_1))) goto LAB_148244416;
          lVar49 = lVar49 + 1;
          pTVar48 = (TVector<double,3> *)&pTVar48->field_0x8;
        } while (lVar49 < 3);
        local_158 = *(undefined8 *)(pFVar33 + lVar53);
        uStack_150 = *(undefined8 *)(pFVar33 + lVar53 + 8);
        local_130 = *(undefined8 *)(pFVar33 + lVar53 + 0x20);
        local_140 = *(undefined8 *)(pFVar33 + lVar53 + 0x10);
        uStack_138 = *(undefined8 *)(pFVar33 + lVar53 + 0x10 + 8);
        local_148 = 1;
        local_118 = *(undefined8 *)(pFVar33 + lVar53 + 0x38);
        pFVar33 = pFVar33 + lVar53 + 0x28;
        local_128 = *(undefined4 *)pFVar33;
        uStack_124 = *(undefined4 *)(pFVar33 + 4);
        uStack_120 = *(undefined4 *)(pFVar33 + 8);
        uStack_11c = *(undefined4 *)(pFVar33 + 0xc);
        cVar43 = (**(code **)((longlong)*param_2->Visitor + 8))(param_2->Visitor,&local_158);
        if (cVar43 == '\0') {
          return false;
        }
      }
LAB_148244416:
      uVar51 = uVar51 + 1;
      lVar54 = lVar54 + 1;
      lVar53 = lVar53 + 0x40;
    } while (lVar54 < iVar31);
  }
  return true;
}

// TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> @ 14824d730

TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> * __thiscall
Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::
TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>
          (TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *this,
          TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *param_1)

{
  TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *pTVar4;
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
  pTVar4 = (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)
           (param_1->Elems).AllocatorInstance.Data;
  (this->Elems).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  this->bDirtyLeaf = param_1->bDirtyLeaf;
  return this;
}

// TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> @ 14824d7f0

TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> * __thiscall
Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::
TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>
          (TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *this,
          TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TArray<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *pTVar4;
  
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
  pTVar4 = (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)
           (param_1->AllocatorInstance).Data;
  (this->Elems).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,Chaos::TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar4,iVar3);
  }
  this->bDirtyLeaf = false;
  TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1>::ComputeBounds
            ((TBoundsWrapperHelper<FExternalSpatialAccelerationPayload,double,1> *)this,pTVar1,false
            );
  return this;
}

// AddElement @ 148263610

void __thiscall
Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::AddElement
          (TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *this,
          TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *param_1)

{
  int *piVar1;
  FObjectKey *pFVar2;
  TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  FUniqueIdx FVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  
  pTVar3 = (TPayloadBoundsElement<FExternalSpatialAccelerationPayload,double> *)
           (this->Elems).AllocatorInstance.Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->Elems).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar10 = (this->Elems).ArrayNum;
  piVar1 = &(this->Elems).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&(this->Elems).AllocatorInstance,piVar1);
  }
  (this->Elems).ArrayNum = iVar10 + 1;
  iVar7 = (param_1->Payload).BoneId;
  FVar8.Idx = (param_1->Payload).CachedUniqueIdx.Idx;
  pFVar4 = (this->Elems).AllocatorInstance.Data;
  lVar11 = (longlong)iVar10 * 0x40;
  pFVar2 = (FObjectKey *)(pFVar4 + lVar11);
  *pFVar2 = (param_1->Payload).Component.ObjectKey;
  pFVar2[1].ObjectIndex = iVar7;
  pFVar2[1].ObjectSerialNumber = FVar8.Idx;
  uVar6 = *(undefined8 *)&(param_1->Bounds).MMin.field_0x8;
  *(undefined8 *)(pFVar4 + lVar11 + 0x10) = *(undefined8 *)&(param_1->Bounds).MMin;
  *(undefined8 *)(pFVar4 + lVar11 + 0x10 + 8) = uVar6;
  *(undefined8 *)(pFVar4 + lVar11 + 0x20) = *(undefined8 *)&(param_1->Bounds).MMin.field_0x10;
  uVar6 = *(undefined8 *)&(param_1->Bounds).MMax.field_0x8;
  *(undefined8 *)(pFVar4 + lVar11 + 0x28) = *(undefined8 *)&(param_1->Bounds).MMax;
  *(undefined8 *)(pFVar4 + lVar11 + 0x28 + 8) = uVar6;
  *(undefined8 *)(pFVar4 + lVar11 + 0x38) = *(undefined8 *)&(param_1->Bounds).MMax.field_0x10;
  this->bDirtyLeaf = true;
  return;
}

// RemoveElement @ 1482a3f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::RemoveElement
          (TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *this,
          FExternalSpatialAccelerationPayload *param_1)

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
  
  uVar8 = 0;
  if ((this->Elems).ArrayNum < 1) {
    this->bDirtyLeaf = true;
    return;
  }
  lVar10 = 0;
  while( true ) {
    uVar9 = ~uVar8 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar8 < (this->Elems).ArrayNum) {
      uVar6 = uVar9;
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
    pFVar3 = (this->Elems).AllocatorInstance.Data;
    if (((*(int *)(pFVar3 + lVar10) == (param_1->Component).ObjectKey.ObjectIndex) &&
        (*(int *)(pFVar3 + lVar10 + 4) == (param_1->Component).ObjectKey.ObjectSerialNumber)) &&
       (*(int *)(pFVar3 + lVar10 + 8) == param_1->BoneId)) break;
    if (uVar8 == (this->Elems).ArrayNum - 1U) {
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
                  (&`public:_void___cdecl_Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::RemoveElement(FExternalSpatialAccelerationPayload)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    uVar8 = uVar8 + 1;
    lVar10 = lVar10 + 0x40;
    if ((this->Elems).ArrayNum <= (int)uVar8) {
LAB_1482a412c:
      this->bDirtyLeaf = true;
      return;
    }
  }
  uVar6 = 0;
  if ((int)uVar8 < (this->Elems).ArrayNum) {
    uVar6 = uVar9;
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
    memmove(pFVar3 + (longlong)(int)uVar8 * 0x40,pFVar3 + (longlong)(iVar2 - iVar7) * 0x40,
            (longlong)iVar7 << 6);
  }
  piVar1 = &(this->Elems).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,&(this->Elems).AllocatorInstance,(this->Elems).ArrayNum,&(this->Elems).ArrayMax)
  ;
  goto LAB_1482a412c;
}

// UpdateElement @ 1482ba130

void __thiscall
Chaos::TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double>::UpdateElement
          (TAABBTreeLeafArray<FExternalSpatialAccelerationPayload,1,double> *this,
          FExternalSpatialAccelerationPayload *param_1,TAABB<double,3> *param_2,bool param_3)

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
        pFVar1 = (this->Elems).AllocatorInstance.Data;
        if (((*(int *)(pFVar1 + lVar8) == (param_1->Component).ObjectKey.ObjectIndex) &&
            (*(int *)(pFVar1 + lVar8 + 4) == (param_1->Component).ObjectKey.ObjectSerialNumber)) &&
           (*(int *)(pFVar1 + lVar8 + 8) == param_1->BoneId)) {
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
          lVar8 = (longlong)(int)uVar6 * 0x40;
          *(undefined8 *)(pFVar1 + lVar8 + 0x10) = *(undefined8 *)&param_2->MMin;
          *(undefined8 *)(pFVar1 + lVar8 + 0x10 + 8) = uVar3;
          *(undefined8 *)(pFVar1 + lVar8 + 0x20) = *(undefined8 *)&(param_2->MMin).field_0x10;
          uVar3 = *(undefined8 *)&(param_2->MMax).field_0x8;
          *(undefined8 *)(pFVar1 + lVar8 + 0x28) = *(undefined8 *)&param_2->MMax;
          *(undefined8 *)(pFVar1 + lVar8 + 0x28 + 8) = uVar3;
          *(undefined8 *)(pFVar1 + lVar8 + 0x38) = *(undefined8 *)&(param_2->MMax).field_0x10;
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
          break;
        }
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x40;
      } while ((int)uVar6 < (this->Elems).ArrayNum);
    }
    this->bDirtyLeaf = true;
  }
  return;
}

