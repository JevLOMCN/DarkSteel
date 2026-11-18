// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 91

// TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> @ 1434509c0

TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::
TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          ,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar3;
  float local_res18 [4];
  
  this->_padding_ = 0;
  this->Parent = param_1;
  (this->AttribValues).CurBlock = 0;
  (this->AttribValues).CurBlockUsed = 0;
  (this->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttribValues).Blocks.ArrayNum = 0;
  (this->AttribValues).Blocks.ArrayMax = 0;
  this->_padding_ =
       (longlong)&___7__TDynamicVertexAttribute_M_00VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
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
        pTVar3 = (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
        return pTVar3;
      }
    }
    TDynamicVector<float,512>::Resize
              (&this->AttribValues,
               (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed);
    TDynamicVector<float,512>::Fill(&this->AttribValues,local_res18);
  }
  return this;
}

// ~TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> @ 143453430

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::
~TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TDynamicVertexAttribute_M_00VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  TDynamicVector<float,512>::Empty(&this->AttribValues,0);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// ~TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> @ 143453480

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::
~TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  TDynamicVector<float,512>::Empty(&this->AttribValues,0);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// ~TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> @ 1434534d0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::
~TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ =
       (longlong)&___7__TDynamicVertexAttribute_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  TDynamicVector<double,512>::Empty(&this->AttribValues,0);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7__TDynamicAttributeBase_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  return;
}

// Append @ 143468ae0

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::Append
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_res8 [2];
  
  uVar5 = param_2->VertexOffset + param_2->NumVertex;
  if ((ulonglong)((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed) <
      (ulonglong)(longlong)(int)uVar5) {
    TDynamicVector<float,512>::Resize(&this->AttribValues,uVar5);
  }
  iVar6 = 0;
  if (0 < param_2->NumVertex) {
    do {
      cVar2 = (**(code **)(param_1->_padding_ + 0x48))(param_1,iVar6,local_res8,4);
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
         ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
       (ulonglong)(uVar5 & 0x1ff) * 4) = local_res8[0];
    } while (iVar6 < param_2->NumVertex);
  }
  return true;
}

// Append @ 143468bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Append
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStackY_68 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar2 = (param_2->VertexOffset + param_2->NumVertex) * 3;
  if ((ulonglong)((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed) <
      (ulonglong)(longlong)(int)uVar2) {
    TDynamicVector<float,512>::Resize(&this->AttribValues,uVar2);
  }
  iVar7 = 0;
  if (0 < param_2->NumVertex) {
    do {
      cVar3 = (**(code **)(param_1->_padding_ + 0x48))(param_1,iVar7,&local_38,0xc);
      if (cVar3 == '\0') {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9011337232392388407>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                           ,0xc9,"Source.CopyOut(Idx, BufferData, BufferSize)");
        if (!bVar4) {
          return false;
        }
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      iVar6 = param_2->VertexOffset + iVar7;
      iVar7 = iVar7 + 1;
      uVar2 = iVar6 * 3;
      *(undefined4 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) = local_38;
      *(undefined4 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 + 1 >> 9) * 8) +
       (ulonglong)(uVar2 + 1 & 0x1ff) * 4) = local_34;
      *(undefined4 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 + 2 >> 9) * 8) +
       (ulonglong)(uVar2 + 2 & 0x1ff) * 4) = local_30;
    } while (iVar7 < param_2->NumVertex);
  }
  return true;
}

// Append @ 143468d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::Append
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FAppendInfo *param_2)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStackY_68 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar2 = (param_2->VertexOffset + param_2->NumVertex) * 3;
  if ((ulonglong)((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed) <
      (ulonglong)(longlong)(int)uVar2) {
    TDynamicVector<double,512>::Resize(&this->AttribValues,uVar2);
  }
  iVar7 = 0;
  if (0 < param_2->NumVertex) {
    do {
      cVar3 = (**(code **)(param_1->_padding_ + 0x48))(param_1,iVar7,&local_38,0x18);
      if (cVar3 == '\0') {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_9011337232392388407>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                           ,0xc9,"Source.CopyOut(Idx, BufferData, BufferSize)");
        if (!bVar4) {
          return false;
        }
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      iVar6 = param_2->VertexOffset + iVar7;
      iVar7 = iVar7 + 1;
      uVar2 = iVar6 * 3;
      *(undefined8 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 8) = local_38;
      *(undefined8 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 + 1 >> 9) * 8) +
       (ulonglong)(uVar2 + 1 & 0x1ff) * 8) = local_30;
      *(undefined8 *)
       (*(longlong *)
         ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 + 2 >> 9) * 8) +
       (ulonglong)(uVar2 + 2 & 0x1ff) * 8) = local_28;
    } while (iVar7 < param_2->NumVertex);
  }
  return true;
}

// AppendDefaulted @ 14346af70

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::AppendDefaulted
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,FAppendInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = (**(code **)(this->_padding_ + 0xd8))();
  uVar4 = param_1->NumVertex + param_1->VertexOffset;
  uVar3 = (this->AttribValues).CurBlockUsed + (this->AttribValues).CurBlock * 0x200;
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

// AppendDefaulted @ 14346b000

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::AppendDefaulted
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,FAppendInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = (**(code **)(this->_padding_ + 0xd8))();
  uVar2 = (param_1->NumVertex + param_1->VertexOffset) * 3;
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

// AppendDefaulted @ 14346b090

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::AppendDefaulted
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,FAppendInfo *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (**(code **)(this->_padding_ + 0xd8))();
  uVar3 = (param_1->NumVertex + param_1->VertexOffset) * 3;
  uVar5 = (this->AttribValues).CurBlockUsed + (this->AttribValues).CurBlock * 0x200;
  if (uVar5 < uVar3) {
    TDynamicVector<double,512>::Resize(&this->AttribValues,uVar3);
    do {
      uVar4 = uVar5 & 0x1ff;
      uVar2 = uVar5 >> 9;
      uVar5 = uVar5 + 1;
      *(undefined8 *)
       (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)uVar2 * 8) +
       (ulonglong)uVar4 * 8) = uVar1;
    } while (uVar5 < uVar3);
  }
  return;
}

// CheckValidity @ 14347fa30

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::CheckValidity
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,bool param_1,
          EValidityCheckFailMode param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((-1 < iVar4) &&
     ((ulonglong)(longlong)iVar4 <=
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

// CheckValidity @ 14347fae0

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::CheckValidity
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,bool param_1,
          EValidityCheckFailMode param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((-1 < iVar4) &&
     ((ulonglong)((longlong)iVar4 * 3) <=
      (ulonglong)((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed))) {
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

// CheckValidity @ 14347fb90

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::CheckValidity
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,bool param_1,
          EValidityCheckFailMode param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
          (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((-1 < iVar4) &&
     ((ulonglong)((longlong)iVar4 * 3) <=
      (ulonglong)((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed))) {
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

// CompactCopy @ 14348a7e0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::CompactCopy
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1,
          TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  this->_padding_ = param_2->_padding_;
  if (((int)((param_2->AttribValues).CurBlock * 0x200 + (param_2->AttribValues).CurBlockUsed) <
       (param_1->VertMap).ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactMaps.NumVertexMappings() <= int(ToCopy.AttribValues.Num() / AttribDimension)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x88,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar5 = (longlong)(param_1->VertMap).ArrayNum;
  uVar4 = 0;
  if (0 < lVar5) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (param_1->VertMap).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = *(uint *)((param_1->VertMap).AllocatorInstance.Data + lVar6 * 4);
      if (uVar3 != 0xffffffff) {
        *(undefined4 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
         (ulonglong)(uVar3 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                ((param_2->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8
                ) + (ulonglong)(uVar4 & 0x1ff) * 4);
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar5);
  }
  return;
}

// CompactCopy @ 14348a910

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::CompactCopy
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1,
          TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  this->_padding_ = param_2->_padding_;
  if (((int)(((param_2->AttribValues).CurBlockUsed + (param_2->AttribValues).CurBlock * 0x200) / 3)
       < (param_1->VertMap).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactMaps.NumVertexMappings() <= int(ToCopy.AttribValues.Num() / AttribDimension)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x88,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar10 = (longlong)(param_1->VertMap).ArrayNum;
  uVar9 = 0;
  if (0 < lVar10) {
    lVar11 = 0;
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
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = *(int *)((param_1->VertMap).AllocatorInstance.Data + lVar11 * 4);
      if (iVar3 != -1) {
        pFVar4 = (param_2->AttribValues).Blocks.AllocatorInstance.Data;
        uVar6 = iVar3 * 3;
        uVar8 = uVar9 * 3;
        uVar1 = *(undefined4 *)
                 (*(longlong *)(pFVar4 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                 (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
        uVar2 = *(undefined4 *)
                 (*(longlong *)(pFVar4 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                 (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
        *(undefined4 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
         (ulonglong)(uVar6 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)(pFVar4 + (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 4)
        ;
        *(undefined4 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 + 1 >> 9) * 8) +
         (ulonglong)(uVar6 + 1 & 0x1ff) * 4) = uVar1;
        *(undefined4 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 + 2 >> 9) * 8) +
         (ulonglong)(uVar6 + 2 & 0x1ff) * 4) = uVar2;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < lVar10);
  }
  return;
}

// CompactCopy @ 14348aac0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::CompactCopy
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1
          ,TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  this->_padding_ = param_2->_padding_;
  if (((int)(((param_2->AttribValues).CurBlockUsed + (param_2->AttribValues).CurBlock * 0x200) / 3)
       < (param_1->VertMap).ArrayNum) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompactMaps.NumVertexMappings() <= int(ToCopy.AttribValues.Num() / AttribDimension)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x88,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar10 = (longlong)(param_1->VertMap).ArrayNum;
  uVar9 = 0;
  if (0 < lVar10) {
    lVar11 = 0;
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
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = *(int *)((param_1->VertMap).AllocatorInstance.Data + lVar11 * 4);
      if (iVar3 != -1) {
        pFVar4 = (param_2->AttribValues).Blocks.AllocatorInstance.Data;
        uVar6 = iVar3 * 3;
        uVar8 = uVar9 * 3;
        uVar1 = *(undefined8 *)
                 (*(longlong *)(pFVar4 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                 (ulonglong)(uVar8 + 1 & 0x1ff) * 8);
        uVar2 = *(undefined8 *)
                 (*(longlong *)(pFVar4 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                 (ulonglong)(uVar8 + 2 & 0x1ff) * 8);
        *(undefined8 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
         (ulonglong)(uVar6 & 0x1ff) * 8) =
             *(undefined8 *)
              (*(longlong *)(pFVar4 + (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 8)
        ;
        *(undefined8 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 + 1 >> 9) * 8) +
         (ulonglong)(uVar6 + 1 & 0x1ff) * 8) = uVar1;
        *(undefined8 *)
         (*(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 + 2 >> 9) * 8) +
         (ulonglong)(uVar6 + 2 & 0x1ff) * 8) = uVar2;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < lVar10);
  }
  return;
}

// CompactInPlace @ 143491900

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::CompactInPlace
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar12 = (longlong)(param_1->VertMap).ArrayNum;
  uVar10 = 0;
  if (0 < lVar12) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (param_1->VertMap).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = *(uint *)((param_1->VertMap).AllocatorInstance.Data + lVar9 * 4);
      if (uVar6 != 0xffffffff) {
        if ((int)uVar10 < (int)uVar6) {
          bVar5 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_9011337232392388483>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                             ,0x7d,"ToVID <= VID");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          uVar2 = (this->AttribValues).CurBlockUsed;
          uVar8 = (ulonglong)(uVar10 & 0x1ff);
          lVar3 = *(longlong *)
                   ((this->AttribValues).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar10 >> 9) * 8);
          uVar7 = (this->AttribValues).CurBlock;
          uVar11 = uVar7 * 0x200 + uVar2;
          if (uVar6 == uVar11) {
            if (uVar2 == 0x200) {
              if (uVar7 == (this->AttribValues).Blocks.ArrayNum - 1U) {
                TDynamicVector<float,512>::AddAllocatedBlock(&this->AttribValues);
              }
              (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
              uVar7 = (this->AttribValues).CurBlock;
              (this->AttribValues).CurBlockUsed = 0;
            }
            *(undefined4 *)
             (*(longlong *)
               ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar7 * 8) +
             (longlong)(int)(this->AttribValues).CurBlockUsed * 4) =
                 *(undefined4 *)(lVar3 + uVar8 * 4);
            puVar1 = &(this->AttribValues).CurBlockUsed;
            *puVar1 = *puVar1 + 1;
          }
          else if (uVar11 < uVar6) {
            TDynamicVector<float,512>::Resize(&this->AttribValues,uVar6);
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
                 *(undefined4 *)(lVar3 + uVar8 * 4);
            puVar1 = &(this->AttribValues).CurBlockUsed;
            *puVar1 = *puVar1 + 1;
          }
          else {
            *(undefined4 *)
             (*(longlong *)
               ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
             (ulonglong)(uVar6 & 0x1ff) * 4) = *(undefined4 *)(lVar3 + uVar8 * 4);
          }
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar12);
  }
  TDynamicVector<float,512>::Resize
            (&this->AttribValues,
             (this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed);
  return;
}

// CompactInPlace @ 143491b10

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::CompactInPlace
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1)

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
             ((this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 3);
  return;
}

// CompactInPlace @ 143491c30

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::CompactInPlace
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1
          )

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
  TDynamicVector<double,512>::Resize
            (&this->AttribValues,
             ((this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 3);
  return;
}

// CopyIn @ 14349b4c0

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::CopyIn
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  if (param_3 != 4) {
    return false;
  }
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
   (ulonglong)(param_1 & 0x1ff) * 4) = *(undefined4 *)param_2;
  return true;
}

// CopyIn @ 14349b4f0

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::CopyIn
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 != 0xc) {
    return false;
  }
  uVar1 = param_1 * 3;
  *(undefined4 *)
   (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8)
   + (ulonglong)(uVar1 & 0x1ff) * 4) = *(undefined4 *)param_2;
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 1 >> 9) * 8) +
   (ulonglong)(uVar1 + 1 & 0x1ff) * 4) = *(undefined4 *)((longlong)param_2 + 4);
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 2 >> 9) * 8) +
   (ulonglong)(uVar1 + 2 & 0x1ff) * 4) = *(undefined4 *)((longlong)param_2 + 8);
  return true;
}

// CopyIn @ 14349b570

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::CopyIn
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 != 0x18) {
    return false;
  }
  uVar1 = param_1 * 3;
  *(undefined8 *)
   (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8)
   + (ulonglong)(uVar1 & 0x1ff) * 8) = *(undefined8 *)param_2;
  *(undefined8 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 1 >> 9) * 8) +
   (ulonglong)(uVar1 + 1 & 0x1ff) * 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 2 >> 9) * 8) +
   (ulonglong)(uVar1 + 2 & 0x1ff) * 8) = *(undefined8 *)((longlong)param_2 + 0x10);
  return true;
}

// CopyOut @ 14349b670

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::CopyOut
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  if (param_3 != 4) {
    return false;
  }
  *(undefined4 *)param_2 =
       *(undefined4 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8)
        + (ulonglong)(param_1 & 0x1ff) * 4);
  return true;
}

// CopyOut @ 14349b6b0

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::CopyOut
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 != 0xc) {
    return false;
  }
  uVar1 = param_1 * 3;
  *(undefined4 *)param_2 =
       *(undefined4 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
        (ulonglong)(uVar1 & 0x1ff) * 4);
  *(undefined4 *)((longlong)param_2 + 4) =
       *(undefined4 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 1 >> 9) * 8) +
        (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
  *(undefined4 *)((longlong)param_2 + 8) =
       *(undefined4 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 2 >> 9) * 8) +
        (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
  return true;
}

// CopyOut @ 14349b730

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::CopyOut
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          void *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 != 0x18) {
    return false;
  }
  uVar1 = param_1 * 3;
  *(undefined8 *)param_2 =
       *(undefined8 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
        (ulonglong)(uVar1 & 0x1ff) * 8);
  *(undefined8 *)((longlong)param_2 + 8) =
       *(undefined8 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 1 >> 9) * 8) +
        (ulonglong)(uVar1 + 1 & 0x1ff) * 8);
  *(undefined8 *)((longlong)param_2 + 0x10) =
       *(undefined8 *)
        (*(longlong *)
          ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 2 >> 9) * 8) +
        (ulonglong)(uVar1 + 2 & 0x1ff) * 8);
  return true;
}

// CopyThroughMapping @ 14349ba80

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::CopyThroughMapping
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,
          TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *param_1,FMeshIndexMappings *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&(param_2->VertexMap).ForwardMap.field_0x28;
  puVar1 = &(param_2->VertexMap).ForwardMap.field_0x10;
  iVar16 = 0;
  uVar9 = 1;
  iVar14 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(param_2->VertexMap).ForwardMap.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar16;
      iVar14 = iVar14 + 0x20;
      iVar16 = iVar16 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14349bb2d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = iVar14 + -1 + (int)lVar11;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_14349bb2d:
  uVar13 = *(uint *)&(param_2->VertexMap).ForwardMap.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar9,iVar16);
  TStack_68.CurrentBitIndex = iVar10;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar10;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(param_2->VertexMap).ForwardMap.field_0x8 -
                       *(int *)&(param_2->VertexMap).ForwardMap.field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar9 = *(uint *)&(param_2->VertexMap).ForwardMap.field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(param_2->VertexMap).ForwardMap.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar16;
      uVar12 = uVar12 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14349bc31;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_14349bc31:
  while( true ) {
    if (*(int *)&(param_2->VertexMap).ForwardMap.field_0x8 -
        *(int *)&(param_2->VertexMap).ForwardMap.field_0x34 != (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    lVar11 = (longlong)TStack_68.CurrentBitIndex;
    if ((TStack_68.CurrentBitIndex == uVar13) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&(param_2->VertexMap).ForwardMap;
    cVar8 = (**(code **)(param_1->_padding_ + 0x48))
                      (param_1,*(undefined4 *)(lVar4 + lVar11 * 0x10),local_res20,4);
    if (cVar8 == '\0') {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9011337232392388428>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0xb4,"Source->CopyOut(MapVID.Key, BufferData, BufferSize)");
      if (!bVar6) {
        return false;
      }
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar9 = *(uint *)(lVar4 + 4 + lVar11 * 0x10);
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8) +
     (ulonglong)(uVar9 & 0x1ff) * 4) = local_res20[0];
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return true;
}

// CopyThroughMapping @ 14349bd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::CopyThroughMapping
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,
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
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *local_88;
  FMeshIndexMappings *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14349bdce;
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
LAB_14349bdce:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14349bed0;
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
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14349bed0:
  while( true ) {
    pFVar7 = local_80;
    if (*(int *)&(local_80->VertexMap).ForwardMap.field_0x8 -
        *(int *)&(local_80->VertexMap).ForwardMap.field_0x34 != (int)uStack_58) {
      local_c8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    lVar11 = (longlong)TStack_78.CurrentBitIndex;
    if (((TStack_78.CurrentBitIndex == uVar14) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == param_2))
    break;
    lVar5 = *(longlong *)&(pFVar7->VertexMap).ForwardMap;
    cVar10 = (**(code **)(param_1->_padding_ + 0x48))
                       (param_1,*(undefined4 *)(lVar5 + lVar11 * 0x10),&local_50,0xc);
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
    uVar13 = *(int *)(lVar5 + 4 + lVar11 * 0x10) * 3;
    *(undefined4 *)
     (*(longlong *)
       ((local_88->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8) +
     (ulonglong)(uVar13 & 0x1ff) * 4) = local_50;
    *(undefined4 *)
     (*(longlong *)
       ((local_88->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 + 1 >> 9) * 8) +
     (ulonglong)(uVar13 + 1 & 0x1ff) * 4) = local_4c;
    *(undefined4 *)
     (*(longlong *)
       ((local_88->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 + 2 >> 9) * 8) +
     (ulonglong)(uVar13 + 2 & 0x1ff) * 4) = local_48;
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return true;
}

// CopyThroughMapping @ 14349c020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::CopyThroughMapping
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
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
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  FMeshIndexMappings *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *local_98;
  FMeshIndexMappings *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  iVar3 = *(int *)&(param_2->VertexMap).ForwardMap.field_0x28;
  puVar1 = &(param_2->VertexMap).ForwardMap.field_0x10;
  iStack_c8 = 0;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(param_2->VertexMap).ForwardMap.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14349c0ce;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_c4 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_a0 = (int)lVar11;
    iStack_b4 = local_a0 + -1 + local_b0;
    if (iVar3 < iStack_b4) {
      iStack_b4 = iVar3;
    }
  }
LAB_14349c0ce:
  uVar14 = *(uint *)&(param_2->VertexMap).ForwardMap.field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_a8 = *(int *)&(param_2->VertexMap).ForwardMap.field_0x8 -
              *(int *)&(param_2->VertexMap).ForwardMap.field_0x34;
  uStack_b8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_88.CurrentBitIndex = iStack_b4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_88._28_4_ = iStack_b4;
  TStack_88.BaseBitIndex = local_b0;
  uStack_68 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = param_2;
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_98 = this;
  local_90 = param_2;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14349c1d0;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_9c = (int)lVar11;
    uVar14 = local_9c + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14349c1d0:
  while( true ) {
    pFVar7 = local_90;
    if (*(int *)&(local_90->VertexMap).ForwardMap.field_0x8 -
        *(int *)&(local_90->VertexMap).ForwardMap.field_0x34 != (int)uStack_68) {
      local_d8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    lVar11 = (longlong)TStack_88.CurrentBitIndex;
    if (((TStack_88.CurrentBitIndex == uVar14) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == param_2))
    break;
    lVar5 = *(longlong *)&(pFVar7->VertexMap).ForwardMap;
    cVar10 = (**(code **)(param_1->_padding_ + 0x48))
                       (param_1,*(undefined4 *)(lVar5 + lVar11 * 0x10),&local_60,0x18);
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
    uVar13 = *(int *)(lVar5 + 4 + lVar11 * 0x10) * 3;
    *(undefined8 *)
     (*(longlong *)
       ((local_98->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8) +
     (ulonglong)(uVar13 & 0x1ff) * 8) = local_60;
    *(undefined8 *)
     (*(longlong *)
       ((local_98->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 + 1 >> 9) * 8) +
     (ulonglong)(uVar13 + 1 & 0x1ff) * 8) = local_58;
    *(undefined8 *)
     (*(longlong *)
       ((local_98->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 + 2 >> 9) * 8) +
     (ulonglong)(uVar13 + 2 & 0x1ff) * 8) = local_50;
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return true;
}

// CopyValue @ 14349dd10

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::CopyValue
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar4 = (this->AttribValues).CurBlockUsed;
  uVar5 = (ulonglong)(param_1 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8
           );
  uVar6 = (this->AttribValues).CurBlock;
  uVar3 = uVar6 * 0x200 + uVar4;
  if (param_2 == uVar3) {
    if (uVar4 == 0x200) {
      if (uVar6 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar6 = (this->AttribValues).CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar6 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *(undefined4 *)(lVar2 + uVar5 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar3 < (uint)param_2) {
    TDynamicVector<float,512>::Resize(&this->AttribValues,param_2);
    uVar4 = (this->AttribValues).CurBlockUsed;
    if (uVar4 == 0x200) {
      if ((this->AttribValues).CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar4 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data +
       (longlong)(int)(this->AttribValues).CurBlock * 8) + (longlong)(int)uVar4 * 4) =
         *(undefined4 *)(lVar2 + uVar5 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8) +
     (ulonglong)(param_2 & 0x1ff) * 4) = *(undefined4 *)(lVar2 + uVar5 * 4);
  }
  return;
}

// CopyValue @ 14349de20

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::CopyValue
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  TDynamicVector<float,512> *pTVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = param_1 * 3;
  uVar6 = param_2 * 3;
  uVar5 = (this->AttribValues).CurBlockUsed;
  uVar7 = (ulonglong)(uVar9 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
  uVar3 = (this->AttribValues).CurBlock;
  uVar4 = uVar3 * 0x200 + uVar5;
  if (uVar6 == uVar4) {
    if (uVar5 == 0x200) {
      if (uVar3 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar3 = (this->AttribValues).CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar3 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar4 < uVar6) {
    TDynamicVector<float,512>::Resize(&this->AttribValues,uVar6);
    uVar5 = (this->AttribValues).CurBlockUsed;
    if (uVar5 == 0x200) {
      if ((this->AttribValues).CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar5 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data +
       (longlong)(int)(this->AttribValues).CurBlock * 8) + (longlong)(int)uVar5 * 4) =
         *(undefined4 *)(lVar2 + uVar7 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar6 & 0x1ff) * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
  }
  pTVar8 = &this->AttribValues;
  uVar5 = uVar6 + 1;
  uVar3 = (this->AttribValues).CurBlockUsed;
  uVar7 = (ulonglong)(uVar9 + 1 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 + 1 >> 9) * 8);
  uVar4 = pTVar8->CurBlock;
  uVar10 = uVar4 * 0x200 + uVar3;
  if (uVar5 == uVar10) {
    if (uVar3 == 0x200) {
      if (uVar4 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(pTVar8);
      }
      pTVar8->CurBlock = pTVar8->CurBlock + 1;
      uVar4 = pTVar8->CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar4 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar10 < uVar5) {
    TDynamicVector<float,512>::Resize(pTVar8,uVar5);
    uVar5 = (this->AttribValues).CurBlockUsed;
    if (uVar5 == 0x200) {
      if (pTVar8->CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(pTVar8);
      }
      pTVar8->CurBlock = pTVar8->CurBlock + 1;
      uVar5 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)pTVar8->CurBlock * 8) +
     (longlong)(int)uVar5 * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
     (ulonglong)(uVar5 & 0x1ff) * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
  }
  pTVar8 = &this->AttribValues;
  uVar6 = uVar6 + 2;
  uVar5 = (this->AttribValues).CurBlockUsed;
  uVar7 = (ulonglong)(uVar9 + 2 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 + 2 >> 9) * 8);
  uVar3 = pTVar8->CurBlock;
  uVar9 = uVar3 * 0x200 + uVar5;
  if (uVar6 == uVar9) {
    if (uVar5 == 0x200) {
      if (uVar3 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(pTVar8);
      }
      pTVar8->CurBlock = pTVar8->CurBlock + 1;
      uVar3 = pTVar8->CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar3 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar9 < uVar6) {
    TDynamicVector<float,512>::Resize(pTVar8,uVar6);
    uVar6 = (this->AttribValues).CurBlockUsed;
    if (uVar6 == 0x200) {
      if (pTVar8->CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<float,512>::AddAllocatedBlock(pTVar8);
      }
      pTVar8->CurBlock = pTVar8->CurBlock + 1;
      uVar6 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)pTVar8->CurBlock * 8) +
     (longlong)(int)uVar6 * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined4 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar6 & 0x1ff) * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
  }
  return;
}

// CopyValue @ 14349e160

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::CopyValue
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  TDynamicVector<double,512> *pTVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = param_1 * 3;
  uVar6 = param_2 * 3;
  uVar5 = (this->AttribValues).CurBlockUsed;
  uVar7 = (ulonglong)(uVar9 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8);
  uVar3 = (this->AttribValues).CurBlock;
  uVar4 = uVar3 * 0x200 + uVar5;
  if (uVar6 == uVar4) {
    if (uVar5 == 0x200) {
      if (uVar3 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar3 = (this->AttribValues).CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined8 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar3 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 8) = *(undefined8 *)(lVar2 + uVar7 * 8);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar4 < uVar6) {
    TDynamicVector<double,512>::Resize(&this->AttribValues,uVar6);
    uVar5 = (this->AttribValues).CurBlockUsed;
    if (uVar5 == 0x200) {
      if ((this->AttribValues).CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(&this->AttribValues);
      }
      (this->AttribValues).CurBlock = (this->AttribValues).CurBlock + 1;
      uVar5 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined8 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data +
       (longlong)(int)(this->AttribValues).CurBlock * 8) + (longlong)(int)uVar5 * 8) =
         *(undefined8 *)(lVar2 + uVar7 * 8);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined8 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar6 & 0x1ff) * 8) = *(undefined8 *)(lVar2 + uVar7 * 8);
  }
  pTVar8 = &this->AttribValues;
  uVar5 = uVar6 + 1;
  uVar3 = (this->AttribValues).CurBlockUsed;
  uVar7 = (ulonglong)(uVar9 + 1 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 + 1 >> 9) * 8);
  uVar4 = pTVar8->CurBlock;
  uVar10 = uVar4 * 0x200 + uVar3;
  if (uVar5 == uVar10) {
    if (uVar3 == 0x200) {
      if (uVar4 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(pTVar8);
      }
      pTVar8->CurBlock = pTVar8->CurBlock + 1;
      uVar4 = pTVar8->CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined8 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar4 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 8) = *(undefined8 *)(lVar2 + uVar7 * 8);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar10 < uVar5) {
    TDynamicVector<double,512>::Resize(pTVar8,uVar5);
    uVar5 = (this->AttribValues).CurBlockUsed;
    if (uVar5 == 0x200) {
      if (pTVar8->CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(pTVar8);
      }
      pTVar8->CurBlock = pTVar8->CurBlock + 1;
      uVar5 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined8 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)pTVar8->CurBlock * 8) +
     (longlong)(int)uVar5 * 8) = *(undefined8 *)(lVar2 + uVar7 * 8);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined8 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
     (ulonglong)(uVar5 & 0x1ff) * 8) = *(undefined8 *)(lVar2 + uVar7 * 8);
  }
  pTVar8 = &this->AttribValues;
  uVar6 = uVar6 + 2;
  uVar5 = (this->AttribValues).CurBlockUsed;
  uVar7 = (ulonglong)(uVar9 + 2 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 + 2 >> 9) * 8);
  uVar3 = pTVar8->CurBlock;
  uVar9 = uVar3 * 0x200 + uVar5;
  if (uVar6 == uVar9) {
    if (uVar5 == 0x200) {
      if (uVar3 == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(pTVar8);
      }
      pTVar8->CurBlock = pTVar8->CurBlock + 1;
      uVar3 = pTVar8->CurBlock;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined8 *)
     (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)uVar3 * 8) +
     (longlong)(int)(this->AttribValues).CurBlockUsed * 8) = *(undefined8 *)(lVar2 + uVar7 * 8);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else if (uVar9 < uVar6) {
    TDynamicVector<double,512>::Resize(pTVar8,uVar6);
    uVar6 = (this->AttribValues).CurBlockUsed;
    if (uVar6 == 0x200) {
      if (pTVar8->CurBlock == (this->AttribValues).Blocks.ArrayNum - 1U) {
        TDynamicVector<double,512>::AddAllocatedBlock(pTVar8);
      }
      pTVar8->CurBlock = pTVar8->CurBlock + 1;
      uVar6 = 0;
      (this->AttribValues).CurBlockUsed = 0;
    }
    *(undefined8 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (longlong)(int)pTVar8->CurBlock * 8) +
     (longlong)(int)uVar6 * 8) = *(undefined8 *)(lVar2 + uVar7 * 8);
    puVar1 = &(this->AttribValues).CurBlockUsed;
    *puVar1 = *puVar1 + 1;
  }
  else {
    *(undefined8 *)
     (*(longlong *)
       ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
     (ulonglong)(uVar6 & 0x1ff) * 8) = *(undefined8 *)(lVar2 + uVar7 * 8);
  }
  return;
}

// GetByteCount @ 1434bf2e0

ulong64 __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::GetByteCount
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this)

{
  return (longlong)((this->AttribValues).Blocks.ArrayNum << 9) << 2;
}

// GetByteCount @ 1434bf300

ulong64 __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::GetByteCount
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this)

{
  return (longlong)((this->AttribValues).Blocks.ArrayNum << 9) << 2;
}

// GetByteCount @ 1434bf320

ulong64 __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::GetByteCount
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this)

{
  return (longlong)((this->AttribValues).Blocks.ArrayNum << 9) << 3;
}

// GetDefaultAttributeValue @ 1434bff60

float __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::GetDefaultAttributeValue
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this)

{
  return 0.0;
}

// GetDefaultAttributeValue @ 1434bff70

float __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::GetDefaultAttributeValue
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this)

{
  return 0.0;
}

// GetDefaultAttributeValue @ 1434bff80

double __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::
GetDefaultAttributeValue(TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this)

{
  return 0.0;
}

// Initialize @ 1434cf0d0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Initialize
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,float param_1)

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
             (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 3);
  TDynamicVector<float,512>::Fill(&this->AttribValues,local_res10);
  return;
}

// Initialize @ 1434cf140

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::Initialize
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  double local_res10 [3];
  
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
  TDynamicVector<double,512>::Resize
            (&this->AttribValues,
             ((this->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 3);
  TDynamicVector<double,512>::Fill(&this->AttribValues,local_res10);
  return;
}

// IsSameAs @ 1434ebd10

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::IsSameAs
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,
          TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *param_1,bool param_2)

{
  uint uVar1;
  short sVar2;
  FDynamicMesh3 *pFVar3;
  FScriptContainerElement *pFVar4;
  FDynamicMesh3 *pFVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if (param_2) {
    pFVar3 = this->Parent;
    uVar10 = 0;
    uVar7 = (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed +
            (pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200;
    if (((uVar7 != 0) &&
        (pFVar4 = (pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar4 - 1U))) && (uVar10 = 1, 1 < (int)uVar7)) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 2);
        if ((sVar2 != 0) && (sVar2 != -1)) break;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar7);
    }
    pFVar5 = param_1->Parent;
    uVar8 = (pFVar5->VertexRefCounts).RefCounts.CurBlockUsed +
            (pFVar5->VertexRefCounts).RefCounts.CurBlock * 0x200;
    uVar11 = 0;
    if (((uVar8 != 0) &&
        (pFVar4 = (pFVar5->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar11 = 0,
        0xfffd < (ushort)(**(short **)pFVar4 - 1U))) && (uVar11 = 1, 1 < (int)uVar8)) {
      do {
        sVar2 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar11 >> 9) * 8) +
                          (ulonglong)(uVar11 & 0x1ff) * 2);
        if ((sVar2 != 0) && (sVar2 != -1)) break;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar8);
    }
joined_r0x0001434ebe7d:
    if (uVar10 != uVar7) {
      if (uVar11 == uVar8) goto LAB_1434ebf7e;
      uVar12 = uVar11;
      do {
        uVar1 = (uVar10 - uVar11) + uVar12;
        if (*(float *)(*(longlong *)
                        ((param_1->AttribValues).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4) !=
            *(float *)(*(longlong *)
                        ((this->AttribValues).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4))
        goto LAB_1434ebf7e;
        uVar12 = uVar12 + 1;
      } while ((int)(uVar12 - uVar11) < 1);
      uVar10 = uVar10 + 1;
      if ((int)uVar10 < (int)uVar7) {
        do {
          lVar6 = *(longlong *)
                   ((pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar10 >> 9) * 8);
          if ((*(short *)(lVar6 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar6 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar7);
      }
      uVar11 = uVar11 + 1;
      if ((int)uVar11 < (int)uVar8) {
        do {
          lVar6 = *(longlong *)
                   ((pFVar5->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar11 >> 9) * 8);
          if ((*(short *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 2) != -1)) break;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar8);
        pFVar3 = this->Parent;
      }
      goto joined_r0x0001434ebe7d;
    }
    bVar13 = uVar11 == uVar8;
  }
  else {
    iVar9 = (this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed;
    if (iVar9 == (param_1->AttribValues).CurBlock * 0x200 + (param_1->AttribValues).CurBlockUsed) {
      uVar10 = 0;
      if (0 < iVar9) {
        do {
          if (*(float *)(*(longlong *)
                          ((param_1->AttribValues).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4) !=
              *(float *)(*(longlong *)
                          ((this->AttribValues).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4))
          goto LAB_1434ebf7e;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar9);
      }
      bVar13 = true;
    }
    else {
LAB_1434ebf7e:
      bVar13 = false;
    }
  }
  return bVar13;
}

// IsSameAs @ 1434ebfb0

bool __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::IsSameAs
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,
          TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *param_1,bool param_2)

{
  short sVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMesh3 *pFVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if (param_2) {
    pFVar2 = this->Parent;
    uVar10 = 0;
    uVar6 = (pFVar2->VertexRefCounts).RefCounts.CurBlockUsed +
            (pFVar2->VertexRefCounts).RefCounts.CurBlock * 0x200;
    if (((uVar6 != 0) &&
        (pFVar3 = (pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
        0xfffd < (ushort)(**(short **)pFVar3 - 1U))) && (uVar10 = 1, 1 < (int)uVar6)) {
      do {
        sVar1 = *(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 2);
        if ((sVar1 != 0) && (sVar1 != -1)) break;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar6);
    }
    pFVar4 = param_1->Parent;
    uVar7 = (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed +
            (pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200;
    uVar11 = 0;
    if (((uVar7 != 0) &&
        (pFVar3 = (pFVar4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar11 = 0,
        0xfffd < (ushort)(**(short **)pFVar3 - 1U))) && (uVar11 = 1, 1 < (int)uVar7)) {
      do {
        sVar1 = *(short *)(*(longlong *)(pFVar3 + (ulonglong)(uVar11 >> 9) * 8) +
                          (ulonglong)(uVar11 & 0x1ff) * 2);
        if ((sVar1 != 0) && (sVar1 != -1)) break;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar7);
    }
joined_r0x0001434ec11e:
    if (uVar10 != uVar6) {
      if (uVar11 == uVar7) goto LAB_1434ec232;
      uVar12 = uVar11 * 3;
      do {
        uVar9 = (uVar10 - uVar11) * 3 + uVar12;
        if (*(float *)(*(longlong *)
                        ((param_1->AttribValues).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4) !=
            *(float *)(*(longlong *)
                        ((this->AttribValues).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4))
        goto LAB_1434ec232;
        uVar12 = uVar12 + 1;
      } while ((int)(uVar11 * -3 + uVar12) < 3);
      uVar10 = uVar10 + 1;
      if ((int)uVar10 < (int)uVar6) {
        do {
          lVar5 = *(longlong *)
                   ((pFVar2->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar10 >> 9) * 8);
          if ((*(short *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar5 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar6);
      }
      uVar11 = uVar11 + 1;
      if ((int)uVar11 < (int)uVar7) {
        do {
          lVar5 = *(longlong *)
                   ((pFVar4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar11 >> 9) * 8);
          if ((*(short *)(lVar5 + (ulonglong)(uVar11 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar5 + (ulonglong)(uVar11 & 0x1ff) * 2) != -1)) break;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar7);
      }
      goto joined_r0x0001434ec11e;
    }
    bVar13 = uVar11 == uVar7;
  }
  else {
    iVar8 = (this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed;
    if (iVar8 == (param_1->AttribValues).CurBlock * 0x200 + (param_1->AttribValues).CurBlockUsed) {
      uVar10 = 0;
      if (0 < iVar8) {
        do {
          if (*(float *)(*(longlong *)
                          ((param_1->AttribValues).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4) !=
              *(float *)(*(longlong *)
                          ((this->AttribValues).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar10 >> 9) * 8) + (ulonglong)(uVar10 & 0x1ff) * 4))
          goto LAB_1434ec232;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar8);
      }
      bVar13 = true;
    }
    else {
LAB_1434ec232:
      bVar13 = false;
    }
  }
  return bVar13;
}

// MakeCompactCopy @ 1434f5c20

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::MakeCompactCopy
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1,
          FDynamicMesh3 *param_2)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar3;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar4;
  float local_res20 [2];
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar3 = (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0;
  }
  else {
    pTVar3 = TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>(pTVar3,param_2,true);
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
             (pTVar3->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pTVar3->Parent->VertexRefCounts).RefCounts.CurBlockUsed);
  TDynamicVector<float,512>::Fill(&pTVar3->AttribValues,local_res20);
  CompactCopy(pTVar3,param_1,this);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pTVar3;
}

// MakeCompactCopy @ 1434f5cf0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::MakeCompactCopy
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1,
          FDynamicMesh3 *param_2)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this_00;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar3;
  float local_res20 [2];
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00->Parent = param_2;
    (this_00->AttribValues).CurBlock = 0;
    (this_00->AttribValues).CurBlockUsed = 0;
    this_00->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
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
             ((this_00->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this_00->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 3);
  TDynamicVector<float,512>::Fill(&this_00->AttribValues,local_res20);
  CompactCopy(this_00,param_1,this);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// MakeCompactCopy @ 1434f5df0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::MakeCompactCopy
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,FCompactMaps *param_1
          ,FDynamicMesh3 *param_2)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this_00;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar3;
  double local_res20;
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00->Parent = param_2;
    (this_00->AttribValues).CurBlock = 0;
    (this_00->AttribValues).CurBlockUsed = 0;
    this_00->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    (this_00->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).Blocks.ArrayNum = 0;
    (this_00->AttribValues).Blocks.ArrayMax = 0;
    this_00->_padding_ = 0;
    TDynamicVector<double,512>::AddAllocatedBlock(&this_00->AttribValues);
    Initialize(this_00,0.0);
  }
  local_res20 = 0.0;
  if ((this_00->Parent == (FDynamicMesh3 *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                         ,0x9a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
    return pTVar3;
  }
  TDynamicVector<double,512>::Resize
            (&this_00->AttribValues,
             ((this_00->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this_00->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 3);
  TDynamicVector<double,512>::Fill(&this_00->AttribValues,&local_res20);
  CompactCopy(this_00,param_1,this);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// MakeCopy @ 1434f61a0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::MakeCopy
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar1;
  
  pTVar1 = ::operator_new(0x30);
  if (pTVar1 == (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar1 = (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0;
  }
  else {
    pTVar1 = TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>(pTVar1,param_1,true);
  }
  pTVar1->_padding_ = this->_padding_;
  TDynamicVector<float,512>::operator=(&pTVar1->AttribValues,&this->AttribValues);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pTVar1;
}

// MakeCopy @ 1434f6200

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::MakeCopy
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this_00;
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00->Parent = param_1;
    (this_00->AttribValues).CurBlock = 0;
    (this_00->AttribValues).CurBlockUsed = 0;
    this_00->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
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

// MakeCopy @ 1434f6290

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::MakeCopy
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
          FDynamicMesh3 *param_1)

{
  TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this_00;
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00->Parent = param_1;
    (this_00->AttribValues).CurBlock = 0;
    (this_00->AttribValues).CurBlockUsed = 0;
    this_00->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    (this_00->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).Blocks.ArrayNum = 0;
    (this_00->AttribValues).Blocks.ArrayMax = 0;
    this_00->_padding_ = 0;
    TDynamicVector<double,512>::AddAllocatedBlock(&this_00->AttribValues);
    Initialize(this_00,0.0);
  }
  this_00->_padding_ = this->_padding_;
  TDynamicVector<double,512>::operator=(&this_00->AttribValues,&this->AttribValues);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// MakeNew @ 1434f6ad0

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::MakeNew
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *pTVar3;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar4;
  float local_res18 [4];
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar3 = (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *)0x0;
  }
  else {
    pTVar3 = TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>(pTVar3,param_1,true);
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
             (pTVar3->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pTVar3->Parent->VertexRefCounts).RefCounts.CurBlockUsed);
  TDynamicVector<float,512>::Fill(&pTVar3->AttribValues,local_res18);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pTVar3;
}

// MakeNew @ 1434f6b70

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::MakeNew
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this_00;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar3;
  float local_res18 [4];
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00->Parent = param_1;
    (this_00->AttribValues).CurBlock = 0;
    (this_00->AttribValues).CurBlockUsed = 0;
    this_00->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
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
             ((this_00->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this_00->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 3);
  TDynamicVector<float,512>::Fill(&this_00->AttribValues,local_res18);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// MakeNew @ 1434f6c40

TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::MakeNew
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
          FDynamicMesh3 *param_1)

{
  code *pcVar1;
  bool bVar2;
  TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this_00;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *pTVar3;
  double local_res18 [2];
  
  this_00 = ::operator_new(0x30);
  if (this_00 != (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *)0x0) {
    this_00->Parent = param_1;
    (this_00->AttribValues).CurBlock = 0;
    (this_00->AttribValues).CurBlockUsed = 0;
    this_00->_padding_ =
         (longlong)&___7__TDynamicVertexAttribute_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    (this_00->AttribValues).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->AttribValues).Blocks.ArrayNum = 0;
    (this_00->AttribValues).Blocks.ArrayMax = 0;
    this_00->_padding_ = 0;
    TDynamicVector<double,512>::AddAllocatedBlock(&this_00->AttribValues);
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
  TDynamicVector<double,512>::Resize
            (&this_00->AttribValues,
             ((this_00->Parent->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (this_00->Parent->VertexRefCounts).RefCounts.CurBlockUsed) * 3);
  TDynamicVector<double,512>::Fill(&this_00->AttribValues,local_res18);
  return (TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this_00;
}

// NewBlankChange @ 1434fb810

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::NewBlankChange
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(0x28);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 =
         &___7__TDynamicVertexAttributeChange_M_00VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
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

// NewBlankChange @ 1434fb870

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::NewBlankChange
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(0x28);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 =
         &___7__TDynamicVertexAttributeChange_M_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
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

// NewBlankChange @ 1434fb8d0

TUniquePtr<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>_>_>
 __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::NewBlankChange
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this)

{
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> TVar1;
  TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3> *in_RDX;
  
  TVar1 = (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)::operator_new(0x28);
  if (TVar1 != (TDynamicAttributeChangeBase<UE::Geometry::FDynamicMesh3>)0x0) {
    *in_RDX = TVar1;
    *(undefined ***)TVar1 =
         &___7__TDynamicVertexAttributeChange_N_02VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
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

// OnCollapseEdge @ 143500730

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::OnCollapseEdge
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,
          FEdgeCollapseInfo *param_1)

{
  (**(code **)(this->_padding_ + 0xe0))
            (param_1->CollapseT,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,
             param_1->CollapseT);
  return;
}

// OnCollapseEdge @ 143500760

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::OnCollapseEdge
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,
          FEdgeCollapseInfo *param_1)

{
  (**(code **)(this->_padding_ + 0xe0))
            (param_1->CollapseT,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,
             param_1->CollapseT);
  return;
}

// OnCollapseEdge @ 143500790

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::OnCollapseEdge
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
          FEdgeCollapseInfo *param_1)

{
  (**(code **)(this->_padding_ + 0xe0))
            (param_1->CollapseT,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,
             param_1->CollapseT);
  return;
}

// OnFlipEdge @ 1435043a0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::OnFlipEdge
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,FEdgeFlipInfo *param_1
          )

{
  return;
}

// OnFlipEdge @ 1435043b0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::OnFlipEdge
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,FEdgeFlipInfo *param_1
          )

{
  return;
}

// OnFlipEdge @ 1435043c0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::OnFlipEdge
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
          FEdgeFlipInfo *param_1)

{
  return;
}

// OnMergeEdges @ 143506b10

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::OnMergeEdges
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,
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

// OnMergeEdges @ 143506b90

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::OnMergeEdges
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,
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

// OnMergeEdges @ 143506c10

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::OnMergeEdges
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
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

// OnMergeVertices @ 143508790

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::OnMergeVertices
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,
          FMergeVerticesInfo *param_1)

{
  (**(code **)(this->_padding_ + 0xe0))
            (param_1->InterpolationT,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,
             param_1->InterpolationT);
  return;
}

// OnMergeVertices @ 1435087c0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::OnMergeVertices
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,
          FMergeVerticesInfo *param_1)

{
  (**(code **)(this->_padding_ + 0xe0))
            (param_1->InterpolationT,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,
             param_1->InterpolationT);
  return;
}

// OnMergeVertices @ 1435087f0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::OnMergeVertices
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
          FMergeVerticesInfo *param_1)

{
  (**(code **)(this->_padding_ + 0xe0))
            (param_1->InterpolationT,param_1->KeptVertex,param_1->KeptVertex,param_1->RemovedVertex,
             param_1->InterpolationT);
  return;
}

// OnNewVertex @ 143509000

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::OnNewVertex
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,int param_1,
          bool param_2)

{
  undefined4 uVar1;
  
  ResizeAttribStoreIfNeeded(this,param_1);
  uVar1 = (**(code **)(this->_padding_ + 0xd8))(this);
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8) +
   (ulonglong)(param_1 & 0x1ff) * 4) = uVar1;
  return;
}

// OnNewVertex @ 143509050

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::OnNewVertex
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          bool param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  ResizeAttribStoreIfNeeded(this,param_1);
  uVar2 = (**(code **)(this->_padding_ + 0xd8))(this);
  uVar1 = param_1 * 3;
  *(undefined4 *)
   (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8)
   + (ulonglong)(uVar1 & 0x1ff) * 4) = uVar2;
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 1 >> 9) * 8) +
   (ulonglong)(uVar1 + 1 & 0x1ff) * 4) = uVar2;
  *(undefined4 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 2 >> 9) * 8) +
   (ulonglong)(uVar1 + 2 & 0x1ff) * 4) = uVar2;
  return;
}

// OnNewVertex @ 1435090e0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::OnNewVertex
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          bool param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  ResizeAttribStoreIfNeeded(this,param_1);
  uVar2 = (**(code **)(this->_padding_ + 0xd8))(this);
  uVar1 = param_1 * 3;
  *(undefined8 *)
   (*(longlong *)((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8)
   + (ulonglong)(uVar1 & 0x1ff) * 8) = uVar2;
  *(undefined8 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 1 >> 9) * 8) +
   (ulonglong)(uVar1 + 1 & 0x1ff) * 8) = uVar2;
  *(undefined8 *)
   (*(longlong *)
     ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 + 2 >> 9) * 8) +
   (ulonglong)(uVar1 + 2 & 0x1ff) * 8) = uVar2;
  return;
}

// OnPokeTriangle @ 14350b120

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::OnPokeTriangle
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,
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

// OnPokeTriangle @ 14350b190

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::OnPokeTriangle
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,
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

// OnPokeTriangle @ 14350b200

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::OnPokeTriangle
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
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

// OnSplitEdge @ 143511b20

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::OnSplitEdge
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,
          FEdgeSplitInfo *param_1)

{
  ResizeAttribStoreIfNeeded(this,param_1->NewVertex);
  (**(code **)(this->_padding_ + 0xe0))
            (this,param_1->NewVertex,(param_1->OriginalVertices).field0_0x0._s_0.A,
             (param_1->OriginalVertices).field0_0x0._s_0.B,param_1->SplitT);
  return;
}

// OnSplitEdge @ 143511b70

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::OnSplitEdge
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,
          FEdgeSplitInfo *param_1)

{
  ResizeAttribStoreIfNeeded(this,param_1->NewVertex);
  (**(code **)(this->_padding_ + 0xe0))
            (this,param_1->NewVertex,(param_1->OriginalVertices).field0_0x0._s_0.A,
             (param_1->OriginalVertices).field0_0x0._s_0.B,param_1->SplitT);
  return;
}

// OnSplitEdge @ 143511bc0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::OnSplitEdge
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
          FEdgeSplitInfo *param_1)

{
  ResizeAttribStoreIfNeeded(this,param_1->NewVertex);
  (**(code **)(this->_padding_ + 0xe0))
            (this,param_1->NewVertex,(param_1->OriginalVertices).field0_0x0._s_0.A,
             (param_1->OriginalVertices).field0_0x0._s_0.B,param_1->SplitT);
  return;
}

// OnSplitVertex @ 143513bd0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::OnSplitVertex
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,
          FVertexSplitInfo *param_1,TArrayView<int_const_,int> *param_2)

{
  CopyValue(this,param_1->OriginalVertex,param_1->NewVertex);
  return;
}

// OnSplitVertex @ 143513bf0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::OnSplitVertex
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,
          FVertexSplitInfo *param_1,TArrayView<int_const_,int> *param_2)

{
  CopyValue(this,param_1->OriginalVertex,param_1->NewVertex);
  return;
}

// OnSplitVertex @ 143513c10

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::OnSplitVertex
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
          FVertexSplitInfo *param_1,TArrayView<int_const_,int> *param_2)

{
  CopyValue(this,param_1->OriginalVertex,param_1->NewVertex);
  return;
}

// Reparent @ 143518120

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::Reparent
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  this->Parent = param_1;
  return;
}

// Reparent @ 143518130

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Reparent
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1
          )

{
  this->Parent = param_1;
  return;
}

// Reparent @ 143518140

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::Reparent
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,
          FDynamicMesh3 *param_1)

{
  this->Parent = param_1;
  return;
}

// ResizeAttribStoreIfNeeded @ 143519e10

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::
ResizeAttribStoreIfNeeded
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float local_res10 [6];
  
  if (param_1 < 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9011337232392388269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                       ,0x153,"VertexID >= 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((ulonglong)((this->AttribValues).CurBlockUsed + (this->AttribValues).CurBlock * 0x200) <
           (longlong)param_1 + 1U) {
    local_res10[0] = (float)(**(code **)(this->_padding_ + 0xd8))();
    TDynamicVector<float,512>::Resize
              (&this->AttribValues,(uint)((longlong)param_1 + 1U),local_res10);
  }
  return;
}

// ResizeAttribStoreIfNeeded @ 143519eb0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::
ResizeAttribStoreIfNeeded
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  float local_res10 [6];
  
  if (param_1 < 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9011337232392388269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                       ,0x153,"VertexID >= 0");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    uVar2 = ((longlong)param_1 + 1) * 3;
    if ((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed < uVar2) {
      local_res10[0] = (float)(**(code **)(this->_padding_ + 0xd8))();
      TDynamicVector<float,512>::Resize(&this->AttribValues,(uint)uVar2,local_res10);
    }
  }
  return;
}

// ResizeAttribStoreIfNeeded @ 143519f50

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::
ResizeAttribStoreIfNeeded
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,int param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  double local_res18 [2];
  
  if (param_1 < 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9011337232392388269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicMesh\\DynamicVertexAttribute.h"
                       ,0x153,"VertexID >= 0");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    uVar2 = ((longlong)param_1 + 1) * 3;
    if ((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed < uVar2) {
      local_res18[0] = (double)(**(code **)(this->_padding_ + 0xd8))();
      TDynamicVector<double,512>::Resize(&this->AttribValues,(uint)uVar2,local_res18);
    }
  }
  return;
}

// Serialize @ 1435288e0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::Serialize
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,FArchive *param_1,
          FCompactMaps *param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool local_res20 [8];
  TDynamicVector<float,512> local_48;
  
  local_res20[0] = param_3;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::Serialize
            ((TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar3 < 0x38)) {
    TDynamicVector<float,512>::Serialize<0,0>(&this->AttribValues,param_1);
    return;
  }
  ::operator<<(param_1,local_res20);
  if ((param_2 == (FCompactMaps *)0x0) || ((param_2->VertMap).ArrayNum == 0)) {
    if (local_res20[0] != false) {
      TDynamicVector<float,512>::Serialize<1,1>(&this->AttribValues,param_1);
      return;
    }
    TDynamicVector<float,512>::Serialize<1,0>(&this->AttribValues,param_1);
  }
  else {
    iVar3 = 0;
    local_48.CurBlock = 0;
    local_48.CurBlockUsed = 0;
    local_48.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Blocks.ArrayNum = 0;
    local_48.Blocks.ArrayMax = 0;
    TDynamicVector<float,512>::AddAllocatedBlock(&local_48);
    TDynamicVector<float,512>::Resize(&local_48,(this->Parent->VertexRefCounts).UsedCount * 3);
    uVar7 = ((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed) / 3;
    if (uVar7 != 0) {
      uVar6 = 2;
      do {
        iVar4 = FCompactMaps::GetVertexMapping(param_2,iVar3);
        if (iVar4 != -1) {
          uVar1 = iVar3 * 3;
          *(undefined4 *)
           (*(longlong *)(local_48.Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 - 2 >> 9) * 8)
           + (ulonglong)(uVar6 - 2 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)
                  ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8)
                + (ulonglong)(uVar1 & 0x1ff) * 4);
          *(undefined4 *)
           (*(longlong *)(local_48.Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 - 1 >> 9) * 8)
           + (ulonglong)(uVar6 - 1 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)
                  ((this->AttribValues).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar1 + 1 >> 9) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 4);
          uVar5 = uVar6 & 0x1ff;
          uVar2 = uVar6 >> 9;
          uVar6 = uVar6 + 3;
          *(undefined4 *)
           (*(longlong *)(local_48.Blocks.AllocatorInstance.Data + (ulonglong)uVar2 * 8) +
           (ulonglong)uVar5 * 4) =
               *(undefined4 *)
                (*(longlong *)
                  ((this->AttribValues).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar1 + 2 >> 9) * 8) + (ulonglong)(uVar1 + 2 & 0x1ff) * 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar7);
    }
    if (local_res20[0] == false) {
      TDynamicVector<float,512>::Serialize<1,0>(&local_48,param_1);
    }
    else {
      TDynamicVector<float,512>::Serialize<1,1>(&local_48,param_1);
    }
    TDynamicVector<float,512>::Empty(&local_48,0);
    if (local_48.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Blocks.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// Serialize @ 143528b30

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::Serialize
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,FArchive *param_1,
          FCompactMaps *param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool local_res20 [8];
  TDynamicVector<double,512> local_48;
  
  local_res20[0] = param_3;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::Serialize
            ((TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar3 < 0x38)) {
    TDynamicVector<double,512>::Serialize<0,0>(&this->AttribValues,param_1);
    return;
  }
  ::operator<<(param_1,local_res20);
  if ((param_2 == (FCompactMaps *)0x0) || ((param_2->VertMap).ArrayNum == 0)) {
    if (local_res20[0] != false) {
      TDynamicVector<double,512>::Serialize<1,1>(&this->AttribValues,param_1);
      return;
    }
    TDynamicVector<double,512>::Serialize<1,0>(&this->AttribValues,param_1);
  }
  else {
    iVar3 = 0;
    local_48.CurBlock = 0;
    local_48.CurBlockUsed = 0;
    local_48.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Blocks.ArrayNum = 0;
    local_48.Blocks.ArrayMax = 0;
    TDynamicVector<double,512>::AddAllocatedBlock(&local_48);
    TDynamicVector<double,512>::Resize(&local_48,(this->Parent->VertexRefCounts).UsedCount * 3);
    uVar7 = ((this->AttribValues).CurBlock * 0x200 + (this->AttribValues).CurBlockUsed) / 3;
    if (uVar7 != 0) {
      uVar6 = 2;
      do {
        iVar4 = FCompactMaps::GetVertexMapping(param_2,iVar3);
        if (iVar4 != -1) {
          uVar1 = iVar3 * 3;
          *(undefined8 *)
           (*(longlong *)(local_48.Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 - 2 >> 9) * 8)
           + (ulonglong)(uVar6 - 2 & 0x1ff) * 8) =
               *(undefined8 *)
                (*(longlong *)
                  ((this->AttribValues).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8)
                + (ulonglong)(uVar1 & 0x1ff) * 8);
          *(undefined8 *)
           (*(longlong *)(local_48.Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 - 1 >> 9) * 8)
           + (ulonglong)(uVar6 - 1 & 0x1ff) * 8) =
               *(undefined8 *)
                (*(longlong *)
                  ((this->AttribValues).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar1 + 1 >> 9) * 8) + (ulonglong)(uVar1 + 1 & 0x1ff) * 8);
          uVar5 = uVar6 & 0x1ff;
          uVar2 = uVar6 >> 9;
          uVar6 = uVar6 + 3;
          *(undefined8 *)
           (*(longlong *)(local_48.Blocks.AllocatorInstance.Data + (ulonglong)uVar2 * 8) +
           (ulonglong)uVar5 * 8) =
               *(undefined8 *)
                (*(longlong *)
                  ((this->AttribValues).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar1 + 2 >> 9) * 8) + (ulonglong)(uVar1 + 2 & 0x1ff) * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar7);
    }
    if (local_res20[0] == false) {
      TDynamicVector<double,512>::Serialize<1,0>(&local_48,param_1);
    }
    else {
      TDynamicVector<double,512>::Serialize<1,1>(&local_48,param_1);
    }
    TDynamicVector<double,512>::Empty(&local_48,0);
    if (local_48.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Blocks.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// SetAttributeFromBary @ 14352b500

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::SetAttributeFromBary
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,int param_4,TVector<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)((uint)param_1 >> 9) * 8) +
            (ulonglong)(param_1 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)((uint)param_3 >> 9) * 8) +
                                 (ulonglong)(param_3 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Y +
               (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)((uint)param_2 >> 9) * 8) +
                                 (ulonglong)(param_2 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.X +
              (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)((uint)param_4 >> 9) * 8) +
                                (ulonglong)(param_4 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Z);
  return;
}

// SetAttributeFromBary @ 14352b5a0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::SetAttributeFromBary
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,int param_4,TVector<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_1 * 3;
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  uVar3 = param_2 * 3;
  uVar4 = param_3 * 3;
  uVar5 = param_4 * 3;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar4 >> 9) * 8) +
                                 (ulonglong)(uVar4 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Y +
               (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar3 >> 9) * 8) +
                                 (ulonglong)(uVar3 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.X +
              (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar5 >> 9) * 8) +
                                (ulonglong)(uVar5 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Z);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
            (ulonglong)(uVar2 + 1 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar3 + 1 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.X
               + (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                                   (ulonglong)(uVar4 + 1 & 0x1ff) * 4) *
                 (param_5->field0_0x0)._s_0.Y +
              (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                                (ulonglong)(uVar5 + 1 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Z);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
            (ulonglong)(uVar2 + 2 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar3 + 2 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.X
               + (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                                   (ulonglong)(uVar4 + 2 & 0x1ff) * 4) *
                 (param_5->field0_0x0)._s_0.Y +
              (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                                (ulonglong)(uVar5 + 2 & 0x1ff) * 4) * (param_5->field0_0x0)._s_0.Z);
  return;
}

// SetAttributeFromBary @ 14352b7a0

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::SetAttributeFromBary
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,int param_4,TVector<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_1 * 3;
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  uVar3 = param_2 * 3;
  uVar4 = param_3 * 3;
  uVar5 = param_4 * 3;
  *(double *)(*(longlong *)(pFVar1 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 8)
       = *(double *)
          (*(longlong *)(pFVar1 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 8) *
         (param_5->field0_0x0)._s_0.Y +
         *(double *)
          (*(longlong *)(pFVar1 + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 8) *
         (param_5->field0_0x0)._s_0.X +
         *(double *)
          (*(longlong *)(pFVar1 + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 8) *
         (param_5->field0_0x0)._s_0.Z;
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(double *)
   (*(longlong *)(pFVar1 + (ulonglong)(uVar2 + 1 >> 9) * 8) + (ulonglong)(uVar2 + 1 & 0x1ff) * 8) =
       *(double *)
        (*(longlong *)(pFVar1 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
        (ulonglong)(uVar3 + 1 & 0x1ff) * 8) * (param_5->field0_0x0)._s_0.X +
       *(double *)
        (*(longlong *)(pFVar1 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
        (ulonglong)(uVar4 + 1 & 0x1ff) * 8) * (param_5->field0_0x0)._s_0.Y +
       *(double *)
        (*(longlong *)(pFVar1 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
        (ulonglong)(uVar5 + 1 & 0x1ff) * 8) * (param_5->field0_0x0)._s_0.Z;
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(double *)
   (*(longlong *)(pFVar1 + (ulonglong)(uVar2 + 2 >> 9) * 8) + (ulonglong)(uVar2 + 2 & 0x1ff) * 8) =
       *(double *)
        (*(longlong *)(pFVar1 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
        (ulonglong)(uVar3 + 2 & 0x1ff) * 8) * (param_5->field0_0x0)._s_0.X +
       *(double *)
        (*(longlong *)(pFVar1 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
        (ulonglong)(uVar4 + 2 & 0x1ff) * 8) * (param_5->field0_0x0)._s_0.Y +
       *(double *)
        (*(longlong *)(pFVar1 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
        (ulonglong)(uVar5 + 2 & 0x1ff) * 8) * (param_5->field0_0x0)._s_0.Z;
  return;
}

// SetAttributeFromLerp @ 14352b980

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>::SetAttributeFromLerp
          (TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,double param_4)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)((uint)param_1 >> 9) * 8) +
            (ulonglong)(param_1 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)((uint)param_2 >> 9) * 8) +
                                 (ulonglong)(param_2 & 0x1ff) * 4) *
               (__real_3ff0000000000000 - param_4) +
              (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)((uint)param_3 >> 9) * 8) +
                                (ulonglong)(param_3 & 0x1ff) * 4) * param_4);
  return;
}

// SetAttributeFromLerp @ 14352ba00

void __thiscall
UE::Geometry::TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3>::SetAttributeFromLerp
          (TDynamicVertexAttribute<float,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,double param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  
  uVar2 = param_1 * 3;
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  uVar3 = param_3 * 3;
  uVar4 = param_2 * 3;
  dVar5 = __real_3ff0000000000000 - param_4;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar3 >> 9) * 8) +
                                 (ulonglong)(uVar3 & 0x1ff) * 4) * param_4 +
              (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar4 >> 9) * 8) +
                                (ulonglong)(uVar4 & 0x1ff) * 4) * dVar5);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
            (ulonglong)(uVar2 + 1 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar3 + 1 & 0x1ff) * 4) * param_4 +
              (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                                (ulonglong)(uVar4 + 1 & 0x1ff) * 4) * dVar5);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
            (ulonglong)(uVar2 + 2 & 0x1ff) * 4) =
       (float)((double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                                 (ulonglong)(uVar3 + 2 & 0x1ff) * 4) * param_4 +
              (double)*(float *)(*(longlong *)(pFVar1 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                                (ulonglong)(uVar4 + 2 & 0x1ff) * 4) * dVar5);
  return;
}

// SetAttributeFromLerp @ 14352bb70

void __thiscall
UE::Geometry::TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3>::SetAttributeFromLerp
          (TDynamicVertexAttribute<double,3,UE::Geometry::FDynamicMesh3> *this,int param_1,
          int param_2,int param_3,double param_4)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  
  uVar2 = param_1 * 3;
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  uVar3 = param_3 * 3;
  uVar4 = param_2 * 3;
  dVar5 = __real_3ff0000000000000 - param_4;
  *(double *)(*(longlong *)(pFVar1 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 8)
       = param_4 * *(double *)
                    (*(longlong *)(pFVar1 + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 8) +
         dVar5 * *(double *)
                  (*(longlong *)(pFVar1 + (ulonglong)(uVar4 >> 9) * 8) +
                  (ulonglong)(uVar4 & 0x1ff) * 8);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(double *)
   (*(longlong *)(pFVar1 + (ulonglong)(uVar2 + 1 >> 9) * 8) + (ulonglong)(uVar2 + 1 & 0x1ff) * 8) =
       param_4 * *(double *)
                  (*(longlong *)(pFVar1 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                  (ulonglong)(uVar3 + 1 & 0x1ff) * 8) +
       dVar5 * *(double *)
                (*(longlong *)(pFVar1 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                (ulonglong)(uVar4 + 1 & 0x1ff) * 8);
  pFVar1 = (this->AttribValues).Blocks.AllocatorInstance.Data;
  *(double *)
   (*(longlong *)(pFVar1 + (ulonglong)(uVar2 + 2 >> 9) * 8) + (ulonglong)(uVar2 + 2 & 0x1ff) * 8) =
       param_4 * *(double *)
                  (*(longlong *)(pFVar1 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                  (ulonglong)(uVar3 + 2 & 0x1ff) * 8) +
       dVar5 * *(double *)
                (*(longlong *)(pFVar1 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                (ulonglong)(uVar4 + 2 & 0x1ff) * 8);
  return;
}

