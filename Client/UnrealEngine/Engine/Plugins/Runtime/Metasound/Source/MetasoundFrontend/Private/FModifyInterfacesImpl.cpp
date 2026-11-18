// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 7

// FModifyInterfacesImpl @ 14addd0b0

FModifyInterfacesImpl * __thiscall
Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl
          (FModifyInterfacesImpl *this,FMetasoundFrontendDocument *param_1,
          FModifyInterfaceOptions *param_2)

{
  FMetasoundFrontendClassInput *pFVar1;
  FMetasoundFrontendDocument *pFVar2;
  FMetaSoundFrontendDocumentBuilder *this_00;
  FName FVar3;
  FName *pFVar4;
  FMetasoundFrontendClassVertex *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *pTVar9;
  int *piVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FModifyInterfacesImpl *pFVar16;
  FDocumentIDGenerator *pFVar17;
  FMetasoundFrontendClassOutput *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FMetasoundFrontendClassInput *pFVar21;
  FName *pFVar22;
  FMetasoundFrontendClassVertex *pFVar23;
  TArray<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>
  *pTVar24;
  TArray<TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>
  *pTVar25;
  uint uVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *pTVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  FName *pFVar33;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *pTVar34;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_2c8 [8];
  TArray<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>
  *local_2c0;
  ulonglong local_2b8;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *local_2b0;
  TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
  *local_2a8;
  TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *local_2a0;
  FModifyInterfacesImpl *local_298;
  TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
  *local_290;
  TArray<TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>
  *local_288;
  int *local_280;
  int *local_278;
  int *local_270;
  int *local_268;
  int *local_260;
  undefined1 local_258 [56];
  void *local_220;
  undefined8 local_218;
  undefined8 local_210;
  FGuid local_208;
  FGuid local_1f8;
  FScriptContainerElement *local_1e8;
  FModifyInterfacesImpl *local_1e0;
  FScriptContainerElement *local_1d8;
  FModifyInterfacesImpl *local_1d0;
  FName local_1c8;
  FName FStack_1c0;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint local_198;
  undefined4 uStack_194;
  FScriptContainerElement *pFStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FModifyInterfacesImpl *local_b8;
  FScriptContainerElement *local_b0;
  FModifyInterfacesImpl **local_a8;
  FName local_98;
  FName FStack_90;
  FName local_88;
  FName FStack_80;
  FName local_78;
  FName FStack_70;
  FName local_68;
  FName FStack_60;
  
  (this->Options).InterfacesToRemove.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Options).InterfacesToRemove.AllocatorInstance.Data =
       (param_2->InterfacesToRemove).AllocatorInstance.Data;
  (param_2->InterfacesToRemove).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Options).InterfacesToRemove.ArrayNum = (param_2->InterfacesToRemove).ArrayNum;
  (this->Options).InterfacesToRemove.ArrayMax = (param_2->InterfacesToRemove).ArrayMax;
  (param_2->InterfacesToRemove).ArrayNum = 0;
  (param_2->InterfacesToRemove).ArrayMax = 0;
  (this->Options).InterfacesToAdd.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Options).InterfacesToAdd.AllocatorInstance.Data =
       (param_2->InterfacesToAdd).AllocatorInstance.Data;
  (param_2->InterfacesToAdd).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Options).InterfacesToAdd.ArrayNum = (param_2->InterfacesToAdd).ArrayNum;
  (this->Options).InterfacesToAdd.ArrayMax = (param_2->InterfacesToAdd).ArrayMax;
  (param_2->InterfacesToAdd).ArrayNum = 0;
  (param_2->InterfacesToAdd).ArrayMax = 0;
  *(undefined8 *)&(this->Options).NamePairingFunction = *(undefined8 *)&param_2->NamePairingFunction
  ;
  *(undefined8 *)&(this->Options).NamePairingFunction.field_0x28 =
       *(undefined8 *)&(param_2->NamePairingFunction).field_0x28;
  *(undefined8 *)&(param_2->NamePairingFunction).field_0x28 = 0;
  uVar7 = *(undefined8 *)&(param_2->NamePairingFunction).field_0x18;
  *(undefined8 *)&(this->Options).NamePairingFunction.field_0x10 =
       *(undefined8 *)&(param_2->NamePairingFunction).field_0x10;
  *(undefined8 *)&(this->Options).NamePairingFunction.field_0x18 = uVar7;
  *(undefined8 *)&(this->Options).NamePairingFunction.field_0x20 =
       *(undefined8 *)&(param_2->NamePairingFunction).field_0x20;
  if (*(longlong *)&(this->Options).NamePairingFunction != 0) {
    *(undefined8 *)&param_2->NamePairingFunction = 0;
  }
  local_2a0 = (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *)
              &this->OutputsToRemove;
  (this->Options).ReferencedBuilder = param_2->ReferencedBuilder;
  local_2a8 = &this->PairedInputs;
  this->Document = param_1;
  (this->PairedInputs).ArrayMax = 0;
  local_280 = &(this->PairedInputs).ArrayMax;
  local_290 = &this->PairedOutputs;
  local_278 = &(this->PairedOutputs).ArrayMax;
  *local_278 = 0;
  local_2c0 = &this->InputsToAdd;
  (local_2c0->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InputsToAdd).ArrayNum = 0;
  (this->InputsToAdd).ArrayMax = 0;
  local_288 = &this->OutputsToAdd;
  (local_288->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OutputsToAdd).ArrayNum = 0;
  local_270 = &(this->OutputsToAdd).ArrayMax;
  (this->PairedInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PairedInputs).ArrayNum = 0;
  (this->PairedOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *local_270 = 0;
  (this->PairedOutputs).ArrayNum = 0;
  local_2b0 = &this->InputsToRemove;
  (local_2b0->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_268 = &(this->InputsToRemove).ArrayNum;
  (this->InputsToRemove).ArrayMax = 0;
  (this->OutputsToRemove).ArrayNum = 0;
  *local_268 = 0;
  (((TArray<FMetasoundFrontendClassOutput,TSizedDefaultAllocator<32>_> *)local_2a0)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OutputsToRemove).ArrayMax = 0;
  iVar15 = (this->Options).InterfacesToRemove.ArrayNum;
  pTVar34 = (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *)
            (this->Options).InterfacesToRemove.AllocatorInstance.Data;
  local_260 = &(this->OutputsToRemove).ArrayNum;
  pTVar30 = pTVar34 + (longlong)iVar15 * 6;
  while( true ) {
    if ((this->Options).InterfacesToRemove.ArrayNum != iVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendInterface_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pTVar34 == pTVar30) break;
    pFVar2 = this->Document;
    uVar26 = pTVar34[4].ArrayNum;
    iVar13 = pTVar34[4].ArrayMax;
    pFVar28 = pTVar34[4].AllocatorInstance.Data;
    uVar12 = ::GetTypeHash((FNameEntryId)(uint)pFVar28);
    uVar12 = uVar12 + (int)((ulonglong)pFVar28 >> 0x20);
    iVar13 = TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FMetasoundFrontendVersion>
                       (&pFVar2->Interfaces,
                        (uVar12 >> 2) +
                        uVar12 * 0x40 + -0x61c88647 +
                        ((uVar26 >> 2) + iVar13 + uVar26 * 0x40 + -0x61c88647 ^ uVar26) ^ uVar12,
                        (FMetasoundFrontendVersion *)(pTVar34 + 4));
    pTVar9 = local_2b0;
    if (iVar13 != -1) {
      if ((local_2b0 == pTVar34) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
        return pFVar16;
      }
      iVar13 = pTVar34->ArrayNum;
      if (iVar13 != 0) {
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x48,8,iVar13,&pTVar9->AllocatorInstance,&pTVar9->ArrayNum,
                            &pTVar9->ArrayMax);
        ConstructItems<FMetasoundFrontendClassInput,FMetasoundFrontendClassInput,int>
                  ((pTVar9->AllocatorInstance).Data + (longlong)iVar14 * 0x48,
                   (FMetasoundFrontendClassInput *)(pTVar34->AllocatorInstance).Data,iVar13);
      }
      pTVar9 = local_2a0;
      if ((local_2a0 == pTVar34 + 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
        return pFVar16;
      }
      iVar13 = pTVar34[1].ArrayNum;
      if (iVar13 != 0) {
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x34,4,iVar13,&pTVar9->AllocatorInstance,&pTVar9->ArrayNum,
                            &pTVar9->ArrayMax);
        memcpy((pTVar9->AllocatorInstance).Data + (longlong)iVar14 * 0x34,
               pTVar34[1].AllocatorInstance.Data,(longlong)iVar13 * 0x34);
      }
    }
    pTVar34 = pTVar34 + 6;
  }
  iVar15 = (this->Options).InterfacesToAdd.ArrayNum;
  uVar32 = (ulonglong)iVar15;
  pFVar28 = (this->Options).InterfacesToAdd.AllocatorInstance.Data;
  local_2b8 = CONCAT44(local_2b8._4_4_,iVar15);
  pFVar31 = pFVar28 + uVar32 * 0x60;
  local_298 = this;
  while( true ) {
    if ((this->Options).InterfacesToAdd.ArrayNum != (int)uVar32) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendInterface_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    pTVar24 = local_2c0;
    if (pFVar28 == pFVar31) break;
    pFVar21 = *(FMetasoundFrontendClassInput **)pFVar28;
    local_a8 = &local_298;
    iVar15 = *(int *)(pFVar28 + 8);
    pFVar1 = pFVar21 + iVar15;
    local_b8 = this;
    local_b0 = pFVar28;
    while( true ) {
      if (*(int *)(pFVar28 + 8) != iVar15) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      piVar10 = local_270;
      if (pFVar21 == pFVar1) break;
      `Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl'::
      __l13::<lambda_2>::operator()
                (&local_b8,
                 (TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*> *)
                 local_258,pFVar21);
      pFVar20 = (pTVar24->AllocatorInstance).Data;
      if (((pFVar20 <= (FScriptContainerElement *)local_258) &&
          ((FScriptContainerElement *)local_258 < pFVar20 + (longlong)pTVar24->ArrayMax * 0x50)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
        return pFVar16;
      }
      iVar13 = pTVar24->ArrayNum;
      if (iVar13 == pTVar24->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&pTVar24->AllocatorInstance,&pTVar24->ArrayMax);
      }
      pTVar24->ArrayNum = iVar13 + 1;
      pFVar20 = (pTVar24->AllocatorInstance).Data + (longlong)iVar13 * 0x50;
      *(undefined8 *)pFVar20 = local_258._0_8_;
      *(undefined8 *)(pFVar20 + 8) = local_258._8_8_;
      *(undefined8 *)(pFVar20 + 0x10) = local_258._16_8_;
      *(undefined8 *)(pFVar20 + 0x18) = local_258._24_8_;
      *(undefined8 *)(pFVar20 + 0x20) = local_258._32_8_;
      *(undefined8 *)(pFVar20 + 0x28) = local_258._40_8_;
      *(undefined4 *)(pFVar20 + 0x30) = local_258._48_4_;
      *(undefined8 *)(pFVar20 + 0x38) = 0;
      *(void **)(pFVar20 + 0x38) = local_220;
      local_220 = (void *)0x0;
      *(undefined4 *)(pFVar20 + 0x40) = (undefined4)local_218;
      *(undefined4 *)(pFVar20 + 0x44) = local_218._4_4_;
      local_218 = 0;
      *(undefined8 *)(pFVar20 + 0x48) = local_210;
      DestructItems<FMetasoundFrontendClassInputDefault,int>
                ((FMetasoundFrontendClassInputDefault *)0x0,0);
      if (local_220 != (void *)0x0) {
        FMemory::Free(local_220);
      }
      pFVar21 = pFVar21 + 1;
    }
    iVar15 = *(int *)(pFVar28 + 0x18);
    pFVar22 = *(FName **)(pFVar28 + 0x10);
    pFVar33 = (FName *)((longlong)iVar15 * 0x34 + (longlong)pFVar22);
    while( true ) {
      if (*(int *)(pFVar28 + 0x18) != iVar15) {
        local_2c8[0] = 0;
        `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2c8);
      }
      if (pFVar22 == pFVar33) break;
      local_98 = *pFVar22;
      FStack_90 = pFVar22[1];
      uVar26 = pFVar22[6].ComparisonIndex.Value;
      local_68 = pFVar22[4];
      FStack_60 = pFVar22[5];
      local_78 = pFVar22[2];
      FStack_70 = pFVar22[3];
      local_88 = local_98;
      FStack_80 = FStack_90;
      pFVar17 = FDocumentIDGenerator::Get();
      FDocumentIDGenerator::CreateVertexID(pFVar17,&local_208,local_298->Document);
      pFVar17 = FDocumentIDGenerator::Get();
      FDocumentIDGenerator::CreateNodeID(pFVar17,&local_1f8,local_298->Document);
      this_00 = (local_298->Options).ReferencedBuilder;
      if (((this_00 != (FMetaSoundFrontendDocumentBuilder *)0x0) &&
          (pFVar18 = FMetaSoundFrontendDocumentBuilder::FindGraphOutput(this_00,local_88),
          pFVar18 != (FMetasoundFrontendClassOutput *)0x0)) &&
         (FVar3.ComparisonIndex.Value = *(uint *)&pFVar18->field_0x8,
         FVar3.Number = *(uint *)&pFVar18->field_0xc, FVar3 == FStack_80)) {
        local_1f8.A = *(uint *)&pFVar18->field_0x20;
        local_1f8.B = *(uint *)&pFVar18->field_0x24;
        local_1f8.C = *(uint *)&pFVar18->field_0x28;
        local_1f8.D = *(uint *)&pFVar18->field_0x2c;
        local_208.A = *(uint *)&pFVar18->field_0x10;
        local_208.B = *(uint *)&pFVar18->field_0x14;
        local_208.C = *(uint *)&pFVar18->field_0x18;
        local_208.D = *(uint *)&pFVar18->field_0x1c;
      }
      pTVar25 = local_288;
      local_1c8 = local_98;
      FStack_1c0 = FStack_90;
      pFVar4 = (FName *)(local_288->AllocatorInstance).Data;
      local_1b8 = local_208.A;
      uStack_1b4 = local_208.B;
      uStack_1b0 = local_208.C;
      uStack_1ac = local_208.D;
      local_1a8 = local_1f8.A;
      uStack_1a4 = local_1f8.B;
      uStack_1a0 = local_1f8.C;
      uStack_19c = local_1f8.D;
      local_198 = uVar26;
      pFStack_190 = pFVar28;
      if (((pFVar4 <= &local_1c8) && (&local_1c8 < pFVar4 + (longlong)*piVar10 * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
        return pFVar16;
      }
      iVar13 = pTVar25->ArrayNum;
      if (iVar13 == *piVar10) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&pTVar25->AllocatorInstance,piVar10);
      }
      pTVar25->ArrayNum = iVar13 + 1;
      pFVar20 = (pTVar25->AllocatorInstance).Data;
      lVar19 = (longlong)iVar13 * 0x40;
      pFVar22 = (FName *)&pFVar22[6].Number;
      *(FName *)(pFVar20 + lVar19) = local_1c8;
      ((FName *)(pFVar20 + lVar19))[1] = FStack_1c0;
      *(ulonglong *)(pFVar20 + lVar19 + 0x10) = CONCAT44(uStack_1b4,local_1b8);
      *(ulonglong *)(pFVar20 + lVar19 + 0x10 + 8) = CONCAT44(uStack_1ac,uStack_1b0);
      *(ulonglong *)(pFVar20 + lVar19 + 0x20) = CONCAT44(uStack_1a4,local_1a8);
      *(ulonglong *)(pFVar20 + lVar19 + 0x20 + 8) = CONCAT44(uStack_19c,uStack_1a0);
      *(ulonglong *)(pFVar20 + lVar19 + 0x30) = CONCAT44(uStack_194,local_198);
      *(FScriptContainerElement **)(pFVar20 + lVar19 + 0x30 + 8) = pFStack_190;
    }
    uVar32 = local_2b8 & 0xffffffff;
    pFVar28 = pFVar28 + 0x60;
  }
  uVar26 = local_2c0->ArrayNum - 1;
  if (-1 < (int)uVar26) {
    pTVar34 = &this->InputsToRemove;
    uVar32 = (longlong)(int)uVar26 * 0x50;
    do {
      uVar29 = ~uVar26 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar26 < pTVar24->ArrayNum) {
        uVar12 = uVar29;
      }
      local_2b8 = uVar32;
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
        return pFVar16;
      }
      iVar15 = pTVar34->ArrayNum;
      local_1e8 = (pTVar24->AllocatorInstance).Data + uVar32;
      pFVar5 = (FMetasoundFrontendClassVertex *)(pTVar34->AllocatorInstance).Data;
      local_1e0 = this;
      for (pFVar23 = pFVar5;
          pFVar23 != (FMetasoundFrontendClassVertex *)((longlong)pFVar5 + (longlong)iVar15 * 0x48);
          pFVar23 = (FMetasoundFrontendClassVertex *)&pFVar23[1].field_0x14) {
        bVar11 = `Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::
                 FModifyInterfacesImpl'::__l15::<lambda_4>::operator()(&local_1e8,pFVar23);
        if (bVar11) {
          lVar19 = ((longlong)pFVar23 - (longlong)pFVar5) / 0x12 +
                   ((longlong)pFVar23 - (longlong)pFVar5 >> 0x3f);
          uVar12 = (int)(lVar19 >> 2) - (int)(lVar19 >> 0x3f);
          goto LAB_14addd7e2;
        }
      }
      uVar12 = 0xffffffff;
LAB_14addd7e2:
      pTVar24 = local_2c0;
      if (uVar12 != 0xffffffff) {
        uVar27 = 0;
        if ((int)uVar12 < (this->InputsToRemove).ArrayNum) {
          uVar27 = ~uVar12 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
          return pFVar16;
        }
        pFVar28 = (local_2b0->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x48;
        uVar27 = 0;
        if ((int)uVar26 < (this->InputsToAdd).ArrayNum) {
          uVar27 = uVar29;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
          return pFVar16;
        }
        uVar32 = local_2b8;
        local_188 = *(undefined8 *)pFVar28;
        uStack_180 = *(undefined8 *)(pFVar28 + 8);
        local_178 = *(undefined8 *)(pFVar28 + 0x10);
        uStack_170 = *(undefined8 *)(pFVar28 + 0x18);
        pFVar31 = (local_2a8->AllocatorInstance).Data;
        local_168 = *(undefined8 *)(pFVar28 + 0x20);
        uStack_160 = *(undefined8 *)(pFVar28 + 0x28);
        local_158 = *(undefined4 *)(pFVar28 + 0x30);
        pFVar28 = (this->InputsToAdd).AllocatorInstance.Data;
        uVar7 = *(undefined8 *)(pFVar28 + local_2b8);
        uVar8 = *(undefined8 *)(pFVar28 + local_2b8 + 8);
        uStack_154 = (undefined4)uVar7;
        uStack_150 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_14c = (undefined4)uVar8;
        uStack_148 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uVar7 = *(undefined8 *)(pFVar28 + local_2b8 + 0x10);
        uVar8 = *(undefined8 *)(pFVar28 + local_2b8 + 0x10 + 8);
        uStack_144 = (undefined4)uVar7;
        uStack_140 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_13c = (undefined4)uVar8;
        uStack_138 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uVar7 = *(undefined8 *)(pFVar28 + local_2b8 + 0x20);
        uVar8 = *(undefined8 *)(pFVar28 + local_2b8 + 0x20 + 8);
        local_134 = (undefined4)uVar7;
        uStack_130 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_12c = (undefined4)uVar8;
        uStack_128 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_124 = *(undefined4 *)(pFVar28 + local_2b8 + 0x30);
        if (((pFVar31 <= (FScriptContainerElement *)&local_188) &&
            ((FScriptContainerElement *)&local_188 < pFVar31 + (longlong)*local_280 * 0x68)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
          return pFVar16;
        }
        iVar15 = local_2a8->ArrayNum;
        if (iVar15 == *local_280) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x468,&local_2a8->AllocatorInstance,local_280);
        }
        local_2a8->ArrayNum = iVar15 + 1;
        lVar19 = (longlong)iVar15 * 0x68;
        pFVar28 = (local_2a8->AllocatorInstance).Data;
        *(undefined8 *)(pFVar28 + lVar19) = local_188;
        *(undefined8 *)(pFVar28 + lVar19 + 8) = uStack_180;
        *(undefined8 *)(pFVar28 + lVar19 + 0x10) = local_178;
        *(undefined8 *)(pFVar28 + lVar19 + 0x10 + 8) = uStack_170;
        *(undefined8 *)(pFVar28 + lVar19 + 0x20) = local_168;
        *(undefined8 *)(pFVar28 + lVar19 + 0x20 + 8) = uStack_160;
        *(ulonglong *)(pFVar28 + lVar19 + 0x30) = CONCAT44(uStack_154,local_158);
        *(ulonglong *)(pFVar28 + lVar19 + 0x30 + 8) = CONCAT44(uStack_14c,uStack_150);
        *(ulonglong *)(pFVar28 + lVar19 + 0x40) = CONCAT44(uStack_144,uStack_148);
        *(ulonglong *)(pFVar28 + lVar19 + 0x40 + 8) = CONCAT44(uStack_13c,uStack_140);
        *(ulonglong *)(pFVar28 + lVar19 + 0x50) = CONCAT44(local_134,uStack_138);
        *(ulonglong *)(pFVar28 + lVar19 + 0x50 + 8) = CONCAT44(uStack_12c,uStack_130);
        *(ulonglong *)(pFVar28 + lVar19 + 0x60) = CONCAT44(uStack_124,uStack_128);
        uVar27 = 0;
        if ((int)uVar12 < *local_268) {
          uVar27 = ~uVar12 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
          return pFVar16;
        }
        TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (local_2b0,uVar12);
        pTVar24 = local_2c0;
        uVar12 = 0;
        if ((int)uVar26 < local_2c0->ArrayNum) {
          uVar12 = uVar29;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
          return pFVar16;
        }
        TArray<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(pTVar24,uVar26);
        local_2b8 = uVar32;
        pTVar34 = local_2b0;
      }
      uVar32 = local_2b8 - 0x50;
      uVar26 = uVar26 - 1;
      local_2b8 = uVar32;
    } while (-1 < (int)uVar26);
  }
  uVar26 = (this->OutputsToAdd).ArrayNum - 1;
  if (-1 < (int)uVar26) {
    local_2c0 = (TArray<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>
                 *)(longlong)(int)uVar26;
    lVar19 = (longlong)local_2c0 << 6;
    pTVar25 = local_288;
    pTVar34 = local_2a0;
    do {
      local_2a8 = (TArray<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>,TSizedDefaultAllocator<32>_>
                   *)CONCAT44(local_2a8._4_4_,~uVar26);
      uVar29 = ~uVar26 >> 0x1f;
      local_2b8 = CONCAT44(local_2b8._4_4_,uVar29);
      uVar12 = 0;
      if ((int)uVar26 < pTVar25->ArrayNum) {
        uVar12 = uVar29;
      }
      local_2b0 = (TArray<FMetasoundFrontendClassInput,TSizedDefaultAllocator<32>_> *)lVar19;
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
        return pFVar16;
      }
      pFVar5 = (FMetasoundFrontendClassVertex *)(pTVar34->AllocatorInstance).Data;
      iVar15 = pTVar34->ArrayNum;
      local_1d8 = (pTVar25->AllocatorInstance).Data + lVar19;
      local_1d0 = this;
      for (pFVar23 = pFVar5; pFVar23 != pFVar5 + iVar15; pFVar23 = pFVar23 + 1) {
        bVar11 = `Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::
                 FModifyInterfacesImpl'::__l20::<lambda_5>::operator()(&local_1d8,pFVar23);
        if (bVar11) {
          uVar12 = (uint)(((longlong)pFVar23 - (longlong)pFVar5) / 0x34);
          goto LAB_14adddbe2;
        }
      }
      uVar12 = 0xffffffff;
LAB_14adddbe2:
      pTVar25 = local_288;
      if (uVar12 != 0xffffffff) {
        uVar27 = ~uVar12 >> 0x1f;
        uVar29 = 0;
        if ((int)uVar12 < (this->OutputsToRemove).ArrayNum) {
          uVar29 = uVar27;
        }
        if ((uVar29 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
          return pFVar16;
        }
        pFVar28 = (local_2a0->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x34;
        iVar15 = 0;
        if ((int)uVar26 < (this->OutputsToAdd).ArrayNum) {
          iVar15 = (int)local_2b8;
        }
        if ((iVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
          return pFVar16;
        }
        pTVar34 = local_2b0;
        local_120 = *(undefined8 *)pFVar28;
        uStack_118 = *(undefined8 *)(pFVar28 + 8);
        local_110 = *(undefined8 *)(pFVar28 + 0x10);
        uStack_108 = *(undefined8 *)(pFVar28 + 0x18);
        pFVar31 = (local_290->AllocatorInstance).Data;
        local_100 = *(undefined8 *)(pFVar28 + 0x20);
        uStack_f8 = *(undefined8 *)(pFVar28 + 0x28);
        local_f0 = *(undefined4 *)(pFVar28 + 0x30);
        pFVar28 = (this->OutputsToAdd).AllocatorInstance.Data;
        uVar7 = *(undefined8 *)(pFVar28 + (longlong)local_2b0);
        uVar8 = *(undefined8 *)(pFVar28 + (longlong)local_2b0 + 8);
        uStack_ec = (undefined4)uVar7;
        uStack_e8 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_e4 = (undefined4)uVar8;
        uStack_e0 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uVar7 = *(undefined8 *)(pFVar28 + (longlong)local_2b0 + 0x10);
        uVar8 = *(undefined8 *)(pFVar28 + (longlong)local_2b0 + 0x10 + 8);
        uStack_dc = (undefined4)uVar7;
        uStack_d8 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_d4 = (undefined4)uVar8;
        uStack_d0 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uVar7 = *(undefined8 *)(pFVar28 + (longlong)local_2b0 + 0x20);
        uVar8 = *(undefined8 *)(pFVar28 + (longlong)local_2b0 + 0x20 + 8);
        local_cc = (undefined4)uVar7;
        uStack_c8 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_c4 = (undefined4)uVar8;
        uStack_c0 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_bc = *(undefined4 *)(pFVar28 + (longlong)local_2b0 + 0x30);
        if (((pFVar31 <= (FScriptContainerElement *)&local_120) &&
            ((FScriptContainerElement *)&local_120 < pFVar31 + (longlong)*local_278 * 0x68)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
          return pFVar16;
        }
        iVar15 = local_290->ArrayNum;
        if (iVar15 == *local_278) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x468,&local_290->AllocatorInstance,local_278);
        }
        local_290->ArrayNum = iVar15 + 1;
        lVar19 = (longlong)iVar15 * 0x68;
        pFVar28 = (local_290->AllocatorInstance).Data;
        *(undefined8 *)(pFVar28 + lVar19) = local_120;
        *(undefined8 *)(pFVar28 + lVar19 + 8) = uStack_118;
        *(undefined8 *)(pFVar28 + lVar19 + 0x10) = local_110;
        *(undefined8 *)(pFVar28 + lVar19 + 0x10 + 8) = uStack_108;
        *(undefined8 *)(pFVar28 + lVar19 + 0x20) = local_100;
        *(undefined8 *)(pFVar28 + lVar19 + 0x20 + 8) = uStack_f8;
        *(ulonglong *)(pFVar28 + lVar19 + 0x30) = CONCAT44(uStack_ec,local_f0);
        *(ulonglong *)(pFVar28 + lVar19 + 0x30 + 8) = CONCAT44(uStack_e4,uStack_e8);
        *(ulonglong *)(pFVar28 + lVar19 + 0x40) = CONCAT44(uStack_dc,uStack_e0);
        *(ulonglong *)(pFVar28 + lVar19 + 0x40 + 8) = CONCAT44(uStack_d4,uStack_d8);
        *(ulonglong *)(pFVar28 + lVar19 + 0x50) = CONCAT44(local_cc,uStack_d0);
        *(ulonglong *)(pFVar28 + lVar19 + 0x50 + 8) = CONCAT44(uStack_c4,uStack_c8);
        *(ulonglong *)(pFVar28 + lVar19 + 0x60) = CONCAT44(uStack_bc,uStack_c0);
        uVar29 = 0;
        if ((int)uVar12 < *local_260) {
          uVar29 = uVar27;
        }
        if ((uVar29 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
          return pFVar16;
        }
        pTVar30 = local_2a0;
        pFVar28 = (local_2a0->AllocatorInstance).Data;
        iVar15 = ~uVar12 + local_2a0->ArrayNum;
        if (1 < iVar15) {
          iVar15 = 1;
        }
        if (iVar15 != 0) {
          memmove(pFVar28 + (longlong)(int)uVar12 * 0x34,
                  pFVar28 + (longlong)(local_2a0->ArrayNum - iVar15) * 0x34,(longlong)iVar15 * 0x34)
          ;
        }
        pTVar30->ArrayNum = pTVar30->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x34,4,&pTVar30->AllocatorInstance,pTVar30->ArrayNum,&pTVar30->ArrayMax);
        pTVar25 = local_288;
        iVar15 = 0;
        if ((int)uVar26 < local_288->ArrayNum) {
          iVar15 = (int)local_2b8;
        }
        if ((iVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar16 = (FModifyInterfacesImpl *)(*pcVar6)();
          return pFVar16;
        }
        iVar15 = (int)local_2a8 + pTVar25->ArrayNum;
        pFVar28 = (pTVar25->AllocatorInstance).Data;
        if (1 < iVar15) {
          iVar15 = 1;
        }
        if (iVar15 != 0) {
          memmove(pFVar28 + (longlong)pTVar34,
                  pFVar28 + (longlong)(pTVar25->ArrayNum - iVar15) * 0x40,(longlong)iVar15 << 6);
        }
        pTVar25->ArrayNum = pTVar25->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&pTVar25->AllocatorInstance,pTVar25->ArrayNum,&pTVar25->ArrayMax);
        local_2b0 = pTVar34;
        pTVar34 = local_2a0;
      }
      lVar19 = (longlong)local_2b0 + -0x40;
      local_2c0 = (TArray<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>,TSizedDefaultAllocator<32>_>
                   *)((longlong)local_2c0 + -1);
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  return this;
}

// operator() @ 14ade3700

TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*> * __thiscall
`Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl'::__l13::
<lambda_2>::operator()
          (void *this,
          TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>
          *__return_storage_ptr__,FMetasoundFrontendClassInput *param_1)

{
  int iVar1;
  FMetasoundFrontendClassInputDefault *pFVar2;
  longlong *plVar3;
  undefined8 uVar4;
  FDocumentIDGenerator *pFVar5;
  FMetasoundFrontendClassInput *pFVar6;
  FGuid local_88;
  FGuid local_78;
  FName local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  
  local_68 = (FName)param_1->_padding_;
  lStack_60 = param_1->_padding_;
  iVar1 = (param_1->Defaults).ArrayNum;
  local_38 = (undefined4)param_1->_padding_;
  pFVar2 = (FMetasoundFrontendClassInputDefault *)(param_1->Defaults).AllocatorInstance.Data;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = CONCAT44(local_28._4_4_,iVar1);
  local_48 = param_1->_padding_;
  uStack_40 = param_1->_padding_;
  local_58 = param_1->_padding_;
  uStack_50 = param_1->_padding_;
  if (iVar1 == 0) {
    local_28 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar1,0,&local_30,iVar1,(int *)((longlong)&local_28 + 4));
    ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
              (local_30.Data,pFVar2,iVar1);
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  pFVar5 = Metasound::Frontend::FDocumentIDGenerator::Get();
  Metasound::Frontend::FDocumentIDGenerator::CreateVertexID
            (pFVar5,&local_78,*(FMetasoundFrontendDocument **)(*plVar3 + 0x60));
  pFVar5 = Metasound::Frontend::FDocumentIDGenerator::Get();
  Metasound::Frontend::FDocumentIDGenerator::CreateNodeID
            (pFVar5,&local_88,*(FMetasoundFrontendDocument **)(*plVar3 + 0x60));
  if (((*(FMetaSoundFrontendDocumentBuilder **)(*plVar3 + 0x50) !=
        (FMetaSoundFrontendDocumentBuilder *)0x0) &&
      (pFVar6 = FMetaSoundFrontendDocumentBuilder::FindGraphInput
                          (*(FMetaSoundFrontendDocumentBuilder **)(*plVar3 + 0x50),local_68),
      pFVar6 != (FMetasoundFrontendClassInput *)0x0)) && (pFVar6->_padding_ == lStack_60)) {
    local_88.A = (uint)pFVar6->_padding_;
    local_88.B = *(uint *)((longlong)&pFVar6->_padding_ + 4);
    local_88.C = (uint)pFVar6->_padding_;
    local_88.D = *(uint *)((longlong)&pFVar6->_padding_ + 4);
    local_78.A = (uint)pFVar6->_padding_;
    local_78.B = *(uint *)((longlong)&pFVar6->_padding_ + 4);
    local_78.C = (uint)pFVar6->_padding_;
    local_78.D = *(uint *)((longlong)&pFVar6->_padding_ + 4);
  }
  uVar4 = *(undefined8 *)((longlong)this + 8);
  *(uint *)&__return_storage_ptr__->field_0x0 = local_68.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = local_68.Number;
  *(longlong *)&__return_storage_ptr__->field_0x8 = lStack_60;
  *(uint *)&__return_storage_ptr__->field_0x10 = local_78.A;
  *(uint *)&__return_storage_ptr__->field_0x14 = local_78.B;
  *(uint *)&__return_storage_ptr__->field_0x18 = local_78.C;
  *(uint *)&__return_storage_ptr__->field_0x1c = local_78.D;
  *(uint *)&__return_storage_ptr__->field_0x20 = local_88.A;
  *(uint *)&__return_storage_ptr__->field_0x24 = local_88.B;
  *(uint *)&__return_storage_ptr__->field_0x28 = local_88.C;
  *(uint *)&__return_storage_ptr__->field_0x2c = local_88.D;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = local_38;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x38 = local_30.Data;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = (undefined4)local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = local_28._4_4_;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar4;
  local_48 = CONCAT44(local_88.B,local_88.A);
  uStack_40 = CONCAT44(local_88.D,local_88.C);
  local_58 = CONCAT44(local_78.B,local_78.A);
  uStack_50 = CONCAT44(local_78.D,local_78.C);
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  DestructItems<FMetasoundFrontendClassInputDefault,int>
            ((FMetasoundFrontendClassInputDefault *)0x0,0);
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 14ade3a40

TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*> * __thiscall
`Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl'::__l13::
<lambda_3>::operator()
          (void *this,
          TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*>
          *__return_storage_ptr__,FMetasoundFrontendClassOutput *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FDocumentIDGenerator *pFVar4;
  FMetasoundFrontendClassOutput *pFVar5;
  FGuid local_78;
  FGuid local_68;
  FName local_58;
  longlong lStack_50;
  FName local_48;
  longlong lStack_40;
  
  local_58.ComparisonIndex.Value = *(uint *)&param_1->field_0x0;
  local_58.Number = *(uint *)&param_1->field_0x4;
  lStack_50 = *(longlong *)&param_1->field_0x8;
  uVar1 = *(undefined4 *)&param_1->field_0x30;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  local_48 = local_58;
  lStack_40 = lStack_50;
  pFVar4 = Metasound::Frontend::FDocumentIDGenerator::Get();
  Metasound::Frontend::FDocumentIDGenerator::CreateVertexID
            (pFVar4,&local_68,*(FMetasoundFrontendDocument **)(*plVar2 + 0x60));
  pFVar4 = Metasound::Frontend::FDocumentIDGenerator::Get();
  Metasound::Frontend::FDocumentIDGenerator::CreateNodeID
            (pFVar4,&local_78,*(FMetasoundFrontendDocument **)(*plVar2 + 0x60));
  if (((*(FMetaSoundFrontendDocumentBuilder **)(*plVar2 + 0x50) !=
        (FMetaSoundFrontendDocumentBuilder *)0x0) &&
      (pFVar5 = FMetaSoundFrontendDocumentBuilder::FindGraphOutput
                          (*(FMetaSoundFrontendDocumentBuilder **)(*plVar2 + 0x50),local_48),
      pFVar5 != (FMetasoundFrontendClassOutput *)0x0)) &&
     (*(longlong *)&pFVar5->field_0x8 == lStack_40)) {
    local_78.A = *(uint *)&pFVar5->field_0x20;
    local_78.B = *(uint *)&pFVar5->field_0x24;
    local_78.C = *(uint *)&pFVar5->field_0x28;
    local_78.D = *(uint *)&pFVar5->field_0x2c;
    local_68.A = *(uint *)&pFVar5->field_0x10;
    local_68.B = *(uint *)&pFVar5->field_0x14;
    local_68.C = *(uint *)&pFVar5->field_0x18;
    local_68.D = *(uint *)&pFVar5->field_0x1c;
  }
  uVar3 = *(undefined8 *)((longlong)this + 8);
  *(uint *)&__return_storage_ptr__->field_0x0 = local_58.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = local_58.Number;
  *(longlong *)&__return_storage_ptr__->field_0x8 = lStack_50;
  *(uint *)&__return_storage_ptr__->field_0x10 = local_68.A;
  *(uint *)&__return_storage_ptr__->field_0x14 = local_68.B;
  *(uint *)&__return_storage_ptr__->field_0x18 = local_68.C;
  *(uint *)&__return_storage_ptr__->field_0x1c = local_68.D;
  *(uint *)&__return_storage_ptr__->field_0x20 = local_78.A;
  *(uint *)&__return_storage_ptr__->field_0x24 = local_78.B;
  *(uint *)&__return_storage_ptr__->field_0x28 = local_78.C;
  *(uint *)&__return_storage_ptr__->field_0x2c = local_78.D;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uVar3;
  return __return_storage_ptr__;
}

// operator() @ 14ade3b30

bool __thiscall
`Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl'::__l15::
<lambda_4>::operator()(void *this,FMetasoundFrontendClassVertex *param_1)

{
  FMetasoundFrontendClassVertex *this_00;
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  undefined8 local_res20;
  undefined8 local_28 [3];
  
  this_00 = *(FMetasoundFrontendClassVertex **)this;
  if (*(longlong *)&this_00->field_0x8 != *(longlong *)&param_1->field_0x8) {
    return false;
  }
  lVar1 = *(longlong *)((longlong)this + 8);
  if (*(void **)(lVar1 + 0x20) != (void *)0x0) {
    local_res20 = *(undefined8 *)param_1;
    local_28[0] = *(undefined8 *)this_00;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x20));
    pcVar2 = *(code **)(lVar1 + 0x20);
    plVar5 = (longlong *)(lVar1 + 0x30);
    if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar1 + 0x48);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    uVar3 = (*pcVar2)(uVar4,local_28,&local_res20);
    return (bool)uVar3;
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FMetasoundFrontendClassVertex::SplitName(this_00,&local_res8,&local_res18);
  FMetasoundFrontendClassVertex::SplitName(param_1,&local_res8,&local_res10);
  return local_res18 == local_res10;
}

// operator() @ 14ade3c00

bool __thiscall
`Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::FModifyInterfacesImpl'::__l20::
<lambda_5>::operator()(void *this,FMetasoundFrontendClassVertex *param_1)

{
  FMetasoundFrontendClassVertex *this_00;
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  undefined8 local_res20;
  undefined8 local_28 [3];
  
  this_00 = *(FMetasoundFrontendClassVertex **)this;
  if (*(longlong *)&this_00->field_0x8 != *(longlong *)&param_1->field_0x8) {
    return false;
  }
  lVar1 = *(longlong *)((longlong)this + 8);
  if (*(void **)(lVar1 + 0x20) != (void *)0x0) {
    local_res20 = *(undefined8 *)param_1;
    local_28[0] = *(undefined8 *)this_00;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x20));
    pcVar2 = *(code **)(lVar1 + 0x20);
    plVar5 = (longlong *)(lVar1 + 0x30);
    if (*(longlong **)(lVar1 + 0x48) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar1 + 0x48);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    uVar3 = (*pcVar2)(uVar4,local_28,&local_res20);
    return (bool)uVar3;
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FMetasoundFrontendClassVertex::SplitName(this_00,&local_res8,&local_res18);
  FMetasoundFrontendClassVertex::SplitName(param_1,&local_res8,&local_res10);
  return local_res18 == local_res10;
}

// Execute @ 14adf6e20

bool __thiscall
Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::Execute
          (FModifyInterfacesImpl *this,FMetaSoundFrontendDocumentBuilder *param_1,
          FDocumentModifyDelegates *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FName FVar3;
  FMetasoundFrontendDocument *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  FMetasoundFrontendClassInputDefault *pFVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  FMetasoundFrontendClassVertex *pFVar17;
  byte bVar18;
  longlong lVar19;
  TMulticastDelegate<void___cdecl(FMetasoundFrontendInterface_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FMetasoundFrontendClassVertex *pFVar20;
  FMetasoundFrontendVersion *pFVar21;
  byte bVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  undefined1 local_res20 [8];
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  undefined1 local_124 [4];
  uint local_120;
  FMetasoundFrontendVersion *local_118;
  FScriptContainerElement *local_110;
  undefined1 local_108 [16];
  FMRSWRecursiveAccessDetector *local_f8;
  char local_f0;
  FDestructionSentinel local_e8;
  FMetasoundFrontendClassInput local_d0;
  FMetasoundFrontendClassOutput local_88;
  
  pFVar24 = (this->Options).InterfacesToRemove.AllocatorInstance.Data;
  local_120 = (this->Options).InterfacesToRemove.ArrayNum;
  uVar15 = (ulonglong)(int)local_120;
  bVar22 = 0;
  pFVar21 = (FMetasoundFrontendVersion *)(pFVar24 + 0x40);
  local_110 = pFVar24 + uVar15 * 0x60;
  while( true ) {
    pFVar23 = local_110;
    local_118 = pFVar21;
    if ((this->Options).InterfacesToRemove.ArrayNum != (int)uVar15) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FMetasoundFrontendInterface_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar24 == pFVar23) break;
    uVar16 = (pFVar21->Number).Major;
    iVar14 = (pFVar21->Number).Minor;
    FVar3 = pFVar21->Name;
    pFVar4 = this->Document;
    uVar13 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    uVar13 = uVar13 + FVar3.Number;
    iVar14 = TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FMetasoundFrontendVersion>
                       (&pFVar4->Interfaces,
                        (uVar13 >> 2) +
                        uVar13 * 0x40 + -0x61c88647 +
                        (iVar14 + uVar16 * 0x40 + (uVar16 >> 2) + 0x9e3779b9 ^ uVar16) ^ uVar13,
                        pFVar21);
    if (iVar14 != -1) {
      this_00 = &(param_2->InterfaceDelegates).OnRemovingInterface;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)(local_108 + 8));
      puVar1 = &(param_2->InterfaceDelegates).OnRemovingInterface.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar12 = false;
      uVar16 = *(int *)&(param_2->InterfaceDelegates).OnRemovingInterface.field_0x10 - 1;
      if (-1 < (int)uVar16) {
        lVar19 = (longlong)(int)uVar16 << 4;
        bVar12 = false;
        do {
          uVar13 = 0;
          if ((int)uVar16 < *(int *)&(param_2->InterfaceDelegates).OnRemovingInterface.field_0x10) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            uVar10 = (*pcVar8)();
            return (bool)uVar10;
          }
          lVar5 = *(longlong *)&(param_2->InterfaceDelegates).OnRemovingInterface.field_0x8;
          if (((*(int *)(lVar19 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar19 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar6 + 0x68))(), cVar11 == '\0')) {
            bVar12 = true;
          }
          lVar19 = lVar19 + -0x10;
          uVar16 = uVar16 - 1;
        } while (-1 < (int)uVar16);
      }
      puVar1 = &(param_2->InterfaceDelegates).OnRemovingInterface.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar12) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_f0 == '\0') {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  (local_f8,(FDestructionSentinel *)(local_108 + 8));
      }
      pFVar21 = local_118;
      pFVar4 = this->Document;
      bVar22 = 1;
      if (*(int *)&(pFVar4->Interfaces).Elements.field_0x8 !=
          *(int *)&(pFVar4->Interfaces).Elements.field_0x34) {
        uVar16 = (local_118->Number).Major;
        iVar14 = (local_118->Number).Minor;
        FVar3 = local_118->Name;
        uVar13 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        uVar13 = uVar13 + FVar3.Number;
        TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
        ::RemoveImpl<FMetasoundFrontendVersion>
                  (&pFVar4->Interfaces,
                   (uVar13 >> 2) +
                   uVar13 * 0x40 +
                   (iVar14 + -0x61c88647 + uVar16 * 0x40 + (uVar16 >> 2) ^ uVar16) + 0x9e3779b9 ^
                   uVar13,pFVar21);
      }
    }
    pFVar24 = pFVar24 + 0x60;
    uVar15 = (ulonglong)local_120;
    pFVar21 = pFVar21 + 6;
  }
  local_120 = (this->Options).InterfacesToAdd.ArrayNum;
  uVar15 = (ulonglong)(int)local_120;
  pFVar24 = (this->Options).InterfacesToAdd.AllocatorInstance.Data;
  local_110 = pFVar24 + uVar15 * 0x60;
  do {
    pFVar23 = local_110;
    if ((this->Options).InterfacesToAdd.ArrayNum != (int)uVar15) {
      local_128 = 0;
      `TCheckedPointerIterator<FMetasoundFrontendInterface_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_128);
    }
    if (pFVar24 == pFVar23) {
      bVar12 = RemoveUnsupportedVertices(this,param_1);
      iVar14 = (this->PairedInputs).ArrayNum;
      pFVar17 = (FMetasoundFrontendClassVertex *)(this->PairedInputs).AllocatorInstance.Data;
      bVar18 = 0;
      pFVar20 = pFVar17 + (longlong)iVar14 * 2;
      while( true ) {
        if ((this->PairedInputs).ArrayNum != iVar14) {
          `TCheckedPointerIterator<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_127);
        }
        if (pFVar17 == pFVar20) break;
        bVar9 = FMetaSoundFrontendDocumentBuilder::SwapGraphInput(param_1,pFVar17,pFVar17 + 1);
        bVar18 = bVar18 | bVar9;
        pFVar17 = pFVar17 + 2;
      }
      iVar14 = (this->PairedOutputs).ArrayNum;
      pFVar17 = (FMetasoundFrontendClassVertex *)(this->PairedOutputs).AllocatorInstance.Data;
      pFVar20 = pFVar17 + (longlong)iVar14 * 2;
      while( true ) {
        if ((this->PairedOutputs).ArrayNum != iVar14) {
          `TCheckedPointerIterator<TTuple<FMetasoundFrontendClassVertex,FMetasoundFrontendClassVertex>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_126);
        }
        if (pFVar17 == pFVar20) break;
        bVar9 = FMetaSoundFrontendDocumentBuilder::SwapGraphOutput(param_1,pFVar17,pFVar17 + 1);
        bVar18 = bVar18 | bVar9;
        pFVar17 = pFVar17 + 2;
      }
      iVar14 = (this->InputsToAdd).ArrayNum;
      bVar12 = (bool)(bVar18 | bVar22 | bVar12);
      if ((iVar14 != 0) || ((this->OutputsToAdd).ArrayNum != 0)) {
        pFVar24 = (this->InputsToAdd).AllocatorInstance.Data;
        pFVar23 = pFVar24 + (longlong)iVar14 * 0x50;
        while( true ) {
          if ((this->InputsToAdd).ArrayNum != iVar14) {
            `TCheckedPointerIterator<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_125);
          }
          if (pFVar24 == pFVar23) break;
          local_d0._padding_ = *(longlong *)pFVar24;
          local_d0._padding_ = *(longlong *)(pFVar24 + 8);
          local_d0._padding_._0_4_ = *(undefined4 *)(pFVar24 + 0x30);
          iVar2 = *(int *)(pFVar24 + 0x40);
          local_d0._padding_ = *(longlong *)(pFVar24 + 0x10);
          local_d0._padding_ = *(longlong *)(pFVar24 + 0x18);
          pFVar7 = *(FMetasoundFrontendClassInputDefault **)(pFVar24 + 0x38);
          local_d0.Defaults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d0._padding_ = *(longlong *)(pFVar24 + 0x20);
          local_d0._padding_ = *(longlong *)(pFVar24 + 0x28);
          local_d0.Defaults.ArrayNum = iVar2;
          if (iVar2 == 0) {
            local_d0.Defaults.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x68,8,iVar2,0,&local_d0.Defaults.AllocatorInstance,iVar2,
                       &local_d0.Defaults.ArrayMax);
            ConstructItems<FMetasoundFrontendClassInputDefault,FMetasoundFrontendClassInputDefault,int>
                      (local_d0.Defaults.AllocatorInstance.Data,pFVar7,iVar2);
          }
          FMetaSoundFrontendDocumentBuilder::AddGraphInput(param_1,&local_d0,(FGuid *)0x0);
          pFVar24 = pFVar24 + 0x50;
        }
        iVar14 = (this->OutputsToAdd).ArrayNum;
        pFVar24 = (this->OutputsToAdd).AllocatorInstance.Data;
        pFVar23 = pFVar24 + (longlong)iVar14 * 0x40;
        while( true ) {
          if ((this->OutputsToAdd).ArrayNum != iVar14) {
            `TCheckedPointerIterator<TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_124);
          }
          if (pFVar24 == pFVar23) break;
          local_88._0_8_ = *(undefined8 *)pFVar24;
          local_88._8_8_ = *(undefined8 *)(pFVar24 + 8);
          local_88._48_4_ = *(undefined4 *)(pFVar24 + 0x30);
          local_88._16_8_ = *(undefined8 *)(pFVar24 + 0x10);
          local_88._24_8_ = *(undefined8 *)(pFVar24 + 0x18);
          local_88._32_8_ = *(undefined8 *)(pFVar24 + 0x20);
          local_88._40_8_ = *(undefined8 *)(pFVar24 + 0x28);
          FMetaSoundFrontendDocumentBuilder::AddGraphOutput(param_1,&local_88,(FGuid *)0x0);
          pFVar24 = pFVar24 + 0x40;
        }
        bVar12 = true;
      }
      if (bVar12 != false) {
        FMetaSoundFrontendDocumentBuilder::RemoveUnusedDependencies(param_1);
      }
      return bVar12;
    }
    TSet<FMetasoundFrontendVersion,DefaultKeyFuncs<FMetasoundFrontendVersion,0>,FDefaultSetAllocator>
    ::Emplace<FMetasoundFrontendVersion_const_&>
              (&this->Document->Interfaces,(FMetasoundFrontendVersion *)local_108,
               (bool *)(pFVar24 + 0x40));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_2->InterfaceDelegates,(FWriteAccessScope *)&local_e8);
    puVar1 = &(param_2->InterfaceDelegates).OnInterfaceAdded.field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar12 = false;
    uVar16 = *(int *)&(param_2->InterfaceDelegates).OnInterfaceAdded.field_0x10 - 1;
    if (-1 < (int)uVar16) {
      lVar19 = (longlong)(int)uVar16 << 4;
      do {
        uVar13 = 0;
        if ((int)uVar16 < *(int *)&(param_2->InterfaceDelegates).OnInterfaceAdded.field_0x10) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        lVar5 = *(longlong *)&(param_2->InterfaceDelegates).OnInterfaceAdded.field_0x8;
        if (((*(int *)(lVar19 + 8 + lVar5) == 0) ||
            (plVar6 = *(longlong **)(lVar19 + lVar5), plVar6 == (longlong *)0x0)) ||
           (cVar11 = (**(code **)(*plVar6 + 0x68))(), cVar11 == '\0')) {
          bVar12 = true;
        }
        lVar19 = lVar19 + -0x10;
        uVar16 = uVar16 - 1;
      } while (-1 < (int)uVar16);
    }
    puVar1 = &(param_2->InterfaceDelegates).OnInterfaceAdded.field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar12) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_2->InterfaceDelegates,
                 false);
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    bVar22 = 1;
    uVar15 = (ulonglong)local_120;
    pFVar24 = pFVar24 + 0x60;
  } while( true );
}

// RemoveUnsupportedVertices @ 14ae07950

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::RemoveUnsupportedVertices
          (FModifyInterfacesImpl *this,FMetaSoundFrontendDocumentBuilder *param_1)

{
  int iVar1;
  bool bVar2;
  FName *pFVar3;
  FName *pFVar4;
  undefined1 local_res8 [8];
  FString local_28;
  
  iVar1 = (this->InputsToAdd).ArrayNum;
  pFVar3 = (FName *)(this->InputsToAdd).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 10;
  while( true ) {
    if ((this->InputsToAdd).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FMetasoundFrontendClassInput,FMetasoundFrontendInterface_const_*>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    bVar2 = FMetaSoundFrontendDocumentBuilder::RemoveGraphInput(param_1,*pFVar3,true);
    if ((bVar2) && (2 < (byte)LogMetaSound._0_1_)) {
      ::FName::ToString(pFVar3,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`private:_bool___cdecl_Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::RemoveUnsupportedVertices(FMetaSoundFrontendDocumentBuilder&___ptr64)const___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar3 = pFVar3 + 10;
  }
  iVar1 = (this->OutputsToAdd).ArrayNum;
  pFVar3 = (FName *)(this->OutputsToAdd).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->OutputsToAdd).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FMetasoundFrontendClassOutput,FMetasoundFrontendInterface_const_*>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    bVar2 = FMetaSoundFrontendDocumentBuilder::RemoveGraphOutput(param_1,*pFVar3);
    if ((bVar2) && (2 < (byte)LogMetaSound._0_1_)) {
      ::FName::ToString(pFVar3,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`private:_bool___cdecl_Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::RemoveUnsupportedVertices(FMetaSoundFrontendDocumentBuilder&___ptr64)const___ptr64'
                  ::__l35::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar3 = pFVar3 + 8;
  }
  iVar1 = (this->InputsToRemove).ArrayNum;
  if ((iVar1 == 0) && ((this->OutputsToRemove).ArrayNum == 0)) {
    bVar2 = false;
  }
  else {
    pFVar4 = (FName *)(this->InputsToRemove).AllocatorInstance.Data;
    pFVar3 = pFVar4 + (longlong)iVar1 * 9;
    while( true ) {
      if ((this->InputsToRemove).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendClassInput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar3) break;
      bVar2 = FMetaSoundFrontendDocumentBuilder::RemoveGraphInput(param_1,*pFVar4,true);
      if ((!bVar2) && (2 < (byte)LogMetaSound._0_1_)) {
        ::FName::ToString(pFVar4,&local_28);
        UE::Logging::Private::BasicLog<3>
                  (&`private:_bool___cdecl_Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::RemoveUnsupportedVertices(FMetaSoundFrontendDocumentBuilder&___ptr64)const___ptr64'
                    ::__l65::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      pFVar4 = pFVar4 + 9;
    }
    iVar1 = (this->OutputsToRemove).ArrayNum;
    pFVar3 = (FName *)(this->OutputsToRemove).AllocatorInstance.Data;
    pFVar4 = (FName *)((longlong)pFVar3 + (longlong)iVar1 * 0x34);
    while( true ) {
      if ((this->OutputsToRemove).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMetasoundFrontendClassOutput_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar4) break;
      bVar2 = FMetaSoundFrontendDocumentBuilder::RemoveGraphOutput(param_1,*pFVar3);
      if ((!bVar2) && (2 < (byte)LogMetaSound._0_1_)) {
        ::FName::ToString(pFVar3,&local_28);
        UE::Logging::Private::BasicLog<3>
                  (&`private:_bool___cdecl_Metasound::Frontend::DocumentBuilderPrivate::FModifyInterfacesImpl::RemoveUnsupportedVertices(FMetaSoundFrontendDocumentBuilder&___ptr64)const___ptr64'
                    ::__l92::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      pFVar3 = (FName *)&pFVar3[6].Number;
    }
    bVar2 = true;
  }
  return bVar2;
}

