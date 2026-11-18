// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// Convert<UE::Math::TVector2<float>_> @ 14e5ba9a0

FGLTFJsonAccessor * __thiscall
FGLTFUVBufferConverter::Convert<UE::Math::TVector2<float>_>
          (FGLTFUVBufferConverter *this,FGLTFMeshSection *param_1,FStaticMeshVertexBuffer *param_2,
          uint param_3,uchar *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  FGLTFBufferBuilder *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FGLTFJsonAccessor *pFVar8;
  FGLTFJsonAccessor *pFVar9;
  FGLTFJsonBufferView *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  ForAnyElementType local_48;
  int local_40 [2];
  
  uVar3 = (param_1->IndexMap).ArrayNum;
  pFVar9 = (FGLTFJsonAccessor *)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,1,uVar3,&local_48,local_40,local_40 + 1);
  uVar4 = param_2->NumTexCoords;
  pFVar8 = pFVar9;
  if (uVar3 != 0) {
    do {
      uVar12 = (uint)pFVar8;
      uVar7 = 0;
      if ((int)uVar12 < (param_1->IndexMap).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FGLTFJsonAccessor *)(*pcVar5)();
        return pFVar8;
      }
      uVar11 = (ulonglong)
               (uVar4 * *(int *)((param_1->IndexMap).AllocatorInstance.Data +
                                (longlong)(int)uVar12 * 4) + param_3);
      uVar1 = *(undefined4 *)(param_4 + uVar11 * 8);
      uVar2 = *(undefined4 *)(param_4 + uVar11 * 8 + 4);
      uVar7 = 0;
      if ((int)uVar12 < local_40[0]) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FGLTFJsonAccessor *)(*pcVar5)();
        return pFVar8;
      }
      *(ulonglong *)(local_48.Data + (longlong)(int)uVar12 * 8) = CONCAT44(uVar2,uVar1);
      pFVar8 = (FGLTFJsonAccessor *)(ulonglong)(uVar12 + 1);
    } while (uVar12 + 1 < uVar3);
  }
  if (local_40[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar9 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar10 = FGLTFBufferBuilder::AddBufferView
                        (this_00,local_48.Data,(longlong)local_40[0] << 3,ArrayBuffer,'\x04');
    pFVar9->BufferView = pFVar10;
    pFVar9->ComponentType = Float;
    pFVar9->Count = local_40[0];
    pFVar9->Type = Vec2;
    pFVar9->bNormalized = false;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return pFVar9;
}

// Convert<FVector2DHalf> @ 14e5babb0

FGLTFJsonAccessor * __thiscall
FGLTFUVBufferConverter::Convert<FVector2DHalf>
          (FGLTFUVBufferConverter *this,FGLTFMeshSection *param_1,FStaticMeshVertexBuffer *param_2,
          uint param_3,uchar *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  FGLTFBufferBuilder *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FGLTFJsonAccessor *pFVar7;
  FGLTFJsonAccessor *pFVar8;
  FGLTFJsonBufferView *pFVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  ForAnyElementType local_48;
  int local_40 [2];
  
  uVar1 = (param_1->IndexMap).ArrayNum;
  pFVar8 = (FGLTFJsonAccessor *)0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40[0] = 0;
  local_40[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,1,uVar1,&local_48,local_40,local_40 + 1);
  uVar2 = param_2->NumTexCoords;
  pFVar7 = pFVar8;
  if (uVar1 != 0) {
    do {
      uVar10 = (uint)pFVar7;
      uVar6 = 0;
      if ((int)uVar10 < (param_1->IndexMap).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
      iVar3 = *(int *)((param_1->IndexMap).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
      fVar11 = FGenericPlatformMath::LoadHalf
                         ((ushort *)(param_4 + (ulonglong)(uVar2 * iVar3 + param_3) * 4));
      fVar12 = FGenericPlatformMath::LoadHalf
                         ((ushort *)
                          ((longlong)(param_4 + (ulonglong)(uVar2 * iVar3 + param_3) * 4) + 2));
      uVar6 = 0;
      if ((int)uVar10 < local_40[0]) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
      *(ulonglong *)(local_48.Data + (longlong)(int)uVar10 * 8) = CONCAT44(fVar12,fVar11);
      pFVar7 = (FGLTFJsonAccessor *)(ulonglong)(uVar10 + 1);
    } while (uVar10 + 1 < uVar1);
  }
  if (local_40[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    pFVar8 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    pFVar9 = FGLTFBufferBuilder::AddBufferView
                       (this_00,local_48.Data,(longlong)local_40[0] << 3,ArrayBuffer,'\x04');
    pFVar8->BufferView = pFVar9;
    pFVar8->ComponentType = Float;
    pFVar8->Count = local_40[0];
    pFVar8->Type = Vec2;
    pFVar8->bNormalized = false;
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return pFVar8;
}

// Convert @ 14e5ec370

FGLTFJsonAccessor * __thiscall
FGLTFUVBufferConverter::Convert
          (FGLTFUVBufferConverter *this,FGLTFMeshSection *param_1,FStaticMeshVertexBuffer *param_2,
          uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  FRHIBuffer *pFVar5;
  FGLTFBufferBuilder *this_00;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  uchar *puVar10;
  FGLTFJsonAccessor *pFVar11;
  FGLTFJsonBufferView *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  FGLTFJsonAccessor *pFVar15;
  longlong *local_58;
  ForAnyElementType local_48;
  int local_40 [2];
  
  if (((param_2 == (FStaticMeshVertexBuffer *)0x0) || (param_2->NumVertices == 0)) ||
     (param_2->NumTexCoords <= param_3)) {
    return (FGLTFJsonAccessor *)0x0;
  }
  puVar10 = param_2->TexcoordDataPtr;
  if (((puVar10 == (uchar *)0x0) || (param_2->TangentsData == (FStaticMeshVertexDataInterface *)0x0)
      ) || ((param_2->TexcoordData == (FStaticMeshVertexDataInterface *)0x0 ||
            ((cVar7 = (**(code **)((longlong)*param_2->TangentsData + 0x58))(), cVar7 == '\0' ||
             (cVar7 = (**(code **)((longlong)*param_2->TexcoordData + 0x58))(), cVar7 == '\0'))))))
  {
    local_58 = ::operator_new(0x18);
    if (local_58 != (longlong *)0x0) {
      pFVar5 = *(FRHIBuffer **)&(param_2->TexCoordVertexBuffer).field_0x20;
      (((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(local_58 + 1))->AllocatorInstance).
      Data = (FScriptContainerElement *)0x0;
      *local_58 = (longlong)&___7FGLTFBufferAdapterGPU__6B_;
      local_58[2] = 0;
      FGLTFBufferUtilities::ReadRHIBuffer
                (pFVar5,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(local_58 + 1));
      goto LAB_14e5ec46a;
    }
  }
  else {
    local_58 = ::operator_new(0x10);
    if (local_58 != (longlong *)0x0) {
      local_58[1] = (longlong)puVar10;
      *local_58 = (longlong)&___7FGLTFBufferAdapterCPU__6B_;
      goto LAB_14e5ec46a;
    }
  }
  local_58 = (longlong *)0x0;
LAB_14e5ec46a:
  pFVar11 = (FGLTFJsonAccessor *)0x0;
  puVar10 = (uchar *)(**(code **)(*local_58 + 8))(local_58);
  if (puVar10 != (uchar *)0x0) {
    if (param_2->bUseFullPrecisionUVs == false) {
      pFVar11 = Convert<FVector2DHalf>(this,param_1,param_2,param_3,puVar10);
    }
    else {
      uVar3 = (param_1->IndexMap).ArrayNum;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40[0] = 0;
      local_40[1] = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,1,uVar3,&local_48,local_40,local_40 + 1);
      uVar4 = param_2->NumTexCoords;
      pFVar15 = pFVar11;
      if (uVar3 != 0) {
        do {
          uVar14 = (uint)pFVar15;
          uVar9 = 0;
          if ((int)uVar14 < (param_1->IndexMap).ArrayNum) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            pFVar11 = (FGLTFJsonAccessor *)(*pcVar6)();
            return pFVar11;
          }
          uVar13 = (ulonglong)
                   (uVar4 * *(int *)((param_1->IndexMap).AllocatorInstance.Data +
                                    (longlong)(int)uVar14 * 4) + param_3);
          uVar1 = *(undefined4 *)(puVar10 + uVar13 * 8);
          uVar2 = *(undefined4 *)(puVar10 + uVar13 * 8 + 4);
          uVar9 = 0;
          if ((int)uVar14 < local_40[0]) {
            uVar9 = ~uVar14 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            pFVar11 = (FGLTFJsonAccessor *)(*pcVar6)();
            return pFVar11;
          }
          *(ulonglong *)(local_48.Data + (longlong)(int)uVar14 * 8) = CONCAT44(uVar2,uVar1);
          pFVar15 = (FGLTFJsonAccessor *)(ulonglong)(uVar14 + 1);
        } while (uVar14 + 1 < uVar3);
      }
      if (local_40[0] != 0) {
        this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
        pFVar11 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
        pFVar12 = FGLTFBufferBuilder::AddBufferView
                            (this_00,local_48.Data,(longlong)local_40[0] << 3,ArrayBuffer,'\x04');
        pFVar11->BufferView = pFVar12;
        pFVar11->ComponentType = Float;
        pFVar11->Count = local_40[0];
        pFVar11->Type = Vec2;
        pFVar11->bNormalized = false;
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
    }
  }
  (**(code **)*local_58)(local_58,1);
  return pFVar11;
}

