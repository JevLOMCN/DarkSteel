// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5eae50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGLTFJsonSkin * __thiscall
FGLTFSkinConverter::Convert(FGLTFSkinConverter *this,FGLTFJsonNode *param_1,USkeletalMesh *param_2)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  FGLTFSkinConverter *pFVar7;
  FReferenceSkeleton *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FGLTFJsonSkin *pFVar12;
  FGLTFJsonNode *pFVar13;
  TTransform<double> *this_00;
  FGLTFJsonAccessor *pFVar14;
  FGLTFJsonBufferView *pFVar15;
  uint uVar16;
  TTransform<double> *__return_storage_ptr__;
  FGLTFJsonNode *pFVar17;
  uint uVar18;
  ForAnyElementType *pFVar19;
  uint uVar20;
  longlong lVar21;
  FGLTFJsonNode *pFVar22;
  longlong lVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  float fVar36;
  undefined1 auVar32 [16];
  float fVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  float fVar56;
  uint uVar57;
  undefined1 auVar58 [16];
  undefined1 auStackY_2f8 [32];
  FGLTFJsonSkin *local_2a0;
  ForAnyElementType local_298;
  int local_290 [2];
  FString local_288;
  FGLTFSkinConverter *local_278;
  undefined8 local_270;
  float fStack_268;
  float fStack_264;
  FGLTFJsonSkin *local_260;
  undefined8 local_258;
  float local_250;
  undefined8 local_248;
  float local_240;
  FName local_238;
  int *local_230;
  USkeletalMesh *local_228;
  undefined4 local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined1 local_1f0 [16];
  TTransform<double> local_1d8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_278 = this;
  local_228 = param_2;
  local_270 = (FReferenceSkeleton *)(**(code **)(param_2->_padding_ + 0x318))(param_2);
  iVar2 = (local_270->FinalRefBoneInfo).ArrayNum;
  lVar21 = (longlong)iVar2;
  if (iVar2 == 0) {
    pFVar12 = (FGLTFJsonSkin *)0x0;
  }
  else {
    lVar23 = *(longlong *)&this->field_0x58;
    local_260 = ::operator_new(0x40);
    pFVar17 = (FGLTFJsonNode *)0x0;
    if (local_260 == (FGLTFJsonSkin *)0x0) {
      local_260 = (FGLTFJsonSkin *)0x0;
    }
    else {
      *(undefined4 *)&local_260->_padding_ = *(undefined4 *)(lVar23 + 0x318);
      local_260->_padding_ = (longlong)&___7FGLTFJsonSkin__6B_;
      (local_260->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_260->Name).Data.ArrayNum = 0;
      (local_260->Name).Data.ArrayMax = 0;
      local_260->InverseBindMatrices = (FGLTFJsonAccessor *)0x0;
      local_260->Skeleton = (FGLTFJsonNode *)0x0;
      (local_260->Joints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_260->Joints).ArrayNum = 0;
      (local_260->Joints).ArrayMax = 0;
    }
    pFVar12 = local_260;
    pFVar19 = (ForAnyElementType *)(lVar23 + 0x310);
    local_2a0 = local_260;
    if (((pFVar19->Data <= (FScriptContainerElement *)&local_2a0) &&
        ((FScriptContainerElement *)&local_2a0 <
         pFVar19->Data + (longlong)*(int *)(lVar23 + 0x31c) * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FGLTFJsonSkin *)(*pcVar4)();
      return pFVar12;
    }
    iVar10 = *(int *)(lVar23 + 0x318);
    if (iVar10 == *(int *)(lVar23 + 0x31c)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar19,(int *)(lVar23 + 0x31c));
    }
    *(int *)(lVar23 + 0x318) = iVar10 + 1;
    *(FGLTFJsonSkin **)(pFVar19->Data + (longlong)iVar10 * 8) = local_2a0;
    local_238 = (FName)param_2->_padding_;
    local_2a0 = (FGLTFJsonSkin *)0x0;
    ::FName::ToString(&local_238,&local_288);
    pFVar1 = &pFVar12->Name;
    if (pFVar1 != &local_288) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_288.Data.AllocatorInstance.Data;
      (pFVar12->Name).Data.ArrayNum = local_288.Data.ArrayNum;
      (pFVar12->Name).Data.ArrayMax = local_288.Data.ArrayMax;
      local_288.Data.ArrayNum = 0;
      local_288.Data.ArrayMax = 0;
      local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    local_230 = &(pFVar12->Joints).ArrayNum;
    pFVar12->Skeleton = param_1;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,&(pFVar12->Joints).AllocatorInstance,local_230,&(pFVar12->Joints).ArrayMax)
    ;
    pFVar13 = pFVar17;
    pFVar22 = pFVar17;
    if (0 < iVar2) {
      do {
        uVar18 = (uint)pFVar13;
        pFVar13 = pFVar17;
        if ((param_1 != (FGLTFJsonNode *)0x0) && (uVar18 != 0xffffffff)) {
          pFVar13 = TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>::
                    GetOrAdd(*(TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>
                               **)(*(longlong *)&local_278->field_0x58 + 0x910),param_1,param_2,
                             uVar18);
        }
        uVar11 = 0;
        if ((int)uVar18 < *local_230) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          pFVar12 = (FGLTFJsonSkin *)(*pcVar4)();
          return pFVar12;
        }
        *(FGLTFJsonNode **)((pFVar12->Joints).AllocatorInstance.Data + (longlong)pFVar22 * 8) =
             pFVar13;
        pFVar22 = (FGLTFJsonNode *)((longlong)&pFVar22->_padding_ + 1);
        pFVar13 = (FGLTFJsonNode *)(ulonglong)(uVar18 + 1);
        param_2 = local_228;
      } while ((longlong)pFVar22 < lVar21);
    }
    local_298.Data = (FScriptContainerElement *)0x0;
    local_290[0] = 0;
    local_290[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,1,iVar2,&local_298,local_290,local_290 + 1);
    pFVar8 = local_270;
    pFVar7 = local_278;
    uVar6 = _UNK_15061cc8c;
    uVar5 = _UNK_15061cc88;
    uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar13 = pFVar17;
    uVar57 = __xmm_80000000800000008000000080000000;
    if (0 < lVar21) {
      do {
        uVar20 = (uint)pFVar13;
        __return_storage_ptr__ = &local_148;
        this_00 = FGLTFBoneUtilities::GetBindTransform(__return_storage_ptr__,pFVar8,uVar20);
        auVar32._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc) & uVar6,
                               *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1) & uVar5));
        auVar32._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
              (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4) & uVar11,
                               *(uint *)(this_00->Scale3D).ZW.m128d_f64 & uVar18));
        uVar16 = movmskpd((int)__return_storage_ptr__,auVar32);
        lVar23 = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                  (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc) &
                                   uVar6,*(uint *)((this_00->Scale3D).XY.m128d_f64 + 1) & uVar5));
        auVar34._8_4_ = (int)lVar23;
        auVar34._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
              (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4) & uVar11,
                               *(uint *)(this_00->Scale3D).XY.m128d_f64 & uVar18));
        auVar34._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
        iVar10 = movmskpd((int)this_00,auVar34);
        if ((uVar16 & 0x3fffffff) == 0 && iVar10 == 0) {
          uVar30 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar53 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar54 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar24 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar26 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar28 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar29 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar45 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar47 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar48 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar49 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar41 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar44 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar37 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar38 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar39 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar40 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          dVar31 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_1d8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_1d8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_1d8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_1d8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_1d8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_1d8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          UE::Math::TTransform<double>::InverseFast(this_00,&local_1d8);
          uVar24 = local_1d8.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar26 = local_1d8.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar28 = local_1d8.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar29 = local_1d8.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar37 = local_1d8.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar38 = local_1d8.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar39 = local_1d8.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar40 = local_1d8.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar41 = local_1d8.Translation.ZW.m128d_f64[0]._0_4_;
          uVar44 = local_1d8.Translation.ZW.m128d_f64[0]._4_4_;
          uVar45 = local_1d8.Translation.XY.m128d_f64[0]._0_4_;
          uVar47 = local_1d8.Translation.XY.m128d_f64[0]._4_4_;
          uVar48 = local_1d8.Translation.XY.m128d_f64[1]._0_4_;
          uVar49 = local_1d8.Translation.XY.m128d_f64[1]._4_4_;
          uVar30 = local_1d8.Rotation.XY.m128d_f64[0]._0_4_;
          uVar51 = local_1d8.Rotation.XY.m128d_f64[0]._4_4_;
          uVar53 = local_1d8.Rotation.XY.m128d_f64[1]._0_4_;
          uVar54 = local_1d8.Rotation.XY.m128d_f64[1]._4_4_;
          dVar31 = local_1d8.Scale3D.ZW.m128d_f64[0];
        }
        fVar27 = (float)(double)CONCAT44(uVar29,uVar28);
        fVar25 = *(float *)(*(longlong *)(*(longlong *)&pFVar7->field_0x58 + 0x18) + 0x28);
        local_240 = (float)(double)CONCAT44(uVar44,uVar41);
        fVar55 = (float)((uint)(float)(double)CONCAT44(uVar51,uVar30) ^ uVar57);
        local_248 = CONCAT44((float)(double)CONCAT44(uVar49,uVar48),
                             (float)(double)CONCAT44(uVar47,uVar45));
        local_250 = (float)dVar31;
        fVar42 = (float)((uint)(float)(double)CONCAT44(uVar26,uVar24) ^ uVar57);
        fVar50 = (float)(double)CONCAT44(uVar38,uVar37);
        fVar52 = (float)(double)CONCAT44(uVar40,uVar39);
        fVar46 = (float)((uint)(float)(double)CONCAT44(uVar54,uVar53) ^ uVar57);
        local_258 = CONCAT44(fVar52,fVar50);
        fVar35 = fVar42 + fVar42;
        fVar36 = fVar46 + fVar46;
        fVar43 = (fVar55 + fVar55) * fVar55;
        fVar56 = fVar27 * (fVar55 + fVar55);
        auVar33._0_4_ =
             (GlobalVectorConstants::FloatOne.m128_f32[0] - (fVar36 * fVar46 + fVar35 * fVar42)) *
             fVar50;
        auVar33._4_4_ =
             (GlobalVectorConstants::FloatOne.m128_f32[1] - (fVar36 * fVar46 + fVar43)) * local_250;
        auVar33._8_4_ =
             (GlobalVectorConstants::FloatOne.m128_f32[2] - (fVar35 * fVar42 + fVar43)) * fVar52;
        auVar33._12_4_ = (GlobalVectorConstants::FloatOne.m128_f32[3] - (fVar43 + fVar43)) * 0.0;
        fVar43 = (fVar27 * fVar36 + fVar55 * fVar35) * fVar50;
        fStack_268 = (fVar56 + fVar42 * fVar36) * local_250;
        fVar46 = (fVar27 * fVar35 + fVar55 * fVar36) * fVar52;
        auVar34 = insertps(auVar33,auVar33,8);
        local_210 = local_250 * (fVar55 * fVar35 - fVar27 * fVar36);
        fVar52 = fVar52 * (fVar42 * fVar36 - fVar56);
        fVar50 = fVar50 * (fVar55 * fVar36 - fVar27 * fVar35);
        uVar30 = auVar34._0_4_;
        fStack_20c = auVar34._4_4_;
        fVar27 = auVar34._8_4_;
        fVar35 = auVar34._12_4_;
        auVar58._4_4_ = local_240 * fVar25;
        auVar58._0_4_ = fVar25 * (float)(double)CONCAT44(uVar47,uVar45);
        auVar58._8_4_ = fVar25 * (float)(double)CONCAT44(uVar49,uVar48);
        auVar58._12_4_ = 0;
        auVar34 = blendps(auVar58,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
        uVar57 = 0;
        if ((int)uVar20 < local_290[0]) {
          uVar57 = ~uVar20 >> 0x1f;
        }
        local_270 = (FReferenceSkeleton *)CONCAT44(fStack_20c,local_210);
        fVar25 = local_210;
        fVar36 = fStack_20c;
        fStack_264 = fVar35;
        local_220 = uVar30;
        fStack_21c = fVar43;
        fStack_218 = fVar50;
        fStack_214 = fVar35;
        fStack_208 = fStack_268;
        fStack_204 = fVar35;
        local_200 = fVar46;
        fStack_1fc = fVar52;
        fStack_1f8 = fVar27;
        fStack_1f4 = fVar35;
        local_1f0 = auVar34;
        if (uVar57 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            pFVar12 = (FGLTFJsonSkin *)(*pcVar4)();
            return pFVar12;
          }
          fVar25 = (float)local_270;
          fVar36 = local_270._4_4_;
        }
        uVar57 = __xmm_80000000800000008000000080000000;
        pFVar3 = local_298.Data + (longlong)&pFVar17->_padding_;
        *(undefined4 *)pFVar3 = uVar30;
        *(float *)(pFVar3 + 4) = fVar43;
        *(float *)(pFVar3 + 8) = fVar50;
        *(float *)(pFVar3 + 0xc) = fVar35;
        pFVar3 = (longlong)&pFVar17->_padding_ + local_298.Data;
        *(float *)pFVar3 = fVar25;
        *(float *)(pFVar3 + 4) = fVar36;
        *(float *)(pFVar3 + 8) = fStack_268;
        *(float *)(pFVar3 + 0xc) = fStack_264;
        pFVar3 = (longlong)&pFVar17->_padding_ + local_298.Data;
        *(float *)pFVar3 = fVar46;
        *(float *)(pFVar3 + 4) = fVar52;
        *(float *)(pFVar3 + 8) = fVar27;
        *(float *)(pFVar3 + 0xc) = fVar35;
        *(undefined1 (*) [16])((longlong)&pFVar17->_padding_ + local_298.Data) = auVar34;
        pFVar17 = (FGLTFJsonNode *)&pFVar17->_padding_;
        lVar21 = lVar21 + -1;
        pFVar12 = local_260;
        pFVar13 = (FGLTFJsonNode *)(ulonglong)(uVar20 + 1);
      } while (lVar21 != 0);
    }
    pFVar7 = local_278;
    pFVar14 = FGLTFJsonBuilder::AddAccessor(*(FGLTFJsonBuilder **)&local_278->field_0x58);
    pFVar15 = FGLTFBufferBuilder::AddBufferView
                        (*(FGLTFBufferBuilder **)&pFVar7->field_0x58,local_298.Data,
                         (longlong)local_290[0] << 6,None,'\x04');
    pFVar14->BufferView = pFVar15;
    pFVar14->Count = iVar2;
    pFVar14->ComponentType = Float;
    pFVar14->Type = Mat4;
    pFVar12->InverseBindMatrices = pFVar14;
    if (local_298.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data);
    }
  }
  return pFVar12;
}

