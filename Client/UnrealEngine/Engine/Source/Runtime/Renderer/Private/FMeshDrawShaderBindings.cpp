// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 16

// ~FMeshDrawShaderBindings @ 144ef0cd0

void __thiscall FMeshDrawShaderBindings::~FMeshDrawShaderBindings(FMeshDrawShaderBindings *this)

{
  ForElementType<FMeshDrawShaderBindingsLayout> FVar1;
  
  if (0x50 < this->Size) {
    operator_delete__((this->Data).InlineStorage[0]);
  }
  this->Size = 0;
  (this->Data).InlineStorage[0] = (uchar *)0x0;
  FVar1 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

// Allocate @ 144ef7580

void __thiscall FMeshDrawShaderBindings::Allocate(FMeshDrawShaderBindings *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  
  if (((this->Size != 0) || ((this->Data).InlineStorage[0] != (uchar *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size == 0 && Data.GetHeapData() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                         ,0x433,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Size = param_1;
  if (0x50 < param_1) {
    puVar3 = operator_new__((ulonglong)param_1);
    (this->Data).InlineStorage[0] = puVar3;
  }
  return;
}

// AllocateZeroed @ 144ef7c80

void __thiscall
FMeshDrawShaderBindings::AllocateZeroed(FMeshDrawShaderBindings *this,ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  
  Allocate(this,param_1);
  if (this->Size != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size == InSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                       ,0x442,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (0x50 < this->Size) {
    memset((this->Data).InlineStorage[0],0,(ulonglong)param_1);
  }
  return;
}

// CopyFrom @ 144efefb0

void __thiscall
FMeshDrawShaderBindings::CopyFrom(FMeshDrawShaderBindings *this,FMeshDrawShaderBindings *param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar4;
  code *pcVar5;
  bool bVar6;
  uchar *puVar7;
  ForElementType<FMeshDrawShaderBindingsLayout> _Dst;
  FData *_Dst_00;
  ForElementType<FMeshDrawShaderBindingsLayout> _Src;
  
  if (0x50 < this->Size) {
    operator_delete__((this->Data).InlineStorage[0]);
  }
  this->Size = 0;
  (this->Data).InlineStorage[0] = (uchar *)0x0;
  if (this != param_1) {
    FVar4 = (param_1->ShaderLayouts).AllocatorInstance.SecondaryData;
    piVar1 = &(this->ShaderLayouts).ArrayMax;
    iVar3 = (param_1->ShaderLayouts).ArrayNum;
    _Src = (ForElementType<FMeshDrawShaderBindingsLayout>)param_1;
    if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      _Src = FVar4;
    }
    (this->ShaderLayouts).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 2;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
                (8,8,iVar3,*piVar1,(ForElementType<FMeshDrawShaderBindingsLayout> *)this,iVar3,
                 piVar1);
      FVar4 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
      _Dst = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        _Dst = FVar4;
      }
      if (iVar3 != 0) {
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 3);
      }
    }
  }
  this->ShaderFrequencyBits = param_1->ShaderFrequencyBits;
  uVar2 = param_1->Size;
  if (((this->Size != 0) || ((this->Data).InlineStorage[0] != (uchar *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size == 0 && Data.GetHeapData() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                         ,0x433,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->Size = uVar2;
  if (0x50 < uVar2) {
    puVar7 = operator_new__((ulonglong)uVar2);
    (this->Data).InlineStorage[0] = puVar7;
  }
  _Dst_00 = &this->Data;
  if (0x50 < param_1->Size) {
    if (0x50 < (ulonglong)this->Size) {
      _Dst_00 = (FData *)_Dst_00->InlineStorage[0];
    }
    memcpy(_Dst_00,(param_1->Data).InlineStorage[0],(ulonglong)this->Size);
    return;
  }
  puVar7 = (param_1->Data).InlineStorage[1];
  _Dst_00->InlineStorage[0] = (param_1->Data).InlineStorage[0];
  (this->Data).InlineStorage[1] = puVar7;
  puVar7 = (param_1->Data).InlineStorage[3];
  (this->Data).InlineStorage[2] = (param_1->Data).InlineStorage[2];
  (this->Data).InlineStorage[3] = puVar7;
  puVar7 = (param_1->Data).InlineStorage[5];
  (this->Data).InlineStorage[4] = (param_1->Data).InlineStorage[4];
  (this->Data).InlineStorage[5] = puVar7;
  puVar7 = (param_1->Data).InlineStorage[7];
  (this->Data).InlineStorage[6] = (param_1->Data).InlineStorage[6];
  (this->Data).InlineStorage[7] = puVar7;
  puVar7 = (param_1->Data).InlineStorage[9];
  (this->Data).InlineStorage[8] = (param_1->Data).InlineStorage[8];
  (this->Data).InlineStorage[9] = puVar7;
  return;
}

// Finalize @ 144f0c330

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMeshDrawShaderBindings::Finalize(FMeshDrawShaderBindings *this,FMeshProcessorShaders *param_1)

{
  return;
}

// GetDynamicInstancingHash @ 144f12250

uint __thiscall FMeshDrawShaderBindings::GetDynamicInstancingHash(FMeshDrawShaderBindings *this)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong64 uVar11;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong *puVar15;
  FData *pFVar16;
  int iVar17;
  int iVar18;
  FData *pFVar19;
  undefined1 local_res10 [8];
  uint local_res18;
  FData *local_res20;
  longlong local_68;
  undefined8 local_58;
  ushort local_50;
  ushort local_4e;
  
  local_50 = this->Size;
  local_res20 = &this->Data;
  local_4e = this->ShaderFrequencyBits;
  uVar13 = 0;
  local_58 = 0;
  if (0x50 < local_50) {
    local_res20 = (FData *)local_res20->InlineStorage[0];
  }
  iVar18 = (this->ShaderLayouts).ArrayNum;
  uVar8 = 0;
  if (0 < iVar18) {
    local_68 = 0;
    while( true ) {
      pFVar19 = local_res20;
      uVar14 = ~uVar8 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar8 < iVar18) {
        uVar10 = uVar14;
      }
      local_res18 = uVar14;
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return uVar8;
        }
        uVar13 = local_58 & 0xffffffff;
      }
      FVar4 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      lVar5 = *(longlong *)(local_68 + (longlong)FVar12);
      iVar18 = *(int *)(lVar5 + 0x38);
      if (iVar18 != 0) {
        iVar17 = *(int *)(lVar5 + 0x28);
        iVar2 = *(int *)(lVar5 + 0x18);
        iVar3 = *(int *)(lVar5 + 8);
        iVar9 = iVar17 + 7;
        if (iVar9 < 0) {
          iVar9 = iVar17 + 0xe;
        }
        uVar13 = *(ulonglong *)(lVar5 + 0x30);
        uVar14 = 0;
        if ((uVar13 & 1) != 0) {
          uVar13 = lVar5 + 0x30 + ((longlong)uVar13 >> 0x18);
        }
        uVar1 = uVar13 + (longlong)iVar18 * 0x18;
        while( true ) {
          if (*(int *)(lVar5 + 0x38) != iVar18) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res10);
          }
          if (uVar13 == uVar1) break;
          uVar14 = uVar14 + *(ushort *)(uVar13 + 2);
          uVar13 = uVar13 + 0x18;
        }
        uVar13 = CityHash64((char *)((longlong)pFVar19->InlineStorage +
                                    (ulonglong)(uint)((iVar9 >> 3) + (iVar2 + iVar17 + iVar3) * 8)),
                            uVar14);
        local_58 = CONCAT44(local_58._4_4_,(int)uVar13);
        pFVar19 = local_res20;
        uVar14 = local_res18;
      }
      iVar17 = 0;
      iVar18 = *(int *)(lVar5 + 0x18);
      puVar15 = (ulonglong *)
                ((longlong)pFVar19->InlineStorage + (ulonglong)(uint)(*(int *)(lVar5 + 8) << 3));
      if (0 < iVar18) {
        do {
          uVar1 = *puVar15;
          puVar15 = puVar15 + 1;
          iVar17 = iVar17 + 1;
          uVar10 = (uint)(uVar1 >> 4);
          uVar10 = (int)uVar13 + uVar10 * 0x40 + ((uint)(uVar1 >> 6) & 0x3fffffff) + 0x9e3779b9 ^
                   uVar10;
          uVar13 = (ulonglong)uVar10;
          local_58 = CONCAT44(local_58._4_4_,uVar10);
          iVar18 = *(int *)(lVar5 + 0x18);
        } while (iVar17 < iVar18);
      }
      iVar17 = 0;
      puVar15 = (ulonglong *)
                ((longlong)pFVar19->InlineStorage +
                (ulonglong)(uint)((*(int *)(lVar5 + 8) + iVar18) * 8));
      if (0 < *(int *)(lVar5 + 0x28)) {
        do {
          uVar1 = *puVar15;
          puVar15 = puVar15 + 1;
          uVar10 = (uint)(uVar1 >> 4);
          iVar17 = iVar17 + 1;
          uVar10 = (int)uVar13 + -0x61c88647 + uVar10 * 0x40 + ((uint)(uVar1 >> 6) & 0x3fffffff) ^
                   uVar10;
          uVar13 = (ulonglong)uVar10;
          local_58 = CONCAT44(local_58._4_4_,uVar10);
        } while (iVar17 < *(int *)(lVar5 + 0x28));
      }
      iVar18 = 0;
      pFVar16 = pFVar19;
      if (0 < *(int *)(lVar5 + 8)) {
        do {
          iVar18 = iVar18 + 1;
          uVar10 = (uint)((ulonglong)pFVar16->InlineStorage[0] >> 4);
          local_58 = CONCAT44(local_58._4_4_ + -0x61c88647 + uVar10 * 0x40 +
                              ((uint)((ulonglong)pFVar16->InlineStorage[0] >> 6) & 0x3fffffff) ^
                              uVar10,(undefined4)local_58);
          pFVar16 = (FData *)(pFVar16->InlineStorage + 1);
        } while (iVar18 < *(int *)(lVar5 + 8));
      }
      uVar10 = 0;
      if ((int)uVar8 < (this->ShaderLayouts).ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return uVar8;
      }
      FVar4 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar12 = FVar4;
      }
      lVar5 = *(longlong *)(local_68 + (longlong)FVar12);
      iVar17 = *(int *)(lVar5 + 0x28);
      iVar2 = *(int *)(lVar5 + 0x18);
      iVar3 = *(int *)(lVar5 + 8);
      iVar9 = iVar17 + 7;
      if (iVar9 < 0) {
        iVar9 = iVar17 + 0xe;
      }
      uVar14 = FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes
                         ((FMeshDrawShaderBindingsLayout *)
                          ((longlong)FVar12 + (longlong)(int)uVar8 * 8));
      iVar18 = (this->ShaderLayouts).ArrayNum;
      local_68 = local_68 + 8;
      local_res20 = (FData *)((longlong)pFVar19->InlineStorage +
                             ((ulonglong)((iVar9 >> 3) + (iVar2 + iVar3 + iVar17) * 8 + 7 + uVar14)
                             & 0xfffffff8));
      uVar8 = uVar8 + 1;
      if (iVar18 <= (int)uVar8) break;
      uVar13 = local_58 & 0xffffffff;
    }
  }
  uVar11 = CityHash64((char *)&local_58,0xc);
  return (uint)uVar11;
}

// Initialize @ 144f1ab10

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMeshDrawShaderBindings::Initialize(FMeshDrawShaderBindings *this,FMeshProcessorShaders *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FShader *pFVar6;
  FShader *pFVar7;
  FShader *pFVar8;
  FShader *pFVar9;
  FShader *pFVar10;
  FShader *pFVar11;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar12;
  longlong lVar13;
  code *pcVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  int iVar22;
  FShaderParameterMapInfo *local_48;
  FShaderParameterMapInfo *local_40;
  FShaderParameterMapInfo *local_38;
  FShaderParameterMapInfo *local_30;
  FShaderParameterMapInfo *local_28;
  FShaderParameterMapInfo *local_20;
  
  uVar16 = 0;
  pFVar6 = (param_1->RayTracingShader).ShaderContent;
  piVar1 = &(this->ShaderLayouts).ArrayMax;
  pFVar7 = (param_1->WorkGraphShader).ShaderContent;
  pFVar8 = (param_1->ComputeShader).ShaderContent;
  pFVar9 = (param_1->PixelShader).ShaderContent;
  pFVar10 = (param_1->VertexShader).ShaderContent;
  pFVar11 = (param_1->GeometryShader).ShaderContent;
  (this->ShaderLayouts).ArrayNum = 0;
  iVar22 = (uint)(pFVar6 != (FShader *)0x0) + (uint)(pFVar7 != (FShader *)0x0) +
           (uint)(pFVar8 != (FShader *)0x0) + (uint)(pFVar9 != (FShader *)0x0) +
           (uint)(pFVar10 != (FShader *)0x0) + (uint)(pFVar11 != (FShader *)0x0);
  if (*piVar1 != iVar22) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
              (8,8,iVar22,(ForElementType<FMeshDrawShaderBindingsLayout> *)this,0,piVar1);
  }
  pFVar6 = (param_1->VertexShader).ShaderContent;
  if (pFVar6 != (FShader *)0x0) {
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    local_48 = &pFVar6->ParameterMapInfo;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    if ((ulonglong)FVar18 <= &local_48) {
      FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar18 = FVar12;
      }
      if ((&local_48 < (FShaderParameterMapInfo **)((longlong)FVar18 + (longlong)*piVar1 * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    iVar22 = (this->ShaderLayouts).ArrayNum;
    if (iVar22 == *piVar1) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
                         (0x808,(ForElementType<FMeshDrawShaderBindingsLayout> *)this,piVar1);
    }
    (this->ShaderLayouts).ArrayNum = iVar22 + 1;
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    *(FShaderParameterMapInfo **)((longlong)FVar18 + (longlong)iVar22 * 8) = local_48;
    iVar22 = (this->ShaderLayouts).ArrayNum;
    uVar19 = iVar22 - 1;
    uVar16 = 0;
    if ((int)uVar19 < iVar22) {
      uVar16 = ~uVar19 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    lVar2 = (longlong)FVar18 + (longlong)(this->ShaderLayouts).ArrayNum * 8;
    lVar13 = *(longlong *)(lVar2 + -8);
    iVar3 = *(int *)(lVar13 + 0x28);
    iVar4 = *(int *)(lVar13 + 0x18);
    iVar5 = *(int *)(lVar13 + 8);
    iVar22 = iVar3 + 7;
    uVar16 = FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes
                       ((FMeshDrawShaderBindingsLayout *)(lVar2 + -8));
    uVar16 = ((int)(iVar22 + (iVar22 >> 0x1f & 7U)) >> 3) + (iVar4 + iVar5 + iVar3) * 8 + uVar16 + 7
             & 0xfffffff8;
    if ((this->ShaderFrequencyBits != 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderFrequencyBits < (1 << SF_Vertex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                            ,0x276,L""), bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    this->ShaderFrequencyBits = this->ShaderFrequencyBits | 1;
  }
  pFVar6 = (param_1->PixelShader).ShaderContent;
  uVar19 = 0;
  if (pFVar6 != (FShader *)0x0) {
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    local_40 = &pFVar6->ParameterMapInfo;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    if ((ulonglong)FVar18 <= &local_40) {
      FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar18 = FVar12;
      }
      if ((&local_40 <
           (FShaderParameterMapInfo **)
           ((longlong)FVar18 + (longlong)(this->ShaderLayouts).ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    iVar22 = (this->ShaderLayouts).ArrayNum;
    if (iVar22 == (this->ShaderLayouts).ArrayMax) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
                         (0x808,(ForElementType<FMeshDrawShaderBindingsLayout> *)this,piVar1);
    }
    (this->ShaderLayouts).ArrayNum = iVar22 + 1;
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    *(FShaderParameterMapInfo **)((longlong)FVar18 + (longlong)iVar22 * 8) = local_40;
    iVar22 = (this->ShaderLayouts).ArrayNum;
    uVar20 = iVar22 - 1;
    uVar17 = uVar19;
    if ((int)uVar20 < iVar22) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    lVar2 = (longlong)FVar18 + (longlong)(this->ShaderLayouts).ArrayNum * 8;
    lVar13 = *(longlong *)(lVar2 + -8);
    iVar3 = *(int *)(lVar13 + 0x28);
    iVar4 = *(int *)(lVar13 + 0x18);
    iVar5 = *(int *)(lVar13 + 8);
    iVar22 = iVar3 + 7;
    uVar17 = FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes
                       ((FMeshDrawShaderBindingsLayout *)(lVar2 + -8));
    uVar16 = uVar16 + (uVar17 + 7 +
                       ((int)(iVar22 + (iVar22 >> 0x1f & 7U)) >> 3) + (iVar4 + iVar5 + iVar3) * 8 &
                      0xfffffff8);
    if ((7 < this->ShaderFrequencyBits) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderFrequencyBits < (1 << SF_Pixel)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                            ,0x27e,L""), bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    this->ShaderFrequencyBits = this->ShaderFrequencyBits | 8;
  }
  pFVar6 = (param_1->GeometryShader).ShaderContent;
  if (pFVar6 != (FShader *)0x0) {
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    local_38 = &pFVar6->ParameterMapInfo;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    if ((ulonglong)FVar18 <= &local_38) {
      FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar18 = FVar12;
      }
      if ((&local_38 <
           (FShaderParameterMapInfo **)
           ((longlong)FVar18 + (longlong)(this->ShaderLayouts).ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    iVar22 = (this->ShaderLayouts).ArrayNum;
    if (iVar22 == (this->ShaderLayouts).ArrayMax) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
                         (0x808,(ForElementType<FMeshDrawShaderBindingsLayout> *)this,piVar1);
    }
    (this->ShaderLayouts).ArrayNum = iVar22 + 1;
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    *(FShaderParameterMapInfo **)((longlong)FVar18 + (longlong)iVar22 * 8) = local_38;
    iVar22 = (this->ShaderLayouts).ArrayNum;
    uVar20 = iVar22 - 1;
    uVar17 = uVar19;
    if ((int)uVar20 < iVar22) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    lVar2 = (longlong)FVar18 + (longlong)(this->ShaderLayouts).ArrayNum * 8;
    lVar13 = *(longlong *)(lVar2 + -8);
    iVar3 = *(int *)(lVar13 + 0x28);
    iVar4 = *(int *)(lVar13 + 0x18);
    iVar5 = *(int *)(lVar13 + 8);
    iVar22 = iVar3 + 7;
    uVar17 = FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes
                       ((FMeshDrawShaderBindingsLayout *)(lVar2 + -8));
    uVar16 = uVar16 + (uVar17 + 7 +
                       ((int)(iVar22 + (iVar22 >> 0x1f & 7U)) >> 3) + (iVar4 + iVar5 + iVar3) * 8 &
                      0xfffffff8);
    if ((0xf < this->ShaderFrequencyBits) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderFrequencyBits < (1 << SF_Geometry)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                            ,0x286,L""), bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    this->ShaderFrequencyBits = this->ShaderFrequencyBits | 0x10;
  }
  pFVar6 = (param_1->ComputeShader).ShaderContent;
  if (pFVar6 != (FShader *)0x0) {
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    local_30 = &pFVar6->ParameterMapInfo;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    if ((ulonglong)FVar18 <= &local_30) {
      FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar18 = FVar12;
      }
      if ((&local_30 <
           (FShaderParameterMapInfo **)
           ((longlong)FVar18 + (longlong)(this->ShaderLayouts).ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    iVar22 = (this->ShaderLayouts).ArrayNum;
    if (iVar22 == (this->ShaderLayouts).ArrayMax) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
                         (0x808,(ForElementType<FMeshDrawShaderBindingsLayout> *)this,piVar1);
    }
    (this->ShaderLayouts).ArrayNum = iVar22 + 1;
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    *(FShaderParameterMapInfo **)((longlong)FVar18 + (longlong)iVar22 * 8) = local_30;
    iVar22 = (this->ShaderLayouts).ArrayNum;
    uVar20 = iVar22 - 1;
    uVar17 = uVar19;
    if ((int)uVar20 < iVar22) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    lVar2 = (longlong)FVar18 + (longlong)(this->ShaderLayouts).ArrayNum * 8;
    lVar13 = *(longlong *)(lVar2 + -8);
    iVar3 = *(int *)(lVar13 + 0x28);
    iVar4 = *(int *)(lVar13 + 0x18);
    iVar5 = *(int *)(lVar13 + 8);
    iVar22 = iVar3 + 7;
    uVar17 = FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes
                       ((FMeshDrawShaderBindingsLayout *)(lVar2 + -8));
    uVar16 = uVar16 + (uVar17 + 7 +
                       ((int)(iVar22 + (iVar22 >> 0x1f & 7U)) >> 3) + (iVar4 + iVar5 + iVar3) * 8 &
                      0xfffffff8);
    if ((0x1f < this->ShaderFrequencyBits) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderFrequencyBits < (1 << SF_Compute)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                            ,0x28e,L""), bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    this->ShaderFrequencyBits = this->ShaderFrequencyBits | 0x20;
  }
  pFVar6 = (param_1->WorkGraphShader).ShaderContent;
  if (pFVar6 != (FShader *)0x0) {
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    local_28 = &pFVar6->ParameterMapInfo;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    if ((ulonglong)FVar18 <= &local_28) {
      FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar18 = FVar12;
      }
      if ((&local_28 <
           (FShaderParameterMapInfo **)
           ((longlong)FVar18 + (longlong)(this->ShaderLayouts).ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    iVar22 = (this->ShaderLayouts).ArrayNum;
    if (iVar22 == (this->ShaderLayouts).ArrayMax) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
                         (0x808,(ForElementType<FMeshDrawShaderBindingsLayout> *)this,piVar1);
    }
    (this->ShaderLayouts).ArrayNum = iVar22 + 1;
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    *(FShaderParameterMapInfo **)((longlong)FVar18 + (longlong)iVar22 * 8) = local_28;
    iVar22 = (this->ShaderLayouts).ArrayNum;
    uVar20 = iVar22 - 1;
    uVar17 = uVar19;
    if ((int)uVar20 < iVar22) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    lVar2 = (longlong)FVar18 + (longlong)(this->ShaderLayouts).ArrayNum * 8;
    lVar13 = *(longlong *)(lVar2 + -8);
    iVar3 = *(int *)(lVar13 + 0x28);
    iVar4 = *(int *)(lVar13 + 0x18);
    iVar5 = *(int *)(lVar13 + 8);
    iVar22 = iVar3 + 7;
    uVar17 = FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes
                       ((FMeshDrawShaderBindingsLayout *)(lVar2 + -8));
    uVar16 = uVar16 + (((int)(iVar22 + (iVar22 >> 0x1f & 7U)) >> 3) + (iVar4 + iVar5 + iVar3) * 8 +
                       7 + uVar17 & 0xfffffff8);
    if ((0x7ff < this->ShaderFrequencyBits) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderFrequencyBits < (1 << SF_WorkGraphComputeNode)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                            ,0x296,L""), bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    this->ShaderFrequencyBits = this->ShaderFrequencyBits | 0x800;
  }
  pFVar6 = (param_1->RayTracingShader).ShaderContent;
  if (pFVar6 != (FShader *)0x0) {
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    local_20 = &pFVar6->ParameterMapInfo;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    if ((ulonglong)FVar18 <= &local_20) {
      FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar18 = FVar12;
      }
      if ((&local_20 <
           (FShaderParameterMapInfo **)
           ((longlong)FVar18 + (longlong)(this->ShaderLayouts).ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    iVar22 = (this->ShaderLayouts).ArrayNum;
    if (iVar22 == (this->ShaderLayouts).ArrayMax) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
                         (0x808,(ForElementType<FMeshDrawShaderBindingsLayout> *)this,piVar1);
    }
    (this->ShaderLayouts).ArrayNum = iVar22 + 1;
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    *(FShaderParameterMapInfo **)((longlong)FVar18 + (longlong)iVar22 * 8) = local_20;
    iVar22 = (this->ShaderLayouts).ArrayNum;
    uVar17 = iVar22 - 1;
    if ((int)uVar17 < iVar22) {
      uVar19 = ~uVar17 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    FVar12 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar12 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar18 = FVar12;
    }
    lVar2 = (longlong)FVar18 + (longlong)(this->ShaderLayouts).ArrayNum * 8;
    lVar13 = *(longlong *)(lVar2 + -8);
    iVar3 = *(int *)(lVar13 + 0x28);
    iVar4 = *(int *)(lVar13 + 0x18);
    iVar5 = *(int *)(lVar13 + 8);
    iVar22 = iVar3 + 7;
    uVar19 = FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes
                       ((FMeshDrawShaderBindingsLayout *)(lVar2 + -8));
    uVar16 = uVar16 + (uVar19 + 7 +
                       ((int)(iVar22 + (iVar22 >> 0x1f & 7U)) >> 3) + (iVar4 + iVar5 + iVar3) * 8 &
                      0xfffffff8);
    bVar21 = *(byte *)&(((param_1->RayTracingShader).ShaderContent)->Target).field0_0x0 & 0xf;
    if ((1 << bVar21 <= (int)(uint)this->ShaderFrequencyBits) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderFrequencyBits < (1 << Frequency)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                            ,0x2a1,L""), bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    this->ShaderFrequencyBits = this->ShaderFrequencyBits | (ushort)(1 << bVar21);
  }
  if (0 < (int)uVar16) {
    AllocateZeroed(this,(ushort)uVar16);
  }
  return;
}

// Initialize @ 144f1b5d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMeshDrawShaderBindings::Initialize
          (FMeshDrawShaderBindings *this,TShaderRefBase<FShader,FShaderMapPointerTable> *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FShader *pFVar6;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar13;
  uint uVar14;
  byte bVar15;
  FShaderParameterMapInfo *local_18 [2];
  
  piVar1 = &(this->ShaderLayouts).ArrayMax;
  pFVar6 = param_1->ShaderContent;
  (this->ShaderLayouts).ArrayNum = 0;
  uVar12 = (uint)(pFVar6 != (FShader *)0x0);
  if (*piVar1 != uVar12) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
              (8,8,uVar12,(ForElementType<FMeshDrawShaderBindingsLayout> *)this,0,piVar1);
  }
  if (param_1->ShaderContent != (FShader *)0x0) {
    FVar7 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    local_18[0] = &param_1->ShaderContent->ParameterMapInfo;
    FVar13 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar7 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar13 = FVar7;
    }
    if ((ulonglong)FVar13 <= local_18) {
      FVar13 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar7 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar13 = FVar7;
      }
      if ((local_18 < (FShaderParameterMapInfo **)((longlong)FVar13 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar11 = (this->ShaderLayouts).ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshDrawShaderBindingsLayout>_>
                         (0x808,(ForElementType<FMeshDrawShaderBindingsLayout> *)this,piVar1);
    }
    (this->ShaderLayouts).ArrayNum = iVar11 + 1;
    FVar7 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar7 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar13 = FVar7;
    }
    *(FShaderParameterMapInfo **)((longlong)FVar13 + (longlong)iVar11 * 8) = local_18[0];
    iVar11 = (this->ShaderLayouts).ArrayNum;
    uVar14 = iVar11 - 1;
    uVar12 = 0;
    if ((int)uVar14 < iVar11) {
      uVar12 = ~uVar14 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar7 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
    if (FVar7 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar13 = FVar7;
    }
    lVar2 = (longlong)FVar13 + (longlong)(this->ShaderLayouts).ArrayNum * 8;
    lVar8 = *(longlong *)(lVar2 + -8);
    iVar3 = *(int *)(lVar8 + 0x28);
    iVar4 = *(int *)(lVar8 + 0x18);
    iVar5 = *(int *)(lVar8 + 8);
    iVar11 = iVar3 + 7;
    uVar12 = FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes
                       ((FMeshDrawShaderBindingsLayout *)(lVar2 + -8));
    uVar12 = ((int)(iVar11 + (iVar11 >> 0x1f & 7U)) >> 3) + (iVar4 + iVar5 + iVar3) * 8 + uVar12 + 7
             & 0xfffffff8;
    bVar15 = *(byte *)&(param_1->ShaderContent->Target).field0_0x0 & 0xf;
    if ((1 << bVar15 <= (int)(uint)this->ShaderFrequencyBits) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderFrequencyBits < (1 << Frequency)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                            ,699,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this->ShaderFrequencyBits = this->ShaderFrequencyBits | (ushort)(1 << bVar15);
    if (0 < (int)uVar12) {
      AllocateZeroed(this,(ushort)uVar12);
    }
  }
  return;
}

// MatchesForDynamicInstancing @ 144f1d290

bool __thiscall
FMeshDrawShaderBindings::MatchesForDynamicInstancing
          (FMeshDrawShaderBindings *this,FMeshDrawShaderBindings *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar17;
  FData *pFVar18;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FData *local_70;
  FData *local_68;
  longlong local_60;
  
  if ((this->ShaderFrequencyBits == param_1->ShaderFrequencyBits) &&
     (iVar15 = (this->ShaderLayouts).ArrayNum, iVar15 == (param_1->ShaderLayouts).ArrayNum)) {
    uVar23 = 0;
    if (0 < iVar15) {
      lVar26 = 0;
      do {
        uVar27 = 0;
        if ((int)uVar23 < iVar15) {
          uVar27 = ~uVar23 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FVar7 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
        FVar19 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
        if (FVar7 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar19 = FVar7;
        }
        uVar27 = 0;
        if ((int)uVar23 < (param_1->ShaderLayouts).ArrayNum) {
          uVar27 = ~uVar23 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FVar7 = (param_1->ShaderLayouts).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_1;
        if (FVar7 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar17 = FVar7;
        }
        if (*(longlong *)((longlong)FVar19 + lVar26 * 8) !=
            *(longlong *)((longlong)FVar17 + lVar26 * 8)) goto LAB_144f1d7eb;
        iVar15 = (this->ShaderLayouts).ArrayNum;
        uVar23 = uVar23 + 1;
        lVar26 = lVar26 + 1;
      } while ((int)uVar23 < iVar15);
    }
    local_68 = &this->Data;
    if (0x50 < this->Size) {
      local_68 = (FData *)local_68->InlineStorage[0];
    }
    local_70 = &param_1->Data;
    if (0x50 < param_1->Size) {
      local_70 = (FData *)local_70->InlineStorage[0];
    }
    uVar23 = 0;
    if (0 < iVar15) {
      local_60 = 0;
      do {
        uVar24 = ~uVar23 >> 0x1f;
        uVar27 = 0;
        if ((int)uVar23 < iVar15) {
          uVar27 = uVar24;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FVar7 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
        FVar19 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
        if (FVar7 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar19 = FVar7;
        }
        lVar26 = *(longlong *)((longlong)FVar19 + local_60 * 8);
        uVar27 = 0;
        if ((int)uVar23 < (param_1->ShaderLayouts).ArrayNum) {
          uVar27 = uVar24;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FVar7 = (param_1->ShaderLayouts).AllocatorInstance.SecondaryData;
        iVar15 = *(int *)(lVar26 + 0x38);
        FVar19 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_1;
        if (FVar7 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar19 = FVar7;
        }
        lVar8 = *(longlong *)((longlong)FVar19 + local_60 * 8);
        if (iVar15 != 0) {
          iVar2 = *(int *)(lVar26 + 0x28);
          iVar3 = *(int *)(lVar26 + 0x18);
          iVar20 = *(int *)(lVar26 + 8);
          iVar13 = iVar2 + 7;
          if (iVar13 < 0) {
            iVar13 = iVar2 + 0xe;
          }
          iVar4 = *(int *)(lVar8 + 0x18);
          iVar5 = *(int *)(lVar8 + 8);
          iVar6 = *(int *)(lVar8 + 0x28);
          iVar14 = iVar6 + 7;
          if (iVar14 < 0) {
            iVar14 = iVar6 + 0xe;
          }
          uVar21 = *(ulonglong *)(lVar26 + 0x30);
          uVar27 = 0;
          if ((uVar21 & 1) != 0) {
            uVar21 = lVar26 + 0x30 + ((longlong)uVar21 >> 0x18);
          }
          uVar1 = uVar21 + (longlong)iVar15 * 0x18;
          while( true ) {
            if (*(int *)(lVar26 + 0x38) != iVar15) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res18);
            }
            if (uVar21 == uVar1) break;
            uVar27 = uVar27 + *(ushort *)(uVar21 + 2);
            uVar21 = uVar21 + 0x18;
          }
          uVar21 = *(ulonglong *)(lVar8 + 0x30);
          uVar25 = 0;
          if ((uVar21 & 1) != 0) {
            uVar21 = ((longlong)uVar21 >> 0x18) + 0x30 + lVar8;
          }
          iVar15 = *(int *)(lVar8 + 0x38);
          uVar1 = uVar21 + (longlong)iVar15 * 0x18;
          while( true ) {
            if (*(int *)(lVar8 + 0x38) != iVar15) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res20);
            }
            if (uVar21 == uVar1) break;
            uVar25 = uVar25 + *(ushort *)(uVar21 + 2);
            uVar21 = uVar21 + 0x18;
          }
          if ((uVar27 != uVar25) ||
             (iVar15 = memcmp((void *)((longlong)local_68->InlineStorage +
                                      (ulonglong)
                                      (uint)((iVar13 >> 3) + (iVar3 + iVar20 + iVar2) * 8)),
                              (void *)((longlong)local_70->InlineStorage +
                                      (ulonglong)(uint)((iVar14 >> 3) + (iVar4 + iVar5 + iVar6) * 8)
                                      ),(ulonglong)uVar27), iVar15 != 0)) goto LAB_144f1d7eb;
        }
        iVar15 = *(int *)(lVar26 + 8);
        lVar22 = 0;
        iVar2 = *(int *)(lVar26 + 0x18);
        plVar16 = (longlong *)((longlong)local_68->InlineStorage + (ulonglong)(uint)(iVar15 * 8));
        if (0 < iVar2) {
          lVar10 = (ulonglong)(uint)(*(int *)(lVar8 + 8) * 8) - (longlong)plVar16;
          do {
            if (*plVar16 != *(longlong *)((longlong)plVar16 + (longlong)local_70 + lVar10))
            goto LAB_144f1d7eb;
            lVar22 = lVar22 + 1;
            plVar16 = plVar16 + 1;
          } while (lVar22 < iVar2);
        }
        lVar22 = 0;
        plVar16 = (longlong *)
                  ((longlong)local_68->InlineStorage + (ulonglong)(uint)((iVar15 + iVar2) * 8));
        if (0 < (longlong)*(int *)(lVar26 + 0x28)) {
          lVar8 = (ulonglong)(uint)((*(int *)(lVar8 + 0x18) + *(int *)(lVar8 + 8)) * 8) -
                  (longlong)plVar16;
          do {
            if (*plVar16 != *(longlong *)((longlong)plVar16 + (longlong)local_70 + lVar8))
            goto LAB_144f1d7eb;
            lVar22 = lVar22 + 1;
            plVar16 = plVar16 + 1;
          } while (lVar22 < *(int *)(lVar26 + 0x28));
        }
        lVar26 = 0;
        if (0 < iVar15) {
          pFVar18 = local_68;
          do {
            if (pFVar18->InlineStorage[0] !=
                *(uchar **)((longlong)pFVar18 + ((longlong)local_70 - (longlong)local_68)))
            goto LAB_144f1d7eb;
            lVar26 = lVar26 + 1;
            pFVar18 = (FData *)(pFVar18->InlineStorage + 1);
          } while (lVar26 < iVar15);
        }
        uVar27 = 0;
        if ((int)uVar23 < (this->ShaderLayouts).ArrayNum) {
          uVar27 = uVar24;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FVar7 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
        FVar19 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
        if (FVar7 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar19 = FVar7;
        }
        lVar26 = *(longlong *)((longlong)FVar19 + local_60 * 8);
        iVar15 = *(int *)(lVar26 + 0x28);
        iVar2 = *(int *)(lVar26 + 0x18);
        iVar3 = *(int *)(lVar26 + 8);
        iVar20 = iVar15 + 7;
        if (iVar20 < 0) {
          iVar20 = iVar15 + 0xe;
        }
        uVar27 = FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes
                           ((FMeshDrawShaderBindingsLayout *)((longlong)FVar19 + local_60 * 8));
        local_68 = (FData *)((longlong)local_68->InlineStorage +
                            ((ulonglong)(uVar27 + 7 + (iVar20 >> 3) + (iVar2 + iVar3 + iVar15) * 8)
                            & 0xfffffff8));
        uVar27 = 0;
        if ((int)uVar23 < (param_1->ShaderLayouts).ArrayNum) {
          uVar27 = uVar24;
        }
        if ((uVar27 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        FVar7 = (param_1->ShaderLayouts).AllocatorInstance.SecondaryData;
        FVar19 = (ForElementType<FMeshDrawShaderBindingsLayout>)param_1;
        if (FVar7 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar19 = FVar7;
        }
        lVar26 = *(longlong *)((longlong)FVar19 + local_60 * 8);
        iVar2 = *(int *)(lVar26 + 0x28);
        iVar3 = *(int *)(lVar26 + 0x18);
        iVar20 = *(int *)(lVar26 + 8);
        iVar13 = iVar2 + 7;
        if (iVar13 < 0) {
          iVar13 = iVar2 + 0xe;
        }
        uVar27 = FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes
                           ((FMeshDrawShaderBindingsLayout *)((longlong)FVar19 + local_60 * 8));
        iVar15 = (this->ShaderLayouts).ArrayNum;
        local_60 = local_60 + 1;
        uVar23 = uVar23 + 1;
        local_70 = (FData *)((longlong)local_70->InlineStorage +
                            ((ulonglong)(uVar27 + 7 + (iVar13 >> 3) + (iVar3 + iVar20 + iVar2) * 8)
                            & 0xfffffff8));
      } while ((int)uVar23 < iVar15);
    }
    bVar11 = true;
  }
  else {
LAB_144f1d7eb:
    bVar11 = false;
  }
  return bVar11;
}

// Release @ 144f22b70

void __thiscall FMeshDrawShaderBindings::Release(FMeshDrawShaderBindings *this)

{
  if (0x50 < this->Size) {
    operator_delete__((this->Data).InlineStorage[0]);
  }
  this->Size = 0;
  (this->Data).InlineStorage[0] = (uchar *)0x0;
  return;
}

// SetOnCommandList @ 144f28e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshDrawShaderBindings::SetOnCommandList
          (FMeshDrawShaderBindings *this,FRHICommandList *param_1,FBoundShaderStateInput *param_2,
          FShaderBindingState *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  FData *pFVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  FRHIBatchedShaderParameters *pFVar14;
  int iVar15;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  FShaderBindingState *pFVar21;
  undefined1 local_res8 [8];
  undefined1 local_e8 [4];
  uint local_e4;
  FData *local_e0;
  longlong local_d8;
  FReadOnlyMeshDrawSingleShaderBindings local_d0;
  undefined8 local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  uint uStack_84;
  undefined8 local_80;
  undefined4 uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined4 uStack_68;
  uint uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 local_50;
  undefined4 uStack_48;
  uint uStack_44;
  
  local_e0 = &this->Data;
  if (0x50 < this->Size) {
    local_e0 = (FData *)local_e0->InlineStorage[0];
  }
  uVar19 = 0xffffffff;
  local_e4 = 0;
  if (0 < (this->ShaderLayouts).ArrayNum) {
    local_d8 = 0;
    do {
      lVar9 = local_d8;
      pFVar8 = local_e0;
      uVar17 = local_e4;
      do {
        uVar19 = uVar19 + 1;
      } while ((this->ShaderFrequencyBits >> (uVar19 & 0x1f) & 1) == 0);
      bVar18 = (byte)uVar19;
      if ((0xb < bVar18) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Frequency < SF_NumFrequencies",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                              ,0x3c4,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar20 = ~uVar17;
      uVar11 = 0;
      if ((int)uVar17 < (this->ShaderLayouts).ArrayNum) {
        uVar11 = uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar4 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar16 = FVar4;
      }
      local_d0._padding_ = *(longlong *)(lVar9 + (longlong)FVar16);
      pFVar21 = param_3 + (uVar19 & 0xff);
      local_d0.Data = (uchar *)pFVar8;
      if (bVar18 == 0) {
        puVar12 = *(undefined8 **)&param_1->field_0xc0;
        if (puVar12 == (undefined8 *)0x0) {
          puVar12 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x48,0x10);
          if (puVar12 == (undefined8 *)0x0) {
            puVar12 = (undefined8 *)0x0;
          }
          else {
            puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0xb8,0x10);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = *(undefined8 *)&param_1->field_0xc8;
              puVar13[1] = param_1;
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar13 + 2),Small);
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar13 + 7),Small);
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar13 + 0xc),Small);
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar13 + 0x11),Small);
              puVar13[0x16] = 0;
              *(undefined8 **)&param_1->field_0xc8 = puVar13;
            }
            *puVar12 = puVar13;
            puVar12[1] = 0;
            *(undefined4 *)(puVar12 + 2) = 0;
            puVar12[3] = 0;
            *(undefined4 *)(puVar12 + 4) = 0;
            puVar12[5] = 0;
            *(undefined4 *)(puVar12 + 6) = 0;
            puVar12[7] = 0;
            *(undefined4 *)(puVar12 + 8) = 0;
            uVar17 = local_e4;
          }
          *(undefined8 **)&param_1->field_0xc0 = puVar12;
        }
        if (0 < *(int *)(puVar12 + 8) + *(int *)(puVar12 + 6) + *(int *)(puVar12 + 4)) {
          local_res8[0] = 0;
          bVar10 = `FRHICommandListBase::GetScratchShaderParameters'::__l6::<lambda_1>::operator()
                             (local_res8);
          if (!bVar10) {
            plVar5 = *(longlong **)&param_1->field_0xc0;
            local_c0 = 0;
            uStack_b8 = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            local_a0 = 0;
            *(undefined8 *)(*plVar5 + 0xb0) = 0;
            plVar5[1] = 0;
            plVar5[2] = (ulonglong)uStack_b4 << 0x20;
            uStack_98 = 0;
            local_90 = 0;
            uStack_88 = 0;
            plVar5[3] = 0;
            plVar5[4] = (ulonglong)uStack_a4 << 0x20;
            plVar5[5] = 0;
            plVar5[6] = (ulonglong)uStack_94 << 0x20;
            plVar5[7] = 0;
            plVar5[8] = (ulonglong)uStack_84 << 0x20;
          }
        }
        pFVar14 = *(FRHIBatchedShaderParameters **)&param_1->field_0xc0;
        FReadOnlyMeshDrawSingleShaderBindings::SetShaderBindings(pFVar14,&local_d0,pFVar21);
        FRHICommandList::SetBatchedShaderParameters
                  (param_1,(FRHIGraphicsShader *)param_2->VertexShaderRHI,pFVar14);
      }
      else if (bVar18 == 3) {
        puVar12 = *(undefined8 **)&param_1->field_0xc0;
        if (puVar12 == (undefined8 *)0x0) {
          puVar12 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x48,0x10);
          if (puVar12 == (undefined8 *)0x0) {
            puVar12 = (undefined8 *)0x0;
          }
          else {
            puVar13 = FMemStackBase::Alloc((FMemStackBase *)param_1,0xb8,0x10);
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = *(undefined8 *)&param_1->field_0xc8;
              puVar13[1] = param_1;
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar13 + 2),Small);
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar13 + 7),Small);
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar13 + 0xc),Small);
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar13 + 0x11),Small);
              puVar13[0x16] = 0;
              *(undefined8 **)&param_1->field_0xc8 = puVar13;
            }
            *puVar12 = puVar13;
            puVar12[1] = 0;
            *(undefined4 *)(puVar12 + 2) = 0;
            puVar12[3] = 0;
            *(undefined4 *)(puVar12 + 4) = 0;
            puVar12[5] = 0;
            *(undefined4 *)(puVar12 + 6) = 0;
            puVar12[7] = 0;
            *(undefined4 *)(puVar12 + 8) = 0;
            uVar17 = local_e4;
          }
          *(undefined8 **)&param_1->field_0xc0 = puVar12;
        }
        if (0 < *(int *)(puVar12 + 8) + *(int *)(puVar12 + 6) + *(int *)(puVar12 + 4)) {
          local_e8[0] = 0;
          bVar10 = `FRHICommandListBase::GetScratchShaderParameters'::__l6::<lambda_1>::operator()
                             (local_e8);
          if (!bVar10) {
            plVar5 = *(longlong **)&param_1->field_0xc0;
            local_80 = 0;
            uStack_78 = 0;
            local_70 = 0;
            uStack_68 = 0;
            local_60 = 0;
            *(undefined8 *)(*plVar5 + 0xb0) = 0;
            plVar5[1] = 0;
            plVar5[2] = (ulonglong)uStack_74 << 0x20;
            uStack_58 = 0;
            local_50 = 0;
            uStack_48 = 0;
            plVar5[3] = 0;
            plVar5[4] = (ulonglong)uStack_64 << 0x20;
            plVar5[5] = 0;
            plVar5[6] = (ulonglong)uStack_54 << 0x20;
            plVar5[7] = 0;
            plVar5[8] = (ulonglong)uStack_44 << 0x20;
          }
        }
        pFVar14 = *(FRHIBatchedShaderParameters **)&param_1->field_0xc0;
        FReadOnlyMeshDrawSingleShaderBindings::SetShaderBindings(pFVar14,&local_d0,pFVar21);
        FRHICommandList::SetBatchedShaderParameters
                  (param_1,(FRHIGraphicsShader *)param_2->PixelShaderRHI,pFVar14);
      }
      else if (bVar18 == 4) {
        pFVar14 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
        FReadOnlyMeshDrawSingleShaderBindings::SetShaderBindings(pFVar14,&local_d0,pFVar21);
        FRHICommandList::SetBatchedShaderParameters
                  (param_1,(FRHIGraphicsShader *)param_2->GeometryShaderRHI,pFVar14);
      }
      else {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                            ,0x3dd,L"Unknown shader frequency");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar11 = 0;
      if ((int)uVar17 < (this->ShaderLayouts).ArrayNum) {
        uVar11 = uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar9 = local_d8;
      FVar4 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<FMeshDrawShaderBindingsLayout>)this;
      if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar16 = FVar4;
      }
      lVar6 = *(longlong *)(local_d8 + (longlong)FVar16);
      iVar1 = *(int *)(lVar6 + 0x28);
      iVar2 = *(int *)(lVar6 + 0x18);
      iVar3 = *(int *)(lVar6 + 8);
      iVar15 = iVar1 + 7;
      if (iVar15 < 0) {
        iVar15 = iVar1 + 0xe;
      }
      uVar11 = FMeshDrawShaderBindingsLayout::GetLooseDataSizeBytes
                         ((FMeshDrawShaderBindingsLayout *)
                          ((longlong)FVar16 + (longlong)(int)uVar17 * 8));
      local_e4 = uVar17 + 1;
      local_d8 = lVar9 + 8;
      local_e0 = (FData *)((longlong)local_e0->InlineStorage +
                          ((ulonglong)((iVar15 >> 3) + (iVar2 + iVar3 + iVar1) * 8 + 7 + uVar11) &
                          0xfffffff8));
    } while ((int)local_e4 < (this->ShaderLayouts).ArrayNum);
  }
  return;
}

// SetOnCommandList @ 144f29380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshDrawShaderBindings::SetOnCommandList
          (FMeshDrawShaderBindings *this,FRHIComputeCommandList *param_1,FRHIComputeShader *param_2,
          FShaderBindingState *param_3)

{
  ForElementType<FMeshDrawShaderBindingsLayout> FVar1;
  code *pcVar2;
  bool bVar3;
  FRHIBatchedShaderParameters *pFVar4;
  FData *pFVar5;
  FReadOnlyMeshDrawSingleShaderBindings local_28;
  
  pFVar4 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  if ((this->ShaderLayouts).ArrayNum != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderLayouts.Num() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x3e6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = &this->Data;
  if (0x50 < this->Size) {
    pFVar5 = (FData *)pFVar5->InlineStorage[0];
  }
  if ((this->ShaderLayouts).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
    this = (FMeshDrawShaderBindings *)FVar1;
  }
  local_28._padding_ = *(longlong *)this;
  local_28.Data = (uchar *)pFVar5;
  if (param_3 == (FShaderBindingState *)0x0) {
    FReadOnlyMeshDrawSingleShaderBindings::SetShaderBindings(pFVar4,&local_28);
  }
  else {
    FReadOnlyMeshDrawSingleShaderBindings::SetShaderBindings(pFVar4,&local_28,param_3);
  }
  FRHIComputeCommandList::SetBatchedShaderParameters(param_1,param_2,pFVar4);
  return;
}

// SetParameters @ 144f29590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMeshDrawShaderBindings::SetParameters
          (FMeshDrawShaderBindings *this,FRHIBatchedShaderParameters *param_1,
          FShaderBindingState *param_2)

{
  ForElementType<FMeshDrawShaderBindingsLayout> FVar1;
  code *pcVar2;
  bool bVar3;
  FData *pFVar4;
  FReadOnlyMeshDrawSingleShaderBindings local_18;
  
  if ((this->ShaderLayouts).ArrayNum != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderLayouts.Num() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x3e6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = &this->Data;
  if (0x50 < this->Size) {
    pFVar4 = (FData *)pFVar4->InlineStorage[0];
  }
  if ((this->ShaderLayouts).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
    this = (FMeshDrawShaderBindings *)FVar1;
  }
  local_18._padding_ = *(longlong *)this;
  local_18.Data = (uchar *)pFVar4;
  if (param_2 == (FShaderBindingState *)0x0) {
    FReadOnlyMeshDrawSingleShaderBindings::SetShaderBindings(param_1,&local_18);
  }
  else {
    FReadOnlyMeshDrawSingleShaderBindings::SetShaderBindings(param_1,&local_18,param_2);
  }
  return;
}

// SetRayTracingShaderBindings @ 144f29740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRayTracingLocalShaderBindings * __thiscall
FMeshDrawShaderBindings::SetRayTracingShaderBindings
          (FMeshDrawShaderBindings *this,FRayTracingLocalShaderBindingWriter *param_1,uint param_2,
          uint param_3,uint param_4,ERayTracingLocalShaderBindingType param_5)

{
  uchar **ppuVar1;
  ushort uVar2;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar3;
  undefined8 *puVar4;
  FChunk *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FRayTracingLocalShaderBindings *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  FChunk *pFVar13;
  FRHIUniformBuffer **_Dst;
  uchar *puVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  short *psVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  ushort *puVar23;
  void *_Src;
  undefined1 in_XMM1 [16];
  undefined1 auVar24 [16];
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  FData *local_50;
  
  if (((this->ShaderLayouts).ArrayNum != 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderLayouts.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x120,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FRayTracingLocalShaderBindings *)(*pcVar6)();
    return pFVar10;
  }
  local_50 = &this->Data;
  if (0x50 < this->Size) {
    local_50 = (FData *)local_50->InlineStorage[0];
  }
  if (((this->ShaderLayouts).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FRayTracingLocalShaderBindings *)(*pcVar6)();
    return pFVar10;
  }
  FVar3 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
    this = (FMeshDrawShaderBindings *)FVar3;
  }
  puVar4 = *(undefined8 **)this;
  puVar23 = (ushort *)*puVar4;
  if (((ulonglong)puVar23 & 1) != 0) {
    puVar23 = (ushort *)(((longlong)puVar23 >> 0x18) + (longlong)puVar4);
  }
  uVar22 = *(uint *)(puVar4 + 1);
  lVar21 = (longlong)(int)uVar22;
  if ((*(int *)(puVar4 + 3) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SingleShaderBindings.ParameterMapInfo.TextureSamplers.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x128,
                         L"Texture sampler parameters are not supported for ray tracing. UniformBuffers must be used for all resource binding."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FRayTracingLocalShaderBindings *)(*pcVar6)();
    return pFVar10;
  }
  if ((*(int *)(puVar4 + 5) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SingleShaderBindings.ParameterMapInfo.SRVs.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x129,
                         L"SRV parameters are not supported for ray tracing. UniformBuffers must be used for all resource binding."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FRayTracingLocalShaderBindings *)(*pcVar6)();
    return pFVar10;
  }
  uVar20 = 0;
  uVar15 = 0xffffffff;
  uVar18 = 0;
  uVar17 = uVar18;
  if (((0 < (int)uVar22) && (7 < uVar22)) && (1 < __isa_available)) {
    uVar15 = uVar22 & 0x80000007;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
    }
    uVar11 = uVar20;
    uVar12 = uVar20;
    uVar25 = ___xmm_ffffffffffffffffffffffffffffffff;
    uVar26 = _UNK_15060db24;
    uVar27 = _UNK_15060db28;
    uVar28 = _UNK_15060db2c;
    uVar29 = ___xmm_ffffffffffffffffffffffffffffffff;
    uVar30 = _UNK_15060db24;
    uVar31 = _UNK_15060db28;
    uVar32 = _UNK_15060db2c;
    do {
      auVar24 = pmovzxwd(in_XMM1,*(undefined8 *)(puVar23 + uVar11));
      iVar9 = auVar24._0_4_;
      uVar25 = (uint)((int)uVar25 < iVar9) * iVar9 | ((int)uVar25 >= iVar9) * uVar25;
      iVar9 = auVar24._4_4_;
      uVar26 = (uint)((int)uVar26 < iVar9) * iVar9 | ((int)uVar26 >= iVar9) * uVar26;
      iVar9 = auVar24._8_4_;
      uVar27 = (uint)((int)uVar27 < iVar9) * iVar9 | ((int)uVar27 >= iVar9) * uVar27;
      iVar9 = auVar24._12_4_;
      uVar28 = (uint)((int)uVar28 < iVar9) * iVar9 | ((int)uVar28 >= iVar9) * uVar28;
      uVar17 = (int)uVar12 + 8;
      uVar12 = (ulonglong)uVar17;
      in_XMM1 = pmovzxwd(auVar24,*(undefined8 *)(puVar23 + uVar11 + 4));
      uVar11 = uVar11 + 8;
      iVar9 = in_XMM1._0_4_;
      uVar29 = (uint)((int)uVar29 < iVar9) * iVar9 | ((int)uVar29 >= iVar9) * uVar29;
      iVar9 = in_XMM1._4_4_;
      uVar30 = (uint)((int)uVar30 < iVar9) * iVar9 | ((int)uVar30 >= iVar9) * uVar30;
      iVar9 = in_XMM1._8_4_;
      uVar31 = (uint)((int)uVar31 < iVar9) * iVar9 | ((int)uVar31 >= iVar9) * uVar31;
      iVar9 = in_XMM1._12_4_;
      uVar32 = (uint)((int)uVar32 < iVar9) * iVar9 | ((int)uVar32 >= iVar9) * uVar32;
    } while ((longlong)uVar11 < (longlong)(int)(uVar22 - uVar15));
    uVar15 = ((int)uVar25 < (int)uVar29) * uVar29 | ((int)uVar25 >= (int)uVar29) * uVar25;
    uVar25 = ((int)uVar26 < (int)uVar30) * uVar30 | ((int)uVar26 >= (int)uVar30) * uVar26;
    uVar26 = ((int)uVar27 < (int)uVar31) * uVar31 | ((int)uVar27 >= (int)uVar31) * uVar27;
    uVar27 = ((int)uVar28 < (int)uVar32) * uVar32 | ((int)uVar28 >= (int)uVar32) * uVar28;
    uVar15 = ((int)uVar15 < (int)uVar26) * uVar26 | ((int)uVar15 >= (int)uVar26) * uVar15;
    uVar25 = ((int)uVar25 < (int)uVar27) * uVar27 | ((int)uVar25 >= (int)uVar27) * uVar25;
    uVar15 = ((int)uVar15 < (int)uVar25) * uVar25 | ((int)uVar15 >= (int)uVar25) * uVar15;
  }
  for (lVar16 = (longlong)(int)uVar17; lVar16 < lVar21; lVar16 = lVar16 + 1) {
    if ((int)uVar15 < (int)(uint)puVar23[lVar16]) {
      uVar15 = (uint)puVar23[lVar16];
    }
  }
  iVar9 = uVar15 + 1;
  if (*(int *)(puVar4 + 7) != 0) {
    if ((1 < *(int *)(puVar4 + 7)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("LooseParameterBuffers.Num() <= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                           ,0x13c,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRayTracingLocalShaderBindings *)(*pcVar6)();
      return pFVar10;
    }
    if ((*(int *)(puVar4 + 7) < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRayTracingLocalShaderBindings *)(*pcVar6)();
      return pFVar10;
    }
    psVar19 = (short *)puVar4[6];
    if (((ulonglong)psVar19 & 1) != 0) {
      psVar19 = (short *)(((longlong)psVar19 >> 0x18) + (longlong)(puVar4 + 6));
    }
    if ((*psVar19 != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("LooseParameterBuffer.BaseIndex == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                           ,0x13f,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRayTracingLocalShaderBindings *)(*pcVar6)();
      return pFVar10;
    }
    uVar12 = 0;
    uVar11 = uVar12;
    uVar18 = 0;
    if (0 < *(int *)(psVar19 + 8)) {
      do {
        uVar25 = (uint)uVar12;
        uVar17 = 0;
        if ((int)uVar25 < *(int *)(psVar19 + 8)) {
          uVar17 = ~uVar25 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FRayTracingLocalShaderBindings *)(*pcVar6)();
          return pFVar10;
        }
        uVar12 = *(ulonglong *)(psVar19 + 4);
        if ((uVar12 & 1) != 0) {
          uVar12 = ((longlong)uVar12 >> 0x18) + 8 + (longlong)psVar19;
        }
        uVar18 = (*(uint *)(uVar12 + uVar11) >> 0x10) + (*(uint *)(uVar12 + uVar11) & 0xffff);
        if (uVar18 < (uint)uVar20) {
          uVar18 = (uint)uVar20;
        }
        uVar12 = (ulonglong)(uVar25 + 1);
        uVar20 = (ulonglong)uVar18;
        uVar11 = uVar11 + 4;
      } while ((int)(uVar25 + 1) < *(int *)(psVar19 + 8));
    }
  }
  if (GRHIGlobals.RayTracing.SupportsLooseParamsInShaderRecord == false) {
    iVar8 = *(int *)(puVar4 + 7);
  }
  else {
    iVar8 = 0;
  }
  if ((uVar15 + 1 != iVar8 + uVar22) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxUniformBufferIndex + 1 == NumUniformBufferParameters + (GRHIGlobals.RayTracing.SupportsLooseParamsInShaderRecord ? 0 : LooseParameterBuffers.Num())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x14d,
                         L"Highest index of a uniform buffer was %d, but there were %d uniform buffer parameters and %d loose parameters"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FRayTracingLocalShaderBindings *)(*pcVar6)();
    return pFVar10;
  }
  pFVar5 = param_1->CurrentChunk;
  if ((pFVar5 == (FChunk *)0x0) || (pFVar5->Num == 0x400)) {
    pFVar13 = FMemStackBase::Alloc(&param_1->ParameterMemory,0xe010,8);
    param_1->CurrentChunk = pFVar13;
    pFVar13->Next = (FChunk *)0x0;
    param_1->CurrentChunk->Num = 0;
    if (param_1->FirstChunk == (FChunk *)0x0) {
      param_1->FirstChunk = param_1->CurrentChunk;
    }
    if (pFVar5 != (FChunk *)0x0) {
      pFVar5->Next = param_1->CurrentChunk;
    }
  }
  pFVar5 = param_1->CurrentChunk;
  pFVar10 = pFVar5->Bindings + pFVar5->Num;
  pFVar5->Num = pFVar5->Num + 1;
  pFVar10->BindingType = Transient;
  pFVar10->Geometry = (FRHIRayTracingGeometry *)0x0;
  pFVar10->SegmentIndex = 0;
  pFVar10->RecordIndex = 0;
  pFVar10->ShaderIndexInPipeline = 0;
  pFVar10->UserData = 0;
  pFVar10->NumUniformBuffers = 0;
  pFVar10->LooseParameterDataSize = 0;
  pFVar10->UniformBuffers = (FRHIUniformBuffer **)0x0;
  pFVar10->LooseParameterData = (uchar *)0x0;
  if (iVar9 != 0) {
    _Dst = FMemStackBase::Alloc(&param_1->ParameterMemory,(ulonglong)(uint)(iVar9 * 8),8);
    pFVar10->UniformBuffers = _Dst;
    memset(_Dst,0,(ulonglong)(uint)(iVar9 * 8));
  }
  pFVar10->NumUniformBuffers = (ushort)iVar9;
  if (uVar18 != 0) {
    puVar14 = FMemStackBase::Alloc(&param_1->ParameterMemory,(ulonglong)uVar18,8);
    pFVar10->LooseParameterData = puVar14;
  }
  lVar16 = 0;
  pFVar10->RecordIndex = param_3;
  pFVar10->ShaderIndexInPipeline = param_2;
  pFVar10->UserData = param_4;
  pFVar10->BindingType = param_5;
  pFVar10->LooseParameterDataSize = (ushort)uVar18;
  if (0 < lVar21) {
    do {
      uVar2 = *puVar23;
      puVar23 = puVar23 + 1;
      ppuVar1 = local_50->InlineStorage + lVar16;
      lVar16 = lVar16 + 1;
      pFVar10->UniformBuffers[uVar2] = (FRHIUniformBuffer *)*ppuVar1;
    } while (lVar16 < lVar21);
  }
  if (*(int *)(puVar4 + 7) != 0) {
    if ((*(int *)(puVar4 + 7) < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRayTracingLocalShaderBindings *)(*pcVar6)();
      return pFVar10;
    }
    uVar20 = puVar4[6];
    if ((uVar20 & 1) != 0) {
      uVar20 = ((longlong)uVar20 >> 0x18) + (longlong)(puVar4 + 6);
    }
    iVar9 = *(int *)(puVar4 + 5) + 7;
    _Src = (void *)((longlong)local_50->InlineStorage +
                   (ulonglong)
                   (uint)(((int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3) +
                         (*(int *)(puVar4 + 1) + *(int *)(puVar4 + 3) + *(int *)(puVar4 + 5)) * 8));
    memset(pFVar10->LooseParameterData,0,(ulonglong)uVar18);
    uVar22 = 0;
    if (0 < *(int *)(uVar20 + 0x10)) {
      lVar21 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar22 < *(int *)(uVar20 + 0x10)) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FRayTracingLocalShaderBindings *)(*pcVar6)();
          return pFVar10;
        }
        uVar11 = *(ulonglong *)(uVar20 + 8);
        if ((uVar11 & 1) != 0) {
          uVar11 = ((longlong)uVar11 >> 0x18) + 8 + uVar20;
        }
        uVar15 = *(uint *)(uVar11 + lVar21);
        memcpy(pFVar10->LooseParameterData + (uVar15 & 0xffff),_Src,(ulonglong)(uVar15 >> 0x10));
        uVar22 = uVar22 + 1;
        lVar21 = lVar21 + 4;
        _Src = (void *)((longlong)_Src + (ulonglong)(uVar15 >> 0x10));
      } while ((int)uVar22 < *(int *)(uVar20 + 0x10));
    }
  }
  return pFVar10;
}

// SetRayTracingShaderBindingsForHitGroup @ 144f29d70

FRayTracingLocalShaderBindings * __thiscall
FMeshDrawShaderBindings::SetRayTracingShaderBindingsForHitGroup
          (FMeshDrawShaderBindings *this,FRayTracingLocalShaderBindingWriter *param_1,uint param_2,
          FRHIRayTracingGeometry *param_3,uint param_4,uint param_5,
          ERayTracingLocalShaderBindingType param_6)

{
  FRayTracingLocalShaderBindings *pFVar1;
  
  pFVar1 = SetRayTracingShaderBindings(this,param_1,param_5,param_2,0,param_6);
  pFVar1->Geometry = param_3;
  pFVar1->SegmentIndex = param_4;
  return pFVar1;
}

// SetRayTracingShaderBindingsForMissShader @ 144f29db0

void __thiscall
FMeshDrawShaderBindings::SetRayTracingShaderBindingsForMissShader
          (FMeshDrawShaderBindings *this,FRHICommandList *param_1,FRHIShaderBindingTable *param_2,
          uint param_3,FRayTracingPipelineState *param_4,uint param_5)

{
  uint uVar1;
  FRHIUniformBuffer ***pppFVar2;
  ushort uVar3;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar4;
  ulonglong *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  bool bVar8;
  FRayTracingLocalShaderBindings *pFVar9;
  FRHIUniformBuffer **_Dst;
  ulonglong uVar10;
  FData *pFVar11;
  longlong lVar12;
  uint uVar13;
  FRHIUniformBuffer *local_a0 [15];
  
  if (((this->ShaderLayouts).ArrayNum != 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderLayouts.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x185,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar11 = &this->Data;
  if (0x50 < this->Size) {
    pFVar11 = (FData *)pFVar11->InlineStorage[0];
  }
  lVar12 = 0;
  if (((this->ShaderLayouts).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar4 = (this->ShaderLayouts).AllocatorInstance.SecondaryData;
  uVar13 = 0xffffffff;
  if (FVar4 != (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
    this = (FMeshDrawShaderBindings *)FVar4;
  }
  local_a0[0] = (FRHIUniformBuffer *)0x0;
  local_a0[1] = (FRHIUniformBuffer *)0x0;
  local_a0[2] = (FRHIUniformBuffer *)0x0;
  local_a0[3] = (FRHIUniformBuffer *)0x0;
  puVar5 = *(ulonglong **)this;
  local_a0[4] = (FRHIUniformBuffer *)0x0;
  local_a0[5] = (FRHIUniformBuffer *)0x0;
  local_a0[6] = (FRHIUniformBuffer *)0x0;
  local_a0[7] = (FRHIUniformBuffer *)0x0;
  uVar10 = *puVar5;
  local_a0[8] = (FRHIUniformBuffer *)0x0;
  local_a0[9] = (FRHIUniformBuffer *)0x0;
  local_a0[10] = (FRHIUniformBuffer *)0x0;
  local_a0[0xb] = (FRHIUniformBuffer *)0x0;
  local_a0[0xc] = (FRHIUniformBuffer *)0x0;
  local_a0[0xd] = (FRHIUniformBuffer *)0x0;
  if ((uVar10 & 1) != 0) {
    uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)puVar5;
  }
  uVar7 = puVar5[1];
  if (((int)puVar5[3] != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SingleShaderBindings.ParameterMapInfo.TextureSamplers.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x191,
                         L"Texture sampler parameters are not supported for ray tracing. UniformBuffers must be used for all resource binding."
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((int)puVar5[5] != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SingleShaderBindings.ParameterMapInfo.SRVs.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x192,
                         L"SRV parameters are not supported for ray tracing. UniformBuffers must be used for all resource binding."
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (0 < (int)uVar7) {
    do {
      uVar3 = *(ushort *)(uVar10 + lVar12 * 2);
      if (uVar3 < 0xe) {
        local_a0[uVar3] = (FRHIUniformBuffer *)pFVar11->InlineStorage[lVar12];
        if ((int)uVar13 < (int)(uint)uVar3) {
          uVar13 = (uint)uVar3;
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)uVar7);
  }
  if (((int)puVar5[3] != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SingleShaderBindings.ParameterMapInfo.TextureSamplers.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x1a3,
                         L"Texture sampler parameters are not supported for ray tracing. UniformBuffers must be used for all resource binding."
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((int)puVar5[5] != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SingleShaderBindings.ParameterMapInfo.SRVs.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x1a4,
                         L"SRV parameters are not supported for ray tracing. UniformBuffers must be used for all resource binding."
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((int)puVar5[7] != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SingleShaderBindings.ParameterMapInfo.LooseParameterBuffers.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x1a5,L"Ray tracing miss shaders may not have loose parameters"), bVar8))
  {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar1 = uVar13 + 1;
  pFVar9 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x38,8);
  *(undefined4 *)&pFVar9->field_0x1 = 0;
  pppFVar2 = &pFVar9->UniformBuffers;
  *(undefined2 *)&pFVar9->field_0x5 = 0;
  pFVar9->field_0x7 = 0;
  *(undefined4 *)&pFVar9->field_0x24 = 0;
  pFVar9->BindingType = Transient;
  pFVar9->Geometry = (FRHIRayTracingGeometry *)0x0;
  pFVar9->SegmentIndex = 0;
  pFVar9->LooseParameterDataSize = 0;
  pFVar9->LooseParameterData = (uchar *)0x0;
  pFVar9->RecordIndex = param_3;
  pFVar9->ShaderIndexInPipeline = param_5;
  *pppFVar2 = (FRHIUniformBuffer **)0x0;
  pFVar9->UserData = 0;
  pFVar9->NumUniformBuffers = (ushort)uVar1;
  if (uVar1 != 0) {
    _Dst = FMemStackBase::Alloc((FMemStackBase *)param_1,(ulonglong)uVar1 << 3,8);
    *pppFVar2 = _Dst;
    if (uVar1 != 0) {
      if (((uVar1 < 2) || ((_Dst <= local_a0 + uVar13 && (local_a0 <= _Dst + uVar13)))) ||
         ((_Dst <= pppFVar2 && (pppFVar2 <= _Dst + uVar13)))) {
        uVar10 = (ulonglong)uVar1;
        lVar12 = 0;
        do {
          *(undefined8 *)(lVar12 + (longlong)*pppFVar2) =
               *(undefined8 *)((longlong)local_a0 + lVar12);
          uVar10 = uVar10 - 1;
          lVar12 = lVar12 + 8;
        } while (uVar10 != 0);
      }
      else {
        memcpy(_Dst,local_a0,(ulonglong)uVar1 << 3);
      }
    }
  }
  FRHICommandList::SetBindingsOnShaderBindingTable
            (param_1,param_2,param_4,1,pFVar9,MissShader,false);
  return;
}

