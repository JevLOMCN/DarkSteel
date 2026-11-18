// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5eb9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGLTFJsonNode * __thiscall
FGLTFStaticSocketConverter::Convert
          (FGLTFStaticSocketConverter *this,FGLTFJsonNode *param_1,UStaticMesh *param_2,
          FName param_3)

{
  int *piVar1;
  TArray<FGLTFJsonNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  bool bVar14;
  int iVar15;
  UStaticMeshSocket *pUVar16;
  FString *pFVar17;
  TQuat<float> *pTVar18;
  FGLTFJsonNode *pFVar19;
  longlong *plVar20;
  FString *pFVar21;
  longlong *plVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  FName local_res20;
  FGLTFJsonNode *local_68;
  TRotator<float> local_60;
  longlong local_54;
  float local_4c;
  longlong local_48;
  float fStack_40;
  float fStack_3c;
  FString local_38;
  TQuat<float> local_28;
  
  local_res20 = param_3;
  pUVar16 = UStaticMesh::FindSocket(param_2,param_3);
  if (pUVar16 == (UStaticMeshSocket *)0x0) {
    return (FGLTFJsonNode *)0x0;
  }
  local_68 = FGLTFJsonBuilder::AddNode(*(FGLTFJsonBuilder **)&this->field_0x58);
  pFVar17 = ::FName::ToString(&local_res20,&local_38);
  pFVar19 = local_68;
  plVar22 = (longlong *)0x0;
  pFVar21 = &local_68->Name;
  if (pFVar21 != pFVar17) {
    pFVar4 = (pFVar21->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar21->Data).AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
    (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar19->Name).Data.ArrayNum = (pFVar17->Data).ArrayNum;
    (pFVar19->Name).Data.ArrayMax = (pFVar17->Data).ArrayMax;
    (pFVar17->Data).ArrayNum = 0;
    (pFVar17->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
  plVar20 = &local_68->_padding_;
  if (local_68 == (FGLTFJsonNode *)0xfffffffffffffff0) {
    plVar20 = plVar22;
  }
  local_4c = (float)(pUVar16->RelativeLocation).field0_0x0._s_0.Y * fVar3;
  local_54 = CONCAT44((float)(pUVar16->RelativeLocation).field0_0x0._s_0.Z * fVar3,
                      (float)(pUVar16->RelativeLocation).field0_0x0._s_0.X * fVar3);
  *plVar20 = local_54;
  *(float *)(plVar20 + 1) = local_4c;
  local_60.Pitch = (float)(pUVar16->RelativeRotation).Pitch;
  local_60.Yaw = (float)(pUVar16->RelativeRotation).Yaw;
  local_60.Roll = (float)(pUVar16->RelativeRotation).Roll;
  pTVar18 = UE::Math::TRotator<float>::Quaternion(&local_60,&local_28);
  uVar13 = __xmm_80000000800000008000000080000000;
  fVar3 = pTVar18->X;
  fVar11 = pTVar18->Y;
  fVar12 = pTVar18->Z;
  fStack_3c = pTVar18->W;
  plVar20 = &local_68->_padding_;
  if (local_68 == (FGLTFJsonNode *)0xffffffffffffffd8) {
    plVar20 = plVar22;
  }
  fVar25 = fVar11 * fVar11 + fVar3 * fVar3;
  fVar26 = fVar3 * fVar3 + fVar11 * fVar11;
  fVar27 = fStack_3c * fStack_3c + fVar12 * fVar12;
  fVar28 = fVar12 * fVar12 + fStack_3c * fStack_3c;
  auVar23._0_4_ = fVar27 + fVar25;
  auVar23._4_4_ = fVar28 + fVar26;
  auVar23._8_4_ = fVar25 + fVar27;
  auVar23._12_4_ = fVar26 + fVar28;
  bVar14 = _UNK_1506895d4 <= auVar23._4_4_;
  bVar9 = _UNK_1506895d8 <= auVar23._8_4_;
  bVar10 = _UNK_1506895dc <= auVar23._12_4_;
  auVar24 = sqrtps(auVar23,auVar23);
  auVar24 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar24);
  uVar6 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar7 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar8 = GlobalVectorConstants::Float0001.m128_u32[3];
  *(uint *)plVar20 =
       ((uint)(auVar24._0_4_ * fVar3) &
        -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar23._0_4_) |
       ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar23._0_4_) &
       GlobalVectorConstants::Float0001.m128_u32[0]) ^ __xmm_80000000800000008000000080000000;
  *(uint *)((longlong)plVar20 + 4) =
       ((uint)(auVar24._8_4_ * fVar12) & -(uint)bVar9 | ~-(uint)bVar9 & uVar7) ^ uVar13;
  *(uint *)(plVar20 + 1) =
       ((uint)(auVar24._4_4_ * fVar11) & -(uint)bVar14 | ~-(uint)bVar14 & uVar6) ^ uVar13;
  pTVar2 = &param_1->Children;
  *(uint *)((longlong)plVar20 + 0xc) =
       (uint)(auVar24._12_4_ * fStack_3c) & -(uint)bVar10 | ~-(uint)bVar10 & uVar8;
  fStack_40 = (float)(pUVar16->RelativeScale).field0_0x0._s_0.Y;
  plVar20 = &local_68->_padding_;
  if (local_68 == (FGLTFJsonNode *)0xffffffffffffffc0) {
    plVar20 = plVar22;
  }
  local_48 = CONCAT44((float)(pUVar16->RelativeScale).field0_0x0._s_0.Z,
                      (float)(pUVar16->RelativeScale).field0_0x0._s_0.X);
  *plVar20 = local_48;
  *(float *)(plVar20 + 1) = fStack_40;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 < pFVar4 + (longlong)(param_1->Children).ArrayMax * 8)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar5 = (code *)swi(3);
      pFVar19 = (FGLTFJsonNode *)(*pcVar5)();
      return pFVar19;
    }
  }
  iVar15 = (param_1->Children).ArrayNum;
  piVar1 = &(param_1->Children).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (param_1->Children).ArrayNum = iVar15 + 1;
  *(FGLTFJsonNode **)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_68;
  return local_68;
}

