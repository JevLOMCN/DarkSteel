// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5eaa60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGLTFJsonNode * __thiscall
FGLTFSkeletalSocketConverter::Convert
          (FGLTFSkeletalSocketConverter *this,FGLTFJsonNode *param_1,USkeletalMesh *param_2,
          FName param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  FString *pFVar16;
  TQuat<float> *pTVar17;
  int *piVar18;
  FGLTFJsonNode *pFVar19;
  FGLTFJsonNode *pFVar20;
  TArray<FGLTFJsonNode_*,TSizedDefaultAllocator<32>_> *pTVar21;
  FString *pFVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  FName local_res20;
  FGLTFJsonNode *local_88;
  TRotator<float> local_80;
  longlong local_74;
  float local_6c;
  longlong local_68;
  float fStack_60;
  float fStack_5c;
  FString local_58;
  TQuat<float> local_48;
  
  local_res20 = param_3;
  lVar14 = (**(code **)(param_2->_padding_ + 0x318))(param_2);
  lVar15 = (**(code **)(param_2->_padding_ + 0x3f0))(param_2,local_res20);
  if (lVar15 == 0) {
    if (((local_res20 != (FName)0x0) &&
        (piVar18 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)(lVar14 + 0x90),local_res20), piVar18 != (int *)0x0)) &&
       (*piVar18 != -1)) {
      if (param_1 == (FGLTFJsonNode *)0x0) {
        return (FGLTFJsonNode *)0x0;
      }
      pFVar19 = TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>::GetOrAdd
                          (*(TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>
                             **)(*(longlong *)&this->field_0x58 + 0x910),param_1,param_2,*piVar18);
      return pFVar19;
    }
    return (FGLTFJsonNode *)0x0;
  }
  local_88 = FGLTFJsonBuilder::AddNode(*(FGLTFJsonBuilder **)&this->field_0x58);
  pFVar16 = ::FName::ToString(&local_res20,&local_58);
  pFVar19 = local_88;
  pFVar20 = (FGLTFJsonNode *)0x0;
  pFVar22 = &local_88->Name;
  if (pFVar22 != pFVar16) {
    pFVar2 = (pFVar22->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar22->Data).AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
    (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar19->Name).Data.ArrayNum = (pFVar16->Data).ArrayNum;
    (pFVar19->Name).Data.ArrayMax = (pFVar16->Data).ArrayMax;
    (pFVar16->Data).ArrayNum = 0;
    (pFVar16->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
  pFVar19 = (FGLTFJsonNode *)&local_88->_padding_;
  if (local_88 == (FGLTFJsonNode *)0xfffffffffffffff0) {
    pFVar19 = pFVar20;
  }
  local_6c = (float)*(double *)(lVar15 + 0x40) * fVar1;
  local_74 = CONCAT44((float)*(double *)(lVar15 + 0x48) * fVar1,
                      (float)*(double *)(lVar15 + 0x38) * fVar1);
  pFVar19->_padding_ = local_74;
  *(float *)&pFVar19->_padding_ = local_6c;
  local_80.Pitch = (float)*(double *)(lVar15 + 0x50);
  local_80.Yaw = (float)*(double *)(lVar15 + 0x58);
  local_80.Roll = (float)*(double *)(lVar15 + 0x60);
  pTVar17 = UE::Math::TRotator<float>::Quaternion(&local_80,&local_48);
  uVar11 = __xmm_80000000800000008000000080000000;
  fVar1 = pTVar17->X;
  fVar9 = pTVar17->Y;
  fVar10 = pTVar17->Z;
  fStack_5c = pTVar17->W;
  pFVar19 = (FGLTFJsonNode *)&local_88->_padding_;
  if (local_88 == (FGLTFJsonNode *)0xffffffffffffffd8) {
    pFVar19 = pFVar20;
  }
  fVar25 = fVar9 * fVar9 + fVar1 * fVar1;
  fVar26 = fVar1 * fVar1 + fVar9 * fVar9;
  fVar27 = fStack_5c * fStack_5c + fVar10 * fVar10;
  fVar28 = fVar10 * fVar10 + fStack_5c * fStack_5c;
  auVar23._0_4_ = fVar27 + fVar25;
  auVar23._4_4_ = fVar28 + fVar26;
  auVar23._8_4_ = fVar25 + fVar27;
  auVar23._12_4_ = fVar26 + fVar28;
  bVar12 = _UNK_1506895d4 <= auVar23._4_4_;
  bVar7 = _UNK_1506895d8 <= auVar23._8_4_;
  bVar8 = _UNK_1506895dc <= auVar23._12_4_;
  auVar24 = sqrtps(auVar23,auVar23);
  auVar24 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar24);
  uVar4 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar5 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar6 = GlobalVectorConstants::Float0001.m128_u32[3];
  *(uint *)&pFVar19->_padding_ =
       ((uint)(auVar24._0_4_ * fVar1) &
        -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar23._0_4_) |
       ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar23._0_4_) &
       GlobalVectorConstants::Float0001.m128_u32[0]) ^ __xmm_80000000800000008000000080000000;
  *(uint *)((longlong)&pFVar19->_padding_ + 4) =
       ((uint)(auVar24._8_4_ * fVar10) & -(uint)bVar7 | ~-(uint)bVar7 & uVar5) ^ uVar11;
  *(uint *)&pFVar19->_padding_ =
       ((uint)(auVar24._4_4_ * fVar9) & -(uint)bVar12 | ~-(uint)bVar12 & uVar4) ^ uVar11;
  *(uint *)((longlong)&pFVar19->_padding_ + 4) =
       (uint)(auVar24._12_4_ * fStack_5c) & -(uint)bVar8 | ~-(uint)bVar8 & uVar6;
  fStack_60 = (float)*(double *)(lVar15 + 0x70);
  pFVar19 = (FGLTFJsonNode *)&local_88->_padding_;
  if (local_88 == (FGLTFJsonNode *)0xffffffffffffffc0) {
    pFVar19 = pFVar20;
  }
  local_68 = CONCAT44((float)*(double *)(lVar15 + 0x78),(float)*(double *)(lVar15 + 0x68));
  pFVar19->_padding_ = local_68;
  *(float *)&pFVar19->_padding_ = fStack_60;
  pFVar19 = param_1;
  if (((*(FName *)(lVar15 + 0x30) != (FName)0x0) &&
      (piVar18 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         *)(lVar14 + 0x90),*(FName *)(lVar15 + 0x30)), piVar18 != (int *)0x0)) &&
     ((*piVar18 != -1 && (pFVar19 = pFVar20, param_1 != (FGLTFJsonNode *)0x0)))) {
    pFVar19 = TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>::GetOrAdd
                        (*(TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>
                           **)(*(longlong *)&this->field_0x58 + 0x910),param_1,param_2,*piVar18);
  }
  pTVar21 = &pFVar19->Children;
  pFVar2 = (pTVar21->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
      ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)(pFVar19->Children).ArrayMax * 8))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar12)) {
    pcVar3 = (code *)swi(3);
    pFVar19 = (FGLTFJsonNode *)(*pcVar3)();
    return pFVar19;
  }
  iVar13 = (pFVar19->Children).ArrayNum;
  piVar18 = &(pFVar19->Children).ArrayMax;
  if (iVar13 == *piVar18) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar21->AllocatorInstance,piVar18);
  }
  (pFVar19->Children).ArrayNum = iVar13 + 1;
  *(FGLTFJsonNode **)((pTVar21->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_88;
  return local_88;
}

