// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5ea500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGLTFJsonNode * __thiscall
FGLTFSkeletalBoneConverter::Convert
          (FGLTFSkeletalBoneConverter *this,FGLTFJsonNode *param_1,USkeletalMesh *param_2,
          int param_3)

{
  int *piVar1;
  TArray<FGLTFJsonNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *this_00;
  double *pdVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  FString *pFVar15;
  FGLTFJsonNode *pFVar16;
  longlong lVar17;
  FGLTFJsonNode *pFVar18;
  FString *pFVar19;
  float fVar20;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  FGLTFJsonNode *local_98;
  FName *local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  longlong local_70;
  float local_68;
  longlong local_64;
  float local_5c;
  FString local_48;
  
  lVar14 = (**(code **)(param_2->_padding_ + 0x318))(param_2);
  if ((param_3 < 0) || (*(int *)(lVar14 + 0x28) <= param_3)) {
    return (FGLTFJsonNode *)0x0;
  }
  this_00 = (FName *)(*(longlong *)(lVar14 + 0x20) + (longlong)param_3 * 0xc);
  local_90 = this_00;
  local_98 = FGLTFJsonBuilder::AddNode(*(FGLTFJsonBuilder **)&this->field_0x58);
  pFVar15 = ::FName::ToString(this_00,&local_48);
  pFVar16 = local_98;
  pFVar18 = (FGLTFJsonNode *)0x0;
  pFVar19 = &local_98->Name;
  if (pFVar19 != pFVar15) {
    pFVar5 = (pFVar19->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar19->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
    (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar16->Name).Data.ArrayNum = (pFVar15->Data).ArrayNum;
    (pFVar16->Name).Data.ArrayMax = (pFVar15->Data).ArrayMax;
    (pFVar15->Data).ArrayNum = 0;
    (pFVar15->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (param_3 < *(int *)(lVar14 + 0x38)) {
    if ((param_3 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      pFVar16 = (FGLTFJsonNode *)(*pcVar6)();
      return pFVar16;
    }
    lVar14 = *(longlong *)(lVar14 + 0x30);
    lVar17 = (longlong)param_3 * 0x60;
    fVar28 = (float)*(double *)(lVar17 + lVar14);
    fVar29 = (float)((double *)(lVar17 + lVar14))[1];
    pdVar3 = (double *)(lVar17 + 0x20 + lVar14);
    fVar27 = (float)*pdVar3;
    local_68 = (float)pdVar3[1];
    local_88 = CONCAT44(local_68,fVar27);
    pdVar3 = (double *)(lVar17 + 0x10 + lVar14);
    fVar20 = (float)*pdVar3;
    fVar23 = (float)pdVar3[1];
    pdVar3 = (double *)(lVar17 + 0x40 + lVar14);
    fVar30 = (float)*pdVar3;
    local_5c = (float)pdVar3[1];
    local_7c = CONCAT44(local_5c,fVar30);
    local_80 = (float)*(double *)(lVar17 + 0x30 + lVar14);
    local_74 = (float)*(double *)(lVar17 + 0x50 + lVar14);
    fVar24 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
    local_68 = local_68 * fVar24;
    pFVar16 = (FGLTFJsonNode *)&local_98->_padding_;
    if (local_98 == (FGLTFJsonNode *)0xfffffffffffffff0) {
      pFVar16 = pFVar18;
    }
    local_70 = CONCAT44(local_80 * fVar24,fVar27 * fVar24);
    pFVar16->_padding_ = local_70;
    *(float *)&pFVar16->_padding_ = local_68;
    uVar4 = __xmm_80000000800000008000000080000000;
    pFVar16 = (FGLTFJsonNode *)&local_98->_padding_;
    if (local_98 == (FGLTFJsonNode *)0xffffffffffffffd8) {
      pFVar16 = pFVar18;
    }
    fVar24 = fVar29 * fVar29 + fVar28 * fVar28;
    fVar27 = fVar28 * fVar28 + fVar29 * fVar29;
    fVar25 = fVar23 * fVar23 + fVar20 * fVar20;
    fVar26 = fVar20 * fVar20 + fVar23 * fVar23;
    auVar21._0_4_ = fVar25 + fVar24;
    auVar21._4_4_ = fVar26 + fVar27;
    auVar21._8_4_ = fVar24 + fVar25;
    auVar21._12_4_ = fVar27 + fVar26;
    bVar12 = _UNK_1506895d4 <= auVar21._4_4_;
    bVar10 = _UNK_1506895d8 <= auVar21._8_4_;
    bVar11 = _UNK_1506895dc <= auVar21._12_4_;
    auVar22 = sqrtps(auVar21,auVar21);
    auVar22 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar22);
    uVar7 = GlobalVectorConstants::Float0001.m128_u32[1];
    uVar8 = GlobalVectorConstants::Float0001.m128_u32[2];
    uVar9 = GlobalVectorConstants::Float0001.m128_u32[3];
    *(uint *)&pFVar16->_padding_ =
         ((uint)(auVar22._0_4_ * fVar28) &
          -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar21._0_4_) |
         ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar21._0_4_) &
         GlobalVectorConstants::Float0001.m128_u32[0]) ^ __xmm_80000000800000008000000080000000;
    *(uint *)((longlong)&pFVar16->_padding_ + 4) =
         ((uint)(auVar22._8_4_ * fVar20) & -(uint)bVar10 | ~-(uint)bVar10 & uVar8) ^ uVar4;
    *(uint *)&pFVar16->_padding_ =
         ((uint)(auVar22._4_4_ * fVar29) & -(uint)bVar12 | ~-(uint)bVar12 & uVar7) ^ uVar4;
    *(uint *)((longlong)&pFVar16->_padding_ + 4) =
         (uint)(auVar22._12_4_ * fVar23) & -(uint)bVar11 | ~-(uint)bVar11 & uVar9;
    local_64 = CONCAT44(local_74,fVar30);
    pFVar16 = (FGLTFJsonNode *)&local_98->_padding_;
    if (local_98 == (FGLTFJsonNode *)0xffffffffffffffc0) {
      pFVar16 = pFVar18;
    }
    pFVar16->_padding_ = local_64;
    *(float *)&pFVar16->_padding_ = local_5c;
  }
  uVar4 = local_90[1].ComparisonIndex.Value;
  pFVar16 = param_1;
  if ((uVar4 != 0xffffffff) && (pFVar16 = pFVar18, param_1 != (FGLTFJsonNode *)0x0)) {
    pFVar16 = TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>::GetOrAdd
                        (*(TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>
                           **)(*(longlong *)&this->field_0x58 + 0x910),param_1,param_2,uVar4);
  }
  pTVar2 = &pFVar16->Children;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 < pFVar5 + (longlong)(pFVar16->Children).ArrayMax * 8))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FGLTFJsonNode *)(*pcVar6)();
    return pFVar16;
  }
  iVar13 = (pFVar16->Children).ArrayNum;
  piVar1 = &(pFVar16->Children).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar16->Children).ArrayNum = iVar13 + 1;
  *(FGLTFJsonNode **)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_98;
  return local_98;
}

