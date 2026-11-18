// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 58

// TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> @ 14c9a0b40

TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::
TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          ,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *pTVar3;
  float local_res18 [4];
  
  this->_padding_ = 0;
  this->Parent = param_1;
  (this->AttribValues).CurBlock = 0;
  (this->AttribValues).CurBlockUsed = 0;
  (this->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttribValues).Blocks.ArrayNum = 0;
  (this->AttribValues).Blocks.ArrayMax = 0;
  this->_padding_ =
       (longlong)&___7__TDynamicVertexAttribute_M_01VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  TDynamicVector<float,512>::AddAllocatedBlock(&this->AttribValues);
  if (param_2) {
    local_res18[0] = 0.0;
    if (this->Parent == (FDynamicMesh3 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x9a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
        return pTVar3;
      }
    }
    TDynamicVector<float,512>::Resize
              (&this->AttribValues,
               ((this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 2);
    TDynamicVector<float,512>::Fill(&this->AttribValues,local_res18);
  }
  return this;
}

// ~TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> @ 14c9a8c70

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::
~TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TDynamicVertexAttribute_M_01VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  TDynamicVector<float,512>::Empty(&this->AttribValues,0);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// ~TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> @ 14c9a8cc0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::
~TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TDynamicVertexAttribute_M_03VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  TDynamicVector<float,512>::Empty(&this->AttribValues,0);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// Append @ 14c9b31c0

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::Append
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  uVar5 = (param_2->NumVertex + param_2->VertexOffset) * 2;
  if ((ulonglong)((this->AttribValues).CurBlockUsed + (this->AttribValues).CurBlock * 0x200) <
      (ulonglong)(longlong)(int)uVar5) {
    TDynamicVector<float,512>::Resize(&this->AttribValues,uVar5);
  }
  iVar6 = 0;
  if (0 < param_2->NumVertex) {
    do {
      cVar2 = (**(code **)(param_1->_padding_ + 0x48))(param_1,iVar6,&local_res8,8);
      if (cVar2 == '\0') {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9011337232392388407>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                           ,0xc9,"Source.CopyOut(Idx, BufferData, BufferSize)");
        if (!bVar3) {
          return false;
        }
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar5 = param_2->VertexOffset + iVar6;
      iVar6 = iVar6 + 1;
      *(undefined4 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar5 * 2 & 0x1ff) * 4) =
           local_res8;
      *(undefined4 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4) =
           local_resc;
    } while (iVar6 < param_2->NumVertex);
  }
  return true;
}

// Append @ 14c9b32d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::Append
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStackY_68 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar6 = (param_2->VertexOffset + param_2->NumVertex) * 4;
  if ((ulonglong)((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed) <
      (ulonglong)(longlong)(int)uVar6) {
    TDynamicVector<float,512>::Resize(&this->AttribValues,uVar6);
  }
  iVar7 = 0;
  if (0 < param_2->NumVertex) {
    do {
      cVar2 = (**(code **)(param_1->_padding_ + 0x48))(param_1,iVar7,&local_38,0x10);
      if (cVar2 == '\0') {
        bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9011337232392388407>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                           ,0xc9,"Source.CopyOut(Idx, BufferData, BufferSize)");
        if (!bVar3) {
          return false;
        }
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      uVar6 = param_2->VertexOffset + iVar7;
      uVar5 = uVar6 * 4;
      iVar7 = iVar7 + 1;
      *(undefined4 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4) = local_38;
      *(undefined4 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar5 + 1 & 0x1ff) * 4) =
           local_34;
      *(undefined4 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar5 + 2 & 0x1ff) * 4) =
           local_30;
      *(undefined4 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data +
         (ulonglong)((uVar6 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar5 + 3 & 0x1ff) * 4) =
           local_2c;
    } while (iVar7 < param_2->NumVertex);
  }
  return true;
}

// AppendDefaulted @ 14c9b34d0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::AppendDefaulted
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,FAppendInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = (**(code **)(this->_padding_ + 0xd8))();
  uVar2 = (param_1->NumVertex + param_1->VertexOffset) * 2;
  uVar4 = (this->AttribValues).CurBlockUsed + (this->AttribValues).CurBlock * 0x200;
  if (uVar4 < uVar2) {
    TDynamicVector<float,512>::Resize(&this->AttribValues,uVar2);
    do {
      uVar3 = uVar4 & 0x1ff;
      uVar1 = uVar4 >> 9;
      uVar4 = uVar4 + 1;
      *(undefined4 *)
       (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)uVar1 * 8) +
       (ulonglong)uVar3 * 4) = uVar5;
    } while (uVar4 < uVar2);
  }
  return;
}

// AppendDefaulted @ 14c9b3560

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::AppendDefaulted
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,FAppendInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = (**(code **)(this->_padding_ + 0xd8))();
  uVar3 = (this->AttribValues).CurBlockUsed + (this->AttribValues).CurBlock * 0x200;
  uVar4 = (param_1->NumVertex + param_1->VertexOffset) * 4;
  if (uVar3 < uVar4) {
    TDynamicVector<float,512>::Resize(&this->AttribValues,uVar4);
    do {
      uVar2 = uVar3 & 0x1ff;
      uVar1 = uVar3 >> 9;
      uVar3 = uVar3 + 1;
      *(undefined4 *)
       (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)uVar1 * 8) +
       (ulonglong)uVar2 * 4) = uVar5;
    } while (uVar3 < uVar4);
  }
  return;
}

// CheckValidity @ 14c9b9990

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::CheckValidity
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,bool param_1,
          EValidityCheckFailMode param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((-1 < iVar4) &&
     ((ulonglong)((longlong)iVar4 * 2) <=
      (ulonglong)((this->AttribValues).CurBlockUsed + (this->AttribValues).CurBlock * 0x200))) {
    return true;
  }
  if (param_2 == Check) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                       ,0x198,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else if (param_2 != Ensure) {
    return false;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9011337232392388198>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                     ,0x19a,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// CheckValidity @ 14c9b9a50

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::CheckValidity
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,bool param_1,
          EValidityCheckFailMode param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((-1 < iVar4) &&
     ((ulonglong)((longlong)iVar4 * 4) <=
      (ulonglong)((this->AttribValues).CurBlockUsed + (this->AttribValues).CurBlock * 0x200))) {
    return true;
  }
  if (param_2 == Check) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                       ,0x198,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else if (param_2 != Ensure) {
    return false;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9011337232392388198>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                     ,0x19a,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// CompactCopy @ 14c9b9e20

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::CompactCopy
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1,
          TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *param_2)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  this->_padding_ = param_2->_padding_;
  if (((int)((param_2->AttribValues).CurBlockUsed + (param_2->AttribValues).CurBlock * 0x200 >> 1) <
       (param_1->VertMap).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactMaps.NumVertexMappings() <= int(ToCopy.AttribValues.Num() / AttribDimension)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x88,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar7 = (longlong)(param_1->VertMap).ArrayNum;
  uVar6 = 0;
  if (0 < lVar7) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (param_1->VertMap).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = *(uint *)((param_1->VertMap).AllocatorInstance.Data + lVar8 * 4);
      if (uVar5 != 0xffffffff) {
        pFVar2 = (param_2->AttribValues).Blocks.AllocatorInstance.Data;
        uVar1 = *(undefined4 *)
                 (*(longlong *)(pFVar2 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
                 (ulonglong)(uVar6 * 2 + 1 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data +
           (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar5 * 2 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)(pFVar2 + (ulonglong)((uVar6 & 0x7fffffff) >> 8) * 8) +
              (ulonglong)(uVar6 * 2 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data +
           (ulonglong)((uVar5 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar5 * 2 + 1 & 0x1ff) * 4) =
             uVar1;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar7);
  }
  return;
}

// CompactCopy @ 14c9b9fa0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::CompactCopy
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1,
          TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  
  this->_padding_ = param_2->_padding_;
  if (((int)((param_2->AttribValues).CurBlockUsed + (param_2->AttribValues).CurBlock * 0x200 >> 2) <
       (param_1->VertMap).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactMaps.NumVertexMappings() <= int(ToCopy.AttribValues.Num() / AttribDimension)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x88,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar10 = (longlong)(param_1->VertMap).ArrayNum;
  uVar9 = 0;
  if (0 < lVar10) {
    lVar12 = 0;
    uVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (param_1->VertMap).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = *(uint *)((param_1->VertMap).AllocatorInstance.Data + lVar12 * 4);
      if (uVar8 != 0xffffffff) {
        pFVar5 = (param_2->AttribValues).Blocks.AllocatorInstance.Data;
        uVar1 = uVar8 * 4;
        uVar2 = *(undefined4 *)
                 (*(longlong *)(pFVar5 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                 (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
        uVar3 = *(undefined4 *)
                 (*(longlong *)(pFVar5 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                 (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
        uVar4 = *(undefined4 *)
                 (*(longlong *)(pFVar5 + (ulonglong)(uVar11 + 3 >> 9) * 8) +
                 (ulonglong)(uVar11 + 3 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data +
           (ulonglong)((uVar8 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)(pFVar5 + (ulonglong)(uVar11 >> 9) * 8) +
              (ulonglong)(uVar11 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data +
           (ulonglong)((uVar8 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4) = uVar2
        ;
        *(undefined4 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data +
           (ulonglong)((uVar8 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar1 + 2 & 0x1ff) * 4) = uVar3
        ;
        *(undefined4 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data +
           (ulonglong)((uVar8 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar1 + 3 & 0x1ff) * 4) = uVar4
        ;
      }
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 1;
      uVar11 = uVar11 + 4;
    } while (lVar12 < lVar10);
  }
  return;
}

// CompactInPlace @ 14c9ba3b0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::CompactInPlace
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(param_1->VertMap).ArrayNum;
  uVar5 = 0;
  if (0 < lVar7) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (param_1->VertMap).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = *(int *)((param_1->VertMap).AllocatorInstance.Data + lVar6 * 4);
      if (iVar1 != -1) {
        if ((int)uVar5 < iVar1) {
          bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_9011337232392388483>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                             ,0x7d,"ToVID <= VID");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          CopyValue(this,uVar5,iVar1);
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar7);
  }
  TDynamicVector<float,512>::Resize
            (&this->AttribValues,
             ((this->Parent->VertexRefCounts).RefCounts.CurBlockUsed +
             (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200) * 2);
  return;
}

// CompactInPlace @ 14c9ba4d0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::CompactInPlace
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(param_1->VertMap).ArrayNum;
  uVar5 = 0;
  if (0 < lVar7) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (param_1->VertMap).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = *(int *)((param_1->VertMap).AllocatorInstance.Data + lVar6 * 4);
      if (iVar1 != -1) {
        if ((int)uVar5 < iVar1) {
          bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_9011337232392388483>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                             ,0x7d,"ToVID <= VID");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          CopyValue(this,uVar5,iVar1);
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar7);
  }
  TDynamicVector<float,512>::Resize
            (&this->AttribValues,
             ((this->Parent->VertexRefCounts).RefCounts.CurBlockUsed +
             (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200) * 4);
  return;
}

// CopyIn @ 14c9bd2b0

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::CopyIn
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  if (param_3 != 8) {
    return false;
  }
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) + (ulonglong)(param_1 * 2 & 0x1ff) * 4) =
       *(undefined4 *)param_2;
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) + (ulonglong)(param_1 * 2 + 1U & 0x1ff) * 4) =
       *(undefined4 *)((longlong)param_2 + 4);
  return true;
}

// CopyIn @ 14c9bd310

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::CopyIn
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 != 0x10) {
    return false;
  }
  uVar1 = param_1 * 4;
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4) =
       *(undefined4 *)param_2;
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4) =
       *(undefined4 *)((longlong)param_2 + 4);
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 + 2 & 0x1ff) * 4) =
       *(undefined4 *)((longlong)param_2 + 8);
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 + 3 & 0x1ff) * 4) =
       *(undefined4 *)((longlong)param_2 + 0xc);
  return true;
}

// CopyOut @ 14c9bd400

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::CopyOut
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  if (param_3 != 8) {
    return false;
  }
  *(undefined4 *)param_2 =
       *(undefined4 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data +
          (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) + (ulonglong)(param_1 * 2 & 0x1ff) * 4);
  *(undefined4 *)((longlong)param_2 + 4) =
       *(undefined4 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data +
          (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) + (ulonglong)(param_1 * 2 + 1U & 0x1ff) * 4
        );
  return true;
}

// CopyOut @ 14c9bd460

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::CopyOut
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 != 0x10) {
    return false;
  }
  uVar1 = param_1 * 4;
  *(undefined4 *)param_2 =
       *(undefined4 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data +
          (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
  *(undefined4 *)((longlong)param_2 + 4) =
       *(undefined4 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data +
          (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
  *(undefined4 *)((longlong)param_2 + 8) =
       *(undefined4 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data +
          (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
  *(undefined4 *)((longlong)param_2 + 0xc) =
       *(undefined4 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data +
          (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 + 3 & 0x1ff) * 4);
  return true;
}

// CopyThroughMapping @ 14c9bd7a0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::CopyThroughMapping
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FMeshIndexMappings *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  FMeshIndexMappings *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 local_a0;
  undefined4 local_9c;
  FMeshIndexMappings *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FMeshIndexMappings *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_2->VertexMap).ForwardMap.field_0x28;
  puVar1 = &(param_2->VertexMap).ForwardMap.field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(param_2->VertexMap).ForwardMap.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14c9bd84d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res20;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14c9bd84d:
  uVar14 = *(uint *)&(param_2->VertexMap).ForwardMap.field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_70 = *(int *)&(param_2->VertexMap).ForwardMap.field_0x8 -
              *(int *)&(param_2->VertexMap).ForwardMap.field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar4 = *(uint *)&(param_2->VertexMap).ForwardMap.field_0x28;
  if (uVar14 != uVar4) {
    puVar15 = *(undefined1 **)&(param_2->VertexMap).ForwardMap.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14c9bd950;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14c9bd950:
  while( true ) {
    pFVar7 = local_68;
    if (*(int *)&(local_68->VertexMap).ForwardMap.field_0x8 -
        *(int *)&(local_68->VertexMap).ForwardMap.field_0x34 != (int)uStack_40) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar11 = (longlong)TStack_60.CurrentBitIndex;
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == param_2))
    break;
    lVar5 = *(longlong *)&(pFVar7->VertexMap).ForwardMap;
    cVar10 = (**(code **)(param_1->_padding_ + 0x48))
                       (param_1,*(undefined4 *)(lVar5 + lVar11 * 0x10),&local_a0,8);
    if (cVar10 == '\0') {
      bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9011337232392388428>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0xb4,"Source->CopyOut(MapVID.Key, BufferData, BufferSize)");
      if (!bVar8) {
        return false;
      }
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar13 = *(uint *)(lVar5 + 4 + lVar11 * 0x10);
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data +
       (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar13 * 2 & 0x1ff) * 4) =
         local_a0;
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data +
       (ulonglong)((uVar13 & 0x7fffffff) >> 8) * 8) + (ulonglong)(uVar13 * 2 + 1 & 0x1ff) * 4) =
         local_9c;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return true;
}

// CopyThroughMapping @ 14c9bda70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::CopyThroughMapping
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FMeshIndexMappings *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  FMeshIndexMappings *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [8];
  FMeshIndexMappings *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *local_88;
  FMeshIndexMappings *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  iVar3 = *(int *)&(param_2->VertexMap).ForwardMap.field_0x28;
  puVar1 = &(param_2->VertexMap).ForwardMap.field_0x10;
  iStack_b8 = 0;
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(param_2->VertexMap).ForwardMap.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14c9bdb1e;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_b4 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_b4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_90 = (int)lVar11;
    iStack_a4 = local_90 + -1 + local_a0;
    if (iVar3 < iStack_a4) {
      iStack_a4 = iVar3;
    }
  }
LAB_14c9bdb1e:
  uVar14 = *(uint *)&(param_2->VertexMap).ForwardMap.field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_98 = *(int *)&(param_2->VertexMap).ForwardMap.field_0x8 -
              *(int *)&(param_2->VertexMap).ForwardMap.field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_78.CurrentBitIndex = iStack_a4;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_78._28_4_ = iStack_a4;
  TStack_78.BaseBitIndex = local_a0;
  uStack_58 = CONCAT44(uStack_94,iStack_98);
  local_c0 = param_2;
  local_b0 = puVar1;
  iStack_9c = iStack_a4;
  local_88 = this;
  local_80 = param_2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar10 = *(uint *)&(param_2->VertexMap).ForwardMap.field_0x28;
  if (uVar14 != uVar10) {
    puVar15 = *(undefined1 **)&(param_2->VertexMap).ForwardMap.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14c9bdc20;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_8c = (int)lVar11;
    uVar14 = local_8c + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14c9bdc20:
  while( true ) {
    pFVar6 = local_80;
    if (*(int *)&(local_80->VertexMap).ForwardMap.field_0x8 -
        *(int *)&(local_80->VertexMap).ForwardMap.field_0x34 != (int)uStack_58) {
      local_c8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    lVar11 = (longlong)TStack_78.CurrentBitIndex;
    if (((TStack_78.CurrentBitIndex == uVar14) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == param_2))
    break;
    lVar4 = *(longlong *)&(pFVar6->VertexMap).ForwardMap;
    cVar9 = (**(code **)(param_1->_padding_ + 0x48))
                      (param_1,*(undefined4 *)(lVar4 + lVar11 * 0x10),&local_50,0x10);
    if (cVar9 == '\0') {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9011337232392388428>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0xb4,"Source->CopyOut(MapVID.Key, BufferData, BufferSize)");
      if (!bVar7) {
        return false;
      }
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    uVar13 = *(uint *)(lVar4 + 4 + lVar11 * 0x10);
    uVar10 = uVar13 * 4;
    *(undefined4 *)
     (*(longlong *)
       ((local_88->AttribValues).Blocks.AllocatorInstance.Data +
       (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4) = local_50;
    *(undefined4 *)
     (*(longlong *)
       ((local_88->AttribValues).Blocks.AllocatorInstance.Data +
       (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar10 + 1 & 0x1ff) * 4) =
         local_4c;
    *(undefined4 *)
     (*(longlong *)
       ((local_88->AttribValues).Blocks.AllocatorInstance.Data +
       (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar10 + 2 & 0x1ff) * 4) =
         local_48;
    *(undefined4 *)
     (*(longlong *)
       ((local_88->AttribValues).Blocks.AllocatorInstance.Data +
       (ulonglong)((uVar13 & 0x3fffffff) >> 7) * 8) + (ulonglong)(uVar10 + 3 & 0x1ff) * 4) =
         local_44;
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return true;
}

// CopyValue @ 14c9bde90

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::CopyValue
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  TDynamicVector<float,512> *this_00;
  ulonglong uVar7;
  uint uVar8;
  
  uVar3 = param_2 * 2;
  uVar6 = (this->AttribValues).CurBlockUsed;
  uVar7 = (ulonglong)(param_1 * 2 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data +
           (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8);
  uVar4 = (this->AttribValues).CurBlock;
  uVar5 = uVar4 * 0x200 + uVar6;
  if (uVar3 == uVar5) {
    if (uVar6 == 0x200) {
      if (uVar4 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar4 = (this->AttribValues).CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar4 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar5 < uVar3) {
    TDynamicVector<float,512>::Resize(&this->AttribValues,uVar3);
    uVar6 = (this->AttribValues).CurBlockUsed;
    if (uVar6 == 0x200) {
      if ((this->AttribValues).CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar6 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data +
       (longlong)(int)(this->AttribValues).CurBlock * 8) + (longlong)(int)uVar6 * 4) =
         *(undefined4 *)(lVar2 + uVar7 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data +
       (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4) =
         *(undefined4 *)(lVar2 + uVar7 * 4);
  }
  this_00 = &this->AttribValues;
  uVar6 = uVar3 + 1;
  uVar5 = param_1 * 2 + 1;
  uVar4 = (this->AttribValues).CurBlockUsed;
  uVar7 = (ulonglong)(uVar5 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8);
  uVar5 = this_00->CurBlock;
  uVar8 = uVar5 * 0x200 + uVar4;
  if (uVar6 == uVar8) {
    if (uVar4 == 0x200) {
      if (uVar5 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar5 = this_00->CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar5 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar8 < uVar6) {
    TDynamicVector<float,512>::Resize(this_00,uVar6);
    uVar6 = (this->AttribValues).CurBlockUsed;
    if (uVar6 == 0x200) {
      if (this_00->CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(this_00);
      }
      this_00->CurBlock = this_00->CurBlock + 1;
      uVar6 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)this_00->CurBlock * 8) +
     (longlong)(int)uVar6 * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar3 + 1 & 0x1ff) * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
  }
  return;
}

// CopyValue @ 14c9be0d0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::CopyValue
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  TDynamicVector<float,512> *pTVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar4 = param_1 * 4;
  uVar10 = param_2 * 4;
  uVar6 = (this->AttribValues).CurBlockUsed;
  uVar8 = (ulonglong)(uVar4 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data +
           (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8);
  uVar3 = (this->AttribValues).CurBlock;
  uVar5 = uVar3 * 0x200 + uVar6;
  if (uVar10 == uVar5) {
    if (uVar6 == 0x200) {
      if (uVar3 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar3 = (this->AttribValues).CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar3 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *(undefined4 *)(lVar2 + uVar8 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar5 < uVar10) {
    TDynamicVector<float,512>::Resize(&this->AttribValues,uVar10);
    uVar6 = (this->AttribValues).CurBlockUsed;
    if (uVar6 == 0x200) {
      if ((this->AttribValues).CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar6 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data +
       (longlong)(int)(this->AttribValues).CurBlock * 8) + (longlong)(int)uVar6 * 4) =
         *(undefined4 *)(lVar2 + uVar8 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data +
       (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4) =
         *(undefined4 *)(lVar2 + uVar8 * 4);
  }
  pTVar7 = &this->AttribValues;
  uVar6 = uVar10 + 1;
  uVar3 = (this->AttribValues).CurBlockUsed;
  uVar8 = (ulonglong)(uVar4 + 1 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 + 1 >> 9) * 8);
  uVar5 = pTVar7->CurBlock;
  uVar9 = uVar5 * 0x200 + uVar3;
  if (uVar6 == uVar9) {
    if (uVar3 == 0x200) {
      if (uVar5 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(pTVar7);
      }
      pTVar7->CurBlock = pTVar7->CurBlock + 1;
      uVar5 = pTVar7->CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar5 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *(undefined4 *)(lVar2 + uVar8 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar9 < uVar6) {
    TDynamicVector<float,512>::Resize(pTVar7,uVar6);
    uVar6 = (this->AttribValues).CurBlockUsed;
    if (uVar6 == 0x200) {
      if (pTVar7->CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(pTVar7);
      }
      pTVar7->CurBlock = pTVar7->CurBlock + 1;
      uVar6 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)pTVar7->CurBlock * 8) +
     (longlong)(int)uVar6 * 4) = *(undefined4 *)(lVar2 + uVar8 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar10 + 1 & 0x1ff) * 4) = *(undefined4 *)(lVar2 + uVar8 * 4);
  }
  pTVar7 = &this->AttribValues;
  uVar6 = uVar10 + 2;
  uVar3 = (this->AttribValues).CurBlockUsed;
  uVar8 = (ulonglong)(uVar4 + 2 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 + 2 >> 9) * 8);
  uVar5 = pTVar7->CurBlock;
  uVar9 = uVar5 * 0x200 + uVar3;
  if (uVar6 == uVar9) {
    if (uVar3 == 0x200) {
      if (uVar5 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(pTVar7);
      }
      pTVar7->CurBlock = pTVar7->CurBlock + 1;
      uVar5 = pTVar7->CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar5 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *(undefined4 *)(lVar2 + uVar8 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar9 < uVar6) {
    TDynamicVector<float,512>::Resize(pTVar7,uVar6);
    uVar6 = (this->AttribValues).CurBlockUsed;
    if (uVar6 == 0x200) {
      if (pTVar7->CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(pTVar7);
      }
      pTVar7->CurBlock = pTVar7->CurBlock + 1;
      uVar6 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)pTVar7->CurBlock * 8) +
     (longlong)(int)uVar6 * 4) = *(undefined4 *)(lVar2 + uVar8 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar10 + 2 & 0x1ff) * 4) = *(undefined4 *)(lVar2 + uVar8 * 4);
  }
  pTVar7 = &this->AttribValues;
  uVar6 = uVar10 + 3;
  uVar3 = (this->AttribValues).CurBlockUsed;
  uVar8 = (ulonglong)(uVar4 + 3 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 + 3 >> 9) * 8);
  uVar4 = pTVar7->CurBlock;
  uVar5 = uVar4 * 0x200 + uVar3;
  if (uVar6 == uVar5) {
    if (uVar3 == 0x200) {
      if (uVar4 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(pTVar7);
      }
      pTVar7->CurBlock = pTVar7->CurBlock + 1;
      uVar4 = pTVar7->CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar4 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *(undefined4 *)(lVar2 + uVar8 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar5 < uVar6) {
    TDynamicVector<float,512>::Resize(pTVar7,uVar6);
    uVar6 = (this->AttribValues).CurBlockUsed;
    if (uVar6 == 0x200) {
      if (pTVar7->CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(pTVar7);
      }
      pTVar7->CurBlock = pTVar7->CurBlock + 1;
      uVar6 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)pTVar7->CurBlock * 8) +
     (longlong)(int)uVar6 * 4) = *(undefined4 *)(lVar2 + uVar8 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar10 + 3 & 0x1ff) * 4) = *(undefined4 *)(lVar2 + uVar8 * 4);
  }
  return;
}

// GetByteCount @ 14c9d1a60

ulong64 __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::GetByteCount
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this)

{
  return (longlong)((this->AttribValues).Blocks.ArrayNum << 9) << 2;
}

// GetByteCount @ 14c9d1a80

ulong64 __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::GetByteCount
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this)

{
  return (longlong)((this->AttribValues).Blocks.ArrayNum << 9) << 2;
}

// GetDefaultAttributeValue @ 14c9d2340

float __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::GetDefaultAttributeValue
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this)

{
  return 0.0;
}

// GetDefaultAttributeValue @ 14c9d2350

float __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::GetDefaultAttributeValue
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this)

{
  return 0.0;
}

// Initialize @ 14c9d47d0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::Initialize
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  if (this->Parent == (FDynamicMesh3 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                       ,0x9a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TDynamicVector<float,512>::Resize
            (&this->AttribValues,
             ((this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 4);
  TDynamicVector<float,512>::Fill(&this->AttribValues,local_res10);
  return;
}

// MakeCompactCopy @ 14c9d5bd0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::MakeCompactCopy
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1,
          FDynamicMesh3 *param_2)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *pTVar3;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar4;
  float local_res20 [2];
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar3 = (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *)0x0;
  }
  else {
    pTVar3 = TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>(pTVar3,param_2,true);
  }
  local_res20[0] = 0.0;
  if (pTVar3->Parent == (FDynamicMesh3 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                       ,0x9a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  TDynamicVector<float,512>::Resize
            (&pTVar3->AttribValues,
             ((pTVar3->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pTVar3->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 2);
  TDynamicVector<float,512>::Fill(&pTVar3->AttribValues,local_res20);
  CompactCopy(pTVar3,param_1,this);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pTVar3;
}

// MakeCompactCopy @ 14c9d5ca0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::MakeCompactCopy
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1,
          FDynamicMesh3 *param_2)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this_00;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar3;
  float local_res20 [2];
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00->Parent = param_2;
    (this_00->AttribValues).CurBlock = 0;
    (this_00->AttribValues).CurBlockUsed = 0;
    this_00->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_03VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    (this_00->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).Blocks.ArrayNum = 0;
    (this_00->AttribValues).Blocks.ArrayMax = 0;
    this_00->_padding_ = 0;
    TDynamicVector<float,512>::AddAllocatedBlock(&this_00->AttribValues);
    Initialize(this_00,0.0);
  }
  local_res20[0] = 0.0;
  if ((this_00->Parent == (FDynamicMesh3 *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x9a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
    return pTVar3;
  }
  TDynamicVector<float,512>::Resize
            (&this_00->AttribValues,
             ((this_00->Parent->VertexRefCounts).RefCounts.CurBlockUsed +
             (this_00->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200) * 4);
  TDynamicVector<float,512>::Fill(&this_00->AttribValues,local_res20);
  CompactCopy(this_00,param_1,this);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// MakeCopy @ 14c9d5e50

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::MakeCopy
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *pTVar1;
  
  pTVar1 = ::operator_new(0x30);
  if (pTVar1 == (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar1 = (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *)0x0;
  }
  else {
    pTVar1 = TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>(pTVar1,param_1,true);
  }
  pTVar1->_padding_ = this->_padding_;
  TDynamicVector<float,512>::operator=(&pTVar1->AttribValues,&this->AttribValues);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pTVar1;
}

// MakeCopy @ 14c9d5eb0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::MakeCopy
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this_00;
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00->Parent = param_1;
    (this_00->AttribValues).CurBlock = 0;
    (this_00->AttribValues).CurBlockUsed = 0;
    this_00->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_03VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    (this_00->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).Blocks.ArrayNum = 0;
    (this_00->AttribValues).Blocks.ArrayMax = 0;
    this_00->_padding_ = 0;
    TDynamicVector<float,512>::AddAllocatedBlock(&this_00->AttribValues);
    Initialize(this_00,0.0);
  }
  this_00->_padding_ = this->_padding_;
  TDynamicVector<float,512>::operator=(&this_00->AttribValues,&this->AttribValues);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// MakeNew @ 14c9d5fc0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::MakeNew
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *pTVar3;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar4;
  float local_res18 [4];
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar3 = (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *)0x0;
  }
  else {
    pTVar3 = TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>(pTVar3,param_1,true);
  }
  local_res18[0] = 0.0;
  if (pTVar3->Parent == (FDynamicMesh3 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                       ,0x9a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  TDynamicVector<float,512>::Resize
            (&pTVar3->AttribValues,
             ((pTVar3->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pTVar3->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 2);
  TDynamicVector<float,512>::Fill(&pTVar3->AttribValues,local_res18);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pTVar3;
}

// MakeNew @ 14c9d6060

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::MakeNew
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this_00;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar3;
  float local_res18 [4];
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00->Parent = param_1;
    (this_00->AttribValues).CurBlock = 0;
    (this_00->AttribValues).CurBlockUsed = 0;
    this_00->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_03VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    (this_00->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).Blocks.ArrayNum = 0;
    (this_00->AttribValues).Blocks.ArrayMax = 0;
    this_00->_padding_ = 0;
    TDynamicVector<float,512>::AddAllocatedBlock(&this_00->AttribValues);
    Initialize(this_00,0.0);
  }
  local_res18[0] = 0.0;
  if ((this_00->Parent == (FDynamicMesh3 *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x9a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
    return pTVar3;
  }
  TDynamicVector<float,512>::Resize
            (&this_00->AttribValues,
             ((this_00->Parent->VertexRefCounts).RefCounts.CurBlockUsed +
             (this_00->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200) * 4);
  TDynamicVector<float,512>::Fill(&this_00->AttribValues,local_res18);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// NewBlankChange @ 14c9dc8d0

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::NewBlankChange
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(0x28);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 =
         &___7__TDynamicVertexAttributeChange_M_01VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    *(undefined8 *)((longlong)TVar1 + 8) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x20) = 0;
    return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
            )in_RDX;
  }
  *in_RDX = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0;
  return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
          )in_RDX;
}

// NewBlankChange @ 14c9dc930

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::NewBlankChange
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(0x28);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 =
         &___7__TDynamicVertexAttributeChange_M_03VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    *(undefined8 *)((longlong)TVar1 + 8) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)TVar1 + 0x20) = 0;
    return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
            )in_RDX;
  }
  *in_RDX = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0;
  return (TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
          )in_RDX;
}

// OnCollapseEdge @ 14c9dce80

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::OnCollapseEdge
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,
          FEdgeCollapseInfo *param_1)

{
  (**(code **)(this->_padding_ + 0xe0))
            (param_1->CollapseT,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,
             param_1->CollapseT);
  return;
}

// OnCollapseEdge @ 14c9dceb0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::OnCollapseEdge
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,
          FEdgeCollapseInfo *param_1)

{
  (**(code **)(this->_padding_ + 0xe0))
            (param_1->CollapseT,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,
             param_1->CollapseT);
  return;
}

// OnFlipEdge @ 14c9dcef0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::OnFlipEdge
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,FEdgeFlipInfo *param_1
          )

{
  return;
}

// OnFlipEdge @ 14c9dcf00

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::OnFlipEdge
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,FEdgeFlipInfo *param_1
          )

{
  return;
}

// OnMergeEdges @ 14c9dcf20

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::OnMergeEdges
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,
          FMergeEdgesInfo *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->RemovedVerts).field0_0x0._s_0.A;
  if (iVar1 != -1) {
    iVar2 = (param_1->KeptVerts).field0_0x0._s_0.A;
    (**(code **)(this->_padding_ + 0xe0))
              (param_1->InterpolationT,iVar2,iVar2,iVar1,param_1->InterpolationT);
  }
  iVar1 = (param_1->RemovedVerts).field0_0x0._s_0.B;
  if (iVar1 != -1) {
    iVar2 = (param_1->KeptVerts).field0_0x0._s_0.B;
    (**(code **)(this->_padding_ + 0xe0))(this,iVar2,iVar2,iVar1,param_1->InterpolationT);
  }
  return;
}

// OnMergeEdges @ 14c9dcfa0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::OnMergeEdges
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,
          FMergeEdgesInfo *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->RemovedVerts).field0_0x0._s_0.A;
  if (iVar1 != -1) {
    iVar2 = (param_1->KeptVerts).field0_0x0._s_0.A;
    (**(code **)(this->_padding_ + 0xe0))
              (param_1->InterpolationT,iVar2,iVar2,iVar1,param_1->InterpolationT);
  }
  iVar1 = (param_1->RemovedVerts).field0_0x0._s_0.B;
  if (iVar1 != -1) {
    iVar2 = (param_1->KeptVerts).field0_0x0._s_0.B;
    (**(code **)(this->_padding_ + 0xe0))(this,iVar2,iVar2,iVar1,param_1->InterpolationT);
  }
  return;
}

// OnMergeVertices @ 14c9dd030

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::OnMergeVertices
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,
          FMergeVerticesInfo *param_1)

{
  (**(code **)(this->_padding_ + 0xe0))
            (param_1->InterpolationT,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,
             param_1->InterpolationT);
  return;
}

// OnMergeVertices @ 14c9dd060

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::OnMergeVertices
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,
          FMergeVerticesInfo *param_1)

{
  (**(code **)(this->_padding_ + 0xe0))
            (param_1->InterpolationT,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,
             param_1->InterpolationT);
  return;
}

// OnNewVertex @ 14c9dd1a0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::OnNewVertex
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,int param_1,
          bool param_2)

{
  undefined4 uVar1;
  
  ResizeAttribStoreIfNeeded(this,param_1);
  uVar1 = (**(code **)(this->_padding_ + 0xd8))(this);
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) + (ulonglong)(param_1 * 2 & 0x1ff) * 4) = uVar1;
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) + (ulonglong)(param_1 * 2 + 1U & 0x1ff) * 4) =
       uVar1;
  return;
}

// OnNewVertex @ 14c9dd210

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::OnNewVertex
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,int param_1,
          bool param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 * 4;
  ResizeAttribStoreIfNeeded(this,param_1);
  uVar2 = (**(code **)(this->_padding_ + 0xd8))(this);
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4) = uVar2;
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4) = uVar2;
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 + 2 & 0x1ff) * 4) = uVar2;
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data +
     (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) + (ulonglong)(uVar1 + 3 & 0x1ff) * 4) = uVar2;
  return;
}

// OnPokeTriangle @ 14c9dd300

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::OnPokeTriangle
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,
          FPokeTriangleInfo *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uStack_14;
  
  uVar1 = *(ulonglong *)&(param_1->TriVertices).field0_0x0;
  iVar2 = (param_1->TriVertices).field0_0x0._s_0.C;
  ResizeAttribStoreIfNeeded(this,param_1->NewVertex);
  uStack_14 = (undefined4)(uVar1 >> 0x20);
  (**(code **)(this->_padding_ + 0xe8))
            (this,param_1->NewVertex,uVar1 & 0xffffffff,uStack_14,iVar2,&param_1->BaryCoords);
  return;
}

// OnPokeTriangle @ 14c9dd370

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::OnPokeTriangle
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,
          FPokeTriangleInfo *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uStack_14;
  
  uVar1 = *(ulonglong *)&(param_1->TriVertices).field0_0x0;
  iVar2 = (param_1->TriVertices).field0_0x0._s_0.C;
  ResizeAttribStoreIfNeeded(this,param_1->NewVertex);
  uStack_14 = (undefined4)(uVar1 >> 0x20);
  (**(code **)(this->_padding_ + 0xe8))
            (this,param_1->NewVertex,uVar1 & 0xffffffff,uStack_14,iVar2,&param_1->BaryCoords);
  return;
}

// OnSplitEdge @ 14c9dd430

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::OnSplitEdge
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,
          FEdgeSplitInfo *param_1)

{
  ResizeAttribStoreIfNeeded(this,param_1->NewVertex);
  (**(code **)(this->_padding_ + 0xe0))
            (this,param_1->NewVertex,(param_1->OriginalVertices).field0_0x0._s_0.A,
             (param_1->OriginalVertices).field0_0x0._s_0.B,param_1->SplitT);
  return;
}

// OnSplitEdge @ 14c9dd480

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::OnSplitEdge
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,
          FEdgeSplitInfo *param_1)

{
  ResizeAttribStoreIfNeeded(this,param_1->NewVertex);
  (**(code **)(this->_padding_ + 0xe0))
            (this,param_1->NewVertex,(param_1->OriginalVertices).field0_0x0._s_0.A,
             (param_1->OriginalVertices).field0_0x0._s_0.B,param_1->SplitT);
  return;
}

// OnSplitVertex @ 14c9dd4e0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::OnSplitVertex
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,
          FVertexSplitInfo *param_1,TArrayView<int_const_,int> *param_2)

{
  CopyValue(this,param_1->OriginalVertex,param_1->NewVertex);
  return;
}

// OnSplitVertex @ 14c9dd500

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::OnSplitVertex
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,
          FVertexSplitInfo *param_1,TArrayView<int_const_,int> *param_2)

{
  CopyValue(this,param_1->OriginalVertex,param_1->NewVertex);
  return;
}

// Reparent @ 14c9dea90

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::Reparent
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  this->Parent = param_1;
  return;
}

// Reparent @ 14c9deaa0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::Reparent
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  this->Parent = param_1;
  return;
}

// ResizeAttribStoreIfNeeded @ 14c9decb0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::
ResizeAttribStoreIfNeeded
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  float local_res10 [6];
  
  if (param_1 < 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9011337232392388269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                       ,0x153,"VertexID >= 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar1 = (longlong)param_1 * 2 + 2;
    if ((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed < uVar1) {
      local_res10[0] = (float)(**(code **)(this->_padding_ + 0xd8))();
      TDynamicVector<float,512>::Resize(&this->AttribValues,(uint)uVar1,local_res10);
    }
  }
  return;
}

// ResizeAttribStoreIfNeeded @ 14c9ded50

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::
ResizeAttribStoreIfNeeded
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  float local_res10 [6];
  
  if (param_1 < 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9011337232392388269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                       ,0x153,"VertexID >= 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar1 = (longlong)param_1 * 4 + 4;
    if ((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed < uVar1) {
      local_res10[0] = (float)(**(code **)(this->_padding_ + 0xd8))();
      TDynamicVector<float,512>::Resize(&this->AttribValues,(uint)uVar1,local_res10);
    }
  }
  return;
}

// SetAttributeFromBary @ 14c9df5f0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::SetAttributeFromBary
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,int param_4,TVector<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
            (ulonglong)(param_1 * 2 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar1 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                                 (ulonglong)(param_2 * 2 & 0x1ff) * 4) *
               (param_5->field0_0x0)._s_0.X +
               (double)*(float *)(*(longlong *)
                                   (pFVar1 + (ulonglong)((param_3 & 0x7fffffffU) >> 8) * 8) +
                                 (ulonglong)(param_3 * 2 & 0x1ff) * 4) *
               (param_5->field0_0x0)._s_0.Y +
              (double)*(float *)(*(longlong *)
                                  (pFVar1 + (ulonglong)((param_4 & 0x7fffffffU) >> 8) * 8) +
                                (ulonglong)(param_4 * 2 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Z
              );
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
            (ulonglong)(param_1 * 2 + 1U & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar1 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                                 (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 4) *
               (param_5->field0_0x0)._s_0.X +
               (double)*(float *)(*(longlong *)
                                   (pFVar1 + (ulonglong)((param_3 & 0x7fffffffU) >> 8) * 8) +
                                 (ulonglong)(param_3 * 2 + 1U & 0x1ff) * 4) *
               (param_5->field0_0x0)._s_0.Y +
              (double)*(float *)(*(longlong *)
                                  (pFVar1 + (ulonglong)((param_4 & 0x7fffffffU) >> 8) * 8) +
                                (ulonglong)(param_4 * 2 + 1U & 0x1ff) * 4) *
              (param_5->field0_0x0)._s_0.Z);
  return;
}

// SetAttributeFromBary @ 14c9df770

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::SetAttributeFromBary
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,int param_4,TVector<double> *param_5)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1 * 4;
  pFVar2 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  uVar4 = param_2 * 4;
  uVar3 = param_3 * 4;
  uVar1 = param_4 * 4;
  *(float *)(*(longlong *)(pFVar2 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar5 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                                 (ulonglong)(uVar4 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.X +
               (double)*(float *)(*(longlong *)
                                   (pFVar2 + (ulonglong)((param_3 & 0x3fffffffU) >> 7) * 8) +
                                 (ulonglong)(uVar3 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Y +
              (double)*(float *)(*(longlong *)
                                  (pFVar2 + (ulonglong)((param_4 & 0x3fffffffU) >> 7) * 8) +
                                (ulonglong)(uVar1 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Z);
  pFVar2 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar2 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar5 + 1 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                                 (ulonglong)(uVar4 + 1 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.X
               + (double)*(float *)(*(longlong *)
                                     (pFVar2 + (ulonglong)((param_3 & 0x3fffffffU) >> 7) * 8) +
                                   (ulonglong)(uVar3 + 1 & 0x1ff) * 4) *
                 (param_5->field0_0x0)._s_0.Y +
              (double)*(float *)(*(longlong *)
                                  (pFVar2 + (ulonglong)((param_4 & 0x3fffffffU) >> 7) * 8) +
                                (ulonglong)(uVar1 + 1 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Z);
  pFVar2 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar2 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar5 + 2 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                                 (ulonglong)(uVar4 + 2 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.X
               + (double)*(float *)(*(longlong *)
                                     (pFVar2 + (ulonglong)((param_3 & 0x3fffffffU) >> 7) * 8) +
                                   (ulonglong)(uVar3 + 2 & 0x1ff) * 4) *
                 (param_5->field0_0x0)._s_0.Y +
              (double)*(float *)(*(longlong *)
                                  (pFVar2 + (ulonglong)((param_4 & 0x3fffffffU) >> 7) * 8) +
                                (ulonglong)(uVar1 + 2 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Z);
  pFVar2 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar2 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar5 + 3 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar2 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                                 (ulonglong)(uVar4 + 3 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.X
               + (double)*(float *)(*(longlong *)
                                     (pFVar2 + (ulonglong)((param_3 & 0x3fffffffU) >> 7) * 8) +
                                   (ulonglong)(uVar3 + 3 & 0x1ff) * 4) *
                 (param_5->field0_0x0)._s_0.Y +
              (double)*(float *)(*(longlong *)
                                  (pFVar2 + (ulonglong)((param_4 & 0x3fffffffU) >> 7) * 8) +
                                (ulonglong)(uVar1 + 3 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Z);
  return;
}

// SetAttributeFromLerp @ 14c9dfa20

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3>::SetAttributeFromLerp
          (TDynamicVertexAttribute<float,2,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,double param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  dVar2 = __real_3ff0000000000000 - param_4;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
            (ulonglong)(param_1 * 2 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar1 + (ulonglong)((param_3 & 0x7fffffffU) >> 8) * 8) +
                                 (ulonglong)(param_3 * 2 & 0x1ff) * 4) * param_4 +
              (double)*(float *)(*(longlong *)
                                  (pFVar1 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                                (ulonglong)(param_2 * 2 & 0x1ff) * 4) * dVar2);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
            (ulonglong)(param_1 * 2 + 1U & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar1 + (ulonglong)((param_3 & 0x7fffffffU) >> 8) * 8) +
                                 (ulonglong)(param_3 * 2 + 1U & 0x1ff) * 4) * param_4 +
              (double)*(float *)(*(longlong *)
                                  (pFVar1 + (ulonglong)((param_2 & 0x7fffffffU) >> 8) * 8) +
                                (ulonglong)(param_2 * 2 + 1U & 0x1ff) * 4) * dVar2);
  return;
}

// SetAttributeFromLerp @ 14c9dfb40

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3>::SetAttributeFromLerp
          (TDynamicVertexAttribute<float,4,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,double param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  
  uVar3 = param_1 * 4;
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  uVar2 = param_2 * 4;
  uVar4 = param_3 * 4;
  dVar5 = __real_3ff0000000000000 - param_4;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar3 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar1 + (ulonglong)((param_3 & 0x3fffffffU) >> 7) * 8) +
                                 (ulonglong)(uVar4 & 0x1ff) * 4) * param_4 +
              (double)*(float *)(*(longlong *)
                                  (pFVar1 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                                (ulonglong)(uVar2 & 0x1ff) * 4) * dVar5);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar3 + 1 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar1 + (ulonglong)((param_3 & 0x3fffffffU) >> 7) * 8) +
                                 (ulonglong)(uVar4 + 1 & 0x1ff) * 4) * param_4 +
              (double)*(float *)(*(longlong *)
                                  (pFVar1 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                                (ulonglong)(uVar2 + 1 & 0x1ff) * 4) * dVar5);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar3 + 2 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar1 + (ulonglong)((param_3 & 0x3fffffffU) >> 7) * 8) +
                                 (ulonglong)(uVar4 + 2 & 0x1ff) * 4) * param_4 +
              (double)*(float *)(*(longlong *)
                                  (pFVar1 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                                (ulonglong)(uVar2 + 2 & 0x1ff) * 4) * dVar5);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)((param_1 & 0x3fffffffU) >> 7) * 8) +
            (ulonglong)(uVar3 + 3 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)
                                   (pFVar1 + (ulonglong)((param_3 & 0x3fffffffU) >> 7) * 8) +
                                 (ulonglong)(uVar4 + 3 & 0x1ff) * 4) * param_4 +
              (double)*(float *)(*(longlong *)
                                  (pFVar1 + (ulonglong)((param_2 & 0x3fffffffU) >> 7) * 8) +
                                (ulonglong)(uVar2 + 3 & 0x1ff) * 4) * dVar5);
  return;
}

