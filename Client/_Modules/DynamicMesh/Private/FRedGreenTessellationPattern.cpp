// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 9

// FRedGreenTessellationPattern @ 14c7b3cd0

FRedGreenTessellationPattern * __thiscall
UE::Geometry::FRedGreenTessellationPattern::FRedGreenTessellationPattern
          (FRedGreenTessellationPattern *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  this->_padding_ = (longlong)param_1;
  pTVar1 = &this->TriangleLevels;
  this->_padding_ = (longlong)&___7FRedGreenTessellationPattern_Geometry_UE__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TriangleLevels).ArrayMax;
  iVar3 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->TriangleLevels).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return this;
}

// ~FRedGreenTessellationPattern @ 14c7b76e0

void __thiscall
UE::Geometry::FRedGreenTessellationPattern::~FRedGreenTessellationPattern
          (FRedGreenTessellationPattern *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TriangleLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTessellationPattern_Geometry_UE__6B_;
  return;
}

// operator() @ 14c7c2a70

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
`UE::Geometry::FRedGreenTessellationPattern::TessellateTriPatch'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<int,int> *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  int *piVar9;
  longlong lVar10;
  int local_18 [4];
  
  lVar10 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  piVar9 = param_1->DataPtr;
  piVar1 = piVar9 + param_1->ArrayNum;
  while( true ) {
    if (piVar9 == piVar1) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      iVar6 = __return_storage_ptr__->ArrayNum / 2;
      if (0 < iVar6) {
        pFVar8 = pFVar3 + (longlong)(__return_storage_ptr__->ArrayNum + -1) * 4;
        do {
          uVar2 = *(undefined4 *)(pFVar3 + lVar10 * 4);
          *(undefined4 *)(pFVar3 + lVar10 * 4) = *(undefined4 *)pFVar8;
          lVar10 = lVar10 + 1;
          *(undefined4 *)pFVar8 = uVar2;
          pFVar8 = pFVar8 + -4;
        } while (lVar10 < iVar6);
      }
      return __return_storage_ptr__;
    }
    local_18[0] = *piVar9;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    piVar9 = piVar9 + 1;
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
  }
  pcVar4 = (code *)swi(3);
  pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
  return pTVar7;
}

// GetNumberOfNewVerticesForEdgePatch @ 14c810b70

int __thiscall
UE::Geometry::FRedGreenTessellationPattern::GetNumberOfNewVerticesForEdgePatch
          (FRedGreenTessellationPattern *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  lVar2 = this->_padding_;
  if ((-1 < param_1) && (param_1 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4))) {
    lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x1d8) + lVar1) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      iVar7 = 0;
      uVar3 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x1c0) + lVar1) + 8 +
               (ulonglong)(param_1 & 0x1ff) * 0x10);
      uVar10 = (uint)uVar3;
      uVar9 = (uint)((ulonglong)uVar3 >> 0x20);
      if (uVar10 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar10 < (this->TriangleLevels).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        iVar7 = *(int *)((this->TriangleLevels).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
        if (iVar7 < 0) {
          iVar7 = 0;
        }
      }
      iVar8 = iVar7;
      if (uVar9 != 0xffffffff) {
        uVar10 = 0;
        if ((int)uVar9 < (this->TriangleLevels).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        iVar8 = *(int *)((this->TriangleLevels).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
        if (iVar8 < iVar7) {
          iVar8 = iVar7;
        }
      }
      return (1 << ((byte)iVar8 & 0x1f)) + -1;
    }
  }
  return -1;
}

// GetNumberOfNewVerticesForTrianglePatch @ 14c810e30

int __thiscall
UE::Geometry::FRedGreenTessellationPattern::GetNumberOfNewVerticesForTrianglePatch
          (FRedGreenTessellationPattern *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  lVar1 = this->_padding_;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    uVar4 = 0;
    if (param_1 < (this->TriangleLevels).ArrayNum) {
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
    iVar5 = 1 << ((byte)*(undefined4 *)
                         ((this->TriangleLevels).AllocatorInstance.Data + (longlong)param_1 * 4) &
                 0x1f);
    return ((iVar5 + -2) * (iVar5 + -1)) / 2;
  }
  return -1;
}

// GetNumberOfPatchTriangles @ 14c8110b0

int __thiscall
UE::Geometry::FRedGreenTessellationPattern::GetNumberOfPatchTriangles
          (FRedGreenTessellationPattern *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FIndex3i_u_0 local_38;
  
  lVar1 = this->_padding_;
  if (((param_1 < 0) || (*(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar1 + 0x148) +
                                    (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    return -1;
  }
  uVar6 = 0;
  if (param_1 < (this->TriangleLevels).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  iVar5 = *(int *)((this->TriangleLevels).AllocatorInstance.Data + (longlong)param_1 * 4);
  bVar3 = (byte)iVar5;
  iVar7 = 1 << (bVar3 * '\x02' & 0x1f);
  FDynamicMesh3::GetTriNeighbourTris
            ((FDynamicMesh3 *)this->_padding_,(FIndex3i *)&local_38._s_0,param_1);
  lVar1 = this->_padding_;
  if (((-1 < local_38._s_0.A) &&
      (local_38._s_0.A < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x148) +
                           (ulonglong)((uint)local_38._s_0.A >> 9) * 8) +
                         (ulonglong)(local_38._s_0.A & 0x1ff) * 2) - 1U) < 0xfffe)) {
    uVar6 = 0;
    if (local_38._s_0.A < (this->TriangleLevels).ArrayNum) {
      uVar6 = (uint)~local_38._s_0.A >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (iVar5 < *(int *)((this->TriangleLevels).AllocatorInstance.Data +
                        (longlong)local_38._s_0.A * 4)) {
      uVar6 = 0;
      if (local_38._s_0.A < (this->TriangleLevels).ArrayNum) {
        uVar6 = (uint)~local_38._s_0.A >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      iVar7 = iVar7 + ((1 << ((byte)*(undefined4 *)
                                     ((this->TriangleLevels).AllocatorInstance.Data +
                                     (longlong)local_38._s_0.A * 4) & 0x1f)) - (1 << (bVar3 & 0x1f))
                      );
    }
  }
  lVar1 = this->_padding_;
  if (((-1 < local_38._s_0.B) &&
      (local_38._s_0.B < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x148) +
                           (ulonglong)((uint)local_38._s_0.B >> 9) * 8) +
                         (ulonglong)(local_38._s_0.B & 0x1ff) * 2) - 1U) < 0xfffe)) {
    uVar6 = 0;
    if (local_38._s_0.B < (this->TriangleLevels).ArrayNum) {
      uVar6 = (uint)~local_38._s_0.B >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (iVar5 < *(int *)((this->TriangleLevels).AllocatorInstance.Data +
                        (longlong)local_38._s_0.B * 4)) {
      uVar6 = 0;
      if (local_38._s_0.B < (this->TriangleLevels).ArrayNum) {
        uVar6 = (uint)~local_38._s_0.B >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      iVar7 = iVar7 + ((1 << ((byte)*(undefined4 *)
                                     ((this->TriangleLevels).AllocatorInstance.Data +
                                     (longlong)local_38._s_0.B * 4) & 0x1f)) - (1 << (bVar3 & 0x1f))
                      );
    }
  }
  lVar1 = this->_padding_;
  if (((-1 < local_38._s_0.C) &&
      (local_38._s_0.C < *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x148) +
                           (ulonglong)((uint)local_38._s_0.C >> 9) * 8) +
                         (ulonglong)(local_38._s_0.C & 0x1ff) * 2) - 1U) < 0xfffe)) {
    uVar6 = 0;
    if (local_38._s_0.C < (this->TriangleLevels).ArrayNum) {
      uVar6 = (uint)~local_38._s_0.C >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (iVar5 < *(int *)((this->TriangleLevels).AllocatorInstance.Data +
                        (longlong)local_38._s_0.C * 4)) {
      uVar6 = 0;
      if (local_38._s_0.C < (this->TriangleLevels).ArrayNum) {
        uVar6 = (uint)~local_38._s_0.C >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      iVar7 = iVar7 + ((1 << ((byte)*(undefined4 *)
                                     ((this->TriangleLevels).AllocatorInstance.Data +
                                     (longlong)local_38._s_0.C * 4) & 0x1f)) - (1 << (bVar3 & 0x1f))
                      );
    }
  }
  return iVar7;
}

// TessellateEdgePatch @ 14c83f540

void __thiscall
UE::Geometry::FRedGreenTessellationPattern::TessellateEdgePatch
          (FRedGreenTessellationPattern *this,EdgePatch *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  
  iVar3 = (**(code **)(this->_padding_ + 0x10))(this,param_1->EdgeID);
  uVar5 = 0;
  fVar7 = __real_3f800000 / ((float)iVar3 + __real_3f800000);
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (param_1->LinearCoord).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      (param_1->LinearCoord).DataPtr[lVar6] = (double)((float)(int)uVar5 * fVar7);
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  return;
}

// TessellateTriPatch @ 14c8413e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FRedGreenTessellationPattern::TessellateTriPatch
          (FRedGreenTessellationPattern *this,TrianglePatch *param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  TVector<double> *pTVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  FIndex3i *pFVar11;
  int *piVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  TTuple<int,int> *pTVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  TrianglePatch *pTVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  ulonglong *puVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStackY_318 [32];
  undefined1 local_2c8 [4];
  int local_2c4;
  int local_2c0;
  int local_2bc;
  TrianglePatch *local_2b8;
  undefined1 local_2b0 [4];
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  int local_29c;
  int local_298;
  uint local_294;
  uint local_290;
  FRedGreenTessellationPattern *local_288;
  uint local_280;
  uint local_27c;
  FScriptContainerElement *local_278;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  ForAnyElementType local_250;
  undefined8 local_248;
  FIndex3i_u_0 local_240;
  FScriptContainerElement *local_230;
  FScriptContainerElement *local_228;
  int local_220;
  int local_21c;
  uint local_218;
  int local_214;
  TTuple<int,int> local_210;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_208;
  int local_1f8;
  int local_1f0;
  int iStack_1ec;
  int local_1e8;
  TKeyInitializer<TTuple<int,int>_&&> local_1e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c8;
  TTuple<int,int> local_1b8;
  TTuple<int,int> local_1b0;
  TTuple<int,int> local_1a8;
  int local_1a0;
  int local_19c;
  TTuple<int,int> local_198;
  TTuple<int,int> local_190;
  TTuple<int,int> local_188;
  TTuple<int,int> local_180;
  TTuple<int,int> local_178;
  FIndex3i_u_0 local_170;
  int *local_160;
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  TArray<int,TSizedDefaultAllocator<32>_> local_138;
  TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
  local_128;
  TStaticArray<TArray<int,TSizedDefaultAllocator<32>_>,3,4294967295> local_d8;
  ulonglong local_a8 [14];
  
  local_a8[0] = __security_cookie.value ^ (ulonglong)auStackY_318;
  iVar18 = 0;
  local_258 = 0;
  local_2b8 = param_1;
  local_288 = this;
  if ((param_1->Triangles).ArrayNum == 1) {
    uVar2 = *(undefined8 *)&(param_1->UVWCorners).field0_0x0;
    iVar18 = (param_1->UVWCorners).field0_0x0._s_0.C;
    pFVar11 = TArrayView<UE::Geometry::FIndex3i,int>::operator[](&param_1->Triangles,0);
    *(undefined8 *)&pFVar11->field0_0x0 = uVar2;
    (pFVar11->field0_0x0)._s_0.C = iVar18;
  }
  else {
    uVar22 = param_1->TriangleID;
    uVar19 = 0;
    if ((int)uVar22 < (this->TriangleLevels).ArrayNum) {
      uVar19 = ~uVar22 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_2c4 = *(int *)((this->TriangleLevels).AllocatorInstance.Data + (longlong)(int)uVar22 * 4);
    iVar25 = 1 << ((byte)local_2c4 & 0x1f);
    local_128.Elements._0_8_ = 0;
    local_128.Elements._8_8_ = 0;
    iVar30 = iVar25 + 1;
    local_128.Elements._32_8_ = 0;
    local_128.Elements._40_4_ = 0;
    local_128.Elements._44_4_ = 0x80;
    local_128.Elements._48_4_ = 0xffffffff;
    local_128.Elements._52_4_ = 0;
    local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_128.HashSize = 0;
    local_2bc = iVar25;
    TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
    ::Reserve(&local_128,(iVar30 * iVar30) / 2);
    iVar29 = iVar30;
    if (0 < iVar30) {
      do {
        iVar16 = 0;
        if (0 < iVar29) {
          local_160 = &local_1a0;
          do {
            local_1a0 = iVar18;
            local_19c = iVar16;
            TSet<TTuple<TTuple<int,int>,int>,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>,FDefaultSetAllocator>
            ::Emplace<TKeyInitializer<TTuple<int,int>_&&>_>
                      (&local_128,&local_1e0,(bool *)&local_160);
            iVar16 = iVar16 + 1;
            *(undefined4 *)(local_128.Elements._0_8_ + 8 + (longlong)(int)local_1e0.Key * 0x14) =
                 0xffffffff;
          } while (iVar16 < iVar29);
        }
        iVar18 = iVar18 + 1;
        param_1 = local_2b8;
        iVar29 = iVar29 + -1;
      } while (iVar18 < iVar30);
    }
    fVar8 = __real_3f800000;
    uVar22 = 0;
    iVar18 = 1;
    fVar36 = __real_3f800000 / (float)iVar25;
    if (1 < iVar25) {
      lVar26 = 0;
      local_2a0 = local_2bc - 1;
      iVar30 = local_2bc;
      do {
        if (1 < (int)local_2a0) {
          lVar20 = lVar26 * 0x18;
          iVar29 = 1;
          lVar33 = lVar26 * 4;
          fVar34 = (float)iVar18 * fVar36;
          do {
            fVar35 = (float)iVar29 * fVar36;
            uVar19 = 0;
            if ((int)uVar22 < (local_2b8->BaryCoord).ArrayNum) {
              uVar19 = ~uVar22 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar4 = (local_2b8->BaryCoord).DataPtr;
            *(double *)((longlong)&pTVar4->field0_0x0 + lVar20) =
                 (double)((fVar8 - fVar34) - fVar35);
            *(double *)((longlong)&pTVar4->field0_0x0 + lVar20 + 8) = (double)fVar34;
            *(double *)((longlong)&pTVar4->field0_0x0 + lVar20 + 0x10) = (double)fVar35;
            uVar19 = 0;
            if ((int)uVar22 < (local_2b8->VIDs).ArrayNum) {
              uVar19 = ~uVar22 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar30 = *(int *)(lVar33 + (longlong)(local_2b8->VIDs).DataPtr);
            local_190._0_4_ = iVar18;
            local_190._4_4_ = iVar29;
            piVar12 = TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                      ::FindChecked((TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                                     *)&local_128,&local_190);
            uVar22 = uVar22 + 1;
            iVar29 = iVar29 + 1;
            lVar26 = lVar26 + 1;
            lVar20 = lVar20 + 0x18;
            lVar33 = lVar33 + 4;
            *piVar12 = iVar30;
            iVar30 = local_2bc;
          } while (iVar29 < (int)local_2a0);
        }
        local_2a0 = local_2a0 - 1;
        iVar18 = iVar18 + 1;
        param_1 = local_2b8;
        this = local_288;
        iVar25 = local_2bc;
      } while (iVar18 < iVar30);
    }
    iVar18 = (param_1->UVWCorners).field0_0x0._s_0.A;
    iVar30 = (param_1->UVWCorners).field0_0x0._s_0.B;
    iVar29 = (param_1->UVWCorners).field0_0x0._s_0.C;
    local_188 = (TTuple<int,int>)0x0;
    piVar12 = TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
              ::FindChecked((TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                             *)&local_128,&local_188);
    local_180._4_4_ = 0;
    *piVar12 = iVar18;
    local_180._0_4_ = iVar25;
    piVar12 = TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
              ::FindChecked((TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                             *)&local_128,&local_180);
    local_1b8._0_4_ = 0;
    *piVar12 = iVar30;
    local_1b8._4_4_ = iVar25;
    piVar12 = TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
              ::FindChecked((TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                             *)&local_128,&local_1b8);
    pTVar21 = local_2b8;
    *piVar12 = iVar29;
    if ((local_2b8->UVEdge).bIsReversed == false) {
      local_29c = (local_2b8->UVEdge).VIDs.ArrayNum;
      lVar26 = (longlong)local_29c;
      piVar12 = (local_2b8->UVEdge).VIDs.DataPtr;
      local_278 = (FScriptContainerElement *)0x0;
      local_250.Data = (FScriptContainerElement *)0x0;
      local_248 = CONCAT44(local_248._4_4_,local_29c);
      if (local_29c == 0) {
        local_29c = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_29c,0,&local_250,local_29c,(int *)((longlong)&local_248 + 4));
        memcpy(local_250.Data,piVar12,lVar26 << 2);
        local_278 = local_250.Data;
        local_29c = (int)local_248;
      }
      local_250.Data = (FScriptContainerElement *)0x0;
      local_248 = 0;
    }
    else {
      pTVar13 = `UE::Geometry::FRedGreenTessellationPattern::TessellateTriPatch'::__l2::<lambda_1>::
                operator()(local_2c8,&local_158,&(local_2b8->UVEdge).VIDs);
      pFVar31 = (pTVar13->AllocatorInstance).Data;
      (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar18 = pTVar13->ArrayNum;
      pTVar13->ArrayNum = 0;
      pTVar13->ArrayMax = 0;
      local_29c = iVar18;
      local_278 = pFVar31;
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
        local_29c = iVar18;
        local_278 = pFVar31;
      }
    }
    iVar18 = local_29c;
    if ((pTVar21->VWEdge).bIsReversed == false) {
      iVar30 = (pTVar21->VWEdge).VIDs.ArrayNum;
      piVar12 = (pTVar21->VWEdge).VIDs.DataPtr;
      local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.ArrayNum = iVar30;
      if (iVar30 != 0) {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar30,0,&local_1d8.AllocatorInstance,iVar30,&local_1d8.ArrayMax);
        memcpy(local_1d8.AllocatorInstance.Data,piVar12,(longlong)iVar30 << 2);
      }
      pTVar13 = &local_1d8;
      bVar7 = false;
      bVar9 = true;
      pTVar21 = local_2b8;
    }
    else {
      pTVar13 = `UE::Geometry::FRedGreenTessellationPattern::TessellateTriPatch'::__l2::<lambda_1>::
                operator()(local_2c8,&local_148,&(pTVar21->VWEdge).VIDs);
      bVar7 = true;
      bVar9 = false;
    }
    local_228 = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_26c = pTVar13->ArrayNum;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
    if ((bVar9) && (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    if ((bVar7) && (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    if ((pTVar21->UWEdge).bIsReversed == false) {
      iVar30 = (pTVar21->UWEdge).VIDs.ArrayNum;
      piVar12 = (pTVar21->UWEdge).VIDs.DataPtr;
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = iVar30;
      if (iVar30 != 0) {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar30,0,&local_1c8.AllocatorInstance,iVar30,&local_1c8.ArrayMax);
        memcpy(local_1c8.AllocatorInstance.Data,piVar12,(longlong)iVar30 << 2);
      }
      pTVar13 = &local_1c8;
      bVar7 = false;
      bVar9 = true;
      pTVar21 = local_2b8;
    }
    else {
      pTVar13 = `UE::Geometry::FRedGreenTessellationPattern::TessellateTriPatch'::__l2::<lambda_1>::
                operator()(local_2c8,&local_138,&(pTVar21->UWEdge).VIDs);
      bVar7 = true;
      bVar9 = false;
    }
    local_230 = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar30 = pTVar13->ArrayNum;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
    local_25c = iVar30;
    if ((bVar9) && (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
    if ((bVar7) && (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    FDynamicMesh3::GetTriNeighbourTris
              ((FDynamicMesh3 *)this->_padding_,(FIndex3i *)&local_170._s_0,pTVar21->TriangleID);
    iVar29 = local_2bc;
    local_2c0 = local_2bc + -1;
    local_264 = (pTVar21->UVEdge).VIDs.ArrayNum;
    bVar9 = FDynamicMesh3::IsTriangle((FDynamicMesh3 *)this->_padding_,local_170._s_0.A);
    local_270 = local_2c4;
    if (bVar9) {
      uVar22 = 0;
      if (local_170._s_0.A < (this->TriangleLevels).ArrayNum) {
        uVar22 = (uint)~local_170._s_0.A >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_270 = *(int *)((this->TriangleLevels).AllocatorInstance.Data +
                          (longlong)local_170._s_0.A * 4);
    }
    iVar16 = local_2c0;
    iVar25 = local_2c4;
    local_2ac = iVar29 - 1;
    uVar22 = 0;
    pFVar31 = local_278;
    if (0 < (int)local_2ac) {
      do {
        iVar30 = local_270;
        if (iVar16 < local_264) {
          if ((local_270 < iVar25) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NbrUVLevel >= Level",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                 ,0x173,
                                 L"bUVEdgeHasAdditionalVertices is true but Level > NbrUVLevel"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar6 = (char)iVar30 - (char)iVar25 & 0x1f;
          uVar19 = (uVar22 + 1 << bVar6) - 1;
          uVar17 = 0 << bVar6;
          if ((int)uVar19 < iVar18) {
            uVar17 = ~uVar19 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar14 = &local_1b0;
          iVar30 = *(int *)(local_278 + (longlong)(int)uVar19 * 4);
          local_1b0._4_4_ = 0;
          local_1b0._0_4_ = uVar22 + 1;
        }
        else {
          uVar19 = 0;
          if ((int)uVar22 < iVar18) {
            uVar19 = ~uVar22 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar30 = *(int *)pFVar31;
          pTVar14 = &local_1a8;
          local_1a8._0_4_ = uVar22 + 1;
          local_1a8._4_4_ = 0;
        }
        uVar22 = uVar22 + 1;
        piVar12 = TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                  ::FindChecked((TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                                 *)&local_128,pTVar14);
        pFVar31 = pFVar31 + 4;
        *piVar12 = iVar30;
        pTVar21 = local_2b8;
        this = local_288;
        iVar30 = local_25c;
      } while ((int)uVar22 < (int)local_2ac);
    }
    uVar22 = local_2ac;
    local_268 = (pTVar21->UWEdge).VIDs.ArrayNum;
    bVar9 = FDynamicMesh3::IsTriangle((FDynamicMesh3 *)this->_padding_,local_170._s_0.C);
    local_298 = local_2c4;
    if (bVar9) {
      uVar19 = 0;
      if (local_170._s_0.C < (this->TriangleLevels).ArrayNum) {
        uVar19 = (uint)~local_170._s_0.C >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_298 = *(int *)((this->TriangleLevels).AllocatorInstance.Data +
                          (longlong)local_170._s_0.C * 4);
    }
    if (0 < (int)uVar22) {
      iVar18 = 1;
      uVar19 = local_2bc - 2;
      uVar27 = (ulonglong)local_2ac;
      pFVar31 = local_230 + (longlong)(int)uVar19 * 4;
      do {
        iVar29 = local_2c4;
        if (local_2c0 < local_268) {
          if ((local_298 < local_2c4) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NbrUWLevel >= Level",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                 ,0x187,
                                 L"bUWEdgeHasAdditionalVertices is true but Level > NbrUWLevel"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar6 = (char)local_298 - (char)iVar29 & 0x1f;
          uVar17 = local_268 - (iVar18 << bVar6);
          uVar22 = 0 << bVar6;
          if ((int)uVar17 < iVar30) {
            uVar22 = ~uVar17 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar14 = &local_178;
          iVar29 = *(int *)(local_230 + (longlong)(int)uVar17 * 4);
          local_178._0_4_ = 0;
          local_178._4_4_ = iVar18;
        }
        else {
          uVar22 = 0;
          if ((int)uVar19 < iVar30) {
            uVar22 = ~uVar19 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar29 = *(int *)pFVar31;
          pTVar14 = &local_198;
          local_198._0_4_ = 0;
          local_198._4_4_ = iVar18;
        }
        piVar12 = TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                  ::FindChecked((TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                                 *)&local_128,pTVar14);
        uVar19 = uVar19 - 1;
        pFVar31 = pFVar31 + -4;
        iVar18 = iVar18 + 1;
        *piVar12 = iVar29;
        uVar27 = uVar27 - 1;
        pTVar21 = local_2b8;
        this = local_288;
        uVar22 = local_2ac;
      } while (uVar27 != 0);
    }
    iVar18 = (pTVar21->VWEdge).VIDs.ArrayNum;
    local_220 = iVar18;
    bVar9 = FDynamicMesh3::IsTriangle((FDynamicMesh3 *)this->_padding_,local_170._s_0.B);
    iVar30 = local_2c4;
    if (bVar9) {
      uVar19 = 0;
      if (local_170._s_0.B < (this->TriangleLevels).ArrayNum) {
        uVar19 = (uint)~local_170._s_0.B >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar30 = *(int *)((this->TriangleLevels).AllocatorInstance.Data +
                       (longlong)local_170._s_0.B * 4);
    }
    uVar19 = 0;
    pFVar31 = local_228;
    local_260 = iVar30;
    if (0 < (int)uVar22) {
      do {
        iVar29 = local_2c4;
        lVar26 = 0;
        uVar22 = uVar19 + 1;
        local_210._0_4_ = (local_2bc - uVar19) - 1;
        local_210._4_4_ = uVar22;
        if (local_128.Elements._8_4_ != local_128.Elements._52_4_) {
          FVar15 = (ForElementType<FSetElementId>)&local_128.Hash;
          if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_128.Hash.SecondaryData;
          }
          iVar25 = *(int *)((longlong)FVar15 +
                           (ulonglong)
                           (local_128.HashSize - 1U &
                           (((uint)local_210._0_4_ >> 2) + 0x9e3779ba + uVar19 +
                            local_210._0_4_ * 0x40 ^ local_210._0_4_)) * 4);
          while (iVar25 != -1) {
            lVar33 = local_128.Elements._0_8_ + (longlong)iVar25 * 0x14;
            if ((*(uint *)(local_128.Elements._0_8_ + (longlong)iVar25 * 0x14) == local_210._0_4_)
               && (*(uint *)(lVar33 + 4) == uVar22)) {
              if ((iVar25 != -1) && (lVar26 = lVar33, lVar33 != 0)) goto LAB_14c841fd4;
              break;
            }
            iVar25 = *(int *)(lVar33 + 0xc);
          }
        }
        lVar33 = lVar26;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_14c841fd4:
        if ((*(int *)(lVar33 + 8) != -1) &&
           (bVar9 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1708724095576702566>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                               ,0x19a,"Grid[MapKey] == -1"), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_2c0 < iVar18) {
          if ((iVar30 < iVar29) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NbrVWLevel >= Level",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                 ,0x19e,
                                 L"bVWEdgeHasAdditionalVertices is true but Level > NbrVWLevel"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar17 = (uVar22 << ((char)iVar30 - (char)iVar29 & 0x1fU)) - 1;
          uVar19 = 0;
          if ((int)uVar17 < local_26c) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar29 = *(int *)(local_228 + (longlong)(int)uVar17 * 4);
        }
        else {
          uVar17 = 0;
          if ((int)uVar19 < local_26c) {
            uVar17 = ~uVar19 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar29 = *(int *)pFVar31;
        }
        piVar12 = TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                  ::FindChecked((TMapBase<TTuple<int,int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<int,int>,int,0>_>
                                 *)&local_128,&local_210);
        *piVar12 = iVar29;
        pTVar21 = local_2b8;
        pFVar31 = pFVar31 + 4;
        uVar19 = uVar22;
      } while ((int)uVar22 < (int)local_2ac);
    }
    if (((pTVar21->Triangles).ArrayNum < 2) &&
       (bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1708724095576702549>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                           ,0x1ab,"TriPatch.Triangles.Num() > 1"), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar27 = 0;
    iVar18 = 0;
    local_2a8 = 0;
    local_290 = 0;
    if (0 < local_2bc) {
      local_288 = (FRedGreenTessellationPattern *)0x0;
      uVar32 = uVar27;
      iVar30 = local_2bc;
      do {
        local_27c = 0;
        iVar18 = (int)uVar27;
        local_214 = iVar30 - iVar18;
        uVar22 = iVar18 + 1;
        local_2a4 = uVar22;
        if (0 < local_214) {
          local_258 = (int)(uVar27 >> 2) + iVar18 * 0x40;
          local_1f8 = (uVar22 >> 2) + uVar22 * 0x40;
          do {
            iVar18 = local_1f8;
            uVar17 = local_27c;
            lVar26 = 0;
            iVar30 = local_258 + local_27c;
            uVar19 = (uint)uVar27;
            if (local_128.Elements._8_4_ != local_128.Elements._52_4_) {
              FVar15 = (ForElementType<FSetElementId>)&local_128.Hash;
              if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar15 = local_128.Hash.SecondaryData;
              }
              iVar29 = *(int *)((longlong)FVar15 +
                               (ulonglong)
                               (local_128.HashSize - 1U & (iVar30 + 0x9e3779b9U ^ uVar19)) * 4);
              while (iVar29 != -1) {
                lVar33 = local_128.Elements._0_8_ + (longlong)iVar29 * 0x14;
                if ((*(uint *)(local_128.Elements._0_8_ + (longlong)iVar29 * 0x14) == uVar19) &&
                   (*(uint *)(lVar33 + 4) == local_27c)) {
                  if ((iVar29 != -1) && (lVar26 = lVar33, lVar33 != 0)) goto LAB_14c84228c;
                  break;
                }
                iVar29 = *(int *)(lVar33 + 0xc);
              }
            }
            lVar33 = lVar26;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
LAB_14c84228c:
            local_21c = iVar18 + uVar17;
            iVar18 = *(int *)(lVar33 + 8);
            uVar28 = local_21c + 0x9e3779b9U ^ local_2a4;
            local_280 = uVar28;
            if (local_128.Elements._8_4_ != local_128.Elements._52_4_) {
              FVar15 = (ForElementType<FSetElementId>)&local_128.Hash;
              if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar15 = local_128.Hash.SecondaryData;
              }
              iVar29 = *(int *)((longlong)FVar15 + (ulonglong)(local_128.HashSize - 1U & uVar28) * 4
                               );
              while (iVar29 != -1) {
                lVar26 = local_128.Elements._0_8_ + (longlong)iVar29 * 0x14;
                if ((*(uint *)(local_128.Elements._0_8_ + (longlong)iVar29 * 0x14) == local_2a4) &&
                   (*(uint *)(lVar26 + 4) == uVar17)) {
                  if (iVar29 != -1) {
                    if (lVar26 != 0) goto LAB_14c84233d;
                    goto LAB_14c842309;
                  }
                  break;
                }
                iVar29 = *(int *)(lVar26 + 0xc);
              }
            }
            lVar26 = 0;
LAB_14c842309:
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
LAB_14c84233d:
            iVar29 = *(int *)(lVar26 + 8);
            local_294 = uVar17 + 1;
            local_218 = iVar30 + 0x9e3779baU ^ uVar19;
            if (local_128.Elements._8_4_ != local_128.Elements._52_4_) {
              FVar15 = (ForElementType<FSetElementId>)&local_128.Hash;
              if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar15 = local_128.Hash.SecondaryData;
              }
              iVar30 = *(int *)((longlong)FVar15 +
                               (ulonglong)(local_128.HashSize - 1U & local_218) * 4);
              while (iVar30 != -1) {
                lVar26 = local_128.Elements._0_8_ + (longlong)iVar30 * 0x14;
                if ((*(uint *)(local_128.Elements._0_8_ + (longlong)iVar30 * 0x14) == uVar19) &&
                   (*(uint *)(lVar26 + 4) == local_294)) {
                  if (iVar30 != -1) {
                    if (lVar26 != 0) goto LAB_14c8423df;
                    goto LAB_14c8423b9;
                  }
                  break;
                }
                iVar30 = *(int *)(lVar26 + 0xc);
              }
            }
            lVar26 = 0;
LAB_14c8423b9:
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
LAB_14c8423df:
            local_240._s_0.C = *(int *)(lVar26 + 8);
            local_240._s_0.A = iVar18;
            local_240._s_0.B = iVar29;
            if ((iVar18 < 0) &&
               (bVar9 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1708724095576702541>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                   ,0x1b3,"GridTriangle[0] >= 0"), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((local_240._s_0.B < 0) &&
               (bVar9 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1708724095576702540>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                   ,0x1b4,"GridTriangle[1] >= 0"), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((local_240._s_0.C < 0) &&
               (bVar9 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1708724095576702539>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                   ,0x1b5,"GridTriangle[2] >= 0"), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar30 = local_270;
            iVar18 = local_2c4;
            local_d8.Elements[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.Elements[0].ArrayNum = 0;
            local_d8.Elements[0].ArrayMax = 0;
            local_d8.Elements[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.Elements[1].ArrayNum = 0;
            local_d8.Elements[1].ArrayMax = 0;
            local_d8.Elements[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_d8.Elements[2].ArrayNum = 0;
            local_d8.Elements[2].ArrayMax = 0;
            if ((uVar17 == 0) && (local_2c0 < local_264)) {
              if ((local_270 < local_2c4) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NbrLevel >= Level",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                     ,0x1b9,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar29 = local_29c;
              iVar18 = 1 << ((char)iVar30 - (char)iVar18 & 0x1fU);
              uVar22 = iVar18 * uVar19;
              lVar33 = (longlong)(int)(iVar18 * local_2a4 + -1);
              lVar26 = (longlong)(int)uVar22;
              if (lVar26 < lVar33) {
                lVar33 = lVar33 - lVar26;
                pFVar31 = local_278 + lVar26 * 4;
                do {
                  uVar17 = 0;
                  if ((int)uVar22 < iVar29) {
                    uVar17 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if (((local_d8.Elements[0].AllocatorInstance.Data <= pFVar31) &&
                      (pFVar31 < local_d8.Elements[0].AllocatorInstance.Data +
                                 (longlong)local_d8.Elements[0].ArrayMax * 4)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar30 = local_d8.Elements[0].ArrayNum;
                  if (local_d8.Elements[0].ArrayNum == local_d8.Elements[0].ArrayMax) {
                    iVar30 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)&local_d8,
                                        &local_d8.Elements[0].ArrayMax);
                  }
                  uVar22 = uVar22 + 1;
                  local_d8.Elements[0].ArrayNum = iVar30 + 1;
                  uVar3 = *(undefined4 *)pFVar31;
                  pFVar31 = pFVar31 + 4;
                  *(undefined4 *)
                   (local_d8.Elements[0].AllocatorInstance.Data + (longlong)iVar30 * 4) = uVar3;
                  lVar33 = lVar33 + -1;
                  uVar28 = local_280;
                  uVar17 = local_27c;
                } while (lVar33 != 0);
              }
              if ((local_d8.Elements[0].ArrayNum != iVar18 + -1) &&
                 (bVar9 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_1708724095576702508>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                     ,0x1d4,"EdgePoints.Num() == StepSize - 1"), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar30 = local_260;
            iVar18 = local_2c4;
            uVar19 = uVar19 + uVar17;
            local_2a0 = uVar19;
            if ((uVar19 == local_2ac) && (local_2c0 < local_220)) {
              if ((local_260 < local_2c4) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NbrLevel >= Level",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                     ,0x1b9,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar29 = local_26c;
              iVar18 = 1 << ((char)iVar30 - (char)iVar18 & 0x1fU);
              uVar22 = iVar18 * uVar17;
              lVar33 = (longlong)(int)(iVar18 * local_294 + -1);
              lVar26 = (longlong)(int)uVar22;
              if (lVar26 < lVar33) {
                lVar33 = lVar33 - lVar26;
                pFVar31 = local_228 + lVar26 * 4;
                do {
                  uVar19 = 0;
                  if ((int)uVar22 < iVar29) {
                    uVar19 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if (((local_d8.Elements[1].AllocatorInstance.Data <= pFVar31) &&
                      (pFVar31 < local_d8.Elements[1].AllocatorInstance.Data +
                                 (longlong)local_d8.Elements[1].ArrayMax * 4)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar30 = local_d8.Elements[1].ArrayNum;
                  if (local_d8.Elements[1].ArrayNum == local_d8.Elements[1].ArrayMax) {
                    iVar30 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_d8.Elements[1].AllocatorInstance,
                                        &local_d8.Elements[1].ArrayMax);
                  }
                  uVar22 = uVar22 + 1;
                  local_d8.Elements[1].ArrayNum = iVar30 + 1;
                  uVar3 = *(undefined4 *)pFVar31;
                  pFVar31 = pFVar31 + 4;
                  *(undefined4 *)
                   (local_d8.Elements[1].AllocatorInstance.Data + (longlong)iVar30 * 4) = uVar3;
                  lVar33 = lVar33 + -1;
                  uVar28 = local_280;
                  uVar19 = local_2a0;
                } while (lVar33 != 0);
              }
              if ((local_d8.Elements[1].ArrayNum != iVar18 + -1) &&
                 (bVar9 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_1708724095576702508>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                     ,0x1d4,"EdgePoints.Num() == StepSize - 1"), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar30 = local_298;
            iVar18 = local_2c4;
            if ((local_290 == 0) && (local_2c0 < local_268)) {
              if ((local_298 < local_2c4) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NbrLevel >= Level",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                     ,0x1b9,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar29 = local_25c;
              iVar30 = 1 << ((char)iVar30 - (char)iVar18 & 0x1fU);
              iVar18 = local_2bc + 1 + ~uVar17;
              uVar22 = (iVar18 + -1) * iVar30;
              lVar33 = (longlong)(iVar18 * iVar30 + -1);
              lVar26 = (longlong)(int)uVar22;
              if (lVar26 < lVar33) {
                lVar33 = lVar33 - lVar26;
                pFVar31 = local_230 + lVar26 * 4;
                do {
                  uVar19 = 0;
                  if ((int)uVar22 < iVar29) {
                    uVar19 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if (((local_d8.Elements[2].AllocatorInstance.Data <= pFVar31) &&
                      (pFVar31 < local_d8.Elements[2].AllocatorInstance.Data +
                                 (longlong)local_d8.Elements[2].ArrayMax * 4)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar18 = local_d8.Elements[2].ArrayNum;
                  if (local_d8.Elements[2].ArrayNum == local_d8.Elements[2].ArrayMax) {
                    iVar18 = Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_d8.Elements[2].AllocatorInstance,
                                        &local_d8.Elements[2].ArrayMax);
                  }
                  uVar22 = uVar22 + 1;
                  local_d8.Elements[2].ArrayNum = iVar18 + 1;
                  uVar3 = *(undefined4 *)pFVar31;
                  pFVar31 = pFVar31 + 4;
                  *(undefined4 *)
                   (local_d8.Elements[2].AllocatorInstance.Data + (longlong)iVar18 * 4) = uVar3;
                  lVar33 = lVar33 + -1;
                  uVar28 = local_280;
                  uVar19 = local_2a0;
                } while (lVar33 != 0);
              }
              if ((local_d8.Elements[2].ArrayNum != iVar30 + -1) &&
                 (bVar9 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_1708724095576702508>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                     ,0x1d4,"EdgePoints.Num() == StepSize - 1"), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            uVar3 = local_240._s_0.C;
            uVar22 = local_2a8;
            pTVar21 = local_2b8;
            if (((local_d8.Elements[0].ArrayNum == 0) && (local_d8.Elements[1].ArrayNum == 0)) &&
               (local_d8.Elements[2].ArrayNum == 0)) {
              uVar2 = CONCAT44(local_240._s_0.B,local_240._s_0.A);
              uVar10 = 0;
              if ((int)local_2a8 < (local_2b8->Triangles).ArrayNum) {
                uVar10 = ~local_2a8 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar11 = (pTVar21->Triangles).DataPtr;
              *(undefined8 *)&pFVar11[(longlong)local_288].field0_0x0 = uVar2;
              pFVar11[(longlong)local_288].field0_0x0._s_0.C = uVar3;
              local_2a8 = uVar22 + 1;
              local_288 = (FRedGreenTessellationPattern *)((longlong)&local_288->_padding_ + 1);
            }
            else {
              local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_208.ArrayNum = 0;
              local_208.ArrayMax = 0;
              RedGreenTessellationPatternHelpers::TriangulatePoly
                        ((FIndex3i *)&local_240._s_0,&local_d8,&local_208);
              pTVar21 = local_2b8;
              iVar18 = local_208.ArrayNum;
              uVar27 = (ulonglong)local_208.ArrayNum;
              pFVar31 = local_208.AllocatorInstance.Data + uVar27 * 0xc;
              lVar26 = (longlong)local_288 * 0xc;
              FVar23.Data = local_208.AllocatorInstance.Data;
              uVar22 = local_2a8;
              while( true ) {
                if ((int)uVar27 != iVar18) {
                  local_2b0[0] = 0;
                  `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_2b0);
                }
                uVar28 = local_280;
                uVar19 = local_2a0;
                if (FVar23.Data == pFVar31) break;
                if ((*(int *)FVar23.Data < 0) &&
                   (bVar9 = Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_1708724095576702474>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                       ,0x1f6,"Tri[0] >= 0"), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if ((*(int *)(FVar23.Data + 4) < 0) &&
                   (bVar9 = Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_1708724095576702473>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                       ,0x1f7,"Tri[1] >= 0"), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if ((*(int *)(FVar23.Data + 8) < 0) &&
                   (bVar9 = Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_1708724095576702472>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                       ,0x1f8,"Tri[2] >= 0"), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar2 = *(undefined8 *)FVar23.Data;
                iVar30 = *(int *)(FVar23.Data + 8);
                uVar19 = 0;
                if ((int)uVar22 < (pTVar21->Triangles).ArrayNum) {
                  uVar19 = ~uVar22 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar11 = (pTVar21->Triangles).DataPtr;
                uVar22 = uVar22 + 1;
                local_288 = (FRedGreenTessellationPattern *)((longlong)&local_288->_padding_ + 1);
                *(undefined8 *)((longlong)&pFVar11->field0_0x0 + lVar26) = uVar2;
                *(int *)((longlong)&pFVar11->field0_0x0 + lVar26 + 8) = iVar30;
                lVar26 = lVar26 + 0xc;
                uVar27 = local_208._8_8_ & 0xffffffff;
                FVar23.Data = FVar23.Data + 0xc;
              }
              pTVar21 = local_2b8;
              uVar17 = local_27c;
              local_2a8 = uVar22;
              if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.AllocatorInstance.Data);
                pTVar21 = local_2b8;
                uVar17 = local_27c;
              }
            }
            uVar22 = local_2a4;
            uVar10 = local_2a8;
            lVar26 = 0;
            if ((int)uVar19 < (int)local_2ac) {
              lVar33 = lVar26;
              if (local_128.Elements._8_4_ != local_128.Elements._52_4_) {
                FVar15 = (ForElementType<FSetElementId>)&local_128.Hash;
                if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar15 = local_128.Hash.SecondaryData;
                }
                iVar18 = *(int *)((longlong)FVar15 +
                                 (ulonglong)(local_128.HashSize - 1U & uVar28) * 4);
                while (iVar18 != -1) {
                  lVar20 = local_128.Elements._0_8_ + (longlong)iVar18 * 0x14;
                  if ((*(uint *)(local_128.Elements._0_8_ + (longlong)iVar18 * 0x14) == local_2a4)
                     && (*(uint *)(lVar20 + 4) == uVar17)) {
                    if ((iVar18 != -1) && (lVar33 = lVar20, lVar20 != 0)) goto LAB_14c842d7d;
                    break;
                  }
                  iVar18 = *(int *)(lVar20 + 0xc);
                }
              }
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
LAB_14c842d7d:
              iVar18 = *(int *)(lVar33 + 8);
              if (local_128.Elements._8_4_ != local_128.Elements._52_4_) {
                FVar15 = (ForElementType<FSetElementId>)&local_128.Hash;
                if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar15 = local_128.Hash.SecondaryData;
                }
                iVar30 = *(int *)((longlong)FVar15 +
                                 (ulonglong)
                                 (local_128.HashSize - 1U & (local_21c + 0x9e3779baU ^ uVar22)) * 4)
                ;
                while (iVar30 != -1) {
                  lVar33 = local_128.Elements._0_8_ + (longlong)iVar30 * 0x14;
                  if ((*(uint *)(local_128.Elements._0_8_ + (longlong)iVar30 * 0x14) == uVar22) &&
                     (*(uint *)(lVar33 + 4) == local_294)) {
                    if ((iVar30 != -1) && (lVar26 = lVar33, lVar33 != 0)) goto LAB_14c842e34;
                    break;
                  }
                  iVar30 = *(int *)(lVar33 + 0xc);
                }
              }
              lVar33 = lVar26;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
LAB_14c842e34:
              iVar30 = *(int *)(lVar33 + 8);
              if (local_128.Elements._8_4_ != local_128.Elements._52_4_) {
                FVar15 = (ForElementType<FSetElementId>)&local_128.Hash;
                if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar15 = local_128.Hash.SecondaryData;
                }
                iVar29 = *(int *)((longlong)FVar15 +
                                 (ulonglong)(local_128.HashSize - 1U & local_218) * 4);
                while (iVar29 != -1) {
                  lVar26 = local_128.Elements._0_8_ + (longlong)iVar29 * 0x14;
                  if ((*(uint *)(local_128.Elements._0_8_ + (longlong)iVar29 * 0x14) == local_290)
                     && (*(uint *)(lVar26 + 4) == local_294)) {
                    if (iVar29 != -1) {
                      if (lVar26 != 0) goto LAB_14c842ec2;
                      goto LAB_14c842e9c;
                    }
                    break;
                  }
                  iVar29 = *(int *)(lVar26 + 0xc);
                }
              }
              lVar26 = 0;
LAB_14c842e9c:
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
LAB_14c842ec2:
              local_1e8 = *(int *)(lVar26 + 8);
              local_1f0 = iVar18;
              iStack_1ec = iVar30;
              if ((iVar18 < 0) &&
                 (bVar9 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_1708724095576702462>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                     ,0x202,"UpperTri[0] >= 0"), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((iVar30 < 0) &&
                 (bVar9 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_1708724095576702461>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                     ,0x203,"UpperTri[1] >= 0"), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((local_1e8 < 0) &&
                 (bVar9 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<_1708724095576702460>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                                     ,0x204,"UpperTri[2] >= 0"), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pTVar21 = local_2b8;
              uVar19 = 0;
              if ((int)uVar10 < (local_2b8->Triangles).ArrayNum) {
                uVar19 = ~uVar10 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_2a8 = uVar10 + 1;
              pFVar11 = (pTVar21->Triangles).DataPtr;
              *(ulonglong *)&pFVar11[(longlong)local_288].field0_0x0 =
                   CONCAT44(iStack_1ec,local_1f0);
              pFVar11[(longlong)local_288].field0_0x0._s_0.C = local_1e8;
              local_288 = (FRedGreenTessellationPattern *)((longlong)&local_288->_padding_ + 1);
            }
            uVar32 = (ulonglong)local_2a8;
            puVar24 = local_a8;
            lVar26 = 3;
            do {
              puVar1 = puVar24 + -2;
              puVar24 = puVar24 + -2;
              lVar26 = lVar26 + -1;
              if ((void *)*puVar1 != (void *)0x0) {
                FMemory::Free((void *)*puVar1);
              }
            } while (lVar26 != 0);
            uVar27 = (ulonglong)local_290;
            local_27c = local_294;
            iVar30 = local_2bc;
          } while ((int)local_294 < local_214);
        }
        iVar18 = (int)uVar32;
        uVar27 = (ulonglong)uVar22;
        local_290 = uVar22;
      } while ((int)uVar22 < iVar30);
    }
    if ((iVar18 != (pTVar21->Triangles).ArrayNum) &&
       (bVar9 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1708724095576702453>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\RedGreenTessellation.cpp"
                           ,0x20b,"TriangleIndex == TriPatch.Triangles.Num()"), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_230 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230);
    }
    if (local_228 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228);
    }
    if (local_278 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278);
    }
    local_128.HashSize = 0;
    if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TTuple<int,int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_128.Elements);
  }
  return;
}

// Validate @ 14c851230

EOperationValidationResult __thiscall
UE::Geometry::FRedGreenTessellationPattern::Validate(FRedGreenTessellationPattern *this)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    return (EOperationValidationResult)
           ((this->TriangleLevels).ArrayNum <
           *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144));
  }
  return Failed_UnknownReason;
}

