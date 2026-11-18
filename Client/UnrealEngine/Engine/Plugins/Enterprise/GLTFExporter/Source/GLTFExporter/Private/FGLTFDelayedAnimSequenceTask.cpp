// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// GetName @ 14e5f7ae0

FString * __thiscall
FGLTFDelayedAnimSequenceTask::GetName
          (FGLTFDelayedAnimSequenceTask *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->AnimSequence->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Process @ 14e602440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FGLTFDelayedAnimSequenceTask::Process(FGLTFDelayedAnimSequenceTask *this)

{
  int *piVar1;
  int *piVar2;
  double *pdVar3;
  double *pdVar4;
  EAnimInterpolationType EVar5;
  ushort uVar6;
  int iVar7;
  FGLTFJsonAnimation *pFVar8;
  FScriptContainerElement *pFVar9;
  UAnimSequence *pUVar10;
  code *pcVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FGLTFJsonAccessor *pFVar16;
  FGLTFJsonBufferView *pFVar17;
  longlong lVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  FString *pFVar24;
  undefined8 *puVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  ulonglong uVar28;
  FGLTFJsonNode *pFVar29;
  ulonglong uVar30;
  longlong lVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 local_res10 [8];
  int local_res18;
  uint local_res20;
  TArray<float,TSizedDefaultAllocator<32>_> local_248;
  TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_238;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_228;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  ForAnyElementType local_200;
  int local_1f8 [2];
  ForAnyElementType local_1f0;
  int local_1e8 [2];
  ForAnyElementType local_1e0;
  int local_1d8 [2];
  FGLTFJsonNode *local_1d0;
  FString local_1c8;
  uint local_1b8;
  FGLTFJsonAccessor *local_1b0;
  FScriptContainerElement *local_1a8;
  FString local_1a0;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  undefined **local_180;
  undefined8 *local_178;
  undefined **local_170;
  FGLTFJsonNode *local_168;
  undefined4 local_160;
  undefined **local_158;
  undefined8 *local_150;
  undefined **local_148;
  FGLTFJsonNode *local_140;
  undefined4 local_138;
  undefined **local_130;
  undefined8 *local_128;
  undefined **local_120;
  FGLTFJsonNode *local_118;
  undefined4 local_110;
  FName local_108;
  FScriptContainerElement *local_100;
  FString local_e8;
  FString local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  
  uVar30 = 0;
  local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.Data.ArrayNum = 0;
  local_1a0.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_1a0,(int)this->JsonAnimation->_padding_);
  local_108 = (FName)this->AnimSequence->_padding_;
  ::FName::ToString(&local_108,&local_d8);
  ::FString::ConcatFC(&local_e8,&local_d8,L"_");
  ::FString::ConcatFF(&local_1c8,&local_e8,&local_1a0);
  pFVar8 = this->JsonAnimation;
  pFVar24 = &pFVar8->Name;
  if (pFVar24 != &local_1c8) {
    pFVar9 = (pFVar24->Data).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pFVar24->Data).AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->Name).Data.ArrayNum = local_1c8.Data.ArrayNum;
    (pFVar8->Name).Data.ArrayMax = local_1c8.Data.ArrayMax;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  pUVar10 = this->AnimSequence;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  iVar14 = (**(code **)(pUVar10->_padding_ + 0x310))(pUVar10);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar14,&local_248.AllocatorInstance,&local_248.ArrayNum,&local_248.ArrayMax);
  fVar32 = (float)(**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10);
  if (iVar14 < 2) {
    fVar42 = 0.0;
  }
  else {
    fVar42 = fVar32 / (float)(iVar14 + -1);
  }
  uVar21 = uVar30;
  uVar28 = uVar30;
  if (0 < iVar14) {
    do {
      uVar22 = (uint)uVar21;
      uVar15 = 0;
      if ((int)uVar22 < local_248.ArrayNum) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      fVar40 = (float)(int)uVar22 * fVar42;
      if (fVar32 <= (float)(int)uVar22 * fVar42) {
        fVar40 = fVar32;
      }
      if (fVar40 <= 0.0) {
        fVar40 = 0.0;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(float *)(local_248.AllocatorInstance.Data + uVar28 * 4) = fVar40;
      uVar28 = uVar28 + 1;
      uVar21 = (ulonglong)(uVar22 + 1);
    } while ((longlong)uVar28 < (longlong)iVar14);
  }
  iVar14 = local_248.ArrayNum;
  local_res18 = local_248.ArrayNum;
  pFVar16 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this->Builder);
  local_1b0 = pFVar16;
  pFVar17 = FGLTFBufferBuilder::AddBufferView
                      ((FGLTFBufferBuilder *)this->Builder,local_248.AllocatorInstance.Data,
                       (longlong)local_248.ArrayNum << 2,None,'\x04');
  pFVar16->BufferView = pFVar17;
  uVar15 = iVar14 - 1;
  pFVar16->ComponentType = Float;
  pFVar16->Type = Scalar;
  pFVar16->Count = iVar14;
  pFVar16->MinMaxLength = 1;
  pFVar16->Min[0] = 0.0;
  uVar22 = 0;
  if ((int)uVar15 < local_248.ArrayNum) {
    uVar22 = ~uVar15 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar16->Max[0] = *(float *)(local_248.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
  EVar5 = this->AnimSequence->Interpolation;
  uVar22 = 0;
  uVar15 = uVar22;
  if (EVar5 != Linear) {
    if (EVar5 == Step) {
      uVar15 = 1;
    }
    else {
      uVar15 = 0xffffffff;
    }
  }
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  uVar20 = uVar22;
  if (uVar15 != 0xffffffff) {
    uVar20 = uVar15;
  }
  lVar18 = (**(code **)(this->SkeletalMesh->_padding_ + 0x318))();
  iVar7 = *(int *)(lVar18 + 0x28);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar7,&local_228.AllocatorInstance,&local_228.ArrayNum,&local_228.ArrayMax);
  uVar21 = uVar30;
  if (0 < iVar7) {
    do {
      uVar23 = (uint)uVar30;
      uVar15 = uVar22;
      if ((int)uVar23 < local_228.ArrayNum) {
        uVar15 = ~uVar23 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(short *)(local_228.AllocatorInstance.Data + uVar21 * 2) = (short)uVar30;
      uVar30 = (ulonglong)(uVar23 + 1);
      uVar21 = uVar21 + 1;
    } while ((int)(uVar23 + 1) < iVar7);
  }
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  FGLTFBoneUtilities::GetBoneTransformsByFrame
            ((UObject *)this->SkeletalMesh,this->AnimSequence,&local_228,&local_248,&local_238);
  fVar12 = _UNK_1506895dc;
  fVar40 = _UNK_1506895d8;
  fVar42 = _UNK_1506895d4;
  fVar32 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  uVar15 = __xmm_80000000800000008000000080000000;
  uVar21 = (ulonglong)local_228.ArrayNum;
  local_1b8 = local_228.ArrayNum;
  local_100 = local_228.AllocatorInstance.Data + uVar21 * 2;
  uVar30 = uVar21;
  FVar26.Data = local_228.AllocatorInstance.Data;
  while( true ) {
    pFVar9 = local_100;
    uVar28 = 0;
    local_1a8 = FVar26.Data;
    if ((int)uVar21 != (int)uVar30) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar26.Data == pFVar9) {
      DestructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 local_238.AllocatorInstance.Data,local_238.ArrayNum);
      if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
          local_238.AllocatorInstance.Data !=
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_238.AllocatorInstance.Data);
      }
      if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.AllocatorInstance.Data);
      }
      if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.AllocatorInstance.Data);
      }
      return;
    }
    uVar6 = *(ushort *)FVar26.Data;
    local_res20 = (uint)uVar6;
    if ((this->RootNode == (FGLTFJsonNode *)0x0) || (this->SkeletalMesh == (USkeletalMesh *)0x0)) {
      local_1d0 = (FGLTFJsonNode *)0x0;
    }
    else {
      local_1d0 = TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>::
                  GetOrAdd((this->Builder->SkeletalBoneConverter).Ptr,this->RootNode,
                           this->SkeletalMesh,local_res20);
    }
    local_200.Data = (FScriptContainerElement *)0x0;
    local_1f8[0] = 0;
    local_1f8[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,1,iVar14,&local_200,local_1f8,local_1f8 + 1);
    if (0 < iVar14) {
      uVar30 = uVar28;
      uVar21 = uVar28;
      do {
        uVar23 = (uint)uVar28;
        uVar22 = 0;
        if ((int)uVar23 < local_238.ArrayNum) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FVar26.Data = local_238.AllocatorInstance.Data;
        if ((*(int *)(local_238.AllocatorInstance.Data + uVar21 + 8) <= (int)local_res20) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pdVar3 = (double *)(*(longlong *)(FVar26.Data + uVar21) + 0x20 + (ulonglong)uVar6 * 0x60);
        local_c8 = *pdVar3;
        dStack_c0 = pdVar3[1];
        local_b8 = *(double *)(*(longlong *)(FVar26.Data + uVar21) + 0x30 + (ulonglong)uVar6 * 0x60)
        ;
        fVar41 = (float)local_c8;
        fVar43 = (float)local_b8;
        fVar39 = *(float *)(this->Builder->_padding_ + 0x28);
        fVar44 = (float)dStack_c0;
        uVar22 = 0;
        if ((int)uVar23 < local_1f8[0]) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar28 = (ulonglong)(uVar23 + 1);
        uVar21 = uVar21 + 0x10;
        *(ulonglong *)(local_200.Data + uVar30) = CONCAT44(fVar43 * fVar39,fVar41 * fVar39);
        *(float *)(local_200.Data + uVar30 + 8) = fVar44 * fVar39;
        uVar30 = uVar30 + 0xc;
      } while ((int)(uVar23 + 1) < local_res18);
    }
    puVar25 = (undefined8 *)0x0;
    pFVar16 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this->Builder);
    pFVar17 = FGLTFBufferBuilder::AddBufferView
                        ((FGLTFBufferBuilder *)this->Builder,local_200.Data,
                         (longlong)local_1f8[0] * 0xc,None,'\x04');
    pFVar16->BufferView = pFVar17;
    pFVar16->ComponentType = Float;
    pFVar16->Count = local_1f8[0];
    pFVar16->Type = Vec3;
    pFVar8 = this->JsonAnimation;
    puVar19 = ::operator_new(0x28);
    piVar2 = &(pFVar8->Samplers).Array.ArrayNum;
    if (puVar19 != (undefined8 *)0x0) {
      *(int *)(puVar19 + 1) = *piVar2;
      *puVar19 = &___7FGLTFJsonAnimationSampler__6B_;
      puVar19[2] = 0;
      puVar19[3] = 0;
      *(undefined4 *)(puVar19 + 4) = 0;
      puVar25 = puVar19;
    }
    pFVar9 = (pFVar8->Samplers).Array.AllocatorInstance.Data;
    local_218 = puVar25;
    if (((pFVar9 <= (FScriptContainerElement *)&local_218) &&
        ((FScriptContainerElement *)&local_218 <
         pFVar9 + (longlong)(pFVar8->Samplers).Array.ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar14 = *piVar2;
    piVar1 = &(pFVar8->Samplers).Array.ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(pFVar8->Samplers).Array.AllocatorInstance,piVar1);
      *piVar2 = iVar14;
    }
    uVar30 = 0;
    *piVar2 = iVar14 + 1;
    *(undefined8 **)((pFVar8->Samplers).Array.AllocatorInstance.Data + (longlong)iVar14 * 8) =
         local_218;
    puVar25[2] = local_1b0;
    *(uint *)(puVar25 + 4) = uVar20;
    puVar25[3] = pFVar16;
    pFVar8 = this->JsonAnimation;
    local_168 = local_1d0;
    local_180 = &___7FGLTFJsonAnimationChannel__6B_;
    local_170 = &___7FGLTFJsonAnimationChannelTarget__6B_;
    local_160 = 0;
    pFVar9 = (pFVar8->Channels).AllocatorInstance.Data;
    local_218 = (undefined8 *)0x0;
    local_178 = puVar25;
    if (((pFVar9 <= (FScriptContainerElement *)&local_180) &&
        ((FScriptContainerElement *)&local_180 <
         pFVar9 + (longlong)(pFVar8->Channels).ArrayMax * 0x28)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar14 = (pFVar8->Channels).ArrayNum;
    piVar2 = &(pFVar8->Channels).ArrayMax;
    if (iVar14 == *piVar2) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&(pFVar8->Channels).AllocatorInstance,piVar2);
    }
    lVar18 = (longlong)iVar14;
    (pFVar8->Channels).ArrayNum = iVar14 + 1;
    pFVar9 = (pFVar8->Channels).AllocatorInstance.Data;
    *(undefined ***)(pFVar9 + lVar18 * 0x28) = &___7FGLTFJsonAnimationChannel__6B_;
    *(undefined8 **)(pFVar9 + lVar18 * 0x28 + 8) = local_178;
    *(undefined ***)(pFVar9 + lVar18 * 0x28 + 0x10) = &___7FGLTFJsonAnimationChannelTarget__6B_;
    *(FGLTFJsonNode **)(pFVar9 + lVar18 * 0x28 + 0x18) = local_168;
    *(undefined4 *)(pFVar9 + lVar18 * 0x28 + 0x20) = local_160;
    if (local_200.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data);
    }
    iVar14 = local_res18;
    local_1f0.Data = (FScriptContainerElement *)0x0;
    local_1e8[0] = 0;
    local_1e8[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,1,local_res18,&local_1f0,local_1e8,local_1e8 + 1);
    uVar22 = local_res20;
    if (0 < iVar14) {
      uVar21 = uVar30;
      do {
        uVar27 = (uint)uVar21;
        uVar23 = 0;
        if ((int)uVar27 < local_238.ArrayNum) {
          uVar23 = ~uVar27 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FVar26.Data = local_238.AllocatorInstance.Data;
        if ((*(int *)(local_238.AllocatorInstance.Data + uVar30 + 8) <= (int)uVar22) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pdVar3 = (double *)((longlong)(int)(uint)uVar6 * 0x60 + *(longlong *)(FVar26.Data + uVar30))
        ;
        pdVar4 = (double *)
                 ((longlong)(int)(uint)uVar6 * 0x60 + 0x10 + *(longlong *)(FVar26.Data + uVar30));
        fVar39 = (float)*pdVar3;
        uVar23 = 0;
        if ((int)uVar27 < local_1e8[0]) {
          uVar23 = ~uVar27 >> 0x1f;
        }
        fVar43 = (float)pdVar3[1];
        fVar38 = (float)*pdVar4;
        fVar41 = (float)pdVar4[1];
        fVar44 = fVar43 * fVar43 + fVar39 * fVar39;
        fVar35 = fVar39 * fVar39 + fVar43 * fVar43;
        fVar36 = fVar41 * fVar41 + fVar38 * fVar38;
        fVar37 = fVar38 * fVar38 + fVar41 * fVar41;
        auVar33._0_4_ = fVar36 + fVar44;
        auVar33._4_4_ = fVar37 + fVar35;
        auVar33._8_4_ = fVar44 + fVar36;
        auVar33._12_4_ = fVar35 + fVar37;
        auVar34 = sqrtps(auVar33,auVar33);
        auVar34 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar34);
        uStack_184 = (uint)(auVar34._12_4_ * fVar41) & -(uint)(fVar12 <= auVar33._12_4_) |
                     ~-(uint)(fVar12 <= auVar33._12_4_) &
                     GlobalVectorConstants::Float0001.m128_u32[3];
        local_190 = ((uint)(auVar34._0_4_ * fVar39) & -(uint)(fVar32 <= auVar33._0_4_) |
                    ~-(uint)(fVar32 <= auVar33._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0]
                    ) ^ uVar15;
        uStack_18c = ((uint)(auVar34._8_4_ * fVar38) & -(uint)(fVar40 <= auVar33._8_4_) |
                     ~-(uint)(fVar40 <= auVar33._8_4_) &
                     GlobalVectorConstants::Float0001.m128_u32[2]) ^ uVar15;
        uStack_188 = ((uint)(auVar34._4_4_ * fVar43) & -(uint)(fVar42 <= auVar33._4_4_) |
                     ~-(uint)(fVar42 <= auVar33._4_4_) &
                     GlobalVectorConstants::Float0001.m128_u32[1]) ^ uVar15;
        if ((uVar23 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar21 = (ulonglong)(uVar27 + 1);
        *(ulonglong *)(local_1f0.Data + uVar30) = CONCAT44(uStack_18c,local_190);
        *(ulonglong *)(local_1f0.Data + uVar30 + 8) = CONCAT44(uStack_184,uStack_188);
        uVar30 = uVar30 + 0x10;
      } while ((int)(uVar27 + 1) < local_res18);
    }
    puVar25 = (undefined8 *)0x0;
    pFVar16 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this->Builder);
    pFVar17 = FGLTFBufferBuilder::AddBufferView
                        ((FGLTFBufferBuilder *)this->Builder,local_1f0.Data,
                         (longlong)local_1e8[0] << 4,None,'\x04');
    pFVar16->BufferView = pFVar17;
    pFVar16->ComponentType = Float;
    pFVar16->Count = local_1e8[0];
    pFVar16->Type = Vec4;
    pFVar8 = this->JsonAnimation;
    puVar19 = ::operator_new(0x28);
    piVar2 = &(pFVar8->Samplers).Array.ArrayNum;
    if (puVar19 != (undefined8 *)0x0) {
      *(int *)(puVar19 + 1) = *piVar2;
      *puVar19 = &___7FGLTFJsonAnimationSampler__6B_;
      puVar19[2] = 0;
      puVar19[3] = 0;
      *(undefined4 *)(puVar19 + 4) = 0;
      puVar25 = puVar19;
    }
    pFVar9 = (pFVar8->Samplers).Array.AllocatorInstance.Data;
    local_210 = puVar25;
    if (((pFVar9 <= (FScriptContainerElement *)&local_210) &&
        ((FScriptContainerElement *)&local_210 <
         pFVar9 + (longlong)(pFVar8->Samplers).Array.ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar14 = *piVar2;
    piVar1 = &(pFVar8->Samplers).Array.ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(pFVar8->Samplers).Array.AllocatorInstance,piVar1);
      *piVar2 = iVar14;
    }
    pFVar29 = local_1d0;
    *piVar2 = iVar14 + 1;
    uVar30 = 0;
    *(undefined8 **)((pFVar8->Samplers).Array.AllocatorInstance.Data + (longlong)iVar14 * 8) =
         local_210;
    puVar25[2] = local_1b0;
    *(uint *)(puVar25 + 4) = uVar20;
    puVar25[3] = pFVar16;
    pFVar8 = this->JsonAnimation;
    local_158 = &___7FGLTFJsonAnimationChannel__6B_;
    local_148 = &___7FGLTFJsonAnimationChannelTarget__6B_;
    local_138 = 1;
    local_140 = local_1d0;
    pFVar9 = (pFVar8->Channels).AllocatorInstance.Data;
    local_210 = (undefined8 *)0x0;
    local_150 = puVar25;
    if (((pFVar9 <= (FScriptContainerElement *)&local_158) &&
        ((FScriptContainerElement *)&local_158 <
         pFVar9 + (longlong)(pFVar8->Channels).ArrayMax * 0x28)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) break;
    iVar14 = (pFVar8->Channels).ArrayNum;
    piVar2 = &(pFVar8->Channels).ArrayMax;
    if (iVar14 == *piVar2) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&(pFVar8->Channels).AllocatorInstance,piVar2);
    }
    lVar18 = (longlong)iVar14;
    (pFVar8->Channels).ArrayNum = iVar14 + 1;
    pFVar9 = (pFVar8->Channels).AllocatorInstance.Data;
    *(undefined ***)(pFVar9 + lVar18 * 0x28) = &___7FGLTFJsonAnimationChannel__6B_;
    *(undefined8 **)(pFVar9 + lVar18 * 0x28 + 8) = local_150;
    *(undefined ***)(pFVar9 + lVar18 * 0x28 + 0x10) = &___7FGLTFJsonAnimationChannelTarget__6B_;
    *(FGLTFJsonNode **)(pFVar9 + lVar18 * 0x28 + 0x18) = local_140;
    *(undefined4 *)(pFVar9 + lVar18 * 0x28 + 0x20) = local_138;
    if (local_1f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data);
    }
    iVar14 = local_res18;
    local_1e0.Data = (FScriptContainerElement *)0x0;
    local_1d8[0] = 0;
    local_1d8[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,1,local_res18,&local_1e0,local_1d8,local_1d8 + 1);
    if (0 < iVar14) {
      lVar18 = (longlong)(int)local_res20;
      lVar31 = 0;
      uVar21 = uVar30;
      do {
        uVar23 = (uint)uVar30;
        uVar22 = 0;
        if ((int)uVar23 < local_238.ArrayNum) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FVar26.Data = local_238.AllocatorInstance.Data;
        if ((*(int *)(local_238.AllocatorInstance.Data + lVar31 + 8) <= (int)local_res20) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pdVar3 = (double *)(*(longlong *)(FVar26.Data + lVar31) + 0x40 + lVar18 * 0x60);
        local_b0 = *pdVar3;
        dStack_a8 = pdVar3[1];
        local_a0 = *(double *)(*(longlong *)(FVar26.Data + lVar31) + 0x50 + lVar18 * 0x60);
        uVar22 = 0;
        if ((int)uVar23 < local_1d8[0]) {
          uVar22 = ~uVar23 >> 0x1f;
        }
        fVar39 = (float)local_b0;
        fVar41 = (float)local_a0;
        fVar43 = (float)dStack_a8;
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar30 = (ulonglong)(uVar23 + 1);
        lVar31 = lVar31 + 0x10;
        *(ulonglong *)(local_1e0.Data + uVar21) = CONCAT44(fVar41,fVar39);
        *(float *)(local_1e0.Data + uVar21 + 8) = fVar43;
        uVar21 = uVar21 + 0xc;
        pFVar29 = local_1d0;
      } while ((int)(uVar23 + 1) < local_res18);
    }
    puVar25 = (undefined8 *)0x0;
    pFVar16 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this->Builder);
    pFVar17 = FGLTFBufferBuilder::AddBufferView
                        ((FGLTFBufferBuilder *)this->Builder,local_1e0.Data,
                         (longlong)local_1d8[0] * 0xc,None,'\x04');
    pFVar16->BufferView = pFVar17;
    pFVar16->ComponentType = Float;
    pFVar16->Count = local_1d8[0];
    pFVar16->Type = Vec3;
    pFVar8 = this->JsonAnimation;
    puVar19 = ::operator_new(0x28);
    piVar2 = &(pFVar8->Samplers).Array.ArrayNum;
    if (puVar19 != (undefined8 *)0x0) {
      *(int *)(puVar19 + 1) = *piVar2;
      *puVar19 = &___7FGLTFJsonAnimationSampler__6B_;
      puVar19[2] = 0;
      puVar19[3] = 0;
      *(undefined4 *)(puVar19 + 4) = 0;
      puVar25 = puVar19;
    }
    pFVar9 = (pFVar8->Samplers).Array.AllocatorInstance.Data;
    local_208 = puVar25;
    if (((pFVar9 <= (FScriptContainerElement *)&local_208) &&
        ((FScriptContainerElement *)&local_208 <
         pFVar9 + (longlong)(pFVar8->Samplers).Array.ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar14 = *piVar2;
    piVar1 = &(pFVar8->Samplers).Array.ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(pFVar8->Samplers).Array.AllocatorInstance,piVar1);
      *piVar2 = iVar14;
    }
    *piVar2 = iVar14 + 1;
    *(undefined8 **)((pFVar8->Samplers).Array.AllocatorInstance.Data + (longlong)iVar14 * 8) =
         local_208;
    puVar25[2] = local_1b0;
    *(uint *)(puVar25 + 4) = uVar20;
    puVar25[3] = pFVar16;
    pFVar8 = this->JsonAnimation;
    local_130 = &___7FGLTFJsonAnimationChannel__6B_;
    local_120 = &___7FGLTFJsonAnimationChannelTarget__6B_;
    local_110 = 2;
    pFVar9 = (pFVar8->Channels).AllocatorInstance.Data;
    local_208 = (undefined8 *)0x0;
    local_128 = puVar25;
    local_118 = pFVar29;
    if (((pFVar9 <= (FScriptContainerElement *)&local_130) &&
        ((FScriptContainerElement *)&local_130 <
         pFVar9 + (longlong)(pFVar8->Channels).ArrayMax * 0x28)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar14 = (pFVar8->Channels).ArrayNum;
    piVar2 = &(pFVar8->Channels).ArrayMax;
    if (iVar14 == *piVar2) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&(pFVar8->Channels).AllocatorInstance,piVar2);
    }
    lVar18 = (longlong)iVar14;
    (pFVar8->Channels).ArrayNum = iVar14 + 1;
    pFVar9 = (pFVar8->Channels).AllocatorInstance.Data;
    *(undefined ***)(pFVar9 + lVar18 * 0x28) = &___7FGLTFJsonAnimationChannel__6B_;
    *(undefined8 **)(pFVar9 + lVar18 * 0x28 + 8) = local_128;
    *(undefined ***)(pFVar9 + lVar18 * 0x28 + 0x10) = &___7FGLTFJsonAnimationChannelTarget__6B_;
    *(FGLTFJsonNode **)(pFVar9 + lVar18 * 0x28 + 0x18) = local_118;
    *(undefined4 *)(pFVar9 + lVar18 * 0x28 + 0x20) = local_110;
    if (local_1e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data);
    }
    uVar21 = local_228._8_8_ & 0xffffffff;
    FVar26.Data = local_1a8 + 2;
    uVar30 = (ulonglong)local_1b8;
    iVar14 = local_res18;
  }
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

