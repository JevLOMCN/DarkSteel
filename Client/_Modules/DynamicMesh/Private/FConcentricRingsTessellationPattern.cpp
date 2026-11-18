// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 10

// ~FConcentricRingsTessellationPattern @ 14c7b70b0

void __thiscall
SelectiveTessellateLocals::FConcentricRingsTessellationPattern::~FConcentricRingsTessellationPattern
          (FConcentricRingsTessellationPattern *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7FConcentricRingsTessellationPattern_SelectiveTessellateLocals__6B_;
  pFVar1 = (this->EdgeTessLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InnerTessLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTessellationPattern_Geometry_UE__6B_;
  return;
}

// GetInnerLevelAsSegments @ 14c810140

int __thiscall
SelectiveTessellateLocals::FConcentricRingsTessellationPattern::GetInnerLevelAsSegments
          (FConcentricRingsTessellationPattern *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->InnerTessLevels).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->InnerTessLevels).AllocatorInstance.Data + (longlong)param_1 * 4) + -1;
}

// GetNumberOfNewVerticesForEdgePatch @ 14c810a70

int __thiscall
SelectiveTessellateLocals::FConcentricRingsTessellationPattern::GetNumberOfNewVerticesForEdgePatch
          (FConcentricRingsTessellationPattern *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  lVar1 = this->_padding_;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x1d8) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    uVar4 = 0;
    if (param_1 < (this->EdgeTessLevels).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    return *(int *)((this->EdgeTessLevels).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                     ,0x245,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  return -1;
}

// GetNumberOfNewVerticesForTrianglePatch @ 14c810d10

int __thiscall
SelectiveTessellateLocals::FConcentricRingsTessellationPattern::
GetNumberOfNewVerticesForTrianglePatch(FConcentricRingsTessellationPattern *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  lVar1 = this->_padding_;
  if (((param_1 < 0) || (*(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar1 + 0x148) +
                                    (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                       ,0x251,L"");
    if (!bVar9) {
      return -1;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  iVar3 = GetInnerLevelAsSegments(this,param_1);
  if (iVar3 < 0) {
    return 0;
  }
  if (iVar3 == 0) {
    return 1;
  }
  iVar7 = 0;
  iVar5 = 0;
  if (iVar3 < 1) {
    return 0;
  }
  iVar8 = iVar7;
  if (3 < iVar3 + 1) {
    iVar6 = iVar3 * 3;
    do {
      iVar7 = iVar7 + iVar6;
      bVar9 = iVar3 == 4;
      iVar3 = iVar3 + -4;
      iVar4 = (bVar9 - 6) + iVar6;
      iVar6 = iVar6 + -0xc;
      iVar8 = iVar8 + iVar4;
    } while (2 < iVar3);
    if (iVar3 < 1) goto LAB_14c810ddf;
  }
  iVar5 = (uint)(iVar3 == 2) + iVar3 * 3;
LAB_14c810ddf:
  return iVar5 + iVar8 + iVar7;
}

// GetNumberOfPatchTriangles @ 14c810f20

int __thiscall
SelectiveTessellateLocals::FConcentricRingsTessellationPattern::GetNumberOfPatchTriangles
          (FConcentricRingsTessellationPattern *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = this->_padding_;
  if ((-1 < param_1) && (param_1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x148) + lVar1) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      iVar5 = GetInnerLevelAsSegments(this,param_1);
      lVar2 = (ulonglong)(param_1 & 0x1ff) * 0xc;
      iVar6 = (**(code **)(this->_padding_ + 0x10))
                        (this,*(undefined4 *)
                               (*(longlong *)(*(longlong *)(this->_padding_ + 0x180) + lVar1) +
                               lVar2));
      iVar7 = (**(code **)(this->_padding_ + 0x10))
                        (this,*(undefined4 *)
                               (*(longlong *)(*(longlong *)(this->_padding_ + 0x180) + lVar1) + 4 +
                               lVar2));
      iVar8 = (**(code **)(this->_padding_ + 0x10))
                        (this,*(undefined4 *)
                               (*(longlong *)(*(longlong *)(this->_padding_ + 0x180) + lVar1) + 8 +
                               lVar2));
      iVar6 = (iVar5 + 1) * 3 + iVar8 + iVar7 + iVar6;
      if (0 < iVar5) {
        while (iVar7 = iVar5 + -2, -1 < iVar7) {
          iVar6 = iVar6 + (iVar7 + iVar5) * 3;
          iVar5 = iVar7;
          if (iVar7 < 1) {
            return iVar6;
          }
        }
        iVar6 = iVar6 + 1;
      }
      return iVar6;
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                     ,0x272,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  return -1;
}

// Init @ 14c812fc0

void __thiscall
SelectiveTessellateLocals::FConcentricRingsTessellationPattern::Init
          (FConcentricRingsTessellationPattern *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint local_38;
  uint uStack_34;
  
  pTVar1 = &this->EdgeTessLevels;
  if (pTVar1 != param_1) {
    iVar4 = param_1->ArrayNum;
    piVar2 = &(this->EdgeTessLevels).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    iVar5 = *piVar2;
    (this->EdgeTessLevels).ArrayNum = iVar4;
    if (iVar4 == 0) {
      if (iVar5 == 0) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,iVar5,&pTVar1->AllocatorInstance,0,piVar2);
      }
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,iVar5,&pTVar1->AllocatorInstance,iVar4,piVar2);
      memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
    }
  }
  this_00 = &this->InnerTessLevels;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(this_00,param_2);
  lVar6 = this->_padding_;
  uVar15 = 0;
  uVar16 = *(int *)(lVar6 + 0x140) * 0x200 + *(int *)(lVar6 + 0x144);
  if ((uVar16 != 0) &&
     (puVar7 = *(undefined8 **)(lVar6 + 0x148), 0xfffd < (ushort)(*(short *)*puVar7 - 1U))) {
    uVar15 = 1;
    uVar14 = 1;
    if ((int)uVar16 < 2) goto joined_r0x00014c8130e6;
    do {
      lVar8 = (ulonglong)((uint)uVar15 & 0x1ff) * 2;
      if ((*(short *)(lVar8 + puVar7[uVar15 >> 9]) != 0) &&
         (*(short *)(lVar8 + puVar7[uVar15 >> 9]) != -1)) break;
      uVar14 = (uint)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar16);
  }
  uVar14 = (uint)uVar15;
joined_r0x00014c8130e6:
  if (uVar14 == uVar16) {
    return;
  }
  do {
    uVar14 = (uint)uVar15;
    uVar12 = 0;
    if ((int)uVar14 < (this->InnerTessLevels).ArrayNum) {
      uVar12 = ~uVar14 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (*(int *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar14 * 4) < 1) {
      lVar8 = *(longlong *)(*(longlong *)(this->_padding_ + 0x180) + (uVar15 >> 9) * 8);
      uVar3 = *(undefined8 *)(lVar8 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
      uVar12 = *(uint *)(lVar8 + 8 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
      local_38 = (uint)uVar3;
      uVar13 = 0;
      if ((int)local_38 < (this->EdgeTessLevels).ArrayNum) {
        uVar13 = ~local_38 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)local_38 * 4) == 0) {
        uStack_34 = (uint)((ulonglong)uVar3 >> 0x20);
        uVar13 = 0;
        if ((int)uStack_34 < (this->EdgeTessLevels).ArrayNum) {
          uVar13 = ~uStack_34 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uStack_34 * 4) == 0) {
          uVar13 = 0;
          if ((int)uVar12 < (this->EdgeTessLevels).ArrayNum) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (*(int *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar12 * 4) == 0)
          goto LAB_14c813315;
        }
      }
      uVar12 = 0;
      if ((int)uVar14 < (this->InnerTessLevels).ArrayNum) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(undefined4 *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar14 * 4) = 1;
    }
LAB_14c813315:
    uVar14 = uVar14 + 1;
    uVar15 = (ulonglong)uVar14;
    if ((int)uVar16 <= (int)uVar14) goto joined_r0x00014c8130e6;
    while( true ) {
      lVar10 = (ulonglong)((uint)uVar15 & 0x1ff) * 2;
      lVar8 = *(longlong *)((uVar15 >> 9) * 8 + *(longlong *)(lVar6 + 0x148));
      if ((*(short *)(lVar10 + lVar8) != 0) && (*(short *)(lVar10 + lVar8) != -1)) break;
      uVar14 = (uint)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)uVar16 <= (int)uVar14) goto joined_r0x00014c8130e6;
    }
  } while( true );
}

// StitchRingEdges @ 14c83b870

int __thiscall
SelectiveTessellateLocals::FConcentricRingsTessellationPattern::StitchRingEdges
          (FConcentricRingsTessellationPattern *this,FRingEdge *param_1,FRingEdge *param_2,
          int param_3,TArrayView<UE::Geometry::FIndex3i,int> *param_4)

{
  int iVar1;
  FIndex3i *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int local_res18;
  uint local_58;
  longlong local_48;
  
  iVar6 = param_1->VertNum;
  uVar14 = 0;
  uVar15 = 0;
  local_res18 = 0;
  iVar1 = param_2->VertNum;
  iVar8 = iVar1 - iVar6;
  iVar5 = iVar6 + -2 + iVar1;
  if (0 < iVar5) {
    local_48 = 0;
    local_58 = param_3;
    do {
      if (((iVar8 < 0) && ((int)(uVar14 + 1) < iVar6)) || (uVar15 == iVar1 - 1U)) {
        if ((((int)uVar15 < 0) || (param_2->VertNum <= (int)uVar15)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < VertNum",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                               ,0x1eb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar15 == 0) {
          iVar11 = param_2->V1;
        }
        else if (uVar15 == param_2->VertNum - 1U) {
          iVar11 = param_2->V2;
        }
        else {
          uVar9 = uVar15 - 1;
          if (param_2->bReverse != false) {
            uVar9 = ~uVar9 + (param_2->Inner).ArrayNum;
          }
          if ((((int)uVar9 < 0) || (param_2->VertNum <= (int)uVar9)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ActualIndex >= 0 && ActualIndex < VertNum",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                                 ,0x1f9,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          piVar7 = TArrayView<int,int>::operator[](&param_2->Inner,uVar9);
          iVar11 = *piVar7;
        }
        iVar12 = uVar14 + 1;
        if (((iVar12 < 0) || (param_1->VertNum <= iVar12)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < VertNum",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                               ,0x1eb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar14 == 0xffffffff) {
          iVar12 = param_1->V1;
        }
        else if (iVar12 == param_1->VertNum + -1) {
          iVar12 = param_1->V2;
        }
        else {
          uVar9 = uVar14;
          if (param_1->bReverse != false) {
            uVar9 = ~uVar14 + (param_1->Inner).ArrayNum;
          }
          if ((((int)uVar9 < 0) || (param_1->VertNum <= (int)uVar9)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ActualIndex >= 0 && ActualIndex < VertNum",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                                 ,0x1f9,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          piVar7 = TArrayView<int,int>::operator[](&param_1->Inner,uVar9);
          iVar12 = *piVar7;
        }
        if ((((int)uVar14 < 0) || (param_1->VertNum <= (int)uVar14)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < VertNum",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                               ,0x1eb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar14 == 0) {
          iVar10 = param_1->V1;
        }
        else if (uVar14 == param_1->VertNum - 1U) {
          iVar10 = param_1->V2;
        }
        else {
          uVar9 = uVar14 - 1;
          if (param_1->bReverse != false) {
            uVar9 = ~uVar9 + (param_1->Inner).ArrayNum;
          }
          if ((((int)uVar9 < 0) || (param_1->VertNum <= (int)uVar9)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ActualIndex >= 0 && ActualIndex < VertNum",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                                 ,0x1f9,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          piVar7 = TArrayView<int,int>::operator[](&param_1->Inner,uVar9);
          iVar10 = *piVar7;
        }
        lVar13 = local_48 + param_3;
        uVar9 = 0;
        if ((int)local_58 < param_4->ArrayNum) {
          uVar9 = ~local_58 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        uVar14 = uVar14 + 1;
        pFVar2 = param_4->DataPtr;
        pFVar2[lVar13].field0_0x0._s_0.A = iVar10;
        pFVar2[lVar13].field0_0x0._s_0.B = iVar12;
        pFVar2[lVar13].field0_0x0._s_0.C = iVar11;
        iVar11 = iVar1 * 2;
      }
      else {
        if (((iVar8 < 0) || (iVar1 <= (int)(uVar15 + 1))) &&
           ((uVar14 != iVar6 - 1U &&
            (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_8980374933414608044>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                                ,0x354,
                                "(TessDiff >= 0 && InnerIdx + 1 < InnerNum) || OuterIdx == OuterNum - 1"
                               ), bVar4)))) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        iVar11 = uVar15 + 1;
        if (((iVar11 < 0) || (param_2->VertNum <= iVar11)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < VertNum",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                               ,0x1eb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar15 == 0xffffffff) {
          iVar11 = param_2->V1;
        }
        else if (iVar11 == param_2->VertNum + -1) {
          iVar11 = param_2->V2;
        }
        else {
          uVar9 = uVar15;
          if (param_2->bReverse != false) {
            uVar9 = ~uVar15 + (param_2->Inner).ArrayNum;
          }
          if ((((int)uVar9 < 0) || (param_2->VertNum <= (int)uVar9)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ActualIndex >= 0 && ActualIndex < VertNum",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                                 ,0x1f9,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          piVar7 = TArrayView<int,int>::operator[](&param_2->Inner,uVar9);
          iVar11 = *piVar7;
        }
        if ((((int)uVar14 < 0) || (param_1->VertNum <= (int)uVar14)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < VertNum",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                               ,0x1eb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar14 == 0) {
          iVar12 = param_1->V1;
        }
        else if (uVar14 == param_1->VertNum - 1U) {
          iVar12 = param_1->V2;
        }
        else {
          uVar9 = uVar14 - 1;
          if (param_1->bReverse != false) {
            uVar9 = ~uVar9 + (param_1->Inner).ArrayNum;
          }
          if ((((int)uVar9 < 0) || (param_1->VertNum <= (int)uVar9)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ActualIndex >= 0 && ActualIndex < VertNum",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                                 ,0x1f9,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          piVar7 = TArrayView<int,int>::operator[](&param_1->Inner,uVar9);
          iVar12 = *piVar7;
        }
        if ((((int)uVar15 < 0) || (param_2->VertNum <= (int)uVar15)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < VertNum",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                               ,0x1eb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if (uVar15 == 0) {
          iVar10 = param_2->V1;
        }
        else if (uVar15 == param_2->VertNum - 1U) {
          iVar10 = param_2->V2;
        }
        else {
          uVar9 = uVar15 - 1;
          if (param_2->bReverse != false) {
            uVar9 = ~uVar9 + (param_2->Inner).ArrayNum;
          }
          if ((((int)uVar9 < 0) || (param_2->VertNum <= (int)uVar9)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ActualIndex >= 0 && ActualIndex < VertNum",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                                 ,0x1f9,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          piVar7 = TArrayView<int,int>::operator[](&param_2->Inner,uVar9);
          iVar10 = *piVar7;
        }
        lVar13 = local_48 + param_3;
        uVar9 = 0;
        if (local_res18 + param_3 < param_4->ArrayNum) {
          uVar9 = (uint)~(local_res18 + param_3) >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        pFVar2 = param_4->DataPtr;
        pFVar2[lVar13].field0_0x0._s_0.A = iVar10;
        pFVar2[lVar13].field0_0x0._s_0.B = iVar12;
        pFVar2[lVar13].field0_0x0._s_0.C = iVar11;
        uVar15 = uVar15 + 1;
        iVar11 = iVar6 * -2;
      }
      iVar8 = iVar8 + iVar11;
      local_res18 = local_res18 + 1;
      local_48 = local_48 + 1;
      local_58 = local_58 + 1;
    } while (local_48 < iVar5);
  }
  return iVar5;
}

// TessellateEdgePatch @ 14c83f400

void __thiscall
SelectiveTessellateLocals::FConcentricRingsTessellationPattern::TessellateEdgePatch
          (FConcentricRingsTessellationPattern *this,EdgePatch *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = param_1->EdgeID;
  uVar5 = 0;
  if ((int)uVar7 < (this->EdgeTessLevels).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
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
  iVar1 = *(int *)((this->EdgeTessLevels).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
  dVar3 = __real_3ff0000000000000 / (double)(iVar1 + 1);
  if (0 < iVar1) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (param_1->LinearCoord).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (param_1->LinearCoord).DataPtr[lVar6] = (double)(int)(uVar7 + 1) * dVar3;
      lVar6 = lVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (lVar6 < iVar1);
  }
  return;
}

// TessellateTriPatch @ 14c83fe30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SelectiveTessellateLocals::FConcentricRingsTessellationPattern::TessellateTriPatch
          (FConcentricRingsTessellationPattern *this,TrianglePatch *param_1)

{
  int *piVar1;
  TArrayView<UE::Geometry::FIndex3i,int> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  ForAnyElementType FVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  FIndex3i *pFVar25;
  longlong lVar26;
  uint uVar27;
  FRingEdge *pFVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  FRingEdge *pFVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  ulonglong uVar37;
  uint uVar38;
  FRingEdge *pFVar39;
  double dVar40;
  uint local_res18;
  ForAnyElementType local_3a8;
  undefined8 local_3a0;
  uint local_398;
  uint local_394;
  ulonglong local_390;
  FRingEdge *local_388;
  longlong local_380;
  FRingEdge *local_378;
  TVector<double>_u_0 local_370;
  TVector<double>_u_0 local_358;
  uint local_340;
  uint local_33c;
  TVector<double>_u_0 local_338;
  undefined8 local_318;
  int *piStack_310;
  ulonglong local_308;
  ulonglong uStack_300;
  undefined8 local_2f8;
  int *piStack_2f0;
  ulonglong local_2e8;
  ulonglong uStack_2e0;
  undefined8 local_2d8;
  int *piStack_2d0;
  ulonglong local_2c8;
  ulonglong uStack_2c0;
  undefined8 local_2b8;
  int *piStack_2b0;
  ulonglong local_2a8;
  int iStack_2a0;
  uint uStack_29c;
  int local_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  undefined4 local_278;
  uint uStack_274;
  undefined4 uStack_270;
  uint uStack_26c;
  int local_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined4 local_258;
  uint uStack_254;
  undefined4 uStack_250;
  uint uStack_24c;
  int local_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined4 local_238;
  uint uStack_234;
  undefined4 uStack_230;
  uint uStack_22c;
  int local_228;
  int iStack_224;
  int *piStack_220;
  undefined8 uStack_218;
  int iStack_210;
  undefined4 uStack_20c;
  int local_208;
  int iStack_204;
  int *piStack_200;
  undefined8 uStack_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  int iStack_1e4;
  int *piStack_1e0;
  ulonglong uStack_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  int local_1c8;
  int iStack_1c4;
  int *piStack_1c0;
  ulonglong uStack_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int *piStack_1a0;
  ulonglong uStack_198;
  int iStack_190;
  uint uStack_18c;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  int *local_140;
  int iStack_138;
  undefined4 uStack_134;
  int *local_130;
  int iStack_128;
  undefined4 uStack_124;
  int *local_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined8 local_108;
  int *piStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  int *piStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int *piStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  
  piVar11 = &(param_1->UVEdge).VIDs.ArrayNum;
  uVar15 = *(undefined8 *)piVar11;
  local_228 = (param_1->UVWCorners).field0_0x0._s_0.A;
  piVar9 = (param_1->UVEdge).VIDs.DataPtr;
  pFVar28 = (FRingEdge *)0x0;
  iStack_224 = (param_1->UVWCorners).field0_0x0._s_0.B;
  uVar16 = *(undefined8 *)&(param_1->UVWCorners).field0_0x0;
  iStack_204 = (param_1->UVWCorners).field0_0x0._s_0.C;
  uVar18._0_4_ = *(int *)((longlong)&(param_1->UVWCorners).field0_0x0 + 4);
  uVar18._4_4_ = *(int *)((longlong)&(param_1->UVWCorners).field0_0x0 + 8);
  iStack_210 = *piVar11 + 2;
  uStack_20c = CONCAT31(uStack_20c._1_3_,(char)*(undefined4 *)&(param_1->UVEdge).bIsReversed);
  piVar11 = &(param_1->VWEdge).VIDs.ArrayNum;
  uVar17 = *(undefined8 *)piVar11;
  piVar10 = (param_1->VWEdge).VIDs.DataPtr;
  uVar12 = CONCAT44(uStack_20c,iStack_210);
  piVar1 = &(param_1->UWEdge).VIDs.ArrayNum;
  uVar37 = *(ulonglong *)piVar1;
  iStack_2a0 = *(int *)&(param_1->UWEdge).LinearCoord.DataPtr;
  uStack_29c = *(uint *)((longlong)&(param_1->UWEdge).LinearCoord.DataPtr + 4);
  iStack_1f0 = *piVar11 + 2;
  local_3a8.Data = (FScriptContainerElement *)0x0;
  uStack_1ec = CONCAT31(uStack_1ec._1_3_,(char)*(undefined4 *)&(param_1->VWEdge).bIsReversed);
  local_2b8 = *(undefined8 *)&param_1->UWEdge;
  piVar11 = (param_1->UWEdge).VIDs.DataPtr;
  local_3a0 = 0;
  uVar13 = CONCAT44(uStack_1ec,iStack_1f0);
  iStack_1d0 = *piVar1 + 2;
  uStack_1cc = CONCAT31(uStack_1cc._1_3_,(char)*(undefined4 *)&(param_1->UWEdge).bIsReversed);
  uVar14 = CONCAT44(local_228,iStack_204);
  uVar34 = CONCAT44(uStack_1cc,iStack_1d0);
  piStack_2b0 = piVar11;
  local_2a8 = uVar37;
  piStack_220 = piVar9;
  uStack_218 = uVar15;
  local_208 = iStack_224;
  piStack_200 = piVar10;
  uStack_1f8 = uVar17;
  local_1e8 = iStack_204;
  iStack_1e4 = local_228;
  piStack_1e0 = piVar11;
  uStack_1d8 = uVar37;
  iVar22 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x860,&local_3a8,(int *)((longlong)&local_3a0 + 4));
  local_3a0 = CONCAT44(local_3a0._4_4_,iVar22 + 1);
  lVar26 = (longlong)iVar22 * 0x60;
  *(undefined8 *)(local_3a8.Data + lVar26) = uVar16;
  *(int **)(local_3a8.Data + lVar26 + 8) = piVar9;
  *(undefined8 *)(local_3a8.Data + lVar26 + 0x10) = uVar15;
  *(undefined8 *)(local_3a8.Data + lVar26 + 0x10 + 8) = uVar12;
  local_188._s_0.Y = _UNK_150689518;
  local_188._s_0.X = ___xmm_00000000000000003ff0000000000000;
  dVar19 = __real_3ff0000000000000;
  *(undefined8 *)(local_3a8.Data + lVar26 + 0x20) = uVar18;
  *(int **)(local_3a8.Data + lVar26 + 0x20 + 8) = piVar10;
  *(undefined8 *)(local_3a8.Data + lVar26 + 0x30) = uVar17;
  *(undefined8 *)(local_3a8.Data + lVar26 + 0x30 + 8) = uVar13;
  *(undefined8 *)(local_3a8.Data + lVar26 + 0x40) = uVar14;
  *(int **)(local_3a8.Data + lVar26 + 0x40 + 8) = piVar11;
  local_170._s_0.Y = _UNK_15061cbc8;
  local_170._s_0.X = ___xmm_3ff00000000000000000000000000000;
  *(ulonglong *)(local_3a8.Data + lVar26 + 0x50) = uVar37;
  *(ulonglong *)(local_3a8.Data + lVar26 + 0x50 + 8) = uVar34;
  local_188._s_0.Z = 0.0;
  local_158._s_0.X = 0.0;
  local_158._s_0.Y = 0.0;
  local_170._s_0.Z = 0.0;
  local_158._s_0.Z = dVar19;
  local_108 = uVar16;
  piStack_100 = piVar9;
  local_f8 = uVar15;
  uStack_f0 = uVar12;
  local_e8 = uVar18;
  piStack_e0 = piVar10;
  local_d8 = uVar17;
  uStack_d0 = uVar13;
  local_c8 = uVar14;
  piStack_c0 = piVar11;
  local_b8 = uVar37;
  uStack_b0 = uVar34;
  local_res18 = GetInnerLevelAsSegments(this,param_1->TriangleID);
  uVar34 = (ulonglong)(int)local_res18;
  uVar27 = 0;
  if (-1 < (int)local_res18) {
    local_388 = (FRingEdge *)0x0;
    pFVar32 = pFVar28;
    uVar37 = uVar34;
    pFVar39 = pFVar28;
    do {
      iVar22 = (int)uVar34;
      local_390 = uVar37;
      UE::Geometry::FTessellationPattern::ComputeInnerConcentricTriangle
                ((FTessellationPattern *)this,(TVector<double> *)&local_188._s_0,
                 (TVector<double> *)&local_170._s_0,(TVector<double> *)&local_158._s_0,iVar22 + 1,
                 (TVector<double> *)&local_338._s_0,(TVector<double> *)&local_370._s_0,
                 (TVector<double> *)&local_358._s_0);
      uVar14 = local_338._s_0.Z;
      uVar13 = local_338._s_0.Y;
      uVar12 = local_338._s_0.X;
      local_318 = 0xffffffffffffffff;
      piStack_310 = (int *)0x0;
      local_308 = local_308 & 0xffffffff00000000;
      uStack_300 = uStack_300 & 0xffffff0000000000;
      local_2f8 = 0xffffffffffffffff;
      piStack_2f0 = (int *)0x0;
      local_2e8 = local_2e8 & 0xffffffff00000000;
      uStack_2e0 = uStack_2e0 & 0xffffff0000000000;
      local_2d8 = 0xffffffffffffffff;
      piStack_2d0 = (int *)0x0;
      local_2c8 = local_2c8 & 0xffffffff00000000;
      uStack_2c0 = uStack_2c0 & 0xffffff0000000000;
      uVar29 = (uint)pFVar39;
      if (iVar22 == 0) {
        dVar8 = 0.0;
      }
      else {
        dVar8 = dVar19 / (double)iVar22;
      }
      local_394 = ~uVar29 >> 0x1f;
      uVar35 = 0;
      if ((int)uVar29 < (param_1->BaryCoord).ArrayNum) {
        uVar35 = local_394;
      }
      local_378 = pFVar32;
      local_340 = uVar29;
      local_33c = uVar29;
      if ((uVar35 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = (param_1->BaryCoord).DataPtr;
      pTVar4 = pTVar3 + (longlong)pFVar32;
      (pTVar4->field0_0x0)._s_0.X = (double)uVar12;
      (pTVar4->field0_0x0)._s_0.Y = (double)uVar13;
      pTVar3[(longlong)pFVar32].field0_0x0._s_0.Z = (double)uVar14;
      if (1 < (longlong)uVar37) {
        lVar31 = local_390 - 1;
        lVar26 = (longlong)pFVar32 * 0x18;
        uVar35 = uVar29;
        do {
          uVar35 = uVar35 + 1;
          uVar33 = uVar27;
          if ((int)uVar35 < (param_1->BaryCoord).ArrayNum) {
            uVar33 = ~uVar35 >> 0x1f;
          }
          dVar40 = (double)(int)(uVar35 - uVar29) * dVar8;
          dVar6 = (local_370._s_0.X - local_338._s_0.X) * dVar40 + local_338._s_0.X;
          dVar7 = (local_370._s_0.Y - local_338._s_0.Y) * dVar40 + local_338._s_0.Y;
          dVar40 = (local_370._s_0.Z - local_338._s_0.Z) * dVar40 + local_338._s_0.Z;
          if ((uVar33 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar21)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar4 = (param_1->BaryCoord).DataPtr;
          *(double *)((longlong)&pTVar4[1].field0_0x0 + lVar26) = dVar6;
          *(double *)((longlong)&pTVar4[1].field0_0x0 + lVar26 + 8) = dVar7;
          *(double *)((longlong)&pTVar4[1].field0_0x0 + lVar26 + 0x10) = dVar40;
          lVar31 = lVar31 + -1;
          pFVar32 = local_388;
          uVar37 = local_390;
          lVar26 = lVar26 + 0x18;
        } while (lVar31 != 0);
      }
      uVar14 = local_370._s_0.Z;
      uVar13 = local_370._s_0.Y;
      uVar12 = local_370._s_0.X;
      lVar26 = (longlong)&pFVar32->V1 + uVar37;
      uVar33 = iVar22 + uVar29;
      uVar36 = ~uVar33 >> 0x1f;
      uVar35 = uVar27;
      if ((int)uVar33 < (param_1->BaryCoord).ArrayNum) {
        uVar35 = uVar36;
      }
      local_380 = lVar26;
      if ((uVar35 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = (param_1->BaryCoord).DataPtr;
      pTVar4 = pTVar3 + lVar26;
      (pTVar4->field0_0x0)._s_0.X = (double)uVar12;
      (pTVar4->field0_0x0)._s_0.Y = (double)uVar13;
      pTVar3[lVar26].field0_0x0._s_0.Z = (double)uVar14;
      if (local_res18 == 0) {
        uVar35 = uVar27;
        if ((int)uVar29 < (param_1->VIDs).ArrayNum) {
          uVar35 = local_394;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStack_284 = 0xffffffff;
        uStack_280 = 0;
        local_278 = 0;
        local_288 = (param_1->VIDs).DataPtr[(longlong)pFVar32];
        local_318 = CONCAT44(0xffffffff,local_288);
        uStack_270 = 1;
        uStack_26c = uStack_26c & 0xffffff00;
        local_308 = (ulonglong)uStack_274 << 0x20;
        uStack_300 = CONCAT44(uStack_26c,1);
        piStack_310 = (int *)0x0;
      }
      else {
        iVar22 = uVar29 + 1;
        iVar23 = local_res18 - 1;
        if ((iVar22 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15b,L"Invalid index (%lld)"), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((iVar23 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("InNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15c,L"Invalid count (%lld)"), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((param_1->VIDs).ArrayNum < iVar22 + iVar23) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index + InNum <= ArrayNum",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15d,
                                L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_140 = (param_1->VIDs).DataPtr + iVar22;
        iStack_138 = iVar23;
        if ((iVar23 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar35 = uVar27;
        if ((int)uVar33 < (param_1->VIDs).ArrayNum) {
          uVar35 = uVar36;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar22 = (param_1->VIDs).DataPtr[local_380];
        uVar35 = uVar27;
        if ((int)uVar29 < (param_1->VIDs).ArrayNum) {
          uVar35 = local_394;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar29 = uStack_1ac;
        local_308 = CONCAT44(uStack_134,iStack_138);
        local_1c8 = (param_1->VIDs).DataPtr[(longlong)pFVar32];
        iStack_1b0 = local_res18 + 1;
        piStack_1c0 = local_140;
        local_318 = CONCAT44(iVar22,local_1c8);
        uStack_1ac = uStack_1ac & 0xffffff00;
        uStack_300 = CONCAT44(uVar29,iStack_1b0) & 0xffffff00ffffffff;
        lVar26 = local_380;
        piStack_310 = local_140;
        iStack_1c4 = iVar22;
        uStack_1b8 = local_308;
      }
      uVar14 = local_370._s_0.Z;
      uVar13 = local_370._s_0.Y;
      uVar12 = local_370._s_0.X;
      uVar29 = uVar27;
      if ((int)uVar33 < (param_1->BaryCoord).ArrayNum) {
        uVar29 = uVar36;
      }
      if ((uVar29 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar34 = local_390;
      pTVar3 = (param_1->BaryCoord).DataPtr;
      pTVar4 = pTVar3 + lVar26;
      (pTVar4->field0_0x0)._s_0.X = (double)uVar12;
      (pTVar4->field0_0x0)._s_0.Y = (double)uVar13;
      pTVar3[lVar26].field0_0x0._s_0.Z = (double)uVar14;
      if (1 < (longlong)local_390) {
        lVar30 = (lVar26 * 3 + 3) * 8;
        lVar31 = local_390 - 1;
        uVar29 = uVar33;
        do {
          uVar29 = uVar29 + 1;
          uVar35 = uVar27;
          if ((int)uVar29 < (param_1->BaryCoord).ArrayNum) {
            uVar35 = ~uVar29 >> 0x1f;
          }
          dVar40 = (double)(int)(uVar29 - uVar33) * dVar8;
          dVar6 = (local_358._s_0.X - local_370._s_0.X) * dVar40 + local_370._s_0.X;
          dVar7 = (local_358._s_0.Y - local_370._s_0.Y) * dVar40 + local_370._s_0.Y;
          dVar40 = (local_358._s_0.Z - local_370._s_0.Z) * dVar40 + local_370._s_0.Z;
          if ((uVar35 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar21)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar4 = (param_1->BaryCoord).DataPtr;
          *(double *)((longlong)&pTVar4->field0_0x0 + lVar30) = dVar6;
          *(double *)((longlong)&pTVar4->field0_0x0 + lVar30 + 8) = dVar7;
          *(double *)((longlong)&pTVar4->field0_0x0 + lVar30 + 0x10) = dVar40;
          lVar30 = lVar30 + 0x18;
          lVar31 = lVar31 + -1;
          lVar26 = local_380;
        } while (lVar31 != 0);
      }
      uVar14 = local_358._s_0.Z;
      uVar13 = local_358._s_0.Y;
      uVar12 = local_358._s_0.X;
      pFVar32 = (FRingEdge *)(uVar34 + lVar26);
      uVar38 = local_res18 + uVar33;
      uVar29 = ~uVar38 >> 0x1f;
      uVar35 = uVar27;
      if ((int)uVar38 < (param_1->BaryCoord).ArrayNum) {
        uVar35 = uVar29;
      }
      local_398 = uVar29;
      local_388 = pFVar32;
      if ((uVar35 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = (param_1->BaryCoord).DataPtr;
      pTVar4 = pTVar3 + (longlong)pFVar32;
      (pTVar4->field0_0x0)._s_0.X = (double)uVar12;
      (pTVar4->field0_0x0)._s_0.Y = (double)uVar13;
      pTVar3[(longlong)pFVar32].field0_0x0._s_0.Z = (double)uVar14;
      if (local_res18 == 0) {
        uVar35 = uVar27;
        if ((int)uVar33 < (param_1->VIDs).ArrayNum) {
          uVar35 = uVar36;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStack_264 = 0xffffffff;
        uStack_260 = 0;
        local_258 = 0;
        local_268 = (param_1->VIDs).DataPtr[local_380];
        local_2f8 = CONCAT44(0xffffffff,local_268);
        uStack_250 = 1;
        uStack_24c = uStack_24c & 0xffffff00;
        local_2e8 = (ulonglong)uStack_254 << 0x20;
        uStack_2e0 = CONCAT44(uStack_24c,1);
        piStack_2f0 = (int *)0x0;
      }
      else {
        iVar22 = uVar33 + 1;
        iVar23 = local_res18 - 1;
        if ((iVar22 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15b,L"Invalid index (%lld)"), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((iVar23 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("InNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15c,L"Invalid count (%lld)"), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((param_1->VIDs).ArrayNum < iVar22 + iVar23) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index + InNum <= ArrayNum",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15d,
                                L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_130 = (param_1->VIDs).DataPtr + iVar22;
        iStack_128 = iVar23;
        if ((iVar23 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar29 = uVar27;
        if ((int)uVar38 < (param_1->VIDs).ArrayNum) {
          uVar29 = local_398;
        }
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar22 = (param_1->VIDs).DataPtr[(longlong)pFVar32];
        uVar29 = uVar27;
        if ((int)uVar33 < (param_1->VIDs).ArrayNum) {
          uVar29 = uVar36;
        }
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar29 = uStack_18c;
        local_2e8 = CONCAT44(uStack_124,iStack_128);
        piStack_1a0 = local_130;
        local_1a8 = (param_1->VIDs).DataPtr[local_380];
        iStack_190 = local_res18 + 1;
        local_2f8 = CONCAT44(iVar22,local_1a8);
        uStack_18c = uStack_18c & 0xffffff00;
        uStack_2e0 = CONCAT44(uVar29,iStack_190) & 0xffffff00ffffffff;
        uVar29 = local_398;
        piStack_2f0 = local_130;
        iStack_1a4 = iVar22;
        uStack_198 = local_2e8;
      }
      uVar14 = local_358._s_0.Z;
      uVar13 = local_358._s_0.Y;
      uVar12 = local_358._s_0.X;
      uVar35 = uVar27;
      if ((int)uVar38 < (param_1->BaryCoord).ArrayNum) {
        uVar35 = uVar29;
      }
      if ((uVar35 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar3 = (param_1->BaryCoord).DataPtr;
      pTVar4 = pTVar3 + (longlong)pFVar32;
      (pTVar4->field0_0x0)._s_0.X = (double)uVar12;
      (pTVar4->field0_0x0)._s_0.Y = (double)uVar13;
      pTVar3[(longlong)pFVar32].field0_0x0._s_0.Z = (double)uVar14;
      if (1 < (longlong)local_390) {
        lVar31 = ((longlong)pFVar32 + 1) * 0x18;
        lVar26 = local_390 - 1;
        uVar35 = uVar38;
        do {
          uVar35 = uVar35 + 1;
          uVar29 = uVar27;
          if ((int)uVar35 < (param_1->BaryCoord).ArrayNum) {
            uVar29 = ~uVar35 >> 0x1f;
          }
          dVar40 = (double)(int)(uVar35 - uVar38) * dVar8;
          dVar6 = (local_338._s_0.X - local_358._s_0.X) * dVar40 + local_358._s_0.X;
          dVar7 = (local_338._s_0.Y - local_358._s_0.Y) * dVar40 + local_358._s_0.Y;
          dVar40 = (local_338._s_0.Z - local_358._s_0.Z) * dVar40 + local_358._s_0.Z;
          if ((uVar29 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar21)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar4 = (param_1->BaryCoord).DataPtr;
          *(double *)((longlong)&pTVar4->field0_0x0 + lVar31) = dVar6;
          *(double *)((longlong)&pTVar4->field0_0x0 + lVar31 + 8) = dVar7;
          *(double *)((longlong)&pTVar4->field0_0x0 + lVar31 + 0x10) = dVar40;
          lVar31 = lVar31 + 0x18;
          lVar26 = lVar26 + -1;
          pFVar32 = local_388;
          uVar29 = local_398;
        } while (lVar26 != 0);
      }
      if (local_res18 == 0) {
        uVar35 = uVar27;
        if ((int)uVar38 < (param_1->VIDs).ArrayNum) {
          uVar35 = uVar29;
        }
        if ((uVar35 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStack_244 = 0xffffffff;
        uStack_240 = 0;
        local_238 = 0;
        local_248 = (param_1->VIDs).DataPtr[(longlong)pFVar32];
        uStack_230 = 1;
        uStack_22c = uStack_22c & 0xffffff00;
        local_2c8 = (ulonglong)uStack_234 << 0x20;
        uStack_2c0 = CONCAT44(uStack_22c,1);
        local_2d8 = CONCAT44(0xffffffff,local_248);
        piStack_2d0 = (int *)0x0;
      }
      else {
        iVar22 = uVar38 + 1;
        iVar23 = local_res18 - 1;
        if ((iVar22 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15b,L"Invalid index (%lld)"), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((iVar23 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("InNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15c,L"Invalid count (%lld)"), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((param_1->VIDs).ArrayNum < iVar23 + iVar22) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index + InNum <= ArrayNum",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x15d,
                                L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_120 = (param_1->VIDs).DataPtr + iVar22;
        iStack_118 = iVar23;
        if ((iVar23 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar29 = uVar27;
        if ((int)local_340 < (param_1->VIDs).ArrayNum) {
          uVar29 = local_394;
        }
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar22 = (param_1->VIDs).DataPtr[(longlong)local_378];
        uVar29 = uVar27;
        if ((int)uVar38 < (param_1->VIDs).ArrayNum) {
          uVar29 = local_398;
        }
        if ((uVar29 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar29 = uStack_29c;
        local_2c8 = CONCAT44(uStack_114,iStack_118);
        uStack_29c = uStack_29c & 0xffffff00;
        iStack_2a0 = local_res18 + 1;
        piStack_2b0 = local_120;
        uStack_2c0 = CONCAT44(uVar29,iStack_2a0) & 0xffffff00ffffffff;
        local_2b8 = CONCAT44(iVar22,(param_1->VIDs).DataPtr[(longlong)pFVar32]);
        local_2d8 = local_2b8;
        piStack_2d0 = local_120;
        local_2a8 = local_2c8;
      }
      uVar37 = local_390;
      pFVar32 = (FRingEdge *)((longlong)pFVar32 + local_390);
      pFVar39 = (FRingEdge *)(ulonglong)(uVar38 + local_res18);
      local_188._s_0.Z = local_338._s_0.Z;
      local_170._s_0.Z = local_370._s_0.Z;
      local_158._s_0.Z = local_358._s_0.Z;
      local_188._s_0.X = local_338._s_0.X;
      local_188._s_0.Y = local_338._s_0.Y;
      local_170._s_0.X = local_370._s_0.X;
      local_170._s_0.Y = local_370._s_0.Y;
      local_158._s_0.X = local_358._s_0.X;
      local_158._s_0.Y = local_358._s_0.Y;
      local_388 = pFVar32;
      if (((local_3a8.Data <= (FScriptContainerElement *)&local_318) &&
          ((FScriptContainerElement *)&local_318 < local_3a8.Data + (longlong)local_3a0._4_4_ * 0x60
          )) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar22 = (int)local_3a0;
      if ((int)local_3a0 == local_3a0._4_4_) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,&local_3a8,(int *)((longlong)&local_3a0 + 4));
      }
      local_res18 = local_res18 - 2;
      uVar34 = (ulonglong)local_res18;
      local_3a0 = CONCAT44(local_3a0._4_4_,iVar22 + 1);
      uVar37 = uVar37 - 2;
      lVar26 = (longlong)iVar22 * 0x60;
      *(undefined8 *)(local_3a8.Data + lVar26) = local_318;
      *(int **)(local_3a8.Data + lVar26 + 8) = piStack_310;
      *(ulonglong *)(local_3a8.Data + lVar26 + 0x10) = local_308;
      *(ulonglong *)(local_3a8.Data + lVar26 + 0x10 + 8) = uStack_300;
      *(undefined8 *)(local_3a8.Data + lVar26 + 0x20) = local_2f8;
      *(int **)(local_3a8.Data + lVar26 + 0x20 + 8) = piStack_2f0;
      *(ulonglong *)(local_3a8.Data + lVar26 + 0x30) = local_2e8;
      *(ulonglong *)(local_3a8.Data + lVar26 + 0x30 + 8) = uStack_2e0;
      *(undefined8 *)(local_3a8.Data + lVar26 + 0x40) = local_2d8;
      *(int **)(local_3a8.Data + lVar26 + 0x40 + 8) = piStack_2d0;
      *(ulonglong *)(local_3a8.Data + lVar26 + 0x50) = local_2c8;
      *(ulonglong *)(local_3a8.Data + lVar26 + 0x50 + 8) = uStack_2c0;
      local_390 = uVar37;
    } while (-1 < (int)local_res18);
  }
  uVar29 = uVar27;
  if (0 < (int)local_3a0 + -1) {
    pTVar2 = &param_1->Triangles;
    local_res18 = 1;
    pFVar32 = pFVar28;
    do {
      uVar35 = (uint)pFVar28;
      uVar33 = ~(uVar35 + 1) >> 0x1f;
      uVar29 = uVar27;
      if ((int)local_res18 < (int)local_3a0) {
        uVar29 = uVar33;
      }
      iVar22 = (int)local_3a0;
      if (uVar29 == 0) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar22 = (int)local_3a0;
      }
      local_388 = (FRingEdge *)(longlong)(int)(uVar35 + 1);
      uVar36 = ~uVar35 >> 0x1f;
      lVar26 = (longlong)local_388 * 0x60;
      local_378 = (FRingEdge *)(local_3a8.Data + lVar26);
      uVar29 = uVar27;
      if ((int)uVar35 < iVar22) {
        uVar29 = uVar36;
      }
      if ((uVar29 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar31 = (longlong)(int)uVar35 * 0x60;
      iVar22 = StitchRingEdges(this,(FRingEdge *)(local_3a8.Data + lVar31),local_378,(int)pFVar32,
                               pTVar2);
      iVar22 = (int)pFVar32 + iVar22;
      uVar29 = uVar27;
      if ((int)(uVar35 + 1) < (int)local_3a0) {
        uVar29 = uVar33;
      }
      if (uVar29 == 0) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_378 = (FRingEdge *)(local_3a8.Data + lVar26 + 0x20);
      uVar29 = uVar27;
      if ((int)uVar35 < (int)local_3a0) {
        uVar29 = uVar36;
      }
      if ((uVar29 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar23 = StitchRingEdges(this,(FRingEdge *)(local_3a8.Data + lVar31 + 0x20),local_378,iVar22,
                               pTVar2);
      iVar22 = iVar22 + iVar23;
      uVar29 = uVar27;
      if ((int)(uVar35 + 1) < (int)local_3a0) {
        uVar29 = uVar33;
      }
      if (uVar29 == 0) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar20.Data = local_3a8.Data;
      uVar29 = uVar27;
      if ((int)uVar35 < (int)local_3a0) {
        uVar29 = uVar36;
      }
      if ((uVar29 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar23 = StitchRingEdges(this,(FRingEdge *)(local_3a8.Data + lVar31 + 0x40),
                               (FRingEdge *)(FVar20.Data + lVar26 + 0x40),iVar22,pTVar2);
      uVar29 = iVar22 + iVar23;
      pFVar32 = (FRingEdge *)(ulonglong)uVar29;
      pFVar28 = (FRingEdge *)(ulonglong)(uVar35 + 1);
      local_res18 = local_res18 + 1;
    } while ((int)(uVar35 + 1) < (int)local_3a0 + -1);
  }
  uVar35 = GetInnerLevelAsSegments(this,param_1->TriangleID);
  if ((uVar35 & 1) != 0) {
    if ((int)((int)local_3a0 - 1U) < (int)local_3a0) {
      uVar27 = ~((int)local_3a0 - 1U) >> 0x1f;
    }
    iVar22 = (int)local_3a0;
    if (uVar27 == 0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar22 = (int)local_3a0;
    }
    FVar20.Data = local_3a8.Data;
    iVar23 = FRingEdge::operator[]
                       ((FRingEdge *)(local_3a8.Data + (longlong)iVar22 * 0x60 + -0x40),1);
    iVar24 = FRingEdge::operator[]((FRingEdge *)(FVar20.Data + (longlong)iVar22 * 0x60 + -0x60),1);
    if ((*(int *)(FVar20.Data + (longlong)iVar22 * 0x60 + -0x48) < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < VertNum",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                            ,0x1eb,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar22 = *(int *)(FVar20.Data + (longlong)iVar22 * 0x60 + -0x60);
    pFVar25 = TArrayView<UE::Geometry::FIndex3i,int>::operator[](&param_1->Triangles,uVar29);
    (pFVar25->field0_0x0)._s_0.A = iVar22;
    (pFVar25->field0_0x0)._s_0.B = iVar24;
    (pFVar25->field0_0x0)._s_0.C = iVar23;
  }
  if (local_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data);
  }
  return;
}

// Validate @ 14c851200

EOperationValidationResult __thiscall
SelectiveTessellateLocals::FConcentricRingsTessellationPattern::Validate
          (FConcentricRingsTessellationPattern *this)

{
  return Ok;
}

