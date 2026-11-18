// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 5

// MakeCircle @ 14cbf23f0

TPolygon2<double> * __cdecl
UE::Geometry::TPolygon2<double>::MakeCircle
          (TPolygon2<double> *__return_storage_ptr__,double param_1,int param_2,double param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TPolygon2<double> *pTVar7;
  longlong lVar8;
  uint uVar9;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  
  piVar1 = &(__return_storage_ptr__->Vertices).ArrayNum;
  piVar2 = &(__return_storage_ptr__->Vertices).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (__return_storage_ptr__->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (param_2 < 1) {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,param_2,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
    uVar9 = 0;
    lVar8 = 0;
    do {
      __libm_sse2_sincos_();
      uVar6 = 0;
      if ((int)uVar9 < *piVar1) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TPolygon2<double> *)(*pcVar4)();
        return pTVar7;
      }
      pFVar3 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
      uVar9 = uVar9 + 1;
      *(double *)(pFVar3 + lVar8) = extraout_XMM0_Qb * param_1;
      *(double *)(pFVar3 + lVar8 + 8) = extraout_XMM0_Qa * param_1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar9 < param_2);
  }
  return __return_storage_ptr__;
}

// AppendVertex @ 14cc342e0

void __thiscall
UE::Geometry::TPolygon2<double>::AppendVertex(TPolygon2<double> *this,TVector2<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  
  pFVar2 = (this->Vertices).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Vertices).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Vertices).ArrayNum;
  piVar1 = &(this->Vertices).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Vertices).ArrayNum = iVar6 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (this->Vertices).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(double *)pFVar2 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + 8) = dVar4;
  return;
}

// MakeRectangle @ 14cc64ad0

TPolygon2<double> * __cdecl
UE::Geometry::TPolygon2<double>::MakeRectangle
          (TPolygon2<double> *__return_storage_ptr__,TVector2<double> *param_1,double param_2,
          double param_3)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  TPolygon2<double> *pTVar10;
  
  piVar1 = &(__return_storage_ptr__->Vertices).ArrayNum;
  piVar2 = &(__return_storage_ptr__->Vertices).ArrayMax;
  (__return_storage_ptr__->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,(ForAnyElementType *)__return_storage_ptr__,piVar1,piVar2);
  dVar8 = param_2 * __real_3fe0000000000000;
  dVar7 = param_3 * __real_3fe0000000000000;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  if (*piVar1 < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TPolygon2<double> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pFVar5 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
  *(double *)pFVar5 = dVar3 - dVar8;
  *(double *)(pFVar5 + 8) = dVar4 - dVar7;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  if (*piVar1 < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TPolygon2<double> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pFVar5 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
  *(double *)(pFVar5 + 0x10) = dVar8 + dVar4;
  *(double *)(pFVar5 + 0x18) = dVar3 - dVar7;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  if (*piVar1 < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TPolygon2<double> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pFVar5 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
  *(double *)(pFVar5 + 0x20) = dVar8 + dVar3;
  *(double *)(pFVar5 + 0x28) = dVar7 + dVar4;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  if (*piVar1 < 4) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar10 = (TPolygon2<double> *)(*pcVar6)();
      return pTVar10;
    }
  }
  pFVar5 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
  *(double *)(pFVar5 + 0x30) = dVar3 - dVar8;
  *(double *)(pFVar5 + 0x38) = dVar7 + dVar4;
  return __return_storage_ptr__;
}

// MakeRoundedRectangle @ 14cc64cf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TPolygon2<double> * __cdecl
UE::Geometry::TPolygon2<double>::MakeRoundedRectangle
          (TPolygon2<double> *__return_storage_ptr__,TVector2<double> *param_1,double param_2,
          double param_3,double param_4,int param_5)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  TPolygon2<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  
  (__return_storage_ptr__->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Vertices).ArrayNum = 0;
  (__return_storage_ptr__->Vertices).ArrayMax = 0;
  if (param_5 < 2) {
    param_5 = 2;
  }
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&__return_storage_ptr__->Vertices,param_5 * 4,Default);
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = param_2 * __real_3fe0000000000000 - param_4;
  dVar6 = param_3 * __real_3fe0000000000000 - param_4;
  dVar8 = dVar1 - dVar5;
  dVar1 = dVar1 + dVar5;
  dVar5 = dVar2 - dVar6;
  dVar2 = dVar2 + dVar6;
  if (0 < param_5) {
    lVar14 = (longlong)param_5;
    uVar15 = param_5 * 2;
    lVar13 = lVar14 << 5;
    do {
      uVar12 = uVar15 + param_5 * -2;
      __libm_sse2_sincos_();
      dVar7 = extraout_XMM0_Qb * param_4;
      dVar6 = extraout_XMM0_Qa * param_4;
      uVar10 = 0;
      if ((int)uVar12 < (__return_storage_ptr__->Vertices).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TPolygon2<double> *)(*pcVar4)();
        return pTVar11;
      }
      pFVar3 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
      *(double *)(pFVar3 + lVar13 + lVar14 * -0x20) = dVar8 - dVar7;
      *(double *)(pFVar3 + lVar13 + lVar14 * -0x20 + 8) = dVar5 - dVar6;
      uVar10 = 0;
      if ((int)(uVar15 - param_5) < (__return_storage_ptr__->Vertices).ArrayNum) {
        uVar10 = ~(uVar15 - param_5) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TPolygon2<double> *)(*pcVar4)();
        return pTVar11;
      }
      pFVar3 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
      *(double *)(pFVar3 + lVar13 + lVar14 * -0x10) = dVar1 + dVar6;
      *(double *)(pFVar3 + lVar13 + lVar14 * -0x10 + 8) = dVar5 - dVar7;
      uVar10 = 0;
      if ((int)uVar15 < (__return_storage_ptr__->Vertices).ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TPolygon2<double> *)(*pcVar4)();
        return pTVar11;
      }
      pFVar3 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
      *(double *)(pFVar3 + lVar13) = dVar1 + dVar7;
      *(double *)(pFVar3 + lVar13 + 8) = dVar2 + dVar6;
      uVar10 = 0;
      if ((int)(uVar15 + param_5) < (__return_storage_ptr__->Vertices).ArrayNum) {
        uVar10 = ~(uVar15 + param_5) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TPolygon2<double> *)(*pcVar4)();
        return pTVar11;
      }
      uVar15 = uVar15 + 1;
      pFVar3 = (__return_storage_ptr__->Vertices).AllocatorInstance.Data;
      *(double *)(pFVar3 + lVar13 + lVar14 * 0x10) = dVar8 - dVar6;
      *(double *)(pFVar3 + lVar13 + lVar14 * 0x10 + 8) = dVar2 + dVar7;
      lVar13 = lVar13 + 0x10;
    } while ((int)(uVar15 + param_5 * -2) < param_5);
  }
  return __return_storage_ptr__;
}

// TPolygon2<double> @ 14ccb98b0

TPolygon2<double> * __thiscall
UE::Geometry::TPolygon2<double>::TPolygon2<double>
          (TPolygon2<double> *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Vertices).ArrayMax;
  iVar2 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->Vertices).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->Vertices).AllocatorInstance.Data,_Src,(longlong)iVar2 << 4);
  return this;
}

