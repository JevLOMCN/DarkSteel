// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FSingleInstanceDataBuffers @ 147cc5bd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSingleInstanceDataBuffers * __thiscall
FSingleInstanceDataBuffers::FSingleInstanceDataBuffers(FSingleInstanceDataBuffers *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  
  FInstanceSceneDataBuffers::FInstanceSceneDataBuffers((FInstanceSceneDataBuffers *)this);
  *(undefined8 *)this = 0x3f800000;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0x3f800000;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = 0x3f800000;
  *(undefined8 *)&this->field_0x24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)&this->field_0x2c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  TArray<FRenderBounds,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<FRenderBounds,TSizedDefaultAllocator<32>_> *)&this->field_0x48,1,Default);
  iVar4 = *(int *)&this->field_0xc0;
  if (iVar4 == *(int *)&this->field_0xc4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x430,(ForAnyElementType *)&this->field_0xb8,(int *)&this->field_0xc4);
  }
  lVar5 = (longlong)iVar4;
  *(int *)&this->field_0xc0 = iVar4 + 1;
  uVar3 = *(undefined8 *)&this->field_0x8;
  lVar2 = *(longlong *)&this->field_0xb8;
  puVar1 = (undefined8 *)(lVar2 + lVar5 * 0x30);
  *puVar1 = *(undefined8 *)this;
  puVar1[1] = uVar3;
  uVar3 = *(undefined8 *)&this->field_0x18;
  puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar5 * 0x30);
  *puVar1 = *(undefined8 *)&this->field_0x10;
  puVar1[1] = uVar3;
  uVar3 = *(undefined8 *)&this->field_0x28;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar5 * 0x30);
  *puVar1 = *(undefined8 *)&this->field_0x20;
  puVar1[1] = uVar3;
  return this;
}

// UpdateDefaultInstance @ 147d367f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSingleInstanceDataBuffers::UpdateDefaultInstance
          (FSingleInstanceDataBuffers *this,TMatrix<double> *param_1,FRenderBounds *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  FDFMatrix *pFVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined1 auStackY_108 [32];
  TVector<float>_u_0 local_d8;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  FDFMatrix local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (*(int *)&this->field_0x104 != 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                        ,0x182,L"");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  dVar4 = param_1->M[3][0];
  dVar5 = param_1->M[3][1];
  dVar6 = param_1->M[3][2];
  fVar17 = (float)dVar4;
  local_d8._s_0.Z = (float)dVar6;
  fVar18 = (float)dVar5;
  local_c8 = CONCAT44(fVar18,fVar17);
  local_b4 = (float)(dVar6 - (double)local_d8._s_0.Z);
  local_bc = CONCAT44((float)(dVar5 - (double)fVar18),(float)(dVar4 - (double)fVar17));
  *(double *)&this->field_0x30 = (double)fVar17;
  *(double *)&this->field_0x38 = (double)fVar18;
  *(double *)&this->field_0x40 = (double)local_d8._s_0.Z;
  local_d8._0_8_ = CONCAT44(fVar18,fVar17);
  local_c0 = local_d8._s_0.Z;
  pFVar15 = FDFMatrix::MakeToRelativeWorldMatrix(&local_a8,(TVector<float> *)&local_d8._s_0,param_1)
  ;
  puVar2 = &this->field_0xb8;
  puVar1 = &this->field_0xc4;
  fVar17 = (pFVar15->M).M[0][1];
  fVar18 = (pFVar15->M).M[0][2];
  *(float *)this = (pFVar15->M).M[0][0];
  *(float *)&this->field_0x4 = fVar17;
  *(float *)&this->field_0x8 = fVar18;
  fVar17 = (pFVar15->M).M[1][1];
  fVar18 = (pFVar15->M).M[1][2];
  *(float *)&this->field_0xc = (pFVar15->M).M[1][0];
  *(float *)&this->field_0x10 = fVar17;
  *(float *)&this->field_0x14 = fVar18;
  fVar17 = (pFVar15->M).M[2][1];
  fVar18 = (pFVar15->M).M[2][2];
  *(float *)&this->field_0x18 = (pFVar15->M).M[2][0];
  *(float *)&this->field_0x1c = fVar17;
  *(float *)&this->field_0x20 = fVar18;
  fVar17 = (pFVar15->M).M[3][1];
  fVar18 = (pFVar15->M).M[3][2];
  *(float *)&this->field_0x24 = (pFVar15->M).M[3][0];
  *(float *)&this->field_0x28 = fVar17;
  *(float *)&this->field_0x2c = fVar18;
  *(undefined4 *)&this->field_0xc0 = 0;
  if (*(int *)puVar1 < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,1,(ForAnyElementType *)puVar2,0,(int *)puVar1);
  }
  iVar14 = *(int *)&this->field_0xc0;
  if (iVar14 == *(int *)puVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x430,(ForAnyElementType *)puVar2,(int *)puVar1);
  }
  uVar10 = *(undefined8 *)&(param_2->Min).field0_0x0;
  uVar11 = *(undefined8 *)((longlong)&(param_2->Min).field0_0x0 + 8);
  lVar16 = (longlong)iVar14;
  uVar7 = *(undefined8 *)((longlong)&(param_2->Max).field0_0x0 + 4);
  *(int *)&this->field_0xc0 = iVar14 + 1;
  uVar12 = *(undefined8 *)&this->field_0x8;
  lVar8 = *(longlong *)puVar2;
  puVar3 = (undefined8 *)(lVar8 + lVar16 * 0x30);
  *puVar3 = *(undefined8 *)this;
  puVar3[1] = uVar12;
  uVar12 = *(undefined8 *)&this->field_0x18;
  puVar3 = (undefined8 *)(lVar8 + lVar16 * 0x30 + 0x10);
  *puVar3 = *(undefined8 *)&this->field_0x10;
  puVar3[1] = uVar12;
  uVar12 = *(undefined8 *)&this->field_0x28;
  puVar3 = (undefined8 *)(lVar8 + lVar16 * 0x30 + 0x20);
  *puVar3 = *(undefined8 *)&this->field_0x20;
  puVar3[1] = uVar12;
  if (*(int *)&this->field_0x50 < 1) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar3 = *(undefined8 **)&this->field_0x48;
  *puVar3 = uVar10;
  puVar3[1] = uVar11;
  puVar3[2] = uVar7;
  return;
}

// ~FSingleInstanceDataBuffers @ 148714130

void __thiscall
FSingleInstanceDataBuffers::~FSingleInstanceDataBuffers(FSingleInstanceDataBuffers *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x110);
  if (*(void **)&this->field_0xe8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xe8);
  }
  if (*(void **)&this->field_0xc8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xc8);
  }
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  if (*(void **)&this->field_0x88 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x88);
  }
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
    return;
  }
  return;
}

